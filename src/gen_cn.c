/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c01d3ee(int, int);
int FUN_0c01d636(int, int, int);
int FUN_0c01db0e(int, int);
int FUN_0c023300(int, int, int, int);
int FUN_0c02a19a(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03611c(int);
int FUN_0c036256(int);
int FUN_0c038d08(int);
int FUN_0c039c6a(int);
int FUN_0c03b80e(int);
int FUN_0c03e1a0(int, int, int);
int FUN_0c03e33c(int);
int FUN_0c03e388(void);
int FUN_0c03e5bc(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e636(int, int);
int FUN_0c081074(int);
int FUN_0c081e0c(int);
int FUN_0c08448c(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c085704(int);
extern int FUN_0c08a3d4();
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9940(int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db2a0(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc0b0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleUnitVector(int, int, float);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0de3a0(float, float, float);
int FUN_0c0de3b0(float, float, float);
int nlObjPutSetSaturate(float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e262a(int);
int FUN_0c0e5790(int);
int FUN_0c0e57a0(int, float, float, float);
int FUN_0c0e57d0(int, float, float, float);
int FUN_0c0e57f0(int, float, float, float);
int FUN_0c0e5810(int, float);
int FUN_0c0e5880(int, float, float);
int FUN_0c0e5910(int, int);
int FUN_0c0e5930(int);
int FUN_0c0e5980(int, int);
int FUN_0c0e5ad0(int, int);
int FUN_0c0e5b30(void);
int FUN_0c0e5dc0(void);
extern int _quick_odd_mvn();
int FUN_0c0e6248(void);
extern int FUN_0c0e631c();
int FUN_0c9de360(void);
extern float _builtin_sqrtf(float);
int buCalcCRC(int, int);
int copy_device(void);
int kdRecvFrame(void);
int memset(int, int, int);
extern int mpdrv_frame_send();
int mwPlySetLpFlg(int);
int FUN_0c084218(void);
int FUN_0c0b35e4(int a4);
void FUN_0c0bd958(int a4, int a5, int a6, int a7);
int buMakeBackupFileImage(int a4, int a5);
int FUN_0c0ccb64(int a4, int a5, int a6, int a7);
int FUN_0c03e6c6(int a4, int a5, int a6);
int FUN_0c068b62(int a4);
int FUN_0c018232(int a4, int a5, int a6);
int FUN_0c024dfa(int a4, int a5, int a6, int a7);
int FUN_0c061a8a(int a4, int a5, float f4);
int FUN_0c08a5e4(int a4, int a5);
int FUN_0c081e8c(int a4);
int FUN_0c090450(int a4, int a5, int a6, int a7);
int kdSendFrame(int a4, int a5);
float FUN_0c022c5e(int a4);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o458_float { char p[0x458]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o518_float { char p[0x518]; float v; };
struct o51C_float { char p[0x51C]; float v; };
struct o520_float { char p[0x520]; float v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o528_uint { char p[0x528]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o550_float { char p[0x550]; float v; };
struct o554_int { char p[0x554]; int v; };
struct o56_short { char p[0x56]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };





void FUN_0c0bd958(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t12;
    int t25;
    int t28;
    float t31;
    int t52;
    int t56;
    int t62;
    int t96;
    int t100;
    int stk[15];

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
    float F2;
    float F3;
    float F15;
    int T_;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0BD958:;
    R1004 = R5;
    t0 = *(int *)(((((R4 << 1) + R4) << 2) + 0xC2623A0));
    t2 = *(int *)((t0 + ((((unsigned int)(*(int *)(((((R4 << 1) + R4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    t3 = FUN_0c0e262a(((((t2 << 1) + t2) << 2) << 2));
    R1012 = t3;
    t4 = FUN_0c0e262a(((t2 << 2) << 1));
    R1020 = t4;
    R0 = (t4);
    R10 = (0x0);
    R11 = (0x0);
    R12 = (t4);
    R13 = (t3);
    R14 = (t2);
    R9 = ((t0 + 0x18));
    goto L_C0BDB24;
    L_C0BDB24:;
    t12 = *(int *)((R9 + 0x0));
    R4 = (t12);
    R9 = ((R9 + 0x4));
    if ((t12 == 0)) goto L_C0BDB2E;
    goto L_C0BDB2A;
    L_C0BDB2A:;
    goto L_C0BD9B2;
    L_C0BD9B2:;
    if (((R4 & 0x80000000) == 0)) goto L_C0BD9C4;
    goto L_C0BD9BA;
    L_C0BD9BA:;
    R9 = (((R9 - 4) + 0x50));
    goto L_C0BDB24;
    L_C0BD9C4:;
    R8 = (0x1);
    if (((R4 & 0x10) == 0)) goto L_C0BDA66;
    goto L_C0BD9CE;
    L_C0BD9CE:;
    R1016 = (*(int *)((R9 + 0x0)));
    R14 = ((R9 + 0x4));
    goto L_C0BD9D4;
    L_C0BD9D4:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD9DE;
    goto L_C0BD9DA;
    L_C0BD9DA:;
    R14 = ((R14 + 0x8));
    goto L_C0BDA58;
    L_C0BDA58:;
    t25 = R1016;
    R1016 = (t25 - 1);
    if (((t25 - 1) != 0)) goto L_C0BD9D4;
    goto L_C0BDA62;
    L_C0BDA62:;
    goto L_C0BDB1C;
    L_C0BDB1C:;
    R9 = (R14);
    goto L_C0BDB24;
    L_C0BD9DE:;
    t28 = R1012;
    R1008 = R11;
    R9 = (t28);
    if (((int)R10 <= 0)) goto L_C0BDA18;
    goto L_C0BD9E6;
    L_C0BD9E6:;
    t31 = nlLength(R9, R14);
    F0 = (t31);
    if ((!(9.99999975e-06f > t31))) goto L_C0BDA0C;
    goto L_C0BD9F6;
    L_C0BD9F6:;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = (*(int *)(((*(int *)((R9 + 0x2C))) + 0x4)));
    *(unsigned int *)((R9 + 0x28)) = ((*(int *)((R9 + 0x28))) + 0x1);
    *(unsigned int *)(((*(int *)((R9 + 0x2C))) + 0x4)) = R12;
    R12 = ((R12 + 0x8));
    goto L_C0BDA18;
    L_C0BDA18:;
    if (((int)(R1008) < (int)R10)) goto L_C0BDA56;
    goto L_C0BDA1E;
    L_C0BDA1E:;
    *(float *)((R13 + 0x0)) = (*(float *)((R14 + 0x0)));
    (((struct o4_float *)(R13))->v) = ((((struct o4_float *)(R14))->v));
    (((struct o8_float *)(R13))->v) = ((((struct o8_float *)(R14))->v));
    (((struct o18_float *)(R13))->v) = ((((struct oC_float *)(R14))->v));
    (((struct o1C_float *)(R13))->v) = ((((struct o10_float *)(R14))->v));
    (((struct o20_float *)(R13))->v) = ((((struct o14_float *)(R14))->v));
    *(unsigned int *)((R13 + 0x28)) = R8;
    *(unsigned int *)((R13 + 0x24)) = R11;
    *(unsigned int *)((R13 + 0x2C)) = R12;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = R11;
    R0 = (0x20);
    R10 = ((R10 + 0x1));
    R12 = ((R12 + 0x8));
    R13 = ((R13 + 0x30));
    goto L_C0BDA56;
    L_C0BDA56:;
    R14 = ((R14 + 0x20));
    goto L_C0BDA58;
    L_C0BDA0C:;
    t52 = R1008;
    R1008 = (t52 + 0x1);
    R9 = ((R9 + 0x30));
    if (((int)(t52 + 0x1) < (int)R10)) goto L_C0BD9E6;
    goto L_C0BDA18;
    L_C0BDA66:;
    if (((R4 & 0x8) == 0)) goto L_C0BDB20;
    goto L_C0BDA6C;
    L_C0BDA6C:;
    t56 = *(int *)((R9 + 0x0));
    R14 = ((R9 + 0x4));
    R6 = (((t56 << 1) + t56));
    goto L_C0BDA76;
    L_C0BDA76:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BDA98;
    goto L_C0BDA7C;
    L_C0BDA7C:;
    R14 = ((R14 + 0x8));
    goto L_C0BDB18;
    L_C0BDB18:;
    t62 = (R6 - 0x1) != 0;
    R6 = ((R6 - 0x1));
    if (t62) goto L_C0BDA76;
    goto L_C0BDB1C;
    L_C0BDA98:;
    R4 = ((R1012));
    R5 = (R11);
    if (((int)R10 <= 0)) goto L_C0BDADA;
    goto L_C0BDAA0;
    L_C0BDAA0:;
    if (((*(float *)((R4 + 0x0))) != (*(float *)((R14 + 0x0))))) goto L_C0BDAD2;
    goto L_C0BDAA8;
    L_C0BDAA8:;
    R0 = (0x4);
    if ((((((struct o4_float *)(R4))->v)) != ((((struct o4_float *)(R14))->v)))) goto L_C0BDAD2;
    goto L_C0BDAB2;
    L_C0BDAB2:;
    R0 = (0x8);
    if ((((((struct o8_float *)(R4))->v)) != ((((struct o8_float *)(R14))->v)))) goto L_C0BDAD2;
    goto L_C0BDABC;
    L_C0BDABC:;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = (*(int *)(((*(int *)((R4 + 0x2C))) + 0x4)));
    *(unsigned int *)((R4 + 0x28)) = ((*(int *)((R4 + 0x28))) + 0x1);
    *(unsigned int *)(((*(int *)((R4 + 0x2C))) + 0x4)) = R12;
    R12 = ((R12 + 0x8));
    goto L_C0BDADA;
    L_C0BDADA:;
    if (((int)R5 < (int)R10)) goto L_C0BDB16;
    goto L_C0BDADE;
    L_C0BDADE:;
    *(float *)((R13 + 0x0)) = (*(float *)((R14 + 0x0)));
    (((struct o4_float *)(R13))->v) = ((((struct o4_float *)(R14))->v));
    (((struct o8_float *)(R13))->v) = ((((struct o8_float *)(R14))->v));
    (((struct o18_float *)(R13))->v) = ((((struct oC_float *)(R14))->v));
    (((struct o1C_float *)(R13))->v) = ((((struct o10_float *)(R14))->v));
    (((struct o20_float *)(R13))->v) = ((((struct o14_float *)(R14))->v));
    *(unsigned int *)((R13 + 0x28)) = R8;
    *(unsigned int *)((R13 + 0x24)) = R11;
    *(unsigned int *)((R13 + 0x2C)) = R12;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = R11;
    R0 = (0x20);
    R10 = ((R10 + 0x1));
    R12 = ((R12 + 0x8));
    R13 = ((R13 + 0x30));
    goto L_C0BDB16;
    L_C0BDB16:;
    R14 = ((R14 + 0x20));
    goto L_C0BDB18;
    L_C0BDAD2:;
    t96 = (int)(R5 + 0x1) < (int)R10;
    R4 = ((R4 + 0x30));
    R5 = ((R5 + 0x1));
    if (t96) goto L_C0BDAA0;
    goto L_C0BDADA;
    L_C0BDB20:;
    goto L_C0BDB20;
    L_C0BDB2E:;
    t100 = R1004;
    *(unsigned int *)((t100 + 0x0)) = (R1012);
    *(unsigned int *)((t100 + 0x4)) = (R1020);
    *(unsigned int *)((t100 + 0x8)) = R10;
}


int FUN_0c0ccb64(int a4, int a5, int a6, int a7)
{
    float u2;
    float u4;
    float u6;
    float u10;
    float u34;
    int t42;
    int stk[13];

    FUN_0c0685a4(a4, a5, a6, a7);
    u2 = -81.0f;
    u2 = u2 + 0.00499999989f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 12)) = u2;
    u4 = -32.0f;
    u4 = u4 + 0.00199999986f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 16)) = u4;
    u6 = -81.0f;
    u6 = u6 + 0.00499999989f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 20)) = u6;
    nlAddVector((((int)stk + 4) + 0x8), (a4 + 0x3C));
    nlSubVector((((int)stk + 4) + 0x8), (a4 + 0x30));
    u10 = 0.00999999978f;
    u10 = u10 + 1.92266589e-06f * (float)(FUN_0c0da2e0());
    nlScaleUnitVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), u10);
    nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x8));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - 0.272222161f);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((((struct o48_float *)(a4))->v)), ((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)));
    (((struct o54_ushort *)(a4))->v) = (int)((float)((((struct o54_short *)(a4))->v)) + ((float)(FUN_0c07e636(((((struct o54_short *)(a4))->v)), (*(int *)(((int)stk + 4))))) * 0.099999994f));
    (((struct o56_ushort *)(a4))->v) = (int)((float)((((struct o56_short *)(a4))->v)) + ((float)(FUN_0c07e636(((((struct o56_short *)(a4))->v)), ((*(int *)(((int)stk + 8))) + 0x7FFF))) * 0.099999994f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o56_short *)(a4))->v)));
    nlRotateAX(((((struct o54_short *)(a4))->v)));
    u34 = (((struct o5C_float *)(a4))->v);
    nlScale(u34, u34, u34);
    FUN_0c0de000(((((struct o5C_float *)(a4))->v)));
    FUN_0c0c465c((*(short *)(((((((struct o60_int *)(a4))->v)) << 1) + 0xC1E9E4C))));
    nlPopMatrix(0x1);
    t42 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t42 + 0x1);
    if ((unsigned int)(t42 + 0x1) >= (unsigned int)0x4) {
        (((struct o60_uint *)(a4))->v) = 0x0;
    }
    return 0x60;
}




int FUN_0c024dfa(int a4, int a5, int a6, int a7)
{
    int t0;
    int t59;
    int t14;
    int t20;
    float u5;
    int t8;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u30;
    int t77;
    int t80;
    int t63;
    int t51;
    int stk[16];
    float s1;

    t0 = (((struct o3B8_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t59 = 0;
            if (t0 != 2) {
                t14 = t0;
                t20 = 0;
                if (t0 == 3) {
                    FUN_0c034fbc(a4, 0x400, 0x1, 0x1);
                    (((struct o3B0_uint *)(a4))->v) = (((((struct o3B0_int *)(a4))->v)) + 0x1);
                    (((struct o458_float *)(a4))->v) = ((float)((((struct o3B0_int *)(a4))->v)) / (float)((((struct o3B4_int *)(a4))->v)));
                    u5 = (((struct o458_float *)(a4))->v);
                    t8 = 0x458;
                    if (!(1.0f > u5)) {
                        (((struct o454_ushort *)(a4))->v) = 0x0;
                        (((struct o1B0_uint *)(a4))->v) = 0x0;
                        *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x4;
                        (((struct oA4_uint *)(a4))->v) = 0xA7F;
                        (((struct o528_uint *)(a4))->v) = 0x1;
                        (((struct o524_uint *)(a4))->v) = 0x1;
                        t8 = (FUN_0c02a19a(a4));
                    }
                    t14 = t8;
                    t20 = ((1.0f > u5));
                } else {
                    t20 = (0);
                }
                t51 = t14;
                t59 = (t20);
            } else {
                FUN_0c034fbc(a4, 0x800, 0x1, 0x1);
                u22 = (((struct o30_float *)(a4))->v);
                u23 = (((struct o518_float *)(a4))->v);
                u24 = (((struct o38_float *)(a4))->v);
                u25 = (((struct o520_float *)(a4))->v);
                u26 = ((u25 - u24) * (u25 - u24));
                u26 = u26 + (u23 - u22) * (u23 - u22);
                u30 = 4.0f;
                s1 = _builtin_sqrtf(u26);
                if (4.0f > s1) {
                    (((struct o3B8_uint *)(a4))->v) = (((((struct o3B8_int *)(a4))->v)) + 0x1);
                    u30 = s1;
                }
                FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), (((((struct o518_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o51C_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o520_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(int *)(((int)stk + 4))));
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 28)) = 0.0f;
                *(float *)(((int)stk + 32)) = u30;
                FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
                (((struct o20_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 12)));
                (((struct o4_float *)((((int)stk + 4) + 0x20)))->v) = (*(float *)(((int)stk + 16)));
                (((struct o8_float *)((((int)stk + 4) + 0x20)))->v) = (*(float *)(((int)stk + 20)));
                nlPopMatrix(0x1);
                (((struct o48_float *)(a4))->v) = ((((struct o20_float *)(((int)stk + 4)))->v));
                (((struct o4C_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x20)))->v));
                (((struct o50_float *)(a4))->v) = ((((struct o8_float *)((((int)stk + 4) + 0x20)))->v));
                t51 = 0x50;
                t59 = ((4.0f > s1));
            }
            t63 = t51;
        } else {
            FUN_0c023300(a4, a5, a6, a7);
            (((struct oA4_uint *)(a4))->v) = 0x0;
            (((struct o3B8_uint *)(a4))->v) = (((((struct o3B8_int *)(a4))->v)) + 0x1);
            *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x3;
            t63 = 0xC247030;
        }
        t80 = t63;
    } else {
        (((struct o3B0_uint *)(a4))->v) = (((((struct o3B0_int *)(a4))->v)) - 1);
        (((struct o458_float *)(a4))->v) = ((float)((((struct o3B0_int *)(a4))->v)) / (float)((((struct o3B4_int *)(a4))->v)));
        t77 = 0x458;
        if (((((struct o458_float *)(a4))->v)) > 0.049999997f) {
        } else {
            (((struct o3B8_uint *)(a4))->v) = (((((struct o3B8_int *)(a4))->v)) + 0x1);
            t77 = 0x3B8;
        }
        t80 = t77;
    }
    return t80;
}

int FUN_0c061a8a(int a4, int a5, float f4)
{
    float u2;
    float u5;
    float u6;
    float u9;
    float u11;
    int t25;
    float u26;
    int t32;
    int stk[14];

    nlPushMatrix(0x0);
    u2 = (((struct o88_float *)((*(int *)0xC247B94)))->v);
    nlScale((u2 * 0.5f), (u2 * 0.5f), 0.099999994f);
    u5 = (((struct o88_float *)((*(int *)0xC247B94)))->v);
    u6 = (u5 * 0.5f);
    if (0.099999994f > (u5 * 0.5f)) {
        u6 = 0.099999994f;
    }
    u9 = 0.5f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u9 = 1.0f;
    }
    *(float *)(((int)stk + 4)) = u9;
    u11 = *(float *)((a4 + 0x0));
    *(float *)((a4 + 0x0)) = (u11 - 0.0299999993f);
    if (!((u11 - 0.0299999993f) > 0.0f)) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + 1.0f);
    }
    *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - 0.0399999991f);
    if (!((*(float *)((a5 + 0x0))) > 0.0f)) {
        *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) + 1.0f);
    }
    nlPushMatrix(0x0);
    nlRotateAY(0x8000);
    FUN_0c0cae8e(0x3EC);
    FUN_0c0cacde(0x3EC, 0.199999988f, 0.0f);
    FUN_0c0de000((f4 * u6));
    t25 = *(int *)0xC247B94;
    u26 = *(float *)(((int)stk + 4));
    FUN_0c0848bc((((((struct o40_float *)(t25))->v)) * u26), (((((struct o44_float *)(t25))->v)) * u26), (((((struct o48_float *)(t25))->v)) * u26));
    FUN_0c0c47ae(0x3EC);
    t32 = *(int *)0xC247B94;
    FUN_0c0848bc(((((struct o4C_float *)(t32))->v)), ((((struct o50_float *)(t32))->v)), ((((struct o54_float *)(t32))->v)));
    FUN_0c0cacde(0x3EC, -0.199999988f, 0.0f);
    FUN_0c0cae8e(0x3EC);
    nlScale(0.5f, 0.5f, (1.0f + 1.0f));
    FUN_0c0de000(((1.0f + 1.0f) * ((f4 * u6))));
    FUN_0c0cae8e(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (*(float *)((a4 + 0x0))));
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0)))));
    nlScale(1.00999999f, 1.00999999f, 1.0f);
    FUN_0c0de000(((1.0f + 1.0f) * ((f4 * u6))));
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (-(*(float *)((a5 + 0x0)))));
    FUN_0c0cae8e(0x3ED);
    FUN_0c0849da();
    nlPopMatrix(0x1);
    return nlPopMatrix(0x1);
}



