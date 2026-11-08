/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXERR_CallErrFunc(Stk4);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeSct(int, int);
int FUN_0c0164d6(void);
int FUN_0c0169da(int);
int FUN_0c016d2c(void);
int FUN_0c0198c2(void);
float FUN_0c01f1b8(int, int);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034e2c(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035ad6(int, int);
int FUN_0c037acc(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c0519f0(int);
int FUN_0c054654(int, int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c056118(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06b060(int);
float FUN_0c082e20(float);
int FUN_0c084104(void);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c084622(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c086b70(void);
int FUN_0c086bda(int, float);
int FUN_0c098c2e(int, int, int, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a77fe(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0b25d0(void);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int);
int FUN_0c0c0384(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c6ac6(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc7d8(int);
int FUN_0c0cdff2(void);
int FUN_0c0ce87e(void);
int FUN_0c0cee40(void);
int FUN_0c0d1870(void);
int FUN_0c0d1b00(void);
int FUN_0c0d3684(void);
int FUN_0c0d37e8(void);
int FUN_0c0d3a3a(void);
int FUN_0c0d9d20(float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db430(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd280(void);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0de7a0(int);
int FUN_0c0de9c0(void);
int FUN_0c0e1138(int, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e2400(void);
int FUN_0c0e4428(int);
int FUN_0c0e4c34(int);
int FUN_0c0e4d2c(int);
int FUN_0c0e563c(int);
int FUN_0c0eca40(int, int, int, int);
int FUN_0c22abc0(int, int);
extern float _builtin_sqrtf(float);
int check_cache(int);
int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int);
int kmiCopyToFrameBuffer(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int);
int mwlSbFreeWork(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
extern float nlLength();
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
int vmsfs_c_progress(int);
void FUN_0c0c9e86(int a4);
int FUN_0c0d6d74(int a4);
float FUN_0c01ec10(int a4, float f4, float f5, float f6);
int FUN_0c037e44(int a4);
int FUN_0c037ee8(int a4);
int FUN_0c0510be(int a4);
void FUN_0c082fae(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c086cac(int a4);
int FUN_0c0c1714(int a4);
int FUN_0c0d9dc0(float f4, float f5);
int FUN_0c016dfe(int, int);
int FUN_0c0351bc(int a4, int a5, int a6, int a7);
int FUN_0c07b1ee(int a4, int a5, int a6, int a7);
int FUN_0c0a73ec(float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0ca6d2(int a4, int a5, float f4);
int FUN_0c23314c(int a4);
int FUN_0c021d30(int a4);
int FUN_0c053f0c(int a4, int a5);
int FUN_0c0ba1d8(int a4);
int FUN_0c0d26a8(void);
int FUN_0c016438(void);
int FUN_0c04b8e4(int a4, int a5, int a6, int a7);
int FUN_0c054ae0(int a4);
int FUN_0c0651ac(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0652a2(int a4, int a5, int a6, int a7, float f4);
int FUN_0c065398(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06b114(int a4);
int FUN_0c067cd4(void);
void FUN_0c0ce7e0(int a4, int a5, int a6, int a7);
int FUN_0c0ceee4(int a4);
int FUN_0c0e432e(int a4, int a5, int a6);
int adxf_SetFileInfo(int a4, int a5);
int syTmrInt1Cancel(void);
int FUN_0c02b8ba(int a4);
int FUN_0c03fed2(int a4);
int FUN_0c04fffe(int a4, int a5);
float FUN_0c06c89c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c098e1c(int a4, int a5, int a6);
int FUN_0c0bdec2(int a4, float f4, float f5, float f6);
int FUN_0c0b8632(void);
int FUN_0c0c73e6(int a4, float f4, float f5);
int FUN_0c0d8ae0(int a4);
int FUN_0c0df570(int a4);
int kmLoadTextureBlock(int a4, int a5, int a6, int a7);
int vmsfs_mount2(int a4);
int FUN_0c024324(int a4);
struct o14_float { char p[0x14]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o238_int { char p[0x238]; int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o240_int { char p[0x240]; int v; };
struct o26C_float { char p[0x26C]; float v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o330_int { char p[0x330]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o344_int { char p[0x344]; int v; };
struct o348_int { char p[0x348]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o528_int { char p[0x528]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o544_uint { char p[0x544]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_short { char p[0x70]; short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oE8_short { char p[0xE8]; short v; };
struct oF4_float { char p[0xF4]; float v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o12_short { char p[0x12]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o500_int { char p[0x500]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54C_int { char p[0x54C]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };




void FUN_0c0c9e86(int a4)
{
    int t1;
    float u22;
    float u24;
    int stk[8];

    t1 = *(int *)0xC23A258;
    if ((*(int *)((a4 + 0x30))) != t1) {
        *(unsigned int *)((a4 + 0x30)) = t1;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
        nlRotateAY((*(int *)((a4 + 0x10))));
        nlRotateAX((*(int *)((a4 + 0xC))));
        nlRotateAZ((*(int *)((a4 + 0x14))));
        nlGetMatrix((a4 + 0x34));
        nlInvertMatrix(0x0);
        nlGetMatrix((a4 + 0x74));
        nlUnitMatrix();
        FUN_0c0dd2f0((*(int *)((a4 + 0x18))), 1.0f, 9.99999975e-05f, 300.0f);
        nlGetMatrix((0xB4 + a4));
        FUN_0c0db470(0xC1E9CB8, ((int)stk + 4));
        u22 = *(float *)(((int)stk + 4));
        u24 = 1.0f;
        if (u22 != 0.0f) {
            u24 = (27.5999985f / u22);
        }
        *(float *)((a4 + 0xF4)) = u24;
        nlPopMatrix(0x1);
    }
}

int FUN_0c0d6d74(int a4)
{
    int *r;
    int t1;
    int t2;
    int t20;

    r = (int *)(0xC943614 + *(int *)(a4 + 0x8) * 80);
    t1 = (((struct o5C_int *)(a4))->v);
    t2 = (((struct o60_int *)(a4))->v);
    r[0] = (~t2) & t1;
    r[1] = (~t1) & t2;
    r[2] = t1;
    r[3] = t2;
    r[5] = r[4];
    r[7] = r[6];
    r[9] = r[8];
    r[11] = (r[0] & 0x200) != 0 ? 0 : r[11] + 1;
    r[12] = (r[0] & 0x2) != 0 ? 0 : r[12] + 1;
    r[13] = (r[0] & 0x400) != 0 ? 0 : r[13] + 1;
    if ((r[2] & 0x200) != 0) {
        t20 = r[4] + 1;
        r[4] = t20;
    } else {
        r[4] = 0;
        t20 = 0x60;
    }
    r[6] = (0x2 & r[2]) != 0 ? r[6] + 1 : 0;
    r[8] = (0x400 & r[2]) != 0 ? r[8] + 1 : 0;
    return t20;
}

float FUN_0c01ec10(int a4, float f4, float f5, float f6)
{
    int t9;
    int stk[12];
    float R1004;
    float R1008;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    R1008 = f4;
    R1004 = f6;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((a4 + 0x50));
    *(float *)(((int)stk + 24)) = (R1008);
    *(float *)(((int)stk + 28)) = f5;
    *(float *)(((int)stk + 32)) = (R1004);
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
    t9 = FUN_0c0e1138((*(int *)((a4 + 0x90))), (*(float *)(((int)stk + 24))), ((*(float *)(((int)stk + 28))) + (1.0f + 1.0f)), (*(float *)(((int)stk + 32))));
    if (t9 != 0) {
        FUN_0c0dbda0((a4 + 0x10));
        FUN_0c0db470(0xC94C6C4, (((int)stk + 4) + 0x8));
        if ((*(float *)(((int)stk + 16))) > f5) {
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (*(float *)0xC01ED44));
        } else {
            *(float *)(((int)stk + 16)) = (*(float *)0xC01ED48);
        }
    } else {
        *(float *)(((int)stk + 16)) = (*(float *)0xC01ED48);
    }
    nlPopMatrix(0x1);
    return (*(float *)(((int)stk + 16)));
}


int FUN_0c037ee8(int a4)
{
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3E8_int *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    nlPushMatrix(0x0);
    nlMultiMatrix((0x2B0 + a4));
    FUN_0c0c47ae(((((struct o238_int *)(a4))->v)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x40));
    FUN_0c0c47ae(((((struct o23C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x80));
    FUN_0c0c47ae(((((struct o240_int *)(a4))->v)));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c0510be(int a4)
{
    int t8;
    int t23;
    int t33;
    int stk[5];

    t33 = (((struct o330_int *)(a4))->v);
    if ((t33 != 2) && (t33 != 3)) {
        if (t33 != 4) {
        } else {
            t33 = 0x344;
            if (((((struct o344_int *)(a4))->v)) != 0) {
                t8 = (((struct oBC_int *)(a4))->v);
                *(float *)(((int)stk + 4)) = ((((struct o4_float *)(((0xC23F268 + (((((t8 << 1) + t8) << 2) << 2) << 2)) + 0x3C)))->v));
                *(float *)(((int)stk + 0)) = ((((struct o30_float *)(a4))->v));
                *(float *)(((int)stk + 8)) = ((((struct o38_float *)(a4))->v));
                FUN_0c056118(a4, 0x3, ((int)stk + 0), 0x0);
                t33 = (FUN_0c0519f0(a4));
            }
        }
    } else {
        t33 = 0x348;
        if (((((struct o348_int *)(a4))->v)) != 0) {
            t23 = (((struct oBC_int *)(a4))->v);
            *(float *)(((int)stk + 4)) = ((((struct o4_float *)(((0xC23F268 + (((((t23 << 1) + t23) << 2) << 2) << 2)) + 0x24)))->v));
            *(float *)(((int)stk + 0)) = ((((struct o30_float *)(a4))->v));
            *(float *)(((int)stk + 8)) = ((((struct o38_float *)(a4))->v));
            FUN_0c056118(a4, 0x3, ((int)stk + 0), 0x1);
            t33 = (FUN_0c0519f0(a4));
        }
    }
    return t33;
}

void FUN_0c082fae(int a4, int a5, int a6, int a7, float f4, float f5)
{
    float u3;
    float u20;
    float u21;
    float t4;
    float t5;
    float u9;
    float u6;

    u3 = *(float *)((((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + (*(int *)((0xC1027E0 + (a5 << 2))))) + 0x0));
    u20 = u3;
    u21 = f4;
    if ((a5 != 6) && ((a5 != 7) && (a5 != 8))) {
    } else {
        t4 = FUN_0c082e20(u3);
        t5 = FUN_0c082e20(f4);
        u9 = (t5 - 65536.0f);
        if ((t5 - t4) > 32767.0f) {
        } else {
            u6 = t5;
            if (-32768.0f > (t5 - t4)) {
                u6 = (t5 + 65536.0f);
            }
            u9 = u6;
        }
        u20 = t4;
        u21 = u9;
    }
    *(unsigned int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x8)) = (*(int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x4)));
    *(unsigned int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x4)) = 0x0;
    *(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x10)) = u20;
    *(unsigned int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x0)) = a6;
    *(unsigned short *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x14)) = a7;
    *(unsigned short *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0x16)) = 0x0;
    *(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC247DB8) + 0xC)) = u21;
}

int FUN_0c086cac(int a4)
{
    int t0;
    float u9;
    float u10;
    int t20;
    int t22;
    int t17;
    int stk[8];

    t0 = (((struct o44_int *)(a4))->v);
    (((struct o44_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)((((struct o48_int *)(a4))->v))) {
        (((struct o44_uint *)(a4))->v) = 0x0;
        *(float *)(((int)stk + 0)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        *(float *)(((int)stk + 4)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        *(float *)(((int)stk + 8)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        FUN_0c0dce80(((int)stk + 0), ((int)stk + 0), ((((struct o3C_float *)(a4))->v)));
        nlAddVector(((int)stk + 0), (a4 + 0x30));
        u9 = (((struct o40_float *)(a4))->v);
        u10 = 1.0f;
        u10 = u10 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        FUN_0c086bda(((int)stk + 0), (u9 * u10));
    } else {
        t17 = a4;
    }
    t20 = (((struct o4C_int *)(a4))->v);
    (((struct o4C_uint *)(a4))->v) = (t20 - 1);
    t22 = 0x4C;
    if ((int)(t20 - 1) <= 0) {
        t22 = (FUN_0c0e19f2());
    }
    return t22;
}

int FUN_0c0c1714(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0db0a0(0x14, 0x32);
    nlPrintf(0xC1E3B18, (((((struct oC0_int *)(t0))->v))), (((((struct oC4_int *)(t0))->v))));
    FUN_0c0db0a0(0x14, 0x33);
    nlPrintf(0xC1E3B30, ((((struct o30_float *)(t0))->v)));
    FUN_0c0db0a0(0x14, 0x34);
    nlPrintf(0xC1E3B44, ((((struct o34_float *)(t0))->v)));
    FUN_0c0db0a0(0x14, 0x35);
    nlPrintf(0xC1E3B58, ((((struct o38_float *)(t0))->v)));
    FUN_0c0db0a0(0x14, 0x36);
    nlPrintf(0xC1E3B6C, (unsigned short)((((struct o6C_short *)(t0))->v)));
    FUN_0c0db0a0(0x14, 0x37);
    nlPrintf(0xC1E3B80, (unsigned short)((((struct o6E_short *)(t0))->v)));
    FUN_0c0db0a0(0x14, 0x38);
    return (nlPrintf(0xC1E3B94, (unsigned short)((((struct o70_short *)(t0))->v))));
}

int FUN_0c0d9dc0(float f4, float f5)
{
    int t1;
    int t9;
    int t17;
    int t24;

    if (!(f4 > f5)) {
        if (!((-f4) > f5)) {
            if (f5 == 0.0f) {
                return 0x0;
            }
            return FUN_0c0d9d20((f4 / f5));
        }
        t1 = 0xC000;
        if (f4 == 0.0f) {
        } else {
            t1 = (((-(FUN_0c0d9d20((f5 / f4)))) + 0xC000) & 0xFFFF);
        }
        return t1;
    }
    if (!((-f4) > f5)) {
        t9 = 0x4000;
        if (f4 == 0.0f) {
        } else {
            t9 = (((-(FUN_0c0d9d20((f5 / f4)))) + 0x4000) & 0xFFFF);
        }
        t24 = t9;
    } else {
        t17 = 0x8000;
        if (f5 == 0.0f) {
        } else {
            t17 = (((FUN_0c0d9d20((f4 / f5))) + 0x8000) & 0xFFFF);
        }
        t24 = t17;
    }
    return t24;
}


int FUN_0c0351bc(int a4, int a5, int a6, int a7)
{
    int t19;
    int t20;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0351BC:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = R6;
    R14 = (R4);
    if ((((((struct o508_int *)(R4))->v)) != 0)) goto L_C035206;
    goto L_C0351D2;
    L_C0351D2:;
    if ((((((struct o50C_int *)(R14))->v)) == 0)) goto L_C035252;
    goto L_C0351DA;
    L_C0351DA:;
    R0 = (0x510);
    R4 = (0xC246FF0);
    if (((*(int *)((((((((struct o510_int *)(R14))->v)) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C0351F6;
    goto L_C0351EE;
    L_C0351EE:;
    (((struct o50C_uint *)(R14))->v) = 0x0;
    goto L_C035252;
    L_C035252:;
    R0 = (0x0);
    goto L_C035254;
    L_C035254:;
    return R0;
    L_C0351F6:;
    R13 = (((*(int *)(((((*(int *)((R14 + R0))) << 2) + R4) + 0x0))) + 0x30));
    goto L_C035212;
    L_C035212:;
    FUN_0c0a68ec(((int)stk + 0), (((((struct o30_float *)(R14))->v)) - (*(float *)((R13 + 0x0)))), (((((struct o38_float *)(R14))->v)) - ((((struct o8_float *)(R13))->v))));
    t19 = *(int *)(((int)stk + 0));
    t20 = (((struct o6E_short *)(R14))->v);
    R4 = ((short)(t20 - t19));
    if ((!(16384.0f > _builtin_fabsf((float)(short)(t20 - t19))))) goto L_C035252;
    goto L_C035242;
    L_C035242:;
    FUN_0c0546fe(R14, (*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    R0 = (0x1);
    goto L_C035254;
    L_C035206:;
    if ((((((struct o514_int *)(R14))->v)) == 0)) goto L_C035252;
    goto L_C03520E;
    L_C03520E:;
    R13 = ((0x518 + R14));
    goto L_C035212;
}

int FUN_0c07b1ee(int a4, int a5, int a6, int a7)
{
    int t1;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = (((struct o80_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) - (1.0f + 1.0f));
            if (!(((((struct o90_float *)(a4))->v)) > 0.0f)) {
                (((struct o90_float *)(a4))->v) = 0.0f;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(0xC000);
    FUN_0c0dcc70(((((struct o90_float *)(a4))->v)), 0.0f, 0.0f);
    FUN_0c0c465c(0x1213);
    FUN_0c0dcc70((-(((((struct o90_float *)(a4))->v)) * (1.0f + 1.0f))), 0.0f, 0.0f);
    FUN_0c0c465c(0x1214);
    return nlPopMatrix(0x1);
}

int FUN_0c0a73ec(float f4, float f5, float f6, float f7, float f8, float f9)
{
    float u1;
    float u6;
    float u7;
    float u11;
    int stk[24];
    float R1004;
    float R1008;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    R1004 = f6;
    R1008 = (f8 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)));
    nlGetMatrix((((int)stk + 4) + 0x8));
    u1 = 1.0f;
    u1 = u1 + (f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9))) * f4;
    *(float *)(((int)stk + 12)) = u1;
    *(float *)(((int)stk + 16)) = (f5 * ((f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 20)) = ((R1004) * ((f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    u6 = R1008;
    *(float *)(((int)stk + 28)) = (f4 * u6);
    u7 = 1.0f;
    u7 = u7 + u6 * f5;
    *(float *)(((int)stk + 32)) = u7;
    *(float *)(((int)stk + 48)) = (f5 * ((f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 44)) = (f4 * ((f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 36)) = ((R1004) * u6);
    u11 = 1.0f;
    u11 = u11 + (f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9))) * (R1004);
    *(float *)(((int)stk + 52)) = u11;
    return (FUN_0c0dbda0((((int)stk + 4) + 0x8)));
}

int FUN_0c0ca6d2(int a4, int a5, float f4)
{
    int t38;
    float u7;
    float u11;
    float u14;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t38 = 0x0;
    if (a4 != 0) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder(((*(int *)(((int)stk + 4))) + 0x2EC));
        FUN_0c0c9e86(a5);
        nlMultiMatrixRevOrder((a5 + 0x74));
        u7 = (((struct o14_float *)(a4))->v);
        FUN_0c0db430((a4 + 0x8), (((int)stk + 4) + 0x4));
        nlPopMatrix(0x1);
        t38 = 0x0;
        if (!(((*(float *)(((int)stk + 16))) - u7) > 0.0f)) {
            u11 = *(float *)(((int)stk + 8));
            t38 = 0x0;
            if (!((-((((struct oF4_float *)(a5))->v))) > (u11 + u7))) {
                t38 = 0x0;
                if (!((u11 - u7) > ((((struct oF4_float *)(a5))->v)))) {
                    u14 = *(float *)(((int)stk + 12));
                    t38 = 0x0;
                    if (!((-((((struct oF4_float *)(a5))->v))) > (u14 + u7))) {
                        t38 = 0x1;
                        if ((u14 - u7) > ((((struct oF4_float *)(a5))->v))) {
                            t38 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t38;
}

int FUN_0c23314c(int a4)
{
    int t27;
    int t8;
    int t9;
    int t15;
    int t16;
    int t4;

    t27 = 0x7000102;
    if (a4 == 0) {
    } else {
        if ((*(int *)((a4 + 0xC))) != 0) {
            t4 = (FUN_0c0e4d2c((*(short *)((a4 + 0x2)))));
        }
        t8 = t4;
        t9 = 0x0;
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((a4 + 0x4)))) {
                break;
            }
            t8 = (FUN_0c0e563c((*(int *)((((t9 << 2) + (a4 + 0x20)) + 0x0)))));
            if ((int)t8 < 0) {
                t8 = (mwRnaErrCallFunc(0xC238730));
            }
            t9 = (t9 + 0x1);
        }
        t15 = t8;
        t16 = 0x0;
        for (;;) {
            if ((int)t16 >= (int)(*(int *)((a4 + 0x4)))) {
                break;
            }
            t15 = (FUN_0c0e563c((*(int *)((((t16 << 2) + (a4 + 0x28)) + 0x0)))));
            if ((int)t15 < 0) {
                t15 = (mwRnaErrCallFunc(0xC238730));
            }
            t16 = (t16 + 0x1);
        }
        FUN_0c0e4c34((*(short *)((a4 + 0x2))));
        mwlSbFreeWork((*(int *)((a4 + 0x10))));
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        memset(a4, 0x0, 0x50);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        t27 = 0x0;
    }
    return t27;
}

int FUN_0c021d30(int a4)
{
    int t0;
    int t6;
    int t19;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)((((((t0 << 2) << 2) << 1) + 0xC246314) + 0x0))) != (*(int *)0xC23ED50)) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
            continue;
        }
        break;
    }
    if ((int)t0 >= (int)0x4) {
        t6 = 0x0;
        for (;;) {
            if ((*(int *)((0xC246314 + (((t6 << 2) << 2) << 1)))) == -1) {
                break;
            }
            t6 = (t6 + 0x1);
            if ((int)t6 >= (int)0x4) {
                *(unsigned int *)0xC246310 = (*(int *)((((((t6 << 2) << 2) << 1) + 0xC246314) + 0x10)));
                return t6;
            }
        }
        *(unsigned int *)(((0xC246314 + (((t6 << 2) << 2) << 1)) + 0x0)) = (*(int *)0xC23ED50);
        *(unsigned int *)(((0xC246314 + (((t6 << 2) << 2) << 1)) + 0x4)) = (*(int *)((((((*(int *)0xC23ED50) << 2) << 1) + (*(int *)((a4 + 0x50)))) + 0x0)));
        *(unsigned int *)(((0xC246314 + (((t6 << 2) << 2) << 1)) + 0x8)) = 0x1;
        *(unsigned int *)(((0xC246314 + (((t6 << 2) << 2) << 1)) + 0x10)) = 0x0;
        *(unsigned int *)((((((t6 << 2) << 2) << 1) + 0xC246314) + 0x1C)) = 0x0;
        t19 = t6;
    } else {
        t19 = t0;
    }
    *(unsigned int *)0xC246310 = (*(int *)((((((t19 << 2) << 2) << 1) + 0xC246314) + 0x10)));
    return t19;
}

int FUN_0c053f0c(int a4, int a5)
{
    int t0;
    int t36;
    int t41;
    int t45;
    int t43;
    int t71;
    int t24;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC23A1A8;
    if (((t0 & 0x100) == 0) && (t71 = (((struct oE8_short *)(a4))->v), (int)t71 < (int)0x4)) {
    } else {
        t71 = 0xE8;
        if (((t0 & 0x100) != 0) && (t24 = (((struct oE8_short *)(a4))->v), (int)t24 < 0)) {
        } else {
            t36 = *(int *)((0xC247030 + (((((struct oE8_short *)(a4))->v)) << 2)));
            t71 = t36;
            if (t36 == 4) {
                t41 = *(int *)((((((((struct oE8_short *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
                t45 = (t41 + 0x30);
                if ((((((struct oC8_int *)(t41))->v)) & 0x3FF) != 0) {
                    t43 = (((struct oE8_short *)(a4))->v);
                    t45 = (((((((t43 << 1) + t43) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                FUN_0c0a68ec(((int)stk + 0), (((((struct o30_float *)(a4))->v)) - (*(float *)((t45 + 0x0)))), (((((struct o38_float *)(a4))->v)) - ((((struct o8_float *)(t45))->v))));
                t71 = (FUN_0c054654(a4, (*(int *)(((int)stk + 0))), 0x400, (*(int *)(((int)stk + 4)))));
            }
        }
    }
    return t71;
}

int FUN_0c0ba1d8(int a4)
{
    int t1;
    int t2;
    float u8;

    nlPushMatrix(0x0);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((a4 + 0x3C));
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0x0))), ((((struct o4_float *)((((((t2 << 2) + t1) << 2) << 2) + 0xC112730)))->v)), ((((struct o8_float *)((((((t2 << 2) + t1) << 2) << 2) + 0xC112730)))->v)));
        u8 = *(float *)((((a4 + 0x30) + (t1 << 2)) + 0x0));
        nlScale(u8, u8, u8);
        FUN_0c0de000((*(float *)((((t1 << 2) + (a4 + 0x30)) + 0x0))));
        if (((((struct o40_int *)(a4))->v)) == t1) {
            FUN_0c0c4784((*(int *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0xC))), 0.299999982f);
        } else {
            FUN_0c0c473c((*(int *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0xC))));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0d26a8(void)
{
    int t0;
    int t6;
    int t18;

    t0 = FUN_0c0e1830(0xC0D2DD4, 0x6C);
    (((struct o8_uint *)0xC9433FC)->v) = t0;
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) & 0x60100);
    (((struct o38_uint *)0xC9433FC)->v) = 0x0;
    (((struct o5C_uint *)(t0))->v) = (FUN_0c0d1870());
    (((struct o60_uint *)(t0))->v) = (FUN_0c0cee40());
    (((struct o0_uint *)0xC9433FC)->v) = 0x0;
    t6 = *(int *)(((((((struct o4_int *)0xC522D78)->v)) << 2) + 0xC20BE68));
    (((struct o3C_uint *)0xC9433FC)->v) = t6;
    if (t6 != -1) {
        (((struct o3C_uint *)0xC9433FC)->v) = (((((struct o3C_int *)0xC9433FC)->v)) * 0x3C);
    }
    *(unsigned int *)0xC94343C = (*(int *)(((((((struct o0_int *)0xC522D78)->v)) << 2) + 0xC20BE7C)));
    *(unsigned int *)0xC23EDAC = 0x1;
    FUN_0c0d37e8();
    FUN_0c0d3684();
    *(unsigned int *)0xC247D04 = 0xA;
    FUN_0c0d1b00();
    FUN_0c0cc7d8((*(int *)0xC23ED50));
    t18 = FUN_0c0d3a3a();
    *(unsigned int *)0xC24FA14 = 0x1;
    return t18;
}

int FUN_0c016438(void)
{
    int t11;

    FUN_0c0198c2();
    FUN_0c0bfa90();
    FUN_0c0169da(0x0);
    FUN_0c0169da(0x1);
    FUN_0c0ce87e();
    FUN_0c086b70();
    FUN_0c0b25d0();
    FUN_0c016d2c();
    (((struct o0_uint *)0xC23ED58)->v) = 0x6B;
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    (((struct o0_uint *)0xC23ED9C)->v) = 0x1;
    (((struct o2C_uint *)0xC23ED58)->v) = 0x1;
    (((struct o8_uint *)0xC23ED58)->v) = 0x0;
    (((struct o1C_uint *)0xC23ED58)->v) = 0x0;
    (((struct o28_uint *)0xC23ED58)->v) = 0x0;
    (((struct o1C_uint *)0xC23ED9C)->v) = 0x0;
    *(unsigned int *)0xC23EE54 = 0x0;
    (((struct o24_uint *)0xC23ED58)->v) = (((((struct o24_int *)0xC23ED58)->v)) + 0x1);
    (((struct o14_uint *)0xC23ED58)->v) = 0x3;
    t11 = 0xFFFFFFFD;
    if (((((((struct o24_int *)0xC23ED58)->v)) + 0x1) & 7) != 0) {
        t11 = 0x0;
    }
    (((struct o18_uint *)0xC23ED58)->v) = t11;
    (((struct o0_uint *)0xC23EE04)->v) = (*(int *)0xC2475B4);
    (((struct o4_uint *)0xC23EE04)->v) = (*(int *)0xC2475B4);
    (((struct o8_uint *)0xC23EE04)->v) = (*(int *)0xC2475B4);
    (((struct oC_uint *)0xC23EE04)->v) = (*(int *)0xC2475B4);
    return FUN_0c0164d6();
}

int FUN_0c04b8e4(int a4, int a5, int a6, int a7)
{
    int t1;
    int t18;
    int t3;
    int stk[4];

    (((struct o0_uint *)0xC23ED88)->v) = (((((struct o0_int *)0xC23ED88)->v)) | 0x10000);
    t1 = (((struct o2EC_int *)(a4))->v);
    t18 = t1;
    if ((t1 & 12) != 0) {
        t3 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
        FUN_0c0cc3f8(0xB20A9, a5, a6, a7);
        FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x1A);
        (((struct o20C_uint *)(a4))->v) = 0x100;
        (((struct o210_uint *)(a4))->v) = 0x63;
        (((struct o2D4_uint *)(a4))->v) = 0x0;
        (((struct oCC_uint *)(a4))->v) = 0x0;
        (((struct o2C4_uint *)(a4))->v) = 0x43F;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct oD0_uint *)(t3))->v) = 0xFFFFFFFF;
        (((struct o2C4_uint *)(t3))->v) = (((((struct o2C4_int *)(t3))->v)) + 0x1);
        (((struct o2CC_uint *)(t3))->v) = 0x1;
        if (((((struct o24_int *)0xC23ED88)->v)) == 1) {
            (((struct o1EC_uint *)(a4))->v) = 0x0;
        } else {
            (((struct o1EC_uint *)(a4))->v) = 0xF;
        }
        if (((((struct oB4_float *)(a4))->v)) > ((((struct o34_float *)(a4))->v))) {
            (((struct o34_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + (*(float *)0xC04BA00));
        }
        t18 = 0x34;
    }
    return t18;
}

int FUN_0c054ae0(int a4)
{
    int t1;
    int t22;
    int t7;
    int t10;
    int t13;
    int t2;
    int stk[5];

    t1 = *(short *)((a4 + 0xE8));
    t22 = 0x0;
    if (((((*(int *)0xC23A1A8) & 0x100) == 0) && ((int)t1 < (int)0x4)) || (t2 = *(int *)(((t1 << 2) + 0xC247030)), t2 != 4)) {
    } else {
        t7 = *(int *)((((t1 << 2) + 0xC246FF0) + 0x0));
        t10 = (t7 + 0x30);
        if (((*(int *)((t7 + 0xC8))) & 0x3FF) != 0) {
            t10 = (((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
        }
        t13 = *(int *)((a4 + 0xBC));
        FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x0))) - (*(float *)((t10 + 0x0)))), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x4))) - (*(float *)((t10 + 0x4)))), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x8))) - (*(float *)((t10 + 0x8)))));
        t22 = (*(int *)(((int)stk + 0)));
    }
    return t22;
}

int FUN_0c0651ac(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    nlSubVector3op((((int)stk + 0) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 0) + 0x18), (*(int *)(((int)stk + 8))));
    FUN_0c0dce80((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18), (*(float *)(((int)stk + 0))));
    nlAddVector((((int)stk + 0) + 0x18), a5);
    nlSubVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), a4);
    FUN_0c0a78fc((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAX((*(int *)((a4 + 0x18))));
    nlRotateAZ((*(int *)((a4 + 0x1C))));
    return (FUN_0c0db470((*(int *)(((int)stk + 4))), a5));
}

int FUN_0c0652a2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    nlSubVector3op((((int)stk + 0) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 0) + 0x18), (*(int *)(((int)stk + 8))));
    FUN_0c0dce80((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18), (*(float *)(((int)stk + 0))));
    nlAddVector((((int)stk + 0) + 0x18), a5);
    nlSubVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), a4);
    FUN_0c0a7714((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x1C))));
    nlRotateAX((*(int *)((a4 + 0x18))));
    return (FUN_0c0db470((*(int *)(((int)stk + 4))), a5));
}

int FUN_0c065398(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    nlSubVector3op((((int)stk + 0) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 0) + 0x18), (*(int *)(((int)stk + 8))));
    FUN_0c0dce80((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18), (*(float *)(((int)stk + 0))));
    nlAddVector((((int)stk + 0) + 0x18), a5);
    nlSubVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), a4);
    FUN_0c0a77fe((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x18))));
    nlRotateAZ((*(int *)((a4 + 0x1C))));
    return (FUN_0c0db470((*(int *)(((int)stk + 4))), a5));
}

int FUN_0c06b114(int a4)
{
    int t0;
    int t1;
    float t2;
    int t3;
    float u7;
    int t8;
    int t11;

    t0 = *(int *)0xC23ED50;
    if (t0 != 64) {
        t1 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t1 + 0x100);
        t2 = FUN_0c0da410((t1 + 0x100));
        t3 = (((struct o4C_int *)(a4))->v);
        (((struct o4C_uint *)(a4))->v) = (t3 + 0x400);
        (((struct o40_uint *)(a4))->v) = (int)((((FUN_0c0da410((t3 + 0x400))) * t2)) * (*(float *)0xC06B1E8));
        u7 = *(float *)0xC06B1EC;
        t8 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t8 + 0x400);
        (((struct o44_uint *)(a4))->v) = (int)((((FUN_0c0da410((t8 + 0x400))) * t2)) * u7);
        t11 = (((struct o54_int *)(a4))->v);
        (((struct o54_uint *)(a4))->v) = (t11 + 0x400);
        (((struct o48_uint *)(a4))->v) = (int)((((FUN_0c0da410((t11 + 0x400))) * t2)) * u7);
        return FUN_0c06b060(a4);
    }
    return t0;
}

int FUN_0c067cd4(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC067DE4, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)((((struct o12_short *)0xC1FFE34)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC1FFE34); }
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c08476e(0.5f, 0.5f, 0.5f);
    FUN_0c0845f0(0x1);
    FUN_0c084610(0x1, 0x3);
    FUN_0c0846be(0x1, 15.0f);
    FUN_0c0846de(0x1, 0.0f, 0.799999952f, 0.299999982f, 0.0f);
    FUN_0c0845f8(0x1, 0x1);
    return FUN_0c084622(0x1, ((((struct o0_float *)0xC1FFE34)->v)), (((((struct o4_float *)0xC1FFE34)->v)) + 1.0f), ((((struct o8_float *)0xC1FFE34)->v)));
}

void FUN_0c0ce7e0(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t11;

    if ((*(signed char *)(((0xC522E48 + a4) + 0x0))) != 0) {
        *(unsigned char *)(((0xC522E48 + a4) + 0x0)) = 0x0;
        t1 = *(int *)(((a4 << 2) + 0xC522E40));
        t2 = (((struct o4_int *)0xC522E34)->v);
        *(unsigned short *)((((a4 << 1) + 0xC522ABC) + 0x0)) = ((*(short *)((((a4 << 1) + 0xC522ABC) + 0x0))) + 0x1);
        if ((unsigned int)(t2 - t1) > (unsigned int)((((struct o4_int *)0xC522AC4)->v))) {
            (((struct o4_uint *)0xC522AC4)->v) = (t2 - t1);
        }
        if ((unsigned int)(t2 - t1) < (unsigned int)((((struct o8_int *)0xC522AC4)->v))) {
            (((struct o8_uint *)0xC522AC4)->v) = (t2 - t1);
        }
        if (((((struct o8_int *)0xC522AC4)->v)) == 0) {
            (((struct o8_uint *)0xC522AC4)->v) = (t2 - t1);
        }
        (((struct o0_uint *)0xC522AC4)->v) = (((((struct o0_int *)0xC522AC4)->v)) + (t2 - t1));
        t11 = 0x0;
        for (;;) {
            if ((unsigned int)(t2 - t1) < (unsigned int)(unsigned short)(*(short *)((0xC20B15C + (t11 << 1))))) {
                break;
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x14) {
                if (t11 == 20) {
                    t11 = (t11 << 1);
                    t11 = (t11 + 0xC522AD4);
                    *(unsigned short *)((t11 + 0x0)) = ((*(short *)((t11 + 0x0))) + 0x1);
                    (((struct o0_uint *)0xC522E34)->v) = 0x1;
                    return;
                }
                (((struct o0_uint *)0xC522E34)->v) = 0x1;
                return;
            }
        }
        *(unsigned short *)((((t11 << 1) + 0xC522AD4) + 0x0)) = ((*(short *)((((t11 << 1) + 0xC522AD4) + 0x0))) + 0x1);
        if (t11 == 20) {
            *(unsigned short *)((((t11 << 1) + 0xC522AD4) + 0x0)) = ((*(short *)((((t11 << 1) + 0xC522AD4) + 0x0))) + 0x1);
        }
        (((struct o0_uint *)0xC522E34)->v) = 0x1;
    }
}


int FUN_0c0e432e(int a4, int a5, int a6)
{
    int t16;
    int t21;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            t21 = 0xFFFFFFFE;
            if (a5 != 0x20A4) {
            } else {
                t21 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
        } else {
            t21 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
        }
    } else {
        t16 = FUN_0c0e4428((((a6 & 0x7F00) << 8) + 0x70A4));
        t21 = t16;
        if (t16 != 0) {
        } else {
            t21 = (FUN_0c0e4428((0xA4 + ((a6 & 0x7F) << 16))));
        }
    }
    return t21;
}

int adxf_SetFileInfo(int a4, int a5)
{
    int t18;
    int stk[8];

    t18 = ADXSTM_GetFad(a5, (((int)stk + 0) + 0x8));
    if ((int)t18 < 0) {
        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
    } else {
        t18 = ADXSTM_GetFsizeSct(a5, (((int)stk + 0) + 0x4));
        if ((int)t18 < 0) {
            ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
        } else {
            t18 = FUN_0c22abc0(a5, ((int)stk + 0));
            if ((int)t18 < 0) {
                ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 0)));
                t18 = 0x0;
            }
        }
    }
    return t18;
}

int syTmrInt1Cancel(void)
{
    int t0;

    t0 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t0 & 0xFD);
    (((struct o18_ushort *)0xFFD80004)->v) = (((((struct o18_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    return (t0 & 0xFD);
}

int FUN_0c02b8ba(int a4)
{
    int t0;
    int t3;
    int stk[9];

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        (((struct o538_uint *)(a4))->v) = 0xA;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        return 0x4F8;
    }
    FUN_0c034e2c(a4);
    t3 = FUN_0c035ad6(a4, ((((struct o510_int *)(a4))->v)));
    if ((int)t3 >= (int)((((struct o528_int *)(a4))->v))) {
        FUN_0c03442c(a4, (*(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        if ((*(int *)(((int)stk + 12))) == 0) {
            (((struct o4E0_uint *)(a4))->v) = 0xFFFFFFFF;
            (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & 0xFFFFFFF3);
            (((struct o544_uint *)(a4))->v) = 0x5;
            (((struct o4F8_uint *)(a4))->v) = 0x4;
            (((struct o2D4_uint *)(a4))->v) = 0x4;
            return 0x2D4;
        }
        (((struct o538_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = 0x2;
        return 0x4F8;
    }
    (((struct o538_uint *)(a4))->v) = 0x1;
    (((struct o4F8_uint *)(a4))->v) = 0x2;
    return 0x4F8;
}

int FUN_0c03fed2(int a4)
{
    int t0;
    float t8;
    float t27;
    int t36;
    int stk[6];

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t36 = t0;
            if (t0 != 2) {
            } else {
                t36 = (FUN_0c041f2a(a4));
            }
        } else {
            (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.049999997f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o26C_float *)(a4))->v)) + 0.5f));
            t8 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 0));
            t36 = 0x34;
            if (t8 > ((((struct o34_float *)(a4))->v))) {
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                (((struct o34_float *)(a4))->v) = t8;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                t36 = (FUN_0c041dd0(a4));
            }
        }
    } else {
        FUN_0c041f2a(a4);
        (((struct o26C_float *)(a4))->v) = 0.0f;
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.049999997f);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o26C_float *)(a4))->v)) + 0.5f));
        t27 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 0));
        t36 = 0x34;
        if (t27 > ((((struct o34_float *)(a4))->v))) {
            (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
            (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
            (((struct o34_float *)(a4))->v) = t27;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            t36 = (FUN_0c041dd0(a4));
        }
    }
    return t36;
}

int FUN_0c04fffe(int a4, int a5)
{
    int t10;
    int t20;
    int t1;
    int t22;
    int t7;

    if ((((*(int *)((a5 + 0x8))) & 0x602) != 0) && (t1 = *(int *)0xC23ED9C, t1 == 4)) {
        if ((((((struct o3AC_int *)(a4))->v)) == 0) && (t7 = (((struct o2EC_int *)(a4))->v), (t7 & 12) != 0)) {
            (((struct o2C4_uint *)(a4))->v) = 0x16D;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3AC_uint *)(a4))->v) = 0x1;
        }
        t10 = *(int *)0xC23EE00;
        if ((*(int *)0xC247070) == 2) {
            (((struct oA0_float *)(t10))->v) = (((((struct oA0_float *)(t10))->v)) - 0.00599999959f);
        } else {
            (((struct oA0_float *)(t10))->v) = (((((struct oA0_float *)(t10))->v)) - 0.00899999961f);
        }
        *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x2);
        *(unsigned int *)((0xC2475A4 + (((((struct oBC_int *)(a4))->v)) << 2))) = 0x1;
        t20 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)((0xC2475A4 + (((t20 + 0x1) & 0x1) << 2))) = 0x0;
        t22 = (((t20 + 0x1) & 0x1) << 2);
    } else {
        (((struct o210_uint *)(a4))->v) = 0x9D;
        (((struct o2C4_uint *)(a4))->v) = 0x16E;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = (((((struct oA4_int *)(a4))->v)) | 0x2);
        t22 = 0xA4;
    }
    return t22;
}

