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
int FUN_0c05b274(int, int, int, int, int, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0853d4(int, float);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a4bb2(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bfa46(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c3748(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
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
int FUN_0c0e19f2(int);
int _quick_odd_mvn(void);
int FUN_0c05b6fc(int a4, int a5, int a6);
int FUN_0c09d6fe(int a4, int a5, int a6, int a7);
int FUN_0c0c3a3e(int a4);
int FUN_0c027d08(int a4);
int FUN_0c087510(int a4);
int FUN_0c015070(void);
int FUN_0c0316d4(int a4, int a5);
int FUN_0c0635ec(int a4, int a5);



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

    if ((int)(*(int *)(((*(int *)0xC262390) + 0x40))) < (int)0x206B) {
        t8 = (*(int *)0xC191314);
    } else {
        t8 = ((*(int *)(((*(int *)0xC260CB8) + 0x0))) - 1584);
    }
    if (((*(int *)0xC2497B0) & 240) != 0) {
        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
    } else {
        *(unsigned int *)((a4 + 0x98)) = 0x0;
    }
    if ((((*(int *)0xC2497B8) & 0x40) == 0) && ((t16 = *(int *)((a4 + 0x98)), (int)t16 <= (int)0x28) || (t17 = *(int *)0xC2497B0, (t17 & 0x40) == 0))) {
        if ((((*(int *)0xC2497B8) & 0x80) == 0) && ((t28 = *(int *)((a4 + 0x98)), (int)t28 <= (int)0x28) || (t29 = *(int *)0xC2497B0, (t29 & 0x80) == 0))) {
        } else {
            t30 = *(int *)((a4 + 0x78));
            *(unsigned int *)((a4 + 0x78)) = (t30 + 0x1);
            if (((int)(t30 + 0x1) > (int)0x206B) && (t31 = *(int *)((((((0xFFFFDFF8 + (t30 + 0x1)) << 2) << 2) + t8) + 0x4)), t31 == -1)) {
                *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0x78))) - 1);
            }
            *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = (*(int *)((a4 + 0x78)));
        }
    } else {
        t40 = *(int *)((a4 + 0x78));
        *(unsigned int *)((a4 + 0x78)) = (t40 - 1);
        if ((int)(t40 - 1) < (int)0x2008) {
            *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0x78))) + 0x1);
        }
        *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = (*(int *)((a4 + 0x78)));
    }
    t51 = *(int *)0xC2497B8;
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
        FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = 0x2008;
        *(unsigned int *)((a4 + 0x78)) = 0x2008;
    } else {
        if ((t51 & 2) != 0) {
            if ((int)(*(int *)(((*(int *)0xC262390) + 0x3C))) > 0) {
                t73 = *(int *)0xC262390;
                *(unsigned int *)((t73 + 0x3C)) = ((*(int *)((t73 + 0x3C))) - 1);
            }
            FUN_0c0bfa90();
            FUN_0c0c45d0();
            FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = 0x2008;
            *(unsigned int *)((a4 + 0x78)) = 0x2008;
        }
    }
    t102 = *(int *)0xC2497B0;
    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
        if ((t102 & 0x100000) != 0) {
            t106 = *(int *)0xC262390;
            *(float *)((t106 + 0x4C)) = ((*(float *)((t106 + 0x4C))) - 0.099999994f);
        }
        if ((0x200000 & (*(int *)0xC2497B0)) == 0) {
        } else {
            t113 = *(int *)0xC262390;
            *(float *)((t113 + 0x4C)) = ((*(float *)((t113 + 0x4C))) + 0.099999994f);
        }
    } else {
        if (((*(int *)0xC2497B0) & 0x40000) != 0) {
            if ((t102 & 0x100000) != 0) {
                t122 = *(int *)0xC262390;
                *(float *)((t122 + 0x54)) = ((*(float *)((t122 + 0x54))) + 0.049999997f);
            }
            if ((0x200000 & (*(int *)0xC2497B0)) != 0) {
                t129 = *(int *)0xC262390;
                *(float *)((t129 + 0x54)) = ((*(float *)((t129 + 0x54))) - 0.049999997f);
            }
            if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                t136 = *(int *)0xC262390;
                *(float *)((t136 + 0x50)) = ((*(float *)((t136 + 0x50))) + 0.049999997f);
            }
            if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                t143 = *(int *)0xC262390;
                *(float *)((t143 + 0x50)) = ((*(float *)((t143 + 0x50))) - 0.049999997f);
            }
        } else {
            if (((*(int *)0xC2497B0) & 0x20000) != 0) {
                if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                    t152 = *(int *)0xC262390;
                    *(unsigned int *)((t152 + 0x58)) = ((*(int *)((t152 + 0x58))) - 0x100);
                }
                if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                    t159 = *(int *)0xC262390;
                    *(unsigned int *)((t159 + 0x58)) = ((*(int *)((t159 + 0x58))) + 0x100);
                }
            } else {
                if ((t102 & 0x100000) != 0) {
                    t165 = *(int *)0xC262390;
                    *(float *)((t165 + 0x48)) = ((*(float *)((t165 + 0x48))) - 1.0f);
                }
                if ((0x200000 & (*(int *)0xC2497B0)) != 0) {
                    t172 = *(int *)0xC262390;
                    *(float *)((t172 + 0x48)) = ((*(float *)((t172 + 0x48))) + 1.0f);
                }
                if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                    t179 = *(int *)0xC262390;
                    *(float *)((t179 + 0x44)) = ((*(float *)((t179 + 0x44))) - 1.0f);
                }
                if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                    t186 = *(int *)0xC262390;
                    *(float *)((t186 + 0x44)) = ((*(float *)((t186 + 0x44))) + 1.0f);
                }
            }
        }
    }
    if (((*(int *)0xC2497B8) & 0x80000) != 0) {
        FUN_0c0c3748();
    }
    t230 = *(int *)0xC262390;
    *(unsigned int *)((t230 + 0x4)) = (*(int *)((t230 + 0x40)));
    t232 = *(int *)0xC262390;
    *(float *)((t232 + 0x8)) = (*(float *)((t232 + 0x44)));
    t234 = *(int *)0xC262390;
    *(float *)((t234 + 0xC)) = (*(float *)((t234 + 0x48)));
    t236 = *(int *)0xC262390;
    *(float *)((t236 + 0x10)) = (*(float *)((t236 + 0x4C)));
    t238 = *(int *)0xC262390;
    *(unsigned int *)((t238 + 0x2C)) = (*(int *)((t238 + 0x58)));
    t240 = *(int *)0xC262390;
    *(unsigned int *)((t240 + 0x38)) = (*(int *)((t240 + 0x5C)));
    *(float *)(((*(int *)0xC262390) + 0x30)) = 1.0f;
    t243 = *(int *)0xC262390;
    *(float *)((t243 + 0x14)) = (*(float *)((t243 + 0x50)));
    t245 = *(int *)0xC262390;
    *(float *)((t245 + 0x18)) = (*(float *)((t245 + 0x54)));
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
        *(unsigned int *)((a4 + 0x534)) = 0x0;
        return FUN_0c02a19a(a4);
    }
    t4 = *(int *)((a4 + 0x3A0));
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
                        FUN_0c0cc3f8(0x82CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t19 = FUN_0c032394(a4);
                    if ((int)t19 >= 0) {
                        t23 = *(int *)((a4 + 0x488));
                        if ((*(int *)((t23 + 0xD8))) != 0) {
                            if ((*(int *)((t23 + 0xD8))) != 2) {
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
                        if ((*(int *)((a4 + 0x3A0))) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    return FUN_0c02a19a(a4);
                }
                if (t4 == 4) {
                    t37 = FUN_0c0352b4(a4, 0x80, 0x1);
                    if (t37 != 0) {
                        t38 = FUN_0c032394(a4);
                        if ((int)t38 < 0) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            return FUN_0c02a19a(a4);
                        }
                        t42 = *(int *)((a4 + 0x488));
                        if ((*(int *)((t42 + 0xD8))) != 0) {
                            if ((*(int *)((t42 + 0xD8))) == 2) {
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
                        if ((*(int *)((a4 + 0x3A0))) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    return FUN_0c02a19a(a4);
                }
                if ((*(int *)((a4 + 0x3A0))) == 4) {
                    return FUN_0c02280e(a4);
                }
                return FUN_0c022838(a4);
            }
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
                return FUN_0c02a19a(a4);
            }
            FUN_0c0278d0(a4, 0x1);
            t60 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t60 + 0x1);
            if ((int)(t60 + 0x1) <= (int)0x3C) {
            } else {
                t61 = *(int *)((a4 + 0x488));
                *(unsigned int *)((a4 + 0x534)) = 0x9;
                *(unsigned int *)((t61 + 0xBC)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)((t61 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
                *(unsigned int *)((t61 + 0x200)) = 0x1;
                *(unsigned int *)((t61 + 0x1E8)) = 0x1;
                *(unsigned int *)((t61 + 0x1F4)) = 0x50;
                *(unsigned int *)((t61 + 0x204)) = 0x0;
                *(float *)((t61 + 0x1E4)) = 5.0f;
                *(unsigned int *)((t61 + 0x1FC)) = 0x2;
                *(unsigned int *)((t61 + 0x1F8)) = 0x5;
                *(unsigned int *)((t61 + 0xD8)) = 0x0;
                *(volatile int *)((t61 + 0xBC));
                *(volatile int *)((t61 + 0x1E8));
                t66 = ((int (*)(int, int))(_quick_odd_mvn))(t61, 0x1);
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            if ((*(int *)((a4 + 0x3A0))) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t73 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t73 + 0x1);
        if ((int)(t73 + 0x1) <= (int)0x3C) {
            if ((*(int *)((a4 + 0x3A0))) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t75 = FUN_0c034d0c(a4);
        if (t75 == 0) {
            return FUN_0c02a19a(a4);
        }
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        if ((*(int *)((a4 + 0x3A0))) == 4) {
            return FUN_0c02280e(a4);
        }
        return FUN_0c022838(a4);
    }
    t78 = FUN_0c0278d0(a4, 0x0);
    if (t78 == 0) {
    } else {
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    }
    if ((*(int *)((a4 + 0x3A0))) == 4) {
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
    int t176;
    int t25;
    int t47;
    int stk[15];

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
    u16 = u16 + 0.319999993f * (float)(*(int *)0xC23EAC4);
    FUN_0c0dcc70(u16, -0.289999992f, 0.0f);
    FUN_0c0c465c(0x13B9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4640);
    *(unsigned int *)0xC23EAEC = 0x1;
    *(unsigned int *)(((int)stk + 4)) = 0x5A;
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    *(unsigned int *)0xC23EAD4 = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t24 = 0xC23EAD4;
    t26 = 0xC0DCCA0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 12)))) {
            break;
        }
        nlPushMatrix(0x0);
        t26 = (*(int *)(((int)stk + 4)));
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
            t31 = (*(int *)(((int)stk + 4)));
            t25 = (t25 - 1);
            t31 = (t31 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t31;
        }
        nlPopMatrix(0x1);
        FUN_0c0dcc70(0.0f, -0.381999999f, 0.0f);
        t24 = (*(int *)(((int)stk + 8)));
        t24 = (t24 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t24;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t41 = *(int *)0xC23EACC;
    t42 = *(int *)0xC23EAD0;
    if ((*(int *)0xC23EACC) != 15) {
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
                *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) + 0x1);
            } else {
                *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) - 1);
            }
        } else {
            if ((t52 & 0x2020) != 0) {
                *(unsigned int *)0xC23EAD0 = ((*(int *)0xC23EAD0) + 0x1);
            } else {
                *(unsigned int *)0xC23EAD0 = ((*(int *)0xC23EAD0) - 1);
            }
        }
        t71 = *(int *)0xC23EACC;
        *(unsigned int *)0xC23EACC = (t71 & 0xF);
        t73 = 0x3;
        if ((t71 & 0xF) == 15) {
        } else {
            t73 = (*(int *)(((int)stk + 12)));
        }
        if ((int)(*(int *)0xC23EAD0) < 0) {
            *(unsigned int *)0xC23EAD0 = (t73 - 1);
        } else {
            if ((int)(*(int *)0xC23EAD0) >= (int)t73) {
                *(unsigned int *)0xC23EAD0 = 0x0;
            }
        }
    } else {
        t84 = *(int *)0xC23EAC4;
        if ((0x4 & t52) != 0) {
            t88 = *(int *)0xC23EACC;
            t89 = *(int *)0xC23EAD0;
            if (t88 != 15) {
                t92 = ((((t89 << 2) << 2) - t89) + t88);
                if ((*(int *)0xC23EAEC) != 0) {
                    t92 = (((((t89 << 2) << 2) - t89) + t88) + 0x5A);
                }
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = t92;
                if ((int)(*(int *)0xC23EAC4) >= (int)0x5) {
                    *(unsigned int *)0xC23EACC = 0xF;
                    *(unsigned int *)0xC23EAD0 = 0x2;
                } else {
                    *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) + 0x1);
                }
            } else {
                if (t89 != 0) {
                    if (t89 != 1) {
                        FUN_0c010c40(0x9);
                        *(unsigned int *)0xC23EAEC = 0x9;
                    } else {
                        *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                        if ((int)(*(int *)0xC23EAC4) <= 0) {
                        } else {
                            *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) - 1);
                        }
                    }
                } else {
                    *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                    if ((int)(*(int *)0xC23EAC4) < (int)0x5) {
                        *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) + 0x1);
                    }
                }
            }
        } else {
            if ((0x2 & t52) != 0) {
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                if ((int)(*(int *)0xC23EAC4) > 0) {
                    *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) - 1);
                }
            } else {
                if ((t52 & 0x8) != 0) {
                    FUN_0c010c40(0x9);
                    *(unsigned int *)0xC23EAEC = 0x9;
                }
            }
        }
    }
    t177 = 0xC52314C;
    if ((*(int *)0xC52314C) != 0) {
        t176 = FUN_0c010c40(0x9);
        *(unsigned int *)0xC23EAEC = 0x2;
        t177 = t176;
    }
    return t177;
}


