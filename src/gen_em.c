/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int ADXT_GetStat(int);
int FUN_0c0168b0(void);
int FUN_0c016a86(void);
int FUN_0c016c10(int);
int FUN_0c016c5e(int);
int FUN_0c01c24e(void);
int FUN_0c01c274(void);
int FUN_0c01cdf2(int);
int FUN_0c0212cc(void);
int FUN_0c031fbc(int, int, int);
int FUN_0c0346ca(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c042e34(void);
int FUN_0c04c91c(int, int);
int FUN_0c04c98e(int, int);
int FUN_0c04e934(int, float);
int FUN_0c04e9da(int);
int FUN_0c050970(int, int);
int FUN_0c050f1c(int);
int FUN_0c050f98(int);
int FUN_0c051a74(void);
int FUN_0c053ac4(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c056118(int, int, int, int);
int FUN_0c059500(int);
int FUN_0c066240(int);
int FUN_0c066870(int, int);
int FUN_0c06b45e(int);
int FUN_0c07e1e8(void);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c08476e(float, float, float);
int FUN_0c085704(int);
int FUN_0c08696c(int);
int FUN_0c086b96(int);
int FUN_0c0874ca(int, int, int, int);
int FUN_0c0a57b8(void);
int FUN_0c0a59f8(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0b70a0(int);
int FUN_0c0bbbf4(int);
int FUN_0c0bd32e(void);
int FUN_0c0bd65c(int);
int FUN_0c0bfa46(int);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int);
int FUN_0c0c03da(void);
int FUN_0c0c0424(void);
int FUN_0c0c0504(int);
int FUN_0c0c3748(void);
int FUN_0c0c3d46(void);
int FUN_0c0c3ef8(int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc720(void);
int FUN_0c0ce8b8(int);
int FUN_0c0d42f6(void);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9d20(float);
int FUN_0c0d9dc0(int, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db1c0(int);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de900(int);
int FUN_0c0e14c4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e193c(int, int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e2400(void);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e4428(int);
int FUN_0c0e6248(void);
int FUN_0c0ed8a8(int, int, int);
int FUN_0c2103bc(void);
int FUN_0c22c602(int);
int FUN_0c233800(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buStat(int);
int buUnmount(int);
int kdGetDeviceInfo(int);
int kmLoadTexture(int, int, int, int);
int kmSetFogTable(void);
int thunk_kmSetFogTable(void);
int mwRnaErrCallFunc(int);
int nlFogTableColor(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c0d61be(void);
int thunk_FUN_0c22bfa2(int, int);
int vmsfs_c_dispatch(int, int, int);
int FUN_0c054d8e(void);
int FUN_0c0a6800(int a4, int a5, float f4, float f5, float f6);
int FUN_0c0c1140(int a4, int a5);
int FUN_0c0c37ac(void);
void FUN_0c0c46cc(int a4);
int FUN_0c0cdf68(void);
int gdFsCreateHnG(int a4, int a5, int a6, int a7);
int FUN_0c229c6c(int a4);
int FUN_0c036d86(int a4, int a5);
int FUN_0c038f9c(int a4);
int FUN_0c04d1f8(int a4);
int FUN_0c04fdb0(int a4);
int FUN_0c053e94(int a4, int a5);
int FUN_0c056098(int a4, int a5, int a6);
int FUN_0c05808a(void);
int FUN_0c066064(void);
int FUN_0c06b748(int a4);
int FUN_0c090bf0(int a4);
void FUN_0c0a3640(int a4, int a5, int a6, int a7);
void FUN_0c0b4328(void);
int FUN_0c0b4d40(void);
int FUN_0c0d3684(void);
float FUN_0c0da560(int a4, float f4);
float FUN_0c0da610(int a4, float f4);
int FUN_0c0e29f0(int a4, int a5);
int FUN_0c0e43cc(int a4, int a5);
int FUN_0c233456(int a4, int a5, int a6);
int FUN_0c0164d6(void);
int FUN_0c01ce8a(int a4, float f4);
void FUN_0c0534a4(void);
int FUN_0c065840(void);
int FUN_0c06b3b6(int a4);
int FUN_0c0758f4(int a4);
int FUN_0c0a87b4(int a4, int a5, int a6, int a7);
int FUN_0c0b7af6(int a4);
int FUN_0c0b8304(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0cc7d8(int a4);
int FUN_0c0d80d0(int a4, int a5);
void ADXSTM_SetEos(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int FUN_0c22cae2(int a4, int a5, int a6, int a7);
int FUN_0c016296(void);
int FUN_0c021956(void);
int FUN_0c03217c(int a4, int a5, int a6);
int FUN_0c01aae0(void);
int FUN_0c0372a0(int a4, int a5, int a6, int a7);
int FUN_0c03c592(int a4, int a5, int a6, int a7);
int FUN_0c03c5ea(int a4, int a5, int a6, int a7);
int FUN_0c04e324(int a4, int a5);
int FUN_0c0519f0(int a4);
int FUN_0c050c78(int a4, int a5);
int FUN_0c0595c8(int a4);
int FUN_0c061fb8(int a4);
int FUN_0c062eb4(void);
int FUN_0c06524a(int a4, int a5, int a6);
int FUN_0c065340(int a4, int a5, int a6);
int FUN_0c08c610(int a4, int a5);
int FUN_0c0925e0(int a4, int a5);
int FUN_0c0ad7e6(void);
int FUN_0c0d2d2e(void);
int FUN_0c0d9ca0(float f4);
int FUN_0c0e3630(int a4, int a5, int a6);
int ADXT_Pause(int a4, int a5);
void kmiVertexTransferTADirect(void);
int vmsfs_c_fiber6(int a4, int a5, int a6);
void kmytex_FBDeQueueEntry(int a4, int a5, int a6);
int FUN_0c010e3c(int a4, float f4);
int FUN_0c034506(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0432e2(int a4);
int FUN_0c04e80c(int a4);
int FUN_0c067062(int a4);
int FUN_0c069098(void);
int FUN_0c088046(int a4);
int FUN_0c09a846(int a4);
int FUN_0c0a3c86(int a4, int a5);
int FUN_0c0a8990(int a4);
int FUN_0c0b0e64(int a4, int a5);
int FUN_0c0ba662(int a4);
int FUN_0c0c0094(void);
int FUN_0c0c0384(void);
int FUN_0c0c44d6(int a4, int a5, int a6, int a7);
void FUN_0c0ced14(int a4);
struct o148_uint { char p[0x148]; unsigned int v; };
struct o150_uint { char p[0x150]; unsigned int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1D8_int { char p[0x1D8]; int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o238_ushort { char p[0x238]; unsigned short v; };
struct o244_int { char p[0x244]; int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o26C_float { char p[0x26C]; float v; };
struct o270_int { char p[0x270]; int v; };
struct o294_int { char p[0x294]; int v; };
struct o298_int { char p[0x298]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o300_int { char p[0x300]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o53C_int { char p[0x53C]; int v; };
struct o53C_uint { char p[0x53C]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o540_uint { char p[0x540]; unsigned int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o334_uint { char p[0x334]; unsigned int v; };
struct o33C_int { char p[0x33C]; int v; };
struct o33C_uint { char p[0x33C]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o498_int { char p[0x498]; int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };




int FUN_0c054d8e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;

    *(unsigned int *)0xC247994 = 0x0;
    t0 = 0x0;
    t1 = 0xC247694;
    for (;;) {
        *(unsigned int *)(((0xC2475D4 + t0) + 0x0)) = 0x0;
        *(unsigned int *)(((0xC247604 + t0) + 0x0)) = 0x0;
        *(unsigned int *)(((0xC247634 + t0) + 0x0)) = 0x0;
        *(unsigned int *)(((0xC247664 + t0) + 0x0)) = 0xFFFFFFFF;
        t2 = 0x10;
        t3 = t1;
        for (;;) {
            t2 = (t2 - 0x1);
            *(float *)((t3 + 0x0)) = 0.0f;
            t3 = (t3 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x40);
        if ((unsigned int)t0 >= (unsigned int)0x30) {
            break;
        }
    }
    t8 = 0xA;
    t9 = 0xC2479B4;
    for (;;) {
        t8 = (t8 - 0x1);
        *(unsigned int *)((t9 + 0x0)) = 0x0;
        *(unsigned int *)((t9 + 0x8)) = 0x0;
        *(unsigned int *)((t9 + 0x1C)) = 0x0;
        *(unsigned int *)((t9 + 0x14)) = 0x0;
        *(unsigned int *)((t9 + 0x18)) = 0x0;
        t9 = (t9 + 0x20);
        if (t8 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c0a6800(int a4, int a5, float f4, float f5, float f6)
{
    int stk[13];
    float R1004;
    float R1008;
    float R1012;
    int R1016;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1004 = f4;
    R1012 = f5;
    R1008 = f6;
    R1016 = a4;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((R1016));
    *(float *)(((int)stk + 32)) = (R1004);
    *(float *)(((int)stk + 36)) = (R1012);
    *(float *)(((int)stk + 40)) = (R1008);
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    *(float *)((a5 + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((a5 + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((a5 + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0c1140(int a4, int a5)
{
    int t2;
    int t3;
    int t12;

    if ((*(int *)((a4 + 0x8))) == 0) {
        t12 = 0xC1E3A4C;
    } else {
        t2 = 0x0;
        t3 = (*(int *)((a4 + 0x18)));
        for (;;) {
            nlPrintf(0xC1E3A58, (t3), ((*(int *)((t3 + 0x0)))), ((*(int *)((t3 + 0x4)))));
            if (t3 == a4) {
                break;
            }
            t2 = (t2 + 0x1);
            if (t2 == a5) {
                return (nlPrintf(0xC1E3A78));
            }
            t3 = (*(int *)((t3 + 0x18)));
        }
        t12 = 0xC1E3A70;
    }
    return (nlPrintf(t12));
}

int FUN_0c0c37ac(void)
{
    int stk[4];

    FUN_0c0e2400();
    FUN_0c0c45d0();
    FUN_0c0c03da();
    FUN_0c07e1e8();
    FUN_0c0bfa90();
    FUN_0c0d8c40(0x203020, 0x1030, 0x203020);
    *(unsigned int *)0xC262390 = (FUN_0c0e262a(0x60));
    FUN_0c0c3748();
    *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = 0x2008;
    *(unsigned int *)(((*(int *)0xC262390) + 0x3C)) = 0x0;
    *(unsigned int *)(((*(int *)0xC262390) + 0x0)) = (FUN_0c0e14c4(0xC0C3A1C));
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))));
    return FUN_0c0c3d46();
}

void FUN_0c0c46cc(int a4)
{
    if ((unsigned int)a4 > (unsigned int)0x0) {
        FUN_0c0de900((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))));
    return;
    }
}

int FUN_0c0cdf68(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    (((struct o2C_uint *)0xC5229FC)->v) = 0xF;
    (((struct o30_uint *)0xC5229FC)->v) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    (((struct o0_uint *)0xC522A40)->v) = 0xC0CE0F0;
    (((struct o4_uint *)0xC522A40)->v) = 0xC0CE136;
    (((struct o8_uint *)0xC522A40)->v) = 0xC0CE49C;
    (((struct oC_uint *)0xC522A40)->v) = 0xC0CE2F8;
    (((struct o10_uint *)0xC522A40)->v) = 0xC0CE516;
    (((struct o0_uint *)0xC5229BC)->v) = 0x0;
    (((struct o4_uint *)0xC5229BC)->v) = 0x0;
    (((struct o8_uint *)0xC5229BC)->v) = 0x1;
    (((struct oC_uint *)0xC5229BC)->v) = 0x0;
    (((struct o0_uint *)0xC5229FC)->v) = 0x0;
    (((struct o4_uint *)0xC5229FC)->v) = 0x0;
    (((struct o8_uint *)0xC5229FC)->v) = 0x0;
    return 0x48;
}

int gdFsCreateHnG(int a4, int a5, int a6, int a7)
{
    if (((((struct o4C_short *)(a4))->v)) != 0) {
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a6;
    *(unsigned int *)((a4 + 0xC)) = a7;
    *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o4C_ushort *)(a4))->v) = 0x1;
    (((struct o4E_ushort *)(a4))->v) = (*(short *)0xC236698);
    (((struct o50_ushort *)(a4))->v) = 0x0;
    (((struct o52_ushort *)(a4))->v) = 0x0;
    return a4;
}

int FUN_0c229c6c(int a4)
{
    int t1;
    int t2;
    int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC237CCA))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0xC237CE2 + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int FUN_0c036d86(int a4, int a5)
{
    int t1;
    float u6;
    int t7;

    t1 = FUN_0c0e19aa(0xC036BC0, 0x4C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o48_uint *)(t1))->v) = a4;
    (((struct o44_uint *)(t1))->v) = a5;
    *(unsigned int *)((t1 + 0x34)) = (FUN_0c0da2e0());
    *(unsigned int *)((t1 + 0x38)) = (FUN_0c0da2e0());
    u6 = 1.0f;
    u6 = u6 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
    (((struct o3C_float *)(t1))->v) = u6;
    t7 = FUN_0c0da2e0();
    *(unsigned int *)(((0x40 + t1) + 0x0)) = (t7 & 0x1F);
    return (t7 & 0x1F);
}

int FUN_0c038f9c(int a4)
{
    if (((((struct o26C_float *)(a4))->v)) > (-1.0f)) {
        (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.049999997f);
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)(((0x258 + a4) + 0x0))));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (*(float *)(((0x26C + a4) + 0x0))));
    if ((((((struct oC8_int *)(a4))->v)) & 0x300) == 0) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - -0.5f);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)(((0x260 + a4) + 0x0))));
    return 0x50;
}

int FUN_0c04d1f8(int a4)
{
    int t0;
    int t12;
    int t2;
    int t4;

    t0 = (((struct o2EC_int *)(a4))->v);
    t12 = t0;
    if ((t0 & 12) != 0) {
        t2 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
        (((struct o2C4_uint *)(a4))->v) = 0x337;
        FUN_0c04c91c(a4, t2);
        t4 = (((struct o300_int *)(a4))->v);
        if ((t4 != 1) && (t4 != 2)) {
            t12 = t4;
            if (t4 != 3) {
                t12 = t4;
                if ((t4 == 4) || (t4 == 5)) {
                    (((struct o2C4_uint *)(t2))->v) = 0x348;
                    t12 = 0x2C4;
                }
            }
        } else {
            (((struct o2C4_uint *)(t2))->v) = 0x34B;
            t12 = 0x2C4;
        }
    }
    return t12;
}

int FUN_0c04fdb0(int a4)
{
    (((struct o2C4_uint *)(a4))->v) = 0x262;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x4000;
    (((struct o210_uint *)(a4))->v) = 0xA;
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    (((struct o394_uint *)(a4))->v) = 0x0;
    FUN_0c050f98(a4);
    if ((int)(*(int *)((0xC23EDE0 + (((((struct oBC_int *)(a4))->v)) << 2)))) < (int)0x6) {
        *(unsigned int *)((0xC23EDE0 + (((((struct oBC_int *)(a4))->v)) << 2))) = 0x6;
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}

int FUN_0c053e94(int a4, int a5)
{
    int t1;

    t1 = *(int *)0xC247CB0;
    if (((((struct o294_int *)(a4))->v)) != 0x10000) {
        if (_builtin_fabsf((float)(short)((((((struct o298_int *)(a4))->v)) << 13) - (((((struct o3CE_short *)(t1))->v)) + ((((struct o294_int *)(a4))->v))))) > 24576.0f) {
            return FUN_0c0546fe(a4, (((((struct o3CE_short *)(t1))->v)) + ((((struct o294_int *)(a4))->v))), 0x1000, a5);
        }
        return 0xC053F08;
    }
    return 0x294;
}

int FUN_0c056098(int a4, int a5, int a6)
{
    int t0;
    int t37;
    int t14;
    int t21;

    t0 = (((struct o210_int *)(a4))->v);
    t37 = 0x210;
    if (((int)t0 >= (int)0x55) && ((int)t0 <= (int)0x5C)) {
        t14 = *(int *)((0xC247604 + (((((struct o33C_int *)(a4))->v)) << 2)));
        t37 = t14;
        if (t14 == 2) {
            t21 = *(int *)((((((((struct o33C_int *)(a4))->v)) << 2) + 0xC2475D4) + 0x0));
            t37 = 0x23C;
            if (((((struct o23C_int *)(t21))->v)) == ((((struct oBC_int *)(a4))->v))) {
                *(unsigned int *)((((((((struct o33C_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)) = 0xB;
                (((struct o23C_uint *)(t21))->v) = 0x0;
                (((struct o334_uint *)(a4))->v) = 0x0;
                (((struct o33C_uint *)(a4))->v) = 0x0;
                t37 = 0x33C;
            }
        }
    }
    return t37;
}

int FUN_0c05808a(void)
{
    int t1;
    int t2;
    int t3;
    int t0;
    int t20;
    int t17;
    int t12;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC247030 + t3) + 0x0))) != 0) {
            t1 = 0xC246FF0;
            t1 = (t1 + t2);
            t0 = 0x330;
            t1 = (*(int *)((t1 + 0x0)));
            t0 = (*(int *)((t1 + t0)));
            if ((t0 != 3) && (t0 != 2)) {
                if (t0 != 4) {
                    t12 = t1;
                } else {
                    t0 = (FUN_0c056118(t1, 0x7, 0x0, 0x0));
                }
                t17 = t12;
            } else {
                t0 = (FUN_0c056118(t1, 0x7, 0x0, 0x1));
            }
            t20 = t17;
        } else {
            t20 = t1;
        }
        t3 = (t3 + 0x4);
        t1 = t20;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0x8) {
            break;
        }
    }
    return t0;
}

int FUN_0c066064(void)
{
    int stk[7];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FA220); }
    FUN_0c0845f0(0x1);
    FUN_0c0845f8(0x0, 0x0);
    FUN_0c08476e(0.0f, 0.0f, 0.0f);
    FUN_0c0845f8(0x1, 0x1);
    FUN_0c0845f8(0x2, 0x1);
    FUN_0c0845f8(0x3, 0x1);
    FUN_0c084610(0x1, 0x3);
    FUN_0c084610(0x2, 0x3);
    return (FUN_0c084610(0x3, 0x3));
}

int FUN_0c06b748(int a4)
{
    int stk[3];

    FUN_0c06b45e(a4);
    if (((((struct o1BC_int *)(a4))->v)) != 0) {
        FUN_0c0cc3f8(0x92AA9, 0x0, 0x0, 0x0);
        *(unsigned int *)((a4 + 0x0)) = 0xC06B744;
    } else {
        FUN_0c01cdf2(a4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o28C_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c090bf0(int a4)
{
    int t0;
    int t5;

    t0 = (((struct o1C4_int *)(a4))->v);
    t5 = FUN_0c0d9dc0(a4, (((((struct o30_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v))), (((((struct o38_float *)(a4))->v)) - ((((struct o44_float *)(a4))->v))));
    FUN_0c0874ca((*(int *)(((((((struct o1C4_int *)(a4))->v)) << 2) + 0xC246FF0))), (((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xC), (0x3FFF + (short)t5), ((((struct o1F8_int *)(a4))->v)));
    return FUN_0c086b96((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xC));
}

void FUN_0c0a3640(int a4, int a5, int a6, int a7)
{
    int t3;

    if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) != 0) {
        t3 = FUN_0c0e19aa(0xC0A339C, 0xB4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t3);
        (((struct o88_uint *)(t3))->v) = ((((struct o498_int *)(a4))->v));
        if (a7 != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(a7); }
        }
        (((struct o7C_uint *)(t3))->v) = a5;
        (((struct o8C_uint *)(t3))->v) = a6;
    }
}

void FUN_0c0b4328(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B4384, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CAC = t0;
    (((struct o3CC_ushort *)(t0))->v) = 0x4000;
    (((struct o3CE_ushort *)(t0))->v) = 0x0;
    (((struct o254_float *)(t0))->v) = 0.0f;
    (((struct o258_float *)(t0))->v) = (*(float *)0xC0B4458);
    (((struct o25C_float *)(t0))->v) = 0.0f;
    (((struct o3D4_uint *)(t0))->v) = ((((struct o3CC_short *)(t0))->v));
    (((struct o3D8_uint *)(t0))->v) = ((((struct o3CE_short *)(t0))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + t0)) = *(struct mv3 *)((0x254 + t0)); }
}

int FUN_0c0b4d40(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B4D9C, 0xB0);
    FUN_0c0e19d0(t0);
    (((struct o88_uint *)(t0))->v) = 0xC203EBC;
    (((struct o34_float *)(t0))->v) = (*(float *)0xC0B4E54);
    (((struct o38_float *)(t0))->v) = (*(float *)0xC0B4E58);
    (((struct o3C_float *)(t0))->v) = (*(float *)0xC0B4E5C);
    (((struct o44_float *)(t0))->v) = 1.0f;
    (((struct o40_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o5C_float *)(t0))->v) = 1.0f;
    (((struct o64_uint *)(t0))->v) = 0xA;
    (((struct o60_uint *)(t0))->v) = 0xFFFFFFFF;
    return 0x60;
}

int FUN_0c0d3684(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0D36E0, 0x6C);
    *(unsigned int *)0xC94350C = t0;
    FUN_0c0e19d0(t0);
    (((struct o40_float *)(t0))->v) = (*(float *)0xC0D37C0);
    (((struct o5C_uint *)(t0))->v) = 0x4000;
    (((struct o44_float *)(t0))->v) = (*(float *)0xC0D37C4);
    (((struct o48_float *)(t0))->v) = (*(float *)0xC0D37C8);
    (((struct o58_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o60_float *)(t0))->v) = 1.0f;
    (((struct o64_uint *)(t0))->v) = 0xFFFFFFFF;
    (((struct o68_uint *)(t0))->v) = 0x300A;
    *(unsigned int *)((t0 + 0x30)) = (*(int *)0xC94343C);
    return 0x68;
}

float FUN_0c0da560(int a4, float f4)
{
    float u5;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u3;

    if (!(0.0f > f4)) {
        u3 = ((((struct o0_float *)0xC0DA680)->v));
    } else {
        u3 = ((((struct o4_float *)0xC0DA680)->v));
    }
    u5 = (((struct o8_float *)0xC0DA680)->v);
    *(unsigned int *)((a4 + 0x0)) = (int)(u3 + (f4 / u5));
    u8 = (f4 - ((float)(int)(u3 + (f4 / u5)) * ((((struct oC_float *)0xC0DA680)->v))));
    u8 = u8 + ((((struct o10_float *)0xC0DA680)->v)) * (float)(int)(u3 + (f4 / u5));
    t9 = 0xB;
    u10 = 0.0f;
    for (;;) {
        t11 = t9;
        t9 = (t9 - 2);
        u12 = ((float)t11 - u10);
        u10 = (u8 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x3) {
            break;
        }
    }
    return (u8 / (1.0f - u10));
}

float FUN_0c0da610(int a4, float f4)
{
    float u1;
    float u3;
    int t4;
    float u5;
    int t6;
    float u7;

    u1 = -0.5f;
    if (!(0.0f > f4)) {
        u1 = 0.5f;
    }
    *(unsigned int *)((a4 + 0x0)) = (int)(u1 + (f4 / 1.57079625f));
    u3 = (f4 - ((float)(int)(u1 + (f4 / 1.57079625f)) * 1.57080078f));
    u3 = u3 + 4.45445494e-06f * (float)(int)(u1 + (f4 / 1.57079625f));
    t4 = 0xB;
    u5 = 0.0f;
    for (;;) {
        t6 = t4;
        t4 = (t4 - 2);
        u7 = ((float)t6 - u5);
        u5 = (u3 * u3);
        u5 = (u5 / u7);
        if ((int)t4 < (int)0x3) {
            break;
        }
    }
    return (u3 / (1.0f - u5));
}

int FUN_0c0e29f0(int a4, int a5)
{
    FUN_0c0db0a0(a4, a5);
    nlPrintf(0xC1EA9D4, (((((struct o4_int *)0xC94C79C)->v))));
    nlPrintf(0xC1EA9E8, (((((struct o0_int *)0xC94C79C)->v))));
    nlPrintf(0xC1EA9FC, (((((struct o4_int *)0xC94C7EC)->v)) << 2));
    nlPrintf(0xC1EAA34, (-((*(int *)((((*(int *)0xC523164) << 2) + 0xC52315C))) << 2)));
    return (nlPrintf(0xC1EAA48, (((((struct o0_int *)0xC94C7EC)->v)))));
}

int FUN_0c0e43cc(int a4, int a5)
{
    int t5;
    int t0;

    t5 = 0xFFFFFFFE;
    if (a4 != 0xA3) {
    } else {
        t0 = FUN_0c0e4428((a4 + ((a5 & 0xF) << 16)));
        t5 = t0;
        if (t0 != 0) {
        } else {
            t5 = (FUN_0c0e4428(((a4 + ((a5 & 0xF) << 16)) + 0x100)));
        }
    }
    return t5;
}

int FUN_0c233456(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = FUN_0c233800(a4, 0x7, 0x0);
    t1 = FUN_0c233800(a4, 0x8, 0x0);
    if ((int)t1 <= 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFD3;
    } else {
        if ((int)t1 >= (int)0xF) {
            *(unsigned int *)((a6 + 0x0)) = 0x0;
        } else {
            *(unsigned int *)((a6 + 0x0)) = (((t1 - 15) << 1) + (t1 - 15));
        }
    }
    *(unsigned int *)((a5 + 0x0)) = t0;
    *(unsigned int *)((a4 + 0x3C)) = t0;
    (((struct o40_uint *)(a4))->v) = (*(int *)((a6 + 0x0)));
    return 0x0;
}

int FUN_0c0164d6(void)
{
    int t2;
    int t7;

    FUN_0c0168b0();
    (((struct o0_uint *)0xC23ED44)->v) = 0x0;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    (((struct o28_uint *)0xC23ED88)->v) = 0x1;
    (((struct o2C_uint *)0xC23ED88)->v) = 0x0;
    (((struct oC_uint *)0xC23A184)->v) = 0x0;
    *(unsigned int *)0xC247CF8 = 0x0;
    (((struct o0_uint *)0xC23ED88)->v) = 0x0;
    t2 = FUN_0c016c10(((((struct oC_int *)0xC23ED44)->v)));
    (((struct o0_uint *)0xC23ECFC)->v) = t2;
    (((struct o4_uint *)0xC23ECFC)->v) = (FUN_0c016c5e((unsigned char)(*(short *)((t2 + 0x4)))));
    t7 = ((int (*)(void))((*(int *)((((((struct o0_int *)0xC23ECFC)->v)) + 0x10)))))();
    (((struct o0_uint *)0xC23A184)->v) = (((((struct o0_int *)0xC23A184)->v)) + 0x1);
    return t7;
}

int FUN_0c01ce8a(int a4, float f4)
{
    float u0;
    float u3;
    float u6;

    u0 = *(float *)((a4 + 0x0));
    if (!((*(float *)0xC23FE74) > (u0 + f4))) {
        if (!((u0 - f4) > (*(float *)0xC23FE80))) {
            u3 = *(float *)((a4 + 0x4));
            if (!((*(float *)0xC23FE84) > (u3 + f4))) {
                if (!((u3 - f4) > (*(float *)0xC23FE78))) {
                    u6 = *(float *)((a4 + 0x8));
                    if (!((*(float *)0xC23FE88) > (u6 + f4))) {
                        if ((u6 - f4) > (*(float *)0xC23FE7C)) {
                            return 0x0;
                        }
                        return 0xFFFFFFFF;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

void FUN_0c0534a4(void)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC05355C, 0xB4, (*(int *)0xC23ECF4));
    (((struct o78_uint *)(t1))->v) = (*(short *)0xC0F8678);
    *(unsigned int *)(((0x7C + t1) + 0x0)) = (*(short *)0xC0F867A);
    (((struct o98_uint *)(t1))->v) = 0x0;
    (((struct o9C_uint *)(t1))->v) = 0x0;
    (((struct oAC_uint *)(t1))->v) = 0x0;
    (((struct o62_ushort *)(t1))->v) = 0x0;
    (((struct o74_float *)(t1))->v) = 0.000949999958f;
    t4 = *(int *)0xC23ED50;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)(((((t4 << 1) + t4) << 2) + 0xC1A1C84)); }
}

int FUN_0c065840(void)
{
    int t3;
    int t9;
    int t10;

    FUN_0c0e2400();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    (((struct o0_uint *)0xC247BE0)->v) = (FUN_0c0e262a(0x9C));
    t3 = FUN_0c0e262a(0x220);
    (((struct o4_uint *)0xC247BE0)->v) = t3;
    if ((t3 & 0x1F) != 0) {
        (((struct o4_uint *)0xC247BE0)->v) = (((((struct o4_int *)0xC247BE0)->v)) + (((unsigned int)(0x20 - (t3 & 0x1F)) >> 1) << 1));
    }
    t9 = 0x27;
    t10 = ((((struct o0_int *)0xC247BE0)->v));
    for (;;) {
        t9 = (t9 - 0x1);
        *(unsigned int *)((t10 + 0x0)) = 0x0;
        t10 = (t10 + 0x4);
        if (t9 == 0) {
            break;
        }
    }
    *(unsigned int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x0)) = 0x0;
    return (t3 & 0x1F);
}

int FUN_0c06b3b6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t1 = (((struct o5C_int *)(a4))->v);
        (((struct o5C_uint *)(a4))->v) = (t1 + 0x1);
        if ((unsigned char)(t1 + 0x1) == 0) {
            t2 = (((struct o68_int *)(a4))->v);
            (((struct o68_uint *)(a4))->v) = (t2 + 0x1);
            FUN_0c0553b6(0x18, 0x3, (((((0x1 & t2) << 1) + (0x1 & t2)) << 2) + 0xC0FA908));
            t4 = (((struct o58_int *)(a4))->v);
            (((struct o58_uint *)(a4))->v) = (t4 - 1);
            if ((int)(t4 - 1) <= 0) {
                return FUN_0c0e19f2();
            }
            return 0x58;
        }
        return 0x5C;
    }
    return 0x60;
}

int FUN_0c0758f4(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0757FC, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    *(unsigned short *)(((0x62 + t1) + 0x0)) = (*(short *)((a4 + 0xC)));
    *(unsigned int *)(((0x6C + t1) + 0x0)) = (*(short *)((a4 + 0xE)));
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)((a4 + 0x10)));
    (((struct oA0_uint *)(t1))->v) = (*(signed char *)((a4 + 0x12)));
    (((struct oA4_uint *)(t1))->v) = (*(signed char *)((a4 + 0x13)));
    return 0xA4;
}

int FUN_0c0a87b4(int a4, int a5, int a6, int a7)
{
    int t4;
    int t5;

    (((struct o4_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o10_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o14_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0A8778));
    (((struct o0_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0A8798));
    t4 = FUN_0c0e14c4(a4);
    (((struct oC_uint *)0xC23ECE0)->v) = t4;
    t5 = (((struct o0_int *)0xC24FA30)->v);
    *(unsigned int *)((t5 + 0x34)) = a5;
    *(unsigned int *)((t5 + 0x38)) = a6;
    (((struct oC_uint *)0xC24FA30)->v) = a7;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t4;
}

int FUN_0c0b7af6(int a4)
{
    int t0;
    int t4;
    int t22;
    int t16;

    t0 = FUN_0c0e1830(0xC0B7B94, 0x188);
    FUN_0c0e19d0(t0);
    (((struct o150_uint *)(t0))->v) = a4;
    t22 = 0x150;
    if ((*(short *)0xC24FB2C) != 0) {
        t4 = *(short *)0xC24FB2E;
        t22 = (unsigned short)t4;
        if ((unsigned short)t4 == a4) {
            FUN_0c0b70a0(0x0);
            (((struct o148_uint *)(t0))->v) = 0x1;
            t22 = 0x148;
        }
    }
    if ((*(short *)0xC24FB30) != 0) {
        t16 = *(short *)0xC24FB32;
        t22 = (unsigned short)t16;
        if ((unsigned short)t16 == a4) {
            FUN_0c0b70a0(0x1);
            (((struct o148_uint *)(t0))->v) = 0x1;
            t22 = 0x148;
        }
    }
    return t22;
}

int FUN_0c0b8304(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int t1;
    int t5;
    int t9;
    int stk[16];

    if (a6 != 0) {
        t1 = *(signed char *)((a6 + 0x0));
        t5 = t1;
        if (t1 != 32) {
            *(float *)(((int)stk + 8)) = f4;
            *(float *)(((int)stk + 12)) = f5;
            *(float *)(((int)stk + 16)) = f6;
            *(float *)(((int)stk + 20)) = f7;
            *(float *)(((int)stk + 24)) = f7;
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 32)) = 0.0f;
            *(float *)(((int)stk + 36)) = 1.0f;
            *(float *)(((int)stk + 40)) = 1.0f;
            *(unsigned int *)(((int)stk + 44)) = a4;
            *(unsigned int *)(((int)stk + 56)) = a5;
            *(float *)(((int)stk + 48)) = f8;
            *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
            *(unsigned int *)(((int)stk + 4)) = (*(short *)((0xC1121DC + ((*(signed char *)((a6 + 0x0))) << 1))));
            t5 = (FUN_0c0c0340(((int)stk + 4)));
        }
        t9 = t5;
    }
    return t9;
}

int FUN_0c0cc7d8(int a4)
{
    int t15;
    int stk[5];

    if (((((struct o0_int *)0xC23A180)->v)) == 2) {
        { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)((0xC20A818 + ((a4 << 2) << 1))); }
        if ((((((struct o28_int *)0xC23A180)->v)) & 0x100) != 0) {
            *(unsigned int *)((((int)stk + 4) + 0x4)) = (((*(int *)0xC523158) & 0xF) + 0x1);
        }
    } else {
        { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)((0xC20AB70 + ((a4 << 2) << 1))); }
    }
    if ((*(int *)((((int)stk + 4) + 0x4))) != 0) {
        FUN_0c0cc720();
    } else {
        t15 = ((a4 << 2) << 1);
    }
    return (FUN_0c0cc3f8((*(int *)((((int)stk + 4) + 0x4))), t15, 0x0, 0x0));
}

int FUN_0c0d80d0(int a4, int a5)
{
    int t3;
    int t5;
    int t20;
    int t7;
    int t8;
    int t10;

    t3 = a4;
    if ((int)a4 >= 0) {
        t3 = (a4 + (*(int *)0xC948270));
    }
    t5 = *(int *)0xC943D78;
    t20 = 0x0;
    if ((*(int *)(((((t3 << 2) << 1) + t5) + 0x0))) != 0) {
        t7 = *(int *)(((((t3 << 2) << 1) + t5) + 0x4));
        t8 = *(int *)0xC947AA8;
        t20 = 0x0;
        if ((*(int *)((((t7 * 0x3C) + t8) + 0x28))) == 0) {
            t10 = kmLoadTexture(((t7 * 0x3C) + t8), a5, 0x0, 0x0);
            t20 = 0x1;
            if (t10 != 0) {
                t20 = 0x0;
            }
        }
    }
    return t20;
}

void ADXSTM_SetEos(int a4, int a5)
{
    int t1;
    int t3;

    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
    } else {
        t1 = *(int *)((a4 + 0x14));
        t3 = (t1 + 0x7FF);
        if ((int)(t1 + 0x7FF) < 0) {
            t3 = ((t1 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((a4 + 0x30)) = ((int)t3 >> 11);
    }
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    int t0;
    int t2;

    t0 = FUN_0c2103bc();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC237D54, a4, a5);
        return 0x0;
    }
    t2 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    FUN_0c0ed8a8((t2 + 0x40), 0xC237D8C, 0x20);
    return t2;
}

int FUN_0c22cae2(int a4, int a5, int a6, int a7)
{
    int t0;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC237EE0);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o78_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o7C_int *)(a4))->v));
    return 0x7C;
}

