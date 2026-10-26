/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
int FUN_0c01d636(int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c04aa34(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c04c98e();
int FUN_0c054c3c(int);
int FUN_0c0553b6(int, int, int);
int FUN_0c08220e(int, int);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
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
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dccc0(void);
int FUN_0c0de070(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e5f1c(int);
int FUN_0c0e61d4(void);
int FUN_0c0e6248(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdDecSubcode(int, int, int, int);
int gdFsGetDrvStatG(int, int, int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int kmiReadRegister(int);
extern int kmiWriteRegister();
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int FUN_0c03310c(int a4);
int FUN_0c058fa0(int a4);
int FUN_0c0dd570(int a4, float f4, float f5, float f6);
int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c04cc54(int a4, int a5);
int kmSetModifierRenderState(int a4, float f4);
int FUN_0c220360(Stk63 s);
int FUN_0c07a944(int a4, int a5, int a6, int a7);
int FUN_0c03d2ae(int a4);
void FUN_0c210c70(int a4, int a5);
void FUN_0c210ece(int a4, int a5);

int gdFsGetStatG(int a4, int a5, int a6, int a7)
{
    int t2;
    int t25;
    int t41;
    int t42;
    int t47;
    int t50;
    int t54;
    int t62;
    int t66;
    int t72;
    int t79;
    int t91;
    int t101;
    int t117;
    int stk[18];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C20EFAE:;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x20)) = 0x1;
    t2 = *(int *)(((*(int *)0xC2393C4) + 0x1C));
    R12 = (0x0);
    R13 = (0xC2393C4);
    R14 = (t2);
    if ((t2 != 0)) goto L_C20EFD4;
    goto L_C20EFD0;
    L_C20EFD0:;
    R4 = (0x0);
    goto L_C20EFD6;
    L_C20EFD6:;
    R10 = ((((int)stk + 4) + 0x1C));
    R11 = ((((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x10)))))(R4, (((int)stk + 4) + 0x1C), R6, R7)));
    if ((R14 != 0)) goto L_C20EFEE;
    goto L_C20EFEA;
    L_C20EFEA:;
    goto L_C20F21C;
    L_C20F21C:;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x20)) = R12;
    return R11;
    L_C20EFEE:;
    R0 = (R11);
    R9 = (0x2);
    if ((R11 == 0)) goto L_C20F026;
    goto L_C20EFF6;
    L_C20EFF6:;
    if ((R0 == 1)) goto L_C20F026;
    goto L_C20EFFA;
    L_C20EFFA:;
    if ((R0 != 65)) goto L_C20F002;
    goto L_C20EFFE;
    L_C20EFFE:;
    goto L_C20F120;
    L_C20F120:;
    t25 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x24)))))((*(int *)((R14 + 0x3C))), ((int)stk + 4), R6, R7);
    R4 = (t25);
    if ((t25 != 0)) goto L_C20F148;
    goto L_C20F132;
    L_C20F132:;
    if (((int)(*(int *)(((int)stk + 4))) <= 0)) goto L_C20F13E;
    goto L_C20F138;
    L_C20F138:;
    *(unsigned short *)((R14 + 0x4A)) = R12;
    goto L_C20F142;
    L_C20F142:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R14 + 0x20)));
    goto L_C20F21C;
    L_C20F13E:;
    *(unsigned short *)((R14 + 0x4A)) = R9;
    goto L_C20F142;
    L_C20F148:;
    if ((R4 != 1)) goto L_C20F21C;
    goto L_C20F14E;
    L_C20F14E:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)(((int)stk + 4)));
    goto L_C20F21C;
    L_C20F002:;
    if ((R0 != 4)) goto L_C20F00A;
    goto L_C20F006;
    L_C20F006:;
    goto L_C20F154;
    L_C20F154:;
    *(unsigned int *)((R14 + 0x40)) = (*(int *)((R10 + 0x8)));
    if (((*(short *)((R14 + 0x48))) != 1)) goto L_C20F21C;
    goto L_C20F162;
    L_C20F162:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R10 + 0x0)));
    goto L_C20F21C;
    L_C20F00A:;
    if ((R0 != 67)) goto L_C20F012;
    goto L_C20F00E;
    L_C20F00E:;
    goto L_C20F21C;
    L_C20F012:;
    if ((R0 != 5)) goto L_C20F01A;
    goto L_C20F016;
    L_C20F016:;
    goto L_C20F168;
    L_C20F168:;
    *(unsigned short *)((R14 + 0x50)) = R11;
    *(unsigned short *)((R14 + 0x52)) = (*(int *)((R10 + 0x0)));
    t41 = *(int *)((R10 + 0x4));
    *(unsigned int *)((R14 + 0x44)) = t41;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    t42 = *(int *)((R13 + 0x0));
    *(unsigned int *)((t42 + 0x1C)) = R12;
    R2 = (t41);
    R3 = (t42);
    if (((*(short *)((R14 + 0x52))) != -29)) goto L_C20F1D0;
    goto L_C20F186;
    L_C20F186:;
    t47 = *(int *)((R14 + 0x44));
    T_ = (((t47 == 58)));
    if ((t47 != 58)) goto L_C20F1C0;
    goto L_C20F18E;
    L_C20F18E:;
    t50 = gdFsGetDrvStatG(R4, R5, R6, R7);
    R4 = (t50);
    if ((t50 == 6)) goto L_C20F19C;
    goto L_C20F198;
    L_C20F198:;
    if ((R4 != 0)) goto L_C20F1D0;
    goto L_C20F19C;
    L_C20F19C:;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFE9;
    goto L_C20F1D0;
    L_C20F1D0:;
    t54 = *(short *)((R14 + 0x52));
    R4 = (t54);
    if ((t54 == -23)) goto L_C20F1E0;
    goto L_C20F1DA;
    L_C20F1DA:;
    if ((R4 != -33)) goto L_C20F1E6;
    goto L_C20F1E0;
    L_C20F1E0:;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x34)) = 0x1;
    goto L_C20F1E6;
    L_C20F1E6:;
    if (((*(int *)(((*(int *)((R13 + 0x0))) + 0x24))) == 0)) goto L_C20F1FC;
    goto L_C20F1EE;
    L_C20F1EE:;
    t62 = *(int *)((R13 + 0x0));
    t66 = ((int (*)(int, int, int, int))((*(int *)((t62 + 0x24)))))((*(int *)((t62 + 0x28))), (*(short *)((R14 + 0x52))), R6, R7);
    goto L_C20F1FC;
    L_C20F1FC:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_C20F21C;
    goto L_C20F202;
    L_C20F202:;
    t72 = ((int (*)(int, int, int, int))((*(int *)((R14 + 0x34)))))((*(int *)((R14 + 0x38))), (*(short *)((R14 + 0x52))), R6, R7);
    goto L_C20F21C;
    L_C20F1C0:;
    R0 = (0x44);
    goto L_C20F1C2;
    L_C20F1C2:;
    if (((*(int *)((R14 + R0))) != 0x104)) goto L_C20F1D0;
    goto L_C20F1CA;
    L_C20F1CA:;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFDB;
    goto L_C20F1D0;
    L_C20F01A:;
    if ((R0 != 64)) goto L_C20F022;
    goto L_C20F01E;
    L_C20F01E:;
    goto L_C20F168;
    L_C20F022:;
    goto L_C20F210;
    L_C20F210:;
    *(unsigned short *)((R14 + 0x50)) = (unsigned char)R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    goto L_C20F21C;
    L_C20F026:;
    t79 = *(short *)((R14 + 0x48));
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    *(unsigned short *)((R14 + 0x50)) = R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned short *)((R14 + 0x48)) = R12;
    R4 = (t79);
    if ((R11 == 1)) goto L_C20F042;
    goto L_C20F03E;
    L_C20F03E:;
    goto L_C20F21C;
    L_C20F042:;
    R0 = (R4);
    if ((R4 != 1)) goto L_C20F06C;
    goto L_C20F048;
    L_C20F048:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R10 + 0x0)));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x1C))));
    *(unsigned short *)((R14 + 0x4A)) = R9;
    if (((*(int *)((R14 + 0x24))) != 0)) goto L_C20F062;
    goto L_C20F05E;
    L_C20F05E:;
    goto L_C20F21C;
    L_C20F062:;
    t91 = ((int (*)(int, int, int, int))((*(int *)((R14 + 0x24)))))((*(int *)((R14 + 0x28))), R5, R6, R7);
    goto L_C20F21C;
    L_C20F06C:;
    if ((R0 == 3)) goto L_C20F082;
    goto L_C20F070;
    L_C20F070:;
    R0 = (R4);
    if ((R4 != 4)) goto L_C20F088;
    goto L_C20F076;
    L_C20F076:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R14 + 0x20)));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x1C))));
    goto L_C20F082;
    L_C20F082:;
    *(unsigned short *)((R14 + 0x4A)) = R9;
    goto L_C20F21C;
    L_C20F088:;
    if ((R0 != 7)) goto L_C20F0D4;
    goto L_C20F08C;
    L_C20F08C:;
    t101 = (gdDecSubcode(((*(int *)((R13 + 0x0))) + 0x40), (((int)stk + 4) + 0x4), R6, R7)) == 0;
    if (t101) goto L_C20F0B0;
    goto L_C20F09E;
    L_C20F09E:;
    *(unsigned short *)((R14 + 0x50)) = 0x5;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFED;
    *(unsigned int *)((R14 + 0x44)) = R12;
    goto L_C20F1D0;
    L_C20F0B0:;
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x4)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x8)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0xC)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x10)) = ((*(int *)(((int)stk + 24))) & 0xFFFFFF);
    goto L_C20F21C;
    L_C20F0D4:;
    if ((R4 == 8)) goto L_C20F0DE;
    goto L_C20F0DA;
    L_C20F0DA:;
    goto L_C20F21C;
    L_C20F0DE:;
    t117 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x48)))))(0xC94D9BC, 0xC94D9C0, (*(int *)((R14 + 0x4))), 0xC94D9C4);
    R4 = (t117);
    if ((t117 == 0)) goto L_C20F10A;
    goto L_C20F0F6;
    L_C20F0F6:;
    *(unsigned int *)((R14 + 0x3C)) = R4;
    *(unsigned short *)((R14 + 0x50)) = 0x4;
    *(unsigned short *)((R14 + 0x48)) = 0x6;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R14;
    goto L_C20F21C;
    L_C20F10A:;
    *(unsigned short *)((R14 + 0x50)) = 0x5;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFE4;
    *(unsigned int *)((R14 + 0x44)) = R12;
    *(unsigned int *)(((*(int *)((R14 + 0x4))) + 0x0)) = R12;
    goto L_C20F1D0;
    L_C20EFD4:;
    R4 = ((*(int *)((R14 + 0x3C))));
    goto L_C20EFD6;
}

