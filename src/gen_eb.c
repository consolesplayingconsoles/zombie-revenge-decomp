/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk4);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
int FUN_0c0236ce(int);
int FUN_0c02374e(int, int, int, int);
extern int FUN_0c02a19a();
int FUN_0c02a220(int);
int FUN_0c02eaee(int);
int FUN_0c02eeea(int);
int FUN_0c02f6f4(int, int, int, int, float, float, float);
int FUN_0c02fc26(int);
int FUN_0c030988(int);
int FUN_0c034314(int, int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0353e4(int);
int FUN_0c035402(void);
int FUN_0c0355f8(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c053cf0(int, int);
int FUN_0c053d60(int, int);
int FUN_0c0556ce(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c08467c(int, int);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c084ab8(int);
int FUN_0c084e08(int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0a8362(void);
int FUN_0c0bf940(void);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c44d6(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0c475c(int, float);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d0648(void);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de9c0(void);
int FUN_0c0e14c4(int);
extern int FUN_0c0e15d4();
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2400(void);
int FUN_0c229058(int, int, int);
int FUN_0c22fa7e(int, int, int);
int FUN_0c232624(int, int, int);
int FUN_0c233dbc(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int fmMngBit2Num(int, int);
int fmcalccrc(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int kmSetPixelClipping(int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiPurgeMemory(int, int);
int kmiWaitForFinishDMA(int);
int make_header(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c08bd50(int a4, int a5);
int FUN_0c037954(int a4);
int FUN_0c030ad6(int a4);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0470da(int a4, int a5, int a6, int a7);
int FUN_0c024776(int a4);
float FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int gdFsReinitG(void);
int FUN_0c0ad61a(int a4, int a5, int a6, int a7);
int FUN_0c0a83f2(void);
int FUN_0c0b145c(int a4, float f4, float f5);
int FUN_0c229172(int a4);
void FUN_0c01632c(int a4, int a5, int a6, int a7);
float FUN_0c0277c4(int a4, float f4);
int FUN_0c031d18(int a4);
float FUN_0c036e18(int a4, int a5, int a6, float f4);
float FUN_0c046170(int a4, float f4);
int FUN_0c05816a(int a4, int a5);
int FUN_0c068424(void);
int FUN_0c0af9e8(int a4, int a5, int a6, int a7);
int FUN_0c0ddd20(float f4, float f5, float f6, float f7);
int kmiCopyToFrameBuffer(int a4, int a5, int a6);
int adxf_read_sj32(int a4, int a5, int a6);
int FUN_0c02ec56(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c031bf8(int a4);
int FUN_0c0e282a(int a4, int a5);
int FUN_0c0306bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c05a9ce(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C8_int { char p[0x1C8]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_float { char p[0x23C]; float v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o244_float { char p[0x244]; float v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2B4_uint { char p[0x2B4]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o370_float { char p[0x370]; float v; };
struct o374_float { char p[0x374]; float v; };
struct o378_float { char p[0x378]; float v; };
struct o37C_float { char p[0x37C]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o380_float { char p[0x380]; float v; };
struct o384_float { char p[0x384]; float v; };
struct o388_float { char p[0x388]; float v; };
struct o38C_float { char p[0x38C]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3A4_int { char p[0x3A4]; int v; };
struct o3A4_uint { char p[0x3A4]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44C_uint { char p[0x44C]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4CC_uint { char p[0x4CC]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4D4_int { char p[0x4D4]; int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4E8_int { char p[0x4E8]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o4F4_uint { char p[0x4F4]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_int { char p[0x500]; int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_uint { char p[0x514]; unsigned int v; };
struct o528_int { char p[0x528]; int v; };
struct o534_int { char p[0x534]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o550_float { char p[0x550]; float v; };
struct o558_uint { char p[0x558]; unsigned int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o5BC_int { char p[0x5BC]; int v; };
struct o5BC_uint { char p[0x5BC]; unsigned int v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o4_int { char p[0x4]; int v; };



int FUN_0c08bd50(int a4, int a5)
{
    int t0;
    int t1;
    int t10;
    int t12;
    float u15;
    int t19;
    int t22;
    int stk[17];

    t0 = (((struct oBC_int *)(a5))->v);
    t1 = (((struct o1C8_int *)(a5))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o30_float *)(a4))->v)) - ((((struct o8_float *)(((int)stk + 4)))->v))), (((((struct o34_float *)(a4))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x8)))->v))), (((((struct o38_float *)(a4))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x8)))->v))));
    nlPushMatrix(0x0);
    t10 = 0x28;
    for (;;) {
        t12 = FUN_0c0e19aa(0xC08BED4, 0x58, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t12);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
        u15 = 0.599999964f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        (((struct o48_float *)(t12))->v) = u15;
        (((struct o50_uint *)(t12))->v) = 0x291;
        (((struct o54_uint *)(t12))->v) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        (((struct o44_float *)(t12))->v) = ((float)(((FUN_0c0da2e0()) & 0x1F) + 0x10) * 0.0399999991f);
        nlUnitMatrix();
        t19 = FUN_0c0da2e0();
        nlRotateAY((((t19 << 1) + (*(int *)(((int)stk + 8)))) - 32768));
        t22 = FUN_0c0da2e0();
        nlRotateAX((((t22 << 1) + (*(int *)(((int)stk + 4)))) - 32768));
        FUN_0c0db470((t12 + 0x3C), (t12 + 0x3C));
        t10 = (t10 - 0x1);
        if (t10 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c037954(int a4)
{
    int stk[12];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3E8_int *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    nlPushMatrix(0x0);
    nlMultiMatrix((0x2B0 + a4));
    FUN_0c0db840(((int)stk + 4));
    (((struct o370_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
    (((struct o374_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o378_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66((0x394 + a4), ((0x394 + a4) + 0x4), ((0x394 + a4) + 0x8));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x40));
    FUN_0c0db840(((int)stk + 4));
    (((struct o37C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
    (((struct o380_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o384_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66(((0x394 + a4) + 0xC), (((0x394 + a4) + 0xC) + 0x4), (((0x394 + a4) + 0xC) + 0x8));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x80));
    FUN_0c0db840(((int)stk + 4));
    (((struct o388_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
    (((struct o38C_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o390_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66(((0x394 + a4) + 0x18), (((0x394 + a4) + 0x18) + 0x4), (((0x394 + a4) + 0x18) + 0x8));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}



int FUN_0c0470da(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t5;
    int t29;
    int t30;
    int t45;
    int t26;
    int t24;
    int t42;
    int stk[12];

    t0 = (((struct o3A4_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 != 2) {
            } else {
                t2 = (FUN_0c02374e(a4, 0x1, a6, a7));
            }
            t26 = t2;
        } else {
            t5 = FUN_0c046cc0(a4);
            if (t5 == 0) {
                t24 = (FUN_0c02a19a(a4));
            } else {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY(((((struct o6E_short *)(a4))->v)));
                *(float *)(((int)stk + 20)) = 0.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 28)) = (*(float *)0xC0472A0);
                FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                (((struct o4B0_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
                *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
                (((struct o4B8_float *)(a4))->v) = (*(float *)(((int)stk + 16)));
                nlPopMatrix(0x1);
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                if ((int)((((struct o54C_int *)(a4))->v)) <= (int)0x1) {
                    (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
                }
                t24 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
            }
            t26 = t24;
        }
        t45 = t26;
    } else {
        t29 = FUN_0c046cc0(a4);
        if (t29 != 0) {
            t30 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t30 << 2) + t30) << 2) + 0xC1F8E44))) + 0x6)));
            if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
                (((struct o2D4_uint *)(a4))->v) = 0x4;
                (((struct o2CC_uint *)(a4))->v) = 0x1;
            }
            FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
            (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
            t42 = 0x3A4;
        } else {
            t42 = (FUN_0c02a19a(a4));
        }
        t45 = t42;
    }
    return t45;
}

int FUN_0c024776(int a4)
{
    int t4;
    int t16;
    int t20;
    int stk[11];

    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if (((((struct o5BC_int *)(a4))->v)) != 0) {
        (((struct o2C4_uint *)(a4))->v) = ((((struct o5BC_int *)(a4))->v));
    } else {
        if (((((struct o50C_int *)(a4))->v)) == 0) {
            t4 = FUN_0c0236ce(a4);
            if (t4 != 0) {
                FUN_0c03442c(a4, (*(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
            }
        }
        if ((*(int *)(((int)stk + 12))) == 0) {
            t16 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct o2A0_int *)(a4))->v)) & 0x1) << 2) + ((*(int *)(((0xC1F8E3C + (((t16 << 2) + t16) << 2)) + 0x10))) + 0x122)) + 0x2)));
        } else {
            t20 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct o2A0_int *)(a4))->v)) & 0x1) << 2) + ((*(int *)(((0xC1F8E3C + (((t20 << 2) + t20) << 2)) + 0x10))) + 0x122)) + 0x0)));
        }
    }
    *(volatile int *)((a4 + 0x210));
    (((struct o20C_uint *)(a4))->v) = 0x20;
    (((struct o210_uint *)(a4))->v) = 0x0;
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    (((struct o5BC_uint *)(a4))->v) = 0x0;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o4C4_uint *)(a4))->v) = 0x5;
    (((struct o4C8_uint *)(a4))->v) = 0x8;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}


int gdFsReinitG(void)
{
    int t0;
    int t2;
    int t3;
    int t7;
    int t11;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;

    t0 = *(int *)0xC2393C4;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t2 = 0x0;
    t3 = (0x1080 + t0);
    for (;;) {
        if ((int)t2 >= (int)((*(int *)(((*(int *)0xC2393C4) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t3);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x54);
    }
    t7 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t11 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x0)))))(t0);
    *(unsigned short *)(((*(int *)0xC2393C4) + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0xC2393C4) + 0x3A)) = 0x0;
    t17 = 0x3A;
    t18 = ((*(int *)0xC2393C4) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)0xC2393C4) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)0xC2393C4);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0xC2393C4;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0xC2393C4;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t7 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0xC20F2C4))();
}

