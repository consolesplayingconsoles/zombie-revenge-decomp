/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int, int, int, int, int);
int FUN_0c0d8450(int, int, int);
int FUN_0c0d8c50(int, int, int, int);
int FUN_0c0d9450(int, int, int, int);
int FUN_0c0d9ca0(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
float nlTan(int);
int FUN_0c0da920(void);
int FUN_0c0daf70(int);
int nlSetPaletteData(int, int, int);
int nlCopyMatrix(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dbe40(int, int);
int nlMultiMatrix(int);
int FUN_0c0dc220(void);
int FUN_0c0dc460(int);
int nlPushMatrix(int);
int nlRotateAxeSC(int, float, float);
int FUN_0c0dcc70(float, float, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd050(int);
int nlInvLightVector(void);
int nlobjput_sub(int);
int FUN_0c0de8c0(void);
int FUN_0c0deaa0(int, int, int, int);
int FUN_0c0df758(int, int, int);
int FUN_0c0dfb08(int, int, int);
int FUN_0c0e07b4(int, float, float, float, float, float, float);
int FUN_0c0e1794(void);
int FUN_0c0e17dc(int, int);
int FUN_0c0e1852(int, int, int);
int FUN_0c0e18f4(int, int, int);
int FUN_0c0e1962(int, int, int);
int FUN_0c0e1e6a(int);
int FUN_0c0e262a(int);
int FUN_0c0e35b6(int, int);
int FUN_0c0e59e0(void);
int FUN_0c0eaa20(void);
int FUN_0c0eaa22(int, int, float, float);
int FUN_0c0eb9c0(void);
int FUN_0c0eb9c2(int, int, float, float);
int FUN_0c0edc20(int, int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kmChangeLatencyModel(int, int, int, int);
int kmFlipFrameBuffer(void);
int kmRender(void);
int kmSetBorderColor(int, ...);
int kmSetColorClampValue(int, ...);
int kmSetFogTableColor(int, ...);
int kmSetPaletteData(int);
int kmfSetFatalErrorCallback(int);
float FUN_0c0d9f30(int a4);
float nlMultiMatrixRevOrder(int a4);
int nlPopMatrix(int a4);
int FUN_0c0dea10(int a4, float f4, float f5);
int FUN_0c0dfcae(int a4, int a5);
void FUN_0c0e4e88(int a4);
int FUN_0c0e1bd0(int a4);
int FUN_0c0e1c88(int a4, int a5);
int FUN_0c0e2030(int a4);
int FUN_0c0e38e8(int a4);
int FUN_0c0e4a04(int a4);
int FUN_0c0e4a5a(int a4);
int FUN_0c0e55f0(void);
int FUN_0c0e56f4(int a4);
int FUN_0c0c0304(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int nlPrintf(Stk4 s);
void nlQuickInvertMatrix(void);
float nlScaleUnitVector(int a4, int a5, float f4);
int FUN_0c0d8610(int a4, int a5);
int nlFogTableColor(int a4);
int nlInitMatrixStack(int a4, int a5, int a6);
int FUN_0c0df9fc(int a4, int a5);
int FUN_0c0e1dc4(int a4);
int FUN_0c0e505a(int a4, int a5);
void FUN_0c0de030(int a4);
void FUN_0c0de7a0(int a4);
int nlRotate(int a4, int a5);
int FUN_0c0e1b9a(int a4);
int FUN_0c0e1c0e(int a4, int a5);
int FUN_0c0d86e0(int a4, int a5);
int FUN_0c0d9260(int a4, int a5, int a6, int a7);
int FUN_0c0d9bd0(float f4);
int nlGetMatrix(int a4);
int FUN_0c0db6b0(int a4);
float nlMultiMatrixRevOrder8(int a4);
float nlOuterProduct(int a4, int a5, int a6);
int FUN_0c0dfcee(float f4, float f5);
int FUN_0c0e20b2(int a4);
int FUN_0c0da880(int a4);
int FUN_0c0ddeb0(int a4, int a5);
int nlObjPutSetLightDirectionF(float f4, float f5, float f6);
float nlCosec(int a4);
float nlSec(int a4);
int FUN_0c0de9e0(int a4);
int FUN_0c0e1cc6(int a4, int a5, int a6);
int FUN_0c0e4ece(int a4, int a5, int a6);
void FUN_0c0e557c(void);
void nlCreateTextureParam(int a4, int a5, int a6);
int nlGetMatrix8(int a4);
float nlRotateAX(int a4);
void FUN_0c0dcbb0(int a4);
void nlTransposeMatrix(void);
float nlGetAverageVector(int a4, int a5, int a6, float f4, float f5);
int nlObjPut(int a4);
int FUN_0c0ded50(int a4, int a5);
int FUN_0c0e19f2(void);
int FUN_0c0e4f5a(int a4, int a5, int a6);
int FUN_0c0e4f8c(int a4, int a5, int a6);
int FUN_0c0e0784(int a4);
void FUN_0c0e1e40(int a4, int a5, int a6, int a7);
int FUN_0c0e2794(int a4, int a5);
int FUN_0c0e57a0(int a4, float f4, float f5, float f6);
int FUN_0c0d95a0(int a4, int a5, int a6, int a7);
void nlLoadMatrix8(int a4);
float nlRotateXSC(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
int FUN_0c0dd280(void);
int FUN_0c0ddfd0(void);
int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6);
void FUN_0c0e1ade(int a4);
void FUN_0c0e1b72(int a4);
int FUN_0c0e1cf6(int a4, int a5);
int FUN_0c0de900(int a4);
int FUN_0c0e18a2(int a4, int a5, int a6);
int FUN_0c0e18ce(int a4, int a5);
int FUN_0c0e193c(int a4, int a5, int a6);
int FUN_0c0e19aa(int a4, int a5, int a6);
int FUN_0c0e1d1e(int a4, int a5);
int FUN_0c0bfabc(float f4);
void paletteUpload(void);
float nlRotateYSC(float f4, float f5);
void nlUnitMatrix(void);
float FUN_0c0dd0a0(int a4, int a5);
int FUN_0c0e55b4(int a4);
int nlPrintInitFontTexture(void);
int FUN_0c0db0a0(int a4, int a5);
int FUN_0c0db5a0(int a4);
int FUN_0c0e1830(int a4, int a5);
void FUN_0c0e19d0(int a4);
int FUN_0c0e563c(int a4);
int FUN_0c0c473c(int a4);
int nlRotateAxe(int a4, int a5);
float nlAddVector(int a4, int a5);
float nlAddVector3op(int a4, int a5, int a6);
float nlLength(int a4, int a5);
float nlSubVector(int a4, int a5);
float nlSubVector3op(int a4, int a5, int a6);
int FUN_0c0dd2b0(void);
int FUN_0c0dd260(void);
int FUN_0c0ddc20(int a4, int a5);
int FUN_0c0e15b4(int a4);
int FUN_0c0e4848(int a4, int a5);
int FUN_0c0da2e0(void);
void FUN_0c0de4a0(void);
int FUN_0c0e0cc0(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0e57d0(int a4, float f4, float f5, float f6);
int FUN_0c0e57f0(int a4, float f4, float f5, float f6);
int FUN_0c0d9940(int a4, int a5);
void FUN_0c0dccf0(void);
float FUN_0c0dce80(int a4, int a5, float f4);
void FUN_0c0dfd34(int a4, int a5);
int FUN_0c0e1676(int a4);
int FUN_0c0d8f50(int a4);
float FUN_0c0da0c0(float f4);
int FUN_0c0db530(void);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc80(int a4);
void FUN_0c0de3c0(int a4, int a5);
void FUN_0c0df280(int a4, int a5);
int FUN_0c0d8940(void);
int FUN_0c0d9a40(int a4);
void FUN_0c0db430(int a4, int a5);
void FUN_0c0db470(int a4, int a5);
void FUN_0c0db4d0(int a4, int a5);
void FUN_0c0dc670(void);

float FUN_0c0d9f30(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = nlTan((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

float nlMultiMatrixRevOrder(int a4)
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
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
    u4 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u5 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u7 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u8 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u9 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u11 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u12 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u13 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u15 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

int nlPopMatrix(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    float u15;
    float u17;
    float u18;
    float u20;
    float u21;
    float u23;
    float u24;
    float u26;
    float u27;
    float u29;
    float u30;
    float u10[16];
    float u13[16];
    float u16[16];
    float u19[16];
    float u22[16];
    float u25[16];
    float u28[16];
    float u31[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = *(short *)0xC9482B4;
    t3 = *(short *)0xC9482B6;
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = *(int *)0xC9482B8;
    *(unsigned short *)0xC9482B4 = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0xC9482BC = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u8 = *(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0));
    u9 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u10);
    u10[0] = u9;
    u10[1] = u8;
    _builtin_ld_ext((float (*)[4])u10);
    u11 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0));
    u12 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u13);
    u13[2] = u12;
    u13[3] = u11;
    _builtin_ld_ext((float (*)[4])u13);
    u14 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u16);
    u16[4] = u15;
    u16[5] = u14;
    _builtin_ld_ext((float (*)[4])u16);
    u17 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u18 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u19);
    u19[6] = u18;
    u19[7] = u17;
    _builtin_ld_ext((float (*)[4])u19);
    u20 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u21 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u22);
    u22[8] = u21;
    u22[9] = u20;
    _builtin_ld_ext((float (*)[4])u22);
    u23 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u24 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u25);
    u25[10] = u24;
    u25[11] = u23;
    _builtin_ld_ext((float (*)[4])u25);
    u26 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u27 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u28);
    u28[12] = u27;
    u28[13] = u26;
    _builtin_ld_ext((float (*)[4])u28);
    u29 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u30 = *(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u31);
    u31[14] = u30;
    u31[15] = u29;
    _builtin_ld_ext((float (*)[4])u31);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

int FUN_0c0dea10(int a4, float f4, float f5)
{
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    if ((int)(*(int *)((a4 + 0x0))) >= 0) {
        if ((*(int *)0xC94C680) == 0) {
            FUN_0c0eaa22(a4, 0xC948238, f4, f5);
        } else {
            FUN_0c0eb9c2(a4, 0xC948238, f4, f5);
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0dfcae(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = t0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((*(int *)(((int)stk + 8))) + 0x4));
        if (t4 == -1) {
            break;
        }
        FUN_0c0dfb08((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))));
        t1 = (*(int *)(((int)stk + 8)));
        t1 = (t1 + 0x10);
        *(unsigned int *)(((int)stk + 8)) = t1;
        t2 = (*(int *)(((int)stk + 4)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t2;
    }
    return t4;
}

void FUN_0c0e4e88(int a4)
{
    int t0;
    int t1;
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = 0xC1EAB41;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 12)) = t0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t1 = t0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x40) {
            break;
        }
        t3 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t3 + 0x1);
        t1 = (*(int *)(((int)stk + 8)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t1;
        t1 = (t1 - 1);
        *(unsigned char *)((((t3 + 0x1) - 1) + 0x0)) = (*(signed char *)((t1 + 0x0)));
        t1 = (*(int *)(((int)stk + 4)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t1;
    }
}

int FUN_0c0e1bd0(int a4)
{
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    FUN_0c0e1b72(a4);
    *(unsigned int *)((a4 + 0x14)) = (*(int *)0xC94C790);
    *(unsigned int *)((a4 + 0x18)) = (*(int *)(((*(int *)0xC94C790) + 0x18)));
    *(unsigned short *)((a4 + 0x2E)) = ((*(short *)((a4 + 0x2E))) & 0xFFFC);
    *(unsigned int *)(((*(int *)(((*(int *)0xC94C790) + 0x18))) + 0x14)) = a4;
    *(unsigned int *)(((*(int *)0xC94C790) + 0x18)) = a4;
    *(unsigned int *)((a4 + 0x10)) = (*(int *)(((*(int *)0xC94C790) + 0x10)));
    return 0x2E;
}

int FUN_0c0e1c88(int a4, int a5)
{
    int t6;

    FUN_0c0e2794(a4, a5);
    FUN_0c0e1e6a(a5);
    *(unsigned int *)(((*(int *)((a5 + 0x14))) + 0x18)) = (*(int *)((a5 + 0x18)));
    *(unsigned int *)(((*(int *)((a5 + 0x18))) + 0x14)) = (*(int *)((a5 + 0x14)));
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    *(unsigned int *)((a5 + 0x8)) = 0x0;
    t6 = *(short *)((a5 + 0x2E));
    *(unsigned short *)(((0x2E + a5) + 0x0)) = ((t6 & 0xFFFC) | 0x2);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) - 1);
    return ((t6 & 0xFFFC) | 0x2);
}

