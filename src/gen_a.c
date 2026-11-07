/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c021fee(int, int);
int FUN_0c02a19a(int);
int FUN_0c02eaee(int);
int FUN_0c036806(int, int, int, int);
int FUN_0c082f04(int, int, float);
int FUN_0c083074(int, int, int, int, int);
int FUN_0c098c2e(int, int, float, float);
int FUN_0c098cfa(int, int, int, int, float, float);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0c4784(int, float);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int nlOuterProduct(int, int, int);
int nlScaleUnitVector(int, int, float);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(int, int);
int _slow_strcpy(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c0f3ccc(int, int, int);
int FUN_0c0f3fe0(int, int);
int FUN_0c229058(int, int, int);
int fmMngNum2Bit(int, int, int);
int FUN_0c232638(int, int, int);
extern float _builtin_sqrtf(float);
int buCalcBackupFileSize(int, int, int);
int buIsFormat(int);
int buMakeBackupFileImage(int, int);
int check_isopen(void);
int direntry(int, int);
int fmcalccrc(int, int);
int get_vmstime(int, int);
int kmiReadRegister(int);
int memset(int, int, int);
int search_dir(int, int, int);
int thunk_FUN_0c0546fe(int, int, int, int);
int thunk_FUN_0c22907e(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c01536e(int a4, int a5, int a6, int a7);
int FUN_0c02ec56(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
float FUN_0c038ed4(int a4, float f4);
int FUN_0c0832f0(int a4);
int FUN_0c08d90a(int a4, float f4);
int FUN_0c08f638(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0f3e20(int a4, int a5, int a6);
int fmMngAddData(int a4);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int FUN_0c02a0a8(int a4);
int FUN_0c02ee08(int a4);
int FUN_0c034924(int a4, int a5);
int FUN_0c06ccb8(int a4);
int FUN_0c0b2126(int a4);
int FUN_0c0b4404(int a4);
int FUN_0c0c6798(int a4, int a5, int a6);
float FUN_0c0caf6a(int a4, int a5, int a6, float f4);
int FUN_0c0cd56c(int a4, float f4, float f5);
int FUN_0c0cf4c4(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0d36e0(int a4, float f4);
int vmsfs_findnext(int, int);
int vmsfs_fgettime(int a4, int a5, int a6);
int syG2DmaReset(int a4);
int FUN_0c053700(int a4);
int FUN_0c09363c(int a4, int a5);
int FUN_0c0a155c(int a4, int a5, int a6, int a7);
int FUN_0c0b1542(int a4, float f4);
int FUN_0c0dbbf0(int a4, int a5, int a6);
int kmGetCurrentScanline(int a4);
int FUN_0c217a50(void);
int FUN_0c0220dc(int a4, int a5, int a6, int a7);
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_int { char p[0x1D8]; int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o24C_float { char p[0x24C]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o26C_float { char p[0x26C]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o498_int { char p[0x498]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_int { char p[0x500]; int v; };
struct o52C_int { char p[0x52C]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };





float FUN_0c038ed4(int a4, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u5;
    float u8;
    int t10;
    float t18;
    float u21;
    float u25;
    int stk[13];
    float R1004;

    R1004 = *(float *)((int)stk + 4);

    R1004 = f4;
    u0 = (((struct o0_float *)0xC039010)->v);
    u1 = (((struct o1D4_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC039010)->v);
    u3 = (u1 * u0);
    if ((u1 * u0) > u2) {
        u3 = u2;
    }
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x10)))->v) = 0.0f;
    u5 = (((struct o8_float *)0xC039010)->v);
    u8 = ((float)((((struct o1CC_int *)(a4))->v)) * ((((struct oC_float *)0xC039010)->v)));
    u8 = u8 + u5 * u3;
    (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = u8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = (((((struct o1D8_int *)(a4))->v)) >> 1);
    t10 = (((struct o500_int *)(a4))->v);
    if ((t10 != 14) && (t10 != 15)) {
        *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = ((((struct o1DC_int *)(a4))->v));
    } else {
        *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = ((((struct o52C_int *)(a4))->v));
    }
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), (0x258 + a4));
    t18 = FUN_0c0da410(((((struct o1D8_int *)(a4))->v)));
    u21 = t18;
    if (0.0f > t18) {
        u21 = ((((struct o18_float *)0xC039010)->v));
    }
    u25 = u5;
    u25 = u25 + u3 * u21;
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (*(float *)(((0x3E8 + a4) + 0x0))));
    (((struct o26C_float *)(a4))->v) = (u25 * (R1004));
    return u3;
}

int FUN_0c0832f0(int a4)
{
    int t1;
    int t26;
    int stk[12];

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC247CB8) << 2) + 0xC246FF0));
    *(float *)0xC2009A8 = (*(float *)0xC247CC0);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY((*(short *)0xC247CCA));
    nlRotateAX((*(short *)0xC247CC8));
    FUN_0c0db470(0xC2009A0, ((int)stk + 16));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x3, (*(float *)((t1 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t1 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t1 + 0x234))));
    FUN_0c083074(a4, 0x3, (0x22C + t1), 0x3, 0x0);
    FUN_0c083074(a4, 0x4, (0x230 + t1), 0x3, 0x0);
    FUN_0c083074(a4, 0x5, (0x234 + t1), 0x3, 0x0);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 16))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 20))));
    FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 24))));
    t26 = *(short *)0xC247CBE;
    *(unsigned short *)0xC10290C = t26;
    return t26;
}

