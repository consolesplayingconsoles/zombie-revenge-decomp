/* Straight-line functions with calls and guards (batch gen_agq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[11]; } Stk11;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C8_int { char p[0x1C8]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o228_int { char p[0x228]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o310_uint { char p[0x310]; unsigned int v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o32C_int { char p[0x32C]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o398_uint { char p[0x398]; unsigned int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o3FC_int { char p[0x3FC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o430_int { char p[0x430]; int v; };
struct o430_uint { char p[0x430]; unsigned int v; };
struct o434_int { char p[0x434]; int v; };
struct o434_uint { char p[0x434]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o458_float { char p[0x458]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o49C_int { char p[0x49C]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C0_int { char p[0x4C0]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4D4_int { char p[0x4D4]; int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o528_uint { char p[0x528]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o564_int { char p[0x564]; int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o568_uint { char p[0x568]; unsigned int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_float { char p[0xEC]; float v; };
struct oF4_float { char p[0xF4]; float v; };
int FUN_0c016d2c(void);
int FUN_0c016d40(void);
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019a36(void);
int FUN_0c01a874(void);
int FUN_0c02a19a(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0371b0(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int);
int FUN_0c04685c(int, int, float, float);
extern int FUN_0c0469f6();
int FUN_0c04996a(void);
int FUN_0c04faa4(void);
int FUN_0c0534a4(void);
int FUN_0c055936(int);
int FUN_0c058fa0(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c081e0c(int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c08477e(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0852bc(int);
int FUN_0c093a08(int, int, int);
int FUN_0c09c42c(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0b264e(void);
int FUN_0c0b2e48(void);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
int FUN_0c0cddba(int);
int FUN_0c0cddda(int);
int FUN_0c0d68dc(int, int);
int FUN_0c0d6c52(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(int);
extern float _builtin_sqrtf(float);
int mwPlaEntryErrFn(int, int);
int mwPlyPreInitSofdec(void);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0d6ad4(void);
int FUN_0c08512c(int a4);
int FUN_0c0480ec(int a4);
int FUN_0c076b0c(int a4, int a5, int a6, int a7);
int FUN_0c0906e8(int a4);
int FUN_0c084f18(int a4);
int FUN_0c02c340(int a4);
int FUN_0c097720(int a4, int a5, int a6, int a7);
int FUN_0c03048e(int a4);
int FUN_0c08238c(int a4, int a5);
int FUN_0c07df40(int a4);
int FUN_0c066240(int a4);
int FUN_0c049124(int a4, int a5, int a6);
int FUN_0c0494e0(int a4, int a5, int a6);
int FUN_0c01af34(int a4);
int FUN_0c01da32(void);
int FUN_0c0cfa18(int a4, int a5);
int FUN_0c042fd0(int a4, int a5, int a6);
int FUN_0c033c8c(int a4, int a5, int a6, float f4);
int FUN_0c0bdf84(int a4);
int FUN_0c053700(int a4);
int FUN_0c06bc74(int a4);
int FUN_0c0cddfa(int a4, int a5, float f4, float f5);
int FUN_0c03cb3a(int a4);
int FUN_0c034e2c(int a4);

int FUN_0c0d6ad4(void)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R8;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_0 = (0xC247594);
    v0_1 = (0xC943514);
    v0_2 = (0xC9436B4);
    v0_3 = (0xC943554);
    L_C0D6C2C:;
    R4 = (0x3A8);
    if (((unsigned int)v0_2 >= (unsigned int)((0x160 + v0_3) + 0x3A8))) goto L_C0D6C3C;
    v0_4 = (v0_2);
    v0_5 = ((0x170 + v0_2));
    if (!(((*(int *)((v0_2 + 0x0))) != 0))) goto L_C0D6C24;
    if (((*(int *)((v0_0 + 0x0))) != 0)) goto L_C0D6B0E;
    goto L_C0D6C24;
    L_C0D6C24:;
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x20));
    v0_2 = ((v0_2 + 0x1D4));
    goto L_C0D6C2C;
    L_C0D6B0E:;
    if (((*(int *)((v0_5 + 0x0))) != 0)) goto L_C0D6B18;
    goto L_C0D6C24;
    L_C0D6B18:;
    if (((*(int *)((v0_5 + 0x14))) != 0)) goto L_C0D6B50;
    *(unsigned int *)((v0_5 + 0xC)) = ((*(int *)((v0_5 + 0xC))) + 0x1);
    v0_6 = FUN_0c0d68dc(v0_4, v0_5);
    R0 = (v0_6);
    if ((v0_6 != 0)) goto L_C0D6C08;
    R0 = ((FUN_0c0d6c52(v0_4)));
    goto L_C0D6C24;
    L_C0D6C08:;
    R4 = (0x8);
    if (((int)(*(int *)((v0_5 + 0x14))) <= 0)) goto L_C0D6C16;
    *(unsigned int *)((v0_5 + 0x14)) = ((*(int *)((v0_5 + 0x14))) - 1);
    L_C0D6C16:;
    if ((((*(int *)((v0_5 + 0x24))) & R4) == 0)) goto L_C0D6C24;
    (((struct o54_uint *)(v0_4))->v) = ((((struct o98_int *)(v0_4))->v));
    R0 = (0x54);
    goto L_C0D6C24;
    L_C0D6B50:;
    if (((int)(*(int *)((v0_5 + 0x14))) >= 0)) goto L_C0D6C08;
    v0_6 = *(int *)((v0_5 + 0x14));
    R0 = (v0_6);
    if ((v0_6 != -1)) goto L_C0D6B62;
    *(unsigned int *)((v0_5 + 0x14)) = 0xFFFFFFFE;
    goto L_C0D6C08;
    L_C0D6B62:;
    R4 = (0x0);
    v0_6 = (0xC);
    if (((*(int *)((v0_5 + 0x28))) != -1)) goto L_C0D6B8C;
    R0 = (0x2EC);
    if (((v0_6 & ((((struct o2EC_int *)(((((struct o6C_int *)(v0_4))->v))))->v))) == 0)) goto L_C0D6C08;
    *(unsigned int *)((v0_5 + 0x28)) = R4;
    v0_6 = *(int *)((v0_5 + 0x2C));
    R0 = (v0_6);
    if ((v0_6 != -1)) goto L_C0D6C04;
    (((struct o58_uint *)(v0_4))->v) = R4;
    (((struct o64_uint *)(v0_4))->v) = R4;
    *(unsigned int *)((v0_5 + 0x28)) = R4;
    R0 = (0x64);
    goto L_C0D6C08;
    L_C0D6C04:;
    *(unsigned int *)((v0_5 + 0x14)) = (*(int *)((v0_5 + 0x2C)));
    goto L_C0D6C08;
    L_C0D6B8C:;
    if (((*(int *)((v0_5 + 0x2C))) != -1)) goto L_C0D6BA2;
    R0 = (0x2EC);
    if (((v0_6 & ((((struct o2EC_int *)(((((struct o6C_int *)(v0_4))->v))))->v))) != 0)) goto L_C0D6BCC;
    goto L_C0D6C08;
    L_C0D6BCC:;
    *(unsigned int *)((v0_5 + 0x14)) = R4;
    goto L_C0D6C08;
    L_C0D6BA2:;
    v0_6 = *(int *)((v0_5 + 0x28));
    R0 = (v0_6);
    if ((v0_6 != -2)) goto L_C0D6BBA;
    R0 = (0x20C);
    if (((((((struct o20C_int *)(((((struct o6C_int *)(v0_4))->v))))->v)) & (*(int *)((v0_5 + 0x2C)))) == 0)) goto L_C0D6C08;
    goto L_C0D6BCC;
    L_C0D6BBA:;
    if ((R0 != -3)) goto L_C0D6BD6;
    R0 = (0x210);
    if ((((((struct o210_int *)(((((struct o6C_int *)(v0_4))->v))))->v)) != (*(int *)((v0_5 + 0x2C))))) goto L_C0D6C08;
    goto L_C0D6BCC;
    L_C0D6BD6:;
    v0_6 = *(int *)((v0_5 + 0x28));
    R0 = (v0_6);
    if ((v0_6 != -4)) goto L_C0D6C08;
    w0_1 = *(float *)0xC0D6D18;
    w0_0 = 1.0f;
    w0_0 = w0_0 + w0_1 * ((((struct o18_float *)(v0_1))->v));
    v0_6 = (int)((int)(FUN_0c0da2e0()) % (int)(int)w0_0);
    R0 = (v0_6);
    w0_1 = (w0_1);
    FPUL_ = ((int)w0_0);
    if ((v0_6 == 0)) goto L_C0D6C04;
    v0_6 = *(int *)((v0_4 + 0x24));
    R0 = (v0_6);
    if (((v0_6 & 16) == 0)) goto L_C0D6C08;
    goto L_C0D6C04;
    L_C0D6C3C:;
    return R0;
}

int FUN_0c08512c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if (((((struct o58_int *)(a4))->v)) == 0) {
        t0 = (((struct o5C_int *)(a4))->v);
        (((struct o5C_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) > 0) {
        } else {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
            (((struct o5C_uint *)(a4))->v) = ((((((struct o60_int *)(a4))->v)) >> 1) >> 1);
        }
        return 0x5C;
    }
    u0 = (((struct o4C_float *)(a4))->v);
    t0 = (((struct o48_int *)(a4))->v);
    (((struct o48_uint *)(a4))->v) = (t0 - (int)u0);
    if ((int)(t0 - (int)u0) < (int)0x80) {
        (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) - 1);
        (((struct o48_uint *)(a4))->v) = (((((struct o48_int *)(a4))->v)) + 0x7F);
    }
    t0 = (((struct o5C_int *)(a4))->v);
    (((struct o5C_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) > 0) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    }
    FUN_0c084570(((((struct o48_int *)(a4))->v)), ((((struct o50_int *)(a4))->v)), (int)((((struct o30_float *)(a4))->v)), (int)((((struct o34_float *)(a4))->v)), (int)((((struct o38_float *)(a4))->v)));
    t0 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        FUN_0c084570(0x80, 0x0, 0xFF, 0xFF, 0xFF);
        FUN_0c0d8c40(0xF0F0F0, 0xF0F0F0, 0xF0F0F0);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            FUN_0c08477e(0x0);
            mwPlaEntryErrFn(0xFFFFFFFF, 0x0);
        }
        return FUN_0c0e19f2();
    }
    if (((((struct o64_int *)(a4))->v)) != 0) {
        t0 = (((struct o64_int *)(a4))->v);
        t1 = (((struct o60_int *)(a4))->v);
        t2 = (int)((int)(((t0 - t1) << 8) - (t0 - t1)) / (int)(((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1));
        t0 = t2;
        if ((int)t2 > (int)0xFF) {
            t0 = 0xFF;
        }
        FUN_0c08477e(0x1);
        return mwPlaEntryErrFn(0xFFFFFFFF, (((t0 << 16) | (t0 << 8)) | t0));
    }
    return 0x64;
}

int FUN_0c0480ec(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R12;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    FUN_0c034fbc(v0_3, 0x80, 0x1, 0x0);
    v0_4 = (((struct o3A0_int *)(v0_3))->v);
    v0_2 = (v0_4);
    v0_0 = (0x1);
    v0_1 = (v0_3);
    v0_3 = (0xC);
    if ((v0_4 == 0)) goto L_C04812A;
    if ((v0_2 == 1)) goto L_C048130;
    if ((v0_2 == 2)) goto L_C048184;
    if ((v0_2 == 3)) goto L_C048198;
    if ((v0_2 == 4)) goto L_C0481BC;
    if ((v0_2 != 5)) goto L_C048126;
    if (((v0_3 & ((((struct o2EC_int *)(v0_1))->v))) == 0)) goto L_C048242;
    (((struct o398_uint *)(v0_1))->v) = 0x384;
    (((struct o534_uint *)(v0_1))->v) = 0x0;
    (((struct o1B0_uint *)(v0_1))->v) = 0x0;
    FUN_0c02a19a(v0_1);
    L_C048242:;
    return (FUN_0c04685c(v0_1, 0xA, 0.0f, 0.00999999978f));
    L_C048126:;
    goto L_C048242;
    L_C0481BC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0F6750); }
    *(float *)(((int)stk + 4)) = 20.0f;
    FUN_0c046294(v0_1, ((int)stk + 0), 0x1);
    FUN_0c046170(v0_1, 0.0249999985f);
    v0_3 = (((struct o3AC_int *)(v0_1))->v);
    (((struct o3AC_uint *)(v0_1))->v) = (v0_3 - 1);
    v0_2 = (0x3AC);
    if (((int)(v0_3 - 1) >= 0)) goto L_C048208;
    FUN_0c09c42c(v0_1);
    (((struct o2C4_uint *)(v0_1))->v) = 0x5A6;
    L_C0481FA:;
    (((struct o2CC_uint *)(v0_1))->v) = v0_0;
    L_C0481FE:;
    (((struct o3A0_uint *)(v0_1))->v) = (((((struct o3A0_int *)(v0_1))->v)) + 0x1);
    goto L_C048242;
    L_C048208:;
    if ((((int)((int)(*(int *)((v0_1 + v0_2))) % (int)0x3C)) != 0)) goto L_C048242;
    FUN_0c0cc3f8(0x324A9, R5, R6, R7);
    goto L_C048242;
    L_C048198:;
    if (((v0_3 & ((((struct o2EC_int *)(v0_1))->v))) == 0)) goto L_C048242;
    (((struct o2C4_uint *)(v0_1))->v) = 0x5A5;
    (((struct o2CC_uint *)(v0_1))->v) = v0_0;
    (((struct o3AC_uint *)(v0_1))->v) = 0xB4;
    FUN_0c0cc3f8(0x324A9, R5, R6, R7);
    goto L_C0481FE;
    L_C048184:;
    v0_2 = (((struct o3AC_int *)(v0_1))->v);
    (((struct o3AC_uint *)(v0_1))->v) = (v0_2 - 1);
    if (((int)(v0_2 - 1) >= 0)) goto L_C048242;
    v0_2 = (0x5A4);
    L_C048192:;
    (((struct o2C4_uint *)(v0_1))->v) = v0_2;
    goto L_C0481FA;
    L_C048130:;
    if (((v0_3 & ((((struct o2EC_int *)(v0_1))->v))) != 0)) goto L_C04813C;
    goto L_C048242;
    L_C04813C:;
    (((struct o2C4_uint *)(v0_1))->v) = 0x5A3;
    (((struct o2CC_uint *)(v0_1))->v) = v0_0;
    (((struct o3AC_uint *)(v0_1))->v) = 0x3C;
    goto L_C0481FE;
    L_C04812A:;
    v0_2 = (0x5A2);
    goto L_C048192;
}

int FUN_0c076b0c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t1;
    register int t11;
    register int t18;
    register int t19;
    register int t20;
    register int t26;
    register float u28;
    register float u33;
    register float u40;
    register float u43;
    register float u48;
    register float u51;
    register int t17;
    register float u21;
    register float u22;
    register float u23;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    FUN_0c0dc5a0();
    t20 = (((struct o40_int *)(a4))->v);
    *(unsigned short *)(((int)stk + 0)) = ((FUN_0c0d9dc0((((((struct o254_float *)(t1))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o25C_float *)(t1))->v)) - ((((struct o38_float *)(a4))->v))))) - 16384);
    (((struct o70_ushort *)(a4))->v) = (((((struct o70_short *)(a4))->v)) + 0x100);
    t11 = *(short *)(((int)stk + 0));
    nlRotateAY((-(((int)((unsigned int)((int)((unsigned int)t11 + (unsigned int)0x0)) + ((((int)0x0 > (int)t11)) ? 1u : 0u))) >> 1)));
    t18 = 0x0;
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((((struct o3E_short *)(a4))->v))) {
            break;
        }
        t17 = 0xC0E61D4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((*(int *)((t20 + 0x0)))); }
        t17 = (short)t18;
        t26 = (((struct o70_short *)(a4))->v);
        *(unsigned int *)(((int)stk + 0)) = t17;
        u21 = (FUN_0c0d9e90((t26 + t17)));
        u23 = u21;
        u21 = 0.099999994f;
        u22 = 1.0f;
        u28 = u22;
        u28 = u28 + u21 * u23;
        u22 = u28;
        u23 = (*(float *)(((int)stk + 16)));
        u23 = (u23 * u22);
        *(float *)(((int)stk + 16)) = u23;
        t17 = (*(int *)(((int)stk + 0)));
        u21 = (FUN_0c0da410((((((struct o70_short *)(a4))->v)) + t17)));
        u23 = u21;
        u21 = 0.099999994f;
        u22 = 1.0f;
        u33 = u22;
        u33 = u33 + u21 * u23;
        u22 = u33;
        u23 = (*(float *)(((int)stk + 24)));
        u23 = (u23 * u22);
        *(float *)(((int)stk + 24)) = u23;
        FUN_0c0db4d0((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
        t17 = (*(int *)((t20 + 0x0)));
        u23 = ((((struct o54_float *)(a4))->v));
        u21 = (*(float *)(((int)stk + 4)));
        u22 = ((((struct o60_float *)(a4))->v));
        u40 = u23;
        u40 = u40 + u21 * u22;
        u23 = u40;
        u21 = (*(float *)(((int)stk + 12)));
        u22 = ((((struct o6C_float *)(a4))->v));
        u43 = u23;
        u43 = u43 + u21 * u22;
        u23 = u43;
        (((struct o18_float *)(t17))->v) = u23;
        u23 = ((((struct o4C_float *)(a4))->v));
        u21 = (*(float *)(((int)stk + 4)));
        u22 = ((((struct o58_float *)(a4))->v));
        t17 = (*(int *)((t20 + 0x0)));
        u48 = u23;
        u48 = u48 + u21 * u22;
        u23 = u48;
        u21 = (*(float *)(((int)stk + 12)));
        u22 = ((((struct o64_float *)(a4))->v));
        u51 = u23;
        u51 = u51 + u21 * u22;
        u23 = u51;
        (((struct o1C_float *)(t17))->v) = u23;
        t17 = *(int *)((t20 + 0x0));
        t20 = (t20 + 0x4);
        t17 = (t17 + 0x1C);
        *(unsigned int *)((t17 + 0x0)) = ((*(int *)((t17 + 0x0))) | 0x1);
        t17 = 0xC0E5DC0;
        t19 = (t19 + 0x1);
        t18 = (t18 + ((int)((int)0x10000 / (int)((((struct o3E_short *)(a4))->v)))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0c465c(((((struct o3C_short *)(a4))->v)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0906e8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = (((struct o88_int *)(a4))->v);
    if (t0 != 0) {
        u0 = (-((((struct o90_float *)(a4))->v)));
    } else {
        u0 = ((((struct o90_float *)(a4))->v));
    }
    (((struct o94_float *)(a4))->v) = u0;
    nlPushMatrix(0x0);
    t1 = (((struct oA0_int *)(a4))->v);
    if ((int)t1 > (int)0x9) {
        (((struct o78_uint *)(a4))->v) = (((int)((int)((((struct oA0_int *)(a4))->v)) / (int)0xA)) + 0x64);
        nlUnitMatrix();
        FUN_0c0dcc70((((*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0))) + ((((struct o94_float *)(a4))->v))) + -0.699999988f), ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v)), ((((struct o8_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        (((struct o78_uint *)(a4))->v) = (((int)((int)((((struct oA0_int *)(a4))->v)) % (int)0xA)) + 0x64);
        nlUnitMatrix();
        u0 = 0.699999988f;
        u1 = ((*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0))) + ((((struct o94_float *)(a4))->v)));
        u2 = ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v));
        u3 = ((((struct o8_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v));
    } else {
        (((struct o78_uint *)(a4))->v) = (t1 + 0x64);
        nlUnitMatrix();
        u0 = ((((struct o94_float *)(a4))->v));
        u1 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0)));
        u2 = ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v));
        u3 = ((((struct o8_float *)(((((t0 << 1) + t0) << 2) + 0xC200A7C)))->v));
    }
    FUN_0c0dcc70((u1 + u0), u2, u3);
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
    if (8.0f > ((((struct o90_float *)(a4))->v))) {
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 0.799999952f);
        return 0x90;
    }
    t0 = (((struct oA4_int *)(a4))->v);
    (((struct oA4_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x6) {
        return FUN_0c0e19f2();
    }
    return 0xA4;
}

int FUN_0c084f18(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    u0 = (((struct o4C_float *)(a4))->v);
    t0 = (((struct o48_int *)(a4))->v);
    (((struct o48_uint *)(a4))->v) = (t0 + (int)u0);
    if ((int)(t0 + (int)u0) > (int)0xFF) {
        (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) + 0x1);
        (((struct o48_uint *)(a4))->v) = (((((struct o48_int *)(a4))->v)) - 127);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
    u0 = (((struct o38_float *)(a4))->v);
    u1 = (((struct o44_float *)(a4))->v);
    (((struct o38_float *)(a4))->v) = (u0 - u1);
    FUN_0c084570(((((struct o48_int *)(a4))->v)), ((((struct o50_int *)(a4))->v)), (int)((((struct o30_float *)(a4))->v)), (int)((((struct o34_float *)(a4))->v)), (int)(u0 - u1));
    t0 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t0 = (((struct oC_int *)0xC248A7C)->v);
        FUN_0c084570(((int)t0 >> 8), (unsigned char)t0, ((((struct o0_int *)0xC248A7C)->v)), ((((struct o4_int *)0xC248A7C)->v)), (((((struct o8_int *)0xC248A7C)->v))));
        if (((((struct o64_int *)(a4))->v)) != 0) {
            FUN_0c08477e(0x0);
            mwPlaEntryErrFn(0xFFFFFFFF, 0x0);
        }
        return FUN_0c0e19f2();
    }
    if (((((struct o64_int *)(a4))->v)) != 0) {
        t0 = (((struct o64_int *)(a4))->v);
        t1 = (((struct o60_int *)(a4))->v);
        t2 = (int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u));
        t3 = (int)((int)(((t1 - (t2 >> 1)) << 8) - (t1 - (t2 >> 1))) / (int)t0);
        t0 = t3;
        if ((int)t3 < 0) {
            t0 = 0x0;
        }
        FUN_0c08477e(0x1);
        return mwPlaEntryErrFn(0xFFFFFFFF, (((t0 << 16) | (t0 << 8)) | t0));
    }
    return 0x64;
}

int FUN_0c02c340(int a4)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F12;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_5 = a4;
    v0_0 = (((struct o304_int *)(v0_5))->v);
    v0_0 = (int)((int)(((v0_0 << 2) + v0_0) << 1) / (int)((((struct o308_int *)(v0_5))->v)));
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 0) + 0x2C)) = *(struct mv11 *)(0xC0F5534); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 0)) = *(struct mv11 *)(0xC0F5560); }
    v0_2 = (v0_0);
    v0_3 = ((((int)stk + 0) + 0x2C));
    v0_0 = (0x0);
    v0_1 = (v0_5);
    if (((int)((((struct o304_int *)(v0_5))->v)) > 0)) goto L_C02C392;
    v0_4 = (0x474);
    L_C02C43C:;
    *(unsigned int *)((v0_1 + v0_4)) = v0_0;
    L_C02C43E:;
    return v0_4;
    L_C02C392:;
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 12)) goto L_C02C43E;
    v0_4 = (v0_5);
    if ((v0_5 == 13)) goto L_C02C43E;
    v0_4 = (0x20C);
    if (((((((struct o20C_int *)(v0_1))->v)) & 0x80000) != 0)) goto L_C02C43E;
    v0_5 = (((struct o4C8_int *)(v0_1))->v);
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_5 = (((struct o4C8_int *)(v0_1))->v);
    v0_4 = (v0_5);
    if ((v0_5 == 2)) goto L_C02C43E;
    v0_6 = (((struct o560_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 8)) goto L_C02C43E;
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_4 = (((struct o310_int *)(v0_1))->v);
    w0_0 = *(float *)((v0_3 + (v0_2 << 2)));
    v0_5 = ((int (*)(Stk11))(FUN_0c0da2e0))(*(Stk11 *)(((int)stk + 0)));
    FPUL_ = ((v0_5 & 0x3));
    if ((!((float)v0_4 > (w0_0 + (float)(v0_5 & 0x3))))) goto L_C02C40A;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    (((struct o4F8_uint *)(v0_1))->v) = 0xC;
    (((struct o568_uint *)(v0_1))->v) = ((((struct o310_int *)(v0_1))->v));
    v0_4 = (0x310);
    goto L_C02C43C;
    L_C02C40A:;
    v0_5 = (((struct o564_int *)(v0_1))->v);
    w0_0 = *(float *)((v0_3 + (v0_2 << 2)));
    v0_2 = ((int (*)(void))(FUN_0c0da2e0))();
    v0_4 = ((v0_2 & 0x3));
    FPUL_ = ((v0_2 & 0x3));
    if ((!((float)v0_5 > (w0_0 + (float)(v0_2 & 0x3))))) goto L_C02C43E;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    (((struct o4F8_uint *)(v0_1))->v) = 0xC;
    (((struct o564_uint *)(v0_1))->v) = v0_0;
    v0_4 = (0x56C);
    goto L_C02C43C;
}

int FUN_0c097720(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((int)a6 > 0) {
        t1 = 0xC097834;
        t2 = a4;
        t3 = a5;
        t4 = a6;
        t5 = a7;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(int *)((t7 + 0x0))) == 0) && (t0 = a7, (int)a4 < (int)t0)) {
                t1 = (FUN_0c0da2e0());
                t8 = t1;
                t1 = 0x9;
                t1 = ((int)((int)t8 % (int)t1));
                t1 = (t1 + 0x2A7);
                t0 = 0x14;
                *(unsigned int *)((t7 + 0x4)) = t1;
                *(unsigned int *)((t7 + 0x0)) = t0;
                t1 = (FUN_0c0da2e0());
                t1 = (unsigned char)t1;
                t8 = t1;
                t1 = 0x8;
                u1 = (float)t8;
                u1 = (u1 / 512.0f);
                u1 = (u1 + 0.5f);
                *(float *)((t7 + t1)) = u1;
                t2 = 0x0;
                t1 = (nlPushMatrix(t2));
                t1 = (FUN_0c0da2e0());
                t2 = t1;
                t2 = (t2 << 1);
                t1 = (nlRotateAY(t2));
                t0 = 0xC0DC950;
                t2 = 0xBFFF;
                t1 = (nlRotateAZ(t2));
                t2 = t7;
                t2 = (t2 + 0x10);
                t1 = (nlGetMatrix(t2));
                t2 = 0x1;
                t1 = (nlPopMatrix(t2));
            } else {
                t8 = t2;
                t9 = t3;
                t10 = t4;
                t11 = t5;
                u2 = u0;
                u3 = u1;
            }
            u0 = u2;
            u1 = u3;
            t0 = (*(int *)((t7 + 0x0)));
            t2 = t8;
            t3 = t9;
            t4 = t10;
            t5 = t11;
            if (t0 != 0) {
                t1 = 0x8;
                u0 = 0.0f;
                u1 = (*(float *)((t7 + t1)));
                if (u1 != u0) {
                    t0 = (*(int *)((t7 + 0x0)));
                    u1 = (float)t0;
                    u2 = u1;
                    u2 = (u2 / 20.0f);
                    t2 = 0x0;
                    t1 = (nlPushMatrix(t2));
                    t0 = 0xC200AE0;
                    t1 = (FUN_0c0848bc((((((struct o0_float *)0xC200ADC)->v)) * u2), ((*(float *)((t0 + 0x0))) * u2), (((((struct o8_float *)0xC200ADC)->v)) * u2)));
                    t0 = 0xC0DBDA0;
                    t2 = t7;
                    t2 = (t2 + 0x10);
                    t1 = (FUN_0c0dbda0(t2));
                    t2 = (*(int *)((t7 + 0x4)));
                    t1 = (FUN_0c0c47ae(t2));
                    t2 = 0x1;
                    t1 = (nlPopMatrix(t2));
                } else {
                    t8 = t2;
                    t9 = t3;
                    t10 = t4;
                    t11 = t5;
                    u2 = u0;
                    u3 = u1;
                }
                u0 = u2;
                u1 = u3;
                t0 = (*(int *)((t7 + 0x0)));
                t2 = t8;
                t3 = t9;
                t4 = t10;
                t5 = t11;
                t0 = (t0 - 1);
                *(unsigned int *)((t7 + 0x0)) = t0;
            }
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x50);
            if ((int)t6 >= (int)a6) {
                break;
            }
        }
        t0 = t1;
    } else {
        t0 = 0xC097834;
    }
    return t0;
}

int FUN_0c03048e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((((((struct o3B8_int *)(a4))->v)) & 0x1) != 0) {
        t0 = (((struct o340_int *)(a4))->v);
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                (((struct o2C4_uint *)(a4))->v) = 0x540;
            }
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x53E;
        }
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o20C_uint *)(a4))->v) = 0x1;
        (((struct o4C8_uint *)(a4))->v) = 0x0;
        (((struct o500_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
        return 0x4F8;
    }
    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o508_uint *)(a4))->v) = 0x0;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c0371b0(a4);
}

int FUN_0c08238c(int a4, int a5)
{
    int stk[5];
    register int t1;
    register float t22;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1000 = a4;
    R1004 = a5;
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((((struct o3F4_int *)(t1))->v)) == 1) {
        (((struct o3F4_uint *)(t1))->v) = 0x0;
        (((struct o430_uint *)(t1))->v) = 0x4000;
        (((struct o434_uint *)(t1))->v) = ((int)((int)0x8000 / (int)((((struct o3FC_int *)(t1))->v))));
        nlSubVector3op((0x338 + t1), (R1000), (0x254 + t1));
        FUN_0c0dce80((0x338 + t1), (0x338 + t1), 0.5f);
        nlSubVector3op((0x344 + t1), (R1004), (0x278 + t1));
        FUN_0c0dce80((0x344 + t1), (0x344 + t1), 0.5f);
        nlAddVector3op((0x350 + t1), (0x254 + t1), (0x338 + t1));
        nlAddVector3op((0x35C + t1), (0x278 + t1), (0x344 + t1));
    }
    (((struct o430_uint *)(t1))->v) = (((((struct o430_int *)(t1))->v)) + ((((struct o434_int *)(t1))->v)));
    t22 = FUN_0c0da410(((((struct o430_int *)(t1))->v)));
    FUN_0c0dce80((((int)stk + 0) + 0x8), (0x338 + t1), t22);
    nlSubVector3op((0x254 + t1), (0x350 + t1), (((int)stk + 0) + 0x8));
    FUN_0c0dce80((((int)stk + 0) + 0x8), (0x344 + t1), t22);
    nlSubVector3op((0x278 + t1), (0x35C + t1), (((int)stk + 0) + 0x8));
    return (FUN_0c081e0c(t1));
}

int FUN_0c07df40(int a4)
{
    int stk[12];
    register float u0;
    register float u1;
    register int t2;
    register int t22;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned short *)(((int)stk + 30)) = 0x0;
    *(unsigned short *)(((int)stk + 32)) = 0x0;
    u0 = (((struct o0_float *)0xC07E07C)->v);
    u1 = (((struct o8_float *)0xC07E07C)->v);
    t2 = 0x6;
    for (;;) {
        *(unsigned short *)(((int)stk + 32)) = 0x0;
        *(unsigned short *)(((int)stk + 30)) = ((*(short *)(((int)stk + 30))) + ((int)((int)(FUN_0c0da2e0()) % (int)0x8000)));
        *(unsigned short *)(((int)stk + 28)) = (((int)((int)(FUN_0c0da2e0()) % (int)0x1000)) + 0x4000);
        FUN_0c0dc5a0();
        FUN_0c0dcc70(0.0f, u1, 0.0f);
        nlRotateAZ((*(short *)(((int)stk + 32))));
        nlRotateAY((*(short *)(((int)stk + 30))));
        nlRotateAX((*(short *)(((int)stk + 28))));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = u0;
        *(float *)(((int)stk + 24)) = 0.0f;
        FUN_0c0db470((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
        (((struct o24_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 4)));
        (((struct o28_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 8)));
        (((struct o2C_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 12)));
        nlPopMatrix(0x1);
        t22 = FUN_0c093a08((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x24), (((int)stk + 0) + 0x1C));
        t2 = (t2 - 0x1);
        if (t2 == 0) {
            break;
        }
    }
    return t22;
}

int FUN_0c066240(int a4)
{
    FUN_0c0e19d0(a4);
    FUN_0c0dc5a0();
    FUN_0c0dcc70(0.0f, 30.0f, 5.0f);
    nlGetMatrix((0xA4 + a4));
    nlPopMatrix(0x1);
    (((struct o32_ushort *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)0x6)) + 0x99);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -5.0f;
    *(unsigned int *)((a4 + 0x34)) = 0x2;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o64_float *)(a4))->v) = 0.0f;
    (((struct o68_float *)(a4))->v) = -1.0f;
    (((struct o6C_float *)(a4))->v) = 1.0f;
    (((struct o3C_float *)(a4))->v) = 33.3333321f;
    (((struct o70_float *)(a4))->v) = 0.0f;
    (((struct o74_float *)(a4))->v) = 0.0f;
    (((struct o78_float *)(a4))->v) = -9.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 33.3333321f;
    (((struct o38_float *)(a4))->v) = 1.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct oEC_float *)(a4))->v) = (((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) + 0.5f) * 0.00999999978f);
    (((struct oF4_float *)(a4))->v) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) * 0.00299999979f);
    (((struct o180_uint *)(a4))->v) = 0x960;
    return 0x180;
}

int FUN_0c049124(int a4, int a5, int a6)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_5 = a5;
    v0_3 = a6;
    v0_0 = (((struct o304_int *)(v0_2))->v);
    v0_3 = (int)((int)(((v0_0 << 2) + v0_0) << 1) / (int)((((struct o308_int *)(v0_2))->v)));
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 0) + 0x2C)) = *(struct mv11 *)(0xC0F6778); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 0)) = *(struct mv11 *)(0xC0F67A4); }
    v0_6 = (((struct o4F8_int *)(v0_2))->v);
    v0_4 = (v0_6);
    v0_0 = (0x0);
    v0_1 = (v0_2);
    v0_2 = (v0_3);
    v0_5 = ((((int)stk + 0) + 0x2C));
    v0_3 = (v0_6);
    if ((v0_6 == 4)) goto L_C0491FE;
    v0_4 = (v0_3);
    if ((v0_3 == 5)) goto L_C0491FE;
    (((struct o4D4_uint *)(v0_1))->v) = (((((struct o4D4_int *)(v0_1))->v)) - 1);
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_3 = (v0_6);
    if ((v0_6 == 10)) goto L_C0491FE;
    v0_4 = (v0_3);
    if ((v0_3 == 11)) goto L_C0491FE;
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_3 = (v0_6);
    if ((v0_6 == 8)) goto L_C0491FE;
    v0_4 = (v0_3);
    if ((v0_3 == 9)) goto L_C0491FE;
    (((struct o458_float *)(v0_1))->v) = 1.0f;
    (((struct o454_ushort *)(v0_1))->v) = v0_0;
    v0_4 = (((struct o310_int *)(v0_1))->v);
    v0_3 = (((v0_2 << 2) + v0_5));
    FPUL_ = (v0_4);
    if (((float)v0_4 > (*(float *)((((v0_2 << 2) + v0_5) + 0x0))))) goto L_C0491CA;
    v0_2 = (((struct o564_int *)(v0_1))->v);
    v0_4 = (0x564);
    FPUL_ = (v0_2);
    if ((!((float)v0_2 > (*(float *)((v0_3 + 0x0)))))) goto L_C0491FE;
    L_C0491CA:;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    if ((((((struct o5A0_int *)(v0_1))->v)) != 0)) goto L_C0491DE;
    (((struct o4F8_uint *)(v0_1))->v) = 0xA;
    L_C0491E4:;
    (((struct o568_uint *)(v0_1))->v) = ((((struct o310_int *)(v0_1))->v));
    (((struct o310_uint *)(v0_1))->v) = v0_0;
    (((struct o564_uint *)(v0_1))->v) = v0_0;
    (((struct o56C_uint *)(v0_1))->v) = v0_0;
    (((struct o4D4_uint *)(v0_1))->v) = 0xFFFFFFFF;
    v0_4 = (0x4D4);
    L_C0491FE:;
    return v0_4;
    L_C0491DE:;
    v0_2 = ((int (*)(int, Stk11))(FUN_0c0469f6))(v0_1, *(Stk11 *)(((int)stk + 0)));
    goto L_C0491E4;
}

int FUN_0c0494e0(int a4, int a5, int a6)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_5 = a5;
    v0_3 = a6;
    v0_0 = (((struct o304_int *)(v0_2))->v);
    v0_3 = (int)((int)(((v0_0 << 2) + v0_0) << 1) / (int)((((struct o308_int *)(v0_2))->v)));
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 0) + 0x2C)) = *(struct mv11 *)(0xC0F67D0); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 0)) = *(struct mv11 *)(0xC0F67FC); }
    v0_6 = (((struct o4F8_int *)(v0_2))->v);
    v0_4 = (v0_6);
    v0_0 = (0x0);
    v0_1 = (v0_2);
    v0_2 = (v0_3);
    v0_5 = ((((int)stk + 0) + 0x2C));
    v0_3 = (v0_6);
    if ((v0_6 == 4)) goto L_C0495BA;
    v0_4 = (v0_3);
    if ((v0_3 == 5)) goto L_C0495BA;
    (((struct o4D4_uint *)(v0_1))->v) = (((((struct o4D4_int *)(v0_1))->v)) - 1);
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_3 = (v0_6);
    if ((v0_6 == 10)) goto L_C0495BA;
    v0_4 = (v0_3);
    if ((v0_3 == 11)) goto L_C0495BA;
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_3 = (v0_6);
    if ((v0_6 == 8)) goto L_C0495BA;
    v0_4 = (v0_3);
    if ((v0_3 == 9)) goto L_C0495BA;
    (((struct o458_float *)(v0_1))->v) = 1.0f;
    (((struct o454_ushort *)(v0_1))->v) = v0_0;
    v0_4 = (((struct o310_int *)(v0_1))->v);
    v0_3 = (((v0_2 << 2) + v0_5));
    FPUL_ = (v0_4);
    if (((float)v0_4 > (*(float *)((((v0_2 << 2) + v0_5) + 0x0))))) goto L_C049586;
    v0_2 = (((struct o564_int *)(v0_1))->v);
    v0_4 = (0x564);
    FPUL_ = (v0_2);
    if ((!((float)v0_2 > (*(float *)((v0_3 + 0x0)))))) goto L_C0495BA;
    L_C049586:;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    if ((((((struct o5A0_int *)(v0_1))->v)) != 0)) goto L_C04959A;
    (((struct o4F8_uint *)(v0_1))->v) = 0xA;
    L_C0495A0:;
    (((struct o568_uint *)(v0_1))->v) = ((((struct o310_int *)(v0_1))->v));
    (((struct o310_uint *)(v0_1))->v) = v0_0;
    (((struct o564_uint *)(v0_1))->v) = v0_0;
    (((struct o56C_uint *)(v0_1))->v) = v0_0;
    (((struct o4D4_uint *)(v0_1))->v) = 0xFFFFFFFF;
    v0_4 = (0x4D4);
    L_C0495BA:;
    return v0_4;
    L_C04959A:;
    v0_2 = ((int (*)(int, Stk11))(FUN_0c0469f6))(v0_1, *(Stk11 *)(((int)stk + 0)));
    goto L_C0495A0;
}

int FUN_0c01af34(int a4)
{
    register int t33;

    FUN_0c0de310(0.0f, 0.0f, 0.0f);
    FUN_0c0c43dc(((((struct o8_int *)0xC23ED50)->v)), 0x0);
    FUN_0c0c4364(((((struct o0_int *)0xC23ED50)->v)), 0x0);
    FUN_0c0cc88c(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0b264e();
    FUN_0c0b2e48();
    FUN_0c0852bc(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c055936(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c058fa0(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c016d2c();
    FUN_0c016d40();
    FUN_0c016d74();
    FUN_0c0534a4();
    mwPlyPreInitSofdec();
    FUN_0c04faa4();
    FUN_0c04996a();
    FUN_0c019a36();
    (((struct o0_uint *)0xC23ED9C)->v) = 0x4;
    FUN_0c01a874();
    FUN_0c0cc752(((((struct o0_int *)0xC23ED50)->v)));
    *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    t33 = (int)((int)((*(int *)((a4 + 0x34))) + 0x59) / (int)0x5A);
    (((struct o8_uint *)0xC23ED9C)->v) = t33;
    if ((*(int *)0xC204998) != 0) {
        *(unsigned int *)0xC1FF890 = 0x0;
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        *(unsigned int *)0xC1EFD5C = 0x0;
    }
    return t33;
}

int FUN_0c01da32(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t14;
    register int t20;
    register int t21;
    register int t22;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = 0x0;
    R1008 = 0x0;
    for (;;) {
        t0 = R1008;
        t2 = R1008;
        t3 = 0x0;
        for (;;) {
            if ((*(int *)((((((t3 << 1) + t3) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94)) + 0x0))) == ((((t3 << 1) + t3) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94))) {
                FUN_0c0db0a0((t3 + 0x2), (t2 + 0x5));
                R1004 = 0xC0F53B8;
                nlPrintf(0xC0F53B8);
            } else {
                t8 = ((((t3 << 1) + t3) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94));
                t9 = 0x0;
                for (;;) {
                    t8 = (*(int *)((t8 + 0x0)));
                    if (t8 == ((((t3 << 1) + t3) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94))) {
                        break;
                    }
                    t9 = (t9 + 0x1);
                }
                R1012 = ((R1012) + 0x1);
                FUN_0c0db0a0((t3 + 0x2), (t2 + 0x5));
                t14 = ((int)((int)t9 % (int)0xA));
                R1004 = t14;
                R1000 = 0xC0F53BC;
                nlPrintf(0xC0F53BC, t14);
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x1F) {
                break;
            }
        }
        FUN_0c0db0a0(0x2, 0x25);
        t20 = (R1012);
        R1004 = t20;
        R1000 = 0xC0F53C0;
        t21 = nlPrintf(0xC0F53C0, t20);
        t22 = R1008;
        R1008 = (t22 + 0x1);
        if ((int)(t22 + 0x1) >= (int)0x3F) {
            break;
        }
    }
    return t21;
}

int FUN_0c0cfa18(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (int)((int)a5 / (int)0x3C);
    t1 = 0x63;
    if (a5 != (*(int *)0xC9433C8)) {
        t1 = (int)(((float)((int)((int)a5 % (int)0x3C)) / 60.0f) * 100.0f);
    }
    *(unsigned char *)((a4 + 0x0)) = ((int)((int)t0 / (int)0x258));
    *(unsigned char *)((a4 + 0x1)) = ((int)((int)((int)((int)t0 / (int)0x3C)) % (int)0xA));
    *(unsigned char *)((a4 + 0x2)) = ((int)((int)((int)((int)t0 % (int)0x3C)) / (int)0xA));
    *(unsigned char *)((a4 + 0x3)) = ((int)((int)t0 % (int)0xA));
    *(unsigned char *)((a4 + 0x4)) = ((int)((int)t1 / (int)0xA));
    t0 = (int)((int)t1 % (int)0xA);
    *(unsigned char *)((a4 + 0x5)) = t0;
    return t0;
}

int FUN_0c042fd0(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t5 = (((struct o4_int *)0xC247070)->v);
    if (t5 == 0) {
        t6 = 0x0;
        t7 = ((int)((int)(FUN_0c0da2e0()) % (int)((((struct o0_int *)0xC247070)->v))));
        for (;;) {
            if ((*(int *)(((t6 << 2) + 0xC247030))) == 4) {
                t7 = (t7 - 1);
            }
            if ((int)t7 >= 0) {
                t6 = (t6 + 0x1);
                if ((int)t6 >= (int)0x2) {
                    break;
                }
                continue;
            }
            (((struct o510_uint *)(a4))->v) = t6;
            t6 = 0x1;
            (((struct o50C_uint *)(a4))->v) = t6;
            return 0x50C;
        }
        (((struct o50C_uint *)(a4))->v) = 0x0;
    } else {
        t6 = 0x84;
        t7 = 0x0;
        t8 = a6;
        t9 = t5;
        for (;;) {
            if ((unsigned int)t7 >= (unsigned int)0x8) {
                break;
            }
            t8 = 0xC246FF0;
            t8 = (t8 + t7);
            t6 = 0xC246FF0;
            t6 = (t6 + 0x40);
            t6 = (*(int *)((t7 + t6)));
            t8 = (*(int *)((t8 + 0x0)));
            if ((t6 == 4) && (t0 = (t6 == 4), t6 = 0x32C, t1 = *(int *)((t8 + t6)), t2 = t1, (int)t2 > 0)) {
                t9 = (t9 + 0x1);
            }
            t7 = (t7 + 0x4);
        }
        t0 = 0x0;
        t1 = ((int)((int)(FUN_0c0da2e0()) % (int)t9));
        for (;;) {
            t2 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
            if ((*(int *)(((t0 << 2) + 0xC247030))) == 4) {
                if (((int)t0 >= (int)0x2) || (t3 = (((struct o32C_int *)(t2))->v), t4 = t3, (int)t4 > 0)) {
                    t1 = (t1 - 1);
                }
                if ((int)t1 < 0) {
                    break;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0xC) {
                    (((struct o50C_uint *)(a4))->v) = 0x0;
                    return 0x50C;
                }
                continue;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0xC) {
                (((struct o50C_uint *)(a4))->v) = 0x0;
                return 0x50C;
            }
        }
        (((struct o510_uint *)(a4))->v) = t0;
        (((struct o50C_uint *)(a4))->v) = 0x1;
    }
    return 0x50C;
}

int FUN_0c033c8c(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u9;
    register float u12;
    register float u13;
    register float u14;
    register float u26;
    register float u27;
    register float u28;
    float s1;

    *(float *)(((int)stk + 12)) = f4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct o4_float *)(a5))->v);
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (u1 - u0), (u2 - u3), (u4 - u5));
    u9 = ((u2 - u3) * (u2 - u3));
    u9 = u9 + ((u1 - u0)) * ((u1 - u0));
    u12 = u9;
    u12 = u12 + ((u4 - u5)) * ((u4 - u5));
    u13 = *(float *)0xC033E0C;
    u14 = *(float *)(((int)stk + 12));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)));
    nlRotateAY((*(int *)(((int)stk + 4))));
    nlRotateAX((*(int *)(((int)stk + 0))));
    s1 = _builtin_sqrtf(u12);
    nlScale((-(u14 / 1.0f)), (-(u14 / 1.0f)), (-(s1 / u13)));
    u26 = (u14 / 1.0f);
    u27 = _builtin_fabsf((s1 / u13));
    u28 = _builtin_fabsf((s1 / u13));
    if (_builtin_fabsf((u14 / 1.0f)) > _builtin_fabsf((s1 / u13))) {
        u26 = _builtin_fabsf((u14 / 1.0f));
        u27 = (s1 / u13);
        u28 = _builtin_fabsf((u14 / 1.0f));
    }
    FUN_0c0de000(u28);
    FUN_0c0c47ae((*(int *)(((((int)((int)(*(int *)(((int)stk + 8))) % (int)0x6)) << 2) + 0xC1EFE10))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0bdf84(int a4)
{
    int stk[11];
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u14;
    register float u15;
    register float u17;
    register float u18;
    register float u19;
    register int t20;
    register int t21;
    register int t22;
    register int t26;

    t7 = *(int *)((a4 + 0x0));
    t1 = *(short *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = t7;
    FUN_0c0a7c66((((int)stk + 0) + 0x20), ((((int)stk + 0) + 0x20) + 0x4), ((((int)stk + 0) + 0x20) + 0x8));
    t5 = t1;
    t6 = ((int)((int)(((*(int *)(((((int)stk + 0) + 0x20) + 0x0))) & 0xF000) * t1) / (int)0xFFFF));
    for (;;) {
        t8 = *(int *)(((int)stk + 4));
        t21 = *(int *)((((t6 * 0x2C) + t8) + 0x28));
        t20 = *(int *)((((t6 * 0x2C) + t8) + 0x24));
        FUN_0c0db470(t7, (((int)stk + 0) + 0x14));
        *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 20)));
        *(unsigned int *)((((int)stk + 0) + 0x0)) = ((*(int *)((((int)stk + 0) + 0x0))) | 0x1);
        u14 = *(float *)(((int)stk + 24));
        u15 = *(float *)(((int)stk + 28));
        FUN_0c0db4d0((t7 + 0xC), (((int)stk + 0) + 0x8));
        u17 = *(float *)(((int)stk + 8));
        u18 = *(float *)(((int)stk + 12));
        u19 = *(float *)(((int)stk + 16));
        for (;;) {
            t22 = *(int *)((t21 + 0x0));
            t21 = (t21 + 0x4);
            t20 = (t20 - 0x1);
            *(float *)((t22 + 0x0)) = (*(float *)(((int)stk + 0)));
            (((struct o4_float *)(t22))->v) = u14;
            (((struct o8_float *)(t22))->v) = u15;
            (((struct oC_float *)(t22))->v) = u17;
            (((struct o10_float *)(t22))->v) = u18;
            (((struct o14_float *)(t22))->v) = u19;
            if (t20 == 0) {
                break;
            }
        }
        t26 = *(short *)((a4 + 0xC));
        t6 = (t6 + 0x1);
        t7 = (t7 + 0x2C);
        if ((int)t6 >= (int)t26) {
            t6 = 0x0;
        }
        t5 = (t5 - 0x1);
        if (t5 == 0) {
            break;
        }
    }
    return t26;
}

int FUN_0c053700(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) + 0xC1A3290));
    t1 = 0xC1A3290;
    if (t0 != 0) {
        t2 = 0xC23ECFC;
        t3 = a4;
        t4 = 0x0;
        t5 = t0;
        for (;;) {
            if (!(((((struct o4_float *)(t5))->v)) > -500.0f)) {
                break;
            }
            t2 = 0xAC;
            t2 = (t2 + a4);
            t2 = (*(int *)((t2 + 0x0)));
            if (((int)((int)t4 % (int)0x5)) == t2) {
                t3 = 0x0;
                nlPushMatrix(t3);
                t2 = 0xC0DCC70;
                FUN_0c0dcc70((*(float *)((t5 + 0x0))), ((((struct o4_float *)(t5))->v)), ((((struct o8_float *)(t5))->v)));
                t2 = 0xC0DC890;
                t3 = (*(short *)((t5 + 0xE)));
                nlRotateAY(t3);
                t3 = (*(short *)((t5 + 0xC)));
                nlRotateAX(t3);
                t3 = (*(short *)((t5 + 0x10)));
                nlRotateAZ(t3);
                t2 = 0xC0DCB80;
                nlScale(1.79999995f, 0.199999988f, 1.79999995f);
                FUN_0c0de000(1.79999995f);
                t2 = 0xC0C4784;
                t3 = ((((struct o78_int *)(a4))->v));
                FUN_0c0c4784(t3, ((((struct o90_float *)(a4))->v)));
                t3 = 0x1;
                nlPopMatrix(t3);
            } else {
                t0 = t2;
                t6 = t3;
            }
            t5 = (t5 + 0x14);
            t2 = t0;
            t3 = t6;
            t4 = (t4 + 0x1);
        }
        t1 = 0x4;
    }
    return t1;
}

int FUN_0c06bc74(int a4)
{
    int stk[4];
    register int t6;
    register int t7;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = ((((struct o228_int *)(a4))->v));
    *(volatile int *)0xC23A258;
    (((struct o22C_uint *)(a4))->v) = ((*(unsigned int *)0xC23A258 >> 3) % 68);
    t6 = (int)((int)(((((struct o22C_int *)(a4))->v)) - ((((struct oBC_int *)(a4))->v))) % (int)0x18);
    t7 = 0x0;
    if (((int)t6 >= 0) && ((int)t6 <= (int)0x5)) {
        t7 = t6;
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)0xC247BF4));
    FUN_0c0dcc70(((((struct o60_float *)(a4))->v)), ((((struct o64_float *)(a4))->v)), ((((struct o68_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c465c((unsigned short)(*(short *)(((t7 << 1) + (R1000)))));
    nlMultiMatrixRevOrder(((*(int *)0xC247CAC) + 0x2EC));
    FUN_0c0db840((((int)stk + 0) + 0x4));
    (((struct o30_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
    (((struct o34_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o38_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0cddfa(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c0cddba(a5);
    t1 = FUN_0c0cddda(a5);
    if ((a4 == 0) || (t0 != 0)) {
        if (t1 != 1) {
            FUN_0c0c7354((*(int *)((0xC1EFA24 + (t0 << 2)))), (f4 + ((((struct o0_float *)0xC0CDF38)->v))), f5);
            FUN_0c0c7354(0xC1E9F24, (f4 + ((((struct o8_float *)0xC0CDF38)->v))), f5);
            FUN_0c0c7354((*(int *)((0xC1EFA24 + (t1 << 2)))), (f4 + ((((struct oC_float *)0xC0CDF38)->v))), f5);
        }
    }
    t0 = a4;
    u0 = f4;
    if ((int)a4 > (int)0x9) {
        FUN_0c0c7354((*(int *)((0xC1EFA24 + (((int)((int)a4 / (int)0xA)) << 2)))), f4, f5);
        t0 = ((int)((int)a4 % (int)0xA));
        u0 = (f4 + ((((struct o18_float *)0xC0CDF38)->v)));
    }
    return (FUN_0c0c7354((*(int *)((0xC1EFA24 + (t0 << 2)))), u0, f5));
}

int FUN_0c03cb3a(int a4)
{
    register int t0;
    register int t1;

    if (((int)((int)((((struct o310_int *)(a4))->v)) % (int)(((((struct o4C0_int *)(a4))->v)) + 0x4))) == 0) {
        t0 = ((((struct o310_int *)(a4))->v));
    } else {
        t1 = (((struct o4C0_int *)(a4))->v);
        t0 = ((((int)((int)((((struct o310_int *)(a4))->v)) / (int)(t1 + 0x4))) + 0x1) * (t1 + 0x4));
    }
    FUN_0c03bd28(a4, 0x0, (t0 - ((((struct o4C0_int *)(a4))->v))), 0x0, 0x0);
    t0 = 0x560;
    if (((((struct o560_int *)(a4))->v)) != 0) {
        (((struct o5A0_uint *)(a4))->v) = 0x0;
        (((struct o5A4_uint *)(a4))->v) = 0x0;
        (((struct o5A8_uint *)(a4))->v) = 0x0;
        (((struct o580_uint *)(a4))->v) = (*(int *)(((((((struct o1C8_int *)(a4))->v)) << 2) + 0xC1F0488)));
        (((struct o584_uint *)(a4))->v) = 0x0;
        (((struct o5A4_uint *)(a4))->v) = (*(int *)(((((((struct o580_int *)(a4))->v)) << 2) + 0xC1F04C8)));
        t0 = 0x5A4;
    }
    return t0;
}

int FUN_0c034e2c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC1F79B4) + 0x8));
    t0 = *(int *)(((t1 + 0x88) + 0x8));
    t2 = (((struct o88_int *)(t1))->v);
    t3 = *(int *)(((t1 + 0x88) + 0x4));
    if (((((struct o49C_int *)(a4))->v)) == 3) {
        t1 = (int)((int)(FUN_0c0da2e0()) % (int)(t2 + t3));
        if ((int)(t1 - t2) > 0) {
            (((struct o528_uint *)(a4))->v) = 0x2;
        } else {
            (((struct o528_uint *)(a4))->v) = 0x1;
        }
    } else {
        t1 = (int)((int)(FUN_0c0da2e0()) % (int)((t2 + t3) + t0));
        if ((int)(t1 - t2) <= 0) {
            (((struct o528_uint *)(a4))->v) = 0x1;
        } else {
            if ((int)((t1 - t2) - t3) <= 0) {
                (((struct o528_uint *)(a4))->v) = 0x2;
            } else {
                (((struct o528_uint *)(a4))->v) = 0x3;
            }
        }
    }
    (((struct o524_uint *)(a4))->v) = 0x1;
    return 0x1;
}