int FUN_0c03310c(int a4)
{
    float t29;
    float t32;
    float u62;
    int t21;
    float u68;
    float u77;
    int stk[25];

    *(unsigned int *)((a4 + 0x22C)) = (int)((float)(*(int *)((a4 + 0x22C))) * 0.899999976f);
    *(unsigned int *)((a4 + 0x234)) = (int)((float)(*(int *)((a4 + 0x234))) * 0.899999976f);
    *(unsigned int *)((a4 + 0x230)) = (int)((float)(*(int *)((a4 + 0x230))) * 0.899999976f);
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dc950((*(short *)((a4 + 0x70))));
    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 10.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    FUN_0c0dc4c0(0x1);
    FUN_0c0a7984((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    if (((*(int *)(((int)stk + 8))) == 0x8000) && (t21 = *(int *)(((int)stk + 4)), t21 == 0x8000)) {
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 0x800);
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    t29 = FUN_0c0da410((*(int *)(((int)stk + 4))));
    FUN_0c0dc950((int)(-(t29 * 128.0f)));
    t32 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    FUN_0c0dc6e0((int)(-(t32 * 128.0f)));
    *(unsigned int *)(((int)stk + 24)) = (0x28C + a4);
    FUN_0c0a7c66((*(int *)(((int)stk + 24))), ((*(int *)(((int)stk + 24))) + 0x4), ((0x28C + a4) + 0x8));
    FUN_0c0dc4c0(0x1);
    *(unsigned int *)((a4 + 0x22C)) = ((*(int *)((a4 + 0x22C))) + (*(int *)(((0x28C + a4) + 0x0))));
    *(unsigned int *)((a4 + 0x230)) = ((*(int *)((a4 + 0x230))) + (*(int *)(((0x290 + a4) + 0x0))));
    *(unsigned int *)((a4 + 0x234)) = ((*(int *)((a4 + 0x234))) + (*(int *)(((0x294 + a4) + 0x0))));
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dc950((*(int *)((a4 + 0x234))));
    FUN_0c0dc890((*(int *)((a4 + 0x230))));
    FUN_0c0dc6e0((*(int *)((a4 + 0x22C))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 10.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    FUN_0c0dc4c0(0x1);
    FUN_0c0a7984((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    u62 = *(float *)0xC033434;
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x8000) {
        u68 = ((float)(*(int *)(((int)stk + 8))) * 5.0f);
    } else {
        u68 = (-((float)(0x10000 - (*(int *)(((int)stk + 8)))) * 5.0f));
    }
    *(float *)((a4 + 0x228)) = (u68 / u62);
    if ((int)(*(int *)(((int)stk + 4))) < (int)0x8000) {
        u77 = (-((float)(*(int *)(((int)stk + 4))) * 5.0f));
    } else {
        u77 = ((float)(0x10000 - (*(int *)(((int)stk + 4)))) * 5.0f);
    }
    *(float *)((a4 + 0x220)) = (u77 / u62);
    return 0x220;
}

int FUN_0c058fa0(int a4)
{
    int t4;
    int t5;
    int t7;
    int t11;
    int t13;
    int t20;
    int t33;
    int t37;
    int t48;
    int t59;
    int t87;
    int stk[11];

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
    float F3;
    int T_;
    R4 = a4;
    L_C058FA0:;
    *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = ((((unsigned int)R4 >= (unsigned int)0x6C)) ? 1 : 0);
    t4 = R4;
    t5 = R4;
    R0 = (((((unsigned int)R4 >= (unsigned int)0x6C)) ? 1 : 0));
    R4 = (0xC247B84);
    R5 = (0x3);
    R6 = (0xC247B24);
    R7 = t4;
    R8 = t5;
    goto L_C058FCA;
    L_C058FCA:;
    t7 = (*(int *)(((R4 - 24) + 0x0))) != R8;
    R4 = ((R4 - 24));
    if (t7) goto L_C058FD6;
    goto L_C058FD2;
    L_C058FD2:;
    goto L_C059206;
    L_C059206:;
    return R0;
    L_C058FD6:;
    if (((*(int *)((R4 + 0x4))) != 0)) goto L_C058FDE;
    goto L_C058FDC;
    L_C058FDC:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    goto L_C058FDE;
    L_C058FDE:;
    t11 = (int)(R5 - 1) >= 0;
    R5 = ((R5 - 1));
    if (t11) goto L_C058FCA;
    goto L_C058FE4;
    L_C058FE4:;
    t13 = *(int *)(((int)stk + 8));
    R0 = (t13);
    if ((t13 != -1)) goto L_C058FEE;
    goto L_C058FEA;
    L_C058FEA:;
    goto L_C059206;
    L_C058FEE:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C058FF8;
    goto L_C058FF4;
    L_C058FF4:;
    R8 = ((*(int *)0xC23ED50));
    goto L_C058FF8;
    L_C058FF8:;
    t20 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((((((t20 << 1) + t20) << 2) << 1) + R6) + 0x0)) = R8;
    R4 = (((R8 << 2) + 0xC1FF940));
    R9 = ((((((t20 << 1) + t20) << 2) << 1) + R6));
    if (((*(int *)((((R8 << 2) + 0xC1FF940) + 0x0))) != 0)) goto L_C059020;
    goto L_C059016;
    L_C059016:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C059020;
    goto L_C05901C;
    L_C05901C:;
    goto L_C059206;
    L_C059020:;
    R10 = (0x0);
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C05902C;
    goto L_C059028;
    L_C059028:;
    R13 = ((*(int *)((R4 + 0x0))));
    goto L_C05902E;
    L_C05902E:;
    R11 = (0x1);
    goto L_C0591FC;
    L_C0591FC:;
    t33 = *(short *)((R13 + 0x12));
    R0 = (t33);
    if ((t33 == 0)) goto L_C059206;
    goto L_C059202;
    L_C059202:;
    goto L_C059040;
    L_C059040:;
    t37 = FUN_0c0e19aa(0xC05921E, 0x290, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t37);
    *(unsigned int *)((t37 + 0x220)) = R8;
    FUN_0c0e61d4();
    FUN_0c0e61d4();
    FUN_0c0e6248();
    *(unsigned int *)(((0x264 + t37) + 0x0)) = (*(short *)((R13 + 0x12)));
    R14 = (t37);
    R4 = (R10);
    R5 = (R10);
    goto L_C05908A;
    L_C05908A:;
    *(unsigned int *)((((0x224 + R14) + R4) + 0x0)) = (*(int *)((((R13 + 0x18) + R5) + 0x0)));
    *(unsigned int *)((((0x234 + R14) + R4) + 0x0)) = (*(int *)((((R13 + 0x18) + R5) + 0x4)));
    t48 = (unsigned int)(R4 + 0x4) < (unsigned int)0x10;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x8));
    if (t48) goto L_C05908A;
    goto L_C0590B4;
    L_C0590B4:;
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x0))) != 3)) goto L_C0590C2;
    goto L_C0590BE;
    L_C0590BE:;
    *(unsigned int *)((R14 + 0x244)) = R11;
    goto L_C0590C2;
    L_C0590C2:;
    *(unsigned int *)((R14 + 0xF0)) = (*(int *)((R13 + 0x38)));
    *(unsigned int *)((R14 + 0x268)) = (*(short *)((R13 + 0x3C)));
    *(unsigned int *)((R14 + 0x26C)) = (*(short *)((R13 + 0x3E)));
    *(unsigned int *)((R14 + 0x288)) = (*(int *)((R13 + 0x14)));
    t59 = *(int *)((((*(short *)((R13 + 0x12))) << 2) + 0xC0F8E70));
    *(unsigned int *)((R14 + 0x284)) = t59;
    *(unsigned int *)((R14 + 0x248)) = (*(int *)((t59 + 0x0)));
    *(unsigned int *)((R14 + 0x24C)) = (*(int *)((t59 + 0x4)));
    *(float *)((R14 + 0x25C)) = (*(float *)((t59 + 0x8)));
    *(unsigned int *)((R14 + 0x78)) = (*(int *)((t59 + 0x10)));
    *(unsigned int *)((R14 + 0x74)) = 0x15;
    *(unsigned int *)((R14 + 0xC0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((R14 + 0xBC)) = ((*(int *)((R9 + 0x4))) + 0x10);
    *(unsigned int *)(((((*(int *)((R9 + 0x4))) << 2) + (R9 + 0x8)) + 0x0)) = R14;
    *(unsigned int *)((R14 + 0xC8)) = 0x20000;
    *(float *)((R14 + 0x1B8)) = (*(float *)((t59 + 0x14)));
    *(unsigned int *)((R14 + 0x270)) = ((*(int *)((R14 + 0x270))) | R11);
    R12 = (t59);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C059164;
    goto L_C059146;
    L_C059146:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C059164;
    goto L_C05914C;
    L_C05914C:;
    *(unsigned int *)((R14 + 0x28C)) = R11;
    *(unsigned int *)((R14 + 0x1EC)) = 0xFFFFFFF0;
    *(float *)((R14 + 0x1E4)) = (*(float *)((R14 + 0x1B8)));
    *(unsigned int *)((R14 + 0x200)) = 0xFFFFFFFF;
    goto L_C059164;
    L_C059164:;
    if (((*(int *)((R14 + 0x28C))) != 0)) goto L_C0591D8;
    goto L_C05916C;
    L_C05916C:;
    if (((*(int *)((R12 + 0x18))) == 0)) goto L_C0591D8;
    goto L_C059172;
    L_C059172:;
    FUN_0c01d636(R14, (*(int *)((R12 + 0x18))), 0x0);
    R0 = (0x270);
    R2 = ((*(int *)((R14 + 0x270))));
    R3 = (0x2);
    goto L_C0591D4;
    L_C0591D4:;
    *(unsigned int *)((R14 + R0)) = (R2 | R3);
    goto L_C0591D8;
    L_C0591D8:;
    if ((((*(int *)((R12 + 0x1C))) & 2) == 0)) goto L_C0591E6;
    goto L_C0591DE;
    L_C0591DE:;
    *(unsigned int *)((R14 + 0x1F8)) = 0x3;
    goto L_C0591EA;
    L_C0591EA:;
    *(unsigned int *)((R14 + 0x21C)) = R10;
    t87 = *(int *)((R9 + 0x4));
    *(unsigned int *)((R9 + 0x4)) = (t87 + 0x1);
    R0 = (0x21C);
    R13 = ((R13 + 0x40));
    if (((int)(t87 + 0x1) >= (int)0x4)) goto L_C059206;
    goto L_C0591FC;
    L_C0591E6:;
    *(unsigned int *)((R14 + 0x1F8)) = R11;
    goto L_C0591EA;
    L_C05902C:;
    R13 = (R7);
    goto L_C05902E;
}

int FUN_0c0dd570(int a4, float f4, float f5, float f6)
{
    int t0;
    float t3;
    int t5;
    float u13;
    float u14;
    float u23;
    int t15;
    int t25;
    float t26;
    float u34;
    float u35;
    float u36;
    float t38;
    float t41;
    float t42;
    float u43;
    float t44;
    float t46;
    float u48;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (1.0f / (FUN_0c0da6a0((t0 >> 1))));
    if ((*(float *)0xC20CE2C) != 0.0f) {
        t3 = FUN_0c0da6a0((t0 >> 1));
        t5 = FUN_0c0d9d20((t3 * ((*(float *)0xC20CE2C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t5)));
    } else {
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 12));
    u14 = *(float *)(((int)stk + 16));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0xC20CE30) != 0.0f) {
        t15 = FUN_0c0d9d20((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        u23 = ((FUN_0c0da6a0(t15)) * ((*(float *)0xC20CE30) + 1.0f));
    }
    t25 = FUN_0c0d9d20(u23);
    t26 = FUN_0c0d9e90(t25);
    *(float *)0xC20CE2C = 0.0f;
    *(float *)0xC20CE30 = 0.0f;
    *(float *)0xC20CE20 = ((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))))) * 0.5f);
    *(float *)0xC20CE24 = (((((u14 * u13)) * (1.0f / t26))) * 0.5f);
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
    *(float *)(((int)stk + 20)) = (float)(FUN_0c0d9d20((t38 / (*(float *)(((int)stk + 16))))));
    *(float *)0xC94853C = 0.0f;
    *(float *)0xC94852C = 0.0f;
    *(float *)0xC948558 = 0.0f;
    *(float *)0xC948548 = 0.0f;
    t41 = FUN_0c0d9e90((t0 >> 1));
    *(float *)0xC948528 = t41;
    *(float *)0xC948538 = (-t41);
    t42 = FUN_0c0da410((t0 >> 1));
    *(float *)0xC948540 = t42;
    *(float *)0xC948530 = t42;
    u43 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u43;
    t44 = FUN_0c0d9e90((int)u43);
    *(float *)0xC94854C = t44;
    *(float *)0xC94855C = (-t44);
    t46 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    *(float *)0xC948560 = t46;
    *(float *)0xC948550 = t46;
    *(float *)0xC948544 = 0.0f;
    *(float *)0xC948534 = 0.0f;
    *(float *)0xC948564 = 0.0f;
    *(float *)0xC948554 = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u14 * u13);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u48 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u48) / (f5 - u48));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = ((((f5 * (*(float *)(((int)stk + 4))))) * (1.0f + 1.0f)) / (f5 - u48));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC990E9C = f5;
    *(float *)0xC990EA0 = (*(float *)(((int)stk + 4)));
    *(float *)0xC990EA4 = (1.0f / f5);
    *(float *)0xC94825C = f5;
    *(float *)0xC948244 = (-f5);
    *(float *)0xC948260 = (*(float *)(((int)stk + 4)));
    *(float *)0xC948258 = (1.0f / f5);
    FUN_0c0dc100((((int)stk + 4) + 0x18));
    return (FUN_0c0de070());
}

