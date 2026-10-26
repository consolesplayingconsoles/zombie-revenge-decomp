/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetBackColorZ(int, int, int, float);
float nlFloor(float);
float nlLog(float);
int FUN_0c0da2e0(void);
int FUN_0c0da510(float);
int FUN_0c0dbda0(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlPushMatrix(int);
int FUN_0c0dd260(void);
int FUN_0c0dd280(void);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlObjPutSetLightDirectionF(float, float, float);
int FUN_0c0e1dfe(int);
int FUN_0c0e1e40(int);
int FUN_0c0e2030(int);
int FUN_0c0e22cc(int, int, int);
int FUN_0c0e35b6(int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int kmDiscardVertexBuffer(void);
int kmGetCurrentScanline(int);
int kmSetFogDensity(int);
int kmSetFogTableColor(int, ...);
int kmSetFogVertexColor(int, ...);
int kmSetPaletteMode(int);
int kmUseAnotherModifier(int);
int kmfSetTimeOutCount(int, int, int, int);
float FUN_0c0dcd80(int a4, int a5);
int FUN_0c0de8d0(void);
int FUN_0c0d88a0(int a4);
int FUN_0c0d8ed0(int a4);
int FUN_0c0d8ef0(int a4);
int FUN_0c0d9ee0(float f4);
float FUN_0c0da300(void);
void FUN_0c0db2a0(int a4);
int FUN_0c0df3a0(int a4, int a5);
int FUN_0c0df3c0(int a4, int a5);
int FUN_0c0df510(int a4);
int FUN_0c0df530(int a4);
int FUN_0c0df550(int a4);
int FUN_0c0d90f0(void);
int FUN_0c0d9900(void);
int FUN_0c0d9920(void);
float FUN_0c0dcea0(int a4);
int FUN_0c0e36ac(void);
int FUN_0c0d9060(int a4);
float FUN_0c0d9e70(float f4);
int FUN_0c0dde90(void);
int FUN_0c0de2a0(int a4);
int FUN_0c0df4c0(int a4);
int FUN_0c0e206e(void);
int FUN_0c0d98d0(int a4);
float FUN_0c0da210(float f4);
float FUN_0c0da220(float f4);
void FUN_0c0db840(int a4);
void FUN_0c0dcbe0(int a4);
void FUN_0c0dcc70(float f4, float f5, float f6);
int FUN_0c0de2c0(int a4);
int FUN_0c0de8c0(void);
int FUN_0c0e1e6a(int a4);
int strlen(int a4);
int FUN_0c0d98f0(void);
int FUN_0c0d9ab0(int a4, int a5, int a6, int a7);
int FUN_0c0dc240(void);
int FUN_0c0de3a0(float f4, float f5, float f6);
int FUN_0c0de3b0(float f4, float f5, float f6);
int FUN_0c0df4f0(int a4);
void FUN_0c0e4e4e(int a4);
void FUN_0c0dea90(void);
int FUN_0c0e2362(int a4);
int FUN_0c0daf40(void);
void FUN_0c0daf60(int a4, int a5);
int FUN_0c0dc220(void);
void FUN_0c0de260(float f4);
int FUN_0c0d8c40(int a4, int a5, int a6);
int FUN_0c0d9ac0(void);
int FUN_0c0db1c0(int a4);
void FUN_0c0de9c0(void);
void FUN_0c0e14a0(void);
int FUN_0c0e1794(void);
void FUN_0c0d9250(int a4);
int FUN_0c0d98c0(void);
int FUN_0c0d98e0(int a4, int a5);
int FUN_0c0d9a60(void);
void FUN_0c0da320(int a4);
void FUN_0c0de000(float f4);
void FUN_0c0def50(int a4);
void FUN_0c0e5790(int a4);

float FUN_0c0dcd80(int a4, int a5)
{
    float u6[4];
    float u7[4];

    u6[0] = (*(float *)((a4 + 0x0)));
    u6[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u6[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u6[3] = 0.0f;
    u7[0] = (*(float *)((a5 + 0x0)));
    u7[1] = (*(float *)(((a5 + 0x4) + 0x0)));
    u7[2] = (*(float *)((((a5 + 0x4) + 0x4) + 0x0)));
    u7[3] = 0.0f;
    return (_builtin_fipr(u6, u7));
}

int FUN_0c0de8d0(void)
{
    nlPushMatrix(0xC948580);
    nlMultiMatrix((*(int *)0xC9482D4));
    return FUN_0c0dc220();
}

int FUN_0c0d88a0(int a4)
{
    *(unsigned char *)0xC990E81 = a4;
    return kmSetPaletteMode((*(int *)(((a4 << 2) + 0xC1EA2A8))));
}

int FUN_0c0d8ed0(int a4)
{
    return (kmSetFogTableColor(a4));
}

int FUN_0c0d8ef0(int a4)
{
    return (kmSetFogVertexColor(a4));
}

int FUN_0c0d9ee0(float f4)
{
    return FUN_0c0da510(((-_builtin_fabsf(f4)) + (*(float *)0xC0D9F80)));
}

float FUN_0c0da300(void)
{
    int t0;

    t0 = FUN_0c0da2e0();
    return ((float)t0 * (*(float *)0xC0DA364));
}

void FUN_0c0db2a0(int a4)
{
    *(unsigned int *)0xC9482AC = ((*(int *)0xC9482AC) & 0xFFDFFFFF);
    *(unsigned int *)0xC9482AC = ((*(int *)0xC9482AC) | (a4 << 21));
}

int FUN_0c0df3a0(int a4, int a5)
{
    int t1;

    t1 = (int)((unsigned int)a5 & 0x3);
    *(unsigned int *)((((a4 + 0x18) + 0x50) + 0x0)) = (((*(int *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xFFFFFFFC) | ((unsigned int)t1 << 0));
    return t1;
}

int FUN_0c0df3c0(int a4, int a5)
{
    int t1;

    t1 = (int)((unsigned int)a5 & 0x1);
    *(unsigned int *)((((a4 + 0x18) + 0x50) + 0x0)) = (((*(int *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xFFFFFFBF) | ((unsigned int)t1 << 6));
    return t1;
}

int FUN_0c0df510(int a4)
{
    FUN_0c0dd260();
    return ((int (*)(int, int))(0xC0DF584))(a4, 0x0);
}

int FUN_0c0df530(int a4)
{
    FUN_0c0dd260();
    return ((int (*)(int, int))(0xC0DF584))(a4, 0xFFFFFFFF);
}

int FUN_0c0df550(int a4)
{
    FUN_0c0dd280();
    return ((int (*)(int, int))(0xC0DF584))(a4, 0x0);
}

int FUN_0c0d90f0(void)
{
    int stk[3];

    kmGetCurrentScanline(((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c0d9900(void)
{
    int t0;
    int t2;

    t0 = FUN_0c0d98c0();
    t2 = FUN_0c0d98e0((*(int *)0xC943F94), t0);
    return FUN_0c0d98d0(t2);
}

int FUN_0c0d9920(void)
{
    int t0;
    int t2;

    t0 = FUN_0c0d98c0();
    t2 = FUN_0c0d98e0((*(int *)0xC943F94), t0);
    return FUN_0c0d98d0(t2);
}

float FUN_0c0dcea0(int a4)
{
    float u0;
    float u1;
    float u2;
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
    return _builtin_sqrtf((_builtin_fipr(u3, u4)));
}

int FUN_0c0e36ac(void)
{
    if ((*(int *)0xA0800098) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d9060(int a4)
{
    int t0;

    t0 = (a4 & 0x3);
    if ((a4 & 0x3) == 1) {
        t0 = 0x0;
    }
    *(unsigned int *)0xC20CC5C = t0;
    return (a4 & 0x3);
}

float FUN_0c0d9e70(float f4)
{
    float t0;

    t0 = nlFloor((-f4));
    return (-t0);
}

int FUN_0c0dde90(void)
{
    FUN_0c0dbda0(0xC9484E8);
    return nlMultiMatrix(0xC9484A8);
}

int FUN_0c0de2a0(int a4)
{
    return nlObjPutSetSpecularEyeDirectionF((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
}

int FUN_0c0df4c0(int a4)
{
    int t0;

    t0 = a4;
    if (a4 != 2) {
        t0 = 0x1;
    }
    *(unsigned int *)0xC94C690 = (t0 << 29);
    return a4;
}

int FUN_0c0e206e(void)
{
    FUN_0c0e2030((*(int *)0xC94C790));
    return FUN_0c0e35b6(0xC94C6F8, 0x1);
}

int FUN_0c0d98d0(int a4)
{
    return (int)((float)a4 * (*(float *)0xC943EA8));
}

float FUN_0c0da210(float f4)
{
    float t0;

    t0 = nlLog(f4);
    return (t0 / (*(float *)0xC0DA25C));
}

float FUN_0c0da220(float f4)
{
    float t0;

    t0 = nlLog(f4);
    return (t0 / 0.693147123f);
}

void FUN_0c0db840(int a4)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
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
}

void FUN_0c0dcbe0(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = u0;
    u3[13] = u1;
    u3[14] = u2;
    _builtin_ld_ext((float (*)[4])u3);
}

void FUN_0c0dcc70(float f4, float f5, float f6)
{
    float u0[4];
    float u1[16];
    float u2[16];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[12] = u0[0];
    u1[13] = u0[1];
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[14] = u0[2];
    u2[15] = u0[3];
    _builtin_ld_ext((float (*)[4])u2);
}

int FUN_0c0de2c0(int a4)
{
    return nlObjPutSetLightDirectionF((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
}

int FUN_0c0de8c0(void)
{
    nlPushMatrix(0x0);
    return nlMultiMatrixRevOrder8(0xC948580);
}

int FUN_0c0e1e6a(int a4)
{
    FUN_0c0e1dfe(a4);
    return FUN_0c0e1e40(a4);
}

int strlen(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}

int FUN_0c0d98f0(void)
{
    int t0;

    t0 = FUN_0c0d98c0();
    *(unsigned int *)0xC943F94 = t0;
    return t0;
}

int FUN_0c0d9ab0(int a4, int a5, int a6, int a7)
{
    return kmfSetTimeOutCount(a4, a5, a6, a7);
}

int FUN_0c0dc240(void)
{
    nlPushMatrix((*(int *)0xC9482D4));
    return FUN_0c0dc220();
}

int FUN_0c0de3a0(float f4, float f5, float f6)
{
    *(float *)0xC20CE80 = f4;
    *(float *)0xC20CE84 = f5;
    *(float *)0xC20CE88 = f6;
    return 0x8;
}

int FUN_0c0de3b0(float f4, float f5, float f6)
{
    *(float *)0xC20CE90 = f4;
    *(float *)0xC20CE94 = f5;
    *(float *)0xC20CE98 = f6;
    return 0x8;
}

int FUN_0c0df4f0(int a4)
{
    int t0;

    t0 = a4;
    if (a4 != -1) {
        t0 = 0x1;
    }
    *(unsigned int *)0xC94C694 = t0;
    return a4;
}

void FUN_0c0e4e4e(int a4)
{
    int stk[2];

    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a4;
}

void FUN_0c0dea90(void)
{
    *(unsigned int *)0xC948270 = 0x0;
    *(unsigned int *)0xC94C688 = 0x0;
}

int FUN_0c0e2362(int a4)
{
    return FUN_0c0e22cc(a4, (*(int *)((a4 + 0x38))), (*(int *)((a4 + 0x3C))));
}

int FUN_0c0daf40(void)
{
    int t0;

    t0 = *(int *)0xC9441A8;
    *(unsigned int *)0xC9441A8 = (t0 | 0x1);
    return (t0 | 0x1);
}

void FUN_0c0daf60(int a4, int a5)
{
    *(unsigned int *)0xC9441B4 = a4;
    *(unsigned int *)0xC9441B8 = a5;
}

int FUN_0c0dc220(void)
{
    return nlMultiMatrix8(((*(int *)0xC9482BC) - 64));
}

void FUN_0c0de260(float f4)
{
    *(float *)0xC20CE48 = f4;
    *(float *)0xC948254 = f4;
}


int FUN_0c0d9ac0(void)
{
    return kmDiscardVertexBuffer();
}

int FUN_0c0db1c0(int a4)
{
    return kmSetFogDensity(a4);
}

void FUN_0c0de9c0(void)
{
    *(unsigned int *)0xC94C680 = 0x1;
}

void FUN_0c0e14a0(void)
{
    *(unsigned int *)0xC94C6E8 = 0x0;
}

int FUN_0c0e1794(void)
{
    return FUN_0c0e35b6(0xC94C6F8, 0x4);
}

void FUN_0c0d9250(int a4)
{
    *(unsigned int *)0xC943DE4 = a4;
}

int FUN_0c0d98c0(void)
{
    return (*(int *)0xFFD8000C);
}

int FUN_0c0d98e0(int a4, int a5)
{
    return (a4 - a5);
}

int FUN_0c0d9a60(void)
{
    return kmUseAnotherModifier(0x1);
}

void FUN_0c0da320(int a4)
{
    *(unsigned int *)0xC20CDC0 = a4;
}

void FUN_0c0de000(float f4)
{
    *(float *)0xC990EA8 = f4;
}

void FUN_0c0def50(int a4)
{
    *(unsigned int *)0xC94C688 = a4;
}

void FUN_0c0e5790(int a4)
{
    *(unsigned int *)0xC20CF8C = a4;
}
