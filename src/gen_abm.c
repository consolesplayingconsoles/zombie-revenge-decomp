/* Straight-line functions with calls and guards (batch gen_abm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0498ce(void);
int FUN_0c054ccc(int);
int FUN_0c054d8e(void);
int FUN_0c084104(void);
int FUN_0c084218(int);
int FUN_0c0844dc(int, int, float);
int FUN_0c08455e(float);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
extern int FUN_0c0d8c40();
int FUN_0c0db0a0(int, int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06546c(int a4, float f4);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c06546c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o10_int *)0xC23A180)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 == 2) {
                t0 = (((struct o14_int *)0xC247BB4)->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            if (t0 != 3) {
                                if (t0 != 4) {
                                    if (t0 != 5) {
                                        if (t0 != 6) {
                                            if (t0 != 7) {
                                                if (t0 != 8) {
                                                    if (t0 != 9) {
                                                        t2 = t0;
                                                        if (t0 != 10) {
                                                        } else {
                                                            (((struct o0_uint *)0xC23A180)->v) = 0x15;
                                                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                            t2 = 0x15;
                                                        }
                                                        t3 = t2;
                                                    } else {
                                                        (((struct o0_uint *)0xC23A180)->v) = 0x14;
                                                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                        t3 = t0;
                                                    }
                                                    t2 = t3;
                                                } else {
                                                    (((struct o0_uint *)0xC23A180)->v) = 0x13;
                                                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                    t2 = t0;
                                                }
                                                t3 = t2;
                                            } else {
                                                (((struct o0_uint *)0xC23A180)->v) = 0x12;
                                                (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                t3 = 0x12;
                                            }
                                            t2 = t3;
                                        } else {
                                            (((struct o0_uint *)0xC23A180)->v) = 0x11;
                                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                            t2 = t0;
                                        }
                                        t3 = t2;
                                    } else {
                                        (((struct o0_uint *)0xC23A180)->v) = 0xC;
                                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                        t3 = 0xC;
                                    }
                                    t2 = t3;
                                } else {
                                    (((struct o0_uint *)0xC23A180)->v) = 0xB;
                                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                    t2 = t0;
                                }
                                t3 = t2;
                            } else {
                                (((struct o0_uint *)0xC23A180)->v) = 0xA;
                                (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                t3 = 0xA;
                            }
                            t2 = t3;
                        } else {
                            (((struct o0_uint *)0xC23A180)->v) = 0x8;
                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                            t2 = t0;
                        }
                        t0 = t2;
                    } else {
                        t2 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x201000, 0x200010, f4);
                        (((struct o0_uint *)0xC23A180)->v) = 0x4;
                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                        t0 = t2;
                    }
                    t2 = t0;
                } else {
                    t0 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x0, 0x0, f4);
                    (((struct o0_uint *)0xC23A180)->v) = 0x1;
                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                    (((struct oC_uint *)0xC23A180)->v) = 0x0;
                    t2 = t0;
                }
                t1 = t2;
            }
            return t1;
        }
        FUN_0c084218(a4);
        t0 = ((int (*)(int, int, int))(FUN_0c0d8c40))(0x0, 0x2020, 0x2020);
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
                break;
            }
            FUN_0c0db0a0(((((struct o0_int *)0xC247BB4)->v)), ((t0 << 1) + ((((struct o4_int *)0xC247BB4)->v))));
            nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
            t0 = (t0 + 0x1);
        }
        FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD4);
        if (((*(int *)0xC2497E0) & 32) != 0) {
            (((struct o1C_uint *)0xC247BB4)->v) = 0x0;
            t0 = (((struct o14_int *)0xC247BB4)->v);
            (((struct o14_uint *)0xC247BB4)->v) = (t0 + 0x1);
            if ((int)(t0 + 0x1) > (int)((((struct o10_int *)0xC247BB4)->v))) {
                (((struct o14_uint *)0xC247BB4)->v) = 0x0;
            }
        } else {
            if (((*(int *)0xC2497E0) & 16) != 0) {
                (((struct o1C_uint *)0xC247BB4)->v) = 0x0;
                t0 = (((struct o14_int *)0xC247BB4)->v);
                (((struct o14_uint *)0xC247BB4)->v) = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    (((struct o14_uint *)0xC247BB4)->v) = ((((struct o10_int *)0xC247BB4)->v));
                }
            } else {
                if (((*(int *)0xC2497E0) & 0x606) != 0) {
                    FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
                    t0 = nlPrintf(0xC0F9FD4);
                    (((struct o10_uint *)0xC23A180)->v) = (((((struct o10_int *)0xC23A180)->v)) + 0x1);
                    return t0;
                }
            }
        }
        FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD8);
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o0_float *)0xC0658B4)->v)));
        nlRotateAX(0x4000);
        nlRotateAY((-(((((struct o24_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0x9C);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o14_float *)0xC0658B4)->v)));
        nlRotateAX(0x4000);
        nlRotateAY((-(((((struct o28_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0x9E);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o18_float *)0xC0658B4)->v)));
        nlRotateAY((-(((((struct o28_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0xD0F);
        nlPopMatrix(0x1);
        (((struct o24_uint *)0xC247BB4)->v) = (((((struct o24_int *)0xC247BB4)->v)) + 0x1);
        t0 = FUN_0c0e5f1c();
        if (t0 == 0) {
            (((struct o28_uint *)0xC247BB4)->v) = (((((struct o28_int *)0xC247BB4)->v)) + 0x1);
        }
        return t0;
    }
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c054ccc(0x0);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0(0x2000, 1.33333325f, 9.99999975e-05f, 300.0f);
    FUN_0c0dc0b0(0x1);
    FUN_0c0844dc(0xDD00, 0x9C00, 0.699999988f);
    FUN_0c08455e(0.599999964f);
    *(unsigned int *)0xC23ED50 = 0x1;
    FUN_0c0bfa90();
    FUN_0c0c45d0();
    FUN_0c0c4290(0x0);
    (((struct o0_uint *)0xC247BB4)->v) = 0x8;
    (((struct o4_uint *)0xC247BB4)->v) = 0x10;
    (((struct o8_uint *)0xC247BB4)->v) = 0x5;
    (((struct oC_uint *)0xC247BB4)->v) = 0x10;
    (((struct o14_uint *)0xC247BB4)->v) = 0x0;
    (((struct o24_uint *)0xC247BB4)->v) = 0x0;
    (((struct o28_uint *)0xC247BB4)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
            break;
        }
        FUN_0c0db0a0(((((struct o0_int *)0xC247BB4)->v)), ((t0 << 1) + ((((struct o4_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
        t0 = (t0 + 0x1);
    }
    (((struct o10_uint *)0xC247BB4)->v) = (t0 - 1);
    t0 = FUN_0c084104();
    (((struct o10_uint *)0xC23A180)->v) = (((((struct o10_int *)0xC23A180)->v)) + 0x1);
    return t0;
}