int FUN_0c0ad61a(int a4, int a5, int a6, int a7)
{
    float u1;
    float u5;
    float u13;
    int t14;

    FUN_0c0685a4(a4, a5, a6, a7);
    u1 = *(float *)0xC0AD744;
    (((struct o244_float *)(a4))->v) = (((((struct o244_float *)(a4))->v)) + u1);
    u5 = 0.0f;
    if (!(1.0f > ((((struct o244_float *)(a4))->v)))) {
        (((struct o244_float *)(a4))->v) = (((((struct o244_float *)(a4))->v)) - 1.0f);
        u5 = (-1.0f);
    }
    (((struct o23C_float *)(a4))->v) = (((((struct o23C_float *)(a4))->v)) + 0.00129999989f);
    if (!(1.0f > ((((struct o23C_float *)(a4))->v)))) {
        (((struct o23C_float *)(a4))->v) = (((((struct o23C_float *)(a4))->v)) - 1.0f);
    }
    u13 = *(float *)0xC0AD75C;
    t14 = 0xC10F398;
    for (;;) {
        if ((*(short *)((t14 + 0x2))) == 0) {
            break;
        }
        FUN_0c0cacde((unsigned short)(*(short *)((t14 + 0x2))), 0.0f, ((((struct o23C_float *)(a4))->v)));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((t14 + 0x4));
        if ((*(short *)((t14 + 0x10))) != 0) {
            nlRotateAY((unsigned short)(*(short *)((t14 + 0x10))));
        }
        FUN_0c0c475c((unsigned short)(*(short *)((t14 + 0x2))), u13);
        nlPopMatrix(0x1);
        FUN_0c0cacde((unsigned short)(*(short *)((t14 + 0x2))), 0.0f, (-((((struct o23C_float *)(a4))->v))));
        t14 = (t14 + 0x14);
    }
    FUN_0c0cacde(0x788, 0.0f, (u5 + u1));
    FUN_0c0cacde(0xFE7, 0.0f, (u5 + u1));
    return (FUN_0c0cacde(0xFE9, 0.0f, (u5 + u1)));
}

