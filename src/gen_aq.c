/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
extern int FUN_0c022aa6();
int FUN_0c026dbc(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c0329ae(int, int);
int FUN_0c0340a0(int, float);
int FUN_0c035280(int, int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037ee8(int);
int FUN_0c038188(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c475c(int, float);
int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
float FUN_0c0da6a0(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc100(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dcd10(int, int);
int FUN_0c0de000(float);
int FUN_0c0de070(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern int FUN_0c0e61d4();
int FUN_0c0e6248(void);
int FUN_0c05e158(int a4);
int FUN_0c0dd2f0(int a4, float f4, float f5, float f6);
int FUN_0c026ddc(int a4, int a5, int a6);
int FUN_0c04105c(int a4);
int FUN_0c0381b6(int a4);

int FUN_0c05e158(int a4)
{
    int t0;
    int t4;
    int t21;
    float u29;
    int t30;
    int t39;
    float u71;
    int t46;
    int t51;
    int t52;
    float u112;
    int t119;
    int t121;
    float u36;
    int stk[10];

    t0 = ((int (*)(int))(FUN_0c0e61d4))(a4);
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4);
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t4 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t4 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t4 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    t21 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x23C))) == 0) {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
        u29 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
        *(float *)((a4 + 0x238)) = (0.099999994f - u29);
        u36 = u29;
    } else {
        t30 = ((int (*)(void))(FUN_0c0e61d4))();
    }
    if ((*(int *)((a4 + 0xD4))) != 0) {
        t39 = *(int *)((a4 + 0x244));
        *(unsigned int *)((a4 + 0x244)) = (t39 - 1);
        if ((int)(t39 - 1) >= 0) {
            u71 = u36;
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xCC))) << 2)))) == 4) {
                t46 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
                FUN_0c0a68ec(((int)stk + 4), ((*(float *)((t46 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t46 + 0x38))) - (*(float *)((a4 + 0x38)))));
                t51 = *(int *)(((int)stk + 4));
                t52 = *(short *)((a4 + 0x6E));
                if (_builtin_fabsf((float)(short)(t52 - t51)) > 1280.0f) {
                    if ((int)(short)(t52 - t51) > 0) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0x300;
                    } else {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0xFFFFFD00;
                    }
                }
                u71 = _builtin_fabsf((float)(short)(t52 - t51));
            }
        } else {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0xEC + a4) + 0x0))));
            *(unsigned int *)((a4 + 0xEC)) = ((*(int *)((a4 + 0xEC))) - ((((*(int *)(((0xEC + a4) + 0x0))) >> 1) >> 1) >> 1));
        }
    }
    FUN_0c0a6688((((int)stk + 4) + 0x4), (a4 + 0x6C), (a4 + 0x48));
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
    FUN_0c0dc890(0x4000);
    u112 = *(float *)((a4 + 0x24C));
    FUN_0c0dcb80((*(float *)((a4 + 0x238))), u112, u112);
    FUN_0c0de000((*(float *)((a4 + 0x238))));
    FUN_0c0c475c((*(int *)((a4 + 0x220))), 0.699999988f);
    t119 = FUN_0c0e1830(0xC05E41C, 0x5C);
    FUN_0c0e19d0(t119);
    t121 = ((int (*)(void))(FUN_0c0e61d4))();
    FUN_0c0e6248();
    *(unsigned int *)((t119 + 0x30)) = (*(int *)((a4 + 0x220)));
    *(unsigned int *)((t119 + 0x54)) = 0x1E;
    *(float *)((t119 + 0x34)) = (*(float *)((a4 + 0x238)));
    *(float *)((t119 + 0x38)) = (*(float *)((a4 + 0x24C)));
    *(unsigned int *)((t119 + 0x50)) = 0x400;
    return (FUN_0c0dc4c0(0x1));
}