float FUN_0c06c89c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u27;
    float u29;
    float u30;
    float u31;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u21;
    float u23;
    float u25;
    float s1;
    float s2;
    float s3;

    u0 = *(float *)((a6 + 0x0));
    u1 = (((struct o4_float *)(a6))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = *(float *)0xC06C9A0;
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (u1 * u1);
    u5 = u5 + u0 * u0;
    u6 = u5;
    u6 = u6 + u2 * u2;
    u7 = (((struct o4_float *)(a5))->v);
    u8 = (((struct o34_float *)(a4))->v);
    u9 = (((struct o8_float *)(a5))->v);
    u10 = (((struct o38_float *)(a4))->v);
    u11 = *(float *)((a5 + 0x0));
    u12 = ((u8 - u7) * (u8 - u7));
    u12 = u12 + (u4 - u11) * (u4 - u11);
    u13 = u12;
    u13 = u13 + (u10 - u9) * (u10 - u9);
    u27 = (u10 - u9);
    u29 = f10;
    u30 = (u4 - u11);
    u31 = (u10 - u9);
    s1 = _builtin_sqrtf(u13);
    if ((*(float *)0xC06C9A4) > s1) {
        u15 = *(float *)((a5 + 0x0));
        u16 = (((struct o30_float *)(a4))->v);
        u17 = (((struct o8_float *)(a5))->v);
        u18 = (((struct o38_float *)(a4))->v);
        u19 = ((u18 - u17) * (u18 - u17));
        u19 = u19 + (u16 - u15) * (u16 - u15);
        u21 = ((((struct o58_float *)(a4))->v));
        s2 = _builtin_sqrtf(u6);
        u21 = u21 + (s2 / u3) * f5;
        (((struct o58_float *)(a4))->v) = u21;
        u23 = ((((struct o54_float *)(a4))->v));
        s3 = _builtin_sqrtf(u19);
        u23 = u23 + (s2 / u3) * ((((u16 - u15) / s3) / s1) * f4);
        (((struct o54_float *)(a4))->v) = u23;
        u25 = ((((struct o5C_float *)(a4))->v));
        u25 = u25 + (s2 / u3) * ((((u18 - u17) / s3) / s1) * f4);
        (((struct o5C_float *)(a4))->v) = u25;
        u27 = (s2 / u3);
        u29 = s3;
        u30 = ((((u16 - u15) / s3) / s1) * f4);
        u31 = ((((u18 - u17) / s3) / s1) * f4);
    }
    return u27;
}