int FUN_0c0a83f2(void)
{
    int stk[4];

    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x4))) & 0x100) != 0) {
        FUN_0c0e2400();
        FUN_0c0c45d0();
    } else {
        FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
        if (((((struct o20_int *)0xC23EDC0)->v)) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), ((((struct o0_int *)0xC23EDC0)->v)), ((((struct o10_int *)0xC23EDC0)->v)));
        }
        if (((((struct o24_int *)0xC23EDC0)->v)) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), ((((struct o4_int *)0xC23EDC0)->v)), ((((struct o14_int *)0xC23EDC0)->v)));
        }
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bf940();
    }
    return FUN_0c0a8362();
}

int FUN_0c0b145c(int a4, float f4, float f5)
{
    int t3;
    int t5;
    int t6;
    int t7;
    float u8;
    float u9;
    float u10;
    int t11;
    int t24;
    int t4;
    int t12;
    int t15;
    int t16;
    int t19;
    float u20;
    float u21;
    float u22;
    int stk[20];

    t7 = *(int *)(((a4 << 2) + 0xC2024E0));
    if (t7 != 0) {
        *(float *)(((int)stk + 8)) = (float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x0)));
        *(float *)(((int)stk + 12)) = (float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x2)));
        *(float *)(((int)stk + 16)) = 0.00109999999f;
        *(float *)(((int)stk + 20)) = 0.599999964f;
        *(float *)(((int)stk + 24)) = 0.599999964f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        *(float *)(((int)stk + 40)) = 1.0f;
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        *(unsigned int *)(((int)stk + 56)) = 0x1000;
        *(float *)(((int)stk + 48)) = f4;
        *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
        t3 = 0xC0B14FC;
        t5 = 0x1000;
        t6 = (a4 << 2);
        u8 = 0.00109999999f;
        u9 = f4;
        u10 = 1.0f;
        for (;;) {
            t11 = *(signed char *)((t7 + 0x0));
            t7 = (t7 + 0x1);
            if ((signed char)t11 == 0) {
                break;
            }
            t4 = (signed char)t11;
            t3 = t4;
            if ((t3 != 32) && ((t4 != 0) && (t12 = (t3 == 32), t3 = t4, t3 != 32))) {
                t3 = (signed char)t11;
                t3 = (t3 << 1);
                *(unsigned int *)(((int)stk + 4)) = (*(short *)((0xC1121DC + t3)));
                t3 = (FUN_0c0c0340(((int)stk + 4)));
            } else {
                t15 = t4;
                t16 = t5;
                t19 = t6;
                u20 = u8;
                u21 = u9;
                u22 = u10;
            }
            u8 = u20;
            u9 = u21;
            u10 = u22;
            t3 = 0x4;
            t4 = t15;
            t5 = t16;
            t6 = t19;
            u8 = (*(float *)((((int)stk + 4) + t3)));
            t3 = 0x4;
            u8 = (u8 + 11.0f);
            *(float *)((((int)stk + 4) + t3)) = u8;
        }
        t24 = t3;
    } else {
        t24 = 0xC2024E0;
    }
    return t24;
}


