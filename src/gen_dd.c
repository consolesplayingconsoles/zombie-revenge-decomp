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
int _divls(void);
int _modls(void);
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
    int stk[33];
    register int t1;
    register int t2;
    register int t3;
    register int t94;
    register int t18;
    register int t88;
    register int t20;
    register int t82;
    register int t76;
    register int t21;
    register int t29;
    register int t36;
    register int t30;
    register int t31;
    register int t32;
    register int t37;
    register int t38;
    register int t46;
    register int t53;
    register int t47;
    register int t48;
    register int t54;
    register int t55;
    register int t65;
    register int t68;
    register int t70;
    register int t73;
    register int t102;
    register int t110;
    register int t117;
    register int t111;
    register int t112;
    register int t113;
    register int t118;
    register int t119;
    register int t127;
    register int t134;
    register int t128;
    register int t129;
    register int t135;
    register int t136;
    register int t146;
    register int t149;
    register int t151;
    register int t154;
    register int t261;
    register int t185;
    register int t255;
    register int t187;
    register int t249;
    register int t243;
    register int t188;
    register int t196;
    register int t203;
    register int t197;
    register int t198;
    register int t199;
    register int t204;
    register int t205;
    register int t213;
    register int t220;
    register int t214;
    register int t215;
    register int t221;
    register int t222;
    register int t232;
    register int t235;
    register int t237;
    register int t240;
    register int t269;
    register int t277;
    register int t284;
    register int t278;
    register int t279;
    register int t280;
    register int t285;
    register int t286;
    register int t294;
    register int t301;
    register int t295;
    register int t296;
    register int t302;
    register int t303;
    register int t313;
    register int t316;
    register int t318;
    register int t321;
    register int t332;
    register int t165;
    register int t157;
    register int t25;
    int t71;
    register int t106;
    int t152;
    register int t324;
    register int t192;
    int t238;
    register int t273;
    int t319;

    stk[23] = a8;
    stk[24] = a9;
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
            t165 = 0x0;
        } else {
            *(int *)((int)stk + 8) = a9;
            *(int *)((int)stk + 4) = a8;
            FUN_0c0f2b70(a7, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x34), 0x0, a8, a9);
            if ((*(signed char *)((a7 + 0x0))) == -1) {
                *(unsigned char *)(((((int)stk + 12) + 0x54) + 0x7)) = ((*(signed char *)(((((int)stk + 12) + 0x54) + 0x7))) & 0x7F);
            }
            if ((*(short *)(((int)stk + 12))) == 0x7FF) {
                t94 = 0x2;
                if ((unsigned char)(*(signed char *)(((((int)stk + 12) + 0x54) + 0x6))) == 0xF0) {
                    t18 = FUN_0c0f2598((((int)stk + 12) + 0x54), 0x6);
                    t88 = 0x2;
                    if (t18 != 0) {
                        t20 = *(signed char *)((a7 + 0x0));
                        t82 = 0x1;
                        if (t20 != 1) {
                            t76 = 0xFFFFFFFF;
                            if (t20 != -1) {
                                t21 = *(short *)(((int)stk + 12));
                                *(unsigned short *)(((int)stk + 12)) = (t21 - 0x3FF);
                                if ((int)(short)(t21 - 0x3FF) >= 0) {
                                    *(int *)((int)stk + 8) = a9;
                                    *(int *)((int)stk + 4) = a8;
                                    t25 = (FUN_0c0f26bc(a8, a9));
                                } else {
                                    *(int *)((int)stk + 8) = a9;
                                    *(int *)((int)stk + 4) = a8;
                                    t25 = ((FUN_0c0f26bc(a8, a9)) - 1);
                                }
                                *(unsigned char *)(((int)stk + 63)) = 0x0;
                                *(unsigned int *)((a6 + 0x0)) = ((t25 - a4) + 0x1);
                                FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                                t29 = (int)((int)a4 / (int)(*(int *)(((int)stk + 20))));
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
                                t46 = (int)((int)(*(int *)(((int)stk + 24))) / (int)(*(int *)(((int)stk + 20))));
                                *(unsigned int *)(((int)stk + 16)) = t46;
                                t53 = 0x0;
                                if ((int)(0x8 - t46) > 0) {
                                    t47 = 0x0;
                                    for (;;) {
                                        t48 = t47;
                                        t47 = (t47 + 0x1);
                                        *(unsigned char *)(((((int)stk + 12) + 0x1C) + t48)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t48) + (((int)stk + 12) + 0x1C)) + 0x0)));
                                        if ((int)t47 >= (int)(0x8 - t46)) {
                                            break;
                                        }
                                    }
                                    t53 = t47;
                                }
                                if ((int)t53 < (int)0x8) {
                                    t54 = t53;
                                    t55 = (t53 + (((int)stk + 12) + 0x1C));
                                    for (;;) {
                                        t54 = (t54 + 0x1);
                                        *(unsigned char *)((t55 + 0x0)) = 0x0;
                                        t55 = (t55 + 0x1);
                                        if ((int)t54 >= (int)0x8) {
                                            break;
                                        }
                                    }
                                }
                                FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                                for (;;) {
                                    FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t65 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                    if ((int)t65 > 0) {
                                        *(unsigned short *)(((int)stk + 28)) = 0x1;
                                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                                        continue;
                                    }
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t68 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                    if (t68 == 0) {
                                        break;
                                    }
                                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                    t70 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                                    if (((int)t70 < 0) && (t71 = *(short *)(((int)stk + 28)), t71 == 0)) {
                                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                                        continue;
                                    }
                                    return 0x0;
                                }
                                t73 = *(int *)((a6 + 0x0));
                                *(unsigned int *)((a6 + 0x0)) = (t73 + 0x1);
                                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t73 + 0x1), a5);
                                t76 = 0x0;
                            }
                            t82 = t76;
                        }
                        t88 = t82;
                    }
                    t94 = t88;
                }
                t157 = t94;
            } else {
                t102 = *(short *)(((int)stk + 12));
                *(unsigned short *)(((int)stk + 12)) = (t102 - 0x3FF);
                if ((int)(short)(t102 - 0x3FF) >= 0) {
                    *(int *)((int)stk + 8) = a9;
                    *(int *)((int)stk + 4) = a8;
                    t106 = (FUN_0c0f26bc(a8, a9));
                } else {
                    *(int *)((int)stk + 8) = a9;
                    *(int *)((int)stk + 4) = a8;
                    t106 = ((FUN_0c0f26bc(a8, a9)) - 1);
                }
                *(unsigned char *)(((int)stk + 63)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = ((t106 - a4) + 0x1);
                FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                t110 = (int)((int)a4 / (int)(*(int *)(((int)stk + 20))));
                t117 = 0x0;
                if ((int)(0x8 - t110) > 0) {
                    t111 = 0x0;
                    for (;;) {
                        t112 = t111;
                        t113 = ((t111 + t110) + (((int)stk + 12) + 0x24));
                        t111 = (t111 + 0x1);
                        *(unsigned char *)(((((int)stk + 12) + 0x24) + t112)) = (*(signed char *)((t113 + 0x0)));
                        if ((int)t111 >= (int)(0x8 - t110)) {
                            break;
                        }
                    }
                    t117 = t111;
                }
                if ((int)t117 < (int)0x8) {
                    t118 = t117;
                    t119 = (t117 + (((int)stk + 12) + 0x24));
                    for (;;) {
                        *(unsigned char *)((t119 + 0x0)) = 0x0;
                        t118 = (t118 + 0x1);
                        t119 = (t119 + 0x1);
                        if ((int)t118 >= (int)0x8) {
                            break;
                        }
                    }
                }
                FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t110 << 2) << 1)));
                *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
                FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
                t127 = (int)((int)(*(int *)(((int)stk + 24))) / (int)(*(int *)(((int)stk + 20))));
                *(unsigned int *)(((int)stk + 16)) = t127;
                t134 = 0x0;
                if ((int)(0x8 - t127) > 0) {
                    t128 = 0x0;
                    for (;;) {
                        t129 = t128;
                        t128 = (t128 + 0x1);
                        *(unsigned char *)(((((int)stk + 12) + 0x1C) + t129)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t129) + (((int)stk + 12) + 0x1C)) + 0x0)));
                        if ((int)t128 >= (int)(0x8 - t127)) {
                            break;
                        }
                    }
                    t134 = t128;
                }
                if ((int)t134 < (int)0x8) {
                    t135 = t134;
                    t136 = (t134 + (((int)stk + 12) + 0x1C));
                    for (;;) {
                        t135 = (t135 + 0x1);
                        *(unsigned char *)((t136 + 0x0)) = 0x0;
                        t136 = (t136 + 0x1);
                        if ((int)t135 >= (int)0x8) {
                            break;
                        }
                    }
                }
                FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                for (;;) {
                    FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t146 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                    if ((int)t146 > 0) {
                        *(unsigned short *)(((int)stk + 28)) = 0x1;
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                        continue;
                    }
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t149 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                    if (t149 == 0) {
                        break;
                    }
                    FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                    t151 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                    if (((int)t151 < 0) && (t152 = *(short *)(((int)stk + 28)), t152 == 0)) {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                        continue;
                    }
                    return 0x0;
                }
                t154 = *(int *)((a6 + 0x0));
                *(unsigned int *)((a6 + 0x0)) = (t154 + 0x1);
                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t154 + 0x1), a5);
                t157 = 0x0;
            }
            t165 = t157;
        }
        t332 = t165;
    } else {
        *(int *)((int)stk + 8) = a9;
        *(int *)((int)stk + 4) = a8;
        FUN_0c0f2b70(a7, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x34), a7, a8, a9);
        if ((*(signed char *)((a7 + 0x0))) == -1) {
            *(unsigned char *)(((((int)stk + 12) + 0x54) + 0x7)) = ((*(signed char *)(((((int)stk + 12) + 0x54) + 0x7))) & 0x7F);
        }
        if ((*(short *)(((int)stk + 12))) == 0x7FF) {
            t261 = 0x2;
            if ((unsigned char)(*(signed char *)(((((int)stk + 12) + 0x54) + 0x6))) == 0xF0) {
                t185 = FUN_0c0f2598((((int)stk + 12) + 0x54), 0x6);
                t255 = 0x2;
                if (t185 != 0) {
                    t187 = *(signed char *)((a7 + 0x0));
                    t249 = 0x1;
                    if (t187 != 1) {
                        t243 = 0xFFFFFFFF;
                        if (t187 != -1) {
                            t188 = *(short *)(((int)stk + 12));
                            *(unsigned short *)(((int)stk + 12)) = (t188 - 0x3FF);
                            if ((int)(short)(t188 - 0x3FF) >= 0) {
                                *(int *)((int)stk + 8) = a9;
                                *(int *)((int)stk + 4) = a8;
                                t192 = (FUN_0c0f26bc(a8, a9));
                            } else {
                                *(int *)((int)stk + 8) = a9;
                                *(int *)((int)stk + 4) = a8;
                                t192 = ((FUN_0c0f26bc(a8, a9)) - 1);
                            }
                            *(unsigned char *)(((int)stk + 63)) = 0x0;
                            *(unsigned int *)((a6 + 0x0)) = ((t192 - a4) + 0x1);
                            FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
                            t196 = (int)((int)a4 / (int)(*(int *)(((int)stk + 20))));
                            t203 = 0x0;
                            if ((int)(0x8 - t196) > 0) {
                                t197 = 0x0;
                                for (;;) {
                                    t198 = t197;
                                    t199 = ((t197 + t196) + (((int)stk + 12) + 0x24));
                                    t197 = (t197 + 0x1);
                                    *(unsigned char *)(((((int)stk + 12) + 0x24) + t198)) = (*(signed char *)((t199 + 0x0)));
                                    if ((int)t197 >= (int)(0x8 - t196)) {
                                        break;
                                    }
                                }
                                t203 = t197;
                            }
                            if ((int)t203 < (int)0x8) {
                                t204 = t203;
                                t205 = (t203 + (((int)stk + 12) + 0x24));
                                for (;;) {
                                    *(unsigned char *)((t205 + 0x0)) = 0x0;
                                    t204 = (t204 + 0x1);
                                    t205 = (t205 + 0x1);
                                    if ((int)t204 >= (int)0x8) {
                                        break;
                                    }
                                }
                            }
                            FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t196 << 2) << 1)));
                            *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
                            FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
                            t213 = (int)((int)(*(int *)(((int)stk + 24))) / (int)(*(int *)(((int)stk + 20))));
                            *(unsigned int *)(((int)stk + 16)) = t213;
                            t220 = 0x0;
                            if ((int)(0x8 - t213) > 0) {
                                t214 = 0x0;
                                for (;;) {
                                    t215 = t214;
                                    t214 = (t214 + 0x1);
                                    *(unsigned char *)(((((int)stk + 12) + 0x1C) + t215)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t215) + (((int)stk + 12) + 0x1C)) + 0x0)));
                                    if ((int)t214 >= (int)(0x8 - t213)) {
                                        break;
                                    }
                                }
                                t220 = t214;
                            }
                            if ((int)t220 < (int)0x8) {
                                t221 = t220;
                                t222 = (t220 + (((int)stk + 12) + 0x1C));
                                for (;;) {
                                    t221 = (t221 + 0x1);
                                    *(unsigned char *)((t222 + 0x0)) = 0x0;
                                    t222 = (t222 + 0x1);
                                    if ((int)t221 >= (int)0x8) {
                                        break;
                                    }
                                }
                            }
                            FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
                            for (;;) {
                                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t232 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                if ((int)t232 > 0) {
                                    *(unsigned short *)(((int)stk + 28)) = 0x1;
                                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                                    continue;
                                }
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t235 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                                if (t235 == 0) {
                                    break;
                                }
                                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                                t237 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                                if (((int)t237 < 0) && (t238 = *(short *)(((int)stk + 28)), t238 == 0)) {
                                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                                    continue;
                                }
                                return 0x0;
                            }
                            t240 = *(int *)((a6 + 0x0));
                            *(unsigned int *)((a6 + 0x0)) = (t240 + 0x1);
                            FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t240 + 0x1), a5);
                            t243 = 0x0;
                        }
                        t249 = t243;
                    }
                    t255 = t249;
                }
                t261 = t255;
            }
            t324 = t261;
        } else {
            t269 = *(short *)(((int)stk + 12));
            *(unsigned short *)(((int)stk + 12)) = (t269 - 0x3FF);
            if ((int)(short)(t269 - 0x3FF) >= 0) {
                *(int *)((int)stk + 8) = a9;
                *(int *)((int)stk + 4) = a8;
                t273 = (FUN_0c0f26bc(a8, a9));
            } else {
                *(int *)((int)stk + 8) = a9;
                *(int *)((int)stk + 4) = a8;
                t273 = ((FUN_0c0f26bc(a8, a9)) - 1);
            }
            *(unsigned char *)(((int)stk + 63)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = ((t273 - a4) + 0x1);
            FUN_0c0f2a30(a4, (((int)stk + 12) + 0x24));
            t277 = (int)((int)a4 / (int)(*(int *)(((int)stk + 20))));
            t284 = 0x0;
            if ((int)(0x8 - t277) > 0) {
                t278 = 0x0;
                for (;;) {
                    t279 = t278;
                    t280 = ((t278 + t277) + (((int)stk + 12) + 0x24));
                    t278 = (t278 + 0x1);
                    *(unsigned char *)(((((int)stk + 12) + 0x24) + t279)) = (*(signed char *)((t280 + 0x0)));
                    if ((int)t278 >= (int)(0x8 - t277)) {
                        break;
                    }
                }
                t284 = t278;
            }
            if ((int)t284 < (int)0x8) {
                t285 = t284;
                t286 = (t284 + (((int)stk + 12) + 0x24));
                for (;;) {
                    *(unsigned char *)((t286 + 0x0)) = 0x0;
                    t285 = (t285 + 0x1);
                    t286 = (t286 + 0x1);
                    if ((int)t285 >= (int)0x8) {
                        break;
                    }
                }
            }
            FUN_0c0f29d8((((int)stk + 12) + 0x24), 0x8, (a4 - ((t277 << 2) << 1)));
            *(unsigned int *)(((int)stk + 24)) = (a4 - 1);
            FUN_0c0f2a30((a4 - 1), (((int)stk + 12) + 0x1C));
            t294 = (int)((int)(*(int *)(((int)stk + 24))) / (int)(*(int *)(((int)stk + 20))));
            *(unsigned int *)(((int)stk + 16)) = t294;
            t301 = 0x0;
            if ((int)(0x8 - t294) > 0) {
                t295 = 0x0;
                for (;;) {
                    t296 = t295;
                    t295 = (t295 + 0x1);
                    *(unsigned char *)(((((int)stk + 12) + 0x1C) + t296)) = (*(signed char *)(((((*(int *)(((int)stk + 16))) + t296) + (((int)stk + 12) + 0x1C)) + 0x0)));
                    if ((int)t295 >= (int)(0x8 - t294)) {
                        break;
                    }
                }
                t301 = t295;
            }
            if ((int)t301 < (int)0x8) {
                t302 = t301;
                t303 = (t301 + (((int)stk + 12) + 0x1C));
                for (;;) {
                    t302 = (t302 + 0x1);
                    *(unsigned char *)((t303 + 0x0)) = 0x0;
                    t303 = (t303 + 0x1);
                    if ((int)t302 >= (int)0x8) {
                        break;
                    }
                }
            }
            FUN_0c0f29d8((((int)stk + 12) + 0x1C), 0x8, ((a4 - (((*(int *)(((int)stk + 16))) << 2) << 1)) - 1));
            for (;;) {
                FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (*(int *)((a6 + 0x0))), a5);
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t313 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                if ((int)t313 > 0) {
                    *(unsigned short *)(((int)stk + 28)) = 0x1;
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + 0x1);
                    continue;
                }
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t316 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x24), 0x8);
                if (t316 == 0) {
                    break;
                }
                FUN_0c0e631c((((int)stk + 12) + 0x14), a5, 0x8);
                t318 = FUN_0c0e62e0((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x1C), 0x8);
                if (((int)t318 < 0) && (t319 = *(short *)(((int)stk + 28)), t319 == 0)) {
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) - 1);
                    continue;
                }
                return 0x0;
            }
            t321 = *(int *)((a6 + 0x0));
            *(unsigned int *)((a6 + 0x0)) = (t321 + 0x1);
            FUN_0c0f25b8((*(short *)(((int)stk + 12))), (((int)stk + 12) + 0x2C), (t321 + 0x1), a5);
            t324 = 0x0;
        }
        t332 = t324;
    }
    return t332;
}