int FUN_0c098e1c(int a4, int a5, int a6)
{
    float u4;
    int t5;
    float u6;
    float u9;
    int t15;

    if (((a4 - (*(int *)((a5 + 0x0)))) == 8) && ((int)a4 < (int)0x3C)) {
        *(unsigned int *)((a5 + 0x0)) = a4;
        *(float *)((a5 + 0x4)) = ((((float)(unsigned char)(FUN_0c0da2e0()) * (*(float *)(((((a6 << 2) << 1) + 0xC10BFB4) + 0x4)))) / 255.0f) + (*(float *)(((((a6 << 2) << 1) + 0xC10BFB4) + 0x0))));
        u4 = *(float *)(((a6 << 2) + 0xC10BF8C));
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
    }
    return FUN_0c098c2e(a4, (*(int *)((a5 + 0x0))), t15, (*(float *)((a5 + 0x4))), (*(float *)((a5 + 0x8))));
}

int FUN_0c0bdec2(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t19;
    int t2;
    int t3;
    int t4;
    int t5;
    float u9;
    float u10;
    float u12;
    float u13;
    float u14;
    int t15;
    int t16;
    int t17;
    int stk[17];

    t0 = *(short *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x0));
    t19 = t0;
    if (t0 != 0) {
        t2 = t0;
        t3 = t1;
        for (;;) {
            t4 = *(int *)((t3 + 0x24));
            t5 = *(int *)((t3 + 0x28));
            FUN_0c0db470(t3, (((int)stk + 0) + 0x10));
            *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 16)));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = ((*(int *)((((int)stk + 0) + 0x0))) | 0x1);
            u9 = *(float *)(((int)stk + 20));
            u10 = *(float *)(((int)stk + 24));
            FUN_0c0db4d0((t3 + 0xC), (((int)stk + 0) + 0x4));
            u12 = *(float *)(((int)stk + 4));
            u13 = *(float *)(((int)stk + 8));
            u14 = *(float *)(((int)stk + 12));
            t15 = t4;
            t16 = t5;
            for (;;) {
                t17 = *(int *)((t16 + 0x0));
                t16 = (t16 + 0x4);
                t15 = (t15 - 0x1);
                *(float *)((t17 + 0x0)) = (*(float *)(((int)stk + 0)));
                *(float *)((t17 + 0x4)) = u9;
                *(float *)((t17 + 0x8)) = u10;
                *(float *)((t17 + 0xC)) = u12;
                *(float *)((t17 + 0x10)) = u13;
                *(float *)((t17 + 0x14)) = u14;
                if (t15 == 0) {
                    break;
                }
            }
            t2 = (t2 - 0x1);
            t3 = (t3 + 0x2C);
            if (t2 == 0) {
                break;
            }
        }
        t19 = 0x14;
    }
    return t19;
}

