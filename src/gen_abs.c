/* Straight-line functions with calls and guards (batch gen_abs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e5dc0(void);
int FUN_0c0e509a(int a4, int a5, int a6);
struct o2A_short { char p[0x2A]; short v; };


int FUN_0c0e509a(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t7;
    register int t5;
    register int t10;
    register int t13;
    register int t12;
    register int t14;
    register int t115;
    register int t99;
    register int t94;
    register int t47;
    register int t50;
    register int t56;
    register int t53;
    register int t54;
    register int t3;
    register int t11;
    register int t125;
    register int t107;
    register int t89;
    register int t81;
    register int t73;
    register int t66;
    register int t59;
    int R1008;
    int R1012;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1008 = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a6;
    t0 = R1012;
    t1 = *(int *)((t0 + 0xC));
    t2 = *(signed char *)((t0 + 0x9));
    t7 = 0x1;
    if ((t2 & 0x3) != 0) {
        t5 = 0x2;
        if ((t2 & 0x3) != 1) {
            if ((t2 & 0x3) != 2) {
            } else {
                t3 = 0x4;
            }
            t5 = t3;
        }
        t7 = t5;
    }
    t10 = *(signed char *)(((R1012) + 0x8));
    t13 = 0x10;
    if (t10 != 0) {
        t12 = 0x8;
        if (t10 != 1) {
            if ((t10 == 2) || (t10 == 3)) {
                t11 = 0x4;
            }
            t12 = t11;
        }
        t13 = t12;
    }
    t14 = R1008;
    if (t14 != 0) {
        t115 = t13;
        if (t14 != 1) {
            if (t14 != 2) {
                t99 = t1;
                if (t14 != 3) {
                    t94 = t7;
                    if (t14 != 4) {
                        if (t14 != 5) {
                            if (t14 != 6) {
                                if (t14 != 7) {
                                    if (t14 != 8) {
                                        if (t14 != 9) {
                                            t47 = 0xFFFFFFFF;
                                            if (t14 != 10) {
                                            } else {
                                                t47 = (unsigned char)(*(signed char *)(((R1012) + 0x1E)));
                                            }
                                            t59 = t47;
                                        } else {
                                            t50 = R1012;
                                            t56 = 0x0;
                                            if ((*(signed char *)((t50 + 0x1F))) != 0) {
                                            } else {
                                                t53 = *(short *)((t50 + 0x16));
                                                t54 = ((unsigned int)((unsigned int)((unsigned int)(unsigned short)t53 >> 2) >> 2) >> 2);
                                                if (((unsigned int)((unsigned int)((unsigned int)(unsigned short)t53 >> 2) >> 2) >> 2) == 0) {
                                                    t54 = 0x1;
                                                }
                                                t56 = t54;
                                            }
                                            t59 = t56;
                                        }
                                        t66 = t59;
                                    } else {
                                        t66 = ((int)((unsigned char)(*(signed char *)(((R1012) + 0x33))) & 0xF0) >> 4);
                                    }
                                    t73 = t66;
                                } else {
                                    t73 = ((unsigned char)(*(signed char *)(((R1012) + 0x33))) & 0xF);
                                }
                                t81 = t73;
                            } else {
                                t81 = (unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 6))) << 2) + (R1012)) + 0x32) + 0x0)));
                            }
                            t89 = t81;
                        } else {
                            t89 = (unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 6))) << 2) + (R1012)) + 0x31) + 0x0)));
                        }
                        t94 = t89;
                    }
                    t99 = t94;
                }
                t107 = t99;
            } else {
                FUN_0c0e5dc0();
                t107 = (FUN_0c0e5dc0());
            }
            t115 = t107;
        }
        t125 = t115;
    } else {
        t125 = (unsigned short)((((struct o2A_short *)((R1012)))->v));
    }
    return t125;
}
