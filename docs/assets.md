# Assets: models, textures, motions, sound effects

What the disc files and the executable tell us about the game's assets. Addresses are for the executable linked at `0x0C010000`; file offsets are into the disc file named. Nothing here is game data: names, offsets, sizes and structure only.

## The archives

`POL.AFS`, `TEX.AFS`, `MOT.AFS` and the others are plain AFS archives (`AFS\0`, a count, then an `offset, size` pair per entry). The executable lists them in a table of 8-byte entries at `0x0C20A6E8`: a pointer to the file name, then one word. Observed: `MOT.AFS` `0x013F0001`, `SND.AFS` `0x00160002`, `SCR.AFS` `0x005D0003`, `POL.AFS` `0x005D0004`, then `TEX.AFS` with `0xFFFFFFFF`. For `SCR` and `POL` the high half (`0x5D`, 93) is the entry count on disc. What the low half and the `TEX` word mean is not worked out.

## Models: `POL.AFS`

93 entries, one model set each (stage pieces, shared objects). A model is the NAOMI library's flat format (the one `nl*` functions draw): a 24-byte header, then records (a `0x50`-byte header with the texture number at `+0x20` and the strip data length at `+0x4C`), ending in a zero word. `tools/3-assets/model_map.py` finds 14,434 models in the file and lists them in `model-map/game.dcgs`.

### The name directory

Each set has a directory in the executable: 16-byte entries `{ name pointer, offset in the entry, size, 3 }`, sorted by name. The entry-3 directory starts at `0x0C11AD7C` and holds 608 names. They match the 608 models the map finds in that entry one to one (offset and size). Names are the game's own labels. By first word: `eff_` 247, `zonb_` 64, `zona_` 49, `zonc_` 41, `kou_` 36, `zond_` 33, `st_` 26, `hyo_` 21, `ssmoke_` 20, `buki_` 19, `tek_` 13, `asc_` 11, `gun_` 9, `coli_` 6.

All 608 are named in `models.txt` (`name POL.AFS <offset> <label>`, offset = entry start `0x2A4000` plus the directory's offset). The same directory shape repeats for the other entries (five copies of the weapon names in the executable, one per set that holds them); the other 92 entries are not named yet.

### Weapons (entry 3)

The `buki_` models are the weapons: `handgun1` (`+0x8040`, 5,104 bytes), `machinegun1` (`+0xAC00`), `shotgun` (`+0xF360`), `handg_tama` (bullet, `+0x7A40`), `handg_yakkyo` (casing, `+0x7CC0`), `shotshell` (`+0x111C0`), magazines, and `magapika001a` to `004a`. The muzzle flashes are the `gun_` models (`gun_flash0` at `+0x473A0`, `gun_flash1` at `+0x47740`, `gun_flash2` at `+0x47C40`). The flat records read cleanly and look like the weapons when drawn (handgun 108 triangles, machine gun 120, shotgun 166). In units of about 10 cm the pistol is 2.1 long; the barrel runs along the model's z, the height along y.

Shapes (model units, 10 per metre): `handg_tama` is not a slug but a bullet tracer, a thin pyramid 10.5 long along its z (0 to +10.5) and 0.2 wide. `handg_yakkyo` (the casing) is 0.6 long and `shotshell` 1.5. In the guns the barrel runs along -z (the muzzle at the low z end) and the grip is at the high z end, hanging down (-y): the pistol's grip centres near (0, -1.1, 1.0), the submachine gun's near (0, -1.0, 0.7), the shotgun's near (0, -0.2, 2.8).

Texture numbers in the records: handgun 13, machine gun 27, shotgun 26, shotshell 116.

## Textures: `TEX.AFS`

93 entries, one per `POL.AFS` entry. Each holds a run of `PRESSEDPVRFORMAT` blocks: a 16-byte tag, then a PRS stream that decompresses to a GBIX header (12 bytes) and a PVRT chunk. Entry 3 has 216 blocks (the weapons' are 128x128, RGB565, VQ without mipmaps; the shotshell's is 32x64, data type 13).

Pairing: a model in `POL.AFS` entry i takes texture number n from the n-th block of `TEX.AFS` entry i. In 92 of the 93 entries the highest texture number any model uses is the block count minus one (entry 0: 291 of 292 blocks, entry 3: 215 of 216). The pairing is not a rule in `models.txt` yet: `textures` rules pair whole files, and this needs a per-entry form.

## Motions: `MOT.AFS`

One entry on disc: 5,142,579 bytes at `0x80000`. No tag or header structure; mostly 16-bit values (about 20% zeros). None of the skill's motion readers finds a motion in it (V format, 16-bit Euler keys, Ninja `NMDM`, Ninja memory images). The executable has a motion debug screen (strings `nMOTION_NUM`, `MOTION MAIN`, `MOTION SUB`, `Motion play`, `Joint Move`, around `0x0C0C1800` to `0x0C0C1BB0`, code not named yet), so motions are keyframed joint rotations. Its loader, its index (the game's table says 319 for `MOT.AFS`, and no 319-entry offset table was found in the executable) and the characters' bone tree are not found. Reading the motion player is the way to the skeletons.

Characters, skeletons and textures on them stay open: Shuriken shows Zombie Revenge's skeletons and its textured models as not found.

## Sound effects: `SND.AFS`

`DPETC/DP2SOUND.MLT` (Sega's `SMLT` multi bank, 29 sound-effect slots) is not the game's: it is byte-identical on other discs that carry the browser files (MD5 `bb0b71c7...`), part of the browser files in `DPETC`. Its 29 effects are not gunfire or anything of the game's.

The game's sounds are in `SND.AFS` (319 entries, 132 MB):

| Entries | What |
|---|---|
| 0 | The AICA sound driver program, 59,264 bytes (`AM2/AICAsoundDrv990920/Ver1.76`) |
| 1 to 302 | ADX streams (music and long voices) |
| 303 to 311 | Nine `DTPK` sound packs (the AM2 driver's format), 1,317,422 / 516,900 / 326,828 / 323,704 / 182,008 / 251,564 / 42,888 / 81,872 / 195,696 bytes |
| 312 to 318 | Small tables (56,320 bytes; 4,224 bytes x4; 19,200 bytes x2), not read |

Entry 303 holds 207 samples in 15 banks (203 4-bit ADPCM, 4 PCM16), entry 304 holds 75 (53 ADPCM, 21 PCM16). Which sample is which weapon is not decided: by shape alone (sharp attack, quick fall, noisy), entry 303's samples 0, 14, 39, 111, 151, 152, 186 and 187 are the gunshot-like ones.
