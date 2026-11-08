/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c040266(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c058e7c(int, int);
int FUN_0c069e28(void);
int FUN_0c069fba(void);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c096d6c(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bb0f4(int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0c932c(int, int, int, int, int, int, float, float, float, float);
int FUN_0c0ca862(int);
int FUN_0c0cf392(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9ca0(float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e57d0(int, float, float, float);
int _quick_odd_mvn(int);
int FUN_0c9de360(void);
extern float _builtin_sqrtf(float);
int FUN_0c06a1d8(int a4, int a5, float f4);
int FUN_0c04045c(int a4);
int FUN_0c0598e4(int a4);
int FUN_0c0c6ef4(int a4, int a5, int a6, int a7);
int FUN_0c0553b6(int a4, int a5, int a6);
int FUN_0c029646(int a4, int a5, int a6);
int FUN_0c0b5030(int a4, float f4);
int FUN_0c0278d0(int a4, int a5);
int FUN_0c08bb20(int a4, int a5, int a6, int a7);
int FUN_0c0a1c76(int a4);
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_uint { char p[0x514]; unsigned int v; };
struct o518_float { char p[0x518]; float v; };
struct o51C_float { char p[0x51C]; float v; };
struct o520_float { char p[0x520]; float v; };
struct o52C_int { char p[0x52C]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c06a1d8(int a4, int a5, float f4)
{
    int t0;
    int t7;
    float u12;
    int t37;
    int t40;
    float u49;
    float u50;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    L_C06A1D8:;
    t0 = *(int *)0xC23ED50;
    R0 = (t0);
    R14 = (R4);
    if ((t0 == 48)) goto L_C06A212;
    goto L_C06A1F6;
    L_C06A1F6:;
    if ((R0 == 49)) goto L_C06A212;
    goto L_C06A1FA;
    L_C06A1FA:;
    if ((R0 == 47)) goto L_C06A220;
    goto L_C06A1FE;
    L_C06A1FE:;
    if ((R0 != 43)) goto L_C06A206;
    goto L_C06A202;
    L_C06A202:;
    goto L_C06A386;
    L_C06A386:;
    t7 = *(int *)0xC23A258;
    R4 = (t7);
    R5 = (0xC247C54);
    if (((*(int *)0xC247C54) == t7)) goto L_C06A3BE;
    goto L_C06A392;
    L_C06A392:;
    *(unsigned int *)((R5 + 0x0)) = R4;
    u12 = *(float *)0xC20A268;
    *(float *)0xC20A268 = (u12 + 0.0699999928f);
    R4 = (0xC20A268);
    F4 = ((u12 + 0.0699999928f));
    F5 = (1.0f);
    if ((!((u12 + 0.0699999928f) > 1.0f))) goto L_C06A3B0;
    goto L_C06A3A8;
    L_C06A3A8:;
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) - F5);
    goto L_C06A3BE;
    L_C06A3BE:;
    if (((*(int *)((R14 + 0x0))) != 0xF38)) goto L_C06A3D4;
    goto L_C06A3C6;
    L_C06A3C6:;
    R0 = ((FUN_0c0c475c((*(int *)((R14 + 0x0))), 0.299999982f)));
    goto L_C06A3E4;
    L_C06A3E4:;
    return R0;
    L_C06A3D4:;
    R0 = ((FUN_0c0ca862(R14)));
    goto L_C06A3E4;
    L_C06A3B0:;
    if ((!((-1.0f) > F4))) goto L_C06A3BE;
    goto L_C06A3B8;
    L_C06A3B8:;
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) + F5);
    goto L_C06A3BE;
    L_C06A206:;
    if ((R0 != 44)) goto L_C06A20E;
    goto L_C06A20A;
    L_C06A20A:;
    goto L_C06A386;
    L_C06A20E:;
    goto L_C06A3DE;
    L_C06A3DE:;
    R0 = ((FUN_0c0ca862(R14)));
    goto L_C06A3E4;
    L_C06A220:;
    if ((R5 != 0)) goto L_C06A228;
    goto L_C06A224;
    L_C06A224:;
    goto L_C06A366;
    L_C06A366:;
    FUN_0c0848d6(0.939999998f, 0.849999964f, 0.519999981f);
    FUN_0c0c465c((*(int *)((R14 + 0x0))));
    R0 = ((FUN_0c0849da()));
    goto L_C06A3E4;
    L_C06A228:;
    FUN_0c069e28();
    t37 = *(int *)((R14 + 0x0));
    t40 = *(int *)(((((t37 << 1) + t37) << 2) + 0xC2623A0));
    R0 = (0xC2623A0);
    R11 = ((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))));
    R13 = (t40);
    if ((t40 != 0)) goto L_C06A24C;
    goto L_C06A248;
    L_C06A248:;
    goto L_C06A3E4;
    L_C06A24C:;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder((0x2EC + R11));
    FUN_0c0db470((R13 + 0x8), ((int)stk + 4));
    nlPopMatrix(0x1);
    u49 = *(float *)(((int)stk + 12));
    u50 = *(float *)0xC247C44;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((0x2AC + R11));
    R12 = (0xC247C44);
    R13 = (((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50));
    F12 = (100.0f);
    F13 = (-50.0f);
    F14 = (75.0f);
    F15 = (0.0f);
    F5 = (75.0f);
    F6 = ((((*(float *)0xC247C44) - ((float)((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50) * 100.0f)) + -50.0f));
    if (((int)((*(int *)0xC247C3C) - ((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50)) >= (int)0x10)) goto L_C06A310;
    goto L_C06A2BE;
    L_C06A2BE:;
    F3 = (1000.0f);
    goto L_C06A312;
    L_C06A312:;
    FUN_0c0e57d0(0x0, (F3 + F15), F5, F6);
    F5 = (F14);
    F6 = ((((*(float *)((R12 + 0x0))) - ((float)(R13 + 0x1) * F12)) + F13));
    if (((int)(((*(int *)0xC247C3C) - R13) - 1) >= (int)0x10)) goto L_C06A344;
    goto L_C06A33E;
    L_C06A33E:;
    F3 = (1000.0f);
    goto L_C06A346;
    L_C06A346:;
    FUN_0c0e57d0(0x1, (F3 + F15), F5, F6);
    FUN_0c9de360();
    nlPopMatrix(0x1);
    R0 = ((FUN_0c0c46cc((*(int *)((R14 + 0x0))))));
    goto L_C06A3E4;
    L_C06A344:;
    F3 = (F15);
    goto L_C06A346;
    L_C06A310:;
    F3 = (0.0f);
    goto L_C06A312;
    L_C06A212:;
    FUN_0c069fba();
    R0 = ((FUN_0c0c465c((*(int *)((R14 + 0x0))))));
    goto L_C06A3E4;
}






int FUN_0c0b5030(int a4, float f4)
{
    int t0;
    int t8;
    int t14;
    int t15;
    int t16;
    int t17;
    int t36;
    float u47;
    float u40;
    int t50;
    float t51;
    int t56;
    int t61;
    int t75;
    int t88;
    int t89;
    int t102;

    t0 = (((struct o44_int *)(a4))->v);
    switch (t0) {
    case 0:
        t88 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t88 + 0xC);
        (((struct o5C_uint *)(a4))->v) = ((((t88 + 0xC) << 16) | ((t88 + 0xC) << 8)) | (t88 + 0xC));
        t89 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t89 - 1);
        if ((int)(t89 - 1) > 0) {
        } else {
            (((struct o50_uint *)(a4))->v) = 0x1;
            (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + 0x1);
        }
        break;
    case 1:
        t75 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t75 - 1);
        if ((int)(t75 - 1) > 0) {
        } else {
            (((struct o50_uint *)(a4))->v) = 0x80;
            (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70(-0.0199999996f, 0.429999977f, -23.9799995f);
        nlRotateAX(0x8000);
        t36 = (((struct o50_int *)(a4))->v);
        u47 = ((-((float)(t36 - 112) / 16.0f)) + 1.0f);
        if ((int)t36 > (int)0x70) {
        } else {
            u40 = 1.0f;
            if ((int)t36 < (int)0x8) {
                u40 = ((float)t36 * 0.125f);
            }
            u47 = u40;
        }
        t50 = (*(int *)0xC23A258);
        t51 = FUN_0c0da410(((t36 << 8) + 0x4000));
        FUN_0c0c932c(0xC111C18, 0xC111C18, 0x3A3, t50, 0x8000, 0x8000, 0.0f, t51, u47, 1.0f);
        nlPopMatrix(0x1);
        if ((int)((((struct o50_int *)(a4))->v)) < (int)0x8) {
            *(float *)0xC203FF4 = ((-((float)((((struct o50_int *)(a4))->v)) * 0.125f)) + 1.0f);
            t56 = ((int (*)(int))(FUN_0c0c0340))(0xC203FC8);
        }
        t61 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t61 - 1);
        if ((int)(t61 - 1) <= 0) {
            (((struct o50_uint *)(a4))->v) = 0xE1;
            (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + 0x1);
            *(float *)0xC203FF4 = 1.0f;
        }
        break;
    case 3:
        if ((int)((((struct o50_int *)(a4))->v)) < (int)0xA) {
            *(float *)0xC203FF4 = ((float)((((struct o50_int *)(a4))->v)) / 10.0f);
        }
        t8 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t8 - 1);
        if ((int)(t8 - 1) <= 0) {
            (((struct o50_uint *)(a4))->v) = 0xC;
            (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + 0x1);
            *(float *)0xC203FF4 = 0.0f;
        }
        t14 = ((int (*)(int, float))(FUN_0c0c0340))(0xC203FC8, f4);
        break;
    case 4:
        t15 = ((int (*)(int, float))(FUN_0c0c0340))(0xC203FC8, f4);
        t16 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t16 - 12);
        (((struct o5C_uint *)(a4))->v) = ((((t16 - 12) << 16) | ((t16 - 12) << 8)) | (t16 - 12));
        t17 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t17 - 1);
        if ((int)(t17 - 1) <= 0) {
            (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
        }
        break;
    }
    t102 = (((struct o5C_int *)(a4))->v);
    return FUN_0c0d8c40(t102, t102, t102);
}

