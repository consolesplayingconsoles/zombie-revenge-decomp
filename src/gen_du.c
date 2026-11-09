/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0cead0(int);
int FUN_0c0ceb2a(int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e631c(int, int, int);
int buAnalyzeBackupFileImage(int, int);
int buGetLastError(int);
int buStat(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0154c0(int a4, int a5, int a6);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int FUN_0c0154c0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t47;
    int t49;
    int t57;
    int t59;
    int t85;
    int t88;
    int t89;
    int t101;
    int t94;
    int stk[36];
    int R1004;
    int R1100;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    t0 = *(int *)0xC23ED50;
    t1 = 0x1;
    if ((t0 != 1) && (t0 != 3)) {
        t1 = 0x0;
    }
    FUN_0c0cead0(a4);
    t3 = (((struct o8_int *)0xC23EB14)->v);
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
                    t94 = t3;
                } else {
                    if (t3 == 4) {
                        *(unsigned int *)0xC23A25C = 0x1;
                        (((struct o8_uint *)0xC23EB14)->v) = 0x9;
                        t94 = t3;
                    } else {
                        t94 = t3;
                        if (t3 == 9) {
                        } else {
                            t94 = t3;
                            if (t3 == 10) {
                                *(unsigned int *)0xC23A25C = 0x1;
                                if (t1 != 0) {
                                    nlPushMatrix(0x0);
                                    FUN_0c0dcc70((*(float *)0xC015748), 0.429999977f, 1.5f);
                                    FUN_0c0c465c(0x1401);
                                    t94 = nlPopMatrix(0x1);
                                    if ((*(int *)0xC2498F4) != 0) {
                                        (((struct o8_uint *)0xC23EB14)->v) = 0x4;
                                    }
                                } else {
                                    (((struct o8_uint *)0xC23EB14)->v) = 0x4;
                                    t94 = t3;
                                }
                            }
                        }
                    }
                }
            } else {
                if (t1 != 0) {
                    nlPushMatrix(0x0);
                    FUN_0c0dcc70(0.0f, 0.429999977f, 1.5f);
                    FUN_0c0c465c(0x13FF);
                    nlPopMatrix(0x1);
                }
                t47 = buStat(a4);
                t94 = t47;
                if (t47 == 0) {
                    (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
                    t49 = buGetLastError(a4);
                    (((struct o10_uint *)0xC23EB14)->v) = t49;
                    if (t49 != 0) {
                        FUN_0c0e2a4c(((((struct o0_int *)0xC23EB14)->v)));
                        (((struct o8_uint *)0xC23EB14)->v) = 0xA;
                    }
                    t94 = a6;
                    if (a6 == 2) {
                        t57 = buAnalyzeBackupFileImage((((int)stk + 4) + 0x4), ((((struct o0_int *)0xC23EB14)->v)));
                        t94 = t57;
                        if (t57 == 0) {
                            /* manual: read here, not at the top: buAnalyzeBackupFileImage fills this slot */
                            R1100 = *(int *)((int)stk + 100);
                            t59 = FUN_0c0e262a((R1100));
                            FUN_0c0e631c(t59, (*(int *)(((int)stk + 96))), (R1100));
                            t94 = FUN_0c0e2a4c(((((struct o0_int *)0xC23EB14)->v)));
                            (((struct o0_uint *)0xC23EB14)->v) = t59;
                        }
                    }
                }
            }
        } else {
            t85 = a6;
            if (a6 == 2) {
                t85 = 0x0;
            }
            t88 = FUN_0c0ceb2a(a4, (((R1004) * 0xD) + 0xC1EF454), t85);
            (((struct o0_uint *)0xC23EB14)->v) = t88;
            if (t88 == 0) {
                for (;;) {
                    t89 = buStat(a4);
                    if (t89 == 0) {
                        break;
                    }
                }
                (((struct o8_uint *)0xC23EB14)->v) = 0xA;
                t94 = t89;
            } else {
                (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
                t94 = t88;
            }
        }
        t101 = t94;
    } else {
        *(unsigned int *)0xC23A25C = 0x0;
        (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
        t101 = t3;
    }
    return t101;
}