int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    int t20;
    int t17;
    int t22;
    int t31;
    int t28;
    int t33;
    int t42;
    int t39;
    int t44;
    int t53;
    int t50;
    int t55;
    int t64;
    int t61;
    int stk[16];

    *(unsigned int *)0xC9527C0 = (a4 << 2);
    *(unsigned int *)0xC9527C4 = (a5 << 2);
    *(unsigned int *)0xC9527C8 = (a6 << 2);
    *(unsigned int *)0xC9527CC = (a7 << 2);
    *(unsigned int *)0xC9527D0 = (a8 << 2);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)0xC95273C);
    *(unsigned int *)(((int)stk + 8)) = 0xC952978;
    *(unsigned int *)(((int)stk + 16)) = 0xC952978;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x18) + 0x4);
    if ((unsigned int)a10 <= (unsigned int)0x0) {
    } else {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        t3 = 0x0;
        t4 = 0xC952978;
        t5 = 0x0;
        for (;;) {
            if (((*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)))) & 31) != 0) {
                t3 = t5;
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 4) + 0x18));
                t2 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 4)) = t3;
                t4 = (*(int *)((t3 + 0x0)));
                t4 = (t4 + 0x1F);
                t4 = (t4 & t2);
                *(unsigned int *)((t3 + 0x0)) = t4;
            }
            t3 = t5;
            t3 = (t3 << 2);
            t4 = t5;
            t3 = (t3 + t4);
            t3 = (t3 << 2);
            t4 = 0xC952640;
            t3 = (t3 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t3;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC95271C, t11 = *(int *)((t2 + 0x0)), t11 == 32)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                t20 = 0x0;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t17 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t17 = 0x0;
                }
                t20 = t17;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t22 = *(int *)((t2 + 0x0)), t22 == 33)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                t31 = t20;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t20 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t28 = (((t20 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t28 = t20;
                }
                t31 = t28;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t33 = *(int *)((t2 + 0x0)), t33 == 34)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                t42 = t31;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t31 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t39 = (((t31 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t39 = t31;
                }
                t42 = t39;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t44 = *(int *)((t2 + 0x0)), t44 == 35)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                t53 = t42;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t42 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t50 = (((t42 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t50 = t42;
                }
                t53 = t50;
            }
            t4 = 0xC952640;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC95271C, t55 = *(int *)((t2 + 0x0)), t55 == 36)) {
                t4 = t5;
                t4 = (t4 << 2);
                t3 = t5;
                t4 = (t4 + t3);
                t4 = (t4 << 2);
                t4 = (t4 + 0xC952978);
                *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                t64 = t53;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t2 = t53;
                    t4 = (*(int *)(((int)stk + 8)));
                    t2 = (t2 << 2);
                    t2 = (t2 + (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))));
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t61 = (((t53 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t4 = (*(int *)(((int)stk + 16)));
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t61 = t53;
                }
                t64 = t61;
            }
            t3 = (*(int *)(((int)stk + 12)));
            t4 = (*(int *)(((int)stk + 24)));
            t2 = (*(int *)((t3 + 0x0)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t64 << 2) + t2);
            t4 = (*(int *)(((int)stk + 16)));
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t3 = (*(int *)(((int)stk + 20)));
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t3;
            t2 = (*(int *)(((int)stk + 8)));
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 8)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
    return 0x0;
}