int FUN_0c016296(void)
{
    *(unsigned int *)0xC5229BC = 0x9;
    *(unsigned int *)0xC23ED6C = 0x3;
    (((struct o0_uint *)0xC204998)->v) = 0x0;
    (((struct o4_uint *)0xC204998)->v) = 0x0;
    (((struct o0_uint *)0xC1FF890)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC1FF890)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xC1FF890)->v) = 0x0;
    (((struct oC_uint *)0xC1FF890)->v) = 0x0;
    (((struct o10_uint *)0xC1FF890)->v) = 0x0;
    FUN_0c0bd65c(0x0);
    FUN_0c0a59f8(0x0);
    FUN_0c0bd32e();
    FUN_0c0a57b8();
    FUN_0c0c0424();
    return FUN_0c0c0504(0x0);
}

int FUN_0c021956(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0216AE, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = 0x0;
    (((struct o4_uint *)0xC246300)->v) = 0x0;
    (((struct o8_uint *)0xC246300)->v) = 0x0;
    if ((*(int *)0xC23ED84) != 0) {
        (((struct o0_uint *)0xC246300)->v) = 0x1;
    } else {
        (((struct o0_uint *)0xC246300)->v) = 0x0;
    }
    *(unsigned int *)((t0 + 0x68)) = 0xFFFFFFFF;
    if ((*(int *)0xC23A180) == 2) {
        *(unsigned int *)((t0 + 0x50)) = 0xC1FCE98;
    } else {
        *(unsigned int *)((t0 + 0x50)) = 0xC1FCDE4;
    }
    return FUN_0c042e34();
}