int FUN_0c0e2030(int a4)
{
    int t7;
    int t3;
    int t4;
    int t5;
    int t6;
    int t13;

    t7 = 0x2C;
    if ((*(short *)((a4 + 0x2C))) != 0) {
        t3 = (*(int *)((a4 + 0x20)));
        t4 = (unsigned short)(*(short *)((a4 + 0x2C)));
        for (;;) {
            t5 = *(int *)((t3 + 0x24));
            t6 = FUN_0c0e2030(t3);
            t4 = (t4 - 0x1);
            t3 = t5;
            if (t4 == 0) {
                break;
            }
        }
        t7 = t6;
    }
    t13 = t7;
    if ((*(int *)((a4 + 0x0))) != 0xC0E1A1E) {
        *(unsigned int *)((a4 + 0x0)) = 0xC0E19F2;
        t13 = 0xC0E19F2;
    }
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    return t13;
}

int FUN_0c0e38e8(int a4)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x8)) {
        if ((*(int *)((0xC94C908 + (signed char)(((a4 << 1) + a4) << 2)))) == -1) {
            return 0xFFFFFFFE;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0e4a04(int a4)
{
    int t0;
    int t2;
    int stk[2];

    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 6));
    if ((*(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    t2 = *(signed char *)(((int)stk + 6));
    return (*(int *)((0xC94C854 + (unsigned char)((((t2 << 1) + t2) << 2) << 1))));
}

int FUN_0c0e4a5a(int a4)
{
    int t0;
    int t2;
    int stk[2];

    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 6));
    if ((*(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)))) != 1) {
        return 0x0;
    }
    t2 = *(signed char *)(((int)stk + 6));
    return (*(short *)((0xC94C84A + (unsigned char)((((t2 << 1) + t2) << 2) << 1))));
}

