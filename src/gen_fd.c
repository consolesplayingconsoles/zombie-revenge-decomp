/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e720(int);
int FUN_0c01e79a(int, int);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c033c8c(int, int, int, float);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int, float);
int FUN_0c062f54(int, int, int);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e5dc0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c033e40(int a4);
int FUN_0c01e00e(int a4, int a5, int a6);
int FUN_0c029bf2(int a4);
int FUN_0c0d20b0(int a4);

int FUN_0c033e40(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float t6;
    float t8;
    float u11;
    float u15;
    float u18;
    float u22;
    float u25;
    float u29;
    float u37;
    float u44;
    float u50;
    float u57;
    float u61;
    int t62;
    int stk[165];

    t0 = *(int *)((a4 + 0x4F4));
    t1 = *(int *)(((((t0 << 1) + t0) << 2) + 0xC1F79BC));
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = t2;
        if ((int)t2 < 0) {
            t4 = (t2 + 0xF);
        }
        *(unsigned int *)(((int)stk + 4)) = ((int)t4 >> 4);
        t6 = FUN_0c0da410(((int)t4 >> 4));
        t8 = FUN_0c0d9e90((*(int *)(((int)stk + 4))));
        u11 = (*(float *)((a4 + 0x30)));
        u11 = u11 + t6 * (*(float *)(((t1 + 0x7C) + 0x0)));
        *(float *)(((t3 + (0x1A8 + ((int)stk + 4))) + 0x0)) = u11;
        *(float *)(((t3 + (0x1A8 + ((int)stk + 4))) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u15 = (*(float *)((a4 + 0x38)));
        u15 = u15 + t8 * (*(float *)(((t1 + 0x7C) + 0x0)));
        *(float *)(((t3 + (0x1A8 + ((int)stk + 4))) + 0x8)) = u15;
        u18 = (*(float *)((a4 + 0x30)));
        u18 = u18 + t6 * (*(float *)((t1 + 0x80)));
        *(float *)(((t3 + (0xE8 + ((int)stk + 4))) + 0x0)) = u18;
        *(float *)(((t3 + (0xE8 + ((int)stk + 4))) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u22 = (*(float *)((a4 + 0x38)));
        u22 = u22 + t8 * (*(float *)((t1 + 0x80)));
        *(float *)(((t3 + (0xE8 + ((int)stk + 4))) + 0x8)) = u22;
        u25 = (*(float *)((a4 + 0x30)));
        u25 = u25 + t6 * (*(float *)((t1 + 0x84)));
        *(float *)(((t3 + (((int)stk + 4) + 0x28)) + 0x0)) = u25;
        *(float *)(((t3 + (((int)stk + 4) + 0x28)) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u29 = (*(float *)((a4 + 0x38)));
        u29 = u29 + t8 * (*(float *)((t1 + 0x84)));
        t2 = (t2 + 0x10000);
        *(float *)(((t3 + (((int)stk + 4) + 0x28)) + 0x8)) = u29;
        t3 = (t3 + 0xC);
        if ((int)t2 >= (int)0x100000) {
            break;
        }
    }
    u37 = (*(float *)((a4 + 0x30)));
    u37 = u37 + (*(float *)(((t1 + 0x7C) + 0x0))) * (FUN_0c0da410((((*(short *)((a4 + 0x6E))) - (*(int *)((t1 + 0x74)))) + 0x8000)));
    *(float *)(((int)stk + 32)) = u37;
    *(float *)(((int)stk + 36)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    u44 = (*(float *)((a4 + 0x38)));
    u44 = u44 + (*(float *)(((t1 + 0x7C) + 0x0))) * (FUN_0c0d9e90((((*(short *)((a4 + 0x6E))) - (*(int *)((t1 + 0x74)))) + 0x8000)));
    *(float *)(((int)stk + 40)) = u44;
    u50 = (*(float *)((a4 + 0x30)));
    u50 = u50 + (*(float *)(((t1 + 0x7C) + 0x0))) * (FUN_0c0da410((((*(short *)((a4 + 0x6E))) + (*(int *)((t1 + 0x78)))) + 0x8000)));
    *(float *)(((int)stk + 20)) = u50;
    *(float *)(((int)stk + 24)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    u57 = (*(float *)((a4 + 0x38)));
    u57 = u57 + (*(float *)(((t1 + 0x7C) + 0x0))) * (FUN_0c0d9e90((((*(short *)((a4 + 0x6E))) + (*(int *)((t1 + 0x78)))) + 0x8000)));
    *(float *)(((int)stk + 28)) = u57;
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x30)));
    *(float *)(((int)stk + 12)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x38)));
    u61 = *(float *)0xC03412C;
    t62 = 0x0;
    for (;;) {
        FUN_0c033c8c((t62 + (0x1A8 + ((int)stk + 4))), ((t62 + (0x1A8 + ((int)stk + 4))) + 0xC), 0x3, u61);
        FUN_0c033c8c((t62 + (0xE8 + ((int)stk + 4))), ((t62 + (0xE8 + ((int)stk + 4))) + 0xC), 0x5, u61);
        FUN_0c033c8c((t62 + (((int)stk + 4) + 0x28)), ((t62 + (((int)stk + 4) + 0x28)) + 0xC), 0x1, u61);
        t62 = (t62 + 0xC);
        if ((unsigned int)t62 >= (unsigned int)0xB4) {
            break;
        }
    }
    FUN_0c033c8c(((0x1A8 + ((int)stk + 4)) + 0xB4), (0x1A8 + ((int)stk + 4)), 0x3, u61);
    FUN_0c033c8c(((0xE8 + ((int)stk + 4)) + 0xB4), (0xE8 + ((int)stk + 4)), 0x5, u61);
    FUN_0c033c8c(((((int)stk + 4) + 0x28) + 0xB4), (((int)stk + 4) + 0x28), 0x1, u61);
    FUN_0c033c8c((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0x1, u61);
    return (FUN_0c033c8c((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 0x3, u61));
}

int FUN_0c01e00e(int a4, int a5, int a6)
{
    int t1;
    int t66;
    int t15;
    int t60;
    int t54;
    int t23;
    int t28;
    int t49;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u78;
    int t90;
    int t117;
    int t105;
    int t100;
    int t94;
    int stk[31];

    *(unsigned int *)(((int)stk + 32)) = a5;
    t1 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), a5);
    if (t1 == 0) {
        FUN_0c01e720(a4);
        t117 = 0x0;
    } else {
        *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 24)));
        if ((*(int *)(((int)stk + 24))) == 4) {
            t66 = 0x20C;
            if (((*(int *)((a4 + 0x20C))) & 0x400000) != 0) {
            } else {
                t15 = *(int *)((t1 + 0x8));
                t60 = 0x20C;
                if ((int)t15 >= (int)0xC) {
                } else {
                    t54 = 0x20C;
                    if ((int)t15 < 0) {
                    } else {
                        t23 = *(int *)((((*(int *)((t1 + 0x8))) << 2) + 0xC246FF0));
                        if (((*(int *)((t23 + 0x20C))) & 0x600C0000) == 0) {
                            *(float *)((t23 + 0x54)) = (*(float *)((a4 + 0x54)));
                            *(float *)((t23 + 0x5C)) = (*(float *)((a4 + 0x5C)));
                            t28 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(t23, ((int)stk + 24), (a5 & 0xFFFFFFFD));
                            if (t28 == 0) {
                                *(float *)((t23 + 0x30)) = ((*(float *)((t23 + 0x30))) + (*(float *)(((0x54 + t23) + 0x0))));
                                *(float *)((t23 + 0x34)) = ((*(float *)((t23 + 0x34))) + (*(float *)(((0x58 + t23) + 0x0))));
                                *(float *)((t23 + 0x38)) = ((*(float *)((t23 + 0x38))) + (*(float *)(((0x5C + t23) + 0x0))));
                            }
                        }
                        t49 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), (a5 & 0xFFFFFFFD));
                        if (t49 == 0) {
                            FUN_0c01e720(a4);
                        }
                        t54 = t1;
                    }
                    t60 = t54;
                }
                t66 = t60;
            }
            t105 = t66;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x18)) = *(struct mv3 *)((0x98 + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x24)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 20)) = 0.149999991f;
            u72 = *(float *)((a4 + 0x38));
            u73 = *(float *)((a4 + 0x5C));
            *(float *)(((int)stk + 44)) = u73;
            *(float *)(((int)stk + 16)) = (u72 - (u73 * 0.099999994f));
            u74 = *(float *)((a4 + 0x34));
            *(float *)(((int)stk + 40)) = u74;
            u75 = *(float *)((a4 + 0x58));
            *(float *)(((int)stk + 36)) = u75;
            *(float *)(((int)stk + 12)) = (u74 - (u75 * 0.099999994f));
            u76 = *(float *)((a4 + 0x30));
            u77 = *(float *)((a4 + 0x54));
            *(float *)(((int)stk + 8)) = (u76 - (u77 * 0.099999994f));
            u78 = *(float *)(((int)stk + 44));
            *(float *)(((int)stk + 4)) = (u72 + u78);
            FUN_0c0a6928((((int)stk + 4) + 0x44), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x4C), 0x0, (u72 + u78), (u76 - (u77 * 0.099999994f)), (u74 - (u75 * 0.099999994f)), (u72 - (u73 * 0.099999994f)), 0.149999991f, (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))), (*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x90))), (*(float *)((a4 + 0x94))), (u76 + u77), ((*(float *)(((int)stk + 40))) + (*(float *)(((int)stk + 36)))));
            FUN_0c01e79a(a4, (((int)stk + 24) + 0x30));
            t90 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (a5 & 0xFFFFFFFD));
            if (t90 != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 24) + 0x24)); }
                if (((*(int *)((t90 + 0x98))) & 112) != 0) {
                    *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 28)));
                    t94 = t90;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                    t94 = t1;
                }
                t100 = t94;
            } else {
                FUN_0c01e720(a4);
                t100 = t1;
            }
            t105 = t100;
        }
        t117 = t105;
    }
    return t117;
}