int FUN_0c0278d0(int a4, int a5)
{
    int t8;
    float u70;
    float u71;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    int t0;
    int t29;
    int t30;
    int stk[24];

    (((struct o28_float *)(((int)stk + 4)))->v) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x28)))->v) = 3.0f;
    (((struct o8_float *)((((int)stk + 4) + 0x28)))->v) = -15.0f;
    if ((a5 != 0) && (t0 = (((struct o50C_int *)(a4))->v), t0 != 0)) {
        if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) == 4) {
            t8 = *(int *)((((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((((struct o24C_float *)(a4))->v)) - ((((struct o30_float *)(t8))->v))), (((((struct o250_float *)(a4))->v)) - ((((struct o34_float *)(t8))->v))), (((((struct o254_float *)(a4))->v)) - ((((struct o38_float *)(t8))->v))));
            t29 = ((*(int *)(((int)stk + 12))) + 0x1000);
            t30 = (*(int *)(((int)stk + 16)));
        } else {
            t29 = 0xFFFFE800;
            t30 = ((((struct o52C_int *)(a4))->v));
        }
    } else {
        t29 = 0xFFFFE800;
        t30 = ((((struct o52C_int *)(a4))->v));
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((((struct o24C_float *)(a4))->v)), ((((struct o250_float *)(a4))->v)), ((((struct o254_float *)(a4))->v)));
    nlRotateAY(t30);
    *(float *)(((int)stk + 32)) = ((((struct o28_float *)(((int)stk + 4)))->v));
    *(float *)(((int)stk + 36)) = ((((struct o4_float *)((((int)stk + 4) + 0x28)))->v));
    *(float *)(((int)stk + 40)) = ((((struct o8_float *)((((int)stk + 4) + 0x28)))->v));
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    (((struct o518_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o51C_float *)(a4))->v) = (*(float *)(((int)stk + 24)));
    (((struct o520_float *)(a4))->v) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    (((struct o514_uint *)(a4))->v) = 0x1;
    (((struct o8_float *)((((int)stk + 4) + 0x34)))->v) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x34)))->v) = 0.0f;
    (((struct o34_float *)(((int)stk + 4)))->v) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o518_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o51C_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o520_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0299999993f;
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    (((struct o4B0_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4B4_float *)(a4))->v) = (*(float *)(((int)stk + 24)));
    (((struct o4B8_float *)(a4))->v) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0546fe(a4, t30, 0x80, 0x1);
    FUN_0c05473c(a4, t29, 0x80, 0x1);
    u70 = (((struct o30_float *)(a4))->v);
    u71 = (((struct o518_float *)(a4))->v);
    u72 = (((struct o34_float *)(a4))->v);
    u73 = (((struct o51C_float *)(a4))->v);
    u74 = (((struct o38_float *)(a4))->v);
    u75 = (((struct o520_float *)(a4))->v);
    u76 = ((u73 - u72) * (u73 - u72));
    u76 = u76 + (u71 - u70) * (u71 - u70);
    u77 = u76;
    u77 = u77 + (u75 - u74) * (u75 - u74);
    
    return !(_builtin_sqrtf(u77) > 0.0299999993f);
}


