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
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };






int kmSetVertexRenderState(int a4, int a5, float f4)
{
    int t19;
    int t22;
    int t27;
    int t105;

    (((struct o0_uint *)0xC952878)->v) = ((((struct o90_int *)(a4))->v));
    (((struct o10_uint *)0xC952878)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o14_uint *)0xC952878)->v) = ((((struct o98_int *)(a4))->v));
    if ((((unsigned int)((unsigned int)((((struct o0_int *)0xC952878)->v)) >> 16) >> 8) & 7) == 0) {
        (((struct o14_uint *)0xC952878)->v) = ((((((struct o14_int *)0xC952878)->v)) & 0x3FFFFFF) | 0x20000000);
    }
    (((struct o18_uint *)0xC952878)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o20_float *)0xC952878)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o24_float *)0xC952878)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o28_float *)0xC952878)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o2C_float *)0xC952878)->v) = ((((struct o7C_float *)(a4))->v));
    (((struct o30_float *)0xC952878)->v) = ((((struct o80_float *)(a4))->v));
    (((struct o34_float *)0xC952878)->v) = ((((struct o84_float *)(a4))->v));
    (((struct o38_float *)0xC952878)->v) = ((((struct o88_float *)(a4))->v));
    (((struct o3C_float *)0xC952878)->v) = ((((struct o8C_float *)(a4))->v));
    (((struct o0_uint *)0xC9528B8)->v) = ((((struct oA0_int *)(a4))->v));
    t19 = (((struct o0_int *)0xC952878)->v);
    (((struct o30_uint *)0xC9528B8)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC239B6C)));
    (((struct o0_uint *)0xC239B2C)->v) = ((((struct o0_int *)0xC952878)->v));
    t22 = (((struct o0_int *)0xC952878)->v);
    *(unsigned int *)0xC9529C8 = ((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC239B2C)->v) = ((((struct o0_int *)0xC9528B8)->v));
        t105 = 0xC239B4C;
    } else {
        (((struct o4_uint *)0xC239B2C)->v) = ((((struct o10_int *)0xC952878)->v));
        (((struct o8_uint *)0xC239B2C)->v) = ((((struct o14_int *)0xC952878)->v));
        (((struct oC_uint *)0xC239B2C)->v) = ((((struct o18_int *)0xC952878)->v));
        t27 = (((struct o30_int *)0xC9528B8)->v);
        t105 = 0xC239B4C;
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    if (t27 != 3) {
                        if (t27 != 4) {
                            t105 = 0xC239B3C;
                            if (t27 == 16) {
                                (((struct o10_uint *)0xC239B2C)->v) = ((((((int)(((((struct o20_float *)0xC952878)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)0xC952878)->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)0xC952878)->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)0xC952878)->v)) * 255.0f));
                                (((struct o14_uint *)0xC239B2C)->v) = ((((((int)(((((struct o30_float *)0xC952878)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)0xC952878)->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)0xC952878)->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)0xC952878)->v)) * 255.0f));
                                t105 = 0xC239B4C;
                            }
                        } else {
                            (((struct o10_uint *)0xC239B2C)->v) = ((((struct o4_int *)0xC9528B8)->v));
                            (((struct o14_uint *)0xC239B2C)->v) = ((((struct o8_int *)0xC9528B8)->v));
                            (((struct o20_uint *)0xC239B2C)->v) = ((((struct o20_int *)0xC952878)->v));
                            (((struct o24_uint *)0xC239B2C)->v) = ((((struct o24_int *)0xC952878)->v));
                            (((struct o28_uint *)0xC239B2C)->v) = ((((struct o28_int *)0xC952878)->v));
                            (((struct o2C_uint *)0xC239B2C)->v) = ((((struct o2C_int *)0xC952878)->v));
                            (((struct o30_uint *)0xC239B2C)->v) = ((((struct o10_int *)0xC9528B8)->v));
                            (((struct o34_uint *)0xC239B2C)->v) = ((((struct o14_int *)0xC9528B8)->v));
                            (((struct o38_uint *)0xC239B2C)->v) = ((((struct o18_int *)0xC9528B8)->v));
                            (((struct o3C_uint *)0xC239B2C)->v) = ((((struct o1C_int *)0xC9528B8)->v));
                            t105 = 0xC239B6C;
                        }
                    } else {
                        (((struct o10_uint *)0xC239B2C)->v) = ((((struct o4_int *)0xC9528B8)->v));
                        (((struct o14_uint *)0xC239B2C)->v) = ((((struct o8_int *)0xC9528B8)->v));
                        t105 = 0xC239B4C;
                    }
                } else {
                    (((struct o20_uint *)0xC239B2C)->v) = ((((struct o20_int *)0xC952878)->v));
                    (((struct o24_uint *)0xC239B2C)->v) = ((((struct o24_int *)0xC952878)->v));
                    (((struct o28_uint *)0xC239B2C)->v) = ((((struct o28_int *)0xC952878)->v));
                    (((struct o2C_uint *)0xC239B2C)->v) = ((((struct o2C_int *)0xC952878)->v));
                    (((struct o30_uint *)0xC239B2C)->v) = ((((struct o30_int *)0xC952878)->v));
                    (((struct o34_uint *)0xC239B2C)->v) = ((((struct o34_int *)0xC952878)->v));
                    (((struct o38_uint *)0xC239B2C)->v) = ((((struct o38_int *)0xC952878)->v));
                    (((struct o3C_uint *)0xC239B2C)->v) = ((((struct o3C_int *)0xC952878)->v));
                    t105 = 0xC239B6C;
                }
            } else {
                (((struct o10_uint *)0xC239B2C)->v) = ((((struct o20_int *)0xC952878)->v));
                (((struct o14_uint *)0xC239B2C)->v) = ((((struct o24_int *)0xC952878)->v));
                (((struct o18_uint *)0xC239B2C)->v) = ((((struct o28_int *)0xC952878)->v));
                (((struct o1C_uint *)0xC239B2C)->v) = ((((struct o2C_int *)0xC952878)->v));
                t105 = 0xC239B4C;
            }
        }
    }
    (((struct o0_uint *)0xC952954)->v) = (*(int *)0xC9529C8);
    (((struct o4_uint *)0xC952954)->v) = (t105 - 0xC239B2C);
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
    (((struct o10_float *)0xC24FA74)->v) = 1.0f;
    (((struct o14_float *)0xC24FA74)->v) = 1.0f;
    (((struct o2C_float *)0xC24FA74)->v) = 1.0f;
    (((struct o1C_float *)0xC24FA74)->v) = 0.0f;
    (((struct o18_float *)0xC24FA74)->v) = 0.0f;
    (((struct o24_float *)0xC24FA74)->v) = 1.0f;
    (((struct o20_float *)0xC24FA74)->v) = 1.0f;
    (((struct o28_uint *)0xC24FA74)->v) = 0x0;
    (((struct o30_uint *)0xC24FA74)->v) = 0xFFFFFFFF;
    (((struct oC_float *)0xC24FA74)->v) = 0.00139999995f;
    (((struct o4_float *)0xC24FA74)->v) = 320.0f;
    (((struct o8_float *)0xC24FA74)->v) = 400.0f;
    *(volatile int *)((a4 + 0xA0));
    FUN_0c0e5dc0();
    (((struct o0_uint *)0xC24FA74)->v) = ((FUN_0c0e5dc0()) + 0x2050);
    (((struct o34_uint *)0xC24FA74)->v) = 0x3007;
    FUN_0c0c0340(0xC24FA74);
    *(volatile int *)((a4 + 0xA0));
    FUN_0c0e5dc0();
    (((struct o0_uint *)0xC24FA74)->v) = ((FUN_0c0e5f1c()) + 0x2050);
    (((struct o34_uint *)0xC24FA74)->v) = 0x3005;
    FUN_0c0c0340(0xC24FA74);
    u46 = 500.0f;
    if ((*(int *)((a4 + 0x84))) == 0) {
        u46 = 140.0f;
    }
    (((struct o4_float *)0xC24FA74)->v) = u46;
    (((struct o34_uint *)0xC24FA74)->v) = 0x300A;
    if ((*(int *)0xC23A1A0) == 0) {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2074;
    } else {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2078;
    }
    (((struct o8_float *)0xC24FA74)->v) = 302.0f;
    FUN_0c0c0340(0xC24FA74);
    if ((*(int *)0xC23A1A0) == 0) {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2075;
    } else {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2079;
    }
    (((struct o8_float *)0xC24FA74)->v) = ((((struct o0_float *)0xC0AEE68)->v));
    FUN_0c0c0340(0xC24FA74);
    (((struct o8_float *)0xC24FA74)->v) = ((((struct o8_float *)0xC0AEE68)->v));
    *(volatile int *)((a4 + 0xA0));
    (((struct o0_uint *)0xC24FA74)->v) = ((FUN_0c0e5f1c()) + 0x203C);
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
    int R1004;
    R1004 = *(int *)((int)stk + 4);
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
    (((struct o0_uint *)0xC952660)->v) = R6;
    *(unsigned int *)(((int)stk + 12)) = (R6 & R5);
    *(unsigned int *)0xC95284C = (*(int *)0xFFD8000C);
    *(unsigned int *)0xA05F8008 = R5;
    *(unsigned int *)0xA05F8008 = R4;
    t18 = *(int *)(((int)stk + 12));
    (((struct o0_uint *)0xA05F8124)->v) = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952774)));
    (((struct o8_uint *)0xA05F8124)->v) = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952778)));
    (((struct o4_uint *)0xA05F8124)->v) = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952780)));
    (((struct oC_uint *)0xA05F8124)->v) = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC952784)));
    *(unsigned int *)0xA05F8164 = (*(int *)(((((t18 << 2) << 2) << 1) + 0xC95277C)));
    *(unsigned int *)((R7 + 0x0)) = 0x80000000;
    *(volatile int *)((R7 + 0x0));
    (((struct o4_uint *)0xC952660)->v) = R4;
    (((struct o8_uint *)0xC952660)->v) = R4;
    *(unsigned int *)0xC952808 = R4;
    R0 = (0xC9526CC);
    R14 = ((R6 << 2));
    if (((*(int *)(((R6 << 2) + 0xC9526CC))) == 0)) goto L_C217C54;
    goto L_C217C2E;
    L_C217C2E:;
    (((struct o4_uint *)0xC952660)->v) = (((((struct o4_int *)0xC952660)->v)) | R5);
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
    (((struct o4_uint *)0xC952660)->v) = (((((struct o4_int *)0xC952660)->v)) | R9);
    t44 = kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC95269C))), ((*(int *)((R14 + R0))) + 0x20), 0x10, ((int)stk + 8));
    R4 = (t44);
    if ((t44 == R12)) goto L_C217E06;
    goto L_C217D7A;
    L_C217D7A:;
    if (((*(int *)((R14 + 0xC9526FC))) == 0)) goto L_C217DDA;
    goto L_C217D82;
    L_C217D82:;
    (((struct o4_uint *)0xC952660)->v) = (((((struct o4_int *)0xC952660)->v)) | 0x8);
    if ((((((struct o0_int *)0xC952730)->v)) != 1)) goto L_C217DBE;
    goto L_C217D92;
    L_C217D92:;
    *(unsigned int *)((((((struct o4_int *)0xC952730)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC952730)->v)) + 0x0))) & R10) | 0x3000000);
    t57 = kmiDMAtoTARequest(R13, ((((struct o4_int *)0xC952730)->v)), ((((struct o8_int *)0xC952730)->v)), 0x10, ((int)stk + 8));
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
    (((struct o4_uint *)0xC952660)->v) = (((((struct o4_int *)0xC952660)->v)) | 0x10);
    t71 = (kmiDMAtoTARequest(R13, (*(int *)((R14 + 0xC9526BC))), ((*(int *)((R14 + 0xC95270C))) + 0x20), 0x10, ((int)stk + 8))) != R12;
    if (t71) goto L_C217E14;
    goto L_C217E06;
    L_C217C60:;
    (((struct o4_uint *)0xC952660)->v) = (((((struct o4_int *)0xC952660)->v)) | R8);
    if ((((((struct o0_int *)0xC952730)->v)) != 1)) goto L_C217CA0;
    goto L_C217C70;
    L_C217C70:;
    *(unsigned int *)((((((struct o4_int *)0xC952730)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC952730)->v)) + 0x0))) & R10) | 0x1000000);
    t80 = kmiDMAtoTARequest(R13, ((((struct o4_int *)0xC952730)->v)), ((((struct o8_int *)0xC952730)->v)), 0x10, ((int)stk + 8));
    R4 = (t80);
    if ((t80 != R12)) goto L_C217CA0;
    goto L_C217C9C;
    L_C217C9C:;
    goto L_C217E06;
    L_C217CA0:;
    t83 = *(int *)((R14 + 0xC9526DC));
    R1004 = ((int)stk + 8);
    R0 = (0xC9526DC);
    R6 = ((t83 + 0x20));
    R7 = (0x10);
    goto L_C217D40;
    L_C217D40:;
    t88 = kmiDMAtoTARequest(R13, (*(int *)((R14 + (R0 - 80)))), R6, R7, R1004);
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
    int R1268;
    int R1272;
    int R1276;
    int R1284;
    int R1288;
    int R1292;
    int R1304;
    int R1364;
    int R1368;
    int R1372;
    int R1496;

    R1268 = *(int *)((int)stk + 268);
    R1272 = *(int *)((int)stk + 272);
    R1276 = *(int *)((int)stk + 276);
    R1284 = *(int *)((int)stk + 284);
    R1288 = *(int *)((int)stk + 288);
    R1292 = *(int *)((int)stk + 292);
    R1304 = *(int *)((int)stk + 304);
    R1364 = *(int *)((int)stk + 364);
    R1368 = *(int *)((int)stk + 368);
    R1372 = *(int *)((int)stk + 372);
    R1496 = *(int *)((int)stk + 496);

    *(unsigned int *)((((int)stk + 256) + 0x8)) = 0x359;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC9522FC)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        R1276 = 0x20C;
    } else {
        R1276 = 0x106;
    }
    *(unsigned int *)((((int)stk + 256) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 256) + 0x4)) = 0x345;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC9522FC)->v), (t7 & 44) != 0) && (0x1 != 0))) {
        R1268 = 0x24;
        R1272 = 0x204;
    } else {
        R1268 = 0x12;
        R1272 = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x18)) = 0x3F;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
        R1372 = 0x104;
    } else {
        R1372 = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x78)) = 0x15;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t15 = (((struct o20_int *)0xC9522FC)->v), (t15 & 44) != 0) && (0x1 != 0))) {
        R1284 = 0x6;
    } else {
        R1284 = 0x3;
    }
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC9522FC)->v), (t21 & 44) != 0) && (0x1 != 0))) {
        R1288 = 0x16C;
    } else {
        R1288 = 0x319;
    }
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t27 = (((struct o20_int *)0xC9522FC)->v), (t27 & 44) != 0) && (0x1 != 0))) {
        R1292 = 0x1F;
    } else {
        R1292 = 0xF;
    }
    *(unsigned int *)((((int)stk + 256) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 256) + 0x2C)) = 0x0;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            R1304 = 0x1;
        } else {
            R1304 = 0x0;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
            if (0x1 != 0) {
                R1304 = 0x1;
            } else {
                R1304 = 0x0;
            }
        } else {
            if (0x0 != 0) {
                R1304 = 0x1;
            } else {
                R1304 = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x3C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x40)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x44)) = 0x0;
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        R1368 = 0x16;
    } else {
        R1368 = 0x1F;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 16) != 0) {
        R1364 = 0x0;
    } else {
        R1364 = 0x1;
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
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            R1496 = 0x12;
        } else {
            R1496 = 0x11;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
            if (0x1 != 0) {
                R1496 = 0x12;
            } else {
                R1496 = 0x11;
            }
        } else {
            if (0x0 != 0) {
                R1496 = 0x12;
            } else {
                R1496 = 0x11;
            }
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0xF4)) = 0x12;
    (((struct o8_uint *)0xC952614)->v) = 0xF0;
    t58 = R1268;
    (((struct o0_uint *)0xC952614)->v) = ((((int)((unsigned int)((int)((unsigned int)t58 + (unsigned int)0x0)) + ((((int)0x0 > (int)t58)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC952614)->v)));
    (((struct o4_uint *)0xC952614)->v) = (R1268);
    FUN_0c0e6118();
    return (FUN_0c220360());
}



int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int t2;
    int t8;
    int t18;
    int t20;
    int t109;
    int t50;
    int t71;
    int t11;
    int t67;
    int t29;
    int stk[16];
    int R1012;
    int R1016;
    int R1020;

    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1012 = a4;
    R1016 = a6;
    R1020 = a7;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t2 = kmiGetProfileInt(0xC236498, 0xC2364AC, (R1012));
    R1012 = (kmiGetProfileInt(0xC236498, 0xC2364B8, (R1020)));
    R1016 = (kmiGetProfileInt(0xC236498, 0xC2364C4, (R1016)));
    (((struct o0_uint *)0xC952318)->v) = (0x3 & t2);
    if ((t2 & 0x42) == 66) {
        *(unsigned int *)(((int)stk + 24)) = t2;
        t8 = ((int (*)(int))((*(int *)0xC952574)))((((int)stk + 12) + 0xC));
        (((struct o14_uint *)0xC952318)->v) = (*(int *)(((int)stk + 28)));
        if (((int)((((struct o14_int *)0xC952318)->v)) >= 0) && (t11 = (((struct o14_int *)0xC952318)->v), (int)t11 <= (int)0x4)) {
        } else {
            (((struct o14_uint *)0xC952318)->v) = 0x1;
        }
    }
    t18 = 0x0;
    if ((a5 != 5) && ((a5 != 4) && ((a5 != 3) && ((a5 != 1) && (a5 != 0))))) {
        t18 = 0x1;
    }
    t20 = 0x0;
    if ((R1012) != 0) {
        t20 = 0x1;
    }
    if ((R1016) != 0) {
        R1012 = 0x1;
    } else {
        R1012 = 0x0;
    }
    t109 = t18;
    if (t18 != 0) {
    } else {
        (((struct o4_uint *)0xC952318)->v) = t2;
        (((struct o8_uint *)0xC952318)->v) = a5;
        (((struct oC_uint *)0xC952318)->v) = (R1012);
        (((struct o10_uint *)0xC952318)->v) = t20;
        if (((((struct o4_int *)0xC952318)->v)) == 1) {
            R1020 = 0x280;
            R1016 = 0x0;
            *(unsigned int *)0xC95261C = 0x1E0;
            t67 = 0x1E0;
        } else {
            if (((((((struct o4_int *)0xC952318)->v)) & 0x1) != 1) && ((t29 = (((struct o4_int *)0xC952318)->v), (t29 & 44) != 0) && (0x1 != 0))) {
                R1016 = 0x1;
            } else {
                R1016 = 0x0;
            }
            if ((((((struct o4_int *)0xC952318)->v)) & 16) != 0) {
                R1020 = 0x280;
            } else {
                R1020 = 0x140;
            }
            if ((((((struct o4_int *)0xC952318)->v)) & 32) != 0) {
                t67 = 0x1E0;
                if ((((((struct o4_int *)0xC952318)->v)) & 0x42) == 66) {
                    t67 = (*(int *)(((((((struct o14_int *)0xC952318)->v)) << 2) + 0xC9527D4)));
                }
                *(unsigned int *)0xC95261C = (((int)((unsigned int)((int)((unsigned int)t67 + (unsigned int)0x0)) + ((((int)0x0 > (int)t67)) ? 1u : 0u))) >> 1);
            } else {
                t67 = 0xF0;
                if ((((((struct o4_int *)0xC952318)->v)) & 0x42) == 66) {
                    t50 = *(int *)(((((((struct o14_int *)0xC952318)->v)) << 2) + 0xC9527D4));
                    t67 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                }
                *(unsigned int *)0xC95261C = t67;
            }
        }
        t71 = (((struct o0_int *)0xC952318)->v);
        if (t71 != 1) {
            if (t71 != 0) {
                t109 = 0x1;
                if (t71 != 2) {
                } else {
                    kmiInitPAL();
                    t109 = 0x0;
                }
            } else {
                kmiInitNTSC();
                t109 = 0x0;
            }
        } else {
            kmiInitVGA();
            t109 = 0x0;
        }
        kmiFBControl((R1020), t67, a5, (R1016), ((R1012)), (t20));
        kmiWriteDispModeRegisters();
    }
    return t109;
}

