/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e5980(int, int);
int FUN_0c0e5b30(void);

int FUN_0c0e5b30(void)
{
    register int t0;
    register int t14;
    register int t15;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC94D578 + (t0 << 2))) = (*(short *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x0)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x0)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x14)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x4)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x18)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x8)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x1C)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0xC)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x20)));
        FUN_0c0e5980(t0, 0xC20D04C);
        *(unsigned short *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC94D578 + (t0 << 2))) = (*(short *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x0)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x0)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x14)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x4)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x18)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0x8)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x1C)));
        *(float *)(((((t0 << 2) << 2) + 0xC94D5B8) + 0xC)) = (*(float *)((((short)((short)t0 * (short)0xB0) + 0xC94CA68) + 0x20)));
        t14 = FUN_0c0e5980(t0, 0xC20D04C);
        t15 = ((short)((short)t0 * (short)0xB0) + 0xC94CA68);
        t0 = (t0 + 0x1);
        *(unsigned short *)((t15 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    *(unsigned int *)0xC20CF88 = 0x0;
    return t14;
}
