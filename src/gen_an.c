/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c010c84(void);
int FUN_0c014fae(int, float);
int FUN_0c01cdc2(void);
int FUN_0c02280e(int);
int FUN_0c022838(int);
int FUN_0c0278d0(int, int);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c034134(int, float);
int FUN_0c0341a6(int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034b36(int, int);
int FUN_0c034b64(int, int);
int FUN_0c034b88(int, int);
int FUN_0c034d0c(int);
int FUN_0c0352b4(int, int, int);
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0853d4(int, float);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a4bb2(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bfa46(int);
int FUN_0c0bfa90(void);
int FUN_0c0c3748(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0dccf0(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0dfd50(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(void);
int FUN_0c05b6fc(int a4, int a5, int a6);
int FUN_0c09d6fe(int a4, int a5, int a6, int a7);
int FUN_0c0c3a3e(int a4);
int FUN_0c027d08(int a4);
int FUN_0c087510(int a4);
int FUN_0c015070(void);
int FUN_0c0316d4(int a4, int a5);
int FUN_0c0635ec(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o488_int { char p[0x488]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o510_int { char p[0x510]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };





int FUN_0c0c3a3e(int a4)
{
    int t30;
    int t40;
    int t51;
    int t54;
    int t55;
    int t57;
    int t73;
    int t102;
    int t106;
    int t113;
    int t122;
    int t129;
    int t136;
    int t143;
    int t152;
    int t159;
    int t165;
    int t172;
    int t179;
    int t186;
    int t230;
    int t232;
    int t234;
    int t236;
    int t238;
    int t240;
    int t243;
    int t245;
    int t8;
    int t16;
    int t17;
    int t28;
    int t29;
    int t31;
    int stk[7];

    if ((int)((((struct o40_int *)((*(int *)0xC262390)))->v)) < (int)0x206B) {
        t8 = (*(int *)0xC191314);
    } else {
        t8 = ((*(int *)(((*(int *)0xC260CB8) + 0x0))) - 1584);
    }
    if ((((((struct o0_int *)0xC2497B0)->v)) & 240) != 0) {
        (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x1);
    } else {
        (((struct o98_uint *)(a4))->v) = 0x0;
    }
    if (((((((struct o8_int *)0xC2497B0)->v)) & 0x40) == 0) && ((t16 = (((struct o98_int *)(a4))->v), (int)t16 <= (int)0x28) || (t17 = (((struct o0_int *)0xC2497B0)->v), (t17 & 0x40) == 0))) {
        if (((((((struct o8_int *)0xC2497B0)->v)) & 0x80) == 0) && ((t28 = (((struct o98_int *)(a4))->v), (int)t28 <= (int)0x28) || (t29 = (((struct o0_int *)0xC2497B0)->v), (t29 & 0x80) == 0))) {
        } else {
            t30 = (((struct o78_int *)(a4))->v);
            (((struct o78_uint *)(a4))->v) = (t30 + 0x1);
            if (((int)(t30 + 0x1) > (int)0x206B) && (t31 = *(int *)((((((0xFFFFDFF8 + (t30 + 0x1)) << 2) << 2) + t8) + 0x4)), t31 == -1)) {
                (((struct o78_uint *)(a4))->v) = (((((struct o78_int *)(a4))->v)) - 1);
            }
            (((struct o40_uint *)((*(int *)0xC262390)))->v) = ((((struct o78_int *)(a4))->v));
        }
    } else {
        t40 = (((struct o78_int *)(a4))->v);
        (((struct o78_uint *)(a4))->v) = (t40 - 1);
        if ((int)(t40 - 1) < (int)0x2008) {
            (((struct o78_uint *)(a4))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
        }
        (((struct o40_uint *)((*(int *)0xC262390)))->v) = ((((struct o78_int *)(a4))->v));
    }
    t51 = (((struct o8_int *)0xC2497B0)->v);
    if ((t51 & 4) != 0) {
        t54 = *(int *)0xC262390;
        t55 = *(int *)((t54 + 0x3C));
        *(unsigned int *)((t54 + 0x3C)) = (t55 + 0x1);
        if ((*(int *)((((t55 + 0x1) << 2) + 0xC209C5C))) == 0) {
            t57 = *(int *)0xC262390;
            *(unsigned int *)((t57 + 0x3C)) = ((*(int *)((t57 + 0x3C))) - 1);
        }
        FUN_0c0bfa90();
        FUN_0c0c45d0();
        FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))));
        (((struct o40_uint *)((*(int *)0xC262390)))->v) = 0x2008;
        (((struct o78_uint *)(a4))->v) = 0x2008;
    } else {
        if ((t51 & 2) != 0) {
            if ((int)(*(int *)(((*(int *)0xC262390) + 0x3C))) > 0) {
                t73 = *(int *)0xC262390;
                *(unsigned int *)((t73 + 0x3C)) = ((*(int *)((t73 + 0x3C))) - 1);
            }
            FUN_0c0bfa90();
            FUN_0c0c45d0();
            FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))));
            (((struct o40_uint *)((*(int *)0xC262390)))->v) = 0x2008;
            (((struct o78_uint *)(a4))->v) = 0x2008;
        }
    }
    t102 = (((struct o0_int *)0xC2497B0)->v);
    if ((((((struct o0_int *)0xC2497B0)->v)) & 0x4000000) != 0) {
        if ((t102 & 0x100000) != 0) {
            t106 = *(int *)0xC262390;
            (((struct o4C_float *)(t106))->v) = (((((struct o4C_float *)(t106))->v)) - 0.099999994f);
        }
        if ((0x200000 & ((((struct o0_int *)0xC2497B0)->v))) == 0) {
        } else {
            t113 = *(int *)0xC262390;
            (((struct o4C_float *)(t113))->v) = (((((struct o4C_float *)(t113))->v)) + 0.099999994f);
        }
    } else {
        if ((((((struct o0_int *)0xC2497B0)->v)) & 0x40000) != 0) {
            if ((t102 & 0x100000) != 0) {
                t122 = *(int *)0xC262390;
                (((struct o54_float *)(t122))->v) = (((((struct o54_float *)(t122))->v)) + 0.049999997f);
            }
            if ((0x200000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                t129 = *(int *)0xC262390;
                (((struct o54_float *)(t129))->v) = (((((struct o54_float *)(t129))->v)) - 0.049999997f);
            }
            if ((0x800000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                t136 = *(int *)0xC262390;
                (((struct o50_float *)(t136))->v) = (((((struct o50_float *)(t136))->v)) + 0.049999997f);
            }
            if ((0x400000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                t143 = *(int *)0xC262390;
                (((struct o50_float *)(t143))->v) = (((((struct o50_float *)(t143))->v)) - 0.049999997f);
            }
        } else {
            if ((((((struct o0_int *)0xC2497B0)->v)) & 0x20000) != 0) {
                if ((0x800000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                    t152 = *(int *)0xC262390;
                    (((struct o58_uint *)(t152))->v) = (((((struct o58_int *)(t152))->v)) - 0x100);
                }
                if ((0x400000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                    t159 = *(int *)0xC262390;
                    (((struct o58_uint *)(t159))->v) = (((((struct o58_int *)(t159))->v)) + 0x100);
                }
            } else {
                if ((t102 & 0x100000) != 0) {
                    t165 = *(int *)0xC262390;
                    (((struct o48_float *)(t165))->v) = (((((struct o48_float *)(t165))->v)) - 1.0f);
                }
                if ((0x200000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                    t172 = *(int *)0xC262390;
                    (((struct o48_float *)(t172))->v) = (((((struct o48_float *)(t172))->v)) + 1.0f);
                }
                if ((0x400000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                    t179 = *(int *)0xC262390;
                    (((struct o44_float *)(t179))->v) = (((((struct o44_float *)(t179))->v)) - 1.0f);
                }
                if ((0x800000 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
                    t186 = *(int *)0xC262390;
                    (((struct o44_float *)(t186))->v) = (((((struct o44_float *)(t186))->v)) + 1.0f);
                }
            }
        }
    }
    if ((((((struct o8_int *)0xC2497B0)->v)) & 0x80000) != 0) {
        FUN_0c0c3748();
    }
    t230 = *(int *)0xC262390;
    *(unsigned int *)((t230 + 0x4)) = ((((struct o40_int *)(t230))->v));
    t232 = *(int *)0xC262390;
    (((struct o8_float *)(t232))->v) = ((((struct o44_float *)(t232))->v));
    t234 = *(int *)0xC262390;
    (((struct oC_float *)(t234))->v) = ((((struct o48_float *)(t234))->v));
    t236 = *(int *)0xC262390;
    (((struct o10_float *)(t236))->v) = ((((struct o4C_float *)(t236))->v));
    t238 = *(int *)0xC262390;
    *(unsigned int *)((t238 + 0x2C)) = ((((struct o58_int *)(t238))->v));
    t240 = *(int *)0xC262390;
    *(unsigned int *)((t240 + 0x38)) = ((((struct o5C_int *)(t240))->v));
    (((struct o30_float *)((*(int *)0xC262390)))->v) = 1.0f;
    t243 = *(int *)0xC262390;
    (((struct o14_float *)(t243))->v) = ((((struct o50_float *)(t243))->v));
    t245 = *(int *)0xC262390;
    (((struct o18_float *)(t245))->v) = ((((struct o54_float *)(t245))->v));
    return FUN_0c0dfd50(((*(int *)0xC262390) + 0x4));
}

int FUN_0c027d08(int a4)
{
    int t0;
    int t4;
    int t11;
    int t13;
    int t19;
    int t23;
    int t31;
    int t34;
    int t37;
    int t38;
    int t42;
    int t50;
    int t53;
    int t60;
    int t61;
    int t66;
    int t73;
    int t75;
    int t78;
    int stk[5];

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        (((struct o534_uint *)(a4))->v) = 0x0;
        return FUN_0c02a19a(a4);
    }
    t4 = (((struct o3A0_int *)(a4))->v);
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 == 3) {
                    t11 = FUN_0c0352b4(a4, 0x80, 0x1);
                    if (t11 == 0) {
                        return FUN_0c02a19a(a4);
                    }
                    FUN_0c0328e4(a4);
                    t13 = FUN_0c03242c(a4, 0.0799999982f, 30.0f);
                    if (t13 == 0) {
                        FUN_0c0cc3f8(0x82CA9, 0x0, 0x0, 0x0);
                        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    }
                    t19 = FUN_0c032394(a4);
                    if ((int)t19 >= 0) {
                        t23 = (((struct o488_int *)(a4))->v);
                        if (((((struct oD8_int *)(t23))->v)) != 0) {
                            if (((((struct oD8_int *)(t23))->v)) != 2) {
                                FUN_0c0909fc(t23);
                            } else {
                                FUN_0c090f70(t23);
                            }
                            return FUN_0c02a19a(a4);
                        }
                        t31 = ((int (*)(int))(_quick_odd_mvn))(t23);
                        *(volatile int *)((a4 + 0xBC));
                        *(volatile int *)((a4 + 0x1E8));
                        t34 = ((int (*)(int))(_quick_odd_mvn))(a4);
                        FUN_0c01cdc2();
                        if (((((struct o3A0_int *)(a4))->v)) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    (((struct o534_uint *)(a4))->v) = 0x0;
                    return FUN_0c02a19a(a4);
                }
                if (t4 == 4) {
                    t37 = FUN_0c0352b4(a4, 0x80, 0x1);
                    if (t37 != 0) {
                        t38 = FUN_0c032394(a4);
                        if ((int)t38 < 0) {
                            (((struct o534_uint *)(a4))->v) = 0x0;
                            return FUN_0c02a19a(a4);
                        }
                        t42 = (((struct o488_int *)(a4))->v);
                        if (((((struct oD8_int *)(t42))->v)) != 0) {
                            if (((((struct oD8_int *)(t42))->v)) == 2) {
                                FUN_0c090f70(t42);
                            } else {
                                FUN_0c0909fc(t42);
                            }
                            return FUN_0c02a19a(a4);
                        }
                        t50 = ((int (*)(int))(_quick_odd_mvn))(t42);
                        *(volatile int *)((a4 + 0xBC));
                        *(volatile int *)((a4 + 0x1E8));
                        t53 = ((int (*)(int))(_quick_odd_mvn))(a4);
                        FUN_0c01cdc2();
                        if (((((struct o3A0_int *)(a4))->v)) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    return FUN_0c02a19a(a4);
                }
                if (((((struct o3A0_int *)(a4))->v)) == 4) {
                    return FUN_0c02280e(a4);
                }
                return FUN_0c022838(a4);
            }
            if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
                return FUN_0c02a19a(a4);
            }
            FUN_0c0278d0(a4, 0x1);
            t60 = (((struct o3B0_int *)(a4))->v);
            (((struct o3B0_uint *)(a4))->v) = (t60 + 0x1);
            if ((int)(t60 + 0x1) <= (int)0x3C) {
            } else {
                t61 = (((struct o488_int *)(a4))->v);
                (((struct o534_uint *)(a4))->v) = 0x9;
                (((struct oBC_uint *)(t61))->v) = ((((struct oBC_int *)(a4))->v));
                (((struct o1EC_uint *)(t61))->v) = ((((struct o1EC_int *)(a4))->v));
                (((struct o200_uint *)(t61))->v) = 0x1;
                (((struct o1E8_uint *)(t61))->v) = 0x1;
                (((struct o1F4_uint *)(t61))->v) = 0x50;
                (((struct o204_uint *)(t61))->v) = 0x0;
                (((struct o1E4_float *)(t61))->v) = 5.0f;
                (((struct o1FC_uint *)(t61))->v) = 0x2;
                (((struct o1F8_uint *)(t61))->v) = 0x5;
                (((struct oD8_uint *)(t61))->v) = 0x0;
                *(volatile int *)((t61 + 0xBC));
                *(volatile int *)((t61 + 0x1E8));
                t66 = ((int (*)(int, int))(_quick_odd_mvn))(t61, 0x1);
                (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
            }
            if (((((struct o3A0_int *)(a4))->v)) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t73 = (((struct o3B0_int *)(a4))->v);
        (((struct o3B0_uint *)(a4))->v) = (t73 + 0x1);
        if ((int)(t73 + 0x1) <= (int)0x3C) {
            if (((((struct o3A0_int *)(a4))->v)) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t75 = FUN_0c034d0c(a4);
        if (t75 == 0) {
            return FUN_0c02a19a(a4);
        }
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        if (((((struct o3A0_int *)(a4))->v)) == 4) {
            return FUN_0c02280e(a4);
        }
        return FUN_0c022838(a4);
    }
    t78 = FUN_0c0278d0(a4, 0x0);
    if (t78 == 0) {
    } else {
        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
    }
    if (((((struct o3A0_int *)(a4))->v)) == 4) {
        return FUN_0c02280e(a4);
    }
    return FUN_0c022838(a4);
}


int FUN_0c015070(void)
{
    float u16;
    int t24;
    int t26;
    int t31;
    int t32;
    int t41;
    int t42;
    int t52;
    int t71;
    int t73;
    int t84;
    int t88;
    int t89;
    int t92;
    int t177;
    int t25;
    int t47;
    int stk[15];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    FUN_0c0c465c(0x1469);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4634);
    FUN_0c0c465c(0x13B8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4658);
    FUN_0c0c465c(0x13BB);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F464C);
    FUN_0c014fae(0xC23EB48, 0.319999993f);
    u16 = 2.64999986f;
    u16 = u16 + 0.319999993f * (float)((((struct o0_int *)0xC23EAC4)->v));
    FUN_0c0dcc70(u16, -0.289999992f, 0.0f);
    FUN_0c0c465c(0x13B9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4640);
    (((struct o28_uint *)0xC23EAC4)->v) = 0x1;
    R1004 = 0x5A;
    R1012 = 0x3;
    (((struct o10_uint *)0xC23EAC4)->v) = (R1004);
    R1008 = 0x0;
    t24 = 0xC23EAD4;
    t26 = 0xC0DCCA0;
    for (;;) {
        if ((int)(R1008) >= (int)(R1012)) {
            break;
        }
        nlPushMatrix(0x0);
        t26 = (R1004);
        t26 = (t26 << 2);
        t26 = (t26 + 0xC0F4A9C);
        t25 = 0xF;
        t31 = 0xC0F4A9C;
        for (;;) {
            if (t25 == 0) {
                break;
            }
            t32 = *(int *)((t26 + 0x0));
            t26 = (t26 + 0x4);
            FUN_0c0c465c(t32);
            FUN_0c0dcc70(0.319999993f, 0.0f, 0.0f);
            t31 = (R1004);
            t25 = (t25 - 1);
            t31 = (t31 + 0x1);
            R1004 = t31;
        }
        nlPopMatrix(0x1);
        FUN_0c0dcc70(0.0f, -0.381999999f, 0.0f);
        t24 = (R1008);
        t24 = (t24 + 0x1);
        R1008 = t24;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t41 = (((struct o8_int *)0xC23EAC4)->v);
    t42 = (((struct oC_int *)0xC23EAC4)->v);
    if (((((struct o8_int *)0xC23EAC4)->v)) != 15) {
        FUN_0c0dcc70(((float)t41 * 0.319999993f), (0.0599999987f - ((float)t42 * 0.381999999f)), -17.7999992f);
        t47 = 0x13B9;
    } else {
        FUN_0c0dcc70(0.0f, (0.0599999987f - ((float)t42 * 0.381999999f)), -17.7999992f);
        t47 = 0x13BA;
    }
    FUN_0c0c465c(t47);
    nlPopMatrix(0x1);
    FUN_0c010c84();
    t52 = *(int *)0xC2498F4;
    if ((0xF0F0 & t52) != 0) {
        if ((0xC0C0 & t52) != 0) {
            if ((t52 & 0x8080) != 0) {
                (((struct o8_uint *)0xC23EAC4)->v) = (((((struct o8_int *)0xC23EAC4)->v)) + 0x1);
            } else {
                (((struct o8_uint *)0xC23EAC4)->v) = (((((struct o8_int *)0xC23EAC4)->v)) - 1);
            }
        } else {
            if ((t52 & 0x2020) != 0) {
                (((struct oC_uint *)0xC23EAC4)->v) = (((((struct oC_int *)0xC23EAC4)->v)) + 0x1);
            } else {
                (((struct oC_uint *)0xC23EAC4)->v) = (((((struct oC_int *)0xC23EAC4)->v)) - 1);
            }
        }
        t71 = (((struct o8_int *)0xC23EAC4)->v);
        (((struct o8_uint *)0xC23EAC4)->v) = (t71 & 0xF);
        t73 = 0x3;
        if ((t71 & 0xF) == 15) {
        } else {
            t73 = (R1012);
        }
        if ((int)((((struct oC_int *)0xC23EAC4)->v)) < 0) {
            (((struct oC_uint *)0xC23EAC4)->v) = (t73 - 1);
        } else {
            if ((int)((((struct oC_int *)0xC23EAC4)->v)) >= (int)t73) {
                (((struct oC_uint *)0xC23EAC4)->v) = 0x0;
            }
        }
    } else {
        t84 = (((struct o0_int *)0xC23EAC4)->v);
        if ((0x4 & t52) != 0) {
            t88 = (((struct o8_int *)0xC23EAC4)->v);
            t89 = (((struct oC_int *)0xC23EAC4)->v);
            if (t88 != 15) {
                t92 = ((((t89 << 2) << 2) - t89) + t88);
                if (((((struct o28_int *)0xC23EAC4)->v)) != 0) {
                    t92 = (((((t89 << 2) << 2) - t89) + t88) + 0x5A);
                }
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = t92;
                if ((int)((((struct o0_int *)0xC23EAC4)->v)) >= (int)0x5) {
                    (((struct o8_uint *)0xC23EAC4)->v) = 0xF;
                    (((struct oC_uint *)0xC23EAC4)->v) = 0x2;
                } else {
                    (((struct o0_uint *)0xC23EAC4)->v) = (((((struct o0_int *)0xC23EAC4)->v)) + 0x1);
                }
            } else {
                if (t89 != 0) {
                    if (t89 != 1) {
                        FUN_0c010c40(0x9);
                        (((struct o28_uint *)0xC23EAC4)->v) = 0x9;
                    } else {
                        *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                        if ((int)((((struct o0_int *)0xC23EAC4)->v)) <= 0) {
                        } else {
                            (((struct o0_uint *)0xC23EAC4)->v) = (((((struct o0_int *)0xC23EAC4)->v)) - 1);
                        }
                    }
                } else {
                    *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                    if ((int)((((struct o0_int *)0xC23EAC4)->v)) < (int)0x5) {
                        (((struct o0_uint *)0xC23EAC4)->v) = (((((struct o0_int *)0xC23EAC4)->v)) + 0x1);
                    }
                }
            }
        } else {
            if ((0x2 & t52) != 0) {
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                if ((int)((((struct o0_int *)0xC23EAC4)->v)) > 0) {
                    (((struct o0_uint *)0xC23EAC4)->v) = (((((struct o0_int *)0xC23EAC4)->v)) - 1);
                }
            } else {
                if ((t52 & 0x8) != 0) {
                    FUN_0c010c40(0x9);
                    (((struct o28_uint *)0xC23EAC4)->v) = 0x9;
                }
            }
        }
    }
    t177 = 0xC52314C;
    if ((*(int *)0xC52314C) != 0) {
        t177 = FUN_0c010c40(0x9);
        (((struct o28_uint *)0xC23EAC4)->v) = 0x2;
    }
    return t177;
}