int FUN_0c03217c(int a4, int a5, int a6)
{
    int t0;
    int t5;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o53C_uint *)(a4))->v) = (*(int *)((((*(int *)((((a5 - 1) << 2) + (*(int *)((0xC1F8E48 + (((t0 << 2) + t0) << 2))))))) + ((a6 << 2) << 2)) + 0x0)));
    (((struct o540_uint *)(a4))->v) = ((((struct o53C_int *)(a4))->v));
    t5 = (((struct o4F0_int *)(a4))->v);
    (((struct o55C_uint *)(a4))->v) = ((*(int *)((((*(int *)((((a5 - 1) << 2) + (*(int *)(((((t5 << 2) + t5) << 2) + 0xC1F8E48)))))) + ((a6 << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    return FUN_0c031fbc(a4, ((a5 - 1) << 2), a6);
}

int FUN_0c01aae0(void)
{
    FUN_0c01c24e();
    FUN_0c051a74();
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        FUN_0c0d42f6();
    }
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        thunk_FUN_0c0d61be();
    }
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v)));
    return FUN_0c01c274();
}

int FUN_0c0372a0(int a4, int a5, int a6, int a7)
{
    int t20;
    int t24;
    int stk[5];

    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x38))) << 2)))) != 4) {
        FUN_0c0cc3f8((*(int *)((a4 + 0x30))), a5, a6, a7);
        FUN_0c0e19f2();
    }
    if (((((struct o4D0_int *)((*(int *)((((*(int *)((a4 + 0x38))) << 2) + 0xC246FF0)))))->v)) != 0) {
        FUN_0c0cc3f8((*(int *)((a4 + 0x30))), 0x0, 0x0, 0x0);
        FUN_0c0e19f2();
    }
    t20 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t20 - 1);
    t24 = 0x58;
    if ((int)(t20 - 1) < 0) {
        FUN_0c0cc3f8((*(int *)((a4 + 0x30))), 0x0, 0x0, 0x0);
        t24 = (FUN_0c0e19f2());
    }
    return t24;
}