int FUN_0c04cc54(int a4, int a5)
{
    int t0;
    int t17;
    int t23;
    int t25;
    int t26;
    int t34;
    int t37;
    int t47;
    int t53;
    int t55;
    int t64;
    int t71;
    int t83;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04CC54:;
    t0 = *(int *)((R4 + 0x300));
    R0 = (t0);
    R11 = (0x606);
    R12 = (0xC246FF0);
    R13 = (0x1);
    R14 = (R4);
    R4 = (0x2);
    R6 = (0x335);
    R7 = (0x4A);
    if ((t0 == 1)) goto L_C04CC92;
    goto L_C04CC7A;
    L_C04CC7A:;
    if ((R0 == 2)) goto L_C04CC92;
    goto L_C04CC7E;
    L_C04CC7E:;
    if ((R0 == 3)) goto L_C04CCCC;
    goto L_C04CC82;
    L_C04CC82:;
    if ((R0 == 4)) goto L_C04CD26;
    goto L_C04CC86;
    L_C04CC86:;
    if ((R0 == 5)) goto L_C04CD26;
    goto L_C04CC8A;
    L_C04CC8A:;
    if ((R0 == 0)) goto L_C04CD70;
    goto L_C04CC8E;
    L_C04CC8E:;
    goto L_C04CE24;
    L_C04CE24:;
    if ((((*(int *)0xC23A1A8) & 0x100) != 0)) goto L_C04CE84;
    goto L_C04CE2E;
    L_C04CE2E:;
    t17 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t17 - 1);
    if (((int)(t17 - 1) <= 0)) goto L_C04CE42;
    goto L_C04CE3A;
    L_C04CE3A:;
    R0 = (0x394);
    if (((int)(*(int *)((R14 + 0x394))) >= 0)) goto L_C04CEBC;
    goto L_C04CE42;
    L_C04CE42:;
    t23 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    return ((int (*)(int, int, int, int))(FUN_0c04c98e))(R14, t23, R6, R7);
    L_C04CEBC:;
    return R0;
    L_C04CE84:;
    t25 = *(int *)((R14 + 0x3AC));
    t26 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    *(unsigned int *)((R14 + 0x3AC)) = (t25 - 1);
    R5 = (t26);
    if (((int)((t25 - 1) - ((*(int *)((t26 + 0x374))) << 1)) <= 0)) goto L_C04CEAC;
    goto L_C04CEA4;
    L_C04CEA4:;
    R0 = (0x394);
    if (((int)(*(int *)((R14 + 0x394))) >= 0)) goto L_C04CEBC;
    goto L_C04CEAC;
    L_C04CEAC:;
    *(unsigned int *)(((int)stk + 4)) = (*(short *)((R14 + 0x6E)));
    t34 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c04c98e))(R14, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    *(unsigned short *)((R14 + 0x6E)) = (*(int *)(((int)stk + 4)));
    R0 = (0x6E);
    goto L_C04CEBC;
    L_C04CD70:;
    t37 = *(int *)((R14 + 0xC0));
    R0 = (t37);
    if ((t37 == 2)) goto L_C04CD84;
    goto L_C04CD78;
    L_C04CD78:;
    if ((R0 == 4)) goto L_C04CDD8;
    goto L_C04CD7C;
    L_C04CD7C:;
    if ((R0 == 0)) goto L_C04CDD8;
    goto L_C04CD80;
    L_C04CD80:;
    goto L_C04CE24;
    L_C04CDD8:;
    FUN_0c04aa34(R14, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    if ((((*(int *)((R14 + 0x20C))) & 128) == 0)) goto L_C04CE24;
    goto L_C04CDE6;
    L_C04CDE6:;
    t47 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    *(unsigned int *)((t47 + 0x2C4)) = ((*(int *)((R14 + 0x2C4))) + 0x1);
    *(unsigned int *)((t47 + 0x2CC)) = 0x1;
    *(unsigned int *)((R14 + 0x210)) = 0x3E;
    goto L_C04CE06;
    L_C04CE06:;
    *(unsigned int *)((R14 + 0x3AC)) = 0x0;
    return FUN_0c08220e((*(int *)((R14 + 0xBC))), (*(int *)((R14 + 0x210))));
    L_C04CD84:;
    if (((R4 & (*(int *)((R5 + 0x0)))) == 0)) goto L_C04CDD8;
    goto L_C04CD8A;
    L_C04CD8A:;
    t53 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    t55 = (FUN_0c054c3c(R14)) == 0;
    R12 = (t53);
    if (t55) goto L_C04CDBE;
    goto L_C04CDA0;
    L_C04CDA0:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x393;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R12 + 0x2C4)) = ((*(int *)((R14 + 0x2C4))) + 0x1);
    *(unsigned int *)((R12 + 0x2CC)) = R13;
    R3 = (0x50);
    goto L_C04CDB8;
    L_C04CDB8:;
    *(unsigned int *)((R14 + 0x210)) = R3;
    goto L_C04CE06;
    L_C04CDBE:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x38F;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R12 + 0x2C4)) = ((*(int *)((R14 + 0x2C4))) + 0x1);
    *(unsigned int *)((R12 + 0x2CC)) = R13;
    R3 = (0x4E);
    goto L_C04CDB8;
    L_C04CD26:;
    if (((R11 & (*(int *)((R5 + 0x0)))) == 0)) goto L_C04CE24;
    goto L_C04CD2C;
    L_C04CD2C:;
    t64 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    *(unsigned int *)((R14 + 0x2C4)) = R6;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x2D4)) = R4;
    *(unsigned int *)((t64 + 0x2D4)) = R4;
    R0 = (0x2C4);
    R3 = (0x347);
    R5 = (t64);
    goto L_C04CD4A;
    L_C04CD4A:;
    *(unsigned int *)((R5 + R0)) = R3;
    *(unsigned int *)((R5 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x210)) = R7;
    goto L_C04CE06;
    L_C04CCCC:;
    if (((R11 & (*(int *)((R5 + 0x0)))) != 0)) goto L_C04CCD6;
    goto L_C04CCD2;
    L_C04CCD2:;
    goto L_C04CE24;
    L_C04CCD6:;
    t71 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    R5 = (t71);
    if ((((*(int *)((t71 + 0x290))) & R4) == 0)) goto L_C04CD00;
    goto L_C04CCEA;
    L_C04CCEA:;
    *(unsigned int *)((R14 + 0x2C4)) = R6;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x2D4)) = R4;
    *(unsigned int *)((R5 + 0x2D4)) = R4;
    R0 = (0x2C4);
    R3 = (((*(int *)((R14 + 0x2C4))) + 0x1));
    goto L_C04CD4A;
    L_C04CD00:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x327;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x2D4)) = R4;
    *(unsigned int *)((R5 + 0x2D4)) = R4;
    *(unsigned int *)((R5 + 0x2C4)) = ((*(int *)((R14 + 0x2C4))) + 0x1);
    *(unsigned int *)((R5 + 0x2CC)) = R13;
    R3 = (0x44);
    goto L_C04CDB8;
    L_C04CC92:;
    if (((R11 & (*(int *)((R5 + 0x0)))) != 0)) goto L_C04CC9C;
    goto L_C04CC98;
    L_C04CC98:;
    goto L_C04CE24;
    L_C04CC9C:;
    t83 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R12) + 0x0));
    *(unsigned int *)((R14 + 0x2C4)) = R6;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x2D4)) = R4;
    *(unsigned int *)((t83 + 0x2D4)) = R4;
    *(unsigned int *)((t83 + 0x2C4)) = 0x34A;
    *(unsigned int *)((t83 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x210)) = R7;
    *(unsigned int *)((R14 + 0x3AC)) = 0x0;
    R0 = (0x3AC);
    goto L_C04CEBC;
}