int FUN_0c0dd2f0(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    int t4;
    float t5;
    int t7;
    int t9;
    int t20;
    float t16;
    float t24;
    float u25;
    float u26;
    float u27;
    float u34;
    float u35;
    float u36;
    float t38;
    float u41;
    float t42;
    float t44;
    float t45;
    float t46;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = FUN_0c0da6a0((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t1);
    u2 = *(float *)(((int)stk + 12));
    if ((*(float *)0xC20CE2C) != 0.0f) {
        t4 = FUN_0c0d9d20((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = FUN_0c0da6a0(t4);
        t7 = FUN_0c0d9d20((t5 * ((*(float *)0xC20CE2C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t7)));
    } else {
        t9 = FUN_0c0d9d20((u2 / (1.0f / t1)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t9)));
    }
    t20 = (t0 >> 1);
    if ((*(float *)0xC20CE30) != 0.0f) {
        t16 = FUN_0c0da6a0((t0 >> 1));
        t20 = (FUN_0c0d9d20((t16 * ((*(float *)0xC20CE30) + 1.0f))));
    }
    t24 = FUN_0c0d9e90(t20);
    *(float *)0xC20CE2C = 0.0f;
    *(float *)0xC20CE30 = 0.0f;
    u25 = *(float *)0xC0DD66C;
    u26 = *(float *)(((int)stk + 4));
    u27 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u26 / u27);
    *(float *)0xC20CE20 = ((((u26 / u27) * (*(float *)(((int)stk + 24))))) * u25);
    *(float *)0xC20CE24 = ((((*(float *)(((int)stk + 4))) * (1.0f / t24))) * u25);
    *(float *)0xC948568 = ((*(float *)0xC20CE34) * (*(float *)0xC20CE20));
    u34 = *(float *)0xC20CE24;
    u35 = *(float *)0xC20CE38;
    *(float *)0xC94856C = (u35 * u34);
    u36 = *(float *)0xC948568;
    if (u36 > (u35 * u34)) {
        *(float *)0xC20CE28 = u36;
    } else {
        *(float *)0xC20CE28 = (u35 * u34);
    }
    t38 = FUN_0c0da6a0((t0 >> 1));
    *(float *)(((int)stk + 16)) = (float)(FUN_0c0d9d20((t38 * (*(float *)(((int)stk + 12))))));
    *(float *)0xC94853C = 0.0f;
    *(float *)0xC94852C = 0.0f;
    *(float *)0xC948558 = 0.0f;
    *(float *)0xC948548 = 0.0f;
    u41 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u41;
    t42 = FUN_0c0d9e90((int)u41);
    *(float *)0xC948528 = t42;
    *(float *)0xC948538 = (-t42);
    t44 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    *(float *)0xC948540 = t44;
    *(float *)0xC948530 = t44;
    t45 = FUN_0c0d9e90((t0 >> 1));
    *(float *)0xC94854C = t45;
    *(float *)0xC94855C = (-t45);
    t46 = FUN_0c0da410((t0 >> 1));
    *(float *)0xC948560 = t46;
    *(float *)0xC948550 = t46;
    *(float *)0xC948544 = 0.0f;
    *(float *)0xC948534 = 0.0f;
    *(float *)0xC948564 = 0.0f;
    *(float *)0xC948554 = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = ((((f5 * f6)) * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC990E9C = f5;
    *(float *)0xC990EA0 = f6;
    *(float *)0xC990EA4 = (1.0f / f5);
    *(float *)0xC94825C = f5;
    *(float *)0xC948244 = (-f5);
    *(float *)0xC948260 = f6;
    *(float *)0xC948258 = (1.0f / f5);
    FUN_0c0dc100((((int)stk + 4) + 0x18));
    return (FUN_0c0de070());
}

int FUN_0c026ddc(int a4, int a5, int a6)
{
    int t1;
    int t14;
    int t27;
    int t32;
    int t36;
    int t40;
    int t42;
    int t47;
    int t54;
    int t55;
    int t59;
    int t62;
    float u63;
    int t68;
    int stk[12];

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
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R6 = a6;
    L_C026DDC:;
    FUN_0c035280(R4, 0x400, 0x1);
    t1 = *(int *)((R4 + 0x3A0));
    R0 = (t1);
    R10 = (0xC247D04);
    R11 = (0xA);
    R12 = (0xC03242C);
    R13 = (0xC032394);
    R14 = (R4);
    F14 = (10.0f);
    F15 = (0.0f);
    if ((t1 == 0)) goto L_C026E78;
    goto L_C026E0E;
    L_C026E0E:;
    if ((R0 == 1)) goto L_C026ED6;
    goto L_C026E12;
    L_C026E12:;
    if ((R0 != 2)) goto L_C026E1A;
    goto L_C026E16;
    L_C026E16:;
    goto L_C026F4C;
    L_C026F4C:;
    t14 = (FUN_0c026dbc(R14)) == 0;
    if (t14) goto L_C026FF4;
    goto L_C026F54;
    L_C026F54:;
    FUN_0c0328e4(R14);
    FUN_0c03242c(R14, 0.00999999978f, F14);
    if (((*(float *)((R14 + 0x34))) > (*(float *)((R14 + 0x550))))) goto L_C02702C;
    goto L_C026F70;
    L_C026F70:;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    goto L_C02702C;
    L_C02702C:;
    R0 = ((((int (*)(int, int, int, int, float, float))(FUN_0c022aa6))(R14, R5, R6, R7, F4, F5)));
    goto L_C027032;
    L_C027032:;
    return R0;
    L_C026FF4:;
    *(unsigned int *)((R10 + 0x0)) = R11;
    R0 = ((FUN_0c02a19a(R14, R5, R6, R7)));
    goto L_C027032;
    L_C026E1A:;
    if ((R0 != 3)) goto L_C026E22;
    goto L_C026E1E;
    L_C026E1E:;
    goto L_C026FB8;
    L_C026FB8:;
    t27 = (FUN_0c026dbc(R14)) == 0;
    if (t27) goto L_C026FF4;
    goto L_C026FC0;
    L_C026FC0:;
    FUN_0c0328e4(R14);
    t32 = (FUN_0c03242c(R14, (*(float *)0xC02709C), (*(float *)0xC027098))) != 0;
    R4 = (R14);
    if (t32) goto L_C026FE0;
    goto L_C026FD8;
    L_C026FD8:;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    goto L_C026FE0;
    L_C026FE0:;
    t36 = (int)(FUN_0c032394(R4)) < 0;
    if (t36) goto L_C02701E;
    goto L_C026FE8;
    L_C026FE8:;
    goto L_C02702C;
    L_C02701E:;
    *(unsigned int *)((R14 + 0x534)) = 0x0;
    *(unsigned int *)((R10 + 0x0)) = R11;
    FUN_0c02a19a(R14, R5, R6, R7);
    goto L_C02702C;
    L_C026E22:;
    if ((R0 != 4)) goto L_C026E2A;
    goto L_C026E26;
    L_C026E26:;
    goto L_C026FEC;
    L_C026FEC:;
    t40 = (FUN_0c026dbc(R14)) != 0;
    if (t40) goto L_C027000;
    goto L_C026FF4;
    L_C027000:;
    t42 = (int)(FUN_0c032394(R14)) >= 0;
    if (t42) goto L_C027016;
    goto L_C027008;
    L_C027008:;
    *(unsigned int *)((R14 + 0x534)) = 0x0;
    *(unsigned int *)((R10 + 0x0)) = R11;
    FUN_0c02a19a(R14, R5, R6, R7);
    goto L_C027016;
    L_C027016:;
    if (((*(int *)((R14 + 0xD8))) == 0)) goto L_C02702C;
    goto L_C02701E;
    L_C026E2A:;
    goto L_C02702C;
    L_C026ED6:;
    t47 = (FUN_0c026dbc(R14)) != 0;
    if (t47) goto L_C026EE2;
    goto L_C026EDE;
    L_C026EDE:;
    goto L_C026FF4;
    L_C026EE2:;
    *(float *)(((int)stk + 4)) = F15;
    *(float *)(((int)stk + 8)) = 0.0476349965f;
    *(float *)(((int)stk + 12)) = F15;
    FUN_0c0329ae(R14, ((int)stk + 4));
    FUN_0c03242c(R14, 0.0399999991f, F14);
    if ((!((*(float *)((R14 + 0x550))) > (*(float *)((R14 + 0x34)))))) goto L_C026F12;
    goto L_C026F0E;
    L_C026F0E:;
    goto L_C02702C;
    L_C026F12:;
    t54 = (int)(FUN_0c032394(R14)) >= 0;
    if (t54) goto L_C026F1E;
    goto L_C026F1A;
    L_C026F1A:;
    goto L_C02702C;
    L_C026F1E:;
    t55 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((((t55 << 2) + t55) << 2) + 0xC1F8E44))) + 0x4)));
    *(unsigned int *)((R14 + 0x2D4)) = 0x5;
    *(unsigned int *)((R14 + 0x2CC)) = 0x1;
    *(unsigned int *)((R14 + 0x1B0)) = 0x0;
    goto L_C026F70;
    L_C026E78:;
    t59 = (FUN_0c026dbc(R14)) != 0;
    if (t59) goto L_C026E84;
    goto L_C026E80;
    L_C026E80:;
    goto L_C026FF4;
    L_C026E84:;
    *(float *)(((int)stk + 4)) = F15;
    *(float *)(((int)stk + 8)) = F15;
    *(float *)(((int)stk + 12)) = 0.0699999928f;
    FUN_0c0329ae(R14, ((int)stk + 4));
    t62 = (FUN_0c0340a0(R14, 200.0f)) == 0;
    if (t62) goto L_C026EAC;
    goto L_C026EA8;
    L_C026EA8:;
    goto L_C02702C;
    L_C026EAC:;
    u63 = *(float *)((R14 + 0x64));
    F4 = (u63);
    if ((!(u63 > -0.349999994f))) goto L_C026EC0;
    goto L_C026EB8;
    L_C026EB8:;
    if ((-0.149999991f > F4)) goto L_C026F70;
    goto L_C026EC0;
    L_C026EC0:;
    t68 = (FUN_0c0340a0(R14, 300.0f)) == 0;
    if (t68) goto L_C026ED2;
    goto L_C026ECE;
    L_C026ECE:;
    goto L_C02702C;
    L_C026ED2:;
    goto L_C026F70;
}