int FUN_0c03c592(int a4, int a5, int a6, int a7)
{
    int t13;
    int stk[5];

    FUN_0c0cc3f8(0x332A9, a5, a6, a7);
    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x1);
    t13 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) > 0) {
        t13 = (((struct o57C_int *)(a4))->v);
        if (t13 != 0) {
            if ((t13 != 1) && ((t13 != 2) && (t13 != 3))) {
                
            } else {
                t13 = (FUN_0c0cc3f8(0xC2EA9, 0x0, 0x0, 0x0));
            }
        } else {
            t13 = (FUN_0c0cc3f8(0xB2EA9, 0x0, 0x0, 0x0));
        }
    }
    return t13;
}

int FUN_0c03c5ea(int a4, int a5, int a6, int a7)
{
    int t13;
    int stk[5];

    FUN_0c0cc3f8(0x332A9, a5, a6, a7);
    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x2);
    t13 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) > 0) {
        t13 = (((struct o57C_int *)(a4))->v);
        if (t13 != 0) {
            if ((t13 != 1) && ((t13 != 2) && (t13 != 3))) {
                
            } else {
                t13 = (FUN_0c0cc3f8(0xC2EA9, 0x0, 0x0, 0x0));
            }
        } else {
            t13 = (FUN_0c0cc3f8(0xB2EA9, 0x0, 0x0, 0x0));
        }
    }
    return t13;
}