int FUN_0c08d90a(int a4, float f4)
{
    int t1;
    float u4;
    float u6;
    float u8;
    int t14;

    t1 = FUN_0c0e19aa(0xC08DA10, 0x7C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o64_float *)(t1))->v) = f4;
    u4 = 0.00999999978f;
    u4 = u4 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    (((struct o40_float *)(t1))->v) = u4;
    u6 = 0.00999999978f;
    u6 = u6 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    (((struct o44_float *)(t1))->v) = u6;
    u8 = 0.00999999978f;
    u8 = u8 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    (((struct o48_float *)(t1))->v) = u8;
    (((struct o74_uint *)(t1))->v) = (unsigned short)(*(short *)((0xC10ABD0 + (((FUN_0c0da2e0()) & 0x1) << 1))));
    (((struct o78_uint *)(t1))->v) = 0x3;
    *(unsigned int *)((t1 + 0x30)) = (*(int *)0xC248DC0);
    *(unsigned int *)0xC248DC0 = t1;
    FUN_0c0dc5a0();
    FUN_0c0dcca0(a4);
    t14 = FUN_0c0da2e0();
    nlRotateAY((t14 << 1));
    (((struct o3C_float *)(t1))->v) = (((f4 * (float)(FUN_0c0da2e0()))) * 3.05185094e-05f);
    FUN_0c0db470((t1 + 0x34), (t1 + 0x34));
    return nlPopMatrix(0x1);
}

int FUN_0c08f638(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08F844, 0x70, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)((t1 + 0x34)) = ((((struct o498_int *)(a4))->v));
    *(unsigned int *)((t1 + 0x38)) = 0x0;
    (((struct o3C_float *)(t1))->v) = (((f4 * f6) / (float)a6) / (float)a6);
    (((struct o44_float *)(t1))->v) = (((f4 * f7) / (float)a6) / (float)a6);
    (((struct o40_float *)(t1))->v) = ((((f8 / (float)a6) / (float)a6) / (float)a6) / (float)a6);
    (((struct o48_float *)(t1))->v) = ((f5 * f6) / (float)a6);
    (((struct o4C_float *)(t1))->v) = ((f5 * f7) / (float)a6);
    (((struct o50_float *)(t1))->v) = (((f8 / (float)a7) / (float)a7) / (float)a7);
    (((struct o60_uint *)(t1))->v) = 0x0;
    *(unsigned int *)(((t1 + 0x64) + 0x0)) = a6;
    (((struct o68_uint *)(t1))->v) = a7;
    (((struct o6C_uint *)(t1))->v) = a5;
    return 0x6C;
}