int FUN_0c029bf2(int a4)
{
    int t0;
    int t8;
    int t16;
    float u21;
    int t33;
    int t37;
    int t51;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    L_C029BF2:;
    t0 = *(int *)((R4 + 0x3A0));
    R0 = (t0);
    R11 = (0x78);
    R12 = (0x1);
    R14 = (R4);
    if ((t0 == 0)) goto L_C029C3C;
    goto L_C029C0C;
    L_C029C0C:;
    if ((R0 == 1)) goto L_C029C92;
    goto L_C029C10;
    L_C029C10:;
    if ((R0 != 2)) goto L_C029C18;
    goto L_C029C14;
    L_C029C14:;
    goto L_C029D34;
    L_C029D34:;
    t8 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t8 - 1);
    R0 = (0x3AC);
    if (((int)(t8 - 1) >= 0)) goto L_C029DF8;
    goto L_C029D40;
    L_C029D40:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x32;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    R0 = (0x3A0);
    goto L_C029DF8;
    L_C029DF8:;
    return R0;
    L_C029C18:;
    if ((R0 != 3)) goto L_C029C20;
    goto L_C029C1C;
    L_C029C1C:;
    goto L_C029DA0;
    L_C029DA0:;
    if ((((*(int *)((R14 + 0x2EC))) & 12) == 0)) goto L_C029DCC;
    goto L_C029DA8;
    L_C029DA8:;
    t16 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t16 << 2) + t16) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    goto L_C029DCC;
    L_C029DCC:;
    FUN_0c029646(R14, 0x0, 0x40);
    u21 = *(float *)0xC029EC4;
    R0 = (0x220);
    F4 = (u21);
    if ((_builtin_fabsf((float)(*(short *)((R14 + 0x220)))) > u21)) goto L_C029DF8;
    goto L_C029DE6;
    L_C029DE6:;
    R0 = (0x222);
    if ((_builtin_fabsf((float)(*(short *)((R14 + 0x222)))) > F4)) goto L_C029DF8;
    goto L_C029DF4;
    L_C029DF4:;
    R0 = ((FUN_0c02a19a(R14, R5, R6, R7)));
    goto L_C029DF8;
    L_C029C20:;
    if ((R0 != 4)) goto L_C029C28;
    goto L_C029C24;
    L_C029C24:;
    goto L_C029DCC;
    L_C029C28:;
    goto L_C029DF8;
    L_C029C92:;
    FUN_0c029646(R14, 0x1, 0x40);
    t33 = *(int *)((R14 + 0x3B0));
    *(unsigned int *)((R14 + 0x3B0)) = (t33 - 1);
    R0 = (0x3B0);
    R13 = (0x0);
    if (((int)(t33 - 1) > 0)) goto L_C029CB6;
    goto L_C029CA8;
    L_C029CA8:;
    *(unsigned int *)((R14 + 0x374)) = R13;
    *(unsigned int *)((R14 + 0x3B0)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = R13;
    goto L_C029CCA;
    L_C029CCA:;
    t37 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t37 - 1);
    R0 = (0x3AC);
    if (((int)(t37 - 1) < 0)) goto L_C029CDA;
    goto L_C029CD6;
    L_C029CD6:;
    goto L_C029DF8;
    L_C029CDA:;
    *(unsigned int *)((R14 + R0)) = R11;
    *(unsigned int *)((R14 + (R0 + 0x4))) = R13;
    *(unsigned int *)((R14 + ((R0 + 0x4) - 16))) = ((*(int *)((R14 + ((R0 + 0x4) - 16)))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 16)) = *(struct mv4 *)(0xC0F54A4); }
    *(float *)(((int)stk + 32)) = -0.399999976f;
    *(float *)(((int)stk + 36)) = 1.19999993f;
    *(float *)(((int)stk + 40)) = -2.0999999f;
    FUN_0c062d4a(R14, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x1C), 0xFFFFF800, (R13), (R12), (R13), F4);
    R0 = ((FUN_0c0372f8(R14, 0x123A9, 0x223A9, (*(int *)((R14 + 0x3AC))))));
    goto L_C029DF8;
    L_C029CB6:;
    *(volatile int *)((R14 + R0));
    *(unsigned int *)(((0x374 + R14) + 0x0)) = (FUN_0c0e5dc0());
    goto L_C029CCA;
    L_C029C3C:;
    FUN_0c029646(R14, 0x1, 0x40);
    t51 = *(int *)((R14 + 0x2EC));
    R0 = (t51);
    if (((t51 & 12) != 0)) goto L_C029C50;
    goto L_C029C4C;
    L_C029C4C:;
    goto L_C029DF8;
    L_C029C50:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x2F;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x3AC)) = R11;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x10)) = *(struct mv3 *)(0xC0F5498); }
    FUN_0c062f54(R14, (((int)stk + 16) + 0x10), 0x1);
    *(unsigned int *)((R14 + 0x3B0)) = R11;
    R0 = ((FUN_0c0372f8(R14, 0x323A9, 0x423A9, (*(int *)((R14 + 0x3B0))))));
    goto L_C029DF8;
}