int FUN_0c04e324(int a4, int a5)
{
    int t5;

    if ((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FD8))) == 0) {
        if ((((((struct o394_int *)(a4))->v)) == 0) && ((t5 = *(int *)((a5 + 0x8)), (0x400 & t5) != 0) && ((0x202 & t5) == 0))) {
            (((struct o20C_uint *)(a4))->v) = 0x40;
            (((struct o210_uint *)(a4))->v) = 0x7A;
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct oC0_int *)(a4))->v)) << 2) << 2) + 0xC0F82AA)));
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o2D4_uint *)(a4))->v) = 0x1;
            (((struct o394_uint *)(a4))->v) = 0x1;
            return FUN_0c08696c(a4);
        }
        return 0x394;
    }
    return 0xC246FD8;
}

int FUN_0c0519f0(int a4)
{
    int t2;
    int t3;
    int t8;

    t2 = *(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + ((((((struct oC0_int *)(a4))->v)) >> 1) * 0x2C))) + 0x0));
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((((((((struct oBC_int *)(a4))->v)) * 0xF0) + 0xC246DF8) + t3) + 0x0)) = (unsigned short)t2;
        *(unsigned int *)(((((((((struct oBC_int *)(a4))->v)) * 0xF0) + 0xC246DF8) + t3) + 0x4)) = 0x0;
        t8 = (((((((struct oBC_int *)(a4))->v)) * 0xF0) + 0xC246DF8) + t3);
        t3 = (t3 + 0xC);
        *(unsigned int *)((t8 + 0x8)) = 0x0;
        if ((unsigned int)t3 >= (unsigned int)0xF0) {
            break;
        }
    }
    return 0xBC;
}