void FUN_0c01632c(int a4, int a5, int a6, int a7)
{
    int t2;
    int stk[3];

    if ((*(int *)0xC23EAFC) != 0) {
        t2 = *(int *)0xC2498F4;
        if ((0xC & t2) != 0) {
            FUN_0c0cc3f8(0x828A9, a5, a6, a7);
        } else {
            if ((0xF0F0 & t2) != 0) {
                FUN_0c0cc3f8(0x29A9, a5, a6, a7);
            } else {
                if ((t2 & 0x2) != 0) {
                    FUN_0c0cc3f8(0x28A9, a5, a6, a7);
                }
            }
        }
    }
    *(unsigned int *)0xC23EAFC = 0x1;
}


int FUN_0c031d18(int a4)
{
    int t8;
    int t31;
    int t1;

    if (((((((struct o534_int *)(a4))->v)) & 2) != 0) && (t1 = (((struct oCC_int *)(a4))->v), (int)t1 >= 0)) {
        (((struct oD0_uint *)((*(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v) = 0xFFFFFFFF;
    }
    t8 = (((struct o2F4_int *)(a4))->v);
    if ((t8 & 0xFFF0) != 0) {
        if ((t8 & 0xFFF0) != 0x100) {
            if ((t8 & 0xFFF0) != 0x200) {
                FUN_0c0355f8(a4);
                (((struct o4C4_uint *)(a4))->v) = 0x0;
                (((struct o4CC_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
                FUN_0c0353e4(a4);
                FUN_0c035402();
                (((struct o4C4_uint *)(a4))->v) = 0x4;
                (((struct o4CC_uint *)(a4))->v) = 0x1;
            }
        } else {
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
            (((struct o4C4_uint *)(a4))->v) = 0x0;
            (((struct o4CC_uint *)(a4))->v) = 0x0;
        }
    } else {
        FUN_0c0353e4(a4);
        FUN_0c035402();
        if ((int)((((struct o2A0_int *)(a4))->v)) <= (int)0x1) {
            (((struct o2D4_uint *)(a4))->v) = 0x3;
        }
        (((struct o4C4_uint *)(a4))->v) = 0x0;
        (((struct o4CC_uint *)(a4))->v) = 0x0;
    }
    (((struct o534_uint *)(a4))->v) = 0x0;
    (((struct o1EC_uint *)(a4))->v) = 0xFFC;
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    (((struct o55C_uint *)(a4))->v) = 0x0;
    (((struct oD8_uint *)(a4))->v) = 0x0;
    (((struct o1BC_uint *)(a4))->v) = 0x0;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    t31 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o4D0_uint *)(a4))->v) = 0x1;
        t31 = 0x4D0;
    }
    return t31;
}

float FUN_0c036e18(int a4, int a5, int a6, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u8;
    float u9;
    int stk[19];
    float s1;

    u0 = *(float *)0xC037064;
    u1 = *(float *)((a4 + 0x4));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x8));
    u6 = *(float *)((a4 + 0x8));
    u8 = ((u1 - u2) * (u1 - u2));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u9 = u8;
    u9 = u9 + (u6 - u5) * (u6 - u5);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0)))), ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4)))), ((*(float *)((a4 + 0x8))) - u5));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    s1 = _builtin_sqrtf(u9);
    *(float *)(((int)stk + 32)) = ((u0 * s1) / f4);
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(float *)((a6 + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x0))) / f4);
    *(float *)((a6 + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x4))) / f4);
    *(float *)((a6 + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x8))) / f4);
    return s1;
}



