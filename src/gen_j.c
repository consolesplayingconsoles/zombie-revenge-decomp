/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
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
struct o2C_short { char p[0x2C]; short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_short { char p[0x2E]; short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


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



int FUN_0c0dea10(int a4, float f4, float f5)
{
    (((struct o0_uint *)0xFF000038)->v) = 0xC;
    (((struct o4_uint *)0xFF000038)->v) = 0xC;
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1016 = a4;
    R1012 = a5;
    R1004 = 0x0;
    t0 = R1016;
    R1008 = t0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((R1008) + 0x4));
        if (t4 == -1) {
            break;
        }
        FUN_0c0dfb08((R1016), (R1012), (R1004));
        t1 = (R1008);
        t1 = (t1 + 0x10);
        R1008 = t1;
        t2 = (R1004);
        t2 = (t2 + 0x1);
        R1004 = t2;
    }
    return t4;
}

void FUN_0c0e4e88(int a4)
{
    int t0;
    int t1;
    int t3;
    int stk[5];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1016 = a4;
    R1008 = 0xC1EAB41;
    t0 = R1016;
    R1012 = t0;
    R1004 = 0x0;
    t1 = t0;
    for (;;) {
        if ((int)(R1004) >= (int)0x40) {
            break;
        }
        t3 = R1012;
        R1012 = (t3 + 0x1);
        t1 = (R1008);
        t1 = (t1 + 0x1);
        R1008 = t1;
        t1 = (t1 - 1);
        *(unsigned char *)((((t3 + 0x1) - 1) + 0x0)) = (*(signed char *)((t1 + 0x0)));
        t1 = (R1004);
        t1 = (t1 + 0x1);
        R1004 = t1;
    }
}

int FUN_0c0e1bd0(int a4)
{
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    FUN_0c0e1b72(a4);
    *(unsigned int *)((a4 + 0x14)) = (*(int *)0xC94C790);
    *(unsigned int *)((a4 + 0x18)) = (*(int *)(((*(int *)0xC94C790) + 0x18)));
    (((struct o2E_ushort *)(a4))->v) = (((((struct o2E_short *)(a4))->v)) & 0xFFFC);
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
    if (((((struct o2C_short *)(a4))->v)) != 0) {
        t3 = (*(int *)((a4 + 0x20)));
        t4 = (unsigned short)((((struct o2C_short *)(a4))->v));
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
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = 0xC94C968;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x10) {
            return 0x0;
        }
        if ((*(int *)(((R1004) + 0x0))) == 0) {
            break;
        }
        R1004 = ((R1004) + 0x10);
        t0 = (t0 + 0x1);
    }
    *(unsigned int *)(((R1004) + 0x0)) = 0x1;
    return (R1004);
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
    int stk[15];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 16)) = f7;
    *(float *)(((int)stk + 20)) = f8;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 48)) = 0xFFFFFFFF;
    return (FUN_0c0c0340(((int)stk + 0)));
}

int nlPrintf(Stk4 s)
{
    int t0;

    t0 = ((int)&s + 4);
    if ((0x3 & ((int)&s + 4)) != 0) {
        t0 = ((int)&s + 8);
    }
    FUN_0c0edc20(0xC943FA8, s.w[0], t0);
    FUN_0c0daf70(0xC943FA8);
    return 0x0;
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

    (((struct o14_uint *)0xC990E84)->v) = a4;
    (((struct o0_ushort *)0xC990E84)->v) = a5;
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1016 = a4;
    R1012 = a5;
    R1004 = 0x0;
    t0 = R1016;
    R1008 = t0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((R1008) + 0x4));
        if (t4 == -1) {
            break;
        }
        FUN_0c0df758((R1016), (R1012), (R1004));
        t1 = (R1008);
        t1 = (t1 + 0x10);
        R1008 = t1;
        t2 = (R1004);
        t2 = (t2 + 0x1);
        R1004 = t2;
    }
    return t4;
}

int FUN_0c0e1dc4(int a4)
{
    int t0;
    int t3;
    int t6;

    (((struct o2C_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t0 = *(int *)((a4 + 0x1C));
    (((struct o2C_ushort *)(t0))->v) = (((((struct o2C_short *)(t0))->v)) + 0x1);
    t3 = (((struct o2C_short *)((*(int *)((a4 + 0x1C)))))->v);
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
    int R1004;
    int R1008;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 16);

    R1016 = a4;
    *(unsigned short *)(((((int)stk + 4) + 0xA) + 0x0)) = a5;
    R1008 = ((R1016) + 0x30);
    R1004 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(R1004) >= (int)0x4) {
            break;
        }
        t1 = (*(short *)(((int)stk + 14)));
        t2 = t1;
        *(unsigned char *)(((R1008) + 0x0)) = t2;
        R1008 = ((R1008) + 0x4);
        t2 = (R1004);
        t2 = (t2 + 0x1);
        R1004 = t2;
    }
    return t1;
}