int FUN_0c0e55f0(void)
{
    int t0;
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = 0xC94C968;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x10) {
            return 0x0;
        }
        if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x10);
        t0 = (t0 + 0x1);
    }
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x1;
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c0e56f4(int a4)
{
    if ((*(int *)((a4 + 0x0))) != 1) {
        return 0xFFFFFFFF;
    }
    if ((*(int *)0xC94C840) == 0) {
        return 0x100;
    }
    if ((*(int *)0xC94C840) == 1) {
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int FUN_0c0c0304(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 20)) = f7;
    *(float *)(((int)stk + 24)) = f8;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = a6;
    *(unsigned int *)(((int)stk + 44)) = a5;
    *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
    return (FUN_0c0c0340(((int)stk + 4), 1.0f));
}

int nlPrintf(Stk4 s)
{
    int t0;
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    FUN_0c0edc20(0xC943FA8, s.w[0], t0);
    FUN_0c0daf70(0xC943FA8);
    return 0x0;
}

void nlQuickInvertMatrix(void)
{
    float u4;
    float u7;
    int t8;
    float u11;
    int t13;
    int t15;
    float u0[16];
    float u2[4];
    float u3[4];
    float u5[4];
    float u6[4];
    float u9[4];
    float u10[4];
    float u16[16];

    _builtin_st_ext((float (*)[4])u0);
    u2[0] = u0[12];
    u2[1] = u0[13];
    u2[2] = u0[14];
    u2[3] = 1.0f;
    u3[0] = u0[0];
    u3[1] = u0[1];
    u3[2] = u0[2];
    u3[3] = 0.0f;
    u4 = _builtin_fipr(u2, u3);
    u5[0] = u0[12];
    u5[1] = u0[13];
    u5[2] = u0[14];
    u5[3] = 1.0f;
    u6[0] = u0[4];
    u6[1] = u0[5];
    u6[2] = u0[6];
    u6[3] = 0.0f;
    u7 = _builtin_fipr(u5, u6);
    t8 = (*(int *)&(u0[1]));
    u9[0] = u0[12];
    u9[1] = u0[13];
    u9[2] = u0[14];
    u9[3] = 1.0f;
    u10[0] = u0[8];
    u10[1] = u0[9];
    u10[2] = u0[10];
    u10[3] = (u0[11] - u0[11]);
    u11 = _builtin_fipr(u9, u10);
    t13 = (*(int *)&(u0[2]));
    t15 = (*(int *)&(u0[6]));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u0[0];
    u16[1] = u0[4];
    u16[2] = u0[8];
    u16[3] = (u4 - u4);
    u16[4] = (*(float *)&t8);
    u16[5] = u0[5];
    u16[6] = u0[9];
    u16[7] = (u7 - u7);
    u16[8] = (*(float *)&t13);
    u16[9] = (*(float *)&t15);
    u16[10] = u0[10];
    u16[11] = (u11 - u11);
    u16[12] = (0.0f - u4);
    u16[13] = (0.0f - u7);
    u16[14] = ((u0[14] - u0[14]) - u11);
    u16[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u16);
}

float nlScaleUnitVector(int a4, int a5, float f4)
{
    float t0;

    t0 = FUN_0c0dcea0(a5);
    *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) * (f4 / t0));
    *(float *)((a4 + 0x4)) = ((*(float *)((a5 + 0x4))) * (f4 / t0));
    *(float *)((a4 + 0x8)) = ((*(float *)((a5 + 0x8))) * (f4 / t0));
    return t0;
}

int FUN_0c0d8610(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    *(unsigned int *)0xC990E98 = a4;
    *(unsigned short *)0xC990E84 = a5;
    t0 = a5;
    t1 = a5;
    t2 = a4;
    for (;;) {
        t3 = (t1 == 0);
        t1 = (t1 - 1);
        if (t3) {
            break;
        }
        t0 = 0xFFFFFFFF;
        *(unsigned short *)((t2 + 0x6)) = t0;
        *(unsigned short *)((t2 + 0x0)) = t0;
        *(unsigned char *)((t2 + 0x2)) = t0;
        t0 = 0x0;
        *(unsigned short *)((t2 + 0x4)) = t0;
        *(unsigned char *)((t2 + 0x3)) = t0;
        t2 = (t2 + 0x8);
    }
    t4 = 0xC943DC0;
    t5 = 0x0;
    for (;;) {
        t5 = (t5 + 0x1);
        *(unsigned short *)((t4 + 0x0)) = 0x0;
        t4 = (t4 + 0x2);
        if ((int)t5 >= (int)0x4) {
            break;
        }
    }
    return t0;
}

int nlFogTableColor(int a4)
{
    int stk[5];

    *(unsigned char *)((((int)stk + 8) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 8) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x0)) = a4;
    return (kmSetFogTableColor(((*(int *)((((int)stk + 8) + 0x0))))));
}

int nlInitMatrixStack(int a4, int a5, int a6)
{
    int t0;
    int t2;

    t0 = a6;
    if (a5 != ((a5 + 0x1F) & 0xFFFFFFE0)) {
        t0 = (a6 - 1);
    }
    t2 = t0;
    if ((int)t0 > (int)0x7FFF) {
        t2 = 0x7FFF;
    }
    *(unsigned short *)((a4 + 0x2)) = t2;
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)((a4 + 0x4)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    nlUnitMatrix();
    nlGetMatrix((*(int *)((a4 + 0x8))));
    return (*(int *)((a4 + 0x4)));
}

int FUN_0c0df9fc(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = t0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((*(int *)(((int)stk + 8))) + 0x4));
        if (t4 == -1) {
            break;
        }
        FUN_0c0df758((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))));
        t1 = (*(int *)(((int)stk + 8)));
        t1 = (t1 + 0x10);
        *(unsigned int *)(((int)stk + 8)) = t1;
        t2 = (*(int *)(((int)stk + 4)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t2;
    }
    return t4;
}

int FUN_0c0e1dc4(int a4)
{
    int t0;
    int t3;
    int t6;

    *(unsigned short *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t0 = *(int *)((a4 + 0x1C));
    *(unsigned short *)((t0 + 0x2C)) = ((*(short *)((t0 + 0x2C))) + 0x1);
    t3 = *(short *)((0x2C + (*(int *)((a4 + 0x1C)))));
    if ((unsigned short)t3 == 1) {
        *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x20)) = a4;
        *(unsigned int *)((a4 + 0x24)) = a4;
        *(unsigned int *)((a4 + 0x28)) = a4;
    } else {
        t6 = *(int *)(((*(int *)((a4 + 0x1C))) + 0x20));
        *(unsigned int *)((a4 + 0x24)) = t6;
        *(unsigned int *)((a4 + 0x28)) = (*(int *)((t6 + 0x28)));
        *(unsigned int *)(((*(int *)((t6 + 0x28))) + 0x24)) = a4;
        *(unsigned int *)((t6 + 0x28)) = a4;
    }
    return (unsigned short)t3;
}

int FUN_0c0e505a(int a4, int a5)
{
    int t2;
    int t1;
    int stk[5];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0xA) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 16))) + 0x30);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
            break;
        }
        t1 = (*(short *)(((int)stk + 14)));
        t2 = t1;
        *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = t2;
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
        t2 = (*(int *)(((int)stk + 4)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t2;
    }
    return t1;
}