int FUN_0c068424(void)
{
    int t8;
    int t27;
    int t28;
    int stk[11];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FA2B8); }
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c0845f0(0x1);
    FUN_0c08476e(((((struct o8_float *)0xC06854C)->v)), ((((struct o4_float *)0xC06854C)->v)), ((((struct o0_float *)0xC06854C)->v)));
    t8 = FUN_0c0e19aa(0xC068508, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t8);
    (((struct o78_uint *)(t8))->v) = 0x0;
    (((struct o48_float *)(t8))->v) = ((((struct o20_float *)0xC06854C)->v));
    (((struct o4C_float *)(t8))->v) = ((((struct o24_float *)0xC06854C)->v));
    (((struct o50_float *)(t8))->v) = ((((struct o28_float *)0xC06854C)->v));
    (((struct o60_ushort *)(t8))->v) = 0xFFFF9100;
    (((struct o62_ushort *)(t8))->v) = 0xFFFF9A00;
    FUN_0c084610(0x0, 0x2);
    FUN_0c0845f8(0x0, 0x1);
    FUN_0c0846de(0x0, 0.0f, ((((struct o48_float *)(t8))->v)), ((((struct o4C_float *)(t8))->v)), ((((struct o50_float *)(t8))->v)));
    FUN_0c0dc5a0();
    nlRotateAY(((((struct o62_short *)(t8))->v)));
    nlRotateAX(((((struct o60_short *)(t8))->v)));
    FUN_0c0db4d0(((int)stk + 4), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    FUN_0c08467c(0x0, (((int)stk + 4) + 0xC));
    t27 = 0x1;
    for (;;) {
        t28 = FUN_0c0845f8(t27, 0x0);
        t27 = (t27 + 0x1);
        if ((int)t27 >= (int)0x10) {
            break;
        }
    }
    return t28;
}


int FUN_0c0ddd20(float f4, float f5, float f6, float f7)
{
    float u7;
    float u8;
    float u9;

    *(float *)0xC948578 = f4;
    *(float *)0xC94857C = f5;
    *(float *)0xC948570 = f6;
    *(float *)0xC948574 = f7;
    *(float *)0xC20CE40 = f5;
    *(float *)0xC20CE38 = f7;
    if ((*(short *)0xC948282) != 0) {
        *(float *)0xC20CE3C = (f4 * (1.0f + 1.0f));
        *(float *)0xC20CE34 = (f6 * (1.0f + 1.0f));
    } else {
        *(float *)0xC20CE3C = f4;
        *(float *)0xC20CE34 = f6;
    }
    *(float *)0xC948568 = ((*(float *)0xC20CE34) * (*(float *)0xC20CE20));
    u7 = *(float *)0xC20CE38;
    u8 = *(float *)0xC20CE24;
    *(float *)0xC94856C = (u7 * u8);
    u9 = *(float *)0xC948568;
    if (u9 > (u7 * u8)) {
        *(float *)0xC20CE28 = u9;
    } else {
        *(float *)0xC20CE28 = (u7 * u8);
    }
    nlMakeProjConvMat(0xC9484E8);
    if ((*(int *)0xC943EA4) == 4) {
        return kmSetPixelClipping((int)f4, (int)f5, (int)(f4 + f6), (int)(f5 + f7));
    }
    return kmSetPixelClipping((int)f4, (int)f5, (int)((f4 + f6) + (-1.0f)), (int)((f5 + f7) + (-1.0f)));
}

