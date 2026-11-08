/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
int FUN_0c01d636(int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c04aa34(int, int, int, int);
extern int FUN_0c04c98e();
int FUN_0c054c3c(int);
int FUN_0c0553b6(int, int, int);
int FUN_0c08220e(int, int);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
float nlTan(int);
int FUN_0c0db470(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int nl_set_cnv_proj_pers(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdDecSubcode(int, int);
int gdFsGetDrvStatG(void);
#pragma inline_asm(iaOcbi)
struct o10_float { char p[0x10]; float v; };
struct o20C_int { char p[0x20C]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o220_float { char p[0x220]; float v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_int { char p[0x234]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o290_int { char p[0x290]; int v; };
struct o294_int { char p[0x294]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4CC_int { char p[0x4CC]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o554_int { char p[0x554]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o5C0_uint { char p[0x5C0]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
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
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };



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
extern int thunk_kmiWriteRegister();
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
    (((struct o4A_ushort *)(R14))->v) = R12;
    goto L_C20F142;
    L_C20F142:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R14 + 0x20)));
    goto L_C20F21C;
    L_C20F13E:;
    (((struct o4A_ushort *)(R14))->v) = R9;
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
    (((struct o40_uint *)(R14))->v) = (*(int *)((R10 + 0x8)));
    if ((((((struct o48_short *)(R14))->v)) != 1)) goto L_C20F21C;
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
    (((struct o50_ushort *)(R14))->v) = R11;
    (((struct o52_ushort *)(R14))->v) = (*(int *)((R10 + 0x0)));
    t41 = *(int *)((R10 + 0x4));
    (((struct o44_uint *)(R14))->v) = t41;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    t42 = *(int *)((R13 + 0x0));
    *(unsigned int *)((t42 + 0x1C)) = R12;
    R2 = (t41);
    R3 = (t42);
    if ((((((struct o52_short *)(R14))->v)) != -29)) goto L_C20F1D0;
    goto L_C20F186;
    L_C20F186:;
    t47 = (((struct o44_int *)(R14))->v);
    T_ = (((t47 == 58)));
    if ((t47 != 58)) goto L_C20F1C0;
    goto L_C20F18E;
    L_C20F18E:;
    t50 = gdFsGetDrvStatG();
    R4 = (t50);
    if ((t50 == 6)) goto L_C20F19C;
    goto L_C20F198;
    L_C20F198:;
    if ((R4 != 0)) goto L_C20F1D0;
    goto L_C20F19C;
    L_C20F19C:;
    (((struct o52_ushort *)(R14))->v) = 0xFFFFFFE9;
    goto L_C20F1D0;
    L_C20F1D0:;
    t54 = (((struct o52_short *)(R14))->v);
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
    t66 = ((int (*)(int, int, int, int))((*(int *)((t62 + 0x24)))))((*(int *)((t62 + 0x28))), ((((struct o52_short *)(R14))->v)), R6, R7);
    goto L_C20F1FC;
    L_C20F1FC:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_C20F21C;
    goto L_C20F202;
    L_C20F202:;
    t72 = ((int (*)(int, int, int, int))((*(int *)((R14 + 0x34)))))((*(int *)((R14 + 0x38))), ((((struct o52_short *)(R14))->v)), R6, R7);
    goto L_C20F21C;
    L_C20F1C0:;
    R0 = (0x44);
    goto L_C20F1C2;
    L_C20F1C2:;
    if (((*(int *)((R14 + R0))) != 0x104)) goto L_C20F1D0;
    goto L_C20F1CA;
    L_C20F1CA:;
    (((struct o52_ushort *)(R14))->v) = 0xFFFFFFDB;
    goto L_C20F1D0;
    L_C20F01A:;
    if ((R0 != 64)) goto L_C20F022;
    goto L_C20F01E;
    L_C20F01E:;
    goto L_C20F168;
    L_C20F022:;
    goto L_C20F210;
    L_C20F210:;
    (((struct o50_ushort *)(R14))->v) = (unsigned char)R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    goto L_C20F21C;
    L_C20F026:;
    t79 = (((struct o48_short *)(R14))->v);
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    (((struct o50_ushort *)(R14))->v) = R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    (((struct o48_ushort *)(R14))->v) = R12;
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
    (((struct o4A_ushort *)(R14))->v) = R9;
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
    (((struct o4A_ushort *)(R14))->v) = R9;
    goto L_C20F21C;
    L_C20F088:;
    if ((R0 != 7)) goto L_C20F0D4;
    goto L_C20F08C;
    L_C20F08C:;
    t101 = (gdDecSubcode(((*(int *)((R13 + 0x0))) + 0x40), (((int)stk + 4) + 0x4))) == 0;
    if (t101) goto L_C20F0B0;
    goto L_C20F09E;
    L_C20F09E:;
    (((struct o50_ushort *)(R14))->v) = 0x5;
    (((struct o52_ushort *)(R14))->v) = 0xFFFFFFED;
    (((struct o44_uint *)(R14))->v) = R12;
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
    t117 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((R13 + 0x0))) + 0xC)))))->v))))(0xC94D9BC, 0xC94D9C0, (*(int *)((R14 + 0x4))), 0xC94D9C4);
    R4 = (t117);
    if ((t117 == 0)) goto L_C20F10A;
    goto L_C20F0F6;
    L_C20F0F6:;
    *(unsigned int *)((R14 + 0x3C)) = R4;
    (((struct o50_ushort *)(R14))->v) = 0x4;
    (((struct o48_ushort *)(R14))->v) = 0x6;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R14;
    goto L_C20F21C;
    L_C20F10A:;
    (((struct o50_ushort *)(R14))->v) = 0x5;
    (((struct o52_ushort *)(R14))->v) = 0xFFFFFFE4;
    (((struct o44_uint *)(R14))->v) = R12;
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

    (((struct o22C_uint *)(a4))->v) = (int)((float)((((struct o22C_int *)(a4))->v)) * 0.899999976f);
    (((struct o234_uint *)(a4))->v) = (int)((float)((((struct o234_int *)(a4))->v)) * 0.899999976f);
    (((struct o230_uint *)(a4))->v) = (int)((float)((((struct o230_int *)(a4))->v)) * 0.899999976f);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 10.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    (((struct o10_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct oC_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    FUN_0c0a7984((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    if (((*(int *)(((int)stk + 8))) == 0x8000) && (t21 = *(int *)(((int)stk + 4)), t21 == 0x8000)) {
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 0x800);
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    t29 = FUN_0c0da410((*(int *)(((int)stk + 4))));
    nlRotateAZ((int)(-(t29 * 128.0f)));
    t32 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    nlRotateAX((int)(-(t32 * 128.0f)));
    *(unsigned int *)(((int)stk + 24)) = (0x28C + a4);
    FUN_0c0a7c66((*(int *)(((int)stk + 24))), ((*(int *)(((int)stk + 24))) + 0x4), ((0x28C + a4) + 0x8));
    nlPopMatrix(0x1);
    (((struct o22C_uint *)(a4))->v) = (((((struct o22C_int *)(a4))->v)) + ((((struct o28C_int *)(a4))->v)));
    (((struct o230_uint *)(a4))->v) = (((((struct o230_int *)(a4))->v)) + ((((struct o290_int *)(a4))->v)));
    (((struct o234_uint *)(a4))->v) = (((((struct o234_int *)(a4))->v)) + ((((struct o294_int *)(a4))->v)));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ(((((struct o234_int *)(a4))->v)));
    nlRotateAY(((((struct o230_int *)(a4))->v)));
    nlRotateAX(((((struct o22C_int *)(a4))->v)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 10.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    (((struct o10_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct oC_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    FUN_0c0a7984((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    u62 = *(float *)0xC033434;
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x8000) {
        u68 = ((float)(*(int *)(((int)stk + 8))) * 5.0f);
    } else {
        u68 = (-((float)(0x10000 - (*(int *)(((int)stk + 8)))) * 5.0f));
    }
    (((struct o228_float *)(a4))->v) = (u68 / u62);
    if ((int)(*(int *)(((int)stk + 4))) < (int)0x8000) {
        u77 = (-((float)(*(int *)(((int)stk + 4))) * 5.0f));
    } else {
        u77 = ((float)(0x10000 - (*(int *)(((int)stk + 4)))) * 5.0f);
    }
    (((struct o220_float *)(a4))->v) = (u77 / u62);
    return 0x220;
}





int kmSetModifierRenderState(int a4, float f4)
{
    int t6;
    int t9;
    int t14;
    float u15;
    int t93;

    (((struct o4_uint *)0xC9528B8)->v) = ((((struct o98_int *)(a4))->v));
    (((struct o8_uint *)0xC9528B8)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o10_float *)0xC9528B8)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o14_float *)0xC9528B8)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o18_float *)0xC9528B8)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o1C_float *)0xC9528B8)->v) = ((((struct o7C_float *)(a4))->v));
    t6 = (((struct o0_int *)0xC952878)->v);
    (((struct o30_uint *)0xC9528B8)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t6) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t6) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t6) >> 2) >> 1)) | ((unsigned int)(0x4 & t6) >> 2)) << 2) + 0xC239B6C)));
    (((struct o0_uint *)0xC239B2C)->v) = ((((struct o0_int *)0xC952878)->v));
    t9 = (((struct o0_int *)0xC952878)->v);
    *(unsigned int *)0xC9529C8 = ((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC239B2C)->v) = ((((struct o0_int *)0xC9528B8)->v));
        t93 = 0xC239B4C;
    } else {
        (((struct o4_uint *)0xC239B2C)->v) = ((((struct o10_int *)0xC952878)->v));
        (((struct o8_uint *)0xC239B2C)->v) = ((((struct o14_int *)0xC952878)->v));
        (((struct oC_uint *)0xC239B2C)->v) = ((((struct o18_int *)0xC952878)->v));
        t14 = (((struct o30_int *)0xC9528B8)->v);
        t93 = 0xC239B4C;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                    if (t14 != 3) {
                        if (t14 != 4) {
                            t93 = 0xC239B3C;
                            if (t14 == 16) {
                                u15 = *(float *)0xC21CEC0;
                                (((struct o10_uint *)0xC239B2C)->v) = ((((((int)(((((struct o20_float *)0xC952878)->v)) * u15) << 16) << 8) | ((int)(((((struct o24_float *)0xC952878)->v)) * u15) << 16)) | ((int)(((((struct o28_float *)0xC952878)->v)) * u15) << 8)) | (int)(((((struct o2C_float *)0xC952878)->v)) * u15));
                                (((struct o14_uint *)0xC239B2C)->v) = ((((((int)(((((struct o30_float *)0xC952878)->v)) * u15) << 16) << 8) | ((int)(((((struct o34_float *)0xC952878)->v)) * u15) << 16)) | ((int)(((((struct o38_float *)0xC952878)->v)) * u15) << 8)) | (int)(((((struct o3C_float *)0xC952878)->v)) * u15));
                                t93 = 0xC239B4C;
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
                            t93 = 0xC239B6C;
                        }
                    } else {
                        (((struct o10_uint *)0xC239B2C)->v) = ((((struct o4_int *)0xC9528B8)->v));
                        (((struct o14_uint *)0xC239B2C)->v) = ((((struct o8_int *)0xC9528B8)->v));
                        t93 = 0xC239B4C;
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
                    t93 = 0xC239B6C;
                }
            } else {
                (((struct o10_uint *)0xC239B2C)->v) = ((((struct o20_int *)0xC952878)->v));
                (((struct o14_uint *)0xC239B2C)->v) = ((((struct o24_int *)0xC952878)->v));
                (((struct o18_uint *)0xC239B2C)->v) = ((((struct o28_int *)0xC952878)->v));
                (((struct o1C_uint *)0xC239B2C)->v) = ((((struct o2C_int *)0xC952878)->v));
                t93 = 0xC239B4C;
            }
        }
    }
    (((struct o0_uint *)0xC952954)->v) = (*(int *)0xC9529C8);
    (((struct o4_uint *)0xC952954)->v) = (t93 - 0xC239B2C);
    return 0x0;
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
    int t92;
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
    int stk[5];

    t0 = (((struct o4C4_int *)(a4))->v);
    if (((t0 != 0) && (t0 != 1)) || ((t1 = (((struct o310_int *)(a4))->v), (int)t1 < 0) || (t2 = (((struct o304_int *)(a4))->v), (int)t2 <= 0))) {
        (((struct o57C_uint *)(a4))->v) = 0x0;
        if (((int)((((struct o304_int *)(a4))->v)) > 0) && (t7 = (((struct o57C_int *)(a4))->v), t7 != 4)) {
            t10 = ((((struct o57C_int *)(a4))->v));
        } else {
            t10 = (((((struct o57C_int *)(a4))->v)) + 0x5);
        }
        t11 = (((struct o4F0_int *)(a4))->v);
        (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t11 << 2) + t11) << 2))))))) + (t10 * 0xE)))));
    } else {
        if (((((struct o554_int *)(a4))->v)) == 2) {
            *(volatile int *)((a4 + 0x310));
            t19 = FUN_0c0e5f1c(t0);
            if ((int)t19 < (int)0x4) {
                (((struct o560_uint *)(a4))->v) = 0xB;
                (((struct o57C_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o560_uint *)(a4))->v) = 0x2;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
        } else {
            (((struct o57C_uint *)(a4))->v) = 0x0;
            if (((int)((((struct o304_int *)(a4))->v)) <= 0) && (t24 = (((struct o57C_int *)(a4))->v), t24 != 4)) {
                t27 = (((((struct o57C_int *)(a4))->v)) + 0x5);
            } else {
                t27 = ((((struct o57C_int *)(a4))->v));
            }
            t28 = (((struct o4F0_int *)(a4))->v);
            (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t28 << 2) + t28) << 2))))))) + (t27 * 0xE)))));
        }
    }
    t44 = (((struct o560_int *)(a4))->v);
    if ((t44 != 2) && ((t44 != 3) && ((t44 != 4) && ((t44 != 6) && ((t44 != 12) && ((t45 = (((struct o304_int *)(a4))->v), (int)t45 > 0) && (t46 = (((struct o20C_int *)(a4))->v), t46 != 0x200000))))))) {
    } else {
        (((struct o554_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        (((struct o4E4_uint *)(a4))->v) = 0x0;
    }
    if (((((struct o560_int *)(a4))->v)) != 0) {
        t52 = (((struct o4C8_int *)(a4))->v);
        if ((((((t52 == 2)) ? 1 : 0) & (((((((struct o4CC_int *)(a4))->v)) == 0)) ? 1 : 0)) == 0) && (((t52 != 9) || (t54 = (((struct o210_int *)(a4))->v), t54 != 67)) && ((t52 != 4) && ((t52 != 7) && ((t52 != 12) && ((t52 != 10) && ((t52 != 13) && (t52 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t61 = (((struct o4C8_int *)(a4))->v);
        if ((t61 != 5) && (t61 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            (((struct o5A4_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) << 1);
            if (((((struct o560_int *)(a4))->v)) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t106 = 0x5C0;
        if (((((struct o5C0_int *)(a4))->v)) == 0) {
            (((struct o5C0_uint *)(a4))->v) = 0x1;
            t106 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
        }
    } else {
        t92 = (((struct o57C_int *)(a4))->v);
        if ((t92 != 0) && ((t92 != 1) && ((t92 != 2) && (t92 != 3)))) {
            t106 = t92;
            if (t92 != 4) {
            } else {
                t106 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
            }
        } else {
            t106 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0));
        }
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