void FUN_0c0de030(int a4)
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
    float u14;
    float u15;
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}

void FUN_0c0de7a0(int a4)
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
    float u14;
    float u15;
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}

int nlRotate(int a4, int a5)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x4)));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x8)));
    FUN_0c0dd050((((int)stk + 4) + 0x4));
    return (nlRotateAxe((((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int FUN_0c0e1b9a(int a4)
{
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    FUN_0c0e1b72(a4);
    *(unsigned int *)((a4 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x14)));
    *(unsigned int *)((a4 + 0x18)) = (*(int *)((a4 + 0x10)));
    *(unsigned short *)((a4 + 0x2E)) = ((*(short *)((a4 + 0x2E))) & 0xFFFC);
    *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x10))) + 0x14))) + 0x18)) = a4;
    *(unsigned int *)(((*(int *)((a4 + 0x10))) + 0x14)) = a4;
    return 0x2E;
}

int FUN_0c0e1c0e(int a4, int a5)
{
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    FUN_0c0e1b72(a4);
    *(unsigned int *)((a4 + 0x14)) = (*(int *)((a5 + 0x14)));
    *(unsigned int *)((a4 + 0x18)) = a5;
    *(unsigned short *)((a4 + 0x2E)) = ((*(short *)((a4 + 0x2E))) & 0xFFFC);
    *(unsigned int *)(((*(int *)((a5 + 0x14))) + 0x18)) = a4;
    *(unsigned int *)((a5 + 0x14)) = a4;
    *(unsigned int *)((a4 + 0x10)) = a5;
    return 0x2E;
}

int FUN_0c0d86e0(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0xC990E98;
    t1 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x4));
    if (t1 != 0) {
        return nlSetPaletteData((((*(short *)(((t0 + ((a4 << 2) << 1)) + 0x0))) << 2) << 2), a5, (((unsigned char)(*(signed char *)(((t0 + ((a4 << 2) << 1)) + 0x3))) << 2) << 2));
    }
    return t1;
}

int FUN_0c0d9260(int a4, int a5, int a6, int a7)
{
    int t1;

    if ((*(int *)0xC943E38) == 1) {
        *(unsigned int *)0xC943E24 = 0x20;
        t1 = *(int *)0xC943DCC;
        *(unsigned int *)0xC943DCC = (t1 | 0x10);
        *(unsigned int *)0xC943E30 = 0x2;
        return (t1 | 0x10);
    }
    return kmChangeLatencyModel(0x1, 0x20, a6, a7);
}