int kmiCopyToFrameBuffer(int a4, int a5, int a6)
{
    int t2;
    int stk[11];

    if (((a4 & 0x1F) == 0) && (((a5 & 0x1F) == 0) && ((_builtin_get_imask()) == 0))) {
        kmiPurgeMemory(a5, a6);
        if ((0xFFFFFFE0 & a6) != 0) {
            for (;;) {
                t2 = kmiDMAtoTARequest((0x11000000 + a4), a5, (0xFFFFFFE0 & a6), 0x18, ((int)stk + 8));
                if (t2 != 0x100) {
                    break;
                }
            }
            *(unsigned int *)0xC952728 = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        } else {
            *(unsigned int *)0xC952728 = 0x0;
        }
        if ((a6 & 0x1F) != 0) {
            FUN_0c22fa7e((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
        }
        if ((*(int *)0xC95272C) == 1) {
            kmiWaitForFinishDMA((*(int *)0xC952728));
        }
    } else {
        FUN_0c22fa7e((0xA4000000 + a4), a5, a6);
    }
    return 0x1;
}


int FUN_0c02ec56(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t1;
    int t2;
    int t3;
    int t30;
    int t19;

    if (((((struct o330_int *)(a4))->v)) != 0) {
        (((struct o4F0_uint *)(a4))->v) = 0x19;
        (((struct o5CC_uint *)(a4))->v) = 0x0;
        (((struct o44C_uint *)(a4))->v) = 0x1;
        (((struct o508_uint *)(a4))->v) = 0x0;
        (((struct o4F4_uint *)(a4))->v) = 0x13;
        t30 = 0x4F4;
    } else {
        (((struct o5CC_uint *)(a4))->v) = 0x0;
        (((struct o44C_uint *)(a4))->v) = 0x0;
        t1 = FUN_0c02eaee(a4);
        if ((int)t1 > 0) {
            t2 = *(int *)(((t1 << 2) + 0xC2475D4));
            (((struct o558_uint *)(a4))->v) = t1;
            (((struct o508_uint *)(a4))->v) = 0x1;
            (((struct o514_uint *)(a4))->v) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t2 + 0x30)); }
            (((struct o4F0_uint *)(a4))->v) = 0x18;
            (((struct o4F4_uint *)(a4))->v) = 0x17;
            t30 = 0x4F4;
        } else {
            (((struct o4F0_uint *)(a4))->v) = 0x18;
            (((struct o558_uint *)(a4))->v) = 0x0;
            (((struct o508_uint *)(a4))->v) = 0x0;
            t3 = (((struct o4D4_int *)(a4))->v);
            (((struct o4D4_uint *)(a4))->v) = (t3 - 1);
            if ((int)(t3 - 1) <= 0) {
                if ((int)((((struct o54C_int *)(a4))->v)) < (int)((((struct o528_int *)(a4))->v))) {
                    if (((((struct o4F4_int *)(a4))->v)) != 17) {
                        (((struct o4FC_uint *)(a4))->v) = 0x1;
                    }
                    t19 = 0x11;
                } else {
                    if (((((struct o4F4_int *)(a4))->v)) != 18) {
                        (((struct o4FC_uint *)(a4))->v) = 0x1;
                    }
                    t19 = 0x12;
                }
                (((struct o4F4_uint *)(a4))->v) = t19;
                (((struct o4D4_uint *)(a4))->v) = 0x14;
            }
            t30 = 0x4D4;
        }
    }
    return t30;
}