int kmSetModifierRenderState(int a4, float f4)
{
    int t6;
    int t9;
    int t14;
    int t85;
    int t26;
    float u15;
    int t93;
    int t78;
    int t67;
    int t52;
    int t43;

    *(unsigned int *)0xC9528BC = (*(int *)((a4 + 0x98)));
    *(unsigned int *)0xC9528C0 = (*(int *)((a4 + 0x9C)));
    *(float *)0xC9528C8 = (*(float *)((a4 + 0x70)));
    *(float *)0xC9528CC = (*(float *)((a4 + 0x74)));
    *(float *)0xC9528D0 = (*(float *)((a4 + 0x78)));
    *(float *)0xC9528D4 = (*(float *)((a4 + 0x7C)));
    t6 = *(int *)0xC952878;
    *(unsigned int *)0xC9528E8 = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t6) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t6) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t6) >> 2) >> 1)) | ((unsigned int)(0x4 & t6) >> 2)) << 2) + 0xC239B6C)));
    *(unsigned int *)0xC239B2C = (*(int *)0xC952878);
    t9 = *(int *)0xC952878;
    *(unsigned int *)0xC9529C8 = ((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        *(unsigned int *)0xC239B30 = (*(int *)0xC9528B8);
        t93 = 0xC239B4C;
    } else {
        *(unsigned int *)0xC239B30 = (*(int *)0xC952888);
        *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
        *(unsigned int *)0xC239B38 = (*(int *)0xC952890);
        t14 = *(int *)0xC9528E8;
        t85 = 0xC239B4C;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                    if (t14 != 3) {
                        if (t14 != 4) {
                            t26 = 0xC239B3C;
                            if (t14 == 16) {
                                u15 = *(float *)0xC21CEC0;
                                *(unsigned int *)0xC239B3C = ((((((int)((*(float *)0xC952898) * u15) << 16) << 8) | ((int)((*(float *)0xC95289C) * u15) << 16)) | ((int)((*(float *)0xC9528A0) * u15) << 8)) | (int)((*(float *)0xC9528A4) * u15));
                                *(unsigned int *)0xC239B40 = ((((((int)((*(float *)0xC9528A8) * u15) << 16) << 8) | ((int)((*(float *)0xC9528AC) * u15) << 16)) | ((int)((*(float *)0xC9528B0) * u15) << 8)) | (int)((*(float *)0xC9528B4) * u15));
                                t26 = 0xC239B4C;
                            }
                            t43 = t26;
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
                            t43 = 0xC239B6C;
                        }
                        t52 = t43;
                    } else {
                        *(unsigned int *)0xC239B3C = (*(int *)0xC9528BC);
                        *(unsigned int *)0xC239B40 = (*(int *)0xC9528C0);
                        t52 = 0xC239B4C;
                    }
                    t67 = t52;
                } else {
                    *(unsigned int *)0xC239B4C = (*(int *)0xC952898);
                    *(unsigned int *)0xC239B50 = (*(int *)0xC95289C);
                    *(unsigned int *)0xC239B54 = (*(int *)0xC9528A0);
                    *(unsigned int *)0xC239B58 = (*(int *)0xC9528A4);
                    *(unsigned int *)0xC239B5C = (*(int *)0xC9528A8);
                    *(unsigned int *)0xC239B60 = (*(int *)0xC9528AC);
                    *(unsigned int *)0xC239B64 = (*(int *)0xC9528B0);
                    *(unsigned int *)0xC239B68 = (*(int *)0xC9528B4);
                    t67 = 0xC239B6C;
                }
                t78 = t67;
            } else {
                *(unsigned int *)0xC239B3C = (*(int *)0xC952898);
                *(unsigned int *)0xC239B40 = (*(int *)0xC95289C);
                *(unsigned int *)0xC239B44 = (*(int *)0xC9528A0);
                *(unsigned int *)0xC239B48 = (*(int *)0xC9528A4);
                t78 = 0xC239B4C;
            }
            t85 = t78;
        }
        t93 = t85;
    }
    *(unsigned int *)0xC952954 = (*(int *)0xC9529C8);
    *(unsigned int *)0xC952958 = (t93 - 0xC239B2C);
    return 0x0;
}