int FUN_0c0f2100(int a4, int a5, int a6, int a7, int a8, int a9)
{
    short ex;
    short up;
    unsigned char *s;
    char a[8];
    char b[8];
    char c[8];
    char d[8];
    int e;
    int k;
    int i;

    up = 0;
    s = (unsigned char *)&a8;
    if ((s[7] & 127) == 0) {
        if (FUN_0c0f2598((int)s, 7) != 0) {
            for (i = 0; i < 8; i++) {
                ((char *)a5)[i] = 0;
            }
            *(int *)a6 = 0;
            *(char *)a7 = (s[7] & 128) ? -1 : 1;
            return 0;
        }
        FUN_0c0f2b70(a7, (int)&ex, (int)d, 0, a8, a9);
    } else {
        FUN_0c0f2b70(a7, (int)&ex, (int)d, a7, a8, a9);
    }
    if (*(signed char *)a7 == -1) {
        s[7] &= 0x7F;
    }
    if (ex == 0x7FF) {
        if (s[6] != 0xF0 || FUN_0c0f2598((int)s, 6) == 0) {
            return 2;
        }
        if (*(signed char *)a7 == 1) {
            return 1;
        }
        if (*(signed char *)a7 == -1) {
            return -1;
        }
    }
    ex -= 0x3FF;
    e = FUN_0c0f26bc(a8, a9);
    if (ex < 0) {
        e--;
    }
    d[7] = 0;
    *(int *)a6 = e - a4 + 1;
    FUN_0c0f2a30(a4, (int)c);
    k = FUN_0c0e5dc0();
    for (i = 0; i < 8 - k; i++) {
        c[i] = c[i + k];
    }
    for (; i < 8; i++) {
        c[i] = 0;
    }
    FUN_0c0f29d8((int)c, 8, a4 - k * 8);
    FUN_0c0f2a30(a4 - 1, (int)b);
    k = FUN_0c0e5dc0();
    for (i = 0; i < 8 - k; i++) {
        b[i] = b[i + k];
    }
    for (; i < 8; i++) {
        b[i] = 0;
    }
    FUN_0c0f29d8((int)b, 8, a4 - k * 8 - 1);
    for (;;) {
        FUN_0c0f25b8(ex, (int)d, *(int *)a6, a5);
        FUN_0c0e631c((int)a, a5, 8);
        if (FUN_0c0e62e0((int)a, (int)c, 8) > 0) {
            up = 1;
            (*(int *)a6)++;
            continue;
        }
        FUN_0c0e631c((int)a, a5, 8);
        if (FUN_0c0e62e0((int)a, (int)c, 8) == 0) {
            break;
        }
        FUN_0c0e631c((int)a, a5, 8);
        if (FUN_0c0e62e0((int)a, (int)b, 8) < 0 && up == 0) {
            (*(int *)a6)--;
            continue;
        }
        return 0;
    }
    (*(int *)a6)++;
    FUN_0c0f25b8(ex, (int)d, *(int *)a6, a5);
    return 0;
}