int FUN_0c0b8632(void)
{
    int stk[2];

    FUN_0c0bfa90();
    FUN_0c0e2400();
    FUN_0c0c45d0();
    FUN_0c084104();
    FUN_0c0c0384();
    FUN_0c0cdff2();
    if (((((struct o0_int *)0xC23ED50)->v)) == 0) {
        (((struct o0_uint *)0xC23ED50)->v) = 0xB;
    }
    FUN_0c0169da(0x0);
    FUN_0c0169da(0x1);
    (((struct o34_uint *)0xC23ED50)->v) = 0x0;
    (((struct o18_uint *)0xC23ED98)->v) = 0x0;
    (((struct o1C_uint *)0xC23ED98)->v) = 0x0;
    *(unsigned int *)0xC2475B0 = 0x0;
    (((struct o38_uint *)0xC23ED50)->v) = 0x0;
    (((struct o10_uint *)0xC23ED50)->v) = 0x0;
    (((struct oC_uint *)0xC23ED98)->v) = 0x0;
    (((struct o0_uint *)0xC23ED98)->v) = 0x0;
    *(unsigned int *)0xC2498B0 = 0x0;
    (((struct o2C_uint *)0xC23A18C)->v) = 0x0;
    (((struct o28_uint *)0xC23A18C)->v) = 0x0;
    (((struct o24_uint *)0xC23A18C)->v) = 0x0;
    (((struct o20_uint *)0xC23A18C)->v) = 0x0;
    (((struct o1C_uint *)0xC23A18C)->v) = 0x0;
    (((struct o14_uint *)0xC23ED98)->v) = 0x0;
    (((struct o0_uint *)0xC23A18C)->v) = (((((struct o0_int *)0xC23A18C)->v)) + 0x1);
    return 0xC23A1B8;
}

