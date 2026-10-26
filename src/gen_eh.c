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
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
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
int FUN_0c0e19f2(int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
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
int vmsfs_c_progress(int, int, int, int);
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
int FUN_0c016dfe(int a4, int a5, float f4);
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
float FUN_0c0ceee4(int a4);
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
    int t0;
    int t1;
    int t2;
    int t19;
    int t20;

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x5C));
    t2 = *(int *)((a4 + 0x60));
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x0)) = ((~t2) & t1);
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x4)) = ((~t1) & t2);
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x8)) = t1;
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0xC)) = t2;
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x14)) = (*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x10)));
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x1C)) = (*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x18)));
    *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x24)) = (*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x20)));
    if (((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x0))) & 0x200) != 0) {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x2C)) = 0x0;
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x2C)) = ((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x2C))) + 0x1);
    }
    if (((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x0))) & 0x2) != 0) {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x30)) = 0x0;
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x30)) = ((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x30))) + 0x1);
    }
    if (((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x0))) & 0x400) != 0) {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x34)) = 0x0;
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x34)) = ((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x34))) + 0x1);
    }
    if (((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x8))) & 0x200) != 0) {
        t19 = *(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x10));
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x10)) = (t19 + 0x1);
        t20 = (t19 + 0x1);
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x10)) = 0x0;
        t20 = 0x60;
    }
    if ((0x2 & (*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x8)))) != 0) {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x18)) = ((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x18))) + 0x1);
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x18)) = 0x0;
    }
    if ((0x400 & (*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x8)))) != 0) {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x20)) = ((*(int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x20))) + 0x1);
    } else {
        *(unsigned int *)(((0xC943614 + ((((t0 << 2) + t0) << 2) << 2)) + 0x20)) = 0x0;
    }
    return t20;
}

float FUN_0c01ec10(int a4, float f4, float f5, float f6)
{
    int t9;
    int stk[12];

    *(float *)(((int)stk + 8)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((a4 + 0x50));
    *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 28)) = f5;
    *(float *)(((int)stk + 32)) = (*(float *)(((int)stk + 4)));
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

int FUN_0c037e44(int a4)
{
    float u0;
    float u1;
    float u10;
    float u17;
    float u23;

    u0 = *(float *)((a4 + 0x224));
    u1 = *(float *)((a4 + 0x3EC));
    if ((u0 > (-(u1 * (1.0f + 1.0f)))) && ((u1 * (1.0f + 1.0f)) > u0)) {
        if ((*(float *)0xC037FA4) > (*(float *)((a4 + 0x34)))) {
            if (0.0f > (*(float *)((a4 + 0x224)))) {
                u10 = (*(float *)((a4 + 0x224)));
                u10 *= -0.25f;
                *(float *)((a4 + 0x224)) = u10;
            }
            return 0x0;
        }
        *(float *)((a4 + 0x3EC)) = 0.0f;
        *(float *)((a4 + 0x220)) = 0.0f;
        *(float *)((a4 + 0x224)) = 0.0f;
        *(float *)((a4 + 0x228)) = 0.0f;
        *(unsigned int *)((a4 + 0x3DC)) = (*(int *)((a4 + 0x3E0)));
        FUN_0c037acc(a4);
        u17 = *(float *)0xC037FAC;
        *(unsigned int *)((a4 + 0x22C)) = (int)((float)(*(int *)((a4 + 0x22C))) * u17);
        *(unsigned int *)((a4 + 0x230)) = (int)((float)(*(int *)((a4 + 0x230))) * u17);
        *(unsigned int *)((a4 + 0x234)) = (int)((float)(*(int *)((a4 + 0x234))) * u17);
        return 0x1;
    }
    if (0.0f > (*(float *)((a4 + 0x224)))) {
        u23 = (*(float *)((a4 + 0x224)));
        u23 *= -0.25f;
        *(float *)((a4 + 0x224)) = u23;
    }
    return 0x0;
}

