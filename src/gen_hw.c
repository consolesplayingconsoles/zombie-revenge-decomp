/* Straight-line functions with calls and guards (batch gen_hw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c0847a2(int);
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c09ba10(int);
int FUN_0c09d6fe(int, int, int, int);
int FUN_0c09da24(int, int, int);
int FUN_0c09dd7a(void);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c09dda8(int a4, int a5, int a6, int a7);

int FUN_0c09dda8(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register int t7;
    register int t81;
    register int t87;
    register int t88;
    register int t27;
    register int t28;
    register int t29;
    register int t143;
    register float u152;
    register float u153;
    register float u155;
    register float u157;
    register int t167;
    register int t159;
    register int t165;
    register int t161;
    register int t163;
    register int t174;
    register int t170;
    register int t172;
    register int t133;
    register int t140;
    register int t141;
    register int t101;
    register int t108;
    register int t109;
    register int t70;
    register int t76;
    register int t77;
    register int t43;
    register int t49;
    register int t50;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
    FUN_0c0db470(0xC10C570, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    t7 = *(int *)((a4 + 0x44));
    if (t7 != 0) {
        if (t7 != 1) {
            t81 = 0x1;
            t87 = 0x0;
            t88 = 0x1;
            if (t7 != 2) {
                if (t7 != 3) {
                    if (t7 != 4) {
                        t27 = 0x1;
                        t28 = 0x1;
                        t29 = 0x1;
                        if (t7 != 5) {
                            t27 = 0x0;
                            t28 = 0x0;
                            t29 = 0x0;
                        }
                        t43 = t27;
                        t49 = t28;
                        t50 = t29;
                    } else {
                        if ((*(int *)((t0 + 0x2BC))) != 0x5B1) {
                            FUN_0c0cc3f8(0x332A9, 0x5AF, 0x5B0, 0x5B1, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            *(unsigned int *)((a4 + 0x44)) = 0x5;
                            FUN_0c09ba10(t0);
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0x1;
                        t43 = 0x1;
                        t49 = 0x1;
                        t50 = 0x1;
                    }
                    t70 = t43;
                    t76 = t49;
                    t77 = t50;
                } else {
                    if ((*(int *)((t0 + 0x2BC))) == 0x5B1) {
                        FUN_0c0cc3f8(0x334A9, 0x5AF, 0x5B0, 0x5B1, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0xB24A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0x232A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned int *)((a4 + 0x44)) = 0x4;
                    } else {
                        if ((*(int *)((t0 + 0x2BC))) != 0x5B0) {
                            *(unsigned int *)((a4 + 0x44)) = 0x2;
                        }
                    }
                    t70 = 0x1;
                    t76 = 0x0;
                    t77 = 0x0;
                }
                t81 = t70;
                t87 = t76;
                t88 = t77;
            }
            t101 = t81;
            t108 = t87;
            t109 = t88;
        } else {
            if ((*(int *)((t0 + 0x2BC))) == 0x5B0) {
                *(unsigned int *)((a4 + 0x44)) = 0x3;
            } else {
                if ((*(int *)((t0 + 0x2BC))) != 0x5AF) {
                    *(unsigned int *)((a4 + 0x44)) = 0x2;
                }
            }
            t101 = 0x1;
            t108 = 0x0;
            t109 = 0x0;
        }
        t133 = t101;
        t140 = t108;
        t141 = t109;
    } else {
        if ((*(int *)((t0 + 0x2BC))) == 0x5AF) {
            *(unsigned int *)((a4 + 0x44)) = 0x1;
        } else {
            if ((*(int *)((t0 + 0x2BC))) != 0x5AE) {
                FUN_0c09dd7a();
            }
        }
        t133 = 0x0;
        t140 = 0x0;
        t141 = 0x0;
    }
    t143 = *(int *)((a4 + 0x48));
    if ((int)t143 < (int)0x1A4) {
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + 0x1);
    }
    FUN_0c0844dc(0x3F00, 0x2900, 0x0, 0.713999987f);
    FUN_0c0844dc(0x3F00, 0x2900, 0x1, 0.713999987f);
    FUN_0c08455e(0.649999976f);
    FUN_0c0847a2(0x1);
    u152 = ((float)t143 * 0.00238095224f);
    u153 = ((float)t143 * 0.00238095224f);
    FUN_0c0847f4((u153 * 0.0549999997f), (u152 * 1.0f));
    u155 = ((float)t143 * 0.00238095224f);
    FUN_0c0847a8(1.0f, (1.0f - (u155 * 0.470000029f)), (1.0f - ((float)t143 * 0.00238095224f)));
    u157 = ((float)t143 * 0.00238095224f);
    t167 = (FUN_0c0847ce(1.0f, 1.0f, (1.0f - (u157 * 0.390000045f))));
    if (t133 != 0) {
        t159 = FUN_0c09d6fe((a4 + 0x4C), 0xC10C534, (((int)stk + 4) + 0x4), (((t141 == 0)) ? 1 : 0));
        t165 = t159;
        if (t159 == 0) {
            t161 = *(int *)((a4 + 0x44));
            t163 = t161;
            if (t161 == 2) {
                *(float *)((t0 + 0x45C)) = 1.0f;
                *(float *)((t0 + 0x460)) = 1.0f;
                *(float *)((t0 + 0x464)) = 1.0f;
                t163 = (FUN_0c09dd7a());
            }
            t165 = t163;
        }
        t167 = t165;
    }
    t174 = t167;
    if (t140 != 0) {
        t170 = FUN_0c09da24((0x1C64 + a4), t0, (*(int *)(((int)stk + 4))));
        t172 = t170;
        if (t170 == 0) {
            *(float *)((t0 + 0x45C)) = 1.0f;
            *(float *)((t0 + 0x460)) = 1.0f;
            *(float *)((t0 + 0x464)) = 1.0f;
            t172 = (FUN_0c09dd7a());
        }
        t174 = t172;
    }
    return t174;
}