void FUN_0c0de030(int a4)
{
    float m[16];
    float *p;
    int i;

    p = (float *)a4;
    for (i = 0; i < 16; i += 4) {
        m[i] = p[i + 3];
        m[i + 1] = p[i];
        m[i + 2] = p[i + 1];
        m[i + 3] = (-p[i + 3]);
    }
    _builtin_ld_ext((float (*)[4])m);
}

void FUN_0c0de7a0(int a4)
{
    float m[16];
    float *p;
    int i;

    p = (float *)a4;
    for (i = 0; i < 16; i += 4) {
        m[i] = p[i + 3];
        m[i + 1] = p[i];
        m[i + 2] = p[i + 1];
        m[i + 3] = (-p[i + 3]);
    }
    _builtin_ld_ext((float (*)[4])m);
}

int nlRotate(int a4, int a5)
{
    int stk[5];
    int R1004;

    R1004 = *(int *)((int)stk + 0);

    R1004 = a5;
    *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x4)));
    *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x8)));
    FUN_0c0dd050((((int)stk + 0) + 0x4));
    return (nlRotateAxe((((int)stk + 0) + 0x4), (R1004)));
}

int FUN_0c0e1b9a(int a4)
{
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    FUN_0c0e1b72(a4);
    *(unsigned int *)((a4 + 0x14)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x14)));
    *(unsigned int *)((a4 + 0x18)) = (*(int *)((a4 + 0x10)));
    (((struct o2E_ushort *)(a4))->v) = (((((struct o2E_short *)(a4))->v)) & 0xFFFC);
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
    (((struct o2E_ushort *)(a4))->v) = (((((struct o2E_short *)(a4))->v)) & 0xFFFC);
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

    if (((((struct o14_int *)0xC943E24)->v)) == 1) {
        (((struct o0_uint *)0xC943E24)->v) = 0x20;
        t1 = *(int *)0xC943DCC;
        *(unsigned int *)0xC943DCC = (t1 | 0x10);
        (((struct oC_uint *)0xC943E24)->v) = 0x2;
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
    float R1004;
    float R1008;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    R1008 = f4;
    R1004 = f5;
    *(float *)0xC94C6AC = (1.0f / (R1008));
    *(float *)0xC94C6B0 = (1.0f / (R1004));
    *(float *)0xC94C6B4 = (R1008);
    *(float *)0xC94C6B8 = (R1004);
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
    if (((((struct o2C_short *)(a4))->v)) != 0) {
        t3 = (*(int *)((a4 + 0x20)));
        t4 = (unsigned short)((((struct o2C_short *)(a4))->v));
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

    (((struct o14_uint *)0xC944204)->v) = a4;
    (((struct o0_uint *)0xC944204)->v) = (((((struct o0_int *)0xC944204)->v)) & 0xF8FFFFFF);
    (((struct o8_uint *)0xC944204)->v) = (((((struct o8_int *)0xC944204)->v)) & 0x3FFFFFF);
    if (a4 != 0) {
        t5 = (((((struct o8_int *)0xC944204)->v)) | 0x20000000);
    } else {
        (((struct o0_uint *)0xC944204)->v) = (((((struct o0_int *)0xC944204)->v)) | 0x2000000);
        t5 = (((((struct o8_int *)0xC944204)->v)) | 0x94000000);
    }
    (((struct o8_uint *)0xC944204)->v) = t5;
    return t5;
}

int FUN_0c0ddeb0(int a4, int a5)
{
    float u1;
    int stk[6];

    FUN_0c0db430(a4, ((int)stk + 0));
    u1 = *(float *)(((int)stk + 12));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 0))) * (1.0f / u1));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 4))) * (1.0f / u1));
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
    (((struct o2E_ushort *)(a4))->v) = (((((struct o2E_short *)(a4))->v)) | 0x2);
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
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = 0xC94C968;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x10) {
            break;
        }
        t0 = (R1004);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (R1004);
        t0 = (t0 + 0x10);
        R1004 = t0;
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
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = ((((struct o0_int *)0xC943DB0)->v));
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x34)) = ((((struct o4_int *)0xC943DB0)->v));
}

int nlGetMatrix8(int a4)
{
    float m[16];
    float *p;
    int i;

    if (a4 == 0) {
        a4 = (*(int *)0xC9482BC);
    }
    _builtin_st_ext((float (*)[4])m);
    p = (float *)a4;
    for (i = 14; i >= 0; i -= 2) {
        p[i] = m[i + 1];
        p[i + 1] = m[i];
    }
    return a4;
}