int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t4;
    int t14;
    int t21;
    int stk[9];

    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    *(unsigned char *)((a10 + 0x0)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)((((struct o2A_short *)(a4))->v));
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x8)));
    t4 = *(signed char *)(((int)stk + 4));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if (((unsigned char)t4 == 2) || ((unsigned char)t4 == 3)) {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                *(unsigned int *)((a12 + 0x0)) = ((*(int *)(((a4 + 0xC) + 0x0))) << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            *(unsigned int *)((a12 + 0x0)) = (*(int *)(((a4 + 0xC) + 0x0)));
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t14 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t14 + (unsigned int)0x0)) + ((((int)0x0 > (int)t14)) ? 1u : 0u))) >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t21 = *(int *)(((a4 + 0xC) + 0x0));
    *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t21 + (unsigned int)0x0)) + ((((int)0x0 > (int)t21)) ? 1u : 0u))) >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}

int FUN_0c02a0a8(int a4)
{
    float u5;
    float u6;
    float u7;
    float u8;
    float u10;
    int t35;
    int t30;
    int stk[11];

    FUN_0c0a68ec(((int)stk + 4), (((((struct o24C_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o254_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    u5 = (((struct o30_float *)(a4))->v);
    u6 = (((struct o24C_float *)(a4))->v);
    u7 = (((struct o38_float *)(a4))->v);
    u8 = (((struct o254_float *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
    u10 = ((u8 - u7) * (u8 - u7));
    u10 = u10 + (u6 - u5) * (u6 - u5);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC), 0.0f, 0.0f, (_builtin_sqrtf(u10) * 0.5f));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)(((((int)stk + 4) + 0x14) + 0x0))));
    t35 = (thunk_FUN_0c0546fe(a4, ((((struct o52C_int *)(a4))->v)), 0x80, 0x1));
    if (1.0f > _builtin_sqrtf(u10)) {
        t30 = 0x52C;
        if (((((struct o6E_short *)(a4))->v)) == ((((struct o52C_int *)(a4))->v))) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
            t30 = (FUN_0c02a19a(a4));
        }
        t35 = t30;
    }
    return t35;
}






int FUN_0c0c6798(int a4, int a5, int a6)
{
    int t0;
    float u2;

    t0 = FUN_0c0e1830(0xC0C6894, 0x74);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = 0x209E;
    u2 = 320.0f;
    u2 = u2 + 24.0f * ((float)a4 - (((float)a5 + (-1.0f)) / (1.0f + 1.0f)));
    (((struct o34_float *)(t0))->v) = u2;
    (((struct o38_float *)(t0))->v) = 140.0f;
    (((struct o3C_float *)(t0))->v) = 0.00139999995f;
    (((struct o40_float *)(t0))->v) = 0.699999988f;
    (((struct o44_float *)(t0))->v) = 0.699999988f;
    (((struct o48_float *)(t0))->v) = 0.0f;
    (((struct o4C_float *)(t0))->v) = 0.0f;
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o58_uint *)(t0))->v) = 0x0;
    (((struct o5C_float *)(t0))->v) = 0.399999976f;
    (((struct o60_uint *)(t0))->v) = 0xFFFFFFFF;
    (((struct o64_uint *)(t0))->v) = 0xA;
    (((struct o6A_ushort *)(t0))->v) = (int)((float)(((a4 << 2) + a4) << 1) + 323.999969f);
    (((struct o6E_ushort *)(t0))->v) = (a5 - a4);
    (((struct o70_uint *)(t0))->v) = a6;
    return 0x70;
}