int FUN_0c037ee8(int a4)
{
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(int *)((a4 + 0x3E8))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlPushMatrix(0x0);
    nlMultiMatrix((0x2B0 + a4));
    FUN_0c0c47ae((*(int *)((a4 + 0x238))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x40));
    FUN_0c0c47ae((*(int *)((a4 + 0x23C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x80));
    FUN_0c0c47ae((*(int *)((a4 + 0x240))));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c0510be(int a4)
{
    int t0;
    int t14;
    int t8;
    int t29;
    int t23;
    int t33;
    int t18;
    int stk[6];

    t0 = *(int *)((a4 + 0x330));
    if ((t0 != 2) && (t0 != 3)) {
        if (t0 != 4) {
            t18 = t0;
        } else {
            t14 = 0x344;
            if ((*(int *)((a4 + 0x344))) != 0) {
                t8 = *(int *)((a4 + 0xBC));
                *(float *)(((int)stk + 8)) = (*(float *)((((0xC23F268 + (((((t8 << 1) + t8) << 2) << 2) << 2)) + 0x3C) + 0x4)));
                *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x30)));
                *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x38)));
                FUN_0c056118(a4, 0x3, ((int)stk + 4), 0x0);
                t14 = (FUN_0c0519f0(a4));
            }
            t18 = t14;
        }
        t33 = t18;
    } else {
        t29 = 0x348;
        if ((*(int *)((a4 + 0x348))) != 0) {
            t23 = *(int *)((a4 + 0xBC));
            *(float *)(((int)stk + 8)) = (*(float *)((((0xC23F268 + (((((t23 << 1) + t23) << 2) << 2) << 2)) + 0x24) + 0x4)));
            *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x30)));
            *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x38)));
            FUN_0c056118(a4, 0x3, ((int)stk + 4), 0x1);
            t29 = (FUN_0c0519f0(a4));
        }
        t33 = t29;
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
    int stk[9];

    t0 = *(int *)((a4 + 0x44));
    *(unsigned int *)((a4 + 0x44)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)(*(int *)((a4 + 0x48)))) {
        *(unsigned int *)((a4 + 0x44)) = 0x0;
        *(float *)(((int)stk + 4)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        *(float *)(((int)stk + 8)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        *(float *)(((int)stk + 12)) = ((float)((FUN_0c0da2e0()) - 16384) * 6.10370189e-05f);
        FUN_0c0dce80(((int)stk + 4), ((int)stk + 4), (*(float *)((a4 + 0x3C))));
        nlAddVector(((int)stk + 4), (a4 + 0x30));
        u9 = *(float *)((a4 + 0x40));
        u10 = 1.0f;
        u10 = u10 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        FUN_0c086bda(((int)stk + 4), (u9 * u10));
    } else {
        t17 = a4;
    }
    t20 = *(int *)((a4 + 0x4C));
    *(unsigned int *)((a4 + 0x4C)) = (t20 - 1);
    t22 = 0x4C;
    if ((int)(t20 - 1) <= 0) {
        t22 = (FUN_0c0e19f2(t17));
    }
    return t22;
}

int FUN_0c0c1714(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0db0a0(0x14, 0x32);
    nlPrintf(0xC1E3B18, ((*(int *)((t0 + 0xC0)))), ((*(int *)((t0 + 0xC4)))));
    FUN_0c0db0a0(0x14, 0x33);
    nlPrintf(0xC1E3B30, (*(float *)((t0 + 0x30))));
    FUN_0c0db0a0(0x14, 0x34);
    nlPrintf(0xC1E3B44, (*(float *)((t0 + 0x34))));
    FUN_0c0db0a0(0x14, 0x35);
    nlPrintf(0xC1E3B58, (*(float *)((t0 + 0x38))));
    FUN_0c0db0a0(0x14, 0x36);
    nlPrintf(0xC1E3B6C, (unsigned short)(*(short *)((t0 + 0x6C))));
    FUN_0c0db0a0(0x14, 0x37);
    nlPrintf(0xC1E3B80, (unsigned short)(*(short *)((t0 + 0x6E))));
    FUN_0c0db0a0(0x14, 0x38);
    return (nlPrintf(0xC1E3B94, (unsigned short)(*(short *)((t0 + 0x70)))));
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

int FUN_0c016dfe(int a4, int a5, float f4)
{
    int t4;
    int t5;
    float u8;
    int t14;
    int t0;
    int t1;
    int t2;
    int t3;
    float u6;
    float u7;
    int t15;
    int t16;
    int t17;
    int t18;

    t4 = 0x0;
    t5 = 0xC23EE14;
    u8 = f4;
    for (;;) {
        if ((int)t4 >= (int)0x8) {
            t0 = 0x0;
            return t0;
        }
        t14 = *(int *)((t5 + 0x4));
        if ((t14 != 0) && ((t0 = 0x46, t15 = *(short *)((t14 + t0)), t3 = t15, (int)t3 > 0) && ((t1 = 0xC23ED50, t0 = 0x44, t16 = *(short *)((t14 + t0)), t2 = t16, t17 = *(int *)((t1 + 0x0)), t3 = t17, t2 == t3) && (t18 = *(int *)((t5 + 0x0)), t3 = t18, t3 == 0)))) {
            t0 = 0x6E;
            t2 = (*(short *)((a4 + t0)));
            t0 = (*(int *)((t14 + 0xC)));
            t2 = (t2 - t0);
            t1 = (short)t2;
            t0 = 0xC016EE8;
            u8 = (*(float *)((t0 + 0x0)));
            u7 = (float)t1;
            u7 = _builtin_fabsf(u7);
            if (u8 > u7) {
                t0 = 0x30;
                u7 = (*(float *)((t14 + 0x0)));
                u6 = (*(float *)((a4 + t0)));
                t0 = 0x10;
                u6 = (u6 - u7);
                u7 = (*(float *)((t14 + t0)));
                u6 = _builtin_fabsf(u6);
                if (u7 > u6) {
                    t0 = 0x8;
                    u7 = (*(float *)((t14 + t0)));
                    t0 = 0x38;
                    u6 = (*(float *)((a4 + t0)));
                    t0 = 0x14;
                    u6 = (u6 - u7);
                    u7 = (*(float *)((t14 + t0)));
                    u6 = _builtin_fabsf(u6);
                    if (u7 > u6) {
                        break;
                    }
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x8);
                    continue;
                }
                t4 = (t4 + 0x1);
                t5 = (t5 + 0x8);
                continue;
            }
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x8);
            continue;
        }
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x8);
    }
    *(unsigned int *)0xC23ED54 = (*(short *)((t14 + 0x46)));
    *(unsigned int *)((a5 + 0x0)) = t4;
    return t14;
}