int FUN_0c031bf8(int a4)
{
    int t1;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u15;
    int t30;
    int stk[11];

    t1 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
    FUN_0c053cf0(t1, 0x1);
    FUN_0c053d60(a4, 0x1);
    FUN_0c0a68ec(((int)stk + 4), (((((struct o30_float *)(a4))->v)) - ((((struct o30_float *)(t1))->v))), (((((struct o38_float *)(a4))->v)) - ((((struct o38_float *)(t1))->v))));
    u9 = (((struct o30_float *)(a4))->v);
    u10 = (((struct o30_float *)(t1))->v);
    u11 = (((struct o38_float *)(a4))->v);
    u12 = (((struct o38_float *)(t1))->v);
    u13 = (((struct o550_float *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    u15 = ((u11 - u12) * (u11 - u12));
    u15 = u15 + (u9 - u10) * (u9 - u10);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x8), 0.0f, 0.0f, ((_builtin_sqrtf(u15) - u13) * (*(float *)0xC031D10)));
    (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    (((struct o50_float *)(t1))->v) = (((((struct o50_float *)(t1))->v)) + ((((struct o10_float *)(((int)stk + 4)))->v)));
    if (1.0f > (_builtin_sqrtf(u15) - u13)) {
        (((struct o210_uint *)(a4))->v) = 0x3E;
        (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        (((struct o50_float *)(t1))->v) = (((((struct o50_float *)(t1))->v)) + ((((struct o10_float *)(((int)stk + 4)))->v)));
        FUN_0c053cf0(t1, 0x0);
        t30 = (FUN_0c053d60(a4, 0x0));
    } else {
        (((struct o2B4_uint *)(a4))->v) = 0x0;
        (((struct o2B4_uint *)(t1))->v) = 0x0;
        t30 = 0x2B4;
    }
    return t30;
}

int FUN_0c0e282a(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t17;
    int t27;

    t0 = 0xC52315C;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t4 = (t4 + 0x1);
        t0 = ((*(int *)((t0 + 0x8))) << 2);
        t0 = (t0 + 0xC52315C);
        t6 = *(int *)((t0 + 0x0));
        t2 = (t2 - t6);
        if ((int)t3 > (int)t6) {
            t3 = (*(int *)((t0 + 0x0)));
            t1 = t4;
        }
        if ((*(int *)((t0 + 0x8))) == 0) {
            break;
        }
    }
    FUN_0c0db0a0(a4, a5);
    nlPrintf(0xC1EA9D4, ((*(int *)0xC94C7A0)));
    nlPrintf(0xC1EA9E8, ((*(int *)0xC94C79C)));
    t17 = *(int *)0xC94C7F0;
    if (t2 == t17) {
        nlPrintf(0xC1EA9FC, (t17 << 2));
    } else {
        nlPrintf(0xC1EAA10, (t2 << 2), (t17 << 2));
    }
    nlPrintf(0xC1EAA20, (-(t3 << 2)));
    nlPrintf(0xC1EAA34, (-((*(int *)((0xC52315C + ((*(int *)0xC523164) << 2)))) << 2)));
    t27 = *(int *)0xC94C7EC;
    if (t4 == t27) {
        nlPrintf(0xC1EAA48, (t27));
    } else {
        nlPrintf(0xC1EAA10, (t4), (t27));
    }
    return (nlPrintf(0xC1EAA5C, (t1)));
}

int FUN_0c0306bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t7;
    int t9;
    int t27;
    int t28;
    int t29;
    int t37;
    int t69;
    int t73;
    int stk[4];

    t0 = (((struct o4E8_int *)(a4))->v);
    if (t0 != 2) {
        if (t0 != 1) {
            t73 = t0;
            if (t0 != 0) {
            } else {
                t7 = (((struct o2EC_int *)(a4))->v);
                t73 = t7;
                if ((t7 & 12) != 0) {
                    t9 = (((struct o500_int *)(a4))->v);
                    if (t9 != 7) {
                        if (t9 != 11) {
                        } else {
                            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0xC000);
                        }
                    } else {
                        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x4000);
                    }
                    t73 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
                }
            }
        } else {
            t27 = FUN_0c02f6f4(a4, a5, a6, a7, f4, f5, f6);
            t73 = t27;
            if (t27 == 0) {
                t28 = FUN_0c034fbc(a4, 0x400, 0x1, 0x0);
                if (t28 != 0) {
                    t29 = (((struct o3AC_int *)(a4))->v);
                    (((struct o3AC_uint *)(a4))->v) = (t29 + 0x1);
                    if ((int)(t29 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
                        t73 = 0x54C;
                        if ((int)((((struct o54C_int *)(a4))->v)) >= (int)((((struct o528_int *)(a4))->v))) {
                            t37 = FUN_0c034314(a4, (*(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0))), ((int)stk + 4));
                            t73 = t37;
                            if (t37 != 0) {
                                t73 = (((int (*)(int))(FUN_0c02a19a))(a4));
                            }
                        }
                    } else {
                        t73 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                } else {
                    t73 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
            }
        }
    } else {
        t69 = FUN_0c02fc26(a4);
        t73 = t69;
        if (t69 == 0) {
            (((struct o508_uint *)(a4))->v) = 0x0;
            t73 = (((int (*)(int))(FUN_0c02a19a))(a4));
        }
    }
    return t73;
}

int FUN_0c05a9ce(int a4, int a5)
{
    int t1;
    int t8;
    int t17;
    int t18;
    int t19;
    int t22;
    int t20;

    t1 = FUN_0c0e19aa(0xC05AC0C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t8 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t8 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t1))->v) = t8;
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t1))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o23C_uint *)(t1))->v) = 0x1;
    t17 = (((struct oBC_int *)(a4))->v);
    t18 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t17 << 1) + t17) << 2) << 2) << 2) + 0xC23F268) + (((t18 << 1) + t18) << 2))); }
    t19 = (((struct oBC_int *)(a4))->v);
    t22 = t19;
    if ((int)t19 < (int)0x2) {
        t20 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((((t20 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t20 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t22 = 0xC24754C;
    }
    return t22;
}


int adxf_read_sj32(int a4, int a5, int a6)
{
    int t19;
    int t20;
    int t21;
    int t26;
    int t59;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
        t59 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
            t59 = 0xFFFFFFFD;
        } else {
            if ((*(int *)(((int)stk + 4))) == 0) {
                ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
                t59 = 0xFFFFFFFD;
            } else {
                t59 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
                        t59 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock(a4, a5);
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t19 = *(int *)((a4 + 0x10));
                        t20 = *(int *)((a4 + 0x18));
                        t21 = (t19 - t20);
                        if ((int)a5 < (int)(t19 - t20)) {
                            t21 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t21;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t26 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)(((int)stk + 4))));
                        t59 = 0xFFFFFFFF;
                        if (t26 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t26;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t59 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                    }
                }
            }
        }
    }
    return t59;
}