int FUN_0c0d9bd0(float f4)
{
    int t0;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    t0 = FUN_0c0d9ca0(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int nlGetMatrix(int a4)
{
    int t1;
    float u3[16];
    float u4[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC9482BC);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x4) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x4) - 0x4) + 0x0)) = u3[14];
    *(float *)((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[13];
    *(float *)(((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[12];
    *(float *)((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[11];
    *(float *)(((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[10];
    *(float *)((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[9];
    *(float *)(((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[8];
    *(float *)((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[7];
    *(float *)(((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[6];
    *(float *)((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[5];
    *(float *)(((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[4];
    *(float *)((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u3[0];
    u4[1] = u3[1];
    u4[2] = u3[2];
    u4[3] = u3[3];
    u4[4] = u3[4];
    u4[5] = u3[5];
    u4[6] = u3[6];
    u4[7] = u3[7];
    u4[8] = u3[8];
    u4[9] = u3[9];
    u4[10] = u3[10];
    u4[11] = u3[11];
    u4[12] = u3[12];
    u4[13] = u3[13];
    u4[14] = u3[14];
    u4[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u4);
    return (((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

int FUN_0c0db6b0(int a4)
{
    float u0[16];
    float u1[16];

    if (a4 == 0) {
        return 0x0;
    }
    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0x2C) - 0x4) + 0x0)) = u0[10];
    *(float *)(((((a4 + 0x2C) - 0x4) - 0x4) + 0x0)) = u0[9];
    *(float *)((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[8];
    *(float *)((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[6];
    *(float *)(((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[5];
    *(float *)((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[4];
    *(float *)((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[2];
    *(float *)(((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[1];
    *(float *)((((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[0];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
    return ((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4);
}

float nlMultiMatrixRevOrder8(int a4)
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
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u2 = *(float *)(((a4 + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u4 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u5 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u6 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u7 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u9 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u11 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16[0] = u1;
    u16[1] = u0;
    u16[2] = u3;
    u16[3] = u2;
    u16[4] = u5;
    u16[5] = u4;
    u16[6] = u7;
    u16[7] = u6;
    u16[8] = u9;
    u16[9] = u8;
    u16[10] = u11;
    u16[11] = u10;
    u16[12] = u13;
    u16[13] = u12;
    u16[14] = u15;
    u16[15] = u14;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u1;
    u19[1] = u0;
    u19[2] = u3;
    u19[3] = u2;
    u19[4] = u5;
    u19[5] = u4;
    u19[6] = u7;
    u19[7] = u6;
    u19[8] = u9;
    u19[9] = u8;
    u19[10] = u11;
    u19[11] = u10;
    u19[12] = u13;
    u19[13] = u12;
    u19[14] = u15;
    u19[15] = u14;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u1;
    u21[1] = u0;
    u21[2] = u3;
    u21[3] = u2;
    u21[4] = u5;
    u21[5] = u4;
    u21[6] = u7;
    u21[7] = u6;
    u21[8] = u9;
    u21[9] = u8;
    u21[10] = u11;
    u21[11] = u10;
    u21[12] = u13;
    u21[13] = u12;
    u21[14] = u15;
    u21[15] = u14;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u1;
    u23[1] = u0;
    u23[2] = u3;
    u23[3] = u2;
    u23[4] = u5;
    u23[5] = u4;
    u23[6] = u7;
    u23[7] = u6;
    u23[8] = u9;
    u23[9] = u8;
    u23[10] = u11;
    u23[11] = u10;
    u23[12] = u13;
    u23[13] = u12;
    u23[14] = u15;
    u23[15] = u14;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u1;
}

float nlOuterProduct(int a4, int a5, int a6)
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

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)(((a5 + 0x4) + 0x0));
    u5 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    u6 = (-(u1 * u3));
    u6 = u6 + u0 * u4;
    u7 = (-(u0 * u5));
    u7 = u7 + u2 * u3;
    *(float *)((((a6 + 0xC) - 0x4) + 0x0)) = u6;
    u8 = (-(u2 * u4));
    u8 = u8 + u1 * u5;
    *(float *)(((((a6 + 0xC) - 0x4) - 0x4) + 0x0)) = u7;
    *(float *)((((((a6 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u8;
    return u1;
}

int FUN_0c0dfcee(float f4, float f5)
{
    int stk[3];

    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = f4;
    *(float *)(((int)stk + 4)) = f5;
    *(float *)0xC94C6AC = (1.0f / (*(float *)(((int)stk + 8))));
    *(float *)0xC94C6B0 = (1.0f / (*(float *)(((int)stk + 4))));
    *(float *)0xC94C6B4 = (*(float *)(((int)stk + 8)));
    *(float *)0xC94C6B8 = (*(float *)(((int)stk + 4)));
    return 0x4;
}

int FUN_0c0e20b2(int a4)
{
    int t11;
    int t3;
    int t4;
    int t5;
    int t6;

    t11 = 0x0;
    if ((*(short *)((a4 + 0x2C))) != 0) {
        t3 = (*(int *)((a4 + 0x20)));
        t4 = (unsigned short)(*(short *)((a4 + 0x2C)));
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)((t3 + 0x24));
            t4 = (t4 - 0x1);
            t5 = (t5 + (FUN_0c0e20b2(t3)));
            t3 = t6;
            if (t4 == 0) {
                break;
            }
        }
        t11 = t5;
    }
    return (t11 + 0x1);
}

int FUN_0c0da880(int a4)
{
    int t5;

    *(unsigned int *)0xC944218 = a4;
    *(unsigned int *)0xC944204 = ((*(int *)0xC944204) & 0xF8FFFFFF);
    *(unsigned int *)0xC94420C = ((*(int *)0xC94420C) & 0x3FFFFFF);
    if (a4 != 0) {
        t5 = ((*(int *)0xC94420C) | 0x20000000);
    } else {
        *(unsigned int *)0xC944204 = ((*(int *)0xC944204) | 0x2000000);
        t5 = ((*(int *)0xC94420C) | 0x94000000);
    }
    *(unsigned int *)0xC94420C = t5;
    return t5;
}

int FUN_0c0ddeb0(int a4, int a5)
{
    float u1;
    int stk[7];

    FUN_0c0db430(a4, ((int)stk + 4));
    u1 = *(float *)(((int)stk + 16));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 4))) * (1.0f / u1));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 8))) * (1.0f / u1));
    *(float *)((a5 + 0x8)) = (1.0f / u1);
    return 0x8;
}

int nlObjPutSetLightDirectionF(float f4, float f5, float f6)
{
    *(float *)0xC20CE50 = f4;
    *(float *)0xC20CE54 = f5;
    *(float *)0xC20CE58 = f6;
    *(float *)0xC20CE5C = (f6 + 1.0f);
    *(float *)0xC20CE60 = f4;
    *(float *)0xC20CE64 = f5;
    *(float *)0xC20CE68 = (f6 + 1.0f);
    *(float *)0xC20CE70 = 0.0f;
    *(float *)0xC20CE74 = 0.0f;
    *(float *)0xC20CE78 = 1.0f;
    return 0x8;
}

float nlCosec(int a4)
{
    float t0;

    if (((unsigned short)a4 != 0) && ((unsigned short)a4 != 0x8000)) {
        t0 = FUN_0c0da410((unsigned short)a4);
        return (1.0f / t0);
    }
    return (*(float *)0xC0D9F7C);
}

float nlSec(int a4)
{
    float t0;

    if (((unsigned short)a4 != 0x4000) && ((unsigned short)a4 != 0xC000)) {
        t0 = FUN_0c0d9e90((unsigned short)a4);
        return (1.0f / t0);
    }
    return (*(float *)0xC0DA488);
}


int FUN_0c0e1cc6(int a4, int a5, int a6)
{
    FUN_0c0e1e6a(a4);
    *(unsigned short *)((a4 + 0x2E)) = ((*(short *)((a4 + 0x2E))) | 0x2);
    *(unsigned int *)((a4 + 0x30)) = a5;
    *(unsigned int *)((a4 + 0x34)) = (*(int *)((a5 + 0x8)));
    *(unsigned int *)((a4 + 0x38)) = a6;
    return 0x2E;
}

int FUN_0c0e4ece(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t2 = *(short *)(((int)stk + 10));
    t3 = *(short *)(((int)stk + 8));
    *(unsigned short *)(((0x22 + (*(int *)(((int)stk + 4)))) + 0x0)) = (t3 | (((t2 << 8) << 2) << 1));
    return (t3 | (((t2 << 8) << 2) << 1));
}

void FUN_0c0e557c(void)
{
    int t1;
    int t0;
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = 0xC94C968;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x10) {
            break;
        }
        t0 = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (*(int *)(((int)stk + 4)));
        t0 = (t0 + 0x10);
        *(unsigned int *)(((int)stk + 4)) = t0;
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)0xC94C840 = 0x0;
}

void nlCreateTextureParam(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0xC947AA8;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        FUN_0c0d8450(((a4 * 0x3C) + t0), a5, a6);
    return;
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = (*(int *)0xC943DB0);
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x34)) = (*(int *)0xC943DB4);
}

int nlGetMatrix8(int a4)
{
    int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC9482BC);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}

float nlRotateAX(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u2[2];
    u5[7] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

void FUN_0c0dcbb0(int a4)
{
    float u2;
    float u3;
    float u4;
    int t5;
    float u0[16];
    float u6[16];

    _builtin_st_ext((float (*)[4])u0);
    u2 = *(float *)((a4 + 0x0));
    u3 = *(float *)(((a4 + 0x4) + 0x0));
    u4 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    t5 = (*(int *)&(u0[15]));
    _builtin_st_ext((float (*)[4])u6);
    u6[0] = (u0[0] * u2);
    u6[1] = (u0[1] * u2);
    u6[2] = (u0[2] * u2);
    u6[3] = (u0[3] * u2);
    u6[4] = (u0[4] * u3);
    u6[5] = (u0[5] * u3);
    u6[6] = (u0[6] * u3);
    u6[7] = (u0[7] * u3);
    u6[8] = (u0[8] * u4);
    u6[9] = (u0[9] * u4);
    u6[10] = (u0[10] * u4);
    u6[11] = (u0[11] * u4);
    u6[12] = u0[12];
    u6[13] = u0[13];
    u6[14] = u0[14];
    u6[15] = (*(float *)&t5);
    _builtin_ld_ext((float (*)[4])u6);
}

void nlTransposeMatrix(void)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    float u0[16];
    float u13[16];

    _builtin_st_ext((float (*)[4])u0);
    t2 = (*(int *)&(u0[1]));
    t4 = (*(int *)&(u0[2]));
    t6 = (*(int *)&(u0[3]));
    t8 = (*(int *)&(u0[6]));
    t10 = (*(int *)&(u0[7]));
    t12 = (*(int *)&(u0[11]));
    _builtin_st_ext((float (*)[4])u13);
    u13[0] = u0[0];
    u13[1] = u0[4];
    u13[2] = u0[8];
    u13[3] = u0[12];
    u13[4] = (*(float *)&t2);
    u13[5] = u0[5];
    u13[6] = u0[9];
    u13[7] = u0[13];
    u13[8] = (*(float *)&t4);
    u13[9] = (*(float *)&t8);
    u13[10] = u0[10];
    u13[11] = u0[14];
    u13[12] = (*(float *)&t6);
    u13[13] = (*(float *)&t10);
    u13[14] = (*(float *)&t12);
    u13[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u13);
}

float nlGetAverageVector(int a4, int a5, int a6, float f4, float f5)
{
    float u2;
    float u5;
    float u6;
    float u7;
    float u8;

    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    u6 = ((*(float *)((a4 + 0x0))) * f4);
    u6 = u6 + f5 * (*(float *)((a5 + 0x0)));
    u7 = ((*(float *)(((a4 + 0x4) + 0x0))) * f4);
    u7 = u7 + f5 * (*(float *)(((a5 + 0x4) + 0x0)));
    *(float *)(((a6 + 0x4) + 0xFFFFFFFC)) = u6;
    u8 = (u2 * f4);
    u8 = u8 + f5 * u5;
    *(float *)(((a6 + 0x4) + 0x0)) = u7;
    *(float *)((((a6 + 0x4) + 0x4) + 0x0)) = u8;
    return f5;
}

int nlObjPut(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 0x2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC948580);
    return nlobjput_sub(a4);
}

int FUN_0c0ded50(int a4, int a5)
{
    int t0;
    int t5;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t5 = *(int *)(((int)stk + 4));
        t0 = (t0 | (FUN_0c0deaa0((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))), ((int)stk + 4))));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c0e19f2(void)
{
    int t0;
    int t3;

    t0 = *(int *)0xC94C790;
    if ((*(int *)((t0 + 0x4))) != 0) {
        t3 = ((int (*)(int))((*(int *)((t0 + 0x4)))))(t0);
    }
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x0)) = 0xC0E1A1E;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned int *)((t0 + 0xC)) = 0x0;
    return FUN_0c0e35b6(0xC94C6F8, 0x1);
}

int FUN_0c0e4f5a(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t1 = *(short *)(((int)stk + 10));
    t2 = *(int *)(((int)stk + 4));
    *(unsigned char *)(((((t1 << 2) + t2) + 0x31) + 0x0)) = (*(short *)(((((int)stk + 4) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x31);
}

int FUN_0c0e4f8c(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t1 = *(short *)(((int)stk + 10));
    t2 = *(int *)(((int)stk + 4));
    *(unsigned char *)(((((t1 << 2) + t2) + 0x32) + 0x0)) = (*(short *)(((((int)stk + 4) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x32);
}

int FUN_0c0e0784(int a4)
{
    int t0;

    t0 = *(int *)0xC94C6A4;
    *(unsigned int *)(((((int)a4 >> 5) << 2) + t0)) = ((*(int *)(((((int)a4 >> 5) << 2) + t0))) & (~(((int)(a4 & 0x1F) >= 0) ? (0x1 << ((a4 & 0x1F) & 31)) : ((-(int)(a4 & 0x1F) & 31) ? ((int)0x1 >> (-(int)(a4 & 0x1F) & 31)) : ((int)0x1 >> 31)))));
    return t0;
}

void FUN_0c0e1e40(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)((a4 + 0x20))) != 0) {
        t3 = *(int *)((a4 + 0x20));
        t4 = *(short *)((a4 + 0x2C));
        if ((int)(unsigned short)t4 > 0) {
            t5 = t3;
            t6 = 0x0;
            for (;;) {
                t6 = (t6 + 0x1);
                *(unsigned int *)((t5 + 0x1C)) = 0x0;
                t5 = (*(int *)((t5 + 0x28)));
                if ((int)t6 >= (int)(unsigned short)t4) {
                    break;
                }
            }
        }
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned short *)((a4 + 0x2C)) = 0x0;
    }
}

int FUN_0c0e2794(int a4, int a5)
{
    *(unsigned int *)(((*(int *)(((a5 - 8) + 0x0))) + 0xFFFFFFFC)) = (*(int *)(((a4 - 4) + 0x0)));
    *(unsigned int *)(((*(int *)(((a4 - 4) + 0x0))) + 0xFFFFFFF8)) = (*(int *)(((a5 - 8) + 0x0)));
    *(unsigned int *)(((a4 - 4) + 0x0)) = a5;
    *(unsigned int *)(((a5 - 8) + 0x0)) = a4;
    *(unsigned int *)(((a5 - 12) + 0x0)) = ((*(int *)(((a5 - 12) + 0x0))) | 0x40000000);
    return 0xFFFFFFF8;
}

int FUN_0c0e57a0(int a4, float f4, float f5, float f6)
{
    *(float *)(((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x40) + 0x0)) = f4;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x44)) = f5;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x48)) = f6;
    return FUN_0c0dd050((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x40));
}

int FUN_0c0d95a0(int a4, int a5, int a6, int a7)
{
    int t3;

    if ((*(int *)0xC943E38) == 1) {
        t3 = (FUN_0c0d9450(a4, a5, a6, a7));
    } else {
        t3 = (FUN_0c0d8c50(a4, a5, a6, a7));
    }
    return t3;
}

void nlLoadMatrix8(int a4)
{
    int t1;
    float u3;
    float u4;
    float u6;
    float u7;
    float u9;
    float u10;
    float u12;
    float u13;
    float u15;
    float u16;
    float u18;
    float u19;
    float u21;
    float u22;
    float u24;
    float u25;
    float u5[16];
    float u8[16];
    float u11[16];
    float u14[16];
    float u17[16];
    float u20[16];
    float u23[16];
    float u26[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC9482BC);
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)(((t1 + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u5);
    u5[0] = u4;
    u5[1] = u3;
    _builtin_ld_ext((float (*)[4])u5);
    u6 = *(float *)(((t1 + 0x8) + 0x0));
    u7 = *(float *)((((t1 + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u8);
    u8[2] = u7;
    u8[3] = u6;
    _builtin_ld_ext((float (*)[4])u8);
    u9 = *(float *)((((t1 + 0x8) + 0x8) + 0x0));
    u10 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u11);
    u11[4] = u10;
    u11[5] = u9;
    _builtin_ld_ext((float (*)[4])u11);
    u12 = *(float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u14);
    u14[6] = u13;
    u14[7] = u12;
    _builtin_ld_ext((float (*)[4])u14);
    u15 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u17);
    u17[8] = u16;
    u17[9] = u15;
    _builtin_ld_ext((float (*)[4])u17);
    u18 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u19 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u20);
    u20[10] = u19;
    u20[11] = u18;
    _builtin_ld_ext((float (*)[4])u20);
    u21 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u22 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u23);
    u23[12] = u22;
    u23[13] = u21;
    _builtin_ld_ext((float (*)[4])u23);
    u24 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u25 = *(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u26);
    u26[14] = u25;
    u26[15] = u24;
    _builtin_ld_ext((float (*)[4])u26);
}

float nlRotateXSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float nlRotateAY(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

float nlRotateAZ(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = u0;
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = u3[0];
    u6[5] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[6] = u3[2];
    u7[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

int FUN_0c0dd280(void)
{
    nlPushMatrix((*(int *)0xC9482E0));
    nlMultiMatrix((*(int *)0xC9482D4));
    FUN_0c0dc220();
    nlGetMatrix8(0xC9484A8);
    return nlPopMatrix(0x1);
}

int FUN_0c0ddfd0(void)
{
    nlPushMatrix(0xC9484E8);
    nlMultiMatrix((*(int *)0xC9482E0));
    nlMultiMatrix((*(int *)0xC9482D4));
    FUN_0c0dc220();
    return FUN_0c0dc460(0x1);
}

int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6)
{
    *(float *)0xC20CE60 = ((*(float *)0xC20CE50) + f4);
    *(float *)0xC20CE64 = ((*(float *)0xC20CE54) + f5);
    *(float *)0xC20CE68 = ((*(float *)0xC20CE58) + f6);
    *(float *)0xC20CE70 = f4;
    *(float *)0xC20CE74 = f5;
    *(float *)0xC20CE78 = f6;
    return 0x8;
}

void FUN_0c0e1ade(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(int *)((t0 + 0x34))) == 0) {
        *(unsigned int *)((t0 + 0x34)) = a4;
        *(unsigned int *)((a4 + 0x18)) = a4;
        *(unsigned int *)((a4 + 0x14)) = a4;
    } else {
        *(unsigned int *)((a4 + 0x14)) = (*(int *)(((*(int *)((t0 + 0x34))) + 0x14)));
        *(unsigned int *)((a4 + 0x18)) = (*(int *)((t0 + 0x34)));
        *(unsigned int *)(((*(int *)(((*(int *)((t0 + 0x34))) + 0x14))) + 0x18)) = a4;
        *(unsigned int *)(((*(int *)((t0 + 0x34))) + 0x14)) = a4;
    }
}

void FUN_0c0e1b72(int a4)
{
    int t1;

    t1 = *(int *)((a4 + 0x10));
    if ((*(int *)((a4 + 0x18))) == a4) {
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        return;
    }
    if ((*(int *)((t1 + 0x34))) == a4) {
        *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0x18)));
    }
    *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x18)) = (*(int *)((a4 + 0x18)));
    *(unsigned int *)(((*(int *)((a4 + 0x18))) + 0x14)) = (*(int *)((a4 + 0x14)));
}

int FUN_0c0e1cf6(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e193c(0xC0E1D64, 0x3C, (*(int *)((a4 + 0x14))));
    FUN_0c0e1cc6(t1, a4, a5);
    return t1;
}

int FUN_0c0de900(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 16) != 0) {
        nlInvLightVector();
    }
    FUN_0c0e59e0();
    FUN_0c0de8c0();
    return FUN_0c0de9e0(a4);
}

int FUN_0c0e18a2(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0e262a(a5);
    FUN_0c0e1852(a4, t0, a6);
    return t0;
}

int FUN_0c0e18ce(int a4, int a5)
{
    int t0;

    t0 = FUN_0c0e262a(a5);
    FUN_0c0e18f4(a4, t0, (*(int *)0xC94C790));
    return t0;
}

int FUN_0c0e193c(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0e262a(a5);
    FUN_0c0e18f4(a4, t0, a6);
    return t0;
}

int FUN_0c0e19aa(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0e262a(a5);
    FUN_0c0e1962(a4, t0, a6);
    return t0;
}

int FUN_0c0e1d1e(int a4, int a5)
{
    int t0;

    t0 = FUN_0c0e193c(0xC0E1D64, 0x3C, a4);
    FUN_0c0e1cc6(t0, a4, a5);
    return t0;
}

int FUN_0c0bfabc(float f4)
{
    int t0;
    int t2;

    *(unsigned int *)0xC24FA14 = 0xFFFFFFFF;
    t0 = *(int *)0xC23A1A8;
    if ((t0 & 40) == 0) {
        t2 = *(int *)0xC23A258;
        if ((unsigned int)(t2 & 0x1F) < (unsigned int)0x19) {
            return FUN_0c0c0340(0xC1A47AC, f4);
        }
        return (t2 & 0x1F);
    }
    return t0;
}

void paletteUpload(void)
{
    if ((*(signed char *)0xC990E80) != 0) {
        *(unsigned char *)0xC990E80 = 0x0;
        kmSetPaletteData(0xC9DD220);
    return;
    }
}

float nlRotateYSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

void nlUnitMatrix(void)
{
    float u0[16];
    float u1[16];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ld_ext((float (*)[4])u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[6] = 0.0f;
    u1[7] = 0.0f;
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[8] = 0.0f;
    u2[9] = 0.0f;
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = 0.0f;
    u3[13] = 0.0f;
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = 1.0f;
    u4[1] = 0.0f;
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = 1.0f;
    u5[11] = 0.0f;
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = 0.0f;
    u6[5] = 1.0f;
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[14] = 0.0f;
    u7[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u7);
}

float FUN_0c0dd0a0(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

int FUN_0c0e55b4(int a4)
{
    if (a4 != 0) {
        return a4;
    }
    *(unsigned int *)0xC94C840 = a4;
    return a4;
}

int nlPrintInitFontTexture(void)
{
    int t0;

    *(unsigned int *)0xC944204 = 0xA2000009;
    *(unsigned int *)0xC944208 = 0x80000000;
    *(unsigned int *)0xC94420C = 0x949004C7;
    t0 = FUN_0c0da920();
    *(unsigned int *)0xC944214 = 0xFFFFFFFF;
    *(unsigned int *)0xC944218 = 0x0;
    return t0;
}

int FUN_0c0db0a0(int a4, int a5)
{
    int t0;

    t0 = *(int *)0xC9441B4;
    *(unsigned int *)0xC9441AC = (t0 * a4);
    *(unsigned int *)0xC9441BC = (t0 * a4);
    *(unsigned int *)0xC9441B0 = ((*(int *)0xC9441B8) * a5);
    return 0xC9441B8;
}

int FUN_0c0db5a0(int a4)
{
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlCopyMatrix((((int)stk + 4) + 0x4), a4);
    return (FUN_0c0dbe40((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x44)));
}

int FUN_0c0e1830(int a4, int a5)
{
    int t0;

    t0 = FUN_0c0e262a(a5);
    FUN_0c0e17dc(a4, t0);
    return t0;
}

void FUN_0c0e19d0(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)(((a4 - 12) + 0x0));
    if ((int)(t0 - 16) > 0) {
        t1 = 0x0;
        t2 = (a4 + 0x30);
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x4);
            if ((int)t1 >= (int)(t0 - 16)) {
                break;
            }
        }
    }
}

int FUN_0c0e563c(int a4)
{
    if ((*(int *)((a4 + 0x0))) == 1) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0c473c(int a4)
{
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c0c465c(a4, 0x0, 0x0, 0x0, a4);
    return FUN_0c0849da();
}

int nlRotateAxe(int a4, int a5)
{
    float t0;
    float t1;

    t0 = FUN_0c0d9e90(a5);
    t1 = FUN_0c0da410(a5);
    return nlRotateAxeSC(a4, t1, t0);
}

float nlAddVector(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = *(float *)(((a4 + 0x4) + 0x0));
    u3 = *(float *)(((a5 + 0x4) + 0x0));
    u4 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFF8)) = (u0 + u1);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFFC)) = (u2 + u3);
    *(float *)((((a4 + 0x4) + 0x4) + 0x0)) = (u4 + u5);
    return (u0 + u1);
}

float nlAddVector3op(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)(((a5 + 0x4) + 0x0));
    u3 = *(float *)(((a6 + 0x4) + 0x0));
    u4 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a6 + 0x4) + 0x4) + 0x0));
    *(float *)((a4 + 0x0)) = (u0 + u1);
    *(float *)(((a4 + 0x4) + 0x0)) = (u2 + u3);
    *(float *)((((a4 + 0x4) + 0x4) + 0x0)) = (u4 + u5);
    return (u0 + u1);
}

float nlLength(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6[4];
    float u7[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = *(float *)(((a4 + 0x4) + 0x0));
    u3 = *(float *)(((a5 + 0x4) + 0x0));
    u4 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    u6[0] = (u0 - u1);
    u6[1] = (u2 - u3);
    u6[2] = (u4 - u5);
    u6[3] = 0.0f;
    u7[0] = (u0 - u1);
    u7[1] = (u2 - u3);
    u7[2] = (u4 - u5);
    u7[3] = 0.0f;
    return _builtin_sqrtf((_builtin_fipr(u6, u7)));
}

float nlSubVector(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = *(float *)(((a4 + 0x4) + 0x0));
    u3 = *(float *)(((a5 + 0x4) + 0x0));
    u4 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFF8)) = (u0 - u1);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFFC)) = (u2 - u3);
    *(float *)((((a4 + 0x4) + 0x4) + 0x0)) = (u4 - u5);
    return (u0 - u1);
}

float nlSubVector3op(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)(((a5 + 0x4) + 0x0));
    u3 = *(float *)(((a6 + 0x4) + 0x0));
    u4 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    u5 = *(float *)((((a6 + 0x4) + 0x4) + 0x0));
    *(float *)((a4 + 0x0)) = (u0 - u1);
    *(float *)(((a4 + 0x4) + 0x0)) = (u2 - u3);
    *(float *)((((a4 + 0x4) + 0x4) + 0x0)) = (u4 - u5);
    return (u0 - u1);
}

int FUN_0c0dd2b0(void)
{
    nlPushMatrix((*(int *)0xC9482D4));
    FUN_0c0dc220();
    nlGetMatrix(0xC948468);
    return nlPopMatrix(0x1);
}

int FUN_0c0dd260(void)
{
    nlPushMatrix((*(int *)0xC9482E0));
    FUN_0c0dc220();
    nlGetMatrix8(0xC9484A8);
    return nlPopMatrix(0x1);
}

int FUN_0c0ddc20(int a4, int a5)
{
    nlPushMatrix(0xC948468);
    FUN_0c0db470(a4, a5);
    return nlPopMatrix(0x1);
}

int FUN_0c0e15b4(int a4)
{
    int t0;
    int t6;
    int t2;

    t0 = *(int *)((a4 + 0x10));
    if ((*(int *)((t0 + 0x34))) != 0) {
        for (;;) {
            if ((*(int *)((t0 + 0x34))) == 0) {
                break;
            }
            t2 = (FUN_0c0e1b9a((*(int *)((t0 + 0x34)))));
        }
        t6 = t2;
    }
    return t6;
}

int FUN_0c0e4848(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    return a4;
}

int FUN_0c0da2e0(void)
{
    int t0;

    t0 = *(int *)0xC20CDC0;
    *(unsigned int *)0xC20CDC0 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

void FUN_0c0de4a0(void)
{
    *(unsigned int *)0xC943EB0 = (*(int *)(((*(int *)0xC952968) + 0x0)));
    *(unsigned int *)0xC943EB4 = (*(int *)(((*(int *)0xC952968) + 0x4)));
    *(unsigned int *)0xC943EB8 = (*(int *)(((*(int *)0xC952968) + 0x8)));
    *(unsigned int *)0xC943EBC = (*(int *)(((*(int *)0xC952968) + 0xC)));
}

int FUN_0c0e0cc0(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    if ((f5 == f8) && ((f4 == f7) && (f6 == f9))) {
        *(unsigned int *)0xC94C6C0 = 0x0;
        *(unsigned int *)0xC94C6E4 = 0x0;
        return 0x0;
    }
    return FUN_0c0e07b4(a4, f4, f5, f6, f7, f8, f9);
}

int FUN_0c0e57d0(int a4, float f4, float f5, float f6)
{
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x34)) = f4;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x38)) = f5;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x3C)) = f6;
    return 0x3C;
}

int FUN_0c0e57f0(int a4, float f4, float f5, float f6)
{
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x4C)) = f4;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x50)) = f5;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x54)) = f6;
    return 0x54;
}