int FUN_0c0351bc(int a4, int a5, int a6, int a7)
{
    int t19;
    int t20;
    int stk[7];

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
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C035206;
    goto L_C0351D2;
    L_C0351D2:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C035252;
    goto L_C0351DA;
    L_C0351DA:;
    R0 = (0x510);
    R4 = (0xC246FF0);
    if (((*(int *)(((((*(int *)((R14 + 0x510))) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C0351F6;
    goto L_C0351EE;
    L_C0351EE:;
    *(unsigned int *)((R14 + 0x50C)) = 0x0;
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
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((R14 + 0x30))) - (*(float *)((R13 + 0x0)))), ((*(float *)((R14 + 0x38))) - (*(float *)((R13 + 0x8)))));
    t19 = *(int *)(((int)stk + 4));
    t20 = *(short *)((R14 + 0x6E));
    R4 = ((short)(t20 - t19));
    if ((!(16384.0f > _builtin_fabsf((float)(short)(t20 - t19))))) goto L_C035252;
    goto L_C035242;
    L_C035242:;
    FUN_0c0546fe(R14, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
    R0 = (0x1);
    goto L_C035254;
    L_C035206:;
    if (((*(int *)((R14 + 0x514))) == 0)) goto L_C035252;
    goto L_C03520E;
    L_C03520E:;
    R13 = ((0x518 + R14));
    goto L_C035212;
}

int FUN_0c07b1ee(int a4, int a5, int a6, int a7)
{
    int t1;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - (1.0f + 1.0f));
            if (!((*(float *)((a4 + 0x90))) > 0.0f)) {
                *(float *)((a4 + 0x90)) = 0.0f;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY(0xC000);
    FUN_0c0dcc70((*(float *)((a4 + 0x90))), 0.0f, 0.0f);
    FUN_0c0c465c(0x1213);
    FUN_0c0dcc70((-((*(float *)((a4 + 0x90))) * (1.0f + 1.0f))), 0.0f, 0.0f);
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

    *(float *)(((int)stk + 4)) = f6;
    *(float *)(((int)stk + 8)) = (f8 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)));
    nlGetMatrix((((int)stk + 4) + 0x8));
    u1 = 1.0f;
    u1 = u1 + (f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9))) * f4;
    *(float *)(((int)stk + 12)) = u1;
    *(float *)(((int)stk + 16)) = (f5 * ((f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 4))) * ((f7 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    u6 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 28)) = (f4 * u6);
    u7 = 1.0f;
    u7 = u7 + u6 * f5;
    *(float *)(((int)stk + 32)) = u7;
    *(float *)(((int)stk + 48)) = (f5 * ((f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 44)) = (f4 * ((f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9)))));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 4))) * u6);
    u11 = 1.0f;
    u11 = u11 + (f9 / (((-(f4 * f7)) - (f5 * f8)) - (f6 * f9))) * (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = u11;
    return (FUN_0c0dbda0((((int)stk + 4) + 0x8)));
}

