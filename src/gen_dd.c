/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0845c4(void);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0c710e(int, int, int, float, float);
int FUN_0c0d7f60(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int, int, int);
int FUN_0c0d8730(int, int);
int FUN_0c0d8800(int, int);
int FUN_0c0dab20(void);
int FUN_0c0dabd0(int);
int nlSetPaletteData(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int nlGetAverageVector(int, int, int, float, float);
int FUN_0c0de000(float);
int FUN_0c0e064a(int, int);
int FUN_0c0e06de(void);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6118(void);
extern int _quick_odd_mvn();
int FUN_0c0e62e0(int, int, int);
int FUN_0c0e631c(int, int, int);
int FUN_0c0f2598(int, int);
int FUN_0c0f25b8(int, int, int, int);
int FUN_0c0f26bc(int, ...);
int FUN_0c0f29d8(int, int, int);
int FUN_0c0f2a30(int, int);
int FUN_0c0f2b70(int, int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int FUN_0c2180a0(void);
int FUN_0c218676(int, int);
int FUN_0c2186aa(int, int);
int FUN_0c2186d2(void);
int FUN_0c21b5a6(int);
int FUN_0c220360(void);
int FUN_0c22fa94(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiExecuteDMAChain(void);
int kmiFBControl(int, int, int, int, int, int);
int kmiFatalErrorEntry(int);
int kmiFinalizeRender(int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitPAL(void);
int kmiInitVGA(void);
int FUN_0c07f890(int a4);
int FUN_0c083e1e(int a4, int a5, int a6, int a7);
int kmiInterruptHandlerSH(int a4);
int kmSetVertexRenderState(int a4, int a5, float f4);
int FUN_0c0aeabc(int a4, int a5, int a6);
int FUN_0c0dac80(int a4, int a5);
int FUN_0c217b80(void);
int FUN_0c0df758(int a4, int a5, int a6);
int kmiInitNTSC(void);
int FUN_0c21b228(int a4, int a5, int a6, int a7);
int FUN_0c0f2100(int a4, int a5, int a6, int a7, int a8, int a9);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);




int kmSetVertexRenderState(int a4, int a5, float f4)
{
    int t19;
    int t22;
    int t27;
    int t97;
    int t38;
    int t105;
    int t90;
    int t79;
    int t64;
    int t55;

    *(unsigned int *)0xC952878 = (*(int *)((a4 + 0x90)));
    *(unsigned int *)0xC952888 = (*(int *)((a4 + 0x94)));
    *(unsigned int *)0xC95288C = (*(int *)((a4 + 0x98)));
    if ((((unsigned int)((unsigned int)(*(int *)0xC952878) >> 16) >> 8) & 7) == 0) {
        *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0x3FFFFFF) | 0x20000000);
    }
    *(unsigned int *)0xC952890 = (*(int *)((a4 + 0x9C)));
    *(float *)0xC952898 = (*(float *)((a4 + 0x70)));
    *(float *)0xC95289C = (*(float *)((a4 + 0x74)));
    *(float *)0xC9528A0 = (*(float *)((a4 + 0x78)));
    *(float *)0xC9528A4 = (*(float *)((a4 + 0x7C)));
    *(float *)0xC9528A8 = (*(float *)((a4 + 0x80)));
    *(float *)0xC9528AC = (*(float *)((a4 + 0x84)));
    *(float *)0xC9528B0 = (*(float *)((a4 + 0x88)));
    *(float *)0xC9528B4 = (*(float *)((a4 + 0x8C)));
    *(unsigned int *)0xC9528B8 = (*(int *)((a4 + 0xA0)));
    t19 = *(int *)0xC952878;
    *(unsigned int *)0xC9528E8 = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC239B6C)));
    *(unsigned int *)0xC239B2C = (*(int *)0xC952878);
    t22 = *(int *)0xC952878;
    *(unsigned int *)0xC9529C8 = ((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        *(unsigned int *)0xC239B30 = (*(int *)0xC9528B8);
        t105 = 0xC239B4C;
    } else {
        *(unsigned int *)0xC239B30 = (*(int *)0xC952888);
        *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
        *(unsigned int *)0xC239B38 = (*(int *)0xC952890);
        t27 = *(int *)0xC9528E8;
        t97 = 0xC239B4C;
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    if (t27 != 3) {
                        if (t27 != 4) {
                            t38 = 0xC239B3C;
                            if (t27 == 16) {
                                *(unsigned int *)0xC239B3C = ((((((int)((*(float *)0xC952898) * 255.0f) << 16) << 8) | ((int)((*(float *)0xC95289C) * 255.0f) << 16)) | ((int)((*(float *)0xC9528A0) * 255.0f) << 8)) | (int)((*(float *)0xC9528A4) * 255.0f));
                                *(unsigned int *)0xC239B40 = ((((((int)((*(float *)0xC9528A8) * 255.0f) << 16) << 8) | ((int)((*(float *)0xC9528AC) * 255.0f) << 16)) | ((int)((*(float *)0xC9528B0) * 255.0f) << 8)) | (int)((*(float *)0xC9528B4) * 255.0f));
                                t38 = 0xC239B4C;
                            }
                            t55 = t38;
                        } else {
                            *(unsigned int *)0xC239B3C = (*(int *)0xC9528BC);
                            *(unsigned int *)0xC239B40 = (*(int *)0xC9528C0);
                            *(unsigned int *)0xC239B4C = (*(int *)0xC952898);
                            *(unsigned int *)0xC239B50 = (*(int *)0xC95289C);
                            *(unsigned int *)0xC239B54 = (*(int *)0xC9528A0);
                            *(unsigned int *)0xC239B58 = (*(int *)0xC9528A4);
                            *(unsigned int *)0xC239B5C = (*(int *)0xC9528C8);
                            *(unsigned int *)0xC239B60 = (*(int *)0xC9528CC);
                            *(unsigned int *)0xC239B64 = (*(int *)0xC9528D0);
                            *(unsigned int *)0xC239B68 = (*(int *)0xC9528D4);
                            t55 = 0xC239B6C;
                        }
                        t64 = t55;
                    } else {
                        *(unsigned int *)0xC239B3C = (*(int *)0xC9528BC);
                        *(unsigned int *)0xC239B40 = (*(int *)0xC9528C0);
                        t64 = 0xC239B4C;
                    }
                    t79 = t64;
                } else {
                    *(unsigned int *)0xC239B4C = (*(int *)0xC952898);
                    *(unsigned int *)0xC239B50 = (*(int *)0xC95289C);
                    *(unsigned int *)0xC239B54 = (*(int *)0xC9528A0);
                    *(unsigned int *)0xC239B58 = (*(int *)0xC9528A4);
                    *(unsigned int *)0xC239B5C = (*(int *)0xC9528A8);
                    *(unsigned int *)0xC239B60 = (*(int *)0xC9528AC);
                    *(unsigned int *)0xC239B64 = (*(int *)0xC9528B0);
                    *(unsigned int *)0xC239B68 = (*(int *)0xC9528B4);
                    t79 = 0xC239B6C;
                }
                t90 = t79;
            } else {
                *(unsigned int *)0xC239B3C = (*(int *)0xC952898);
                *(unsigned int *)0xC239B40 = (*(int *)0xC95289C);
                *(unsigned int *)0xC239B44 = (*(int *)0xC9528A0);
                *(unsigned int *)0xC239B48 = (*(int *)0xC9528A4);
                t90 = 0xC239B4C;
            }
            t97 = t90;
        }
        t105 = t97;
    }
    *(unsigned int *)0xC952954 = (*(int *)0xC9529C8);
    *(unsigned int *)0xC952958 = (t105 - 0xC239B2C);
    return 0x0;
}