int FUN_0c0c73e6(int a4, float f4, float f5)
{
    int t2;
    int t3;
    int t5;
    float u4;
    float u9;
    int stk[23];

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 24)) = f5;
    *(float *)(((int)stk + 28)) = 0.00139999995f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(float *)(((int)stk + 60)) = 1.0f;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    FUN_0c0c6ac6(a4, 0xC1E982C, (((int)stk + 0) + 0x4));
    t2 = 0xC0C74A0;
    t3 = (*(int *)(((int)stk + 0)));
    for (;;) {
        t5 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        if (t5 == 0) {
            break;
        }
        t2 = t5;
        if (t2 != 32) {
            t2 = t5;
            t2 = (t2 << 1);
            *(unsigned int *)(((int)stk + 16)) = (*(short *)((0xC1E8760 + t2)));
            t2 = (FUN_0c0c0340((((int)stk + 0) + 0x10)));
        } else {
            u9 = u4;
        }
        u4 = u9;
        t2 = 0x14;
        u4 = (*(float *)((((int)stk + 0) + t2)));
        t2 = 0x14;
        u4 = (u4 + 18.0f);
        *(float *)((((int)stk + 0) + t2)) = u4;
    }
    return t2;
}

int FUN_0c0d8ae0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x0;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x3;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    kmProcessVertexRenderState(a4);
    return kmSetVertexRenderState(a4);
}