int FUN_0c0cd56c(int a4, float f4, float f5)
{
    float u14;
    int stk[10];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    nlSubVector3op((((int)stk + 4) + 0x10), a4, (a4 + 0xC));
    nlScaleUnitVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10), (*(float *)(((int)stk + 12))));
    nlAddVector((a4 + 0x18), (((int)stk + 4) + 0x10));
    FUN_0c0dce80((a4 + 0x18), (a4 + 0x18), (*(float *)0xC0CD6C4));
    nlAddVector((a4 + 0xC), (a4 + 0x18));
    (((struct o10_float *)(a4))->v) = (((((struct o10_float *)(a4))->v)) - (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((((struct o18_float *)(a4))->v)), ((((struct o1C_float *)(a4))->v)), ((((struct o20_float *)(a4))->v)));
    u14 = *(float *)0xC0CD6D0;
    (((struct o24_ushort *)(a4))->v) = (int)((float)((((struct o24_short *)(a4))->v)) + ((float)((*(int *)(((int)stk + 4))) - (*(short *)(((0x24 + a4) + 0x0)))) * u14));
    (((struct o26_ushort *)(a4))->v) = (int)((float)((((struct o26_short *)(a4))->v)) + ((float)((*(int *)(((int)stk + 8))) - (*(short *)(((0x26 + a4) + 0x0)))) * u14));
    return 0x26;
}

int FUN_0c0cf4c4(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0CF58A, 0x98);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = 0xC1E9EEC;
    (((struct o3C_float *)(t0))->v) = (f4 + 0.0f);
    (((struct o40_float *)(t0))->v) = (f5 + 0.0f);
    (((struct o44_uint *)(t0))->v) = (int)(f6 * (*(float *)0xC0CF5D0));
    (((struct o48_uint *)(t0))->v) = (int)(f7 * (*(float *)0xC0CF5D4));
    (((struct o4C_uint *)(t0))->v) = a4;
    (((struct o50_uint *)(t0))->v) = a5;
    (((struct o54_uint *)(t0))->v) = a6;
    (((struct o58_uint *)(t0))->v) = a7;
    (((struct o5C_uint *)(t0))->v) = a8;
    (((struct o6C_float *)(t0))->v) = (*(float *)0xC0CF5D8);
    (((struct o88_uint *)(t0))->v) = 0x0;
    (((struct o80_float *)(t0))->v) = 1.0f;
    (((struct o84_float *)(t0))->v) = 1.0f;
    (((struct o70_float *)(t0))->v) = f6;
    (((struct o74_float *)(t0))->v) = f7;
    (((struct o8C_float *)(t0))->v) = f8;
    (((struct o94_uint *)(t0))->v) = 0x1000;
    (((struct o90_uint *)(t0))->v) = 0xFFFFFFFF;
    return 0x90;
}

int FUN_0c0d36e0(int a4, float f4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t7;
    int t11;
    int t15;

    t0 = *(int *)0xC943404;
    *(float *)((a4 + 0x3C)) = ((*(float *)0xC2475BC) + 65.0f);
    t2 = 0xC0D37C8;
    t3 = 0x0;
    for (;;) {
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((a4 + 0x30)))) {
                break;
            }
            t7 = (((((t4 << 2) << 1) + t4) << 1) + 0x2C);
            if (t3 == 0) {
                t7 = (0xFFFFFFD4 - ((((t4 << 2) << 1) + t4) << 1));
            }
            t2 = 0x38;
            *(float *)((a4 + t2)) = ((float)t7 + 320.0f);
            t2 = t0;
            if ((int)(*(int *)((((t2 + 0x44) + (t3 << 2)) + 0x0))) > (int)t4) {
                t2 = 0x60;
                *(float *)((a4 + t2)) = 1.0f;
                t11 = 0x2050;
                if (((*(int *)0xC23A258) & 0x1) == 0) {
                    t11 = 0x205A;
                }
                t15 = t11;
            } else {
                t2 = 0x60;
                *(float *)((a4 + t2)) = 0.399999976f;
                t15 = 0x2050;
            }
            *(unsigned int *)((a4 + 0x34)) = t15;
            t2 = (FUN_0c0c0340((a4 + 0x34)));
            t4 = (t4 + 0x1);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return t2;
}