int FUN_0c0aeabc(int a4, int a5, int a6)
{
    int t2;
    float u3;
    int t6;
    float u46;
    float u12;
    float u26;

    t2 = 0xC10F924;
    u3 = 420.0f;
    if ((*(int *)((a4 + 0x84))) == 0) {
        t2 = 0xC10F918;
        u3 = 50.0f;
    }
    FUN_0c0c710e(t2, a5, a6, u3, 400.0f);
    t6 = *(int *)((a4 + 0x84));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    if ((*(int *)0xC23A1A0) == 0) {
        u12 = (*(float *)(((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0x4)));
    } else {
        u12 = ((*(float *)(((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0x4))) + -0.0149999997f);
    }
    FUN_0c0dcc70((*(float *)(((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0x0))), u12, (*(float *)(((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0x8))));
    nlRotateAZ(0x8000);
    nlScale(0.00199999986f, 0.00199999986f, 0.00199999986f);
    FUN_0c0de000(0.00199999986f);
    FUN_0c0c465c((((*(int *)0xC23A258) & 0x7) + 0x34));
    nlUnitMatrix();
    if ((*(int *)0xC23A1A0) == 0) {
        u26 = (*(float *)((((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0xC) + 0x4)));
    } else {
        u26 = ((*(float *)((((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0xC) + 0x4))) + -0.0149999997f);
    }
    FUN_0c0dcc70((*(float *)((((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0xC) + 0x0))), u26, (*(float *)((((((((t6 << 1) << 1) + (t6 << 1)) << 2) + 0xC202490) + 0xC) + 0x8))));
    nlScale(0.00199999986f, 0.00199999986f, 0.00199999986f);
    FUN_0c0de000(0.00199999986f);
    FUN_0c0c465c((((*(int *)0xC23A258) & 0x7) + 0x34));
    nlPopMatrix(0x1);
    *(float *)0xC24FA84 = 1.0f;
    *(float *)0xC24FA88 = 1.0f;
    *(float *)0xC24FAA0 = 1.0f;
    *(float *)0xC24FA90 = 0.0f;
    *(float *)0xC24FA8C = 0.0f;
    *(float *)0xC24FA98 = 1.0f;
    *(float *)0xC24FA94 = 1.0f;
    *(unsigned int *)0xC24FA9C = 0x0;
    *(unsigned int *)0xC24FAA4 = 0xFFFFFFFF;
    *(float *)0xC24FA80 = 0.00139999995f;
    *(float *)0xC24FA78 = 320.0f;
    *(float *)0xC24FA7C = 400.0f;
    *(volatile int *)((a4 + 0xA0));
    FUN_0c0e5dc0();
    *(unsigned int *)0xC24FA74 = ((FUN_0c0e5dc0()) + 0x2050);
    *(unsigned int *)0xC24FAA8 = 0x3007;
    FUN_0c0c0340(0xC24FA74);
    *(volatile int *)((a4 + 0xA0));
    FUN_0c0e5dc0();
    *(unsigned int *)0xC24FA74 = ((FUN_0c0e5f1c()) + 0x2050);
    *(unsigned int *)0xC24FAA8 = 0x3005;
    FUN_0c0c0340(0xC24FA74);
    u46 = 500.0f;
    if ((*(int *)((a4 + 0x84))) == 0) {
        u46 = 140.0f;
    }
    *(float *)0xC24FA78 = u46;
    *(unsigned int *)0xC24FAA8 = 0x300A;
    if ((*(int *)0xC23A1A0) == 0) {
        *(unsigned int *)0xC24FA74 = 0x2074;
    } else {
        *(unsigned int *)0xC24FA74 = 0x2078;
    }
    *(float *)0xC24FA7C = 302.0f;
    FUN_0c0c0340(0xC24FA74);
    if ((*(int *)0xC23A1A0) == 0) {
        *(unsigned int *)0xC24FA74 = 0x2075;
    } else {
        *(unsigned int *)0xC24FA74 = 0x2079;
    }
    *(float *)0xC24FA7C = (*(float *)0xC0AEE68);
    FUN_0c0c0340(0xC24FA74);
    *(float *)0xC24FA7C = (*(float *)0xC0AEE70);
    *(volatile int *)((a4 + 0xA0));
    *(unsigned int *)0xC24FA74 = ((FUN_0c0e5f1c()) + 0x203C);
    return (FUN_0c0c0340(0xC24FA74));
}


int FUN_0c217b80(void)
{
    int t12;
    int t18;
    int t32;
    int t44;
    int t57;
    int t62;
    int t71;
    int t80;
    int t83;
    int t88;
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
    int T_;
    L_C217B80:;
    R10 = (0xF0FFFFFF);
    R11 = (0xC216CC0);
    R12 = (0x100);
    R13 = (0x10000000);
    R4 = (0x0);
    R5 = (0x1);
    R6 = (0x0);
    R7 = (0xA05F8144);
    R8 = (0x2);
    R9 = (0x4);
    goto L_C217BA6;
    L_C217BA6:;
    if (((*(int *)((0xC952648 + (R6 << 2)))) == 1)) goto L_C217BB6;
    goto L_C217BB2;
    L_C217BB2:;
    goto L_C217E0A;
    L_C217E0A:;
    t12 = (int)(R6 + 0x1) >= (int)R9;
    R6 = ((R6 + 0x1));
    if (t12) goto L_C217E14;
    goto L_C217E10;
    L_C217E10:;
    goto L_C217BA6;
    L_C217E14:;
    R0 = (0x1);
    goto L_C217E16;
    L_C217E16:;
    return R0;
    L_C217BB6:;
    if (((*(int *)0xC952508) == 0)) goto L_C217BC2;
    goto L_C217BBE;
    L_C217BBE:;
    goto L_C217E0A;
    L_C217BC2:;
    *(unsigned int *)0xC952508 = R5;
    *(unsigned int *)(((R6 << 2) + 0xC952648)) = R8;
    *(unsigned int *)0xC952660 = R6;
    *(unsigned int *)(((int)stk + 12)) = (R6 & R5);
    *(unsigned int *)0xC95284C = (*(int *)0xFFD8000C);
    *(unsigned int *)0xA05F8008 = R5;
    *(unsigned int *)0xA05F8008 = R4;
    t18 = *(int *)(((int)stk + 12));
    *(unsigned int *)0xA05F8124 = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952774)));
    *(unsigned int *)0xA05F812C = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952778)));
    *(unsigned int *)0xA05F8128 = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952780)));
    *(unsigned int *)0xA05F8130 = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952784)));
    *(unsigned int *)0xA05F8164 = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC95277C)));
    *(unsigned int *)((R7 + 0x0)) = 0x80000000;
    *(volatile int *)((R7 + 0x0));
    *(unsigned int *)0xC952664 = R4;
    *(unsigned int *)0xC952668 = R4;
    *(unsigned int *)0xC952808 = R4;
    R0 = (0xC9526CC);
    R14 = ((R6 << 2));
    if (((*(int *)(((R6 << 2) + 0xC9526CC))) == 0)) goto L_C217C54;
    goto L_C217C2E;
    L_C217C2E:;
    *(unsigned int *)0xC952664 = ((*(int *)0xC952664) | R5);
    t32 = kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC95267C))), ((*(int *)((R14 + R0))) + 0x20), 0x10, ((int)stk + 8));
    R4 = (t32);
    if ((t32 != R12)) goto L_C217C54;
    goto L_C217C50;
    L_C217C50:;
    goto L_C217E06;
    L_C217E06:;
    R0 = (0x0);
    goto L_C217E16;
    L_C217C54:;
    if (((*(int *)((R14 + 0xC9526DC))) != 0)) goto L_C217C60;
    goto L_C217C5C;
    L_C217C5C:;
    goto L_C217D50;
    L_C217D50:;
    R0 = (0xC9526EC);
    if (((*(int *)((R14 + 0xC9526EC))) == 0)) goto L_C217D7A;
    goto L_C217D58;
    L_C217D58:;
    *(unsigned int *)0xC952664 = ((*(int *)0xC952664) | R9);
    t44 = kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC95269C))), ((*(int *)((R14 + R0))) + 0x20), 0x10, ((int)stk + 8));
    R4 = (t44);
    if ((t44 == R12)) goto L_C217E06;
    goto L_C217D7A;
    L_C217D7A:;
    if (((*(int *)((R14 + 0xC9526FC))) == 0)) goto L_C217DDA;
    goto L_C217D82;
    L_C217D82:;
    *(unsigned int *)0xC952664 = ((*(int *)0xC952664) | 0x8);
    if (((*(int *)0xC952730) != 1)) goto L_C217DBE;
    goto L_C217D92;
    L_C217D92:;
    *(unsigned int *)(((*(int *)0xC952734) + 0x0)) = (((*(int *)(((*(int *)0xC952734) + 0x0))) & R10) | 0x3000000);
    t57 = kmiDMAtoTARequest(R13, (*(int *)0xC952734), (*(int *)0xC952738), 0x10, ((int)stk + 8));
    R4 = (t57);
    if ((t57 == R12)) goto L_C217E06;
    goto L_C217DBE;
    L_C217DBE:;
    t62 = kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC9526AC))), ((*(int *)((R14 + 0xC9526FC))) + 0x20), 0x10, ((int)stk + 8));
    R4 = (t62);
    if ((t62 == R12)) goto L_C217E06;
    goto L_C217DDA;
    L_C217DDA:;
    if (((*(int *)((R14 + 0xC95270C))) == 0)) goto L_C217E14;
    goto L_C217DE2;
    L_C217DE2:;
    *(unsigned int *)0xC952664 = ((*(int *)0xC952664) | 0x10);
    t71 = (kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC9526BC))), ((*(int *)((R14 + 0xC95270C))) + 0x20), 0x10, ((int)stk + 8))) != R12;
    if (t71) goto L_C217E14;
    goto L_C217E06;
    L_C217C60:;
    *(unsigned int *)0xC952664 = ((*(int *)0xC952664) | R8);
    if (((*(int *)0xC952730) != 1)) goto L_C217CA0;
    goto L_C217C70;
    L_C217C70:;
    *(unsigned int *)(((*(int *)0xC952734) + 0x0)) = (((*(int *)(((*(int *)0xC952734) + 0x0))) & R10) | 0x1000000);
    t80 = kmiDMAtoTARequest(R13, (*(int *)0xC952734), (*(int *)0xC952738), 0x10, ((int)stk + 8));
    R4 = (t80);
    if ((t80 != R12)) goto L_C217CA0;
    goto L_C217C9C;
    L_C217C9C:;
    goto L_C217E06;
    L_C217CA0:;
    t83 = *(int *)((R14 + 0xC9526DC));
    *(unsigned int *)(((int)stk + 4)) = ((int)stk + 8);
    R0 = (0xC9526DC);
    R6 = ((t83 + 0x20));
    R7 = (0x10);
    goto L_C217D40;
    L_C217D40:;
    t88 = kmiDMAtoTARequest(R13, (*(int *)((R14 + (R0 - 80)))), R6, R7, *(int *)((int)stk + 4));
    R4 = (t88);
    if ((t88 == R12)) goto L_C217E06;
    goto L_C217D50;
}