int FUN_0c04105c(int a4)
{
    int t0;
    int t1;
    int t4;
    int t16;
    int t7;
    int t8;
    int t33;
    int t21;
    int t29;
    int t23;
    int t25;
    int t43;
    int t77;
    int t45;
    int t71;
    int t46;
    int t47;
    int t69;
    int t91;
    int t101;
    int t92;
    int t93;
    int t105;
    int t83;
    int t37;
    int stk[14];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = ((int (*)(int))(FUN_0c0e61d4))(a4);
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
                FUN_0c0dcd10((a4 + 0x48), (0x4B0 + a4));
                t4 = ((int (*)(void))(FUN_0c0e61d4))();
                *(float *)((a4 + 0x4B0)) = 0.0f;
                *(float *)((a4 + 0x4B4)) = 0.0f;
                *(float *)((a4 + 0x4B8)) = 0.0f;
                t16 = 0x34;
                if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390))))) {
                    t7 = *(int *)((a4 + 0x4DC));
                    t8 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t8 + 0x1);
                    if ((int)(*(short *)((((((t8 + 0x1) << 2) << 1) + (*(int *)((((((t7 - 76) << 1) + (t7 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t16 = 0x4EC;
                }
                t37 = t16;
            } else {
                t33 = t0;
                if (t0 == 3) {
                    t21 = *(int *)((a4 + 0x4E4));
                    *(unsigned int *)((a4 + 0x4E4)) = (t21 - 1);
                    t29 = 0x4E4;
                    if ((int)(t21 - 1) < 0) {
                        t23 = *(int *)((a4 + 0x2EC));
                        t25 = t23;
                        if ((t23 & 12) != 0) {
                            t25 = (FUN_0c03f4bc(a4));
                        }
                        t29 = t25;
                    }
                    t33 = t29;
                }
                t37 = t33;
            }
            t83 = t37;
        } else {
            t43 = *(int *)((a4 + 0x4E4));
            *(unsigned int *)((a4 + 0x4E4)) = (t43 - 1);
            t77 = 0x4E4;
            if ((int)(t43 - 1) >= 0) {
            } else {
                t45 = *(int *)((a4 + 0x2EC));
                t71 = t45;
                if ((t45 & 12) == 0) {
                } else {
                    t46 = *(int *)((a4 + 0x4DC));
                    t47 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t47 + 0x1);
                    if ((int)(*(short *)((((((t47 + 0x1) << 2) << 1) + (*(int *)((((((t46 - 76) << 1) + (t46 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)(((int)stk + 16)) = 0x1000;
                    FUN_0c0dc510(0x0);
                    FUN_0c0dccc0();
                    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
                    FUN_0c0dc6e0((*(int *)(((int)stk + 16))));
                    *(float *)(((int)stk + 32)) = 0.0f;
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = -0.25f;
                    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
                    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)((a4 + 0x4B0)) = (*(float *)(((int)stk + 12)));
                    *(float *)((a4 + 0x4B4)) = (*(float *)(((int)stk + 8)));
                    *(float *)((a4 + 0x4B8)) = (*(float *)(((int)stk + 4)));
                    FUN_0c0dc4c0(0x1);
                    FUN_0c0dcd10((a4 + 0x48), (0x4B0 + a4));
                    t69 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((a4 + 0x4B0)) = 0.0f;
                    *(float *)((a4 + 0x4B4)) = 0.0f;
                    *(float *)((a4 + 0x4B8)) = 0.0f;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    *(unsigned int *)0xC23EDB0 = 0x0;
                    *(unsigned int *)0xC23EDB4 = 0x0;
                    t71 = 0xC23EDB4;
                }
                t77 = t71;
            }
            t83 = t77;
        }
        t105 = t83;
    } else {
        t91 = *(int *)((a4 + 0x4E4));
        *(unsigned int *)((a4 + 0x4E4)) = (t91 - 1);
        t101 = 0x4E4;
        if ((int)(t91 - 1) >= 0) {
        } else {
            t92 = *(int *)((a4 + 0x4DC));
            t93 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t93 + 0x1);
            if ((int)(*(short *)((((((t93 + 0x1) << 2) << 1) + (*(int *)((((((t92 - 76) << 1) + (t92 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                FUN_0c03f4bc(a4);
            } else {
                FUN_0c041dd0(a4);
            }
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            t101 = 0x4EC;
        }
        t105 = t101;
    }
    return t105;
}

int FUN_0c0381b6(int a4)
{
    int t14;
    int t85;
    int t55;
    int t56;
    int t57;
    int t78;
    int t79;
    int t80;
    int t2;
    int t3;
    int t4;
    int t92;
    int t82;
    int t69;
    int t76;
    int stk[14];

    if (((*(short *)((((((*(int *)((a4 + 0x418))) << 2) << 2) + 0xC246394) + 0x4))) != 0) && (t2 = *(int *)((a4 + 0x418)), t3 = *(int *)(((((t2 << 2) << 2) + 0xC246394) + 0x0)), t4 = *(int *)((t3 + 0xC0)), t4 == 8)) {
        t14 = *(short *)((((((*(int *)((a4 + 0x418))) << 2) << 2) + 0xC246394) + 0x4));
        t85 = (unsigned short)t14;
        if ((unsigned short)t14 == 1) {
        } else {
            if (((*(int *)0xC246304) & 1) == 0) {
                t82 = (FUN_0c038188(a4));
            } else {
                if (((*(int *)0xC246310) & 8) == 0) {
                    t69 = 0xC246314;
                } else {
                    FUN_0c0dc510(0x0);
                    FUN_0c0dccc0();
                    FUN_0c0dcc70((*(float *)((t3 + 0x22C))), (*(float *)((t3 + 0x230))), (*(float *)((t3 + 0x234))));
                    FUN_0c0dc950((*(short *)((t3 + 0x22A))));
                    FUN_0c0dc890(((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228)))));
                    FUN_0c0dc6e0(((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226)))));
                    *(float *)(((int)stk + 16)) = ((*(float *)((t3 + 0x274))) * 0.0f);
                    *(float *)(((int)stk + 20)) = (-((*(float *)((t3 + 0x278))) * 0.899999976f));
                    *(float *)(((int)stk + 24)) = (-((*(float *)((t3 + 0x27C))) * 4.5f));
                    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
                    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
                    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
                    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
                    FUN_0c0dc4c0(0x1);
                    *(float *)((a4 + 0x220)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)((a4 + 0x30))));
                    *(float *)((a4 + 0x224)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) - (*(float *)((a4 + 0x34))));
                    *(float *)((a4 + 0x228)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x8))) - (*(float *)((a4 + 0x38))));
                    *(unsigned int *)((a4 + 0x22C)) = (short)(((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226)))) - (*(short *)((a4 + 0x6C))));
                    *(unsigned int *)((a4 + 0x230)) = (short)(((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228)))) - (*(short *)((a4 + 0x6E))));
                    t55 = *(short *)((t3 + 0x22A));
                    t56 = *(short *)((a4 + 0x70));
                    *(unsigned int *)((a4 + 0x234)) = (short)(t55 - t56);
                    t57 = ((int (*)(int, int, int))(FUN_0c0e61d4))((t55 - t56), t56, (short)(t55 - t56));
                    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226))));
                    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228))));
                    *(unsigned short *)((a4 + 0x70)) = (*(short *)((t3 + 0x22A)));
                    FUN_0c0376f4(a4);
                    FUN_0c037954(a4);
                }
                if (((*(int *)0xC246310) & 16) != 0) {
                    FUN_0c038188(a4);
                } else {
                    t76 = t69;
                }
                t78 = ((int (*)(int))(FUN_0c0e61d4))(t76);
                t79 = ((int (*)(void))(FUN_0c0e61d4))();
                t80 = ((int (*)(void))(FUN_0c0e61d4))();
                t82 = (FUN_0c037ee8(a4));
            }
            t85 = t82;
        }
        t92 = t85;
    } else {
        t92 = (FUN_0c038188(a4));
    }
    return t92;
}