int FUN_0c050c78(int a4, int a5)
{
    if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
        FUN_0c053ac4(a4);
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(short *)(((((((struct o2A0_int *)(a4))->v)) << 1) + 0xC0F85D8))));
        if ((int)(*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247594))) > 0) {
            (((struct o3AC_uint *)(a4))->v) = 0x28;
            return FUN_0c04e9da(a4);
        }
        return FUN_0c050f1c(a4);
    }
    return FUN_0c050970(a4, a5);
}

int FUN_0c0595c8(int a4)
{
    int t1;
    int t11;
    float u2;
    float u3;
    float u5;
    float u9;

    FUN_0c059500(a4);
    t1 = (((struct o270_int *)(a4))->v);
    t11 = t1;
    if ((t1 & 1) != 0) {
        u2 = *(float *)0xC0596D0;
        u3 = *(float *)0xC0596D4;
        u5 = u3;
        u5 = u5 + u2 * ((((struct o25C_float *)(a4))->v));
        *(float *)(((0x34 + a4) + 0x0)) = ((*(float *)(((0x34 + a4) + 0x0))) + u5);
        FUN_0c0c60d0((a4 + 0x30), 0xC0F9B4C, 0x5);
        u9 = u3;
        u9 = u9 + u2 * ((((struct o25C_float *)(a4))->v));
        *(float *)(((0x34 + a4) + 0x0)) = ((*(float *)(((0x34 + a4) + 0x0))) - u9);
        t11 = 0x25C;
    }
    return t11;
}

int FUN_0c061fb8(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC061DEC, 0x4C, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    (((struct o48_uint *)(t1))->v) = ((((struct o68_int *)((*(int *)0xC247B94)))->v));
    *(unsigned int *)((t1 + 0x30)) = (*(int *)(((((((struct o1C4_int *)(a4))->v)) << 2) + 0xC246FF0)));
    return 0xC246FF0;
}

int FUN_0c062eb4(void)
{
    int t0;
    int t7;

    t0 = *(int *)0xC23ED50;
    t7 = 0x0;
    if (t0 != 58) {
        t7 = 0x1;
        if (t0 != 87) {
            t7 = 0x2;
            if (t0 != 99) {
                t7 = 0x3;
                if (t0 != 102) {
                    t7 = 0x0;
                }
            }
        }
    }
    (((struct o0_uint *)0xC247B94)->v) = ((t7 * 0x8C) + 0xC0F9C44);
    (((struct o4_uint *)0xC247B94)->v) = ((t7 * 0x3C) + 0xC0F9E74);
    (((struct o8_uint *)0xC247B94)->v) = ((((t7 << 1) + t7) << 2) + 0xC0F9F64);
    return 0xC247B98;
}

int FUN_0c06524a(int a4, int a5, int a6)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), (*(int *)(((int)stk + 4))), a4);
    FUN_0c0a78fc((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAX((*(int *)((a4 + 0x18))));
    nlRotateAZ((*(int *)((a4 + 0x1C))));
    return (FUN_0c0db470((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4)))));
}

