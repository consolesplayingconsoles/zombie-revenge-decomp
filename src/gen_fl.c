/* Straight-line functions with calls and guards (batch gen_fl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05265c(float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c473c(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0c7ab8(int a4, int a5, int a6, int a7);
int FUN_0c08ff08(int a4, int a5, int a6, int a7);

int FUN_0c0c7ab8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t29;
    int t32;
    int t36;
    float u37;
    float u39;
    float u40;
    float u58;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_C0C7AB8:;
    t0 = *(int *)((R4 + 0x70));
    t1 = *(int *)((((t0 << 2) + 0xC247030) + 0x0));
    R14 = (R4);
    R4 = ((*(int *)(((0xC246FF0 + (t0 << 2)) + 0x0))));
    R5 = (t1);
    if (((int)t1 >= (int)0x2)) goto L_C0C7AEC;
    goto L_C0C7AE6;
    L_C0C7AE6:;
    *(unsigned int *)((R14 + 0x9C)) = 0x3;
    goto L_C0C7AEC;
    L_C0C7AEC:;
    t7 = *(int *)((R14 + 0x9C));
    R0 = (t7);
    F12 = (0.0f);
    F14 = (1.0f);
    if ((t7 == 0)) goto L_C0C7B14;
    goto L_C0C7AF8;
    L_C0C7AF8:;
    if ((R0 == 1)) goto L_C0C7B2C;
    goto L_C0C7AFC;
    L_C0C7AFC:;
    if ((R0 == 2)) goto L_C0C7B3E;
    goto L_C0C7B00;
    L_C0C7B00:;
    if ((R0 != 3)) goto L_C0C7B08;
    goto L_C0C7B04;
    L_C0C7B04:;
    goto L_C0C7C82;
    L_C0C7C82:;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) + 0x1);
    goto L_C0C7C8A;
    L_C0C7C8A:;
    *(unsigned int *)((((*(int *)((R14 + 0x98))) << 2) + 0xC31FD20)) = 0x0;
    return FUN_0c0e19f2(R4, R5, R6, a7);
    L_C0C7B08:;
    if ((R0 != 4)) goto L_C0C7B10;
    goto L_C0C7B0C;
    L_C0C7B0C:;
    goto L_C0C7C8A;
    L_C0C7B10:;
    goto L_C0C7CF8;
    L_C0C7CF8:;
    return R0;
    L_C0C7B3E:;
    if ((R5 == 5)) goto L_C0C7B6C;
    goto L_C0C7B46;
    L_C0C7B46:;
    *(float *)((R14 + 0xA4)) = ((float)(*(int *)((R4 + 0x304))) / (float)(*(int *)((R4 + 0x308))));
    goto L_C0C7B70;
    L_C0C7B70:;
    if (((*(float *)((R14 + 0xAC))) != 0.0f)) goto L_C0C7B84;
    goto L_C0C7B7A;
    L_C0C7B7A:;
    *(float *)((R14 + 0xA0)) = (*(float *)((R14 + 0xA4)));
    goto L_C0C7BA0;
    L_C0C7BA0:;
    R0 = (0xAC);
    if ((!(F14 > (*(float *)((R14 + 0xAC)))))) goto L_C0C7BB4;
    goto L_C0C7BA8;
    L_C0C7BA8:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) + 0.0199999996f);
    goto L_C0C7BB4;
    L_C0C7BB4:;
    if ((R5 != 5)) goto L_C0C7BDC;
    goto L_C0C7BBC;
    L_C0C7BBC:;
    t29 = *(int *)((R14 + 0x94));
    *(unsigned int *)((R14 + 0x94)) = (t29 - 1);
    if (((int)(t29 - 1) > 0)) goto L_C0C7BD0;
    goto L_C0C7BC8;
    L_C0C7BC8:;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) + 0x1);
    goto L_C0C7BD0;
    L_C0C7BD0:;
    t32 = *(int *)((R14 + 0x94));
    R0 = (t32);
    if (((t32 & 1) != 0)) goto L_C0C7BDC;
    goto L_C0C7BD8;
    L_C0C7BD8:;
    goto L_C0C7CF8;
    L_C0C7BDC:;
    nlPushMatrix(0x0);
    t36 = *(int *)((R14 + 0x98));
    u37 = *(float *)((((t36 * 0x1C) + 0xC1E9910) + 0x18));
    u39 = *(float *)((R14 + 0xAC));
    u40 = (u37 * (*(float *)((R14 + 0xA8))));
    nlUnitMatrix();
    FUN_0c0dcca0(((t36 * 0x1C) + 0xC1E9910));
    nlScale((u40 * u39), (u37 * 0.5f), (u37 * 0.5f));
    *(float *)(((int)stk + 4)) = ((u40 * u39) + (u37 * 0.5f));
    FUN_0c0de000(((u40 * u39) + (u37 * 0.5f)));
    FUN_0c0c473c(0x1D);
    nlUnitMatrix();
    FUN_0c0dcca0((((t36 * 0x1C) + 0xC1E9910) + 0xC));
    nlScale((u40 * u39), (u37 * 0.5f), (u37 * 0.5f));
    FUN_0c0de000((*(float *)(((int)stk + 4))));
    FUN_0c0848bc(F12, F14, F14);
    FUN_0c05265c((*(float *)((R14 + 0xA0))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    return nlPopMatrix(0x1);
    L_C0C7B84:;
    u58 = (*(float *)((R14 + 0xA0)));
    u58 = u58 + 0.0799999982f * ((*(float *)(((0xA4 + R14) + 0x0))) - (*(float *)(((0xA0 + R14) + 0x0))));
    *(float *)((R14 + 0xA0)) = u58;
    F0 = (0.0799999982f);
    F1 = (u58);
    goto L_C0C7BA0;
    L_C0C7B6C:;
    *(float *)((R14 + 0xA4)) = F12;
    goto L_C0C7B70;
    L_C0C7B2C:;
    *(unsigned int *)((R14 + 0x94)) = 0x3C;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) + 0x1);
    goto L_C0C7B3E;
    L_C0C7B14:;
    *(float *)((R14 + 0xAC)) = F12;
    *(float *)((R14 + 0xA8)) = (1.0f + 1.0f);
    *(float *)((R14 + 0xA4)) = F14;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) + 0x1);
    goto L_C0C7B2C;
}

int FUN_0c08ff08(int a4, int a5, int a6, int a7)
{
    int t2;
    int t13;
    int t138;
    int t14;
    int t16;
    int t17;
    int t23;
    int t26;
    int t31;
    int t32;
    int t40;
    int t60;
    int t78;
    int t105;
    int t134;
    int t148;
    int t149;
    int t156;
    int t159;
    int t165;
    int t166;
    int t174;
    int t194;
    int t212;
    int t239;
    int t268;
    int t6;
    int t272;
    int t21;
    int t25;
    int t154;
    int t158;

    if ((*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    } else {
        t6 = a4;
    }
    if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
        t13 = *(int *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0xC));
        t138 = t13;
        if (t13 == 3) {
        } else {
            t14 = ((int (*)(int))(FUN_0c0e19f2))(t6);
            t16 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
            if (((int)t16 >= (int)0x2) && ((int)t16 < (int)0x5)) {
                t21 = t16;
            } else {
                t17 = ((int (*)(int))(FUN_0c0e19f2))(t16);
            }
            t23 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
            if (((*(int *)((t23 + 0xD8))) == 0) && (t25 = *(int *)((t23 + 0x4D0)), t25 == 0)) {
            } else {
                t26 = ((int (*)(int))(FUN_0c0e19f2))(t21);
            }
            t31 = *(int *)((a4 + 0x60));
            if (t31 != 0) {
                if (t31 != 1) {
                    if (t31 != 2) {
                        if (t31 != 3) {
                            if (t31 != 4) {
                            } else {
                                t32 = *(int *)((a4 + 0x5C));
                                *(unsigned int *)((a4 + 0x5C)) = (t32 + 0x1);
                                if ((int)(t32 + 0x1) > (int)0x9) {
                                    *(float *)((a4 + 0x40)) = 0.0f;
                                    *(float *)((a4 + 0x3C)) = 0.0f;
                                    *(float *)((a4 + 0x38)) = 0.0f;
                                    *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                                }
                            }
                        } else {
                            t40 = *(int *)((a4 + 0x5C));
                            *(unsigned int *)((a4 + 0x5C)) = (t40 + 0x1);
                            if ((int)(t40 + 0x1) > (int)0x9) {
                                FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 0.5f) / 9.0f));
                                *(float *)((a4 + 0x3C)) = -1.16666663f;
                                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                                *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                            }
                        }
                    } else {
                        t60 = *(int *)((a4 + 0x5C));
                        *(unsigned int *)((a4 + 0x5C)) = (t60 + 0x1);
                        if ((int)(t60 + 0x1) > (int)0x1B) {
                            *(float *)((a4 + 0x38)) = 0.0f;
                            *(float *)((a4 + 0x40)) = 0.0f;
                            *(float *)((a4 + 0x3C)) = 0.5f;
                            *(unsigned int *)((a4 + 0x5C)) = 0x0;
                            *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                        } else {
                            nlAddVector((a4 + 0x38), (a4 + 0x44));
                        }
                    }
                } else {
                    t78 = *(int *)((a4 + 0x5C));
                    *(unsigned int *)((a4 + 0x5C)) = (t78 + 0x1);
                    if ((int)(t78 + 0x1) > (int)0x1C) {
                        FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 1.0f) / 26.0f));
                        FUN_0c0dce80((a4 + 0x44), (a4 + 0x50), (((-((*(float *)((a4 + 0x64))) * 1.0f)) / 26.0f) / 27.0f));
                        *(float *)((a4 + 0x3C)) = 1.65384614f;
                        *(float *)((a4 + 0x48)) = -0.0427350402f;
                        *(unsigned int *)((a4 + 0x5C)) = 0x0;
                        *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                    }
                }
            } else {
                *(float *)((a4 + 0x38)) = 0.0f;
                *(float *)((a4 + 0x3C)) = 0.0f;
                *(float *)((a4 + 0x40)) = 0.0f;
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                t105 = *(int *)((a4 + 0x5C));
                *(unsigned int *)((a4 + 0x5C)) = (t105 + 0x1);
                if ((int)(t105 + 0x1) > (int)0x1C) {
                    FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 1.0f) / 26.0f));
                    FUN_0c0dce80((a4 + 0x44), (a4 + 0x50), (((-((*(float *)((a4 + 0x64))) * 1.0f)) / 26.0f) / 27.0f));
                    *(float *)((a4 + 0x3C)) = 1.65384614f;
                    *(float *)((a4 + 0x48)) = -0.0427350402f;
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                }
            }
            nlAddVector((t23 + 0x48), (a4 + 0x38));
            t134 = 0x60;
            if ((int)(*(int *)((a4 + 0x60))) > (int)0x4) {
                t134 = (((int (*)(void))(FUN_0c0e19f2))());
            }
            t138 = t134;
        }
        t272 = t138;
    } else {
        t148 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
        if (((int)t148 >= (int)0x2) && ((int)t148 < (int)0x5)) {
            t154 = t148;
        } else {
            t149 = ((int (*)(int))(FUN_0c0e19f2))(t148);
        }
        t156 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
        if (((*(int *)((t156 + 0xD8))) == 0) && (t158 = *(int *)((t156 + 0x4D0)), t158 == 0)) {
        } else {
            t159 = ((int (*)(int))(FUN_0c0e19f2))(t154);
        }
        t165 = *(int *)((a4 + 0x60));
        if (t165 != 0) {
            if (t165 != 1) {
                if (t165 != 2) {
                    if (t165 != 3) {
                        if (t165 != 4) {
                        } else {
                            t166 = *(int *)((a4 + 0x5C));
                            *(unsigned int *)((a4 + 0x5C)) = (t166 + 0x1);
                            if ((int)(t166 + 0x1) > (int)0x9) {
                                *(float *)((a4 + 0x40)) = 0.0f;
                                *(float *)((a4 + 0x3C)) = 0.0f;
                                *(float *)((a4 + 0x38)) = 0.0f;
                                *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                            }
                        }
                    } else {
                        t174 = *(int *)((a4 + 0x5C));
                        *(unsigned int *)((a4 + 0x5C)) = (t174 + 0x1);
                        if ((int)(t174 + 0x1) > (int)0x9) {
                            FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 0.5f) / 9.0f));
                            *(float *)((a4 + 0x3C)) = -1.16666663f;
                            *(unsigned int *)((a4 + 0x5C)) = 0x0;
                            *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                        }
                    }
                } else {
                    t194 = *(int *)((a4 + 0x5C));
                    *(unsigned int *)((a4 + 0x5C)) = (t194 + 0x1);
                    if ((int)(t194 + 0x1) > (int)0x1B) {
                        *(float *)((a4 + 0x38)) = 0.0f;
                        *(float *)((a4 + 0x40)) = 0.0f;
                        *(float *)((a4 + 0x3C)) = 0.5f;
                        *(unsigned int *)((a4 + 0x5C)) = 0x0;
                        *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                    } else {
                        nlAddVector((a4 + 0x38), (a4 + 0x44));
                    }
                }
            } else {
                t212 = *(int *)((a4 + 0x5C));
                *(unsigned int *)((a4 + 0x5C)) = (t212 + 0x1);
                if ((int)(t212 + 0x1) > (int)0x1C) {
                    FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 1.0f) / 26.0f));
                    FUN_0c0dce80((a4 + 0x44), (a4 + 0x50), (((-((*(float *)((a4 + 0x64))) * 1.0f)) / 26.0f) / 27.0f));
                    *(float *)((a4 + 0x3C)) = 1.65384614f;
                    *(float *)((a4 + 0x48)) = -0.0427350402f;
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                }
            }
        } else {
            *(float *)((a4 + 0x38)) = 0.0f;
            *(float *)((a4 + 0x3C)) = 0.0f;
            *(float *)((a4 + 0x40)) = 0.0f;
            *(unsigned int *)((a4 + 0x5C)) = 0x0;
            *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
            t239 = *(int *)((a4 + 0x5C));
            *(unsigned int *)((a4 + 0x5C)) = (t239 + 0x1);
            if ((int)(t239 + 0x1) > (int)0x1C) {
                FUN_0c0dce80((a4 + 0x38), (a4 + 0x50), (((*(float *)((a4 + 0x64))) * 1.0f) / 26.0f));
                FUN_0c0dce80((a4 + 0x44), (a4 + 0x50), (((-((*(float *)((a4 + 0x64))) * 1.0f)) / 26.0f) / 27.0f));
                *(float *)((a4 + 0x3C)) = 1.65384614f;
                *(float *)((a4 + 0x48)) = -0.0427350402f;
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
            }
        }
        nlAddVector((t156 + 0x48), (a4 + 0x38));
        t268 = 0x60;
        if ((int)(*(int *)((a4 + 0x60))) > (int)0x4) {
            t268 = (((int (*)(void))(FUN_0c0e19f2))());
        }
        t272 = t268;
    }
    return t272;
}