int FUN_0c0ca6d2(int a4, int a5, float f4)
{
    int t38;
    float u7;
    int t33;
    float u11;
    int t28;
    int t23;
    float u14;
    int t19;
    int t17;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t38 = 0x0;
    if (a4 != 0) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder(((*(int *)(((int)stk + 4))) + 0x2EC));
        FUN_0c0c9e86(a5);
        nlMultiMatrixRevOrder((a5 + 0x74));
        u7 = *(float *)((a4 + 0x14));
        FUN_0c0db430((a4 + 0x8), (((int)stk + 4) + 0x4));
        nlPopMatrix(0x1);
        t33 = 0x0;
        if (!(((*(float *)(((int)stk + 16))) - u7) > 0.0f)) {
            u11 = *(float *)(((int)stk + 8));
            t28 = 0x0;
            if (!((-(*(float *)((a5 + 0xF4)))) > (u11 + u7))) {
                t23 = 0x0;
                if (!((u11 - u7) > (*(float *)((a5 + 0xF4))))) {
                    u14 = *(float *)(((int)stk + 12));
                    t19 = 0x0;
                    if (!((-(*(float *)((a5 + 0xF4)))) > (u14 + u7))) {
                        t17 = 0x1;
                        if ((u14 - u7) > (*(float *)((a5 + 0xF4)))) {
                            t17 = 0x0;
                        }
                        t19 = t17;
                    }
                    t23 = t19;
                }
                t28 = t23;
            }
            t33 = t28;
        }
        t38 = t33;
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
    int t64;
    int t36;
    int t57;
    int t41;
    int t45;
    int t43;
    int t1;
    int t71;
    int t24;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)0xC23A1A8;
    if (((t0 & 0x100) == 0) && (t1 = *(short *)((a4 + 0xE8)), (int)t1 < (int)0x4)) {
        t71 = t1;
    } else {
        t64 = 0xE8;
        if (((t0 & 0x100) != 0) && (t24 = *(short *)((a4 + 0xE8)), (int)t24 < 0)) {
        } else {
            t36 = *(int *)((0xC247030 + ((*(short *)((a4 + 0xE8))) << 2)));
            t57 = t36;
            if (t36 == 4) {
                t41 = *(int *)(((((*(short *)((a4 + 0xE8))) << 2) + 0xC246FF0) + 0x0));
                t45 = (t41 + 0x30);
                if (((*(int *)((t41 + 0xC8))) & 0x3FF) != 0) {
                    t43 = *(short *)((a4 + 0xE8));
                    t45 = (((((((t43 << 1) + t43) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                FUN_0c0a68ec(((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)((t45 + 0x0)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t45 + 0x8)))));
                t57 = (FUN_0c054654(a4, (*(int *)(((int)stk + 4))), 0x400, (*(int *)(((int)stk + 8)))));
            }
            t64 = t57;
        }
        t71 = t64;
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
        FUN_0c0dcc70((*(float *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0x0))), (*(float *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0x4))), (*(float *)(((((((t2 << 2) + t1) << 2) << 2) + 0xC112730) + 0x8))));
        u8 = *(float *)((((a4 + 0x30) + (t1 << 2)) + 0x0));
        nlScale(u8, u8, u8);
        FUN_0c0de000((*(float *)((((t1 << 2) + (a4 + 0x30)) + 0x0))));
        if ((*(int *)((a4 + 0x40))) == t1) {
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
    *(unsigned int *)0xC943404 = t0;
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) & 0x60100);
    *(unsigned int *)0xC943434 = 0x0;
    *(unsigned int *)(((0x5C + t0) + 0x0)) = (FUN_0c0d1870());
    *(unsigned int *)(((0x60 + t0) + 0x0)) = (FUN_0c0cee40());
    *(unsigned int *)0xC9433FC = 0x0;
    t6 = *(int *)((((*(int *)0xC522D7C) << 2) + 0xC20BE68));
    *(unsigned int *)0xC943438 = t6;
    if (t6 != -1) {
        *(unsigned int *)0xC943438 = ((*(int *)0xC943438) * 0x3C);
    }
    *(unsigned int *)0xC94343C = (*(int *)((((*(int *)0xC522D78) << 2) + 0xC20BE7C)));
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
    *(unsigned int *)0xC23ED58 = 0x6B;
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    *(unsigned int *)0xC23ED9C = 0x1;
    *(unsigned int *)0xC23ED84 = 0x1;
    *(unsigned int *)0xC23ED60 = 0x0;
    *(unsigned int *)0xC23ED74 = 0x0;
    *(unsigned int *)0xC23ED80 = 0x0;
    *(unsigned int *)0xC23EDB8 = 0x0;
    *(unsigned int *)0xC23EE54 = 0x0;
    *(unsigned int *)0xC23ED7C = ((*(int *)0xC23ED7C) + 0x1);
    *(unsigned int *)0xC23ED6C = 0x3;
    t11 = 0xFFFFFFFD;
    if ((((*(int *)0xC23ED7C) + 0x1) & 7) != 0) {
        t11 = 0x0;
    }
    *(unsigned int *)0xC23ED70 = t11;
    *(unsigned int *)0xC23EE04 = (*(int *)0xC2475B4);
    *(unsigned int *)0xC23EE08 = (*(int *)0xC2475B4);
    *(unsigned int *)0xC23EE0C = (*(int *)0xC2475B4);
    *(unsigned int *)0xC23EE10 = (*(int *)0xC2475B4);
    return FUN_0c0164d6();
}

int FUN_0c04b8e4(int a4, int a5, int a6, int a7)
{
    int t1;
    int t18;
    int t3;
    int stk[4];

    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x10000);
    t1 = *(int *)((a4 + 0x2EC));
    t18 = t1;
    if ((t1 & 12) != 0) {
        t3 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0));
        FUN_0c0cc3f8(0xB20A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x1A);
        *(unsigned int *)((a4 + 0x20C)) = 0x100;
        *(unsigned int *)((a4 + 0x210)) = 0x63;
        *(unsigned int *)((a4 + 0x2D4)) = 0x0;
        *(unsigned int *)((a4 + 0xCC)) = 0x0;
        *(unsigned int *)((a4 + 0x2C4)) = 0x43F;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((t3 + 0xD0)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x2C4)) = ((*(int *)((t3 + 0x2C4))) + 0x1);
        *(unsigned int *)((t3 + 0x2CC)) = 0x1;
        if ((*(int *)0xC23EDAC) == 1) {
            *(unsigned int *)((a4 + 0x1EC)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x1EC)) = 0xF;
        }
        if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + (*(float *)0xC04BA00));
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
    int stk[6];

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
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x0))) - (*(float *)((t10 + 0x0)))), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x4))) - (*(float *)((t10 + 0x4)))), ((*(float *)(((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + 0xC) + 0x8))) - (*(float *)((t10 + 0x8)))));
        t22 = (*(int *)(((int)stk + 4)));
    }
    return t22;
}

