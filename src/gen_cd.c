/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08e970(int, int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0e19f2(int);
int FUN_0c0e61d4(int, int, float, float, float, float);
int FUN_0c08a8e0(int a4, int a5, float f4);
int FUN_0c08e6d8(int a4);

int FUN_0c08a8e0(int a4, int a5, float f4)
{
    float u0;
    float u1;
    float u2;
    float u5;
    float u6;
    int t13;
    float u3;
    float u4;
    int t21;
    int t22;
    float u24;
    float u25;
    float u26;
    float u27;
    int stk[11];

    *(unsigned int *)(((int)stk + 4)) = ((0x154 + a4) + (((a5 << 1) + a5) << 2));
    u0 = *(float *)((((((((a5 << 1) + a5) << 2) << 2) << 2) + 0xC23F268) + 0x4));
    u1 = *(float *)((((0x154 + a4) + (((a5 << 1) + a5) << 2)) + 0x4));
    u2 = *(float *)0xC08A9E0;
    if (((u2 > u0) && (!(u2 > u1) && (u3 = *(float *)0xC08A9E4, (u1 - u0) > u3))) || (!(u2 > u0) && ((u2 > u1) && (u4 = *(float *)0xC08A9E8, u4 > (u1 - u0))))) {
        u5 = *(float *)0xC08A9EC;
        u6 = (_builtin_fabsf((u1 - u0)) * u5);
        if ((_builtin_fabsf((u1 - u0)) * u5) > u5) {
            u6 = u5;
        }
        FUN_0c0e61d4(a4, a5, u2, _builtin_fabsf((u1 - u0)), u5, u1);
        *(float *)(((int)stk + 16)) = f4;
        *(unsigned int *)(((int)stk + 8)) = ((0x154 + a4) + (((a5 << 1) + a5) << 2));
        t13 = FUN_0c0d9dc0(((*(float *)((((((((a5 << 1) + a5) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((((0x154 + a4) + (((a5 << 1) + a5) << 2)) + 0x0)))), ((*(float *)((((((((a5 << 1) + a5) << 2) << 2) << 2) + 0xC23F268) + 0x8))) - (*(float *)((((0x154 + a4) + (((a5 << 1) + a5) << 2)) + 0x8)))));
        FUN_0c08e970((((int)stk + 4) + 0x8), (0x8000 + t13), u6);
        FUN_0c0cc3f8((*(int *)((a4 + 0x3C4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    } else {
        t21 = a4;
        t22 = a5;
        u24 = u2;
        u25 = (u1 - u0);
        u26 = u0;
        u27 = u1;
    }
    return (FUN_0c0e61d4(t21, t22, u24, u25, u26, u27));
}

int FUN_0c08e6d8(int a4)
{
    float u0;
    float u1;
    float t2;
    int t3;
    float u4;
    float u5;
    int t6;
    float u7;
    int t8;
    float u9;
    int t10;
    float u11;
    int t12;

    u0 = *(float *)(((0x34 + a4) + 0x0));
    u1 = *(float *)((a4 + 0x30));
    *(float *)((a4 + 0x30)) = (u1 + u0);
    t2 = FUN_0c0d9e90((int)(u1 + u0));
    t3 = *(int *)0xC248A88;
    u4 = ((1.0f - _builtin_fabsf(t2)) * 128.0f);
    u4 = u4 + _builtin_fabsf(t2) * (float)(unsigned char)((int)t3 >> 8);
    u5 = ((1.0f - _builtin_fabsf(t2)) * 5.0f);
    u5 = u5 + _builtin_fabsf(t2) * (float)(unsigned char)t3;
    *(unsigned int *)0xC248A70 = (((int)u4 << 8) | (int)u5);
    t6 = *(int *)0xC248A7C;
    u7 = ((1.0f - _builtin_fabsf(t2)) * 255.0f);
    u7 = u7 + _builtin_fabsf(t2) * (float)t6;
    *(unsigned int *)0xC248A64 = (int)u7;
    t8 = *(int *)0xC248A80;
    u9 = ((1.0f - _builtin_fabsf(t2)) * 255.0f);
    u9 = u9 + _builtin_fabsf(t2) * (float)t8;
    *(unsigned int *)0xC248A68 = (int)u9;
    t10 = *(int *)0xC248A84;
    u11 = ((1.0f - _builtin_fabsf(t2)) * 255.0f);
    u11 = u11 + _builtin_fabsf(t2) * (float)t10;
    *(unsigned int *)0xC248A6C = (int)u11;
    t12 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t12 - 1);
    if ((t12 - 1) == 0) {
        return FUN_0c0e19f2((unsigned char)t3);
    }
    return 0xB94;
}
