/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int FUN_0c08cb10(int a4, int a5, int a6, int a7);
int FUN_0c0acd48(int a4);
int FUN_0c09b4f4(int a4, int a5, int a6, int a7);
int FUN_0c05dd5c(int a4);

int FUN_0c08cb10(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t4;
    register int t21;
    register float u46;
    register int t61;
    register float u73;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x4C));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            t2 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)0x20) {
                *(unsigned int *)((a4 + 0x54)) = 0x14;
            }
            t4 = *(int *)((a4 + 0x58));
            *(unsigned int *)((a4 + 0x58)) = (t4 - 1);
            if ((int)(t4 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x4C)) = 0x0;
                FUN_0c0da2e0();
                *(volatile int *)(((0x60 + a4) + 0x0));
                *(volatile int *)(((0x5C + a4) + 0x0));
                *(unsigned int *)(((0x58 + a4) + 0x0)) = ((FUN_0c0e5f1c()) + (*(int *)(((0x5C + a4) + 0x0))));
                FUN_0c0cc3f8(0x62AA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
    } else {
        t21 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t21 - 1);
        if ((int)(t21 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x4C)) = 0x1;
            *(unsigned int *)((a4 + 0x54)) = 0x0;
            FUN_0c0da2e0();
            *(volatile int *)(((0x68 + a4) + 0x0));
            *(volatile int *)(((0x64 + a4) + 0x0));
            *(unsigned int *)(((0x58 + a4) + 0x0)) = ((FUN_0c0e5f1c()) + (*(int *)(((0x64 + a4) + 0x0))));
            FUN_0c0cc3f8(0x52AA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        }
    }
    if ((*(int *)((a4 + 0x4C))) == 0) {
        return 0x4C;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((*(short *)((a4 + 0x40))));
    nlRotateAY((*(short *)((a4 + 0x3E))));
    nlRotateAX((*(short *)((a4 + 0x3C))));
    u46 = *(float *)((a4 + 0x44));
    nlScale(u46, u46, u46);
    FUN_0c0de000((*(float *)((a4 + 0x44))));
    if ((int)(*(int *)((a4 + 0x58))) < (int)0x14) {
        FUN_0c0c475c(((*(int *)((a4 + 0x50))) + (*(int *)((a4 + 0x54)))), ((float)(*(int *)((a4 + 0x58))) / 20.0f));
    } else {
        FUN_0c0c465c(((*(int *)((a4 + 0x50))) + (*(int *)((a4 + 0x54)))));
    }
    nlPopMatrix(0x1);
    t61 = *(int *)0xC23ED50;
    if (t61 == 38) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (-(*(float *)((a4 + 0x34)))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((-(*(short *)((a4 + 0x40)))));
        nlRotateAY((*(short *)((a4 + 0x3E))));
        nlRotateAX(((-(*(short *)((a4 + 0x3C)))) + 0x8000));
        u73 = *(float *)((a4 + 0x44));
        nlScale(u73, u73, u73);
        FUN_0c0de000((*(float *)((a4 + 0x44))));
        FUN_0c0848d6(0.299999982f, 0.299999982f, 0.399999976f);
        if ((int)(*(int *)((a4 + 0x58))) < (int)0x14) {
            FUN_0c0c475c(((*(int *)((a4 + 0x50))) + (*(int *)((a4 + 0x54)))), ((float)(*(int *)((a4 + 0x58))) / 20.0f));
        } else {
            FUN_0c0c465c(((*(int *)((a4 + 0x50))) + (*(int *)((a4 + 0x54)))));
        }
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        return nlPopMatrix(0x1);
    }
    return t61;
}

