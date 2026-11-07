/* Straight-line functions with calls and guards (batch gen_xz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c229058(int, int, int);
int FUN_0c232624(int, int, int);
int fmMngBit2Num(int, int);
int fmcalccrc(int, int);
int FUN_0c229172(int a4);

int FUN_0c229172(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t2 = *(int *)((a4 + 0xC));
    t3 = *(int *)((a4 + 0x4));
    t4 = FUN_0c232624(t3, t2, 0x40);
    t5 = 0xFFFFFFFF;
    if (t4 != -1) {
        t4 = *(int *)((a4 + 0x14));
        t6 = FUN_0c232624((t3 + ((((t4 + 0x1) << 2) << 2) << 2)), (((((t4 + 0x1) << 2) << 2) << 2) + t2), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t7 = 0xFFFFFFFF;
        if (t6 != -1) {
            t6 = fmMngBit2Num((((((t4 + 0x1) << 2) << 2) << 2) + t2), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t6;
            t4 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t8 = 0x0;
                if ((int)t6 > 0) {
                    t9 = (t3 + 0x40);
                    t3 = t6;
                    for (;;) {
                        t6 = FUN_0c232624(t9, (a4 + 0x34), 0x40);
                        if (t6 == -1) {
                            break;
                        }
                        if ((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) != 0xFFFF) {
                            t6 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)(*(short *)(((a4 + 0x34) + 0x3E))) == (unsigned short)t6) && (t0 = *(short *)(((a4 + 0x34) + 0x0)), t1 = *(int *)((a4 + 0x14)), (int)(unsigned short)t0 < (int)t1)) {
                                FUN_0c229058((a4 + 0x34), ((((((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) + 0x1) << 2) << 2) << 2) + t2), 0x40);
                            }
                            t3 = (t3 - 1);
                            t9 = (t9 + 0x40);
                            if ((int)t3 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t8 = 0xFFFFFFFF;
                }
                t4 = t8;
            }
            t7 = t4;
        }
        t5 = t7;
    }
    return t5;
}