int FUN_0c220360(Stk63 s)
{
    int t60;
    int t41;
    int t42;
    int t62;
    int t64;
    int t66;
    int t67;
    int t69;
    int t71;
    int t73;
    int t75;
    int t77;
    int t79;
    int t81;
    int t83;
    int t51;
    int stk[76];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    stk[8] = s.w[3];
    stk[9] = s.w[4];
    stk[10] = s.w[5];
    stk[11] = s.w[6];
    stk[12] = s.w[7];
    stk[13] = s.w[8];
    stk[14] = s.w[9];
    stk[15] = s.w[10];
    stk[16] = s.w[11];
    stk[17] = s.w[12];
    stk[18] = s.w[13];
    stk[19] = s.w[14];
    stk[20] = s.w[15];
    stk[21] = s.w[16];
    stk[22] = s.w[17];
    stk[23] = s.w[18];
    stk[24] = s.w[19];
    stk[25] = s.w[20];
    stk[26] = s.w[21];
    stk[27] = s.w[22];
    stk[28] = s.w[23];
    stk[29] = s.w[24];
    stk[30] = s.w[25];
    stk[31] = s.w[26];
    stk[32] = s.w[27];
    stk[33] = s.w[28];
    stk[34] = s.w[29];
    stk[35] = s.w[30];
    stk[36] = s.w[31];
    stk[37] = s.w[32];
    stk[38] = s.w[33];
    stk[39] = s.w[34];
    stk[40] = s.w[35];
    stk[41] = s.w[36];
    stk[42] = s.w[37];
    stk[43] = s.w[38];
    stk[44] = s.w[39];
    stk[45] = s.w[40];
    stk[46] = s.w[41];
    stk[47] = s.w[42];
    stk[48] = s.w[43];
    stk[49] = s.w[44];
    stk[50] = s.w[45];
    stk[51] = s.w[46];
    stk[52] = s.w[47];
    stk[53] = s.w[48];
    stk[54] = s.w[49];
    stk[55] = s.w[50];
    stk[56] = s.w[51];
    stk[57] = s.w[52];
    stk[58] = s.w[53];
    stk[59] = s.w[54];
    stk[60] = s.w[55];
    stk[61] = s.w[56];
    stk[62] = s.w[57];
    stk[63] = s.w[58];
    stk[64] = s.w[59];
    stk[65] = s.w[60];
    stk[66] = s.w[61];
    stk[67] = s.w[62];
    *(unsigned int *)0xC952354 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF8)));
    *(unsigned int *)0xC952358 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF0)));
    *(unsigned int *)0xC95235C = (*(int *)(((((int)stk + 4) + 0x10) + 0xF4)));
    *(unsigned int *)0xC9525DC = (((((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x54))) << 1) | (*(int *)(((((int)stk + 4) + 0x10) + 0x50)))) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x5C))) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x68))) << 2) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x30))) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x60))) << 2) << 2) << 1)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x28))) << 2) << 2) << 2)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x2C))) << 7)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x48))) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x4C))) << 8) << 1));
    *(unsigned int *)0xC9525E8 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E0 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) << 16);
    *(unsigned int *)0xC9525EC = (((*(int *)(((((int)stk + 4) + 0x10) + 0x8))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x14))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F0 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x10))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E4 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x74))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x78))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F4 = (((((*(int *)(((((int)stk + 4) + 0x10) + 0x18))) & 0x7F) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x1C))) & 0xF) << 8)) | (((((*(int *)(((((int)stk + 4) + 0x10) + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x24))) & 0x7F) << 22));
    *(unsigned int *)0xC952600 = ((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x34))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x38))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x3C))) & 0x1) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x40))) & 0x1) << 2) << 1)) | (((0xF & (*(int *)(((((int)stk + 4) + 0x10) + 0x44)))) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x6C))) & 0x1) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x70))) & 0x3F) << 16));
    *(unsigned int *)0xC952604 = ((*(int *)0xC952354) + (*(int *)0xC95234C));
    *(unsigned int *)0xC952608 = (((*(int *)0xC952358) + (*(int *)0xC952350)) | (((*(int *)0xC95235C) + (*(int *)0xC952350)) << 16));
    t60 = 0x7F;
    if ((*(int *)0xC9527E8) != 1) {
        if (((*(int *)0xC952300) & 2) != 0) {
            for (;;) {
                t41 = kmiReadRegister(0x10C);
                if ((t41 & 0x3FF) != 0) {
                    break;
                }
            }
            for (;;) {
                t42 = kmiReadRegister(0x10C);
                if ((t42 & 0x3FF) == 0) {
                    break;
                }
            }
        } else {
            t51 = 0x7F;
        }
        t60 = t51;
    }
    t62 = ((int (*)(int, int, int))(kmiWriteRegister))(0xE8, ((*(int *)0xC952600) | 0x8), t60);
    t64 = 0x0;
    if (((*(int *)0xC952318) & 1) != 0) {
        t64 = 0x800000;
    }
    t66 = ((int (*)(int, int))(kmiWriteRegister))(0x44, t64);
    t67 = ((int (*)(int, int))(kmiWriteRegister))(0x5C, 0x0);
    t69 = ((int (*)(int, int))(kmiWriteRegister))(0xD0, (*(int *)0xC9525DC));
    t71 = ((int (*)(int, int))(kmiWriteRegister))(0xD8, (*(int *)0xC9525EC));
    t73 = ((int (*)(int, int))(kmiWriteRegister))(0xCC, (*(int *)0xC9525E4));
    t75 = ((int (*)(int, int))(kmiWriteRegister))(0xD4, (*(int *)0xC9525E8));
    t77 = ((int (*)(int, int))(kmiWriteRegister))(0xDC, (*(int *)0xC9525F0));
    t79 = ((int (*)(int, int))(kmiWriteRegister))(0xE0, (*(int *)0xC9525F4));
    t81 = ((int (*)(int, int))(kmiWriteRegister))(0xEC, (*(int *)0xC952604));
    t83 = ((int (*)(int, int))(kmiWriteRegister))(0xF0, (*(int *)0xC952608));
    return (((int (*)(int, int))(kmiWriteRegister))(0xC8, (*(int *)0xC9525E0)));
}