float nlGetAverageVector(int a4, int a5, int a6, float f4, float f5)
{
    float u2;
    float u5;
    float u6;
    float u7;
    float u8;

    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    u6 = ((*(float *)((a4 + 0x0))) * f4);
    u6 = u6 + f5 * (*(float *)((a5 + 0x0)));
    u7 = (((((struct o4_float *)(a4))->v)) * f4);
    u7 = u7 + f5 * ((((struct o4_float *)(a5))->v));
    *(float *)(((a6 + 0x4) + 0xFFFFFFFC)) = u6;
    u8 = (u2 * f4);
    u8 = u8 + f5 * u5;
    (((struct o4_float *)(a6))->v) = u7;
    (((struct o4_float *)((a6 + 0x4)))->v) = u8;
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
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t5 = *(int *)(((int)stk + 0));
        t0 = (t0 | (FUN_0c0deaa0((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 0))), ((int)stk + 0))));
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
    int R1004;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a6;
    R1004 = (R1012);
    t1 = *(short *)(((int)stk + 10));
    t2 = R1004;
    *(unsigned char *)(((((t1 << 2) + t2) + 0x31) + 0x0)) = (*(short *)(((((int)stk + 4) + 0x4) + 0x0)));
    return (((t1 << 2) + t2) + 0x31);
}

int FUN_0c0e4f8c(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int stk[4];
    int R1004;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a6;
    R1004 = (R1012);
    t1 = *(short *)(((int)stk + 10));
    t2 = R1004;
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
    int t4;
    int t5;
    int t6;

    if ((*(int *)((a4 + 0x20))) != 0) {
        t5 = *(int *)((a4 + 0x20));
        t4 = (((struct o2C_short *)(a4))->v);
        if ((int)(unsigned short)t4 > 0) {
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
        (((struct o2C_ushort *)(a4))->v) = 0x0;
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
            return FUN_0c0c0340(0xC1A47AC);
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

    (((struct o0_uint *)0xC944204)->v) = 0xA2000009;
    (((struct o4_uint *)0xC944204)->v) = 0x80000000;
    (((struct o8_uint *)0xC944204)->v) = 0x949004C7;
    t0 = FUN_0c0da920();
    (((struct o10_uint *)0xC944204)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC944204)->v) = 0x0;
    return t0;
}

int FUN_0c0db0a0(int a4, int a5)
{
    int t0;

    t0 = (((struct o8_int *)0xC9441AC)->v);
    (((struct o0_uint *)0xC9441AC)->v) = (t0 * a4);
    (((struct o10_uint *)0xC9441AC)->v) = (t0 * a4);
    (((struct o4_uint *)0xC9441AC)->v) = (((((struct oC_int *)0xC9441AC)->v)) * a5);
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
    FUN_0c0c465c(a4);
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
    u2 = (((struct o4_float *)(a4))->v);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFF8)) = (u0 + u1);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFFC)) = (u2 + u3);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u4 + u5);
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
    u2 = (((struct o4_float *)(a4))->v);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFF8)) = (u0 - u1);
    *(float *)((((a4 + 0x4) + 0x4) + 0xFFFFFFFC)) = (u2 - u3);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u4 - u5);
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

    t0 = *(int *)((a4 + 0x10));
    if ((*(int *)((t0 + 0x34))) != 0) {
        for (;;) {
            if ((*(int *)((t0 + 0x34))) == 0) {
                break;
            }
            t6 = (FUN_0c0e1b9a((*(int *)((t0 + 0x34)))));
        }
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
    (((struct o0_uint *)0xC943EB0)->v) = (*(int *)(((*(int *)0xC952968) + 0x0)));
    (((struct o4_uint *)0xC943EB0)->v) = (*(int *)(((*(int *)0xC952968) + 0x4)));
    (((struct o8_uint *)0xC943EB0)->v) = (*(int *)(((*(int *)0xC952968) + 0x8)));
    (((struct oC_uint *)0xC943EB0)->v) = (*(int *)(((*(int *)0xC952968) + 0xC)));
}

int FUN_0c0e0cc0(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    if ((f5 == f8) && ((f4 == f7) && (f6 == f9))) {
        (((struct o0_uint *)0xC94C6C0)->v) = 0x0;
        (((struct o24_uint *)0xC94C6C0)->v) = 0x0;
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
    *(float *)((a4 + 0x0)) = ((((struct o0_float *)0xC94C6B4)->v));
    *(float *)((a5 + 0x0)) = ((((struct o4_float *)0xC94C6B4)->v));
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
    (((struct o8_uint *)0xC9482B4)->v) = ((((struct o4_int *)0xC9482B4)->v));
    (((struct o0_ushort *)0xC9482B4)->v) = 0x0;
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
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
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

