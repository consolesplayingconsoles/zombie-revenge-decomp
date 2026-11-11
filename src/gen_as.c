/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce8a(int, float);
int FUN_0c01d2c2(int, int);
int FUN_0c01f6fc(int, int, float, float, float);
int FUN_0c02f0e4(int, int);
int FUN_0c040266(int);
int FUN_0c041f2a(int);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int nlInvertMatrix(int);
int FUN_0c0dbda0(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e07b4(int, float, float, float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e2d6c(int, float, float, float, float);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int FUN_0c0414a6(int a4, int a5, int a6);
int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c08b8e0(int a4, int a5);
int FUN_0c0bb980(int a4);
int FUN_0c0745a0(void);
int FUN_0c067964(int a4, int a5, int a6, int a7);
int FUN_0c01cb94(int a4, int a5);
int FUN_0c02f174(int a4);
int FUN_0c0376f4(int a4);
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o388_int { char p[0x388]; int v; };
struct o390_float { char p[0x390]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC_float { char p[0xC]; float v; };






int FUN_0c0bb980(int a4)
{
    int t0;
    int t79;
    float u2;
    float u5;
    float u6;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u16;
    float u40;
    float u45;
    int t56;
    float u65;
    int stk[45];
    float s1;

    t0 = (((struct o388_int *)(a4))->v);
    t79 = t0;
    if ((t0 & 2) == 0) {
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x5C);
        u2 = (((struct o18_float *)0xC260844)->v);
        (((struct o5C_float *)(((int)stk + 4)))->v) = (((((((struct oC_float *)0xC260844)->v)) - u2) / (1.0f + 1.0f)) + u2);
        u5 = (((struct o1C_float *)0xC260844)->v);
        (((struct o4_float *)((((int)stk + 4) + 0x5C)))->v) = (((((((struct o10_float *)0xC260844)->v)) - u5) / (1.0f + 1.0f)) + u5);
        u6 = (((struct o20_float *)0xC260844)->v);
        (((struct o8_float *)((((int)stk + 4) + 0x5C)))->v) = (((((((struct o14_float *)0xC260844)->v)) - u6) / (1.0f + 1.0f)) + u6);
        u9 = *(float *)(((*(int *)(((int)stk + 16))) + 0x0));
        u10 = (((struct o0_float *)0xC260844)->v);
        *(float *)(((int)stk + 4)) = (u9 - u10);
        u11 = (((struct o8_float *)((((int)stk + 4) + 0x5C)))->v);
        u12 = (((struct o8_float *)0xC260844)->v);
        u13 = ((u11 - u12) * (u11 - u12));
        u13 = u13 + (u9 - u10) * (u9 - u10);
        s1 = _builtin_sqrtf(u13);
        u14 = (s1 * 0.0799999982f);
        if (0.5f > (s1 * 0.0799999982f)) {
            u14 = 0.5f;
        }
        u16 = u14;
        if (u14 > 4.0f) {
            u16 = 4.0f;
        }
        FUN_0c0db840((0x80 + ((int)stk + 4)));
        FUN_0c0a7c66((((int)stk + 4) + 0x50), ((((int)stk + 4) + 0x50) + 0x4), ((((int)stk + 4) + 0x50) + 0x8));
        FUN_0c01f6fc((((int)stk + 4) + 0x74), (((int)stk + 4) + 0x68), (*(float *)(((int)stk + 132))), (*(float *)(((int)stk + 136))), (*(float *)(((int)stk + 140))));
        if ((*(short *)((((((*(int *)0xC23ED50) << 2) << 2) << 1) + 0xC207A8C))) == 0) {
            (((struct o68_float *)(((int)stk + 4)))->v) = 0.0f;
            (((struct o4_float *)((((int)stk + 4) + 0x68)))->v) = 1.0f;
            (((struct o8_float *)((((int)stk + 4) + 0x68)))->v) = 0.0f;
        }
        if (!(((((struct o4_float *)((((int)stk + 4) + 0x68)))->v)) > 0.449999988f)) {
        } else {
            *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x74) + 0x4);
            (((struct o4_float *)((((int)stk + 4) + 0x74)))->v) = ((((struct o390_float *)(a4))->v));
            (((struct o74_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 132)));
            (((struct o8_float *)((((int)stk + 4) + 0x74)))->v) = (*(float *)(((int)stk + 140)));
            FUN_0c0a78fc((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), ((((struct o68_float *)(((int)stk + 4)))->v)), ((((struct o4_float *)((((int)stk + 4) + 0x68)))->v)), ((((struct o8_float *)((((int)stk + 4) + 0x68)))->v)));
            nlUnitMatrix();
            u40 = ((((struct o8_float *)0xC260844)->v));
            u40 = u40 + 0.5f * (u11 - u12);
            u45 = ((((struct o0_float *)0xC260844)->v));
            u45 = u45 + 0.5f * (*(float *)(((int)stk + 4)));
            FUN_0c0dcc70(u45, ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0.299999982f), u40);
            nlMultiMatrixRevOrder(((*(int *)0xC247CAC) + 0x2AC));
            FUN_0c0de000(((((struct o280_float *)(a4))->v)));
            nlRotateAX((*(int *)(((int)stk + 8))));
            nlRotateAZ((*(int *)(((int)stk + 12))));
            t56 = FUN_0c0d9dc0((*(float *)(((int)stk + 4))), (u11 - u12));
            nlRotateAY((0x4000 + (short)t56));
            nlScale((((((((struct o274_float *)(a4))->v)) * u16)) * 1.0f), (((((((struct o278_float *)(a4))->v)) * 1.0f)) * 0.5f), (((((((struct o27C_float *)(a4))->v)) * 1.0f)) * 0.5f));
            u65 = u16;
            if (0.5f > u16) {
                u65 = 0.5f;
            }
            FUN_0c0de000((((((struct o280_float *)(a4))->v)) * u65));
            FUN_0c0c465c(0x270);
        }
        t79 = (nlPopMatrix(0x1));
    }
    return t79;
}