int FUN_0c0651ac(int a4, int a5, int a6, int a7, float f4)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 4)) = f4;
    nlSubVector3op((((int)stk + 4) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 4) + 0x18), (*(int *)(((int)stk + 12))));
    FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (*(float *)(((int)stk + 4))));
    nlAddVector((((int)stk + 4) + 0x18), a5);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), a4);
    FUN_0c0a78fc((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAX((*(int *)((a4 + 0x18))));
    nlRotateAZ((*(int *)((a4 + 0x1C))));
    return (FUN_0c0db470((*(int *)(((int)stk + 8))), a5));
}

int FUN_0c0652a2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 4)) = f4;
    nlSubVector3op((((int)stk + 4) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 4) + 0x18), (*(int *)(((int)stk + 12))));
    FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (*(float *)(((int)stk + 4))));
    nlAddVector((((int)stk + 4) + 0x18), a5);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), a4);
    FUN_0c0a7714((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x1C))));
    nlRotateAX((*(int *)((a4 + 0x18))));
    return (FUN_0c0db470((*(int *)(((int)stk + 8))), a5));
}

int FUN_0c065398(int a4, int a5, int a6, int a7, float f4)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 4)) = f4;
    nlSubVector3op((((int)stk + 4) + 0x18), a5, (a5 + 0xC));
    nlAddVector((((int)stk + 4) + 0x18), (*(int *)(((int)stk + 12))));
    FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (*(float *)(((int)stk + 4))));
    nlAddVector((((int)stk + 4) + 0x18), a5);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), a4);
    FUN_0c0a77fe((a4 + 0x18), (a4 + 0x1C), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(a5); }
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x18))));
    nlRotateAZ((*(int *)((a4 + 0x1C))));
    return (FUN_0c0db470((*(int *)(((int)stk + 8))), a5));
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
        t1 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t1 + 0x100);
        t2 = FUN_0c0da410((t1 + 0x100));
        t3 = *(int *)(((a4 + 0x4C) + 0x0));
        *(unsigned int *)(((a4 + 0x4C) + 0x0)) = (t3 + 0x400);
        *(unsigned int *)(((a4 + 0x40) + 0x0)) = (int)((((FUN_0c0da410((t3 + 0x400))) * t2)) * (*(float *)0xC06B1E8));
        u7 = *(float *)0xC06B1EC;
        t8 = *(int *)((a4 + 0x50));
        *(unsigned int *)((a4 + 0x50)) = (t8 + 0x400);
        *(unsigned int *)((a4 + 0x44)) = (int)((((FUN_0c0da410((t8 + 0x400))) * t2)) * u7);
        t11 = *(int *)((a4 + 0x54));
        *(unsigned int *)((a4 + 0x54)) = (t11 + 0x400);
        *(unsigned int *)((a4 + 0x48)) = (int)((((FUN_0c0da410((t11 + 0x400))) * t2)) * u7);
        return FUN_0c06b060(a4);
    }
    return t0;
}

int FUN_0c067cd4(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC067DE4, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)0xC1FFE46);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC1FFE34); }
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c08476e(0.5f, 0.5f, 0.5f);
    FUN_0c0845f0(0x1);
    FUN_0c084610(0x1, 0x3);
    FUN_0c0846be(0x1, 15.0f);
    FUN_0c0846de(0x1, 0.0f, 0.799999952f, 0.299999982f, 0.0f);
    FUN_0c0845f8(0x1, 0x1);
    return FUN_0c084622(0x1, (*(float *)0xC1FFE34), ((*(float *)0xC1FFE38) + 1.0f), (*(float *)0xC1FFE3C));
}

void FUN_0c0ce7e0(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t11;

    if ((*(signed char *)(((0xC522E48 + a4) + 0x0))) != 0) {
        *(unsigned char *)(((0xC522E48 + a4) + 0x0)) = 0x0;
        t1 = *(int *)(((a4 << 2) + 0xC522E40));
        t2 = *(int *)0xC522E38;
        *(unsigned short *)((((a4 << 1) + 0xC522ABC) + 0x0)) = ((*(short *)((((a4 << 1) + 0xC522ABC) + 0x0))) + 0x1);
        if ((unsigned int)(t2 - t1) > (unsigned int)(*(int *)0xC522AC8)) {
            *(unsigned int *)0xC522AC8 = (t2 - t1);
        }
        if ((unsigned int)(t2 - t1) < (unsigned int)(*(int *)0xC522ACC)) {
            *(unsigned int *)0xC522ACC = (t2 - t1);
        }
        if ((*(int *)0xC522ACC) == 0) {
            *(unsigned int *)0xC522ACC = (t2 - t1);
        }
        *(unsigned int *)0xC522AC4 = ((*(int *)0xC522AC4) + (t2 - t1));
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
                    *(unsigned int *)0xC522E34 = 0x1;
                    return;
                }
                *(unsigned int *)0xC522E34 = 0x1;
                return;
            }
        }
        *(unsigned short *)((((t11 << 1) + 0xC522AD4) + 0x0)) = ((*(short *)((((t11 << 1) + 0xC522AD4) + 0x0))) + 0x1);
        if (t11 == 20) {
            *(unsigned short *)((((t11 << 1) + 0xC522AD4) + 0x0)) = ((*(short *)((((t11 << 1) + 0xC522AD4) + 0x0))) + 0x1);
        }
        *(unsigned int *)0xC522E34 = 0x1;
    }
}

