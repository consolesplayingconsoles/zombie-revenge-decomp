/* Straight-line functions with calls and guards (batch gen_tn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e0784(int);
int kmFreeTexture(int);
int nlCommonTextureClearTextureIndex(int, int);
int nlFreePalette(int);
int FUN_0c0dfb08(int a4, int a5, int a6);

int FUN_0c0dfb08(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC948270;
    t1 = 0xC943D78;
    if ((unsigned int)(*(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x0))) > (unsigned int)0x0) {
        t2 = *(int *)0xC943D78;
        *(unsigned int *)((((((t0 + a6) << 2) << 1) + t2) + 0x0)) = ((*(int *)((((((t0 + a6) << 2) << 1) + t2) + 0x0))) - 1);
        t2 = *(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x0));
        t3 = t2;
        if (t2 != 0) {
        } else {
            t2 = *(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x4));
            if ((*(int *)((((t2 * 0x3C) + (*(int *)0xC947AA8)) + 0x28))) == 0) {
                t4 = kmFreeTexture(((t2 * 0x3C) + (*(int *)0xC947AA8)));
                if (t4 != 0) {
                    *(unsigned int *)0xC94C698 = 0x2;
                    for (;;) {
                    }
                }
            } else {
                t4 = a5;
            }
            *(unsigned int *)((((t2 * 0x3C) + (*(int *)0xC947AA8)) + 0x2C)) = 0x0;
            *(unsigned int *)((((t2 * 0x3C) + (*(int *)0xC947AA8)) + 0x38)) = 0xFFFFFFFF;
            t5 = *(short *)((((t0 + a6) << 1) + (*(int *)0xC94C69C)));
            nlCommonTextureClearTextureIndex(t2, t4);
            FUN_0c0e0784((short)t5);
            *(unsigned int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x4)) = 0xFFFFFFFF;
            *(unsigned short *)((((t0 + a6) << 1) + (*(int *)0xC94C69C))) = 0xFFFFFFFF;
            t0 = 0xC20CC50;
            if (((*(int *)0xC20CC50) == 0) && (a5 != 0)) {
                t2 = *(int *)(((a6 << 2) + a5));
                t4 = *(int *)(((((((short)t5 << 2) << 2) << 1) + (*(int *)0xC94C6A8)) + 0xC));
                t5 = 0x7;
                if ((*(int *)0xC94C688) != 0) {
                    t6 = (((unsigned int)t4 >> 27) & 0x7);
                    if (((((unsigned int)t4 >> 27) & 0x7) != 5) && ((((unsigned int)t4 >> 27) & 0x7) != 6)) {
                    } else {
                        t6 = (nlFreePalette(t2));
                    }
                    t5 = t6;
                }
                t0 = t5;
            }
            t3 = t0;
        }
        t1 = t3;
    }
    return t1;
}