int FUN_0c0acd48(int a4)
{
    int stk[16];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u7;
    register int t20;
    register int t29;
    register int t30;
    register int t31;
    register int t35;
    register float u36;
    register int t41;
    register float u43;
    register int t44;
    register int t45;

    t0 = *(int *)((a4 + 0x30));
    t2 = *(int *)((a4 + 0x38));
    t3 = *(int *)(((*(int *)0xC23EE54) + 0x84));
    *(float *)(((int)stk + 8)) = (float)t2;
    t4 = *(int *)((a4 + 0x3C));
    *(float *)(((int)stk + 4)) = (float)t4;
    u7 = (float)t2;
    u7 = u7 + (FUN_0c0da410((*(int *)((a4 + 0x40))))) * (float)t4;
    FUN_0c0dc5a0();
    FUN_0c0dcca0((t3 + 0x30));
    nlRotateAZ((*(short *)((t3 + 0x70))));
    nlRotateAY((*(short *)((t3 + 0x6E))));
    nlRotateAX((*(short *)((t3 + 0x6C))));
    FUN_0c0dcca0(0xC10F0A4);
    FUN_0c0c47ae((0xF60 + (int)u7));
    *(unsigned int *)(((0x40 + a4) + 0x0)) = ((*(int *)(((0x40 + a4) + 0x0))) + (*(short *)(((((t0 << 1) + (t0 << 2)) + 0xC10F130) + 0x2))));
    t20 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t20 + 0x1);
    if ((int)(t20 + 0x1) > (int)(*(short *)(((((t0 << 1) + (t0 << 2)) + 0xC10F130) + 0x0)))) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        *(unsigned int *)((a4 + 0x40)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = (int)u7;
        *(unsigned int *)((a4 + 0x3C)) = (*(short *)(((((t0 << 1) + (t0 << 2)) + 0xC10F130) + 0x4)));
    }
    if ((unsigned int)(*(int *)((a4 + 0x30))) < (unsigned int)0x6) {
    } else {
        *(unsigned int *)(((int)stk + 12)) = 0x8;
        t29 = 0xC10F0B0;
        t30 = 0xC10F0C4;
        for (;;) {
            t31 = FUN_0c0e1830(0xC0ACF44, 0x5C);
            FUN_0c0e19d0(t31);
            FUN_0c0db470(t30, (t31 + 0x34));
            t35 = t30;
            t30 = (t30 + 0xC);
            u36 = 1.0f;
            u36 = u36 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
            nlScaleUnitVector((t31 + 0x40), t35, u36);
            *(unsigned short *)(((0x52 + t31) + 0x0)) = (((FUN_0c0da2e0()) & 0x3FF) + 0x200);
            *(unsigned short *)(((0x54 + t31) + 0x0)) = (((FUN_0c0da2e0()) & 0x3FF) + 0x200);
            *(unsigned short *)(((0x56 + t31) + 0x0)) = (((FUN_0c0da2e0()) & 0x3FF) + 0x200);
            t41 = *(short *)((t29 + 0x0));
            t29 = (t29 + 0x2);
            *(unsigned short *)((t31 + 0x58)) = t41;
            u43 = 120.0f;
            u43 = u43 + 0.00183111057f * (float)(FUN_0c0da2e0());
            *(unsigned int *)((t31 + 0x30)) = (int)u43;
            t44 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t44 - 1);
            if ((t44 - 1) == 0) {
                break;
            }
        }
        t45 = FUN_0c0e1830(0xC0ACFCE, 0x5C);
        FUN_0c0e19d0(t45);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t45 + 0x34)) = *(struct mv3 *)(t30); }
        *(unsigned short *)((t45 + 0x58)) = (*(short *)((t29 + 0x0)));
        FUN_0c0e19f2();
    }
    return nlPopMatrix(0x1);
}

