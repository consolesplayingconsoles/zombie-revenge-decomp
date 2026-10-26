/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0cead0(int);
int FUN_0c0ceb2a(int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e631c(int, int, int);
int buAnalyzeBackupFileImage(int, int);
int buGetLastError(int);
int buStat(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0154c0(int a4, int a5, int a6);

int FUN_0c0154c0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t23;
    int t18;
    int t9;
    int t47;
    int t73;
    int t49;
    int t68;
    int t57;
    int t65;
    int t59;
    int t64;
    int t85;
    int t88;
    int t89;
    int t101;
    int t94;
    int t78;
    int t34;
    int t28;
    int t13;
    int t91;
    int stk[36];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC23ED50;
    t1 = 0x1;
    if ((t0 != 1) && (t0 != 3)) {
        t1 = 0x0;
    }
    FUN_0c0cead0(a4);
    t3 = *(int *)0xC23EB1C;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
                    t34 = t3;
                } else {
                    if (t3 == 4) {
                        *(unsigned int *)0xC23A25C = 0x1;
                        *(unsigned int *)0xC23EB1C = 0x9;
                        t28 = t3;
                    } else {
                        t23 = t3;
                        if (t3 == 9) {
                        } else {
                            t18 = t3;
                            if (t3 == 10) {
                                *(unsigned int *)0xC23A25C = 0x1;
                                if (t1 != 0) {
                                    nlPushMatrix(0x0);
                                    FUN_0c0dcc70((*(float *)0xC015748), 0.429999977f, 1.5f);
                                    FUN_0c0c465c(0x1401);
                                    t9 = nlPopMatrix(0x1);
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EB1C = 0x4;
                                    }
                                    t13 = t9;
                                } else {
                                    *(unsigned int *)0xC23EB1C = 0x4;
                                    t13 = t3;
                                }
                                t18 = t13;
                            }
                            t23 = t18;
                        }
                        t28 = t23;
                    }
                    t34 = t28;
                }
                t78 = t34;
            } else {
                if (t1 != 0) {
                    nlPushMatrix(0x0);
                    FUN_0c0dcc70(0.0f, 0.429999977f, 1.5f);
                    FUN_0c0c465c(0x13FF);
                    nlPopMatrix(0x1);
                }
                t47 = buStat(a4);
                t73 = t47;
                if (t47 == 0) {
                    *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
                    t49 = buGetLastError(a4);
                    *(unsigned int *)0xC23EB24 = t49;
                    if (t49 != 0) {
                        FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                        *(unsigned int *)0xC23EB1C = 0xA;
                    }
                    t68 = a6;
                    if (a6 == 2) {
                        t57 = buAnalyzeBackupFileImage((((int)stk + 4) + 0x4), (*(int *)0xC23EB14));
                        t65 = t57;
                        if (t57 == 0) {
                            t59 = FUN_0c0e262a((*(int *)(((int)stk + 100))));
                            FUN_0c0e631c(t59, (*(int *)(((int)stk + 96))), (*(int *)(((int)stk + 100))));
                            t64 = FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                            *(unsigned int *)0xC23EB14 = t59;
                            t65 = t64;
                        }
                        t68 = t65;
                    }
                    t73 = t68;
                }
                t78 = t73;
            }
            t94 = t78;
        } else {
            t85 = a6;
            if (a6 == 2) {
                t85 = 0x0;
            }
            t88 = FUN_0c0ceb2a(a4, (((*(int *)(((int)stk + 4))) * 0xD) + 0xC1EF454), t85);
            *(unsigned int *)0xC23EB14 = t88;
            if (t88 == 0) {
                for (;;) {
                    t89 = buStat(a4);
                    if (t89 == 0) {
                        break;
                    }
                }
                *(unsigned int *)0xC23EB1C = 0xA;
                t91 = t89;
            } else {
                *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
                t91 = t88;
            }
            t94 = t91;
        }
        t101 = t94;
    } else {
        *(unsigned int *)0xC23A25C = 0x0;
        *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
        t101 = t3;
    }
    return t101;
}