int vmsfs_fgettime(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int t12;
    int t13;
    int t11;
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if ((*(signed char *)(((a4 * 0x148) + 0xC95676A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC956770))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 4));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x10));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            t12 = (((int)stk + 4) + 0x8);
            t13 = ((direntry(a4, t9)) + 0x10);
            for (;;) {
                if ((unsigned int)t12 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x8)) {
                    break;
                }
                t11 = (*(signed char *)((t13 + 0x0)));
                t13 = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = t11;
                t12 = (t12 + 0x1);
            }
            get_vmstime((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int syG2DmaReset(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t0 * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x0)) = t0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x28)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x2C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x30)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x4)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x8)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0xC)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x10)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x18)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x20)) = 0x0;
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC239F3C) + 0x0)))) + 0x14)) = 0x0;
    return 0x0;
}

int FUN_0c053700(int a4)
{
    int t2;
    int t30;
    int t3;
    int t4;
    int t5;
    int t7;
    int t27;

    t2 = *(int *)((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) + 0xC1A3290));
    t30 = 0xC1A3290;
    if (t2 != 0) {
        t3 = 0xC23ECFC;
        t4 = 0x0;
        t5 = t2;
        for (;;) {
            if (!(((((struct o4_float *)(t5))->v)) > -500.0f)) {
                break;
            }
            t7 = FUN_0c0e5f1c(a4);
            t3 = 0xAC;
            t3 = (t3 + a4);
            t3 = (*(int *)((t3 + 0x0)));
            if (t7 == t3) {
                nlPushMatrix(0x0);
                t3 = 0xC0DCC70;
                FUN_0c0dcc70((*(float *)((t5 + 0x0))), ((((struct o4_float *)(t5))->v)), ((((struct o8_float *)(t5))->v)));
                t3 = 0xC0DC890;
                nlRotateAY((*(short *)((t5 + 0xE))));
                nlRotateAX((*(short *)((t5 + 0xC))));
                nlRotateAZ((*(short *)((t5 + 0x10))));
                t3 = 0xC0DCB80;
                nlScale(1.79999995f, 0.199999988f, 1.79999995f);
                FUN_0c0de000(1.79999995f);
                t3 = 0xC0C4784;
                FUN_0c0c4784(((((struct o78_int *)(a4))->v)), ((((struct o90_float *)(a4))->v)));
                nlPopMatrix(0x1);
            } else {
                t27 = t3;
            }
            t5 = (t5 + 0x14);
            t3 = t27;
            t4 = (t4 + 0x1);
        }
        t30 = 0x4;
    }
    return t30;
}

int FUN_0c09363c(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t49;
    int t6;
    int t40;
    int t7;
    int t8;
    int t9;
    int t32;
    int t11;
    int t24;
    int t13;

    t0 = *(short *)((a5 + 0x6));
    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x4));
    t3 = *(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x1));
    t49 = (unsigned char)t3;
    if ((*(int *)(((0xC0 + a4) + 0x0))) == (unsigned char)t3) {
        t6 = *(short *)((((t1 << 1) + t2) + 0x0));
        t40 = t6;
        if (t6 != -1) {
            t7 = *(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x0));
            t8 = (((struct oBC_int *)(a4))->v);
            t9 = *(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x4));
            t32 = t9;
            if (t9 == 0) {
                t11 = *(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6));
                t24 = t11;
                if (t11 == 0) {
                    t13 = FUN_0c0e19aa(0xC093738, 0xB4, (*(int *)0xC23ECF0));
                    FUN_0c0e19d0(t13);
                    (((struct o88_uint *)(t13))->v) = ((((struct oBC_int *)(a4))->v));
                    (((struct o8C_uint *)(t13))->v) = a4;
                    (((struct o80_uint *)(t13))->v) = (unsigned char)(*(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x0)));
                    (((struct o78_uint *)(t13))->v) = ((((struct o2BC_int *)(a4))->v));
                    *(unsigned short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + a4) + (((((struct o80_int *)(t13))->v)) << 2))));
                    *(unsigned short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6))) + 0x1);
                    *(unsigned int *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x0)) = (*(int *)((t13 + 0x8)));
                    *(unsigned int *)((((((((struct o80_int *)(t13))->v)) << 2) + (0x404 + a4)) + 0x0)) = (*(short *)((((t1 << 1) + t2) + 0x0)));
                    t24 = 0x80;
                }
                t32 = t24;
            }
            t40 = t32;
        }
        t49 = t40;
    }
    return t49;
}

