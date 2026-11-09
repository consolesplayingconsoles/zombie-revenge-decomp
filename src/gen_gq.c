/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
typedef struct { int w[14]; } Stk14;
int ADXF_GetPtinfoSize(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXT_EntryErrFunc(int, int);
int FUN_0c0101dc(int, int, int);
int FUN_0c010a30(void);
int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c02a416(int);
int FUN_0c0321d4(int, int);
int FUN_0c03227c(int);
int FUN_0c033b04(int);
int FUN_0c049c0a(int);
int FUN_0c05a98a(int);
int FUN_0c063098(int);
int FUN_0c082220(void);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c08a220(int, int);
int FUN_0c08d75c(int, int, int);
int FUN_0c090bf0(int);
int FUN_0c09134c(int, int, int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c0340(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c9e86(int);
int FUN_0c0cbbf4(void);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d3f0c(int);
int FUN_0c0d6a64(void);
int FUN_0c0d6e1a(float);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd050(int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e1138(int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6118(void);
int FUN_0c0e6248(void);
int FUN_0c210416(void);
int FUN_0c213470(void);
extern float _builtin_sqrtf(float);
int gdFsInit(void);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c033530(int a4, int a5, int a6, int a7);
void FUN_0c037acc(int a4, float f4);
int FUN_0c029302(int a4);
int FUN_0c0ca538(int a4, int a5, int a6);
int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6);
int FUN_0c09084c(int a4, int a5, int a6);
int FUN_0c017718(int a4, int a5, float f4);
int FUN_0c0b7734(void);
int FUN_0c0cbc28(void);
void FUN_0c06e56e(int a4, int a5);
int FUN_0c0911b8(int a4, int a5);
int FUN_0c090c68(int a4);
int FUN_0c0d41c6(void);
int FUN_0c03242c(int a4, float f4, float f5);
int FUN_0c063160(int a4, int a5, int a6, int a7);
int FUN_0c0d6254(int a4, int a5, int a6);
void FUN_0c0b4404(int a4);
float FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8);
void FUN_0c05f9ee(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o238_int { char p[0x238]; int v; };
struct o23C_float { char p[0x23C]; float v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_int { char p[0x240]; int v; };
struct o244_float { char p[0x244]; float v; };
struct o24C_float { char p[0x24C]; float v; };
struct o24C_int { char p[0x24C]; int v; };
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o264_float { char p[0x264]; float v; };
struct o268_float { char p[0x268]; float v; };
struct o26C_float { char p[0x26C]; float v; };
struct o270_float { char p[0x270]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2B0_float { char p[0x2B0]; float v; };
struct o2B4_float { char p[0x2B4]; float v; };
struct o2B8_float { char p[0x2B8]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3A4_int { char p[0x3A4]; int v; };
struct o3A4_uint { char p[0x3A4]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o420_int { char p[0x420]; int v; };
struct o420_uint { char p[0x420]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o70_short { char p[0x70]; short v; };






void FUN_0c037acc(int a4, float f4)
{
    int t1;
    int t4;
    int t7;
    int t10;
    int t15;
    int t24;
    int t33;
    int stk[10];

    if ((int)((((struct o3DC_int *)(a4))->v)) >= 0) {
        t1 = (((struct o3DC_int *)(a4))->v);
        (((struct o268_float *)(a4))->v) = ((*(float *)(((0x244 + a4) + 0x0))) - (*(float *)((((((t1 << 1) + t1) << 2) + (0x244 + a4)) + 0x0))));
        t4 = (((struct o3DC_int *)(a4))->v);
        (((struct o26C_float *)(a4))->v) = (((((struct o4_float *)((0x244 + a4)))->v)) - ((((struct o4_float *)(((((t4 << 1) + t4) << 2) + (0x244 + a4))))->v)));
        t7 = (((struct o3DC_int *)(a4))->v);
        (((struct o270_float *)(a4))->v) = (((((struct o8_float *)((0x244 + a4)))->v)) - ((((struct o8_float *)(((((t7 << 1) + t7) << 2) + (0x244 + a4))))->v)));
        t10 = (((struct o3DC_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((t10 << 1) + t10) << 2) + (0x370 + a4))); }
    } else {
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        *(float *)(((int)stk + 0)) = 0.0f;
        t15 = 0x0;
        if (((((struct o238_int *)(a4))->v)) != 0) {
            nlAddVector((((int)stk + 0) + 0xC), (0x244 + a4));
            nlAddVector(((int)stk + 0), (0x370 + a4));
            t15 = 0x1;
        }
        t24 = t15;
        if (((((struct o23C_int *)(a4))->v)) != 0) {
            nlAddVector((((int)stk + 0) + 0xC), ((0x244 + a4) + 0xC));
            nlAddVector(((int)stk + 0), ((0x370 + a4) + 0xC));
            t24 = (t15 + 0x1);
        }
        t33 = t24;
        if (((((struct o240_int *)(a4))->v)) != 0) {
            nlAddVector((((int)stk + 0) + 0xC), ((0x244 + a4) + 0x18));
            nlAddVector(((int)stk + 0), ((0x370 + a4) + 0x18));
            t33 = (t24 + 0x1);
        }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / (float)t33);
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) / (float)t33);
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) / (float)t33);
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) / (float)t33);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / (float)t33);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / (float)t33);
        (((struct o268_float *)(a4))->v) = (((((struct o244_float *)(a4))->v)) - (*(float *)(((int)stk + 12))));
        (((struct o26C_float *)(a4))->v) = (((((struct o244_float *)(a4))->v)) - (*(float *)(((int)stk + 16))));
        (((struct o270_float *)(a4))->v) = (((((struct o244_float *)(a4))->v)) - (*(float *)(((int)stk + 20))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((int)stk + 0)); }
    }
}