int FUN_0c0d20b0(int a4)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t8;
    float u10;
    int t14;
    int t13;
    int t71;
    float u73;
    int t62;
    float u64;
    int t29;
    int t30;
    int t54;
    float u56;
    int t40;
    int t41;

    t0 = *(int *)0xC2498F8;
    t1 = *(int *)0xC2498F4;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1EA0A8);
    t5 = 0xC20C46C;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0xC20C47C) {
            break;
        }
        t6 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        FUN_0c0c465c(t6);
    }
    t8 = *(int *)0xC523158;
    u10 = (float)(t8 & 0x3F);
    if (((*(int *)0xC523158) & 64) != 0) {
        u10 = (63.0f - (float)(t8 & 0x3F));
    }
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)0x3) {
            break;
        }
        t13 = t14;
        t13 = (t13 << 2);
        t13 = (t13 + 0xC20C47C);
        if (t14 == (*(int *)0xC943400)) {
            FUN_0c0c465c((*(int *)((t13 + 0x0))));
            FUN_0c0c465c(0x1316);
            FUN_0c0c475c(0x1315, (u10 / 63.0f));
        } else {
            FUN_0c0c475c((*(int *)((t13 + 0x0))), 0.5f);
            FUN_0c0c465c(0x1314);
        }
        FUN_0c0dcc70(0.0f, (-1.0f), 0.0f);
        t14 = (t14 + 0x1);
    }
    if ((t1 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x1;
        t71 = 0x2;
        u73 = 63.0f;
    } else {
        if ((0x1010 & t1) != 0) {
            *(unsigned int *)0xC943400 = ((*(int *)0xC943400) - 1);
            if ((((*(int *)0xC2497C0) != 0) && (t29 = *(int *)0xC2497D0, t29 != 0)) || (t30 = *(int *)0xC943400, t30 != 1)) {
            } else {
                *(unsigned int *)0xC943400 = ((*(int *)0xC943400) - 1);
            }
            if ((int)(*(int *)0xC943400) < 0) {
                *(unsigned int *)0xC943400 = 0x2;
            }
            FUN_0c0cc3f8(0x29A9, 0x2, 63.0f);
        } else {
            if ((0x2020 & t1) != 0) {
                *(unsigned int *)0xC943400 = ((*(int *)0xC943400) + 0x1);
                if ((((*(int *)0xC2497C0) != 0) && (t40 = *(int *)0xC2497D0, t40 != 0)) || (t41 = *(int *)0xC943400, t41 != 1)) {
                } else {
                    *(unsigned int *)0xC943400 = ((*(int *)0xC943400) + 0x1);
                }
                if ((int)(*(int *)0xC943400) > (int)0x2) {
                    *(unsigned int *)0xC943400 = 0x0;
                }
                FUN_0c0cc3f8(0x29A9, 0x2, 63.0f);
            } else {
                t54 = 0x2;
                u56 = 63.0f;
            }
            t62 = t54;
            u64 = u56;
        }
        t71 = t62;
        u73 = u64;
    }
    if ((t1 & 0x604) != 0) {
        if ((t0 & 8) == 0) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        } else {
            *(unsigned int *)((a4 + 0x34)) = 0x4;
        }
        FUN_0c0cc3f8(0x828A9, t71, u73);
    }
    return nlPopMatrix(0x1);
}