int FUN_0c07a944(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    float t15;
    int t38;
    float u17;
    float u20;
    int t40;
    float t64;
    float t66;
    float u95;
    float u29;
    int stk[9];

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t6 = *(int *)((a4 + 0x80));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 == 2) {
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - ((*(float *)(((0x90 + a4) + 0x0))) * (1.0f + 1.0f)));
                *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * 0.969999969f);
                *(float *)((a4 + 0x94)) = ((*(float *)((a4 + 0x94))) + -0.0599999987f);
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x94 + a4) + 0x0))));
                t15 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
                t38 = 0;
                if (t15 > (*(float *)((a4 + 0x34)))) {
                    u17 = *(float *)((a4 + 0x94));
                    if (_builtin_fabsf(u17) > 0.199999988f) {
                        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x2000);
                        *(float *)((a4 + 0x34)) = ((t15 + t15) - (*(float *)((a4 + 0x34))));
                        u20 = *(float *)((a4 + 0x94));
                        *(float *)((a4 + 0x94)) = (-(u20 * 0.199999988f));
                        *(unsigned short *)((a4 + 0x64)) = (-(*(short *)((a4 + 0x64))));
                        *(unsigned short *)((a4 + 0x60)) = (-(*(short *)((a4 + 0x60))));
                        u29 = (-(u20 * 0.199999988f));
                    } else {
                        *(float *)((a4 + 0x34)) = t15;
                        *(unsigned short *)((a4 + 0x64)) = 0x0;
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        u29 = _builtin_fabsf(u17);
                    }
                    t38 = ((_builtin_fabsf(u17) > 0.199999988f));
                } else {
                    t38 = (0);
                }
            } else {
                if (t6 == 3) {
                    FUN_0c0553b6(0x19, 0xB, (a4 + 0x30));
                    t40 = ((int (*)(void))(FUN_0c0e19f2))();
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = (int)((FUN_0c0da410((*(int *)((a4 + 0xA4))))) * (float)(*(int *)((a4 + 0x98))));
            *(unsigned short *)((a4 + 0x64)) = (int)((FUN_0c0da410((*(int *)((a4 + 0xA8))))) * (float)(*(int *)((a4 + 0x98))));
            *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) + 0x480);
            *(unsigned int *)((a4 + 0xA8)) = ((*(int *)((a4 + 0xA8))) + 0x700);
            t64 = FUN_0c0da410((*(short *)((a4 + 0x60))));
            t66 = FUN_0c0da410((*(short *)((a4 + 0x64))));
            *(float *)((a4 + 0x58)) = (_builtin_fabsf((t64 * 10.0f)) + _builtin_fabsf((t66 * 20.0f)));
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (*(float *)(((0x90 + a4) + 0x0))));
            if (-135.0f > (*(float *)((a4 + 0x38)))) {
                *(float *)((a4 + 0x94)) = 0.0f;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            } else {
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 16);
                *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * 0.959999979f);
                if ((int)(*(int *)((a4 + 0x98))) < 0) {
                    *(unsigned int *)((a4 + 0x98)) = 0x0;
                    if (0.099999994f > (*(float *)((a4 + 0x90)))) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(float *)((a4 + 0x58)) = 0.0f;
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x64)) = 0x0;
                    }
                }
            }
            u95 = (_builtin_fabsf((t64 * 10.0f)) + _builtin_fabsf((t66 * 20.0f)));
        }
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x8C))) + 0x1BC))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x98)) = 0x200;
            *(float *)((a4 + 0x90)) = 0.109999999f;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58)))), (*(float *)((a4 + 0x38))));
    FUN_0c0dc890((*(short *)((a4 + 0x62))));
    FUN_0c0dc950((*(short *)((a4 + 0x64))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x60))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return (FUN_0c0dc4c0(0x1));
}