int FUN_0c029302(int a4)
{
    int t0;
    int t3;
    int t8;
    int t5;
    int t6;
    int t15;
    int t61;
    int t42;
    int t11;

    t0 = (((struct o3A4_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t3 = 0x0;
                if ((0xC & ((((struct o2EC_int *)(a4))->v))) == 0) {
                    t3 = 0x1;
                }
                t11 = t3;
            } else {
                t8 = 0x1;
                if (t0 == 3) {
                    t5 = FUN_0c03227c(a4);
                    t6 = 0x1;
                    if (t5 == 0) {
                        t6 = 0x0;
                    }
                    t8 = t6;
                }
                t11 = t8;
            }
            t42 = t11;
        } else {
            t15 = ((int (*)(int))(0xC0339A0))(a4);
            if ((t15 != 0) && (t15 != 1)) {
                if (t15 != 2) {
                    if (t15 != 3) {
                    } else {
                        (((struct o34_float *)(a4))->v) = ((((struct o390_float *)(a4))->v));
                        (((struct o3A4_uint *)(a4))->v) = 0x3;
                        FUN_0c0321d4(a4, 0x13);
                    }
                } else {
                    (((struct o34_float *)(a4))->v) = ((((struct o390_float *)(a4))->v));
                    (((struct o3A4_uint *)(a4))->v) = 0x3;
                    FUN_0c0321d4(a4, 0x12);
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((a4 + 0x60)); }
                (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
                nlAddVector((a4 + 0x48), (0x4B0 + a4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - -0.5f);
                (((struct o4B0_float *)(a4))->v) = 0.0f;
                (((struct o4B4_float *)(a4))->v) = 0.0f;
                (((struct o4B8_float *)(a4))->v) = 0.0f;
                if (!(((((struct o34_float *)(a4))->v)) > ((((struct o390_float *)(a4))->v)))) {
                    (((struct o2C4_uint *)(a4))->v) = 0x573;
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                    (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
                }
            }
            t42 = 0x1;
        }
        t61 = t42;
    } else {
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) == 0) {
        } else {
            (((struct o4C4_uint *)(a4))->v) = 0x2;
            (((struct o2C4_uint *)(a4))->v) = 0x572;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            FUN_0c033b04(a4);
            nlAddVector((a4 + 0x48), (0x4B0 + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
            (((struct o4B0_float *)(a4))->v) = 0.0f;
            (((struct o4B4_float *)(a4))->v) = 0.0f;
            (((struct o4B8_float *)(a4))->v) = 0.0f;
            (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
        }
        t61 = 0x1;
    }
    return t61;
}




int FUN_0c017718(int a4, int a5, float f4)
{
    int t0;
    int t1;
    float t19;
    float u22;
    int stk[13];
    int R1004;
    float R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    R1004 = a5;
    R1008 = f4;
    t0 = R1004;
    t1 = FUN_0c0e18ce(0xC0175BC, 0xB4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128)); }
    (((struct o30_float *)(t1))->v) = (((((struct o30_float *)(t1))->v)) + ((((struct o30_float *)(a4))->v)));
    (((struct o34_float *)(t1))->v) = (((((struct o34_float *)(t1))->v)) + (((((struct o34_float *)(a4))->v)) + (R1008)));
    (((struct o38_float *)(t1))->v) = (((((struct o38_float *)(t1))->v)) + ((((struct o38_float *)(a4))->v)));
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t1 + 0x60)) = *(struct mvb6 *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0xC)); }
    (((struct o60_ushort *)(t1))->v) = (((((struct o60_short *)(t1))->v)) + ((((struct o6C_short *)(a4))->v)));
    (((struct o62_ushort *)(t1))->v) = (((((struct o62_short *)(t1))->v)) + ((((struct o6E_short *)(a4))->v)));
    (((struct o64_ushort *)(t1))->v) = (((((struct o64_short *)(t1))->v)) + ((((struct o70_short *)(a4))->v)));
    (((struct o78_uint *)(t1))->v) = (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x14)));
    (((struct o80_uint *)(t1))->v) = 0x0;
    (((struct oA0_uint *)(t1))->v) = 0x3C;
    (((struct oA4_uint *)(t1))->v) = 0x1E;
    (((struct o84_uint *)(t1))->v) = (R1004);
    (((struct o90_float *)(t1))->v) = ((((struct o23C_float *)(a4))->v));
    t19 = FUN_0c0dcea0((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128));
    (((struct o48_float *)(t1))->v) = (((*(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x0))) * 1.0f) / t19);
    (((struct o4C_float *)(t1))->v) = ((((((struct o4_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128)))->v)) * 1.0f) / t19);
    u22 = (((struct o8_float *)((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128)))->v);
    (((struct o50_float *)(t1))->v) = ((u22 * 1.0f) / t19);
    *(float *)(((int)stk + 24)) = (-((u22 * 1.0f) / t19));
    *(float *)(((int)stk + 28)) = ((((struct o4C_float *)(t1))->v));
    *(float *)(((int)stk + 32)) = ((((struct o48_float *)(t1))->v));
    FUN_0c0dd0a0((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    (((struct o54_float *)(t1))->v) = (*(float *)(((int)stk + 12)));
    (((struct o58_float *)(t1))->v) = (*(float *)(((int)stk + 16)));
    (((struct o5C_float *)(t1))->v) = (*(float *)(((int)stk + 20)));
    (((struct o68_uint *)(t1))->v) = 0x0;
    (((struct o6C_uint *)(t1))->v) = 0x888;
    return 0x6C;
}

int FUN_0c0b7734(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t17;

    t0 = 0x0;
    t1 = 0xC20461C;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECEC));
        FUN_0c0e19d0(t3);
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        *(unsigned int *)((t3 + 0x32C)) = 0x0;
        *(unsigned int *)((t3 + 0x388)) = 0x1;
        *(float *)((t3 + 0x390)) = 65.0099945f;
        t5 = *(int *)((t1 + 0x14));
        t6 = 0x0;
        if (t0 != 0) {
            t6 = 0x4;
        }
        *(unsigned int *)((t3 + 0xBC)) = t6;
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t1 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((t1 + 0x8)); }
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t3;
        FUN_0c0855ba(t3);
        FUN_0c0bb0f4(t3);
        FUN_0c0ba6e8(t3);
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        FUN_0c0b359e(t3, t5);
        t17 = FUN_0c049c0a(t3);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
        if ((int)t0 < (int)0x2) continue;
        break;
    }
    return t17;
}