int FUN_0c0d9940(int a4, int a5)
{
    return (kmSetColorClampValue(a4, a5));
}

void FUN_0c0dccf0(void)
{
    float u0[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[2] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[6] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[10] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

float FUN_0c0dce80(int a4, int a5, float f4)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)(((a5 + 0x4) + 0x0));
    u2 = *(float *)((((a5 + 0x4) + 0x4) + 0x0));
    *(float *)(((a4 + 0x4) + 0xFFFFFFFC)) = (u0 * f4);
    *(float *)(((a4 + 0x4) + 0x0)) = (u1 * f4);
    *(float *)((((a4 + 0x4) + 0x4) + 0x0)) = (u2 * f4);
    return (u0 * f4);
}

void FUN_0c0dfd34(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = (*(float *)0xC94C6B4);
    *(float *)((a5 + 0x0)) = (*(float *)0xC94C6B8);
}

int FUN_0c0e1676(int a4)
{
    int t2;

    if ((*(int *)((a4 + 0x30))) != 0) {
        t2 = ((int (*)(int))((*(int *)((a4 + 0x30)))))(a4);
    }
    *(unsigned int *)((a4 + 0x0)) = 0xC0E1794;
    return FUN_0c0e1794();
}

int FUN_0c0d8f50(int a4)
{
    return (kmSetBorderColor((a4 | 0xFF000000)));
}