int FUN_0c0a1c76(int a4)
{
    int t1;
    int t2;
    int t3;
    int t7;
    int t9;
    int t14;
    int t22;
    int t24;
    int t26;
    int t27;
    float u32;
    int t33;
    float u34;
    int t37;
    float u38;
    int t39;
    int t41;
    int t11;
    int t12;

    if ((*(int *)((a4 + 0x384))) != 0) {
        t1 = *(int *)((a4 + 0x384));
        t2 = 0x384;
        t3 = t1;
        for (;;) {
            if ((unsigned int)t3 >= (unsigned int)(t1 + 0x50)) {
                break;
            }
            t2 = (FUN_0c0da2e0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0x7);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0x7);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            *(unsigned int *)((t3 + 0x0)) = t2;
            t3 = (t3 + 0x4);
        }
        return t2;
    }
    t7 = FUN_0c0e19aa(0xC0A163C, 0x6E8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t7);
    *(unsigned int *)((t7 + 0x30)) = a4;
    t9 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t7 + 0x40)) = (((int)t9 >= 0) ? (0x2 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x2 >> (-(int)t9 & 31)) : ((int)0x2 >> 31)));
    t14 = 0x1;
    if (((*(int *)0xC23ED50) != 29) && ((t11 = *(int *)0xC23ED50, t11 != 93) && (t12 = *(int *)0xC23ED50, t12 != 102))) {
        t14 = 0x0;
    }
    *(unsigned int *)((t7 + 0x44)) = t14;
    if ((*(int *)((a4 + 0x3E4))) == 0) {
        FUN_0c0bb0f4(a4);
    }
    t22 = 0x0;
    for (;;) {
        t24 = (int)((unsigned int)((int)((unsigned int)t22 + (unsigned int)0x0)) + ((((int)0x0 > (int)t22)) ? 1u : 0u));
        t26 = FUN_0c0da2e0();
        t27 = ((~(((~t26) + 0x1) & 0x7)) + 0x1);
        if ((int)t26 >= 0) {
            t27 = (t26 & 0x7);
        }
        *(unsigned int *)((((t7 + 0x48) + (((t22 << 1) + t22) << 2)) + 0x0)) = t27;
        *(float *)(((0x4 + ((t7 + 0x48) + (((t22 << 1) + t22) << 2))) + 0x0)) = ((((float)(unsigned char)(FUN_0c0da2e0()) * (*(float *)((((((t24 >> 1) << 2) << 1) + 0xC10CE40) + 0x4)))) / 255.0f) + (*(float *)((((((t24 >> 1) << 2) << 1) + 0xC10CE40) + 0x0))));
        u32 = *(float *)((((t24 >> 1) << 2) + 0xC10CE18));
        t33 = FUN_0c0da2e0();
        u34 = 1.0f;
        if ((t33 & 1) != 0) {
            u34 = (-1.0f);
        }
        t37 = ((((t22 << 1) + t22) << 2) + (t7 + 0x48));
        t22 = (t22 + 0x1);
        u38 = ((float)((unsigned char)(FUN_0c0da2e0()) - 127) / 1024.0f);
        u38 = u38 + u34 * u32;
        *(float *)((t37 + 0x8)) = u38;
        if ((int)t22 >= (int)0x14) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x384)) = (t7 + 0x48);
    t39 = 0x0;
    for (;;) {
        t41 = (((t39 << 2) + t39) << 2);
        t39 = (t39 + 0x1);
        *(unsigned int *)((((t41 << 2) + (0x138 + t7)) + 0x0)) = 0x0;
        if ((int)t39 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c096d6c();
}