int FUN_0c090c68(int a4)
{
    int t0;
    int t8;
    float u13;
    float u15;
    int t17;
    int t20;
    int t24;
    int stk[19];

    t0 = (((struct o1C4_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    *(unsigned int *)(((int)stk + 12)) = 0x8;
    nlSubVector3op((((int)stk + 0) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    nlPushMatrix(0x0);
    for (;;) {
        t8 = FUN_0c0e19aa(0xC0918FC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        (((struct o60_uint *)(t8))->v) = 0x38E;
        (((struct o64_uint *)(t8))->v) = (((FUN_0c0da2e0()) & 0xF) + 0x14);
        u13 = 1.5f;
        u13 = u13 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
        (((struct o54_float *)(t8))->v) = u13;
        u15 = 1.0f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        (((struct o44_float *)(t8))->v) = u15;
        nlUnitMatrix();
        t17 = FUN_0c0da2e0();
        nlRotateAY((((t17 & 0x7FFF) + (*(int *)(((int)stk + 4)))) - 16384));
        t20 = FUN_0c0da2e0();
        nlRotateAX((((*(int *)(((int)stk + 0))) - (t20 & 0xFFF)) - 4096));
        FUN_0c0db470((t8 + 0x3C), (t8 + 0x3C));
        t24 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t24 - 1);
        if ((t24 - 1) == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}



int FUN_0c063160(int a4, int a5, int a6, int a7)
{
    int t8;
    int stk[5];

    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(a4))->v)) << 2)))) != 4) {
        FUN_0c0e19f2();
    }
    if ((((((struct oD8_int *)(a4))->v)) != 0) && (t8 = (((struct oD8_int *)(a4))->v), t8 == 1)) {
        FUN_0c05a98a(a4);
        FUN_0c090bf0(a4);
        (((struct o220_uint *)(a4))->v) = 0x344;
        (((struct o1E4_float *)(a4))->v) = ((((struct o24C_float *)(a4))->v));
        (((struct o23C_uint *)(a4))->v) = 0x0;
        FUN_0c08d75c((a4 + 0x30), 0x0, 0x0);
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
        *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    }
    if (!(((((struct o34_float *)(a4))->v)) > (((((struct o258_float *)(a4))->v)) + 5.0f))) {
        (((struct o220_uint *)(a4))->v) = 0x344;
        (((struct o1E4_float *)(a4))->v) = ((((struct o24C_float *)(a4))->v));
        (((struct o23C_uint *)(a4))->v) = 0x0;
        FUN_0c08d75c((a4 + 0x30), 0x0, 0x0);
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
        *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    }
    (((struct o2B0_float *)(a4))->v) = 0.0f;
    (((struct o2B4_float *)(a4))->v) = 0.0f;
    (((struct o2B8_float *)(a4))->v) = 0.0f;
    (((struct o2B4_float *)(a4))->v) = (((((struct o2B4_float *)(a4))->v)) + -0.0272199996f);
    *(unsigned int *)(((int)stk + 8)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 8))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (((((struct o3C_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o40_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o44_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o6C_ushort *)(a4))->v) = (*(int *)(((int)stk + 0)));
    (((struct o6E_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    FUN_0c063098(a4);
    return (FUN_0c01cdc2(a4));
}


void FUN_0c0b4404(int a4)
{
    int t0;

    t0 = (((struct o24C_int *)(a4))->v);
    switch (t0) {
    case 0:
        (((struct o420_uint *)(a4))->v) = 0x10000;
        (((struct o24C_uint *)(a4))->v) = (((((struct o24C_int *)(a4))->v)) + 0x1);
        break;
    case 1:
        FUN_0c0a7ed4(0xC203CDC, ((((struct o420_int *)(a4))->v)), (0x260 + a4), (0x3D4 + a4));
        (((struct o420_uint *)(a4))->v) = (((((struct o420_int *)(a4))->v)) + 0x444);
        if ((int)((((struct o420_int *)(a4))->v)) > (int)0x140000) {
            (((struct o260_float *)(a4))->v) = 180.0f;
            (((struct o264_float *)(a4))->v) = 1.0999999f;
            (((struct o268_float *)(a4))->v) = 97.0f;
            (((struct o3D4_uint *)(a4))->v) = 0x18E3;
            (((struct o3D8_uint *)(a4))->v) = 0xFFFFB05C;
            (((struct o420_uint *)(a4))->v) = 0x1E;
            (((struct o24C_uint *)(a4))->v) = (((((struct o24C_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        (((struct o420_uint *)(a4))->v) = 0x12C;
        (((struct o24C_uint *)(a4))->v) = (((((struct o24C_int *)(a4))->v)) + 0x1);
        break;
    case 3:
        (((struct o268_float *)(a4))->v) = (((((struct o268_float *)(a4))->v)) + 0.0199999996f);
        break;
    case 4:
        FUN_0c082220();
        (((struct o3D4_uint *)(a4))->v) = ((((struct o3CC_short *)(a4))->v));
        (((struct o3D8_uint *)(a4))->v) = ((((struct o3CE_short *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0x254 + a4)); }
        break;
    }
}





int FUN_0c09084c(int a4, int a5, int a6)
{
    int t12;
    int t14;
    float u18;
    int t20;
    int t23;
    int t26;
    int stk[21];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 0) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0dce80((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0.349999994f);
    FUN_0c09134c((a4 + 0x30), (((int)stk + 0) + 0x10), 0x8, 0x2);
    FUN_0c08a220((a4 + 0x30), 0x0);
    nlSubVector3op((((int)stk + 0) + 0x1C), ((*(int *)(((int)stk + 8))) + 0x30), ((*(int *)(((int)stk + 12))) + 0x3C));
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 36))));
    nlPushMatrix(0x0);
    t12 = 0x50;
    for (;;) {
        t14 = FUN_0c0e19aa(0xC0917EC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t14);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct o54_float *)(t14))->v) = 0.699999988f;
        (((struct o58_float *)(t14))->v) = 0.699999988f;
        (((struct o60_uint *)(t14))->v) = 0x293;
        (((struct o64_uint *)(t14))->v) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        u18 = 0.799999952f;
        u18 = u18 + 4.882961e-05f * (float)(FUN_0c0da2e0());
        (((struct o44_float *)(t14))->v) = u18;
        nlUnitMatrix();
        t20 = FUN_0c0da2e0();
        nlRotateAY((((t20 & 0x3FFF) + (*(int *)(((int)stk + 4)))) - 8192));
        t23 = FUN_0c0da2e0();
        nlRotateAX((((*(int *)(((int)stk + 0))) - (t23 & 0xFFF)) - 4096));
        t26 = FUN_0c0da2e0();
        nlRotateAZ(((t26 & 0x1FFF) - 4096));
        FUN_0c0db470((t14 + 0x3C), (t14 + 0x3C));
        t12 = (t12 - 0x1);
        if (t12 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}




int FUN_0c0d41c6(void)
{
    int t0;
    int t31;
    int stk[10];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943564) = *(struct mv4 *)(0xC249880); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943554) = *(struct mv4 *)(0xC249880); }
    t0 = 0x0;
    for (;;) {
        FUN_0c0d3f0c(t0);
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x0;
        if ((*(int *)0xC943400) != 2) {
            if ((*(int *)0xC943400) == 0) {
                if (t0 == (0x1 - (*(int *)0xC23A1BC))) {
                    *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
                }
            }
        } else {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
        }
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x8)) = t0;
        if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 4) {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x0;
        } else {
            if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 0) {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x1;
            } else {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x2;
            }
        }
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x40)) = 0x1;
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x54)) = 0x10000;
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x6C)) = (*(int *)((((t0 << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x70)) = (*(int *)(((((0x1 - t0) << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = (0xC943574 + ((((t0 << 2) + t0) << 2) << 2));
        FUN_0c0e6118();
        *(volatile int *)(((int)stk + 4));
        FUN_0c0e6118();
        FUN_0c0da2e0();
        t31 = ((t0 * 0x1D4) + 0xC9436B4);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x68 + t31) + 0x0)) = (FUN_0c0e5f1c());
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return FUN_0c0d6a64();
}

int FUN_0c0d6254(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t62;
    float t39;
    int t47;
    int t48;
    int t51;
    int t52;
    int t37;
    int t55;
    float u59;
    int t60;
    int stk[4];

    t0 = (((struct o6C_int *)(a4))->v);
    t9 = (0xA4 + a4);
    if (a5 != 0) {
        t9 = (0xCC + a4);
        if (a5 != 1) {
            t9 = (0xF4 + a4);
            if (a5 != 2) {
                t9 = (0x11C + a4);
                if (a5 != 3) {
                    if (a5 != 4) {
                    } else {
                        t9 = (0x144 + a4);
                    }
                }
            }
        }
    }
    *(unsigned int *)((t9 + 0x0)) = a6;
    t62 = a6;
    if (a6 != -1) {
        if (a5 != 0) {
            if (a5 != 1) {
                if (a5 != 2) {
                    if (a5 != 3) {
                        t37 = a5;
                        if (a5 != 4) {
                        } else {
                            *(unsigned int *)((t9 + 0x4)) = 0x0;
                            t37 = (t9 + 0x8);
                        }
                    } else {
                        *(unsigned int *)((t9 + 0x4)) = a6;
                        t37 = ((*(int *)((t9 + 0x4))) + 0x30);
                    }
                } else {
                    *(unsigned int *)((t9 + 0x4)) = (*(int *)(((a6 << 2) + 0xC2475D4)));
                    t37 = ((*(int *)((t9 + 0x4))) + 0x30);
                }
            } else {
                *(unsigned int *)((t9 + 0x4)) = (*(int *)(((a6 << 2) + 0xC246FF0)));
                t37 = ((*(int *)((t9 + 0x4))) + 0x30);
            }
        } else {
            *(unsigned int *)((t9 + 0x4)) = ((((struct o70_int *)(a4))->v));
            t37 = ((*(int *)((t9 + 0x4))) + 0x30);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x8)) = *(struct mv3 *)(t37); }
        t39 = nlLength((t0 + 0x30), t37);
        (((struct o14_float *)(t9))->v) = t39;
        *(unsigned int *)((t9 + 0x18)) = (FUN_0c0d6e1a(t39));
        FUN_0c0a68ec(((int)stk + 0), (((((struct o30_float *)(t0))->v)) - ((((struct o8_float *)(t9))->v))), (((((struct o38_float *)(t0))->v)) - ((((struct o10_float *)(t9))->v))));
        *(unsigned int *)((t9 + 0x1C)) = (*(int *)(((int)stk + 0)));
        t47 = (((struct o6E_short *)(t0))->v);
        t48 = *(int *)(((int)stk + 0));
        *(unsigned int *)((t9 + 0x20)) = (int)_builtin_fabsf((float)(short)(t48 - t47));
        if ((*(int *)((t9 + 0x4))) != 0) {
            t51 = (((struct o6E_short *)(t0))->v);
            t52 = (((struct o6E_short *)((*(int *)((t9 + 0x4)))))->v);
            *(unsigned int *)((t9 + 0x24)) = (int)_builtin_fabsf((float)(short)(t52 - t51));
            t55 = (int)_builtin_fabsf((float)(short)(t52 - t51));
            u59 = _builtin_fabsf((float)(short)(t52 - t51));
            t60 = (int)_builtin_fabsf((float)(short)(t52 - t51));
        } else {
            *(unsigned int *)((t9 + 0x24)) = ((*(int *)((t9 + 0x20))) + 0x8000);
            t55 = 0x8000;
            u59 = _builtin_fabsf((float)(short)(t48 - t47));
            t60 = (int)_builtin_fabsf((float)(short)(t48 - t47));
        }
        t62 = 0x6E;
    }
    return t62;
}



int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    float u12;
    float u13;
    float u18;
    float u19;
    float u21;
    float u22;
    float u23;
    float u28;
    float u29;
    float u31;
    float u32;
    float u33;
    float u38;
    float u39;
    float u41;
    float u42;
    float u43;
    float u48;
    float u49;
    float u51;
    float u52;
    float u53;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    u0 = (((struct o4_float *)(R5))->v);
    R6 = (R5);
    R7 = (0xC94C6C0);
    F3 = (0.0f);
    F7 = (u0);
    F9 = ((*(float *)((R5 + 0x0))));
    if ((u0 > 0.0f)) goto L_C0E1336;
    if (((*(int *)0xC20D140) != 0)) goto L_C0E132E;
    L_C0E145A:;
    if ((R4 != 0)) goto L_C0E146C;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    (((struct o20_uint *)0xC94C6C4)->v) = 0x0;
    return 0x0;
    L_C0E146C:;
    return FUN_0c0e1138(R4, R5, R6, F4, F5, F6, F7, F8, F9, F10, F11);
    L_C0E132E:;
    if ((F7 != F3)) goto L_C0E1336;
    goto L_C0E145A;
    L_C0E1336:;
    u12 = (((struct o8_float *)(R6))->v);
    u13 = (((struct oC_float *)(R6))->v);
    F10 = (u13);
    F11 = (u12);
    F8 = (((((-(F4 * F9)) - (F6 * u12)) - u13) / F7));
    if ((!(((((-(F4 * F9)) - (F6 * u12)) - u13) / F7) > F5))) goto L_C0E1358;
    goto L_C0E145A;
    L_C0E1358:;
    u18 = (((struct o1C_float *)(R6))->v);
    *(float *)(((int)stk + 8)) = u18;
    u19 = (((struct o14_float *)(R6))->v);
    *(float *)(((int)stk + 4)) = u19;
    u21 = *(float *)(((int)stk + 8));
    u22 = (((struct o28_float *)(R6))->v);
    u23 = (((u18 - F6) * (((((struct o20_float *)(R6))->v)) - u19)) - ((u19 - F4) * (u22 - u21)));
    R0 = (0x28);
    F0 = ((u22 - u21));
    F1 = (u21);
    if ((0.0f > (F7 * u23))) goto L_C0E145A;
    u28 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 0)) = u28;
    u29 = (((struct o20_float *)(R6))->v);
    *(float *)(((int)stk + 28)) = u29;
    u31 = (((struct o34_float *)(R6))->v);
    u32 = *(float *)(((int)stk + 0));
    u33 = (((u28 - F6) * (((((struct o2C_float *)(R6))->v)) - u29)) - ((u29 - F4) * (u31 - u32)));
    R0 = (0x34);
    F0 = ((u31 - u32));
    F1 = (u32);
    if ((0.0f > (F7 * u33))) goto L_C0E145A;
    u38 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 16)) = u38;
    u39 = (((struct o2C_float *)(R6))->v);
    *(float *)(((int)stk + 12)) = u39;
    u41 = *(float *)(((int)stk + 16));
    u42 = (((struct o40_float *)(R6))->v);
    u43 = (((u38 - F6) * (((((struct o38_float *)(R6))->v)) - u39)) - ((u39 - F4) * (u42 - u41)));
    R0 = (0x40);
    F0 = ((u42 - u41));
    F1 = (u41);
    if ((0.0f > (F7 * u43))) goto L_C0E145A;
    u48 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 20)) = u48;
    u49 = (((struct o38_float *)(R6))->v);
    *(float *)(((int)stk + 24)) = u49;
    u51 = *(float *)(((int)stk + 20));
    u52 = (((struct o1C_float *)(R6))->v);
    u53 = (((u48 - F6) * (((((struct o14_float *)(R6))->v)) - u49)) - ((u49 - F4) * (u52 - u51)));
    F0 = ((u52 - u51));
    F1 = (u51);
    if ((0.0f > (F7 * u53))) goto L_C0E145A;
    *(unsigned int *)((R7 + 0x0)) = ((((struct o44_int *)(R6))->v));
    *(float *)(((int)stk + 32)) = (F5 - F8);
    (((struct o1C_float *)0xC94C6C4)->v) = ((F5 - F8) * (F5 - F8));
    (((struct o0_float *)0xC94C6C4)->v) = F4;
    (((struct o4_float *)0xC94C6C4)->v) = F8;
    (((struct o8_float *)0xC94C6C4)->v) = F6;
    (((struct oC_float *)0xC94C6C4)->v) = F9;
    (((struct o10_float *)0xC94C6C4)->v) = F7;
    (((struct o14_float *)0xC94C6C4)->v) = F11;
    (((struct o18_float *)0xC94C6C4)->v) = F10;
    (((struct o20_uint *)0xC94C6C4)->v) = R5;
    return (*(int *)((R7 + 0x0)));
}