int FUN_0c0df570(int a4)
{
    int t0;
    int t2;

    t0 = FUN_0c0dd280();
    t2 = *(int *)((a4 + 0x18));
    if (((int)(*(int *)((a4 + 0x0))) >= 0) && (t2 != 0)) {
        *(unsigned int *)0xFF000038 = 0xC;
        *(unsigned int *)0xFF00003C = 0xC;
        nlPushMatrix(0x0);
        FUN_0c0de7a0(0xC9484E8);
        nlMultiMatrix(0xC9484A8);
        *(unsigned int *)0xC948238 = (((t2 | (*(int *)0xC9482A8)) & 0x30000) | 0x818C0000);
        *(unsigned int *)0xC94823C = 0x0;
        *(unsigned int *)0xC948240 = (*(int *)0xC94C690);
        FUN_0c0eca40(a4, 0xC948238, 0xFFFFFFFF, (*(int *)0xC94C694));
        return nlPopMatrix(0x1);
    }
    return t0;
}

int kmLoadTextureBlock(int a4, int a5, int a6, int a7)
{
    int t22;
    int t2;
    int t4;
    int t6;
    int t8;
    int t9;

    t22 = 0x4;
    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
    } else {
        t2 = *(int *)((a4 + 0x18));
        t4 = 0x0;
        if (((0x4 & t2) != 0) && (((0x1 & t2) != 0) && (((0x8 & t2) == 0) && ((0x20 & t2) == 0)))) {
            t4 = 0x4;
        }
        t6 = *(int *)((a4 + 0x14));
        t22 = 0xC;
        if ((unsigned int)(t4 + (a6 * (((a7 << 2) << 2) << 1))) >= (unsigned int)t6) {
        } else {
            t8 = *(int *)((a4 + 0x1C));
            t9 = (t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1))));
            if ((unsigned int)(t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1)))) > (unsigned int)(((a7 << 2) << 2) << 1)) {
                t9 = (((a7 << 2) << 2) << 1);
            }
            kmiCopyToFrameBuffer(((t4 + (a6 * (((a7 << 2) << 2) << 1))) + t8), a5, t9);
            t22 = 0x0;
        }
    }
    return t22;
}