int kmiInitNTSC(void)
{
    int t58;
    int t1;
    int t7;
    int t15;
    int t21;
    int t27;
    int stk[129];

    *(unsigned int *)((((int)stk + 256) + 0x8)) = 0x359;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t1 = *(int *)0xC95231C, (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x20C;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 256) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 256) + 0x4)) = 0x345;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t7 = *(int *)0xC95231C, (t7 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x24;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x204;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x18)) = 0x3F;
    if (((*(int *)0xC95231C) & 32) != 0) {
        *(unsigned int *)((((int)stk + 256) + 0x74)) = 0x104;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x74)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x78)) = 0x15;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t15 = *(int *)0xC95231C, (t15 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x6;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x3;
    }
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t21 = *(int *)0xC95231C, (t21 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x16C;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x319;
    }
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t27 = *(int *)0xC95231C, (t27 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 256) + 0x24)) = 0x1F;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 256) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 256) + 0x2C)) = 0x0;
    if (((*(int *)0xC95231C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
        }
    } else {
        if (((*(int *)0xC95231C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x3C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x40)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x44)) = 0x0;
    if ((*(int *)0xC9522FC) == 6) {
        *(unsigned int *)((((int)stk + 256) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x70)) = 0x1F;
    }
    if (((*(int *)0xC95231C) & 16) != 0) {
        *(unsigned int *)((((int)stk + 256) + 0x6C)) = 0x0;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x6C)) = 0x1;
    }
    *(unsigned int *)((((int)stk + 256) + 0x48)) = 0x1;
    *(unsigned int *)((((int)stk + 256) + 0x4C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x50)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x54)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x58)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x5C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x68)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0xF8)) = 0xA4;
    *(unsigned int *)((((int)stk + 256) + 0x64)) = 0x1E0;
    *(unsigned int *)((((int)stk + 256) + 0x60)) = 0x0;
    if (((*(int *)0xC95231C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
        } else {
            *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
        }
    } else {
        if (((*(int *)0xC95231C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
            }
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0xF4)) = 0x12;
    *(unsigned int *)0xC95261C = 0xF0;
    t58 = *(int *)((((int)stk + 256) + 0xC));
    *(unsigned int *)0xC952614 = ((((int)((unsigned int)((int)((unsigned int)t58 + (unsigned int)0x0)) + ((((int)0x0 > (int)t58)) ? 1u : 0u))) >> 1) + (*(int *)0xC95261C));
    *(unsigned int *)0xC952618 = (*(int *)((((int)stk + 256) + 0xC)));
    FUN_0c0e6118();
    return (FUN_0c220360());
}


int FUN_0c0f2100(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t1;
    int t2;
    int t3;
    int t92;
    int t18;
    int t86;
    int t20;
    int t80;
    int t74;
    int t21;
    int t29;
    int t36;
    int t30;
    int t31;
    int t32;
    int t37;
    int t38;
    int t45;
    int t52;
    int t46;
    int t47;
    int t53;
    int t54;
    int t63;
    int t66;
    int t68;
    int t71;
    int t100;
    int t108;
    int t115;
    int t109;
    int t110;
    int t111;
    int t116;
    int t117;
    int t124;
    int t131;
    int t125;
    int t126;
    int t132;
    int t133;
    int t142;
    int t145;
    int t147;
    int t150;
    int t255;
    int t181;
    int t249;
    int t183;
    int t243;
    int t237;
    int t184;
    int t192;
    int t199;
    int t193;
    int t194;
    int t195;
    int t200;
    int t201;
    int t208;
    int t215;
    int t209;
    int t210;
    int t216;
    int t217;
    int t226;
    int t229;
    int t231;
    int t234;
    int t263;
    int t271;
    int t278;
    int t272;
    int t273;
    int t274;
    int t279;
    int t280;
    int t287;
    int t294;
    int t288;
    int t289;
    int t295;
    int t296;
    int t305;
    int t308;
    int t310;
    int t313;
    int t324;
    int t161;
    int t153;
    int t25;
    int t69;
    int t104;
    int t148;
    int t316;
    int t188;
    int t232;
    int t267;
    int t311;
    int stk[34];

    stk[24] = a8;
    stk[25] = a9;
    *(unsigned int *)(((int)stk + 20)) = 0x8;
    *(unsigned short *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 12) + 0x54) + 0x7);
    if (((unsigned char)(*(signed char *)((((((int)stk + 12) + 0x54) + 0x7) + 0x0))) & 127) == 0) {
        t1 = FUN_0c0f2598((((int)stk + 12) + 0x54), 0x7);
        if (t1 != 0) {
            t2 = (0x0 + a5);
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)0x8) {
                    break;
                }
                t3 = (t3 + 0x1);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                t2 = (t2 + 0x1);
            }
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if (((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) & 128) != 0) {
                *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
            } else {
                *(unsigned char *)((a7 + 0x0)) = 0x1;
            }
            t161 = 0x0;
        } else {
            FUN_0c0f2b70(a7, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x34), 0x0, a8, a9);
            if ((*(signed char *)((a7 + 0x0))) == -1) {
                *(unsigned char *)(((((int)stk + 12) + 0x54) + 0x7)) = ((*(signed char *)(((((int)stk + 12) + 0x54) + 0x7))) & 0x7F);
            }
            if ((*(short *)(((int)stk + 12))) == 0x7FF) {
                t92 = 0x2;
                if ((unsigned char)(*(signed char *)(((((int)stk + 12) + 0x54) + 0x6))) == 0xF0) {
                    t18 = FUN_0c0f2598((((int)stk + 12) + 0x54), 0x6);
                    t86 = 0x2;
                    if (t18 != 0) {
                        t20 = *(signed char *)((a7 + 0x0));
                        t80 = 0x1;
                        if (t20 != 1) {
                            t74 = 0xFFFFFFFF;
                            if (t20 != -1) {
                                t21 = *(short *)(((int)stk + 12));
                                *(unsigned short *)(((int)stk + 12)) = (t21 - 0x3FF);
                                if ((int)(short)(t21 - 0x3FF) >= 0) {
                                    t25 = (FUN_0c0f26bc(a8, a9));
                                } else {
                                    t25 = ((FUN_0c0f26bc(a8, a9)) - 1);
                                }
                                *(unsigned char *)(((int)stk + 63)) = 0x0;
                                *(unsigned int *)((a6 + 0x0)) = ((t25 - a4) + 0x1);
                                FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                                *(volatile int *)(((int)stk + 20));
                                t29 = FUN_0c0e5dc0();
                                t36 = 0x0;
                                if ((int)(0x8 - t29) > 0) {
                                    t30 = 0x0;
                                    for (;;) {
                                        t31 = t30;
                                        t32 = ((t30 + t29) + (((int)stk + 12) + 0x24));
                                        t30 = (t30 + 0x1);
                                        *(unsigned char *)(((((int)stk + 12) + 0x24) + t31)) = (*(signed char *)((t32 + 0x0)));
                                        if ((int)t30 >= (int)(0x8 - t29)) {
                                            break;
                                        }
                                    }
                                    t36 = t30;
                                }
                                if ((int)t36 < (int)0x8) {
                                    t37 = t36;
                                    t38 = (t36 + (((int)stk + 12) + 0x24));
                                    for (;;) {
                                        *(unsigned char *)((t38 + 0x0)) = 0x0;
                                        t37 = (t37 + 0x1);
                                        t38 = (t38 + 0x1);
                                        if ((int)t37 >= (int)0x8) {
                                            break;
                                        }
                                    }
                                }
                                FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t29 << 2) << 1)));
                                *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
                                FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
                                *(volatile int *)(((int)stk + 24));
                                *(volatile int *)(((int)stk + 20));
                                t45 = FUN_0c0e5dc0();
                                *(unsigned int *)(((int)stk + 16)) = t45;
                                t52 = 0x0;
                                if ((int)(0x8 - t45) > 0) {
                                    t46 = 0x0;
                                    for (;;) {
                                        t47 = t46;
                                        t46 = (t46 + 0x1);
                                        *(unsigned char *)(((((int)stk + 12) + 0x1C) + t47)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t47) + (((int)stk + 12) + 0x1C)) + 0x0)));
                                        if ((int)t46 >= (int)(0x8 - t45)) {
                                            break;
                                        }
                                    }
                                    t52 = t46;
                                }
                                if ((int)t52 < (int)0x8) {
                                    t53 = t52;
                                    t54 = (t52 + (((int)stk + 12) + 0x1C));
                                    for (;;) {
                                        t53 = (t53 + 0x1);
                                        *(unsigned char *)((t54 + 0x0)) = 0x0;
                                        t54 = (t54 + 0x1);
                                        if ((int)t53 >= (int)0x8) {
                                            break;
                                        }
                                    }
                                }
                                FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                                for (;;) {
                                    FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t63 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                    if ((int)t63 > 0) {
                                        *(unsigned short *)(((int)stk + 28)) = 0x1;
                                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                                        continue;
                                    }
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t66 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                    if (t66 == 0) {
                                        break;
                                    }
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t68 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                                    if (((int)t68 < 0) && (t69 = *(short *)(((int)stk + 28)), t69 == 0)) {
                                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                                        continue;
                                    }
                                    return 0x0;
                                }
                                t71 = *(int *)((a6 + 0x0));
                                *(unsigned int *)((a6 + 0x0)) = (t71 + 0x1);
                                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t71 + 0x1), a5);
                                t74 = 0x0;
                            }
                            t80 = t74;
                        }
                        t86 = t80;
                    }
                    t92 = t86;
                }
                t153 = t92;
            } else {
                t100 = *(short *)(((int)stk + 12));
                *(unsigned short *)(((int)stk + 12)) = (t100 - 0x3FF);
                if ((int)(short)(t100 - 0x3FF) >= 0) {
                    t104 = (FUN_0c0f26bc(a8, a9));
                } else {
                    t104 = ((FUN_0c0f26bc(a8, a9)) - 1);
                }
                *(unsigned char *)(((int)stk + 63)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = ((t104 - a4) + 0x1);
                FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                *(volatile int *)(((int)stk + 20));
                t108 = FUN_0c0e5dc0();
                t115 = 0x0;
                if ((int)(0x8 - t108) > 0) {
                    t109 = 0x0;
                    for (;;) {
                        t110 = t109;
                        t111 = ((t109 + t108) + (((int)stk + 12) + 0x24));
                        t109 = (t109 + 0x1);
                        *(unsigned char *)(((((int)stk + 12) + 0x24) + t110)) = (*(signed char *)((t111 + 0x0)));
                        if ((int)t109 >= (int)(0x8 - t108)) {
                            break;
                        }
                    }
                    t115 = t109;
                }
                if ((int)t115 < (int)0x8) {
                    t116 = t115;
                    t117 = (t115 + (((int)stk + 12) + 0x24));
                    for (;;) {
                        *(unsigned char *)((t117 + 0x0)) = 0x0;
                        t116 = (t116 + 0x1);
                        t117 = (t117 + 0x1);
                        if ((int)t116 >= (int)0x8) {
                            break;
                        }
                    }
                }
                FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t108 << 2) << 1)));
                *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
                FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
                *(volatile int *)(((int)stk + 24));
                *(volatile int *)(((int)stk + 20));
                t124 = FUN_0c0e5dc0();
                *(unsigned int *)(((int)stk + 16)) = t124;
                t131 = 0x0;
                if ((int)(0x8 - t124) > 0) {
                    t125 = 0x0;
                    for (;;) {
                        t126 = t125;
                        t125 = (t125 + 0x1);
                        *(unsigned char *)(((((int)stk + 12) + 0x1C) + t126)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t126) + (((int)stk + 12) + 0x1C)) + 0x0)));
                        if ((int)t125 >= (int)(0x8 - t124)) {
                            break;
                        }
                    }
                    t131 = t125;
                }
                if ((int)t131 < (int)0x8) {
                    t132 = t131;
                    t133 = (t131 + (((int)stk + 12) + 0x1C));
                    for (;;) {
                        t132 = (t132 + 0x1);
                        *(unsigned char *)((t133 + 0x0)) = 0x0;
                        t133 = (t133 + 0x1);
                        if ((int)t132 >= (int)0x8) {
                            break;
                        }
                    }
                }
                FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                for (;;) {
                    FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t142 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                    if ((int)t142 > 0) {
                        *(unsigned short *)(((int)stk + 28)) = 0x1;
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                        continue;
                    }
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t145 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                    if (t145 == 0) {
                        break;
                    }
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t147 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                    if (((int)t147 < 0) && (t148 = *(short *)(((int)stk + 28)), t148 == 0)) {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                        continue;
                    }
                    return 0x0;
                }
                t150 = *(int *)((a6 + 0x0));
                *(unsigned int *)((a6 + 0x0)) = (t150 + 0x1);
                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t150 + 0x1), a5);
                t153 = 0x0;
            }
            t161 = t153;
        }
        t324 = t161;
    } else {
        FUN_0c0f2b70(a7, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x34), a7, a8, a9);
        if ((*(signed char *)((a7 + 0x0))) == -1) {
            *(unsigned char *)(((((int)stk + 12) + 0x54) + 0x7)) = ((*(signed char *)(((((int)stk + 12) + 0x54) + 0x7))) & 0x7F);
        }
        if ((*(short *)(((int)stk + 12))) == 0x7FF) {
            t255 = 0x2;
            if ((unsigned char)(*(signed char *)(((((int)stk + 12) + 0x54) + 0x6))) == 0xF0) {
                t181 = FUN_0c0f2598((((int)stk + 12) + 0x54), 0x6);
                t249 = 0x2;
                if (t181 != 0) {
                    t183 = *(signed char *)((a7 + 0x0));
                    t243 = 0x1;
                    if (t183 != 1) {
                        t237 = 0xFFFFFFFF;
                        if (t183 != -1) {
                            t184 = *(short *)(((int)stk + 12));
                            *(unsigned short *)(((int)stk + 12)) = (t184 - 0x3FF);
                            if ((int)(short)(t184 - 0x3FF) >= 0) {
                                t188 = (FUN_0c0f26bc(a8, a9));
                            } else {
                                t188 = ((FUN_0c0f26bc(a8, a9)) - 1);
                            }
                            *(unsigned char *)(((int)stk + 63)) = 0x0;
                            *(unsigned int *)((a6 + 0x0)) = ((t188 - a4) + 0x1);
                            FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                            *(volatile int *)(((int)stk + 20));
                            t192 = FUN_0c0e5dc0();
                            t199 = 0x0;
                            if ((int)(0x8 - t192) > 0) {
                                t193 = 0x0;
                                for (;;) {
                                    t194 = t193;
                                    t195 = ((t193 + t192) + (((int)stk + 12) + 0x24));
                                    t193 = (t193 + 0x1);
                                    *(unsigned char *)(((((int)stk + 12) + 0x24) + t194)) = (*(signed char *)((t195 + 0x0)));
                                    if ((int)t193 >= (int)(0x8 - t192)) {
                                        break;
                                    }
                                }
                                t199 = t193;
                            }
                            if ((int)t199 < (int)0x8) {
                                t200 = t199;
                                t201 = (t199 + (((int)stk + 12) + 0x24));
                                for (;;) {
                                    *(unsigned char *)((t201 + 0x0)) = 0x0;
                                    t200 = (t200 + 0x1);
                                    t201 = (t201 + 0x1);
                                    if ((int)t200 >= (int)0x8) {
                                        break;
                                    }
                                }
                            }
                            FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t192 << 2) << 1)));
                            *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
                            FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
                            *(volatile int *)(((int)stk + 24));
                            *(volatile int *)(((int)stk + 20));
                            t208 = FUN_0c0e5dc0();
                            *(unsigned int *)(((int)stk + 16)) = t208;
                            t215 = 0x0;
                            if ((int)(0x8 - t208) > 0) {
                                t209 = 0x0;
                                for (;;) {
                                    t210 = t209;
                                    t209 = (t209 + 0x1);
                                    *(unsigned char *)(((((int)stk + 12) + 0x1C) + t210)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t210) + (((int)stk + 12) + 0x1C)) + 0x0)));
                                    if ((int)t209 >= (int)(0x8 - t208)) {
                                        break;
                                    }
                                }
                                t215 = t209;
                            }
                            if ((int)t215 < (int)0x8) {
                                t216 = t215;
                                t217 = (t215 + (((int)stk + 12) + 0x1C));
                                for (;;) {
                                    t216 = (t216 + 0x1);
                                    *(unsigned char *)((t217 + 0x0)) = 0x0;
                                    t217 = (t217 + 0x1);
                                    if ((int)t216 >= (int)0x8) {
                                        break;
                                    }
                                }
                            }
                            FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                            for (;;) {
                                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t226 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                if ((int)t226 > 0) {
                                    *(unsigned short *)(((int)stk + 28)) = 0x1;
                                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                                    continue;
                                }
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t229 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                if (t229 == 0) {
                                    break;
                                }
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t231 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                                if (((int)t231 < 0) && (t232 = *(short *)(((int)stk + 28)), t232 == 0)) {
                                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                                    continue;
                                }
                                return 0x0;
                            }
                            t234 = *(int *)((a6 + 0x0));
                            *(unsigned int *)((a6 + 0x0)) = (t234 + 0x1);
                            FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t234 + 0x1), a5);
                            t237 = 0x0;
                        }
                        t243 = t237;
                    }
                    t249 = t243;
                }
                t255 = t249;
            }
            t316 = t255;
        } else {
            t263 = *(short *)(((int)stk + 12));
            *(unsigned short *)(((int)stk + 12)) = (t263 - 0x3FF);
            if ((int)(short)(t263 - 0x3FF) >= 0) {
                t267 = (FUN_0c0f26bc(a8, a9));
            } else {
                t267 = ((FUN_0c0f26bc(a8, a9)) - 1);
            }
            *(unsigned char *)(((int)stk + 63)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = ((t267 - a4) + 0x1);
            FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
            *(volatile int *)(((int)stk + 20));
            t271 = FUN_0c0e5dc0();
            t278 = 0x0;
            if ((int)(0x8 - t271) > 0) {
                t272 = 0x0;
                for (;;) {
                    t273 = t272;
                    t274 = ((t272 + t271) + (((int)stk + 12) + 0x24));
                    t272 = (t272 + 0x1);
                    *(unsigned char *)(((((int)stk + 12) + 0x24) + t273)) = (*(signed char *)((t274 + 0x0)));
                    if ((int)t272 >= (int)(0x8 - t271)) {
                        break;
                    }
                }
                t278 = t272;
            }
            if ((int)t278 < (int)0x8) {
                t279 = t278;
                t280 = (t278 + (((int)stk + 12) + 0x24));
                for (;;) {
                    *(unsigned char *)((t280 + 0x0)) = 0x0;
                    t279 = (t279 + 0x1);
                    t280 = (t280 + 0x1);
                    if ((int)t279 >= (int)0x8) {
                        break;
                    }
                }
            }
            FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t271 << 2) << 1)));
            *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
            FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
            *(volatile int *)(((int)stk + 24));
            *(volatile int *)(((int)stk + 20));
            t287 = FUN_0c0e5dc0();
            *(unsigned int *)(((int)stk + 16)) = t287;
            t294 = 0x0;
            if ((int)(0x8 - t287) > 0) {
                t288 = 0x0;
                for (;;) {
                    t289 = t288;
                    t288 = (t288 + 0x1);
                    *(unsigned char *)(((((int)stk + 12) + 0x1C) + t289)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t289) + (((int)stk + 12) + 0x1C)) + 0x0)));
                    if ((int)t288 >= (int)(0x8 - t287)) {
                        break;
                    }
                }
                t294 = t288;
            }
            if ((int)t294 < (int)0x8) {
                t295 = t294;
                t296 = (t294 + (((int)stk + 12) + 0x1C));
                for (;;) {
                    t295 = (t295 + 0x1);
                    *(unsigned char *)((t296 + 0x0)) = 0x0;
                    t296 = (t296 + 0x1);
                    if ((int)t295 >= (int)0x8) {
                        break;
                    }
                }
            }
            FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
            for (;;) {
                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t305 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                if ((int)t305 > 0) {
                    *(unsigned short *)(((int)stk + 28)) = 0x1;
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                    continue;
                }
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t308 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                if (t308 == 0) {
                    break;
                }
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t310 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                if (((int)t310 < 0) && (t311 = *(short *)(((int)stk + 28)), t311 == 0)) {
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                    continue;
                }
                return 0x0;
            }
            t313 = *(int *)((a6 + 0x0));
            *(unsigned int *)((a6 + 0x0)) = (t313 + 0x1);
            FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t313 + 0x1), a5);
            t316 = 0x0;
        }
        t324 = t316;
    }
    return t324;
}