int FUN_0c0a155c(int a4, int a5, int a6, int a7)
{
    float u4;
    int t5;
    float u6;
    float u9;
    int t15;
    int t16;

    if (((a4 - (*(int *)((a5 + 0x0)))) == 8) && ((int)a4 < (int)0x24)) {
        *(unsigned int *)((a5 + 0x0)) = a4;
        *(float *)((a5 + 0x4)) = ((((float)(unsigned char)(FUN_0c0da2e0()) * (*(float *)(((((a6 << 2) << 1) + 0xC10CE40) + 0x4)))) / 255.0f) + (*(float *)(((((a6 << 2) << 1) + 0xC10CE40) + 0x0))));
        u4 = *(float *)(((a6 << 2) + 0xC10CE18));
        t5 = FUN_0c0da2e0();
        u6 = 1.0f;
        if ((t5 & 1) != 0) {
            u6 = (-1.0f);
        }
        u9 = ((float)((unsigned char)(FUN_0c0da2e0()) - 127) / 1024.0f);
        u9 = u9 + u6 * u4;
        *(float *)((a5 + 0x8)) = u9;
    } else {
        t15 = a6;
        t16 = a7;
    }
    if (a7 != 0) {
        return FUN_0c098c2e(a4, (*(int *)((a5 + 0x0))), (*(float *)((a5 + 0x4))), (*(float *)((a5 + 0x8))));
    }
    return FUN_0c098cfa(a4, (*(int *)((a5 + 0x0))), t15, t16, (*(float *)((a5 + 0x4))), (*(float *)((a5 + 0x8))));
}


int FUN_0c0dbbf0(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), a5, (*(int *)(((int)stk + 4))));
    nlOuterProduct((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20));
    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    FUN_0c0dd050((((int)stk + 4) + 0x20));
    FUN_0c0dd050((((int)stk + 4) + 0x14));
    FUN_0c0dd050((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 44)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 88)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 104)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 108)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x2C));
    return (FUN_0c0dcc80((*(int *)(((int)stk + 4)))));
}