int FUN_0c0af9e8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t8;
    int t9;
    int t10;
    int t15;
    int t13;
    int t14;
    int t29;
    int t30;
    int t35;
    int t33;
    int t34;
    int t21;
    int t40;

    t0 = *(int *)0xC23A1A8;
    if ((0x1 & t0) != 0) {
        if ((t0 & 0x4) != 0) {
            FUN_0c0d0648();
        }
        if ((int)(*(int *)0xC24FA38) >= (int)0x23A) {
            t8 = *(int *)0xC23A1A8;
            *(unsigned int *)0xC23A1A8 = (t8 | 0x10);
            return (t8 | 0x10);
        }
        t9 = *(int *)((a4 + 0x30));
        t10 = *(int *)0xC24FA38;
        if (t9 != 0) {
            if (t9 != 1) {
                t21 = t9;
            } else {
                t15 = t9;
                if (t10 == 0xFB4) {
                    *(unsigned int *)((a4 + 0x30)) = 0x2;
                    t13 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECE4));
                    t14 = FUN_0c0e14c4(0x0);
                    *(unsigned int *)0xC23ECE4 = t14;
                    t15 = t14;
                }
                t21 = t15;
            }
            return t21;
        }
        if (t10 == 0xF78) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            FUN_0c084ab8((*(int *)0xC23ED50));
            return FUN_0c084e08(0x1E, 0x0);
        }
        return t9;
    }
    t29 = *(int *)((a4 + 0x30));
    t30 = *(int *)0xC24FA38;
    if (t29 != 0) {
        if (t29 != 1) {
            t40 = t29;
        } else {
            t35 = t29;
            if (t30 == 0xFB4) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                t33 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))((*(int *)0xC23ECE4), a5, a6, a7);
                t34 = FUN_0c0e14c4(0x0);
                *(unsigned int *)0xC23ECE4 = t34;
                t35 = t34;
            }
            t40 = t35;
        }
        return t40;
    }
    if (t30 == 0xF78) {
        *(unsigned int *)((a4 + 0x30)) = 0x1;
        FUN_0c084ab8((*(int *)0xC23ED50));
        return FUN_0c084e08(0x1E, 0x0);
    }
    return t29;
}