int FUN_0c065340(int a4, int a5, int a6)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), (*(int *)(((int)stk + 4))), a4);
    FUN_0c0a7714((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x1C))));
    nlRotateAX((*(int *)((a4 + 0x18))));
    return (FUN_0c0db470((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4)))));
}

int FUN_0c08c610(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C668, 0x6C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(a4); }
    (((struct o44_float *)(t1))->v) = (-1.0f);
    (((struct o58_uint *)(t1))->v) = 0x3F3;
    (((struct o50_float *)(t1))->v) = (1.0f + 1.0f);
    (((struct o54_float *)(t1))->v) = 1.0f;
    (((struct o68_uint *)(t1))->v) = 0x3C;
    return 0x68;
}

int FUN_0c0925e0(int a4, int a5)
{
    int t0;

    t0 = FUN_0c0e1830(0xC092638, 0xB4);
    (((struct o88_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o98_uint *)(t0))->v) = ((((struct o2BC_int *)(a4))->v));
    (((struct o7C_uint *)(t0))->v) = ((((struct o244_int *)(a5))->v));
    (((struct o8C_uint *)(t0))->v) = a5;
    (((struct oA0_uint *)(t0))->v) = 0xC;
    if ((((((struct oC0_int *)(a4))->v)) >> 1) == 2) {
        (((struct o244_uint *)(a5))->v) = 0x1297;
    } else {
        (((struct o244_uint *)(a5))->v) = 0x1295;
    }
    return 0x244;
}

int FUN_0c0ad7e6(void)
{
    float u1;
    int t2;
    int stk[8];

    nlPushMatrix(0x0);
    u1 = *(float *)0xC0AD88C;
    t2 = 0xC10F3D4;
    for (;;) {
        if ((*(short *)((t2 + 0x2))) == 0) {
            break;
        }
        FUN_0c0db800(0x0);
        FUN_0c0dcca0((t2 + 0x4));
        nlRotateAY((unsigned short)(*(short *)((t2 + 0x10))));
        FUN_0c0c475c((unsigned short)(*(short *)((t2 + 0x2))), u1);
        t2 = (t2 + 0x14);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0d2d2e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t10;
    int t12;

    t0 = *(int *)0xC23A1A8;
    *(unsigned int *)0xC23A1A8 = (t0 | 0x8000);
    t1 = (t0 | 0x8000);
    t2 = 0xC23A1A8;
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)(((0xC246FF0 + t3) + 0x0));
        if (((((struct o20C_int *)(t4))->v)) == 0x40000) {
            t2 = t4;
            FUN_0c04c98e(t2, (*(int *)((((((((struct oCC_int *)(t4))->v)) << 2) + 0xC246FF0) + 0x0))));
        } else {
            t10 = t1;
            t12 = t2;
        }
        t3 = (t3 + 0x4);
        t1 = t10;
        t2 = t12;
        if ((unsigned int)t3 >= (unsigned int)0x8) {
            break;
        }
    }
    return FUN_0c0212cc();
}

int FUN_0c0d9ca0(float f4)
{
    int t0;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    if (_builtin_sqrtf((1.0f - (f4 * f4))) != 0.0f) {
        return FUN_0c0d9d20((f4 / _builtin_sqrtf((1.0f - (f4 * f4)))));
    }
    t0 = 0xC000;
    if (f4 > 0.0f) {
        t0 = 0x4000;
    }
    return t0;
}

int FUN_0c0e3630(int a4, int a5, int a6)
{
    int t0;
    int t1;

    (((struct o0_uint *)0xA0800090)->v) = (a4 + 0x5F800000);
    (((struct o4_uint *)0xA0800090)->v) = (0x5F800000 + a5);
    (((struct o8_uint *)0xA0800090)->v) = a6;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
        t1 = FUN_0c0e4428(0x2000A0);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0x0;
}

int ADXT_Pause(int a4, int a5)
{
    int t0;
    int t3;

    t0 = ADXT_GetStat(a4);
    (((struct o72_uchar *)(a4))->v) = a5;
    if ((t0 != 3) && (t0 != 4)) {
        return t0;
    }
    if (a5 == 1) {
        thunk_FUN_0c22bfa2((*(int *)((a4 + 0xC))), 0x0);
        t3 = 0x7A120;
        for (;;) {
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        return FUN_0c22c602((*(int *)((a4 + 0xC))));
    }
    return thunk_FUN_0c22bfa2((*(int *)((a4 + 0xC))), 0x1);
}

void kmiVertexTransferTADirect(void)
{
    
}

int vmsfs_c_fiber6(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x6, a5, a6);
}

void kmytex_FBDeQueueEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(int *)((a6 + 0x4));
    t1 = *(int *)((a6 + 0x8));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a6 + 0x8)));
    } else {
        *(unsigned int *)((t0 + 0x8)) = (*(int *)((a6 + 0x8)));
    }
    if ((*(int *)((a6 + 0x8))) == 0) {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a6 + 0x4)));
    } else {
        *(unsigned int *)((t1 + 0x4)) = (*(int *)((a6 + 0x4)));
    }
}

int FUN_0c010e3c(int a4, float f4)
{
    int t1;
    int t2;

    t1 = (nlPushMatrix(0x0));
    t2 = a4;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 0xFF) {
            break;
        }
        t1 = (*(signed char *)((t2 + 0x0)));
        t2 = (t2 + 0x1);
        t1 = (unsigned char)t1;
        t1 = (t1 << 2);
        t1 = (FUN_0c0c465c((*(int *)((0xC0F4A9C + t1)))));
        t1 = (FUN_0c0dcc70(f4, 0.0f, 0.0f));
    }
    return nlPopMatrix(0x1);
}

int FUN_0c034506(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = (((struct o1DC_int *)(a4))->v);
    t1 = (((struct o6E_short *)(a4))->v);
    t2 = (((struct o1D8_int *)(a4))->v);
    t3 = (((struct o6C_short *)(a4))->v);
    *(unsigned int *)((a6 + 0x0)) = (((int)(0x4000 + (unsigned short)(short)(t0 - t1)) >> 15) & 0x1);
    *(unsigned int *)((a7 + 0x0)) = (((int)((unsigned short)(short)(t0 - t1) + 0x2000) >> 14) & 0x3);
    *(unsigned int *)((a8 + 0x0)) = (((int)((unsigned short)(short)(t2 - t3) + 0x2000) >> 14) & 0x3);
    *(unsigned short *)((a9 + 0x0)) = (short)(t0 - t1);
    return (((int)((unsigned short)(short)(t2 - t3) + 0x2000) >> 14) & 0x3);
}

int FUN_0c0432e2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a4 + 0x540));
    t1 = FUN_0c0346ca((a4 + 0x518));
    if ((t1 != 0) && ((t2 = (((struct o0_int *)0xC246304)->v), (t2 & 1) == 0) || (t3 = *(int *)((t0 + 0x418)), (int)t3 >= 0))) {
        return 0x1;
    }
    (((struct o0_uint *)0xC246304)->v) = (((((struct o0_int *)0xC246304)->v)) & 0xFFFFFFFE);
    (((struct oC_uint *)0xC246304)->v) = (((((struct oC_int *)0xC246304)->v)) & 0xFFFFFFF9);
    return 0x0;
}

int FUN_0c04e80c(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x20C)) = 0x20000;
        *(unsigned int *)((a4 + 0x210)) = 0x2F;
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((((*(int *)((a4 + 0xC0))) << 2) << 1) + 0xC0F7F70)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(float *)((a4 + 0x3BC)) = (*(float *)0xC04E920);
        *(float *)((a4 + 0x3C0)) = (*(float *)0xC04E924);
        *(unsigned int *)((a4 + 0x364)) = 0x0;
        return FUN_0c04e934(a4, (-1.0f));
    }
    return t0;
}

