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
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c09dda8(int a4, int a5, int a6, int a7);
struct o2BC_int { char p[0x2BC]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };


int FUN_0c09dda8(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register int t7;
    register int t143;
    register float u152;
    register float u153;
    register float u155;
    register float u157;
    register int t159;
    register int t161;
    register int t174;
    register int t170;
    register int t133;
    register int t140;
    register int t141;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t0 = *(int *)((a4 + 0x30));
    R1004 = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((struct o3E4_int *)(t0))->v)));
    FUN_0c0db470(0xC10C570, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    t7 = (((struct o44_int *)(a4))->v);
    if (t7 != 0) {
        if (t7 != 1) {
            t133 = 0x1;
            t140 = 0x0;
            t141 = 0x1;
            if (t7 != 2) {
                if (t7 != 3) {
                    if (t7 != 4) {
                        t133 = 0x1;
                        t140 = 0x1;
                        t141 = 0x1;
                        if (t7 != 5) {
                            t133 = 0x0;
                            t140 = 0x0;
                            t141 = 0x0;
                        }
                    } else {
                        if (((((struct o2BC_int *)(t0))->v)) != 0x5B1) {
                            FUN_0c0cc3f8(0x332A9, 0x5AF, 0x5B0, 0x5B1);
                            FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0);
                            (((struct o44_uint *)(a4))->v) = 0x5;
                            FUN_0c09ba10(t0);
                        }
                        R1004 = 0x1;
                        t133 = 0x1;
                        t140 = 0x1;
                        t141 = 0x1;
                    }
                } else {
                    if (((((struct o2BC_int *)(t0))->v)) == 0x5B1) {
                        FUN_0c0cc3f8(0x334A9, 0x5AF, 0x5B0, 0x5B1);
                        FUN_0c0cc3f8(0xB24A9, 0x0, 0x0, 0x0);
                        FUN_0c0cc3f8(0x232A9, 0x0, 0x0, 0x0);
                        (((struct o44_uint *)(a4))->v) = 0x4;
                    } else {
                        if (((((struct o2BC_int *)(t0))->v)) != 0x5B0) {
                            (((struct o44_uint *)(a4))->v) = 0x2;
                        }
                    }
                    t133 = 0x1;
                    t140 = 0x0;
                    t141 = 0x0;
                }
            }
        } else {
            if (((((struct o2BC_int *)(t0))->v)) == 0x5B0) {
                (((struct o44_uint *)(a4))->v) = 0x3;
            } else {
                if (((((struct o2BC_int *)(t0))->v)) != 0x5AF) {
                    (((struct o44_uint *)(a4))->v) = 0x2;
                }
            }
            t133 = 0x1;
            t140 = 0x0;
            t141 = 0x0;
        }
    } else {
        if (((((struct o2BC_int *)(t0))->v)) == 0x5AF) {
            (((struct o44_uint *)(a4))->v) = 0x1;
        } else {
            if (((((struct o2BC_int *)(t0))->v)) != 0x5AE) {
                FUN_0c09dd7a();
            }
        }
        t133 = 0x0;
        t140 = 0x0;
        t141 = 0x0;
    }
    t143 = (((struct o48_int *)(a4))->v);
    if ((int)t143 < (int)0x1A4) {
        (((struct o48_uint *)(a4))->v) = (((((struct o48_int *)(a4))->v)) + 0x1);
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
    t174 = (FUN_0c0847ce(1.0f, 1.0f, (1.0f - (u157 * 0.390000045f))));
    if (t133 != 0) {
        t159 = FUN_0c09d6fe((a4 + 0x4C), 0xC10C534, (((int)stk + 4) + 0x4), (((t141 == 0)) ? 1 : 0));
        t174 = t159;
        if (t159 == 0) {
            t161 = (((struct o44_int *)(a4))->v);
            t174 = t161;
            if (t161 == 2) {
                (((struct o45C_float *)(t0))->v) = 1.0f;
                (((struct o460_float *)(t0))->v) = 1.0f;
                (((struct o464_float *)(t0))->v) = 1.0f;
                t174 = (FUN_0c09dd7a());
            }
        }
    }
    if (t140 != 0) {
        t170 = FUN_0c09da24((0x1C64 + a4), t0, (R1004));
        t174 = t170;
        if (t170 == 0) {
            (((struct o45C_float *)(t0))->v) = 1.0f;
            (((struct o460_float *)(t0))->v) = 1.0f;
            (((struct o464_float *)(t0))->v) = 1.0f;
            t174 = (FUN_0c09dd7a());
        }
    }
    return t174;
}
