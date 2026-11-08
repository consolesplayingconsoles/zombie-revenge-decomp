/* Straight-line functions with calls and guards (batch gen_zl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c9e1de0(int, int);
int FUN_0c9e1f3c(int, int, float, float, float, float, float, float, float);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_st_ext(float (*)[4]);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


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
int FUN_0c9e2048(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
float FUN_0c0ddef0(void);
int nlPushMatrix(int a4);
float nlMultiMatrixRevOrder(int a4);
int nlPopMatrix(int a4);
void nlQuickInvertMatrix(void);
int FUN_0c0db6b0(int a4);
int nlGetMatrix(int a4);
float nlMultiMatrixRevOrder8(int a4);
float nlRotateAX(int a4);
void FUN_0c0dcbb0(int a4);
void nlTransposeMatrix(void);
void nlLoadMatrix8(int a4);
float nlRotateXSC(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
float FUN_0c0dc860(float f4, float f5);
float nlRotateYSC(float f4, float f5);
float FUN_0c0dc920(float f4, float f5);
float FUN_0c0dc980(float f4, float f5);
float FUN_0c0dc9e0(float f4, float f5);
void nlUnitMatrix(void);
void FUN_0c0dc670(void);
void FUN_0c0db840(int a4);
void FUN_0c0dcc70(float f4, float f5, float f6);

int FUN_0c9e2048(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[4];
    int t15;
    float u18;
    int t48;
    int t49;
    int t91;
    float u94;
    int t129;
    int t159;
    int t160;
    float u34[16];
    float u36[16];
    float u37[16];
    float u143[16];
    float u144[16];

    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_10;
    register float w0_11;
    register float w0_12;
    register float w0_13;
    register float w0_14;
    register float w0_15;
    register float w0_16;
    register float w0_17;
    register float w0_18;
    register float w0_19;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    register float w0_9;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    v0_5 = a4;
    v0_0 = a5;
    v0_3 = a6;
    w0_0 = f4;
    w0_1 = f5;
    w0_12 = f6;
    w0_6 = f7;
    w0_8 = f8;
    w0_7 = f9;
    w0_3 = f10;
    w0_9 = f11;
    v0_0 = (((((v0_5 & 0x2A) + (v0_5 & 0x2A)) | ((unsigned int)(v0_5 & 0x2A) >> 2)) & 0x1C));
    switch ((((((v0_5 & 0x2A) + (v0_5 & 0x2A)) | ((unsigned int)(v0_5 & 0x2A) >> 2)) & 0x1C))) { case 0: goto L_C9E205A; case 4: goto L_C9E205E; case 8: goto L_C9E2062; case 12: goto L_C9E2066; case 16: goto L_C9E206A; case 20: goto L_C9E206E; case 24: goto L_C9E2072; case 28: goto L_C9E2076; }
    L_C9E2076:;
    L_C9E2338:;
    return v0_0;
    L_C9E2072:;
    v0_5 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_5;
    *(volatile float *)((v0_4 + 0x8));
    w0_7 = FUN_0c9e1de0(0x0, v0_7);
    _builtin_prefetch((void *)v0_0);
    v0_8 = *(short *)(((v0_6 - 48) + 0x0));
    v0_7 = *(short *)((((v0_6 - 48) + 0x2) + 0x0));
    w0_6 = *(float *)((v0_4 + 0x0));
    w0_8 = *(float *)((v0_1 + 0x0));
    w0_5 = (((struct o8_float *)(v0_1))->v);
    w0_11 = *(float *)(((v0_1 + 0x8) + 4));
    t15 = (*(int *)(((int)_builtin_get_gbr() + 28)));
    *(unsigned int *)(((v0_0 + 0x2C) + 0x0)) = v0_2;
    v0_4 = *(short *)(((((v0_6 - 48) + 0x2) + 0x16) + 0x0));
    v0_6 = *(short *)((((((v0_6 - 48) + 0x2) + 0x16) + 0x2) + 0x0));
    u18 = ((*(float *)&t15) - (1.0f / w0_9));
    R1008 = v0_5;
    v0_4 = (v0_4);
    v0_0 = ((v0_0 + 0x2C));
    v0_5 = (v0_6);
    w0_14 = ((((*(float *)&t15) - (1.0f / w0_9)) / (f11 - (1.0f / w0_9))));
    w0_3 = ((1.0f / w0_9));
    w0_13 = (((float)v0_8 * w0_5));
    w0_10 = (((float)v0_7 * w0_5));
    w0_15 = (w0_11);
    w0_5 = (w0_5);
    w0_11 = (w0_8);
    w0_12 = ((w0_6 * f11));
    w0_6 = ((f7 * f11));
    w0_8 = (w0_7);
    w0_7 = ((f9 * (1.0f / w0_9)));
    FPUL_ = ((*(int *)&u18));
    L_C9E22B0:;
    _builtin_st_ext((float (*)[4])u34);
    u34[0] = w0_15;
    u34[1] = w0_5;
    _builtin_ld_ext((float (*)[4])u34);
    _builtin_st_ext((float (*)[4])u36);
    w0_9 = w0_4;
    w0_9 = w0_9 + w0_14 * ((w0_6 - w0_7));
    w0_9 = (w0_12 - ((w0_8 * w0_3)));
    w0_6 = (w0_6 - w0_7);
    w0_6 = w0_6 + w0_14 * w0_9;
    w0_6 = u36[4];
    w0_6 = w0_6 + w0_14 * ((w0_10 - w0_1));
    _builtin_st_ext((float (*)[4])u37);
    u37[0] = u36[8];
    u37[1] = u36[9];
    u37[6] = (w0_8 * w0_3);
    u37[7] = w0_7;
    u37[12] = w0_0;
    u37[13] = w0_1;
    _builtin_ld_ext((float (*)[4])u37);
    w0_9 = (w0_10 - w0_1);
    w0_9 = w0_9 + w0_14 * ((w0_13 - w0_0));
    t48 = FPUL_;
    t49 = v0_2;
    *(float *)(((v0_0 + 0x8) + 0x0)) = u36[5];
    *(float *)((((v0_0 + 0x8) + 0x0) + 4)) = w0_6;
    *(float *)((((v0_0 + 0x8) - 0x8) + 0x0)) = w0_1;
    *(float *)(((((v0_0 + 0x8) - 0x8) + 0x0) + 4)) = w0_0;
    *(unsigned int *)(((((v0_0 + 0x8) - 0x8) - 0x4) + 0x0)) = v0_2;
    *(float *)((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) + 0x0)) = u36[9];
    *(float *)(((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) + 0x0) + 4)) = u36[8];
    *(float *)(((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) + 0x0)) = w0_7;
    *(float *)((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) + 0x0) + 4)) = (w0_8 * w0_3);
    w0_6 = (w0_8 * w0_3);
    *(unsigned int *)((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x0)) = (((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8);
    _builtin_prefetch((void *)((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4));
    v0_7 = R1008;
    v0_6 = *(int *)(((int)_builtin_get_gbr() + 96));
    w0_9 = (((w0_2 * (1.0f / w0_4))) - w0_7);
    w0_2 = w0_7;
    w0_2 = w0_2 + (((*(float *)&t48) / ((1.0f / w0_4) - w0_3))) * w0_9;
    *(unsigned int *)(((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x10)) = v0_7;
    w0_7 = (((w0_11 * (1.0f / w0_4))) - w0_6);
    w0_6 = (w0_8 * w0_3);
    w0_6 = w0_6 + (((*(float *)&t48) / ((1.0f / w0_4) - w0_3))) * w0_7;
    *(unsigned int *)(((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x0)) = v0_2;
    w0_7 = ((((float)v0_5 * w0_5)) - w0_1);
    w0_1 = w0_1;
    w0_1 = w0_1 + (((*(float *)&t48) / ((1.0f / w0_4) - w0_3))) * w0_7;
    *(unsigned int *)(((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0xC)) = v0_6;
    w0_5 = ((((float)v0_4 * w0_5)) - w0_0);
    w0_0 = w0_0;
    w0_0 = w0_0 + (((*(float *)&t48) / ((1.0f / w0_4) - w0_3))) * w0_5;
    *(float *)((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) + 0x0)) = u36[5];
    *(float *)(((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) + 0x0) + 4)) = u36[4];
    *(float *)((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) + 0xFFFFFFFC)) = w0_1;
    *(float *)(((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) + 0xFFFFFFFC) + 4)) = w0_0;
    *(float *)(((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) - 12) + 0x0)) = u36[9];
    *(float *)((((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) - 12) + 0x0) + 4)) = u36[8];
    *(float *)((((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) - 12) - 0x8) + 0x0)) = (w0_2 * (*(float *)&t49));
    *(float *)(((((((((((((v0_0 + 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x8) - 12) - 0x8) + 0x0) + 4)) = (w0_6 * (*(float *)&t49));
    *(volatile float *)((v0_1 + 0x0));
    *(volatile float *)((v0_3 + 0x0));
    return 0xFFFFFFFC;
    L_C9E206E:;
    v0_5 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_5;
    *(volatile float *)((v0_1 + 0x8));
    w0_8 = FUN_0c9e1de0(0x0, v0_4);
    _builtin_prefetch((void *)v0_0);
    v0_4 = *(short *)(((v0_6 - 24) + 0x0));
    v0_7 = *(short *)((((v0_6 - 24) + 0x2) + 0x0));
    w0_10 = *(float *)((v0_1 + 0x0));
    w0_11 = *(float *)((v0_3 + 0x0));
    R1008 = v0_5;
    v0_4 = (v0_4);
    v0_5 = (v0_7);
    v0_3 = (v0_3);
    w0_3 = ((1.0f / w0_5));
    w0_11 = (w0_11);
    w0_12 = (w0_10);
    w0_8 = (w0_8);
    L_C9E2226:;
    w0_5 = (((struct o8_float *)(v0_3))->v);
    w0_15 = *(float *)(((v0_3 + 0x8) + 4));
    v0_7 = *(int *)(((int)_builtin_get_gbr() + 28));
    *(unsigned int *)(((v0_0 + 0x2C) + 0x0)) = v0_2;
    t91 = v0_7;
    v0_7 = *(short *)((v0_6 + 0x0));
    v0_6 = *(short *)(((v0_6 + 0x2) + 0x0));
    u94 = ((*(float *)&t91) - w0_3);
    R1008 = R1008;
    w0_13 = ((float)v0_4 * w0_5);
    w0_10 = ((float)v0_5 * w0_5);
    v0_4 = (v0_7);
    v0_0 = ((v0_0 + 0x2C));
    v0_5 = (v0_6);
    w0_14 = ((((*(float *)&t91) - w0_3) / (w0_9 - w0_3)));
    w0_13 = w0_13;
    w0_10 = w0_10;
    w0_15 = (w0_15);
    w0_5 = (w0_5);
    w0_12 = ((w0_12 * w0_9));
    w0_6 = ((w0_6 * w0_9));
    w0_7 = ((w0_7 * w0_3));
    FPUL_ = ((*(int *)&u94));
    goto L_C9E22B0;
    L_C9E206A:;
    v0_5 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_5;
    *(volatile float *)((v0_1 + 0x8));
    FUN_0c9e1de0(0x0, v0_4);
    _builtin_prefetch((void *)v0_0);
    w0_6 = FUN_0c9e1de0(0x0, v0_7);
    _builtin_prefetch((void *)(v0_0 + 0x20));
    w0_11 = *(float *)((v0_1 + 0x0));
    v0_4 = *(short *)(((v0_6 - 24) + 0x0));
    v0_6 = *(short *)((((v0_6 - 24) + 0x2) + 0x0));
    R1008 = v0_5;
    v0_4 = (v0_4);
    v0_0 = ((v0_0 + 0x20));
    v0_5 = (v0_6);
    w0_4 = (w0_14);
    w0_9 = ((1.0f / w0_9));
    w0_13 = (f4);
    w0_11 = (w0_11);
    w0_12 = (w0_6);
    w0_6 = (w0_14);
    L_C9E2132:;
    t129 = (*(int *)(((int)_builtin_get_gbr() + 28)));
    *(float *)(((int)stk + 4)) = ((*(float *)&t129) - w0_6);
    w0_17 = (w0_11 * w0_6);
    w0_18 = (w0_7 * w0_3);
    w0_19 = (w0_2 * w0_6);
    w0_14 = (w0_11 * w0_6);
    *(float *)(((int)stk + 4)) = ((*(float *)&t129) - w0_6);
    w0_15 = (w0_2 * w0_6);
    v0_6 = R1008;
    w0_16 = ((float)v0_5 * w0_5);
    _builtin_st_ext((float (*)[4])u143);
    w0_7 = w0_5;
    w0_7 = w0_7 + ((((*(float *)&t129) - w0_6) / (w0_3 - w0_6))) * ((w0_18 - w0_19));
    w0_8 = (((w0_8 * w0_3)) - w0_17);
    w0_17 = (w0_18 - w0_19);
    w0_17 = w0_17 + ((((*(float *)&t129) - w0_6) / (w0_3 - w0_6))) * w0_8;
    w0_8 = ((float)v0_5 * w0_5);
    w0_8 = w0_8 + ((((*(float *)&t129) - w0_6) / (w0_3 - w0_6))) * ((w0_10 - w0_16));
    _builtin_st_ext((float (*)[4])u144);
    u144[14] = u143[2];
    u144[15] = u143[3];
    u144[8] = (w0_11 * w0_6);
    u144[9] = (w0_2 * w0_6);
    u144[12] = ((float)v0_4 * w0_5);
    u144[13] = (w0_9 - w0_6);
    _builtin_ld_ext((float (*)[4])u144);
    w0_13 = (w0_13 - (((float)v0_4 * w0_5)));
    w0_10 = (w0_10 - w0_16);
    w0_10 = w0_10 + ((((*(float *)&t129) - w0_6) / (w0_3 - w0_6))) * w0_13;
    t159 = *(int *)((int)stk + 4);
    t160 = v0_2;
    v0_7 = *(int *)(((int)_builtin_get_gbr() + 96));
    *(unsigned int *)(((v0_0 + 0x3C) + 0x0)) = v0_6;
    *(unsigned int *)((((v0_0 + 0x3C) - 0x4) + 0x0)) = v0_7;
    *(float *)(((((v0_0 + 0x3C) - 0x4) - 0x8) + 0x0)) = (w0_7 * (*(float *)&t160));
    *(float *)((((((v0_0 + 0x3C) - 0x4) - 0x8) + 0x0) + 4)) = w0_8;
    *(float *)((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) + 0x0)) = (w0_9 - w0_6);
    *(float *)(((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) + 0x0) + 4)) = ((float)v0_4 * w0_5);
    *(unsigned int *)(((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) + 0x0)) = v0_2;
    *(float *)((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) + 0x0)) = u143[3];
    *(float *)(((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) + 0x0) + 4)) = u143[2];
    *(float *)(((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) + 0x0)) = (w0_2 * w0_6);
    *(float *)((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) + 0x0) + 4)) = (w0_11 * w0_6);
    *(unsigned int *)((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x0)) = (((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8);
    _builtin_prefetch((void *)((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4));
    w0_3 = (((w0_4 * w0_9)) - w0_15);
    w0_2 = (w0_2 * w0_6);
    w0_2 = w0_2 + (((*(float *)&t159) / (w0_9 - w0_6))) * w0_3;
    *(unsigned int *)(((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x0)) = v0_2;
    w0_4 = (((w0_12 * w0_9)) - w0_14);
    w0_3 = (w0_11 * w0_6);
    w0_3 = w0_3 + (((*(float *)&t159) / (w0_9 - w0_6))) * w0_4;
    w0_4 = (w0_1 - (((float)v0_5 * w0_5)));
    w0_1 = ((float)v0_5 * w0_5);
    w0_1 = w0_1 + (((*(float *)&t159) / (w0_9 - w0_6))) * w0_4;
    *(unsigned int *)((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) + 0x8)) = v0_7;
    w0_0 = (w0_0 - (((float)v0_4 * w0_5)));
    w0_4 = ((float)v0_4 * w0_5);
    w0_4 = w0_4 + (((*(float *)&t159) / (w0_9 - w0_6))) * w0_0;
    *(unsigned int *)((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) + 0xC)) = v0_6;
    (((struct o4_float *)(((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4)))->v) = (w0_7 * (*(float *)&t160));
    *(float *)(((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) + 0x4) + 4)) = w0_1;
    *(float *)((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) + 0x0)) = (w0_9 - w0_6);
    *(float *)(((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) + 0x0) + 4)) = w0_4;
    *(float *)(((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) - 8) + 0x0)) = u143[3];
    *(float *)((((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) - 8) + 0x0) + 4)) = u143[2];
    *(float *)((((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) - 8) - 0x8) + 0x0)) = (w0_2 * (*(float *)&t160));
    *(float *)(((((((((((((((v0_0 + 0x3C) - 0x4) - 0x8) - 0x8) - 0x4) - 0x8) - 0x8) - 0x4) + 0x2C) + 0x4) - 8) - 0x8) + 0x0) + 4)) = (w0_3 * (*(float *)&t160));
    *(volatile float *)((v0_1 + 0x0));
    *(volatile float *)((v0_3 + 0x0));
    return 0x4;
    L_C9E2066:;
    v0_7 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_7;
    *(volatile float *)((v0_4 + 0x8));
    w0_8 = FUN_0c9e1de0(0x0, v0_1);
    _builtin_prefetch((void *)v0_0);
    v0_8 = *(short *)(((v0_6 - 48) + 0x0));
    v0_5 = *(short *)((((v0_6 - 48) + 0x2) + 0x0));
    w0_10 = *(float *)((v0_4 + 0x0));
    w0_11 = *(float *)((v0_3 + 0x0));
    R1008 = v0_7;
    v0_4 = (v0_8);
    v0_5 = (v0_5);
    v0_3 = (v0_3);
    w0_3 = ((1.0f / w0_5));
    w0_11 = (w0_11);
    w0_12 = (w0_10);
    w0_8 = (w0_8);
    goto L_C9E2226;
    L_C9E2062:;
    v0_5 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_5;
    *(volatile float *)((v0_4 + 0x8));
    FUN_0c9e1de0(0x0, v0_1);
    _builtin_prefetch((void *)v0_0);
    w0_6 = FUN_0c9e1de0(0x0, v0_7);
    _builtin_prefetch((void *)(v0_0 + 0x20));
    w0_11 = *(float *)((v0_4 + 0x0));
    v0_4 = *(short *)(((v0_6 - 48) + 0x0));
    v0_6 = *(short *)((((v0_6 - 48) + 0x2) + 0x0));
    R1008 = v0_5;
    v0_4 = (v0_4);
    v0_0 = ((v0_0 + 0x20));
    v0_5 = (v0_6);
    w0_4 = (w0_14);
    w0_9 = ((1.0f / w0_9));
    w0_13 = (f4);
    w0_11 = (w0_11);
    w0_12 = (w0_6);
    w0_6 = (w0_14);
    goto L_C9E2132;
    L_C9E205E:;
    v0_5 = (FUN_0c9e1f3c(v0_5, v0_6, w0_0, w0_1, w0_12, w0_6, w0_8, w0_7, w0_3));
    R1008 = v0_5;
    *(volatile float *)((v0_7 + 0x8));
    FUN_0c9e1de0(0x0, v0_4);
    _builtin_prefetch((void *)v0_0);
    w0_6 = FUN_0c9e1de0(0x0, v0_1);
    _builtin_prefetch((void *)(v0_0 + 0x20));
    w0_11 = *(float *)((v0_3 + 0x0));
    v0_4 = *(short *)((v0_6 + 0x0));
    v0_6 = *(short *)(((v0_6 + 0x2) + 0x0));
    R1008 = v0_5;
    v0_4 = (v0_4);
    v0_0 = ((v0_0 + 0x20));
    v0_5 = (v0_6);
    v0_3 = (v0_3);
    w0_4 = (w0_14);
    w0_9 = ((1.0f / w0_9));
    w0_13 = (f4);
    w0_11 = (w0_11);
    w0_12 = (w0_6);
    w0_6 = (w0_14);
    goto L_C9E2132;
    L_C9E205A:;
    goto L_C9E2338;
}

float FUN_0c0ddef0(void)
{
    float m[16];
    float x[16];
    float *a;
    int i;

    a = *(float **)0xC9482E0;
    for (i = 0; i < 16; i++) {
        m[i] = a[i ^ 1];
    }
    _builtin_st_ext((float (*)[4])x);
    _builtin_ld_ext((float (*)[4])m);
    _builtin_prefetch((void *)0xC9484E8);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(x + i, x + i);
    }
    _builtin_prefetch((void *)0xC948508);
    for (i = 0; i < 16; i++) {
        m[i] = ((float *)0xC9484E8)[i];
    }
    _builtin_ld_ext((float (*)[4])m);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(x + i, x + i);
    }
    _builtin_ld_ext((float (*)[4])x);
    return m[0];
}

int nlPushMatrix(int a4)
{
    float x[16];
    float *d;
    int t1;
    int i;
    int sw;

    d = *(float **)0xC9482BC;
    t1 = *(int *)0xC9482B4;
    _builtin_st_ext((float (*)[4])x);
    for (i = 0; i < 16; i += 2) {
        d[i] = x[i + 1];
        d[i + 1] = x[i];
    }
    *(float **)0xC9482BC = d + 16;
    *(unsigned short *)0xC9482B4 = ((short)t1 + 0x1);
    if (a4 != 0) {
        _builtin_prefetch((void *)a4);
        sw = (a4 & 0x4) ? 0 : 1;
        for (i = 0; i < 16; i++) {
            x[i] = ((float *)a4)[i ^ sw];
        }
        _builtin_ld_ext((float (*)[4])x);
    }
    return ((short)(t1 >> 16) > (short)t1) ? 1 : 0;
}

float nlMultiMatrixRevOrder(int a4)
{
    float m[16];
    float x[16];
    int i;

    for (i = 0; i < 16; i++) {
        m[i] = ((float *)a4)[i];
    }
    _builtin_st_ext((float (*)[4])x);
    _builtin_ld_ext((float (*)[4])m);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(x + i, x + i);
    }
    _builtin_ld_ext((float (*)[4])x);
    return m[0];
}

int nlPopMatrix(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    float u10[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = (((struct o0_short *)0xC9482B4)->v);
    t3 = (((struct o2_short *)0xC9482B4)->v);
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC9482B4)->v);
    (((struct o0_ushort *)0xC9482B4)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC9482B4)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u10[0] = (*(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4)));
    u10[1] = (*(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0)));
    u10[2] = (*(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4)));
    u10[3] = (*(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0)));
    u10[4] = (*(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4)));
    u10[5] = (*(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0)));
    u10[6] = (*(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[7] = (*(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0)));
    u10[8] = (*(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[9] = (*(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u10[10] = (*(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[11] = (*(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u10[12] = (*(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[13] = (*(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u10[14] = (*(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[15] = (*(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    _builtin_ld_ext((float (*)[4])u10);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

void nlQuickInvertMatrix(void)
{
    float x[16];
    float a;
    float b;
    float c;
    float t;

    _builtin_st_ext((float (*)[4])x);
    x[3] = 0.0f;
    x[7] = 0.0f;
    x[11] = x[11] - x[11];
    x[15] = 1.0f;
    a = _builtin_fipr(x + 12, x);
    b = _builtin_fipr(x + 12, x + 4);
    c = _builtin_fipr(x + 12, x + 8);
    t = x[1];
    x[1] = x[4];
    x[4] = t;
    t = x[2];
    x[2] = x[8];
    x[8] = t;
    t = x[6];
    x[6] = x[9];
    x[9] = t;
    x[3] = a - a;
    x[7] = b - b;
    x[11] = c - c;
    x[12] = 0.0f - a;
    x[13] = 0.0f - b;
    x[14] = (x[14] - x[14]) - c;
    _builtin_ld_ext((float (*)[4])x);
}

int FUN_0c0db6b0(int a4)
{
    float m[16];
    int i;

    if (a4 == 0) {
        return 0x0;
    }
    _builtin_st_ext((float (*)[4])m);
    for (i = 10; i >= 0; i--) {
        if ((i & 3) != 3) {
            ((float *)a4)[i] = m[i];
        }
    }
    return a4;
}

int nlGetMatrix(int a4)
{
    float x[16];
    int i;

    if (a4 == 0) {
        a4 = *(int *)0xC9482BC;
    }
    _builtin_st_ext((float (*)[4])x);
    for (i = 0; i < 16; i++) {
        ((float *)a4)[i] = x[i];
    }
    return a4;
}

float nlMultiMatrixRevOrder8(int a4)
{
    float m[16];
    float x[16];
    int i;

    for (i = 0; i < 16; i++) {
        m[i] = ((float *)a4)[i ^ 1];
    }
    _builtin_st_ext((float (*)[4])x);
    _builtin_ld_ext((float (*)[4])m);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(x + i, x + i);
    }
    _builtin_ld_ext((float (*)[4])x);
    return m[0];
}

float nlRotateAX(int a4)
{
    register float s;
    register float c;
    float m[16];

    s = iaFscaS(a4);
    c = iaFscaC(a4);
    _builtin_st_ext((float (*)[4])m);
    m[4] = 0.0f;
    m[5] = c;
    m[6] = s;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    m[8] = 0.0f;
    m[9] = (-s);
    m[10] = c;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[4];
}

void FUN_0c0dcbb0(int a4)
{
    float m[16];
    int i;

    _builtin_st_ext((float (*)[4])m);
    for (i = 0; i < 12; i++) {
        m[i] = m[i] * ((float *)a4)[i >> 2];
    }
    _builtin_ld_ext((float (*)[4])m);
}

void nlTransposeMatrix(void)
{
    float m[16];
    float t;
    int i;
    int j;

    _builtin_st_ext((float (*)[4])m);
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            t = m[i * 4 + j];
            m[i * 4 + j] = m[j * 4 + i];
            m[j * 4 + i] = t;
        }
    }
    _builtin_ld_ext((float (*)[4])m);
}

void nlLoadMatrix8(int a4)
{
    register int t1;
    float u5[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC9482BC);
    }
    u5[0] = (*(float *)(((t1 + 0x0) + 4)));
    u5[1] = (*(float *)((t1 + 0x0)));
    u5[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u5[3] = (*(float *)(((t1 + 0x8) + 0x0)));
    u5[4] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4)));
    u5[5] = (*(float *)((((t1 + 0x8) + 0x8) + 0x0)));
    u5[6] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[7] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x0)));
    u5[8] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[9] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u5[10] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[11] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u5[12] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[13] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    u5[14] = (*(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[15] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0)));
    _builtin_ld_ext((float (*)[4])u5);
}

float nlRotateXSC(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[4] = 0.0f;
    m[5] = f5;
    m[6] = f4;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    m[8] = 0.0f;
    m[9] = (-f4);
    m[10] = f5;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[4];
}

float nlRotateAY(int a4)
{
    register float s;
    register float c;
    float m[16];

    s = iaFscaS(a4);
    c = iaFscaC(a4);
    _builtin_st_ext((float (*)[4])m);
    m[0] = c;
    m[1] = 0.0f;
    m[2] = (-s);
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[8] = s;
    m[9] = 0.0f;
    m[10] = c;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

float nlRotateAZ(int a4)
{
    register float s;
    register float c;
    float m[16];

    s = iaFscaS(a4);
    c = iaFscaC(a4);
    _builtin_st_ext((float (*)[4])m);
    m[0] = c;
    m[1] = s;
    m[2] = 0.0f;
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[4] = (-s);
    m[5] = c;
    m[6] = 0.0f;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

float FUN_0c0dc860(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[4] = 0.0f;
    m[5] = f5;
    m[6] = f4;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    m[8] = 0.0f;
    m[9] = f4;
    m[10] = f5;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[4];
}

float nlRotateYSC(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[0] = f5;
    m[1] = 0.0f;
    m[2] = (-f4);
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[8] = f4;
    m[9] = 0.0f;
    m[10] = f5;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

float FUN_0c0dc920(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[0] = f5;
    m[1] = 0.0f;
    m[2] = f4;
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[8] = (-f4);
    m[9] = 0.0f;
    m[10] = f5;
    m[11] = 0.0f;
    _builtin_ftrv(m + 8, m + 8);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

float FUN_0c0dc980(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[0] = f5;
    m[1] = f4;
    m[2] = 0.0f;
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[4] = (-f4);
    m[5] = f5;
    m[6] = 0.0f;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

float FUN_0c0dc9e0(float f4, float f5)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[0] = f5;
    m[1] = (-f4);
    m[2] = 0.0f;
    m[3] = 0.0f;
    _builtin_ftrv(m, m);
    m[4] = f4;
    m[5] = f5;
    m[6] = 0.0f;
    m[7] = 0.0f;
    _builtin_ftrv(m + 4, m + 4);
    _builtin_ld_ext((float (*)[4])m);
    return m[0];
}

void nlUnitMatrix(void)
{
    float u0[16];

    u0[2] = 0.0f;
    u0[3] = 0.0f;
    u0[6] = 0.0f;
    u0[7] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[12] = 0.0f;
    u0[13] = 0.0f;
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[10] = 1.0f;
    u0[11] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[14] = 0.0f;
    u0[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

void FUN_0c0dc670(void)
{
    float m[16];
    int i;

    _builtin_st_ext((float (*)[4])m);
    for (i = 0; i < 8; i++) {
        m[i] = (-m[i]);
    }
    _builtin_ld_ext((float (*)[4])m);
}

void FUN_0c0db840(int a4)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    ((float *)a4)[2] = m[14];
    ((float *)a4)[1] = m[13];
    ((float *)a4)[0] = m[12];
}

void FUN_0c0dcc70(float f4, float f5, float f6)
{
    float m[16];

    _builtin_st_ext((float (*)[4])m);
    m[12] = f4;
    m[13] = f5;
    m[14] = f6;
    m[15] = 1.0f;
    _builtin_ftrv(m + 12, m + 12);
    _builtin_ld_ext((float (*)[4])m);
}