float FUN_0c0da0c0(float f4)
{
    if (f4 == 0.0f) {
        return (*(float *)0xC0DA138);
    }
    return (1.0f / _builtin_sqrtf(f4));
}

int FUN_0c0db530(void)
{
    nlGetMatrix(0x0);
    *(unsigned int *)0xC9482BC = (*(int *)0xC9482B8);
    *(unsigned short *)0xC9482B4 = 0x0;
    return FUN_0c0dbda0(0x0);
}

int FUN_0c0dc5a0(void)
{
    int t0;

    t0 = nlPushMatrix(0x0);
    nlUnitMatrix();
    return t0;
}

int FUN_0c0dcc80(int a4)
{
    return FUN_0c0dcc70((-(*(float *)((a4 + 0x0)))), (-(*(float *)((a4 + 0x4)))), (-(*(float *)((a4 + 0x8)))));
}

void FUN_0c0de3c0(int a4, int a5)
{
    *(unsigned int *)0xC20CC58 = ((((((~a4) & 0x7) << 2) << 2) << 1) + (((~a5) & 0x7) << 2));
}

void FUN_0c0df280(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFFF9FFF);
    if (a5 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x2000);
    }
}

int FUN_0c0d8940(void)
{
    *(unsigned int *)0xC94444C = 0x1;
    kmRender();
    *(unsigned int *)0xC94444C = 0x0;
    return kmFlipFrameBuffer();
}

int FUN_0c0d9a40(int a4)
{
    int t0;

    t0 = 0xC0D9A30;
    if (a4 == 0) {
        t0 = 0xC0D99A0;
    }
    return kmfSetFatalErrorCallback(t0);
}

void FUN_0c0db430(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void FUN_0c0db470(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void FUN_0c0db4d0(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void FUN_0c0dc670(void)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = (-u0[0]);
    u1[1] = (-u0[1]);
    u1[2] = (-u0[2]);
    u1[3] = (-u0[3]);
    u1[4] = (-u0[4]);
    u1[5] = (-u0[5]);
    u1[6] = (-u0[6]);
    u1[7] = (-u0[7]);
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
}
