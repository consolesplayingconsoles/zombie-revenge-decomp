/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0b719e(int a4, int a5);
int FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c046170(int a4, float f4);
int FUN_0c0277c4(int a4, float f4);
int FUN_0c01f00c(int a4, int a5);
int FUN_0c0341a6(int a4, int a5);
int FUN_0c037002(int a4, int a5);
struct o214_float { char p[0x214]; float v; };
struct o218_float { char p[0x218]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o94_int { char p[0x94]; int v; };




int FUN_0c046170(int a4, float f4)
{
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    int t26;
    int stk[16];

    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = f4;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    u18 = *(float *)((a4 + 0x30));
    u19 = *(float *)((a4 + 0x518));
    u20 = *(float *)((a4 + 0x34));
    u21 = *(float *)((a4 + 0x51C));
    u22 = *(float *)((a4 + 0x38));
    u23 = *(float *)((a4 + 0x520));
    u24 = ((u21 - u20) * (u21 - u20));
    u24 = u24 + (u19 - u18) * (u19 - u18);
    u25 = u24;
    u25 = u25 + (u23 - u22) * (u23 - u22);
    t26 = 0x1;
    if (_builtin_sqrtf(u25) > (f4 * 10.0f)) {
        t26 = 0x0;
    }
    return t26;
}

int FUN_0c0277c4(int a4, float f4)
{
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    int t26;
    int stk[16];

    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = f4;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    u18 = *(float *)((a4 + 0x30));
    u19 = *(float *)((a4 + 0x518));
    u20 = *(float *)((a4 + 0x34));
    u21 = *(float *)((a4 + 0x51C));
    u22 = *(float *)((a4 + 0x38));
    u23 = *(float *)((a4 + 0x520));
    u24 = ((u21 - u20) * (u21 - u20));
    u24 = u24 + (u19 - u18) * (u19 - u18);
    u25 = u24;
    u25 = u25 + (u23 - u22) * (u23 - u22);
    t26 = 0x1;
    if (_builtin_sqrtf(u25) > (f4 * (1.0f + 1.0f))) {
        t26 = 0x0;
    }
    return t26;
}

int FUN_0c01f00c(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u9;

    t0 = (((struct o94_int *)(a5))->v);
    u1 = (((struct o54_float *)(a4))->v);
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o30_float *)(t0))->v);
    u4 = (((struct o5C_float *)(a4))->v);
    u5 = (((struct o8_float *)((a4 + 0x30)))->v);
    u6 = (((struct o8_float *)((t0 + 0x30)))->v);
    u9 = (((u5 + u4) - u6) * ((u5 + u4) - u6));
    u9 = u9 + ((u2 + u1) - u3) * ((u2 + u1) - u3);
    if ((((((struct o214_float *)(a4))->v)) + ((((struct o214_float *)(t0))->v))) > _builtin_sqrtf(u9)) {
        if ((((((struct o218_float *)(a4))->v)) + ((((struct o218_float *)(t0))->v))) > _builtin_fabsf(((((((struct o4_float *)((a4 + 0x30)))->v)) + ((((struct o58_float *)(a4))->v))) - ((((struct o4_float *)((t0 + 0x30)))->v))))) {
            (((struct o8C_float *)(a4))->v) = ((((((struct o30_float *)(a4))->v)) + ((((struct o30_float *)(t0))->v))) * 0.5f);
            (((struct o90_float *)(a4))->v) = ((((((struct o34_float *)(a4))->v)) + ((((struct o34_float *)(t0))->v))) * 0.5f);
            (((struct o94_float *)(a4))->v) = ((((((struct o38_float *)(a4))->v)) + ((((struct o38_float *)(t0))->v))) * 0.5f);
            return 0x4;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0341a6(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    float u5;
    int t14;
    int t20;
    float s1;

    u0 = (((struct o30_float *)(a4))->v);
    u1 = (((struct o30_float *)(a5))->v);
    u2 = (((struct o38_float *)(a4))->v);
    u3 = (((struct o38_float *)(a5))->v);
    t4 = (((struct o4F4_int *)(a4))->v);
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + (u0 - u1) * (u0 - u1);
    s1 = _builtin_sqrtf(u5);
    if (s1 > ((((struct o7C_float *)((*(int *)((((((t4 << 1) + t4) << 2) + 0xC1F79B4) + 0x8)))))->v))) {
        return 0x0;
    }
    t14 = (((struct o4F4_int *)(a4))->v);
    if (s1 > ((((struct o80_float *)((*(int *)((((((t14 << 1) + t14) << 2) + 0xC1F79B4) + 0x8)))))->v))) {
        return 0x1;
    }
    t20 = (((struct o4F4_int *)(a4))->v);
    if (s1 > ((((struct o84_float *)((*(int *)(((0xC1F79B4 + (((t20 << 1) + t20) << 2)) + 0x8)))))->v))) {
        return 0x2;
    }
    return 0x3;
}

int FUN_0c037002(int a4, int a5)
{
    float u0;
    float u1;
    float u4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float s1;
    float s2;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a4 + 0x4));
    u4 = *(float *)((a4 + 0x8));
    u5 = (u1 * (*(float *)((a5 + 0x4))));
    u5 = u5 + u0 * (*(float *)((a5 + 0x0)));
    u7 = *(float *)((a5 + 0x4));
    u8 = *(float *)((a5 + 0x0));
    u9 = u5;
    u9 = u9 + u4 * (*(float *)((a5 + 0x8)));
    u10 = (u1 * u1);
    u10 = u10 + u0 * u0;
    u11 = *(float *)((a5 + 0x8));
    u12 = u10;
    u12 = u12 + u4 * u4;
    u13 = (u7 * u7);
    u13 = u13 + u8 * u8;
    u14 = u13;
    u14 = u14 + u11 * u11;
    s1 = _builtin_sqrtf(u12);
    s2 = _builtin_sqrtf(u14);
    if ((u9 / (s1 * s2)) > 0.0f) {
        return 0x1;
    }
    if (0.0f > (u9 / (s1 * s2))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}