float FUN_0c0ceee4(int a4)
{
    float u0;
    int t1;
    int t2;
    float u3;
    int stk[14];

    u0 = *(float *)0xC0CF104;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((0xC247030 + t2) + 0x0))) >= (int)0x2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((0xC246FF0 + t1) + 0x0))) + 0x30)); }
            *(float *)(((int)stk + 8)) = 0.0f;
            u3 = (((float (*)(int, int, Stk3))(nlLength))(a4, ((int)stk + 4), *(Stk3 *)(((int)stk + 4))));
            if (u0 > u3) {
                break;
            }
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                t2 = 0xC943168;
                t1 = 0x0;
                for (;;) {
                    if ((int)t1 >= (int)(*(int *)0xC943164)) {
                        return u3;
                    }
                    u3 = (((float (*)(int, int))(nlLength))(a4, t2));
                    if ((*(float *)((t2 + 0xC))) > u3) {
                        break;
                    }
                    t1 = (t1 + 0x1);
                    t2 = (t2 + 0x10);
                }
                return u3;
            }
            continue;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x10) {
            t2 = 0xC943168;
            t1 = 0x0;
            for (;;) {
                if ((int)t1 >= (int)(*(int *)0xC943164)) {
                    return u3;
                }
                u3 = (((float (*)(int, int))(nlLength))(a4, t2));
                if ((*(float *)((t2 + 0xC))) > u3) {
                    break;
                }
                t1 = (t1 + 0x1);
                t2 = (t2 + 0x10);
            }
            return u3;
        }
    }
    return u3;
}

int FUN_0c0e432e(int a4, int a5, int a6)
{
    int t1;
    int t16;
    int t18;
    int t21;
    int t9;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            t1 = 0xFFFFFFFE;
            if (a5 != 0x20A4) {
            } else {
                t1 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
            t9 = t1;
        } else {
            t9 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
        }
        t21 = t9;
    } else {
        t16 = FUN_0c0e4428((((a6 & 0x7F00) << 8) + 0x70A4));
        t18 = t16;
        if (t16 != 0) {
        } else {
            t18 = (FUN_0c0e4428((0xA4 + ((a6 & 0x7F) << 16))));
        }
        t21 = t18;
    }
    return t21;
}

int adxf_SetFileInfo(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t18;
    int t13;
    int t9;
    int stk[9];

    t0 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
    if ((int)t0 < 0) {
        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
        t18 = t0;
    } else {
        t2 = ADXSTM_GetFsizeSct(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
            t13 = t2;
        } else {
            t4 = FUN_0c22abc0(a5, ((int)stk + 4));
            if ((int)t4 < 0) {
                ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
                t9 = t4;
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 12)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 4)));
                t9 = 0x0;
            }
            t13 = t9;
        }
        t18 = t13;
    }
    return t18;
}

int syTmrInt1Cancel(void)
{
    int t0;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFD);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFFDF);
    return (t0 & 0xFD);
}