int FUN_0c03d2ae(int a4)
{
    int t0;
    int t11;
    int t19;
    int t28;
    int t44;
    int t52;
    int t61;
    int t86;
    int t92;
    int t94;
    int t1;
    int t2;
    int t7;
    int t10;
    int t24;
    int t27;
    int t45;
    int t46;
    int t54;
    int t106;
    int t101;
    int stk[5];

    t0 = *(int *)((a4 + 0x4C4));
    if (((t0 != 0) && (t0 != 1)) || ((t1 = *(int *)((a4 + 0x310)), (int)t1 < 0) || (t2 = *(int *)((a4 + 0x304)), (int)t2 <= 0))) {
        *(unsigned int *)((a4 + 0x57C)) = 0x0;
        if (((int)(*(int *)((a4 + 0x304))) > 0) && (t7 = *(int *)((a4 + 0x57C)), t7 != 4)) {
            t10 = (*(int *)((a4 + 0x57C)));
        } else {
            t10 = ((*(int *)((a4 + 0x57C))) + 0x5);
        }
        t11 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t11 << 2) + t11) << 2))))))) + (t10 * 0xE)))));
    } else {
        if ((*(int *)((a4 + 0x554))) == 2) {
            *(volatile int *)((a4 + 0x310));
            t19 = FUN_0c0e5f1c(t0);
            if ((int)t19 < (int)0x4) {
                *(unsigned int *)((a4 + 0x560)) = 0xB;
                *(unsigned int *)((a4 + 0x57C)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x560)) = 0x2;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            }
        } else {
            *(unsigned int *)((a4 + 0x57C)) = 0x0;
            if (((int)(*(int *)((a4 + 0x304))) <= 0) && (t24 = *(int *)((a4 + 0x57C)), t24 != 4)) {
                t27 = ((*(int *)((a4 + 0x57C))) + 0x5);
            } else {
                t27 = (*(int *)((a4 + 0x57C)));
            }
            t28 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t28 << 2) + t28) << 2))))))) + (t27 * 0xE)))));
        }
    }
    t44 = *(int *)((a4 + 0x560));
    if ((t44 != 2) && ((t44 != 3) && ((t44 != 4) && ((t44 != 6) && ((t44 != 12) && ((t45 = *(int *)((a4 + 0x304)), (int)t45 > 0) && (t46 = *(int *)((a4 + 0x20C)), t46 != 0x200000))))))) {
    } else {
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    }
    if ((*(int *)((a4 + 0x560))) != 0) {
        t52 = *(int *)((a4 + 0x4C8));
        if ((((((t52 == 2)) ? 1 : 0) & ((((*(int *)(((0x4CC + a4) + 0x0))) == 0)) ? 1 : 0)) == 0) && (((t52 != 9) || (t54 = *(int *)((a4 + 0x210)), t54 != 67)) && ((t52 != 4) && ((t52 != 7) && ((t52 != 12) && ((t52 != 10) && ((t52 != 13) && (t52 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t61 = *(int *)((a4 + 0x4C8));
        if ((t61 != 5) && (t61 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A0))) << 1);
            if ((*(int *)((a4 + 0x560))) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t86 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t86 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t106 = t86;
    } else {
        t92 = *(int *)((a4 + 0x57C));
        if ((t92 != 0) && ((t92 != 1) && ((t92 != 2) && (t92 != 3)))) {
            t94 = t92;
            if (t92 != 4) {
            } else {
                t94 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
            }
            t101 = t94;
        } else {
            t101 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t106 = t101;
    }
    return t106;
}

void FUN_0c210c70(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC210D04))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

void FUN_0c210ece(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC210F58))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}
