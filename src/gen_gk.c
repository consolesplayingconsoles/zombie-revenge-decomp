/* Straight-line functions with calls and guards (batch gen_gk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c01e720(int);
int FUN_0c01e770(int);
int FUN_0c01e79a(int, int);
int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02a416(int);
int FUN_0c033530(int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c08448c(int);
int FUN_0c0848d6(int, int, float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08b810(int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c095cc4(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e6118(void);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
float FUN_0c0287ce(int a4);
int FUN_0c0a4cd0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c01e32e(int a4, int a5);
int FUN_0c05b6fc(int a4, int a5, int a6);

float FUN_0c0287ce(int a4)
{
    int t2;
    int t16;
    int t38;
    int t60;
    int t63;
    int t64;
    int t81;
    int t98;
    int t104;
    int t105;
    int t111;
    int t112;
    int t117;
    int t118;
    int t122;
    float u130;
    float u131;
    float u132;
    float u133;
    float u134;
    int stk[55];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    FUN_0c0e6118();
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x34)) = *(struct mv8 *)(0xC0F5470); }
    t2 = (FUN_0c02a416(R4)) == 0;
    R10 = ((((int)stk + 4) + 0x34));
    R11 = ((((int)stk + 4) + 0x54));
    R14 = (R4);
    R9 = (0x0);
    if (t2) goto L_C028818;
    *(unsigned int *)((R14 + 0x534)) = R9;
    L_C028D2E:;
    R0 = ((FUN_0c02a19a(R14, R5, R6, R7)));
    L_C028D82:;
    return F0;
    L_C028818:;
    if (((*(int *)((R14 + 0x50C))) != 0)) goto L_C028824;
    goto L_C028D2E;
    L_C028824:;
    R8 = (0xC246FF0);
    if (((*(int *)((0xC247030 + ((*(int *)((R14 + 0x510))) << 2)))) == 4)) goto L_C02883A;
    goto L_C028D2E;
    L_C02883A:;
    t16 = *(int *)((R14 + 0x3A0));
    R0 = (t16);
    R12 = (0x5);
    R13 = ((*(int *)(((((*(int *)((R14 + 0x510))) << 2) + R8) + 0x0))));
    F15 = (30.0f);
    if ((t16 == 0)) goto L_C0288B0;
    if ((R0 != 1)) goto L_C02885C;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x30);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x2C);
    FUN_0c0a7714((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x30), ((*(float *)((R14 + 0x24C))) - (*(float *)((R14 + 0x518)))), ((*(float *)((R14 + 0x250))) - (*(float *)((R14 + 0x51C)))), ((*(float *)((R14 + 0x254))) - (*(float *)((R14 + 0x520)))));
    FUN_0c0546fe(R14, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x40, 0x1);
    FUN_0c05473c(R14, (*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), 0x40, 0x1);
    t38 = (FUN_0c0277c4(R14, 0.0249999985f)) != 0;
    if (!(t38)) goto L_C028D7C;
    *(unsigned int *)((R14 + 0x3AC)) = R9;
    *(float *)((R14 + 0x51C)) = ((*(float *)((R13 + 0x34))) + F15);
    goto L_C028CD2;
    L_C028D7C:;
    R0 = ((FUN_0c022838(R14)));
    goto L_C028D82;
    L_C028CD2:;
    R0 = (0x3A0);
    R2 = (0x2);
    L_C028CD6:;
    *(unsigned int *)((R14 + R0)) = R2;
    goto L_C028D7C;
    L_C02885C:;
    if ((R0 != 2)) goto L_C028864;
    FUN_0c0277c4(R14, 0.0899999961f);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x2C);
    FUN_0c0a7714((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x30), ((*(float *)((R14 + 0x24C))) - (*(float *)((R14 + 0x518)))), (((*(float *)((R14 + 0x250))) - (*(float *)((R13 + 0x34)))) + -10.0f), ((*(float *)((R14 + 0x254))) - (*(float *)((R14 + 0x520)))));
    FUN_0c05473c(R14, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x80, 0x1);
    if ((!((*(float *)((R14 + 0x51C))) > (*(float *)((R14 + 0x34)))))) goto L_C028A96;
    goto L_C028D7C;
    L_C028A96:;
    *(float *)((R14 + 0x51C)) = ((*(float *)((R13 + 0x34))) + 10.0f);
    t60 = *(int *)((R14 + 0x488));
    *(unsigned int *)((R14 + 0x534)) = 0x9;
    *(unsigned int *)((t60 + 0xBC)) = (*(int *)((R14 + 0xBC)));
    *(unsigned int *)((t60 + 0x1EC)) = (*(int *)((R14 + 0x1EC)));
    *(unsigned int *)((t60 + 0x200)) = 0x1;
    *(unsigned int *)((t60 + 0x1E8)) = 0x1;
    *(unsigned int *)((t60 + 0x1F4)) = 0xF;
    *(unsigned int *)((t60 + 0x204)) = R9;
    *(float *)((t60 + 0x1E4)) = 12.0f;
    *(unsigned int *)((t60 + 0x1FC)) = 0x2;
    *(unsigned int *)((t60 + 0x1F8)) = R12;
    *(unsigned int *)((t60 + 0xD8)) = R9;
    t63 = *(int *)((t60 + 0xBC));
    t64 = *(int *)((t60 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t60 + 0x30)) = *(struct mv3 *)((((((((t63 << 1) + t63) << 2) << 2) << 2) + 0xC23F268) + (((t64 << 1) + t64) << 2))); }
    *(unsigned int *)((t60 + 0x21C)) = 0x1;
    *(unsigned int *)((R14 + 0x3A0)) = 0x3;
    R4 = (t60);
    goto L_C028D7C;
    L_C028864:;
    if ((R0 != 3)) goto L_C02886C;
    FUN_0c0277c4(R14, 0.119999997f);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x2C);
    FUN_0c0a7714((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x30), ((*(float *)((R14 + 0x24C))) - (*(float *)((R14 + 0x518)))), (((*(float *)((R14 + 0x250))) - (*(float *)((R13 + 0x34)))) + -30.0f), ((*(float *)((R14 + 0x254))) - (*(float *)((R14 + 0x520)))));
    FUN_0c05473c(R14, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x80, 0x1);
    if ((!(((*(float *)((R13 + 0x34))) + 15.0f) > (*(float *)((R14 + 0x34)))))) goto L_C028C5C;
    t81 = *(int *)((R14 + 0x488));
    R4 = (t81);
    T_ = ((((*(int *)((t81 + 0x21C))) == 0)));
    if ((T_)) goto L_C028C5C;
    R0 = (0xD8);
    if (((*(int *)((R4 + 0xD8))) == 0)) goto L_C028C1C;
    if (((*(int *)((R4 + R0))) != 2)) goto L_C028BE2;
    FUN_0c090f70(R4);
    L_C028C5C:;
    if ((!((*(float *)((R14 + 0x34))) > (*(float *)((R14 + 0x51C)))))) goto L_C028C6C;
    goto L_C028D7C;
    L_C028C6C:;
    *(float *)((R14 + 0x51C)) = ((*(float *)((R13 + 0x34))) + F15);
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x2C)) = *(struct mv2 *)(0xC0F5490); }
    FUN_0c095cc4(R14);
    FUN_0c0cc3f8(0xF2AA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t98 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t98 + 0x1);
    R13 = (0x7);
    if (((int)(t98 + 0x1) >= (int)0x3)) goto L_C028CDA;
    if (((int)((*(int *)((R8 + 0x84))) + (*(int *)0xC246A3C)) >= (int)R12)) goto L_C028CD2;
    t104 = *(int *)0xC23A258;
    *(unsigned int *)(((int)stk + 4)) = (t104 & R13);
    t105 = *(int *)(((int)stk + 4));
    FUN_0c033530(((((t105 << 1) + t105) << 2) + R11), (*(int *)((R10 + ((t104 & R13) << 2)))), 0x0);
    goto L_C028CD2;
    L_C028CDA:;
    *(unsigned int *)(((int)stk + 4)) = R9;
    L_C028D0A:;
    if (((int)((*(int *)((R8 + 0x84))) + (*(int *)0xC246A3C)) < (int)R12)) goto L_C028CDE;
    *(unsigned int *)((R14 + 0x3A0)) = 0x4;
    goto L_C028D7C;
    L_C028CDE:;
    t111 = *(int *)(((int)stk + 4));
    t112 = *(int *)0xC23A258;
    FUN_0c033530(((((((t111 + t112) & R13) << 1) + ((t111 + t112) & R13)) << 2) + R11), (*(int *)((R10 + (((t111 + t112) & R13) << 2)))), 0x0);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C028D0A;
    L_C028BE2:;
    FUN_0c0909fc(R4);
    goto L_C028C5C;
    L_C028C1C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x3C)) = *(struct mv3 *)((R4 + 0x30)); }
    t117 = *(int *)((R4 + 0xBC));
    t118 = *(int *)((R4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x30)) = *(struct mv3 *)((((((((t117 << 1) + t117) << 2) << 2) << 2) + 0xC23F268) + (((t118 << 1) + t118) << 2))); }
    FUN_0c01cdc2(R4, R5);
    goto L_C028C5C;
    L_C02886C:;
    if ((R0 != 4)) goto L_C028874;
    t122 = (FUN_0c0277c4(R14, 0.0149999997f)) == 0;
    if (t122) goto L_C028D7C;
    goto L_C028D2E;
    L_C028874:;
    goto L_C028D7C;
    L_C0288B0:;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x30);
    FUN_0c0a7714((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x30), ((*(float *)((R13 + 0x30))) - (*(float *)((R14 + 0x24C)))), ((*(float *)((R13 + 0x34))) - (*(float *)((R14 + 0x250)))), ((*(float *)((R13 + 0x38))) - (*(float *)((R14 + 0x254)))));
    u130 = *(float *)((R14 + 0x24C));
    u131 = *(float *)((R13 + 0x30));
    u132 = *(float *)((R14 + 0x254));
    u133 = *(float *)((R13 + 0x38));
    u134 = ((u133 - u132) * (u133 - u132));
    u134 = u134 + (u131 - u130) * (u131 - u130);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((R14 + 0x24C))), (*(float *)((R13 + 0x34))), (*(float *)((R14 + 0x254))));
    nlRotateAY((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = ((*(float *)((R13 + 0x34))) + 20.0f);
    *(float *)(((int)stk + 32)) = (_builtin_sqrtf(u134) + -12.2699995f);
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + R14)) = *(struct mv3 *)((((int)stk + 4) + 0x20)); }
    R0 = (0x3A0);
    R2 = (((*(int *)((R14 + 0x3A0))) + 0x1));
    goto L_C028CD6;
}

int FUN_0c0a4cd0(int a4, int a5, int a6, int a7, float f4)
{
    int t14;
    int t16;
    int t226;
    int t35;
    float u36;
    int t38;
    float u39;
    int t47;
    float u48;
    int t50;
    float u51;
    int t71;
    int t123;
    int t124;
    int t75;
    int t77;
    int t78;
    int t81;
    int t82;
    float u142;
    float u154;
    float u156;
    int t166;
    float u168;
    int t172;
    float u187;
    float u200;
    int t223;
    int t239;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u42;
    float u54;
    int t113;
    int t114;
    int t100;
    int t90;
    int stk[21];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC10D0E8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC10D0F4); }
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
        t239 = (FUN_0c0e19f2(0xC246FF0, a5, a6, a7));
    } else {
        t14 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        t16 = *(int *)((0xC247030 + ((*(int *)((t14 + 0xBC))) << 2)));
        t226 = t16;
        if (t16 == 8) {
        } else {
            if ((((*(int *)((t14 + 0x4D0))) != 0) && (((t24 = *(int *)((a4 + 0x80)), (int)t24 > 0) || ((t25 = *(int *)((a4 + 0x80)), t25 == 0) && (t26 = *(int *)((a4 + 0x78)), t26 == 1))) && (t27 = *(int *)((t14 + 0x4DC)), t27 == 0))) || (t28 = *(int *)((t14 + 0x304)), (int)t28 <= 0)) {
                *(unsigned int *)((a4 + 0x80)) = 0xFFFFFFE2;
            }
            if ((int)(*(int *)((a4 + 0x80))) > 0) {
                t35 = *(int *)(((0x80 + a4) + 0x0));
                u36 = *(float *)((a4 + 0x90));
                *(float *)((a4 + 0x90)) = (u36 + (90.0f / (float)t35));
                if ((u36 + (90.0f / (float)t35)) > 90.0f) {
                    *(float *)((a4 + 0x90)) = 90.0f;
                }
                t38 = *(int *)(((0x80 + a4) + 0x0));
                u39 = *(float *)((a4 + 0x94));
                *(float *)((a4 + 0x94)) = (u39 + (-90.0f / (float)t38));
                if (-90.0f > (u39 + (-90.0f / (float)t38))) {
                    *(float *)((a4 + 0x94)) = -90.0f;
                }
                if (((*(float *)((a4 + 0x90))) == 90.0f) && (u42 = *(float *)((a4 + 0x94)), u42 == -90.0f)) {
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                    *(unsigned int *)((a4 + 0x78)) = 0x1;
                }
            } else {
                if ((int)(*(int *)((a4 + 0x80))) < 0) {
                    t47 = *(int *)(((0x80 + a4) + 0x0));
                    u48 = *(float *)((a4 + 0x90));
                    *(float *)((a4 + 0x90)) = (u48 + (90.0f / (float)t47));
                    if (0.0f > (u48 + (90.0f / (float)t47))) {
                        *(float *)((a4 + 0x90)) = 0.0f;
                    }
                    t50 = *(int *)(((0x80 + a4) + 0x0));
                    u51 = *(float *)((a4 + 0x94));
                    *(float *)((a4 + 0x94)) = (u51 + (-90.0f / (float)t50));
                    if ((u51 + (-90.0f / (float)t50)) > 0.0f) {
                        *(float *)((a4 + 0x94)) = 0.0f;
                    }
                    if (((*(float *)((a4 + 0x90))) == 0.0f) && (u54 = *(float *)((a4 + 0x94)), u54 == 0.0f)) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(unsigned int *)((a4 + 0x84)) = 0x0;
                        *(unsigned int *)((a4 + 0x78)) = 0x0;
                        *(unsigned int *)((a4 + 0xA0)) = 0x0;
                        *(unsigned int *)((a4 + 0xA4)) = 0x4;
                    }
                }
            }
            t71 = *(int *)((a4 + 0x84));
            t123 = 0x0;
            t124 = a5;
            if (t71 != 0) {
                if (t71 != 1) {
                    t113 = 0x0;
                    t114 = a5;
                } else {
                    t75 = *(int *)((a4 + 0xA0));
                    if ((int)t75 > 0) {
                        *(volatile int *)((a4 + 0xA0));
                        t77 = FUN_0c0e5dc0();
                        t78 = *(int *)(((0x70 + a4) + 0x0));
                        *(unsigned int *)((a4 + 0x70)) = (t78 + t77);
                        if ((int)(t78 + t77) > (int)a5) {
                            *(unsigned int *)((a4 + 0x70)) = a5;
                        }
                        t100 = a5;
                    } else {
                        if ((int)t75 < 0) {
                            *(volatile int *)((a4 + 0xA0));
                            t81 = FUN_0c0e5dc0();
                            t82 = *(int *)(((0x70 + a4) + 0x0));
                            *(unsigned int *)((a4 + 0x70)) = (t82 + t81);
                            if ((int)(t82 + t81) < 0) {
                                *(unsigned int *)((a4 + 0x70)) = a4;
                            }
                        } else {
                            t90 = 0x1000;
                        }
                        t100 = t90;
                    }
                    *(unsigned int *)(((a4 + 0x68) + 0x0)) = ((*(int *)(((a4 + 0x68) + 0x0))) - (*(int *)(((a4 + 0x68) + 0x8))));
                    *(unsigned int *)(((a4 + 0x68) + 0x4)) = ((*(int *)(((a4 + 0x68) + 0x4))) - (*(int *)(((a4 + 0x68) + 0x8))));
                    t113 = (a4 + 0x68);
                    t114 = t100;
                }
                t123 = t113;
                t124 = t114;
            }
            FUN_0c0848d6(t123, t124, (*(float *)(((0x45C + t14) + 0x0))), (*(float *)(((0x45C + t14) + 0x4))), (*(float *)(((0x45C + t14) + 0x8))));
            if ((*(int *)((t14 + 0x38C))) != 0) {
                FUN_0c08b810(a4);
            }
            nlPushMatrix(0x0);
            FUN_0c0dbda0((*(int *)((t14 + 0x3E4))));
            nlPushMatrix(0x0);
            u142 = *(float *)((a4 + 0x90));
            FUN_0c0dcc70(((((*(float *)(((((int)stk + 4) + 0x14) + 0x0))) * u142) / 90.0f) + -1.5f), ((((*(float *)(((((int)stk + 4) + 0x14) + 0x4))) * u142) / 90.0f) + 2.69999981f), ((((*(float *)(((((int)stk + 4) + 0x14) + 0x8))) * u142) / 90.0f) + -0.227699995f));
            nlRotateAY((int)((*(float *)((a4 + 0x90))) * 182.044434f));
            FUN_0c0de000(((*(float *)((t14 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x72B);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            u154 = *(float *)((a4 + 0x94));
            *(float *)(((int)stk + 8)) = u154;
            u156 = *(float *)(((int)stk + 8));
            FUN_0c0dcc70(((((*(float *)(((int)stk + 12))) * u156) / -90.0f) + 1.5f), ((((*(float *)(((int)stk + 16))) * u156) / -90.0f) + 2.69999981f), ((((*(float *)(((int)stk + 20))) * u154) / -90.0f) + -0.227699995f));
            nlRotateAY((int)((*(float *)((a4 + 0x94))) * 182.044434f));
            FUN_0c0de000(((*(float *)((t14 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x72C);
            nlPopMatrix(0x1);
            t166 = *(int *)((a4 + 0x84));
            if (t166 != 0) {
                if (t166 != 1) {
                    if (t166 == 2) {
                        nlPushMatrix(0x0);
                        u168 = *(float *)((t14 + 0x284));
                        nlScale((1.0f / u168), (1.0f / u168), (1.0f / u168));
                        FUN_0c0de000((1.0f / (*(float *)((t14 + 0x284)))));
                        t172 = 0x0;
                        for (;;) {
                            if ((int)t172 >= (int)(*(int *)((a4 + 0xA4)))) {
                                break;
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 4)) = ((((t172 << 1) + t172) << 2) + 0xC201110);
                            FUN_0c0dcc70((*(float *)((((((t172 << 1) + t172) << 2) + 0xC201110) + 0x0))), (*(float *)((((((t172 << 1) + t172) << 2) + 0xC201110) + 0x4))), (*(float *)((((((t172 << 1) + t172) << 2) + 0xC201110) + 0x8))));
                            FUN_0c0c47ae(0x125C);
                            nlPopMatrix(0x1);
                            t172 = (t172 + 0x1);
                        }
                        nlPopMatrix(0x1);
                    }
                } else {
                    nlPushMatrix(0x0);
                    u187 = (*(float *)((a4 + 0x90)));
                    u187 *= -0.319999993f;
                    FUN_0c0dcc70((*(float *)0xC0A51CC), (*(float *)0xC0A51C8), ((u187 / 90.0f) + (*(float *)0xC0A51C4)));
                    nlRotateAZ((*(int *)(((a4 + 0x68) + 0x0))));
                    FUN_0c0de000(((*(float *)((t14 + 0x284))) * 1.0f));
                    FUN_0c0c47ae(0x711);
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    u200 = (*(float *)((a4 + 0x94)));
                    u200 *= -0.319999993f;
                    FUN_0c0dcc70((*(float *)0xC0A51D4), (*(float *)0xC0A51C8), ((u200 / -90.0f) + (*(float *)0xC0A51C4)));
                    nlRotateAZ((*(int *)((a4 + 0x6C))));
                    FUN_0c0de000(((*(float *)((t14 + 0x284))) * 1.0f));
                    FUN_0c0c47ae(0x712);
                    nlPopMatrix(0x1);
                }
            }
            nlPopMatrix(0x1);
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            t223 = 0x38C;
            if ((*(int *)((t14 + 0x38C))) != 0) {
                t223 = (FUN_0c08448c(0x1));
            }
            t226 = t223;
        }
        t239 = t226;
    }
    return t239;
}

int FUN_0c01e32e(int a4, int a5)
{
    int t1;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    int t27;
    int t36;
    int t58;
    int t117;
    int t108;
    int t64;
    float u70;
    float u71;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    int t92;
    int t138;
    int t126;
    int t49;
    int t43;
    int t31;
    int t99;
    int t95;
    int stk[36];

    t1 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), a5);
    if (t1 == 0) {
        FUN_0c01e720(a4);
        t138 = 0x0;
    } else {
        *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 24)));
        if ((*(int *)(((int)stk + 24))) != 4) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x18)) = *(struct mv3 *)((0x98 + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x24)) = *(struct mv3 *)((a4 + 0x30)); }
            *(unsigned int *)((a4 + 0xB0)) = (*(int *)(((int)stk + 24)));
            if ((int)(*(int *)(((int)stk + 24))) >= (int)0x15) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 24) + 0x24)); }
                t49 = t1;
            } else {
                *(float *)(((int)stk + 20)) = 0.149999991f;
                u9 = *(float *)((a4 + 0x38));
                u10 = *(float *)((a4 + 0x5C));
                *(float *)(((int)stk + 16)) = (u9 - (u10 * 0.099999994f));
                u11 = *(float *)((a4 + 0x34));
                *(float *)(((int)stk + 44)) = u11;
                u12 = *(float *)((a4 + 0x58));
                *(float *)(((int)stk + 40)) = u12;
                *(float *)(((int)stk + 12)) = (u11 - (u12 * 0.099999994f));
                u13 = *(float *)((a4 + 0x30));
                *(float *)(((int)stk + 36)) = u13;
                u14 = *(float *)((a4 + 0x54));
                *(float *)(((int)stk + 8)) = (u13 - (u14 * 0.099999994f));
                *(float *)(((int)stk + 4)) = (u9 + u10);
                FUN_0c0a6928((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x58), 0x0, (u9 + u10), (u13 - (u14 * 0.099999994f)), (u11 - (u12 * 0.099999994f)), (u9 - (u10 * 0.099999994f)), (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))), (*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x90))), (*(float *)((a4 + 0x94))), ((*(float *)(((int)stk + 36))) + u14), ((*(float *)(((int)stk + 44))) + (*(float *)(((int)stk + 40)))));
                FUN_0c01e79a(a4, (((int)stk + 24) + 0x3C));
                t27 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (0xFFFFFFFD & a5));
                if (t27 != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 24) + 0x24)); }
                    if (((*(int *)((t27 + 0x98))) & 112) != 0) {
                        *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 28)));
                        t31 = t27;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                        t31 = t1;
                    }
                    t43 = t31;
                } else {
                    t36 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (0x2 & a5));
                    if (t36 == 0) {
                        FUN_0c01e720(a4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 24) + 0x24)); }
                    }
                    t43 = t1;
                }
                t49 = t43;
            }
            t126 = t49;
        } else {
            t58 = *(int *)((t1 + 0x8));
            t117 = t1;
            if ((int)t58 >= (int)0xC) {
            } else {
                t108 = t1;
                if ((int)t58 < 0) {
                } else {
                    if (((*(int *)((a4 + 0x20C))) & 0x400000) != 0) {
                        t99 = (FUN_0c01e720(a4));
                    } else {
                        t64 = *(int *)((((*(int *)((t1 + 0x8))) << 2) + 0xC246FF0));
                        FUN_0c0a68ec((((int)stk + 24) + 0x8), ((*(float *)((t64 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t64 + 0x38))) - (*(float *)((a4 + 0x38)))));
                        u70 = *(float *)((a4 + 0x48));
                        u71 = *(float *)((a4 + 0x30));
                        u72 = *(float *)((t64 + 0x30));
                        u73 = *(float *)((a4 + 0x50));
                        u74 = *(float *)((a4 + 0x38));
                        u75 = *(float *)((t64 + 0x38));
                        u76 = *(float *)((a4 + 0x214));
                        u77 = *(float *)((t64 + 0x214));
                        u78 = (((u74 + u73) - u75) * ((u74 + u73) - u75));
                        u78 = u78 + ((u71 + u70) - u72) * ((u71 + u70) - u72);
                        u79 = (_builtin_fabsf((((u76 + u77) - _builtin_sqrtf(u78)) + 0.099999994f)) * 0.199999988f);
                        if ((_builtin_fabsf((((u76 + u77) - _builtin_sqrtf(u78)) + 0.099999994f)) * 0.199999988f) > 0.799999952f) {
                            u79 = 0.799999952f;
                        }
                        FUN_0c0a6800((*(int *)(((int)stk + 32))), (((int)stk + 24) + 0x30), 0.0f, 0.0f, u79);
                        *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - (*(float *)(((((int)stk + 24) + 0x30) + 0x0))));
                        *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) - (*(float *)(((((int)stk + 24) + 0x38) + 0x0))));
                        if (0.049999997f > _builtin_fabsf((*(float *)((a4 + 0x54))))) {
                            *(float *)((a4 + 0x54)) = 0.0f;
                        }
                        if (0.049999997f > _builtin_fabsf((*(float *)((a4 + 0x5C))))) {
                            *(float *)((a4 + 0x5C)) = 0.0f;
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x18)) = *(struct mv3 *)((0x98 + a4)); }
                        t92 = ((int (*)(int, int, int, float))((*(int *)0xC245F94)))(a4, ((int)stk + 24), (0xFFFFFFFD & a5), 0.049999997f);
                        if (t92 == 0) {
                            FUN_0c01e770(a4);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                            t95 = t1;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                            *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 24)));
                            t95 = t92;
                        }
                        *(unsigned int *)0xC245F9C = 0xFFFFFFFF;
                        t99 = t95;
                    }
                    t108 = t99;
                }
                t117 = t108;
            }
            t126 = t117;
        }
        t138 = t126;
    }
    return t138;
}

int FUN_0c05b6fc(int a4, int a5, int a6)
{
    int t1;
    int t10;
    int t37;
    int t66;
    int t70;
    int t76;
    int t82;
    int stk[21];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F8;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(unsigned int *)(((int)stk + 8)) = R6;
    t1 = (int)(*(int *)((R4 + 0xBC))) < (int)0x2;
    R0 = (0xBC);
    R11 = (0x1);
    R12 = (R5);
    R13 = (R4);
    R4 = (0x0);
    if (t1) goto L_C05B76C;
    R4 = (R11);
    L_C05B7A4:;
    if (!((R4 != 0))) goto L_C05BA0E;
    t10 = FUN_0c0e19aa(0xC05BCD0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t10);
    *(unsigned int *)((t10 + 0x21C)) = 0x0;
    *(unsigned int *)((t10 + 0xBC)) = (*(int *)((R13 + 0xBC)));
    *(unsigned int *)(((0x200 + t10) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x2)));
    R0 = (0xE8);
    R14 = (t10);
    if (((int)(*(short *)((R13 + 0xE8))) >= (int)0x4)) goto L_C05B818;
    if (((*(signed char *)((R12 + 0x4))) == 0)) goto L_C05B7EC;
    R1 = ((*(int *)((R13 + 0x1EC))));
    goto L_C05B824;
    L_C05BA0E:;
    return R0;
    L_C05B824:;
    *(unsigned int *)((R14 + 0x1EC)) = R1;
    *(unsigned int *)(((0x1E8 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x3)));
    *(unsigned int *)(((0x1F4 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x4)));
    *(unsigned int *)(((0x204 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x5)));
    *(float *)((R14 + 0x1E4)) = (*(float *)((R12 + 0xC)));
    *(unsigned int *)(((0x1FC + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x1)));
    *(unsigned int *)((R14 + 0x1F8)) = (unsigned char)(*(signed char *)((R12 + 0x0)));
    *(unsigned int *)(((0x22C + R14) + 0x0)) = (unsigned short)(*(short *)((R12 + 0x8)));
    FUN_0c0cc3f8(0x828A9, R5, R6, R7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    FUN_0c0cc054((*(int *)((R13 + 0xBC))), 0x5);
    *(unsigned int *)((R13 + 0xEC)) = R11;
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x14)) = *(struct mv3 *)(0xC0F9B6C); }
    FUN_0c0dbda0((((((*(int *)((R13 + 0xBC))) << 8) + 0xC25F840) + (((((*(int *)(((int)stk + 8))) << 2) << 2) << 2) << 1)) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    t37 = *(int *)((R13 + 0x340));
    FUN_0c0db470(((((t37 << 1) + t37) << 2) + 0xC1FEFBC), (R14 + 0x30));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 8) + 0x8) + 0x8);
    FUN_0c0a79fa((((int)stk + 8) + 0x8), ((((int)stk + 8) + 0x8) + 0x4), ((((int)stk + 8) + 0x8) + 0x8));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 8) + 0x8) + 0x4) + 0x0))));
    nlRotateAX((*(int *)(((((int)stk + 8) + 0x8) + 0x0))));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    FUN_0c0db470((((int)stk + 8) + 0x14), (R14 + 0x48));
    FUN_0c0a7714((((int)stk + 8) + 0x8), ((((int)stk + 8) + 0x8) + 0x4), (-(*(float *)((R14 + 0x48)))), (-(*(float *)((R14 + 0x4C)))), (-(*(float *)((R14 + 0x50)))));
    *(unsigned short *)((R14 + 0x6E)) = (*(int *)((((((int)stk + 8) + 0x8) + 0x4) + 0x0)));
    *(unsigned short *)((R14 + 0x6C)) = (*(int *)(((((int)stk + 8) + 0x8) + 0x0)));
    nlPopMatrix(0x1);
    *(unsigned int *)((R14 + 0x220)) = 0x124E;
    *(float *)((R14 + 0x238)) = 1.19999993f;
    *(float *)((R14 + 0x24C)) = 1.0f;
    *(float *)((R14 + 0x250)) = 1.19999993f;
    *(float *)((R14 + 0x3C)) = ((*(float *)((R14 + 0x30))) - ((*(float *)((R14 + 0x48))) * 0.699999988f));
    R0 = (0x40);
    F2 = (((*(float *)((R14 + 0x34))) - ((*(float *)((R14 + 0x4C))) * 0.699999988f)));
    F4 = (0.699999988f);
    *(float *)((R14 + R0)) = F2;
    *(float *)((R14 + 0x44)) = ((*(float *)((R14 + 0x38))) - ((*(float *)((R14 + 0x50))) * F4));
    t66 = (*(int *)(((int)stk + 8)));
    *(int *)((int)stk + 4) = t66;
    R0 = ((FUN_0c05b274(R13, R12, R14, 0x0, t66)));
    goto L_C05BA0E;
    L_C05B7EC:;
    R1 = (0x0);
    goto L_C05B824;
    L_C05B818:;
    t70 = *(short *)((R13 + R0));
    R1 = ((~((((int)t70 >= 0) ? (R11 << (t70 & 31)) : ((-(int)t70 & 31) ? ((int)R11 >> (-(int)t70 & 31)) : ((int)R11 >> 31))) | 0xFF000)));
    goto L_C05B824;
    L_C05B76C:;
    R0 = (0x344);
    if (((*(int *)((R13 + 0x344))) != 0)) goto L_C05B778;
    goto L_C05BA0E;
    L_C05B778:;
    t76 = *(int *)((((*(int *)((R13 + 0x34C))) << 2) + 0xC2475D4));
    R0 = (0x21C);
    R5 = (t76);
    if (((int)(*(int *)((t76 + 0x21C))) <= 0)) goto L_C05B7A4;
    *(unsigned int *)((R5 + R0)) = ((*(int *)((R5 + R0))) - 1);
    t82 = *(int *)((R13 + 0xBC));
    *(unsigned int *)(((((t82 << 2) << 2) << 1) + 0xC247544)) = ((*(int *)(((((t82 << 2) << 2) << 1) + 0xC247544))) + 0x1);
    R0 = (0xC247544);
    R4 = (R11);
    goto L_C05B7A4;
}