int FUN_0c090450(int a4, int a5, int a6, int a7)
{
    int t2;
    int t17;
    int t18;
    int t24;
    int t27;
    int t33;
    float u65;
    float u66;
    int t79;
    float u83;
    float u84;
    float u96;
    float u97;
    int t125;
    int t112;
    int t132;
    int t10;
    int t11;
    int t141;
    int t117;
    int t107;

    if ((*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    if (((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) && (t10 = *(int *)((a4 + 0x34)), t11 = *(int *)(((((t10 << 2) << 2) + 0xC2460F4) + 0xC)), t11 == 3)) {
        t141 = t11;
    } else {
        t17 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
        if (((int)t17 >= (int)0x2) && (t17 != 5)) {
        } else {
            t18 = ((int (*)(int))(FUN_0c0e19f2))(t17);
        }
        t24 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
        if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
            (((struct o8_float *)((0x45C + t24)))->v) = 1.0f;
            (((struct o4_float *)((0x45C + t24)))->v) = 1.0f;
            t27 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t24));
        }
        t33 = *(int *)((a4 + 0x38));
        switch (t33) {
        case 0:
            *(volatile int *)((t24 + 0x4E4));
            *(volatile int *)((t24 + 0x3B4));
            t79 = FUN_0c0e5dc0();
            *(unsigned int *)((a4 + 0x3C)) = t79;
            if ((int)t79 < (int)0x2) {
                *(unsigned int *)((a4 + 0x3C)) = 0x2;
            }
            (((struct o48_float *)(a4))->v) = (3.0f / (float)(*(int *)((a4 + 0x3C))));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            u83 = (((struct o48_float *)(a4))->v);
            u84 = (((struct o44_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = (u84 - u83);
            if (!((u84 - u83) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
            break;
        case 1:
            u65 = (((struct o48_float *)(a4))->v);
            u66 = (((struct o44_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = (u66 - u65);
            if (!((u66 - u65) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
            break;
        case 2:
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
            if (!(((((struct o0_float *)0xC090688)->v)) > ((((struct o44_float *)(a4))->v)))) {
                (((struct o44_float *)(a4))->v) = ((((struct o4_float *)0xC090688)->v));
                *(unsigned int *)((a4 + 0x38)) = 0x0;
            }
            break;
        case 3:
            if ((int)((((struct o40_int *)(a4))->v)) >= (int)0x1E) {
                (((struct o44_float *)(a4))->v) = 1.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            } else {
                (((struct o44_float *)(a4))->v) = ((-((((struct o44_float *)(a4))->v))) + 1.0f);
            }
            break;
        }
        u96 = (((struct o44_float *)(a4))->v);
        u97 = u96;
        if (u96 > 1.0f) {
            u97 = 1.0f;
        }
        (((struct o8_float *)((0x45C + t24)))->v) = u97;
        (((struct o4_float *)((0x45C + t24)))->v) = u97;
        t125 = (0x45C + t24);
        if (((((struct o4E4_int *)(t24))->v)) == 0) {
            if (((((struct o554_int *)(t24))->v)) == 2) {
                if (((int)((((struct o40_int *)(a4))->v)) > 0) && (t107 = *(int *)((a4 + 0x38)), (int)t107 <= (int)0x2)) {
                    (((struct o40_uint *)(a4))->v) = 0x0;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                }
                t117 = (0x45C + t24);
            } else {
                (((struct o8_float *)((0x45C + t24)))->v) = 1.0f;
                (((struct o4_float *)((0x45C + t24)))->v) = 1.0f;
                t112 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t24));
            }
            t125 = t117;
        }
        (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
        t132 = 0x40;
        if ((int)(*(int *)((a4 + 0x38))) > (int)0x3) {
            t132 = (((int (*)(int))(FUN_0c0e19f2))(t125));
        }
        t141 = t132;
    }
    return t141;
}


float FUN_0c022c5e(int a4)
{
    int t7;
    float u30;
    int t21;
    float u23;
    float u31;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u59;
    float u60;
    float u55;
    float u56;
    float u62;
    float u63;
    float u64;
    float u65;
    float u66;
    float u67;
    float u76;
    float u77;
    float u72;
    float u73;
    int t1;
    int t2;
    float u14;
    int t16;
    int t17;
    float u58;
    float s1;
    float s2;

    if ((((((struct o50C_int *)(a4))->v)) != 0) && (t1 = (((struct o510_int *)(a4))->v), t2 = *(int *)((((t1 << 2) + 0xC247030) + 0x0)), t2 != 0)) {
        u14 = ((((struct o390_float *)((*(int *)((((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)))))->v));
    } else {
        t7 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u14 = (*(float *)((0xC205CBC + ((((t7 << 1) + t7) << 2) << 1))));
    }
    u30 = 35.0f;
    if ((((((struct o50C_int *)(a4))->v)) != 0) && (t16 = (((struct o510_int *)(a4))->v), t17 = *(int *)((0xC247030 + (t16 << 2))), t17 == 4)) {
        t21 = (((struct o510_int *)(a4))->v);
        u23 = (*(float *)(((((((t21 << 1) + t21) << 2) << 2) << 2) + 0xC23F26C)));
        u23 = u23 + 0.5f * (*(float *)(((((((struct o510_int *)(a4))->v)) << 2) + (0xC247084 + (((((((struct oBC_int *)(a4))->v)) << 2) << 2) << 2)))));
        u30 = (u23 - u14);
    }
    u31 = u30;
    if (u30 > 40.0f) {
        u31 = 40.0f;
    }
    if (!(((((struct o34_float *)(a4))->v)) > (u14 + u31))) {
        (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + 0.0272199996f);
    }
    if (((((struct o34_float *)(a4))->v)) > (u14 + u31)) {
        (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + 0.0f);
    }
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
    (((struct o48_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
    (((struct o4C_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) * 0.949999988f);
    (((struct o50_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
    nlAddVector((a4 + 0x48), (0x4B0 + a4));
    u49 = (((struct o48_float *)(a4))->v);
    u50 = (((struct o4C_float *)(a4))->v);
    u51 = (((struct o50_float *)(a4))->v);
    u52 = (u50 * u50);
    u52 = u52 + u49 * u49;
    u53 = u52;
    u53 = u53 + u51 * u51;
    s1 = _builtin_sqrtf(u53);
    u59 = s1;
    u60 = u51;
    if (!(3.0f > s1)) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * (3.0f / s1));
        u55 = (((struct o4C_float *)(a4))->v);
        (((struct o4C_float *)(a4))->v) = (u55 * (3.0f / s1));
        u56 = (((struct o50_float *)(a4))->v);
        (((struct o50_float *)(a4))->v) = (u56 * (3.0f / s1));
        u58 = (u55 * (3.0f / s1));
        u59 = (u56 * (3.0f / s1));
        u60 = (3.0f / s1);
    }
    u62 = (((struct o48_float *)(a4))->v);
    u63 = (((struct o4C_float *)(a4))->v);
    u64 = (((struct o50_float *)(a4))->v);
    u65 = (u63 * u63);
    u65 = u65 + u62 * u62;
    u66 = (((struct o550_float *)(a4))->v);
    u67 = u65;
    u67 = u67 + u64 * u64;
    u76 = u58;
    s2 = _builtin_sqrtf(u67);
    u77 = s2;
    if (!(u66 > s2) && (u66 != 0.0f)) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * (((((struct o550_float *)(a4))->v)) / s2));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * (((((struct o550_float *)(a4))->v)) / s2));
        u72 = (((struct o550_float *)(a4))->v);
        u73 = (((struct o50_float *)(a4))->v);
        (((struct o50_float *)(a4))->v) = (u73 * (u72 / s2));
        u76 = (u73 * (u72 / s2));
        u77 = (u72 / s2);
    }
    return u64;
}