int vmsfs_mount2(int a4)
{
    int t1;
    int t3;
    int t4;

    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0xC239D14)));
    t3 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x30));
    t4 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = (t3 + 0x1);
    vmsfs_c_progress(a4);
    return check_cache(a4);
}

int FUN_0c024324(int a4)
{
    int t0;
    int t5;
    int t15;
    int t24;

    t0 = FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    if (t0 != 0) {
        if (((((struct o500_int *)(a4))->v)) == 3) {
            t5 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t5 + 0x1);
            if ((int)(t5 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
                if ((int)((((struct o54C_int *)(a4))->v)) <= (int)((((struct o528_int *)(a4))->v))) {
                    if ((int)((((struct o3AC_int *)(a4))->v)) > (int)0x3C) {
                        return FUN_0c02a19a(a4);
                    }
                    return 0x3AC;
                }
                return 0x54C;
            }
            return FUN_0c02a19a(a4);
        }
        if (((((struct o500_int *)(a4))->v)) == 2) {
            t15 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t15 + 0x1);
            if ((int)(t15 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
                if ((int)((((struct o54C_int *)(a4))->v)) >= (int)((((struct o528_int *)(a4))->v))) {
                    if ((int)((((struct o3AC_int *)(a4))->v)) > (int)0x3C) {
                        return FUN_0c02a19a(a4);
                    }
                    return 0x3AC;
                }
                return 0x54C;
            }
            return FUN_0c02a19a(a4);
        }
        t24 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t24 + 0x1);
        if ((int)(t24 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
            return FUN_0c02a19a(a4);
        }
        return 0x3B0;
    }
    return FUN_0c02a19a(a4);
}