int FUN_0c217a50(void)
{
    int t0;
    int t30;
    int t40;
    int t32;
    int t35;
    int t2;
    int t7;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)(((t0 << 2) + 0xC952648))) != 5) && (t2 = *(int *)(((t0 << 2) + 0xC952648)), t2 != -3)) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return t2;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)(((t0 << 2) + 0xC952648)) = 0x7;
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x1) != 1) && ((t7 = (((struct o0_int *)0xC95231C)->v), (t7 & 0x2C) == 32) && (0x1 != 0))) {
        (((struct oC_uint *)0xA05F8044)->v) = (((((struct o30_int *)0xC952600)->v)) + ((((struct o0_int *)0xC952514)->v)));
        (((struct o10_uint *)0xA05F8044)->v) = (((((struct o34_int *)0xC952600)->v)) + ((((struct o4_int *)0xC952514)->v)));
    } else {
        if (((((struct o14_int *)0xC95231C)->v)) != 1) {
            (((struct oC_uint *)0xA05F8044)->v) = ((*(int *)((((t0 & 0x1) << 2) + 0xC952630))) + ((((struct o0_int *)0xC952514)->v)));
            (((struct o10_uint *)0xA05F8044)->v) = ((*(int *)((((t0 & 0x1) << 2) + 0xC952630))) + ((((struct o4_int *)0xC952514)->v)));
        }
    }
    t30 = *(int *)(((t0 << 2) + 0xC952648));
    t40 = t30;
    if (t30 != -3) {
        t32 = (((struct o0_int *)0xC9525A4)->v);
        t35 = t32;
        if (t32 == 1) {
            *(unsigned int *)0xA05F80E8 = ((((struct o0_int *)0xC952600)->v));
            (((struct o0_uint *)0xA05F8044)->v) = ((((struct o20_int *)0xC9525A4)->v));
            (((struct o0_uint *)0xC9525A4)->v) = 0x0;
            t35 = 0xC9525C4;
        }
        t40 = t35;
    }
    return t40;
}

int FUN_0c0f3e20(int a4, int a5, int a6)
{
    int t1;
    int t15;
    int t6;
    int t7;
    int t2;
    int t13;
    int stk[16];

    *(unsigned int *)(((int)stk + 8)) = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t15 = (short)t1;
        if ((unsigned char)(*(signed char *)((a5 + (short)t1))) != 0) {
            memset((((int)stk + 4) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t6 = *(signed char *)(((short)t2 + (*(int *)(((int)stk + 8)))));
                t7 = *(signed char *)(((short)t1 + a5));
                *(unsigned short *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)) + 0x1)));
                *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                FUN_0c0f3fe0((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)), ((int)stk + 4));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t13 = (FUN_0c0e631c(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            } else {
                t13 = (FUN_0c0f3ccc(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            }
            t15 = t13;
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}

float FUN_0c0caf6a(int a4, int a5, int a6, float f4)
{
    int t4;
    float t5;
    float u8;
    float u9;
    float u10;
    float u12;
    float u13;
    float u15;
    float u16;
    float u17;
    int t20;
    float u23;
    int t24;
    float u27;
    int stk[16];
    float R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1004 = f4;
    R1016 = a4;
    R1008 = a5;
    R1012 = a6;
    FUN_0c0db840((((int)stk + 4) + 0x1C));
    FUN_0c0db4d0(0xC20A518, (((int)stk + 4) + 0x10));
    t4 = FUN_0c0d9dc0((*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 20))));
    t5 = FUN_0c0d9e90((-((short)t4 + 0x8000)));
    u8 = *(float *)(((int)stk + 20));
    u9 = ((*(float *)(((int)stk + 28))) * (FUN_0c0da410(((short)t4 + 0x8000))));
    u9 = u9 + t5 * u8;
    u10 = (-u9);
    if (u9 > 0.0f) {
        u10 = u9;
    }
    u12 = *(float *)(((int)stk + 24));
    u13 = u12;
    if (!(u12 > 0.0f)) {
        u13 = (-u12);
    }
    u15 = R1004;
    u16 = *(float *)(((int)stk + 36));
    u17 = 0.0f;
    if (u13 != 0.0f) {
        u17 = (((u16 - u15) * u10) / u13);
    }
    t20 = R1016;
    u23 = (*(float *)(((int)stk + 32)));
    u23 = u23 + u17 * (FUN_0c0d9e90(((short)t4 + 0x8000)));
    *(float *)((t20 + 0x0)) = u23;
    t24 = R1008;
    u27 = (*(float *)(((int)stk + 40)));
    u27 = u27 + u17 * (FUN_0c0da410(((short)t4 + 0x8000)));
    *(float *)((t24 + 0x0)) = u27;
    *(unsigned int *)(((R1012) + 0x0)) = (0x4000 - ((short)t4 + 0x8000));
    return u17;
}