int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int t2;
    int t8;
    int t18;
    int t20;
    int t109;
    int t43;
    int t56;
    int t50;
    int t71;
    int t75;
    int t11;
    int t67;
    int t29;
    int t61;
    int t93;
    int t84;
    int stk[16];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t2 = kmiGetProfileInt(0xC236498, 0xC2364AC, (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 12)) = (kmiGetProfileInt(0xC236498, 0xC2364B8, (*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 16)) = (kmiGetProfileInt(0xC236498, 0xC2364C4, (*(int *)(((int)stk + 16)))));
    *(unsigned int *)0xC952318 = (0x3 & t2);
    if ((t2 & 0x42) == 66) {
        *(unsigned int *)(((int)stk + 24)) = t2;
        t8 = ((int (*)(int))((*(int *)0xC952574)))((((int)stk + 12) + 0xC));
        *(unsigned int *)0xC95232C = (*(int *)(((int)stk + 28)));
        if (((int)(*(int *)0xC95232C) >= 0) && (t11 = *(int *)0xC95232C, (int)t11 <= (int)0x4)) {
        } else {
            *(unsigned int *)0xC95232C = 0x1;
        }
    }
    t18 = 0x0;
    if ((a5 != 5) && ((a5 != 4) && ((a5 != 3) && ((a5 != 1) && (a5 != 0))))) {
        t18 = 0x1;
    }
    t20 = 0x0;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t20 = 0x1;
    }
    if ((*(int *)(((int)stk + 16))) != 0) {
        *(unsigned int *)(((int)stk + 12)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 12)) = 0x0;
    }
    t109 = t18;
    if (t18 != 0) {
    } else {
        *(unsigned int *)0xC95231C = t2;
        *(unsigned int *)0xC952320 = a5;
        *(unsigned int *)0xC952324 = (*(int *)(((int)stk + 12)));
        *(unsigned int *)0xC952328 = t20;
        if ((*(int *)0xC95231C) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x280;
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            *(unsigned int *)0xC95261C = 0x1E0;
            t67 = 0x1E0;
        } else {
            if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t29 = *(int *)0xC95231C, (t29 & 44) != 0) && (0x1 != 0))) {
                *(unsigned int *)(((int)stk + 16)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 16)) = 0x0;
            }
            if (((*(int *)0xC95231C) & 16) != 0) {
                *(unsigned int *)(((int)stk + 20)) = 0x280;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x140;
            }
            if (((*(int *)0xC95231C) & 32) != 0) {
                t43 = 0x1E0;
                if (((*(int *)0xC95231C) & 0x42) == 66) {
                    t43 = (*(int *)((((*(int *)0xC95232C) << 2) + 0xC9527D4)));
                }
                *(unsigned int *)0xC95261C = (((int)((unsigned int)((int)((unsigned int)t43 + (unsigned int)0x0)) + ((((int)0x0 > (int)t43)) ? 1u : 0u))) >> 1);
                t61 = t43;
            } else {
                t56 = 0xF0;
                if (((*(int *)0xC95231C) & 0x42) == 66) {
                    t50 = *(int *)((((*(int *)0xC95232C) << 2) + 0xC9527D4));
                    t56 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                }
                *(unsigned int *)0xC95261C = t56;
                t61 = t56;
            }
            t67 = t61;
        }
        t71 = *(int *)0xC952318;
        if (t71 != 1) {
            if (t71 != 0) {
                t75 = 0x1;
                if (t71 != 2) {
                } else {
                    kmiInitPAL();
                    t75 = 0x0;
                }
                t84 = t75;
            } else {
                kmiInitNTSC();
                t84 = 0x0;
            }
            t93 = t84;
        } else {
            kmiInitVGA();
            t93 = 0x0;
        }
        kmiFBControl((*(int *)(((int)stk + 20))), t67, a5, (*(int *)(((int)stk + 16))), ((*(int *)(((int)stk + 12)))), (t20));
        kmiWriteDispModeRegisters();
        t109 = t93;
    }
    return t109;
}