int FUN_0c067062(int a4)
{
    int t0;
    int t2;
    int t4;
    int t11;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        t2 = *(int *)((a4 + 0x34));
        if (t2 != 0) {
            if (t2 != 1) {
            } else {
                t4 = FUN_0c0e19aa(0xC066A4C, 0x184, (*(int *)((a4 + 0x3C))));
                FUN_0c066870(t4, a4);
            }
        } else {
            t11 = FUN_0c0e19aa(0xC066370, 0x184, (*(int *)((a4 + 0x3C))));
            FUN_0c066240(t11);
        }
        *(unsigned int *)((a4 + 0x30)) = 0x14;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
    }
    return FUN_0c0e16c0((*(int *)((a4 + 0x3C))));
}

int FUN_0c069098(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC069152, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FA504); }
    FUN_0c0e6248();
    (((struct o78_uint *)(t1))->v) = (unsigned short)(*(short *)0xC0FA516);
    (((struct o74_float *)(t1))->v) = (*(float *)0xC06919C);
    (((struct oA0_uint *)(t1))->v) = 0x1;
    return 0xA0;
}

int FUN_0c088046(int a4)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC0880D4, 0x44, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x3C)) = 0xA;
    *(float *)((t1 + 0x34)) = 0.799999952f;
    t3 = *(int *)((a4 + 0xBC));
    *(float *)(((t3 << 2) + 0xC24758C)) = ((*(float *)(((t3 << 2) + 0xC24758C))) + (float)(int)((float)(*(int *)((a4 + 0x1CC))) * 3.0f));
    return 0xC24758C;
}

int FUN_0c09a846(int a4)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC09A568, 0x48, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o238_ushort *)(a4))->v) = 0x0;
    (((struct o44_float *)(t1))->v) = 0.000999999931f;
    *(unsigned int *)((t1 + 0x30)) = a4;
    t3 = (((struct o2E8_int *)(a4))->v);
    (((struct o40_uint *)(t1))->v) = (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)));
    FUN_0c0cbafc(0x3C9, 0x2, 0xFC001000, 0x84000000);
    return FUN_0c0cbafc(0x3DB, 0x2, 0xFC001000, 0x84000000);
}

int FUN_0c0a3c86(int a4, int a5)
{
    int t0;
    int t2;
    int t5;

    t0 = *(short *)((a5 + 0x6));
    t2 = FUN_0c0e19aa(0xC0A3CDC, 0x48, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x30)) = a4;
    *(unsigned int *)((t2 + 0x34)) = (unsigned char)(*(signed char *)(((unsigned short)t0 + 0xC10D074)));
    *(unsigned int *)((t2 + 0x38)) = (((((unsigned short)t0 << 1) + (unsigned short)t0) << 2) + 0xC10D05C);
    t5 = *(short *)((a5 + 0x4));
    *(unsigned int *)(((0x44 + t2) + 0x0)) = (unsigned short)t5;
    return (unsigned short)t5;
}

int FUN_0c0a8990(int a4)
{
    int t9;
    int t11;
    int t21;
    int t36;

    if (((*(int *)0xC23A1A8) & 16) == 0) {
        *(unsigned int *)0xC24FA38 = ((*(int *)0xC24FA38) + 0x1);
    }
    if (((*(int *)0xC23A1A8) & 8) == 0) {
        if ((*(int *)0xC24FA38) != (*(int *)0xC24FA3C)) {
            t9 = FUN_0c016a86();
            if (t9 != 0) {
                t11 = ((int (*)(int))((*(int *)((a4 + 0x38)))))(a4);
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
                *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
            }
        } else {
            t21 = ((int (*)(int))((*(int *)((a4 + 0x38)))))(a4);
            *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
            *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
        }
    }
    t36 = *(int *)((a4 + 0x34));
    return ((int (*)(int))(t36))(a4);
}

int FUN_0c0b0e64(int a4, int a5)
{
    int t0;
    int t3;

    t0 = FUN_0c0e193c(0xC0B0EBA, 0xB4, a4);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x88)) = a5;
    *(unsigned int *)((t0 + 0xA4)) = 0xA;
    if (a5 != 2) {
        *(unsigned int *)((t0 + 0xA0)) = 0x78;
        *(float *)((t0 + 0x90)) = 0.0f;
        t3 = 0x90;
    } else {
        *(float *)((t0 + 0x90)) = (*(float *)0xC0B0F24);
        *(unsigned int *)((t0 + 0x80)) = 0x3;
        t3 = 0x80;
    }
    return t3;
}

int FUN_0c0ba662(int a4)
{
    int t0;
    float u7;

    t0 = *(int *)0xC247CAC;
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u7 = (((struct o74_float *)(a4))->v);
    nlScale(u7, u7, u7);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c47ae(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c0c0094(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C0120, 0xE8);
    FUN_0c0e19d0(t0);
    (((struct o3C_float *)(t0))->v) = 0.00109999999f;
    (((struct o40_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o5C_float *)(t0))->v) = 1.0f;
    (((struct o64_uint *)(t0))->v) = 0xA;
    (((struct o58_uint *)(t0))->v) = 0x0;
    (((struct o60_uint *)(t0))->v) = 0xFFFFFFFF;
    (((struct oDC_uint *)(t0))->v) = 0x3C;
    (((struct oD8_uint *)(t0))->v) = 0x0;
    return 0xD8;
}

int FUN_0c0c0384(void)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t5;

    u0 = *(float *)0xC0C0408;
    t1 = 0x0;
    for (;;) {
        t2 = t1;
        t3 = t1;
        t1 = (t1 + 0x1);
        *(float *)((0xC2620BC + (t2 << 2))) = (1.0f - ((float)t3 / u0));
        if ((int)t1 >= (int)0x28) {
            break;
        }
    }
    if ((unsigned int)((t1 << 2) + 0xC2620BC) < (unsigned int)0xC2622C0) {
        t5 = ((t1 << 2) + 0xC2620BC);
        for (;;) {
            *(float *)((t5 + 0x0)) = 0.0f;
            t5 = (t5 + 0x4);
            if ((unsigned int)t5 >= (unsigned int)0xC2622C0) {
                break;
            }
        }
    }
    thunk_kmSetFogTable();
    nlFogTableColor(0x0);
    return FUN_0c0db1c0(0xFF09);
}

int FUN_0c0c44d6(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t9;
    int t4;
    int t5;
    int t12;

    if ((int)a5 >= 0) {
        t1 = 0xC1531BC;
        if ((*(int *)0xC23A180) == 2) {
            t1 = 0xC1527B4;
        }
        t3 = *(int *)(((a6 << 2) + ((t1 + ((((a4 << 1) + a4) << 2) << 1)) + (((a5 >> 1) << 2) << 1))));
        t9 = ((t1 + ((((a4 << 1) + a4) << 2) << 1)) + (((a5 >> 1) << 2) << 1));
        if (t3 != 0) {
            t4 = ((t1 + ((((a4 << 1) + a4) << 2) << 1)) + (((a5 >> 1) << 2) << 1));
            t5 = t3;
            for (;;) {
                if ((*(int *)((t5 + 0x0))) == 0) {
                    break;
                }
                t4 = (FUN_0c0c3ef8((*(int *)((t5 + 0x0)))));
                t5 = (t5 + 0x8);
            }
            t9 = t4;
        }
        t12 = t9;
    }
    return t12;
}

void FUN_0c0ced14(int a4)
{
    int t1;
    int stk[5];

    if ((int)a4 >= 0) {
        if ((*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x54))) != 0) {
            for (;;) {
                t1 = buStat(a4);
                if (t1 == 0) {
                    break;
                }
            }
            buUnmount(a4);
            FUN_0c0e2a4c((*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x54))));
            FUN_0c0ce8b8(a4);
    return;
        }
        return;
    }
}