int FUN_0c02b8ba(int a4)
{
    int t0;
    int t3;
    int stk[9];

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        return 0x4F8;
    }
    FUN_0c034e2c(a4);
    t3 = FUN_0c035ad6(a4, (*(int *)((a4 + 0x510))));
    if ((int)t3 >= (int)(*(int *)(((0x528 + a4) + 0x0)))) {
        FUN_0c03442c(a4, (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        if ((*(int *)(((int)stk + 12))) == 0) {
            *(unsigned int *)((a4 + 0x4E0)) = 0xFFFFFFFF;
            *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & 0xFFFFFFF3);
            *(unsigned int *)((a4 + 0x544)) = 0x5;
            *(unsigned int *)((a4 + 0x4F8)) = 0x4;
            *(unsigned int *)((a4 + 0x2D4)) = 0x4;
            return 0x2D4;
        }
        *(unsigned int *)((a4 + 0x538)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
        return 0x4F8;
    }
    *(unsigned int *)((a4 + 0x538)) = 0x1;
    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
    return 0x4F8;
}

int FUN_0c03fed2(int a4)
{
    int t0;
    int t2;
    float t8;
    int t13;
    float t27;
    int t32;
    int t36;
    int t17;
    int stk[7];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 != 2) {
            } else {
                t2 = (FUN_0c041f2a(a4));
            }
            t17 = t2;
        } else {
            *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            t8 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t13 = 0x34;
            if (t8 > (*(float *)((a4 + 0x34)))) {
                *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                *(float *)((a4 + 0x34)) = t8;
                *(float *)((a4 + 0x4C)) = 0.0f;
                t13 = (FUN_0c041dd0(a4));
            }
            t17 = t13;
        }
        t36 = t17;
    } else {
        FUN_0c041f2a(a4);
        *(float *)((a4 + 0x26C)) = 0.0f;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
        t27 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
        t32 = 0x34;
        if (t27 > (*(float *)((a4 + 0x34)))) {
            *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            *(float *)((a4 + 0x34)) = t27;
            *(float *)((a4 + 0x4C)) = 0.0f;
            t32 = (FUN_0c041dd0(a4));
        }
        t36 = t32;
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
        if (((*(int *)((a4 + 0x3AC))) == 0) && (t7 = *(int *)((a4 + 0x2EC)), (t7 & 12) != 0)) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x16D;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3AC)) = 0x1;
        }
        t10 = *(int *)0xC23EE00;
        if ((*(int *)0xC247070) == 2) {
            *(float *)((t10 + 0xA0)) = ((*(float *)((t10 + 0xA0))) - 0.00599999959f);
        } else {
            *(float *)((t10 + 0xA0)) = ((*(float *)((t10 + 0xA0))) - 0.00899999961f);
        }
        *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x2);
        *(unsigned int *)((0xC2475A4 + ((*(int *)((a4 + 0xBC))) << 2))) = 0x1;
        t20 = *(int *)((a4 + 0xBC));
        *(unsigned int *)((0xC2475A4 + (((t20 + 0x1) & 0x1) << 2))) = 0x0;
        t22 = (((t20 + 0x1) & 0x1) << 2);
    } else {
        *(unsigned int *)((a4 + 0x210)) = 0x9D;
        *(unsigned int *)((a4 + 0x2C4)) = 0x16E;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | 0x2);
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

    u0 = *(float *)((a6 + 0x0));
    u1 = *(float *)((a6 + 0x4));
    u2 = *(float *)((a6 + 0x8));
    u3 = *(float *)0xC06C9A0;
    u4 = *(float *)((a4 + 0x30));
    u5 = (u1 * u1);
    u5 = u5 + u0 * u0;
    u6 = u5;
    u6 = u6 + u2 * u2;
    u7 = *(float *)((a5 + 0x4));
    u8 = *(float *)((a4 + 0x34));
    u9 = *(float *)((a5 + 0x8));
    u10 = *(float *)((a4 + 0x38));
    u11 = *(float *)((a5 + 0x0));
    u12 = ((u8 - u7) * (u8 - u7));
    u12 = u12 + (u4 - u11) * (u4 - u11);
    u13 = u12;
    u13 = u13 + (u10 - u9) * (u10 - u9);
    u27 = (u10 - u9);
    u29 = f10;
    u30 = (u4 - u11);
    u31 = (u10 - u9);
    if ((*(float *)0xC06C9A4) > _builtin_sqrtf(u13)) {
        u15 = *(float *)((a5 + 0x0));
        u16 = *(float *)((a4 + 0x30));
        u17 = *(float *)((a5 + 0x8));
        u18 = *(float *)((a4 + 0x38));
        u19 = ((u18 - u17) * (u18 - u17));
        u19 = u19 + (u16 - u15) * (u16 - u15);
        u21 = (*(float *)((a4 + 0x58)));
        u21 = u21 + (_builtin_sqrtf(u6) / u3) * f5;
        *(float *)((a4 + 0x58)) = u21;
        u23 = (*(float *)((a4 + 0x54)));
        u23 = u23 + (_builtin_sqrtf(u6) / u3) * ((((u16 - u15) / _builtin_sqrtf(u19)) / _builtin_sqrtf(u13)) * f4);
        *(float *)((a4 + 0x54)) = u23;
        u25 = (*(float *)((a4 + 0x5C)));
        u25 = u25 + (_builtin_sqrtf(u6) / u3) * ((((u18 - u17) / _builtin_sqrtf(u19)) / _builtin_sqrtf(u13)) * f4);
        *(float *)((a4 + 0x5C)) = u25;
        u27 = (_builtin_sqrtf(u6) / u3);
        u29 = _builtin_sqrtf(u19);
        u30 = ((((u16 - u15) / _builtin_sqrtf(u19)) / _builtin_sqrtf(u13)) * f4);
        u31 = ((((u18 - u17) / _builtin_sqrtf(u19)) / _builtin_sqrtf(u13)) * f4);
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
    int stk[18];

    t0 = *(short *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x0));
    t19 = t0;
    if (t0 != 0) {
        t2 = t0;
        t3 = t1;
        for (;;) {
            t4 = *(int *)((t3 + 0x24));
            t5 = *(int *)((t3 + 0x28));
            FUN_0c0db470(t3, (((int)stk + 4) + 0x10));
            *(float *)(((int)stk + 4)) = (*(float *)(((int)stk + 20)));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) | 0x1);
            u9 = *(float *)(((int)stk + 24));
            u10 = *(float *)(((int)stk + 28));
            FUN_0c0db4d0((t3 + 0xC), (((int)stk + 4) + 0x4));
            u12 = *(float *)(((int)stk + 8));
            u13 = *(float *)(((int)stk + 12));
            u14 = *(float *)(((int)stk + 16));
            t15 = t4;
            t16 = t5;
            for (;;) {
                t17 = *(int *)((t16 + 0x0));
                t16 = (t16 + 0x4);
                t15 = (t15 - 0x1);
                *(float *)((t17 + 0x0)) = (*(float *)(((int)stk + 4)));
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
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0c45d0();
    FUN_0c084104();
    FUN_0c0c0384();
    FUN_0c0cdff2();
    if ((*(int *)0xC23ED50) == 0) {
        *(unsigned int *)0xC23ED50 = 0xB;
    }
    FUN_0c0169da(0x0);
    FUN_0c0169da(0x1);
    *(unsigned int *)0xC23ED84 = 0x0;
    *(unsigned int *)0xC23EDB0 = 0x0;
    *(unsigned int *)0xC23EDB4 = 0x0;
    *(unsigned int *)0xC2475B0 = 0x0;
    *(unsigned int *)0xC23ED88 = 0x0;
    *(unsigned int *)0xC23ED60 = 0x0;
    *(unsigned int *)0xC23EDA4 = 0x0;
    *(unsigned int *)0xC23ED98 = 0x0;
    *(unsigned int *)0xC2498B0 = 0x0;
    *(unsigned int *)0xC23A1B8 = 0x0;
    *(unsigned int *)0xC23A1B4 = 0x0;
    *(unsigned int *)0xC23A1B0 = 0x0;
    *(unsigned int *)0xC23A1AC = 0x0;
    *(unsigned int *)0xC23A1A8 = 0x0;
    *(unsigned int *)0xC23EDAC = 0x0;
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    return 0xC23A1B8;
}