int FUN_0c09b4f4(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register int t2;
    register int t4;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t25;
    register int t26;
    register int t73;
    register int t76;
    register int t77;
    register int t67;
    register int t70;
    register int t71;
    register int t61;
    register int t64;
    register int t65;
    register float u27;
    register float u28;
    register int t29;
    register int t31;
    register float u42;
    register float u43;
    register int t94;
    register int t96;
    register int t8;
    register int t85;
    register int t86;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register int t74;
    register int t68;
    register int t62;
    register int t55;
    register int t56;
    register int t58;
    register int t59;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    t2 = *(int *)((a4 + 0x34));
    t4 = t0;
    if ((*(int *)(((t2 << 2) + 0xC247030))) == 0) {
        t4 = 0x0;
    }
    if (t4 == 0) {
        FUN_0c0e19f2();
    } else {
        t8 = (t2 << 2);
    }
    if (((*(int *)((t4 + 0x2EC))) & 0xF) != 0) {
        *(unsigned int *)((a4 + 0x38)) = 0x1;
    }
    if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
    } else {
        t15 = *(int *)((a4 + 0x3C));
        *(unsigned int *)(((int)stk + 4)) = (t15 - 26);
        t16 = 0x2EC;
        t17 = (t15 - 26);
        t18 = t8;
        t19 = 0xC10C0CC;
        t20 = 0x0;
        for (;;) {
            t25 = *(int *)(((int)stk + 4));
            t26 = *(int *)((((a4 + 0x48) + (t20 << 2)) + 0x0));
            t73 = t17;
            t76 = (t25 - t26);
            t77 = (t20 << 2);
            if ((int)(t25 - t26) < 0) {
                t74 = t18;
            } else {
                t67 = t17;
                t70 = (t25 - t26);
                t71 = (t20 << 2);
                if ((int)(t25 - t26) >= (int)0x30) {
                    t68 = t18;
                } else {
                    t61 = t17;
                    t64 = ((t25 - t26) & 0xF);
                    t65 = (t20 << 2);
                    if ((int)((t25 - t26) & 0xF) < 0) {
                        t62 = t18;
                    } else {
                        t18 = 0x8;
                        if ((int)((t25 - t26) & 0xF) <= (int)t18) {
                            t17 = 0xB0;
                            t16 = 0x8;
                            t17 = (t17 + a4);
                            u27 = *(float *)((t19 + t16));
                            u28 = *(float *)((((t20 << 2) + t17) + 0x0));
                            t16 = (((0.0f > u28)) ? 1 : 0);
                            t29 = t16;
                            t16 = 0x4;
                            t31 = 0x0;
                            if (((*(float *)((t19 + t16))) + (float)t29) != 0.0f) {
                                t31 = 0x1;
                            }
                            t16 = 0x4;
                            *(float *)((((int)stk + 4) + t16)) = (float)t31;
                            if (0.0f > (u27 * u28)) {
                                u21 = 1.0f;
                                u21 = (-u21);
                            } else {
                                u21 = 1.0f;
                            }
                            if (0.0f > (u27 * u28)) {
                                u24 = (u27 * u28);
                                u24 = (-u24);
                            } else {
                                u24 = (u27 * u28);
                            }
                            t16 = 0x454;
                            u22 = (float)((t25 - t26) & 0xF);
                            if ((*(short *)((t4 + t16))) != 0) {
                                t16 = 0x458;
                                u23 = (*(float *)((t4 + t16)));
                            } else {
                                u23 = 1.0f;
                            }
                            t18 = 0xC0DC510;
                            t16 = (nlPushMatrix(0x0));
                            t16 = 0x3E4;
                            t16 = (FUN_0c0dbda0((((((*(short *)((t19 + 0x0))) << 2) << 2) << 2) + (*(int *)((t4 + t16))))));
                            u22 = (u22 * u21);
                            t16 = 0xC09B6F8;
                            u42 = *(float *)((t16 + 0x0));
                            t16 = 0x4;
                            u43 = *(float *)((((int)stk + 4) + t16));
                            t16 = 0xC09B6FC;
                            u22 = (u22 * u42);
                            u22 = (u22 - u43);
                            t16 = (FUN_0c0dcc70(0.0f, (u22 * (*(float *)((t16 + 0x0)))), 0.0f));
                            t18 = 0xC0DC890;
                            t16 = (nlRotateAY((t20 * 0x7123)));
                            t16 = (nlScale(u24, u24, u24));
                            t18 = 0xC200AFC;
                            t17 = 0xC200AF4;
                            t16 = (FUN_0c0848bc(((*(float *)((t17 + 0x0))) * u23), ((*(float *)0xC200AF8) * u23), ((*(float *)((t18 + 0x0))) * u23)));
                            t18 = 0xC0DE000;
                            t16 = (FUN_0c0de000(u24));
                            t16 = (FUN_0c0c47ae(0x2BE));
                            t18 = 0xC0DC4C0;
                            t16 = (nlPopMatrix(0x1));
                        } else {
                            t55 = t17;
                            t56 = t18;
                            t58 = ((t25 - t26) & 0xF);
                            t59 = (t20 << 2);
                        }
                        t61 = t55;
                        t62 = t56;
                        t64 = t58;
                        t65 = t59;
                    }
                    t67 = t61;
                    t68 = t62;
                    t70 = t64;
                    t71 = t65;
                }
                t73 = t67;
                t74 = t68;
                t76 = t70;
                t77 = t71;
            }
            t17 = t73;
            t20 = (t20 + 0x1);
            t18 = t74;
            t19 = (t19 + 0xC);
            if ((int)t20 < (int)0x1A) continue;
            break;
        }
        t85 = t76;
        t86 = t77;
    }
    FUN_0c0849da(t85, t86, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t94 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a4 + 0x40)) = (t94 - 1);
    if ((int)(t94 - 1) < 0) {
        *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x44)));
        t96 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t96 + 0x1);
        if ((int)(t96 + 0x1) > (int)0x4B) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return 0x40;
}

int FUN_0c05dd5c(int a4)
{
    int stk[8];
    register int t22;
    register int t29;
    register float u32;
    register int t45;
    register int t46;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    nlRotateAY(0x8000);
    nlScale(0.099999994f, 0.099999994f, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, (*(float *)((a4 + 0x54))), 0.199999988f);
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    FUN_0c0de3c0(0x4, 0x5);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x80))) != 0) {
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 0.0349999964f);
        *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0249999985f);
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.099999994f);
        t22 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t22 - 1);
        if ((int)(t22 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    t29 = *(short *)((a4 + 0x64));
    *(unsigned short *)((a4 + 0x64)) = (t29 + 0x800);
    nlRotateAZ((short)(t29 + 0x800));
    nlRotateAY(0x8000);
    u32 = *(float *)((a4 + 0x48));
    nlScale(u32, u32, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, (*(float *)((a4 + 0x54))), 0.199999988f);
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x94))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x94)) = ((*(float *)((a4 + 0x94))) - 0.0149999987f);
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + 0.0899999961f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0249999985f);
    t45 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t45 - 1);
    t46 = 0xA0;
    if ((int)(t45 - 1) <= 0) {
        *(unsigned int *)((a4 + 0xA0)) = 0x14;
        *(unsigned int *)((a4 + 0x80)) = 0x1;
        t46 = 0x80;
    }
    return t46;
}
