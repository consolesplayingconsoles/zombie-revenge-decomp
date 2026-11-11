/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06a1d8(int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0853d4(int, float);
int FUN_0c095f40(int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c09635c(int, int, float, float);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c4844(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e4226(int, int, int);
int _modls(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c096f50(int a4, int a5, int a6, int a7);
int FUN_0c06a448(int a4);
int FUN_0c0cb5b8(int a4, int a5, int a6, int a7);
int FUN_0c097c9c(int a4, int a5, int a6, int a7);
int FUN_0c066370(int a4, int a5, int a6, int a7);
int FUN_0c070c96(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
struct o100_float { char p[0x100]; float v; };
struct o140_float { char p[0x140]; float v; };
struct o144_float { char p[0x144]; float v; };
struct o148_float { char p[0x148]; float v; };
struct o180_int { char p[0x180]; int v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o30_short { char p[0x30]; short v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o32_short { char p[0x32]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oE8_float { char p[0xE8]; float v; };






int FUN_0c066370(int a4, int a5, int a6, int a7)
{
    int stk[61];
    register int t11;
    register int t12;
    register float u14;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register float u24;
    register int t32;
    register int t33;
    register float u39;
    register int t43;
    register int t61;
    register int t62;
    register int t63;
    register int t88;
    register int t90;
    register int t91;
    register int t92;
    register float u95;
    register float t116;
    register int t158;
    register int t16;
    register float u23;
    register int t53;
    register int t89;
    register float u93;
    register float u94;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0xE4 + a4));
    nlMultiMatrix((0xA4 + a4));
    FUN_0c0dcca0((a4 + 0x54));
    nlRotate((0xF4 + a4), ((int)(((((((struct o100_float *)(a4))->v)) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    FUN_0c0dcc80((a4 + 0x54));
    FUN_0c0db470((a4 + 0x54), (0xB4 + ((int)stk + 4)));
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)((a4 + 0x34));
        if ((int)t11 >= (int)t12) {
            break;
        }
        FUN_0c0db470((((t11 << 2) << 2) + (a4 + 0x60)), ((((t11 << 1) + t11) << 2) + (0x84 + ((int)stk + 4))));
        t11 = (t11 + 0x1);
    }
    (((struct o140_float *)(a4))->v) = 0.0f;
    u14 = (((struct o38_float *)(a4))->v);
    (((struct o144_float *)(a4))->v) = (-(u14 * 0.0199999996f));
    (((struct o148_float *)(a4))->v) = 0.0f;
    t15 = 0x148;
    t17 = t12;
    t18 = 0x0;
    t19 = a5;
    t20 = a6;
    t21 = a7;
    t22 = 0x0;
    u24 = (-(u14 * 0.0199999996f));
    for (;;) {
        if ((int)t18 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t20 = t18;
        t20 = (t20 << 2);
        t21 = t18;
        t19 = 0x14C;
        t20 = (t20 << 2);
        t20 = (t20 + (a4 + 0x60));
        t21 = (t21 << 1);
        t21 = (t21 + t18);
        t19 = (t19 + a4);
        t21 = (t21 << 2);
        t15 = 0x8;
        t19 = (t19 + t21);
        *(float *)((t19 + t15)) = 0.0f;
        t15 = 0x4;
        *(float *)((t19 + t15)) = 0.0f;
        t15 = 0xC;
        t21 = (t21 + (0x84 + ((int)stk + 4)));
        *(float *)((t19 + 0x0)) = 0.0f;
        u24 = (*(float *)((t20 + t15)));
        t15 = 0x4;
        u23 = (*(float *)((t21 + t15)));
        if (!(u23 > u24)) {
            t17 = t18;
            t16 = t18;
            t17 = (t17 << 1);
            t19 = t22;
            t17 = (t17 + t16);
            t16 = 0xC;
            t16 = (t16 + t20);
            t17 = (t17 << 2);
            t17 = (t17 + (0x84 + ((int)stk + 4)));
            t19 = (t19 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0x38) + t19) + 0x0)) = t18;
            u24 = (*(float *)((t16 + 0x0)));
            t16 = 0x4;
            t16 = (t16 + t17);
            u23 = (*(float *)((t16 + 0x0)));
            t19 = (t19 + (((int)stk + 4) + 0x28));
            u23 = (u23 - u24);
            t22 = (t22 + 0x1);
            *(float *)((t19 + 0x0)) = u23;
        }
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    if ((int)t22 > 0) {
        t32 = 0x0;
        for (;;) {
            t33 = *(int *)((((((int)stk + 4) + 0x38) + t32) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = ((0x14C + a4) + (((t33 << 1) + t33) << 2));
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x54) + (((t33 << 1) + t33) << 2));
            nlSubVector3op(((((int)stk + 4) + 0x54) + (((t33 << 1) + t33) << 2)), ((((t33 << 1) + t33) << 2) + (0x84 + ((int)stk + 4))), ((0x110 + a4) + (((t33 << 1) + t33) << 2)));
            u39 = (((((struct o38_float *)(a4))->v)) * 0.0199999996f);
            u39 = u39 + (*(float *)((((((int)stk + 4) + 0x28) + t32) + 0x0))) * ((-((((struct o4C_float *)(a4))->v))) + (-1.0f));
            (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v) = (u39 / (float)t22);
            (((struct o8_float *)((*(int *)(((int)stk + 4)))))->v) = ((-((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v))) / (float)t22);
            t43 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t43 + 0x1);
            t32 = (t32 + 0x4);
            if ((int)(t43 + 0x1) >= (int)t22) {
                break;
            }
        }
        t53 = (((t33 << 1) + t33) << 2);
    }
    FUN_0c0dce80((((int)stk + 4) + 0x48), (0x140 + a4), (1.0f / ((((struct o38_float *)(a4))->v))));
    t61 = (nlAddVector((0xE4 + a4), (((int)stk + 4) + 0x48)));
    t62 = t53;
    t63 = 0x0;
    for (;;) {
        if ((int)t63 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t62 = t63;
        *(unsigned int *)(((int)stk + 4)) = (((t63 << 2) << 2) + (a4 + 0x60));
        t62 = (t62 << 1);
        t62 = (t62 + t63);
        t62 = (t62 << 2);
        t62 = (t62 + (0x14C + a4));
        t61 = (nlSubVector3op((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))), (a4 + 0x54)));
        t61 = 0x38;
        t61 = (FUN_0c0dce80((((int)stk + 4) + 0x48), t62, (1.0f / (*(float *)((a4 + t61))))));
        t61 = (nlAddVector((0xE4 + a4), (((int)stk + 4) + 0x48)));
        t61 = (nlPushMatrix(0x0));
        t61 = (nlInvertMatrix(0x0));
        t61 = (FUN_0c0db4d0(t62, (((int)stk + 4) + 0x48)));
        t61 = (nlOuterProduct((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x1C)));
        t61 = (FUN_0c0dce80((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x1C), (1.0f / (*(float *)((((t63 << 2) + (a4 + 0x3C)) + 0x0))))));
        t61 = (nlAddVector((0xF4 + a4), (((int)stk + 4) + 0x48)));
        t61 = (nlPopMatrix(0x1));
        t63 = (t63 + 0x1);
    }
    (((struct o100_float *)(a4))->v) = (FUN_0c0dcea0((0xF4 + a4)));
    nlPopMatrix(0x1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0xE4 + a4));
    nlMultiMatrix((0xA4 + a4));
    FUN_0c0dcca0((a4 + 0x54));
    nlRotate((0xF4 + a4), ((int)(((((((struct o100_float *)(a4))->v)) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    FUN_0c0dcc80((a4 + 0x54));
    t88 = (nlGetMatrix((0xA4 + a4)));
    t90 = 0xC0DCE80;
    t91 = 0xC0DCD10;
    t92 = 0x0;
    u95 = 0.0f;
    for (;;) {
        if ((int)t92 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t90 = t92;
        t90 = (t90 << 1);
        t91 = t92;
        t90 = (t90 + t92);
        t91 = (t91 << 2);
        t90 = (t90 << 2);
        t91 = (t91 << 2);
        t88 = (FUN_0c0db470(((a4 + 0x60) + t91), ((0x110 + a4) + t90)));
        t89 = a4;
        t89 = (t89 + 0x60);
        t88 = 0xC;
        t89 = (t89 + t91);
        u94 = (*(float *)((t89 + t88)));
        t88 = 0x4;
        u93 = (*(float *)((((0x110 + a4) + t90) + t88)));
        u93 = (u93 - u94);
        t92 = (t92 + 0x1);
        if (u95 > u93) {
            t89 = 0x110;
            t88 = 0xC;
            u94 = (*(float *)((((a4 + 0x60) + t91) + t88)));
            t89 = (t89 + a4);
            t88 = 0x4;
            t89 = (t89 + t90);
            u95 = (*(float *)((t89 + t88)));
            u95 = (u95 - u94);
        }
    }
    if (0.0f > u95) {
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, (-u95), 0.0f);
        nlMultiMatrix((0xA4 + a4));
        nlGetMatrix((0xA4 + a4));
        (((struct oE8_float *)(a4))->v) = (((((struct oE8_float *)(a4))->v)) + u95);
    }
    FUN_0c0db470((a4 + 0x54), (0xB4 + ((int)stk + 4)));
    t116 = nlLength((0x104 + a4), (0xB4 + ((int)stk + 4)));
    if (0.00999999978f > t116) {
        if (1.00999999f > (*(float *)(((int)stk + 188)))) {
            if (((((struct o30_short *)(a4))->v)) == 0) {
                (((struct o180_uint *)(a4))->v) = 0x3C;
            }
            (((struct o30_ushort *)(a4))->v) = 0x1;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + a4)) = *(struct mv3 *)((0xB4 + ((int)stk + 4))); }
    if ((((((struct o180_int *)(a4))->v)) & 1) == 0) {
        nlMultiMatrixRevOrder(((*(int *)(((int)stk + 16))) + 0x2AC));
        FUN_0c0c465c(((((struct o32_short *)(a4))->v)));
    }
    nlPopMatrix(0x1);
    (((struct o180_uint *)(a4))->v) = (((((struct o180_int *)(a4))->v)) - 1);
    if ((int)((((struct o180_int *)(a4))->v)) > (int)0x3C) {
        (((struct o180_uint *)(a4))->v) = (((((struct o180_int *)(a4))->v)) - 1);
    }
    t158 = 0x180;
    if ((int)((((struct o180_int *)(a4))->v)) < 0) {
        t158 = (FUN_0c0e19f2());
    }
    return t158;
}