int FUN_0c0c73e6(int a4, float f4, float f5)
{
    int t2;
    int t3;
    int t5;
    float u4;
    float u9;
    int stk[24];

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 28)) = f5;
    *(float *)(((int)stk + 32)) = 0.00139999995f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(float *)(((int)stk + 56)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(float *)(((int)stk + 64)) = 1.0f;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    FUN_0c0c6ac6(a4, 0xC1E982C, (((int)stk + 4) + 0x4));
    t2 = 0xC0C74A0;
    t3 = (*(int *)(((int)stk + 4)));
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
            *(unsigned int *)(((int)stk + 20)) = (*(short *)((0xC1E8760 + t2)));
            t2 = (FUN_0c0c0340((((int)stk + 4) + 0x10)));
        } else {
            u9 = u4;
        }
        u4 = u9;
        t2 = 0x14;
        u4 = (*(float *)((((int)stk + 4) + t2)));
        t2 = 0x14;
        u4 = (u4 + 18.0f);
        *(float *)((((int)stk + 4) + t2)) = u4;
    }
    return t2;
}

int FUN_0c0d8ae0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
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
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x0;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x3;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
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
    int t12;
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
        t12 = 0xC;
        if ((unsigned int)(t4 + (a6 * (((a7 << 2) << 2) << 1))) >= (unsigned int)t6) {
        } else {
            t8 = *(int *)((a4 + 0x1C));
            t9 = (t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1))));
            if ((unsigned int)(t6 - (t4 + (a6 * (((a7 << 2) << 2) << 1)))) > (unsigned int)(((a7 << 2) << 2) << 1)) {
                t9 = (((a7 << 2) << 2) << 1);
            }
            kmiCopyToFrameBuffer(((t4 + (a6 * (((a7 << 2) << 2) << 1))) + t8), a5, t9);
            t12 = 0x0;
        }
        t22 = t12;
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
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x8))), ((t3 + 0x1) - 1), t4);
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
        if ((*(int *)((a4 + 0x500))) == 3) {
            t5 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t5 + 0x1);
            if ((int)(t5 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                if ((int)(*(int *)((a4 + 0x54C))) <= (int)(*(int *)((a4 + 0x528)))) {
                    if ((int)(*(int *)((a4 + 0x3AC))) > (int)0x3C) {
                        return FUN_0c02a19a(a4);
                    }
                    return 0x3AC;
                }
                return 0x54C;
            }
            return FUN_0c02a19a(a4);
        }
        if ((*(int *)((a4 + 0x500))) == 2) {
            t15 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t15 + 0x1);
            if ((int)(t15 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                if ((int)(*(int *)((a4 + 0x54C))) >= (int)(*(int *)((a4 + 0x528)))) {
                    if ((int)(*(int *)((a4 + 0x3AC))) > (int)0x3C) {
                        return FUN_0c02a19a(a4);
                    }
                    return 0x3AC;
                }
                return 0x54C;
            }
            return FUN_0c02a19a(a4);
        }
        t24 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t24 + 0x1);
        if ((int)(t24 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            return FUN_0c02a19a(a4);
        }
        return 0x3B0;
    }
    return FUN_0c02a19a(a4);
}