int FUN_0c0376f4(int a4)
{
    if ((*(int *)((a4 + 0x400))) != 9) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)(((0x268 + a4) + 0x0))), (*(float *)(((0x268 + a4) + 0x4))), (*(float *)(((0x268 + a4) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x294))));
        nlRotateAY((*(int *)((a4 + 0x290))));
        nlRotateAX((*(int *)((a4 + 0x28C))));
        nlGetMatrix((0x2B0 + a4));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0xC) + 0x0))), (*(float *)((((0x268 + a4) + 0xC) + 0x4))), (*(float *)((((0x268 + a4) + 0xC) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2A0))));
        nlRotateAY((*(int *)((a4 + 0x29C))));
        nlRotateAX((*(int *)((a4 + 0x298))));
        nlGetMatrix(((0x2B0 + a4) + 0x40));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0x18) + 0x0))), (*(float *)((((0x268 + a4) + 0x18) + 0x4))), (*(float *)((((0x268 + a4) + 0x18) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2AC))));
        nlRotateAY((*(int *)((a4 + 0x2A8))));
        nlRotateAX((*(int *)((a4 + 0x2A4))));
        nlGetMatrix(((0x2B0 + a4) + 0x80));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)(((0x268 + a4) + 0x0))), (*(float *)(((0x268 + a4) + 0x4))), (*(float *)(((0x268 + a4) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x294))));
        nlRotateAY((*(int *)((a4 + 0x290))));
        nlRotateAX((*(int *)((a4 + 0x28C))));
        nlGetMatrix((0x2B0 + a4));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0xC) + 0x0))), (*(float *)((((0x268 + a4) + 0xC) + 0x4))), (*(float *)((((0x268 + a4) + 0xC) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2A0))));
        nlRotateAY((*(int *)((a4 + 0x29C))));
        nlRotateAX((*(int *)((a4 + 0x298))));
        nlGetMatrix(((0x2B0 + a4) + 0x40));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0x18) + 0x0))), (*(float *)((((0x268 + a4) + 0x18) + 0x4))), (*(float *)((((0x268 + a4) + 0x18) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2AC))));
        nlRotateAY((*(int *)((a4 + 0x2A8))));
        nlRotateAX((*(int *)((a4 + 0x2A4))));
        nlGetMatrix(((0x2B0 + a4) + 0x80));
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x244)) = (*(float *)((a4 + 0x2E0)));
    *(float *)((a4 + 0x248)) = (*(float *)((a4 + 0x2E4)));
    *(float *)((a4 + 0x24C)) = (*(float *)((a4 + 0x2E8)));
    *(float *)((a4 + 0x250)) = (*(float *)((a4 + 0x320)));
    *(float *)((a4 + 0x254)) = (*(float *)((a4 + 0x324)));
    *(float *)((a4 + 0x258)) = (*(float *)((a4 + 0x328)));
    *(float *)((a4 + 0x25C)) = (*(float *)((a4 + 0x360)));
    *(float *)((a4 + 0x260)) = (*(float *)((a4 + 0x364)));
    *(float *)((a4 + 0x264)) = (*(float *)((a4 + 0x368)));
    return 0x264;
}


