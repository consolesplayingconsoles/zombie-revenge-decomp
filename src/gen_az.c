/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033c8c(int, int, int, float);
float FUN_0c036efc(int, int, int, int);
int FUN_0c040266(int);
int FUN_0c041f2a(int);
int FUN_0c056e7a(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086b96(int);
int FUN_0c08b2d0(int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c9e86(int);
int FUN_0c0c9f70(int, int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d82a0(int, int);
int FUN_0c0d8660(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dc1e0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dcd10(int, int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e0784(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e609c(void);
int FUN_0c0e61d4(void);
extern float _builtin_sqrtf(float);
int kmFreeTexture(int);
int FUN_0c05b274(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05f1e2(int a4, int a5);
int FUN_0c0c6c3c(int a4, int a5, int a6, int a7);
int FUN_0c0614fa(int a4, int a5);
int FUN_0c0a5222(int a4, int a5, int a6, int a7, float f4);
int FUN_0c032be0(int a4, float f4);
void FUN_0c032d90(int a4);
int FUN_0c0ca332(int a4);
int FUN_0c0a4548(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0ae7b0(int a4);
int FUN_0c033530(int a4, int a5, int a6, int a7);
int FUN_0c06c01c(int a4, int a5, int a6, int a7);
int FUN_0c0dfb08(int a4, int a5, int a6);
int FUN_0c0402b8(int a4);
int FUN_0c035458(int a4, int a5);
int FUN_0c045e54(int a4, int a5, int a6);
int FUN_0c05d764(float f4);

int FUN_0c05b274(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t3;
    int t7;
    int t34;
    int t21;
    int t30;
    int t32;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)0xC23A258;
    t3 = FUN_0c0e19aa(0xC05BFAC, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t3);
    *(unsigned int *)((t3 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t3 + 0x8C)) = a4;
    *(float *)((t3 + 0x54)) = 0.099999994f;
    *(float *)((t3 + 0x58)) = -0.5f;
    *(float *)((t3 + 0x5C)) = -0.5f;
    *(unsigned int *)((t3 + 0x78)) = 0x124F;
    *(unsigned int *)((t3 + 0xA0)) = 0x3C;
    *(unsigned int *)((t3 + 0xA4)) = 0x3;
    *(unsigned int *)((t3 + 0x98)) = a8;
    t7 = FUN_0c0e19aa(0xC08C20E, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t7);
    FUN_0c0e609c();
    if ((*(int *)(((int)stk + 8))) != 0) {
        *(float *)((t7 + 0x90)) = (1.0f + 1.0f);
    } else {
        *(float *)((t7 + 0x90)) = 1.0f;
    }
    *(unsigned short *)((t7 + 0x9A)) = (*(short *)((((*(int *)((a4 + 0x344))) << 1) + 0xC0F9B60)));
    *(unsigned short *)((t7 + 0xA2)) = 0x1;
    *(unsigned short *)((t7 + 0xA0)) = 0x3;
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0(((((t0 << 8) + 0xC25F840) + ((((a8 << 2) << 2) << 2) << 1)) + (((((t1 + 0x1) & 0x1) << 2) << 2) << 2)));
    FUN_0c0db840((((int)stk + 4) + 0x8));
    FUN_0c086b96((((int)stk + 4) + 0x8));
    t34 = (FUN_0c0dc4c0(0x1));
    if (a6 != 0) {
        t21 = FUN_0c0e19aa(0xC05C148, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t21);
        *(unsigned int *)((t21 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t21 + 0x200)) = 0x0;
        *(unsigned int *)((t21 + 0x1F8)) = 0x0;
        *(unsigned int *)((t21 + 0x1EC)) = (*(int *)((a6 + 0x1EC)));
        *(float *)((t21 + 0x1E4)) = ((*(float *)(((*(int *)(((int)stk + 4))) + 0xC))) * (1.0f + 1.0f));
        *(unsigned int *)(((0x1FC + t21) + 0x0)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)));
        *(unsigned int *)((t21 + 0x22C)) = (*(int *)((a6 + 0x22C)));
        t30 = ((int (*)(int))(FUN_0c0e61d4))(0x0);
        *(unsigned short *)((t21 + 0x6E)) = (*(short *)((a4 + 0x6E)));
        t32 = ((int (*)(void))(FUN_0c0e61d4))();
        t34 = (((int (*)(void))(FUN_0c0e61d4))());
    }
    return t34;
}

int FUN_0c05f1e2(int a4, int a5)
{
    int t0;
    int t2;
    int t9;
    float u36;
    int t25;
    float u28;
    int t23;
    int t24;

    t0 = *(int *)((a4 + 0x348));
    if (t0 != 13) {
        return t0;
    }
    t2 = FUN_0c0e19aa(0xC05F3E0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t9 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t9 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t2 + 0x1EC)) = t9;
    *(unsigned int *)(((0x1E8 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t2 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t2 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(volatile int *)((a4 + 0xBC));
    *(volatile int *)((t2 + 0x1E8));
    FUN_0c0e61d4();
    *(unsigned short *)((t2 + 0x70)) = 0x4000;
    FUN_0c0e61d4();
    *(unsigned int *)((t2 + 0x220)) = 0x125E;
    *(unsigned int *)((t2 + 0xCC)) = (*(int *)((a4 + 0x350)));
    u36 = -0.799999952f;
    if (((int)(*(int *)((a4 + 0xBC))) < (int)0x2) && (t23 = *(int *)((a4 + 0xBC)), t24 = *(int *)(((((((t23 << 2) + t23) << 2) << 2) + 0xC2497E0) + 0x10)), t24 != 0)) {
        t25 = *(int *)(((((((t23 << 2) + t23) << 2) << 2) + 0xC2497E0) + 0x10));
        u28 = (float)(t25 & 0x3F);
        if ((int)(t25 & 0x3F) < 0) {
            u28 = ((float)(t25 & 0x3F) + 4.2949673e+09f);
        }
        u36 = ((-(u28 * 0.0129999993f)) + -0.399999976f);
    }
    FUN_0c0a6800((*(short *)((a4 + 0x6E))), (t2 + 0x60), 0.0f, 0.0f, u36);
    *(float *)((t2 + 0x64)) = (0.0f - (u36 * 0.299999982f));
    return FUN_0c056e7a(a4);
}

int FUN_0c0c6c3c(int a4, int a5, int a6, int a7)
{
    int t1;
    int t8;
    int t12;
    float u19;
    float u23;
    float u25;
    float u26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u31;
    float u32;
    int t33;
    int t34;
    float u37;
    int t60;
    int t61;
    int t62;
    int t63;
    int t69;
    int t75;
    int t6;
    int t9;
    int t10;
    int t11;
    float u40;
    float u41;
    float u67;
    int stk[14];

    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    } else {
        t6 = a4;
    }
    t8 = *(int *)((a4 + 0x100));
    *(unsigned int *)((a4 + 0x100)) = (t8 - 1);
    if (((int)(t8 - 1) >= 0) && (t9 = *(int *)((a4 + 0x30)), t10 = *(signed char *)((t9 + 0xC31FCB8)), t11 = *(int *)((a4 + 0x34)), t10 == t11)) {
    } else {
        t12 = ((int (*)(int))(FUN_0c0e19f2))(t6);
    }
    FUN_0c0db470((a4 + 0x70), ((int)stk + 4));
    u19 = *(float *)(((int)stk + 12));
    if ((u19 > -100.0f) && (5.0f > u19)) {
        u23 = (((*(float *)(((int)stk + 8))) + 5.0f) / ((*(float *)0xC247D10) * u19));
        u25 = 293.0f;
        u25 = u25 + 320.0f * ((*(float *)(((int)stk + 4))) / ((*(float *)0xC247D0C) * u19));
        *(float *)((a4 + 0x3C)) = u25;
        u26 = *(float *)(((int)stk + 12));
        *(float *)((a4 + 0x44)) = (-u26);
        t27 = 0xC0C6D8C;
        t28 = (0xF4 + a4);
        t29 = (0xCC + a4);
        t30 = (a4 + 0x7C);
        u31 = u25;
        u32 = (-u26);
        for (;;) {
            t33 = *(signed char *)((t28 + 0x0));
            t28 = (t28 + 0x1);
            if ((signed char)t33 == 0) {
                break;
            }
            t34 = *(int *)((t30 + 0x0));
            t30 = (t30 + 0x4);
            u32 = (*(float *)((t29 + 0x0)));
            t29 = (t29 + 0x4);
            t27 = 0x40;
            u31 = ((-(u23 * 240.0f)) + 240.0f);
            u37 = u31;
            u37 = u37 + (FUN_0c0d9e90(t34)) * u32;
            u31 = u37;
            *(float *)((a4 + t27)) = u31;
            t27 = (signed char)t33;
            if (t27 != 32) {
                t27 = (signed char)t33;
                t27 = (t27 << 1);
                *(unsigned int *)((a4 + 0x38)) = (*(short *)((0xC1E8760 + t27)));
                t27 = (FUN_0c0c0340((a4 + 0x38)));
            } else {
                u40 = u31;
                u41 = u32;
            }
            u31 = u40;
            u32 = u41;
            t27 = 0x3C;
            u32 = (*(float *)((a4 + t27)));
            u32 = (u32 + 9.0f);
            *(float *)((a4 + t27)) = u32;
        }
    }
    t60 = (0xCC + a4);
    t61 = (a4 + 0x7C);
    t62 = (0xA4 + a4);
    t63 = 0xA;
    for (;;) {
        if ((int)(*(int *)((t61 + 0x0))) <= (int)0x2BFFF) {
            u67 = ((*(float *)((t60 + 0x0))) * 0.899999976f);
        } else {
            u67 = ((*(float *)((t60 + 0x0))) * 0.979999959f);
        }
        t63 = (t63 - 1);
        *(float *)((t60 + 0x0)) = u67;
        t69 = *(int *)((t62 + 0x0));
        t62 = (t62 + 0x4);
        t60 = (t60 + 0x4);
        *(unsigned int *)((t61 + 0x0)) = ((*(int *)((t61 + 0x0))) + t69);
        t61 = (t61 + 0x4);
        if (t63 == 0) {
            break;
        }
    }
    t75 = 0x100;
    if ((int)(*(int *)((a4 + 0x100))) <= (int)0x14) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * 1.19999993f);
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * 0.699999988f);
        t75 = 0x4C;
    }
    return t75;
}

int FUN_0c0614fa(int a4, int a5)
{
    int t1;
    int t10;
    int t12;
    float u30;
    int t14;
    int stk[11];

    t1 = FUN_0c0e19aa(0xC061418, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    *(volatile int *)((a4 + 0xBC));
    *(volatile signed char *)((a5 + 0x3));
    FUN_0c0e61d4();
    FUN_0c0e61d4();
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    u30 = 12.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0x3))) == 1) {
        u30 = 20.0f;
    }
    *(float *)((t1 + 0x24C)) = u30;
    *(float *)((t1 + 0x250)) = ((*(float *)((t1 + 0x24C))) / (float)(unsigned short)(*(short *)((a5 + 0x8))));
    *(float *)((t1 + 0x254)) = 1.00999999f;
    *(float *)((t1 + 0x258)) = 0.00999999978f;
    *(unsigned int *)((t1 + 0x240)) = 0x5;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((t1 + 0x240)));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = (*(float *)((t1 + 0x250)));
    FUN_0c0dccc0();
    FUN_0c0dc890(((*(short *)((a4 + 0x6E))) + 0x8000));
    FUN_0c0db4d0(((int)stk + 4), (t1 + 0x48));
    FUN_0c0dc4c0(0x1);
    return (FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}

int FUN_0c0a5222(int a4, int a5, int a6, int a7, float f4)
{
    int t62;
    int t3;
    int t21;
    int t36;
    int t37;
    int t45;
    int t38;
    int t40;
    int t49;
    int t50;
    int t58;
    int t51;
    int t53;
    int stk[16];

    t62 = 0x88;
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
    } else {
        t3 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        FUN_0c0dc510(0x0);
        FUN_0c0dbda0((*(int *)((t3 + 0x3E4))));
        FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
        FUN_0c0dc950((*(short *)0xC10D13A));
        FUN_0c0dc890(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)0xC10D138)));
        FUN_0c0dc6e0(((*(short *)0xC10D136) + (*(short *)((a4 + 0x60)))));
        FUN_0c0a79fa((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
        FUN_0c0dc4c0(0x1);
        if ((*(int *)((t3 + 0x50C))) != 0) {
            t21 = *(int *)(((((*(int *)((t3 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((*(float *)((t3 + 0x30))) - (*(float *)((t21 + 0x30)))), ((*(float *)((t3 + 0x34))) - (*(float *)((t21 + 0x34)))), ((*(float *)((t3 + 0x38))) - (*(float *)((t21 + 0x38)))));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)((((int)stk + 4) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = (*(int *)((((int)stk + 4) + 0x4)));
        }
        t36 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
        t37 = *(int *)(((((int)stk + 4) + 0x18) + 0x4));
        t45 = 0xC0A536C;
        if (_builtin_fabsf((float)(short)(t37 - t36)) > 256.0f) {
            if (((int)(short)(t37 - t36) < (int)0x8000) && ((int)(short)(t37 - t36) > 0)) {
                t38 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t38 + 0x100);
                if ((int)(short)(t38 + 0x100) > (int)0xA86) {
                    *(unsigned short *)((a4 + 0x62)) = 0xA86;
                }
            } else {
                t40 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t40 - 0x100);
                if ((int)(short)(t40 - 0x100) < (int)0xFFFFF4A0) {
                    *(unsigned short *)((a4 + 0x62)) = 0xFFFFF4A0;
                }
            }
            t45 = 0x62;
        }
        t49 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
        t50 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
        t58 = t45;
        if (_builtin_fabsf((float)(short)(t50 - t49)) > 256.0f) {
            if (((int)(short)(t50 - t49) < (int)0x8000) && ((int)(short)(t50 - t49) > 0)) {
                t51 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t51 + 0x100);
                if ((int)(short)(t51 + 0x100) > (int)0x112E) {
                    *(unsigned short *)((a4 + 0x60)) = 0x112E;
                }
            } else {
                t53 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t53 - 0x100);
                if ((int)(short)(t53 - 0x100) < (int)0xFFFFF57A) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFF57A;
                }
            }
            t58 = 0x60;
        }
        t62 = t58;
        _builtin_fabsf((float)(short)(t50 - t49));
    }
    return t62;
}

int FUN_0c032be0(int a4, float f4)
{
    int t1;
    int t2;
    float t3;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u15;
    float u16;
    int t22;
    int t24;
    int t25;
    int t26;
    int t38;
    int t40;
    float u17;
    int stk[28];

    t1 = ((int (*)(int))(FUN_0c0e61d4))((*(int *)((a4 + 0x510))));
    *(float *)(((int)stk + 76)) = 10.0f;
    *(float *)(((int)stk + 80)) = (1.0f + 1.0f);
    t2 = ((int (*)(float))(FUN_0c0e61d4))(10.0f);
    *(float *)(((int)stk + 56)) = f4;
    *(float *)(((int)stk + 60)) = 1.0f;
    t3 = FUN_0c036efc((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x28), (0x4B0 + a4), ((int)stk + 4));
    FUN_0c0dcd10((a4 + 0x48), (0x4B0 + a4));
    u5 = *(float *)((a4 + 0x48));
    u6 = *(float *)((a4 + 0x4C));
    u7 = *(float *)((a4 + 0x50));
    u8 = (u6 * u6);
    u8 = u8 + u5 * u5;
    u9 = u8;
    u9 = u9 + u7 * u7;
    if (!((*(float *)(((int)stk + 4))) > _builtin_sqrtf(u9))) {
        *(float *)((a4 + 0x48)) = (((*(float *)((a4 + 0x48))) * (*(float *)(((int)stk + 4)))) / _builtin_sqrtf(u9));
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x4C))) * (*(float *)(((int)stk + 4)))) / _builtin_sqrtf(u9));
        u15 = *(float *)((a4 + 0x50));
        u16 = *(float *)(((int)stk + 4));
        *(float *)((a4 + 0x50)) = ((u15 * u16) / _builtin_sqrtf(u9));
        u17 = ((u15 * u16) / _builtin_sqrtf(u9));
    }
    FUN_0c0dcd10((a4 + 0x30), (a4 + 0x48));
    *(volatile int *)((a4 + 0x4EC));
    t22 = ((int (*)(void))(FUN_0c0e61d4))();
    if ((int)(*(int *)((a4 + 0x4EC))) > 0) {
        t24 = 0x1;
        for (;;) {
            t25 = ((int (*)(void))(FUN_0c0e61d4))();
            t26 = ((int (*)(void))(FUN_0c0e61d4))();
            FUN_0c033c8c((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 0x5, 0.5f);
            t24 = (t24 + 0x1);
            if ((int)t24 > (int)(*(int *)((a4 + 0x4EC)))) {
                break;
            }
        }
    }
    if (!(t3 > 4.0f)) {
        *(unsigned int *)0xC246A38 = 0x0;
        FUN_0c0e19f2();
    }
    t38 = *(int *)((a4 + 0x4EC));
    *(unsigned int *)((a4 + 0x4EC)) = (t38 + 0x1);
    t40 = 0x4EC;
    if ((int)(t38 + 0x1) > (int)0x78) {
        *(unsigned int *)0xC246A38 = 0x0;
        t40 = (FUN_0c0e19f2());
    }
    return t40;
}

void FUN_0c032d90(int a4)
{
    int t1;
    int t5;
    int t7;
    int stk[12];

    if ((*(int *)0xC246A38) != 0) {
    } else {
        t1 = FUN_0c0e1830(0xC032BE0, 0x5EC);
        FUN_0c0e19d0(t1);
        *(unsigned int *)0xC246A38 = 0x1;
        FUN_0c0e61d4();
        *(unsigned int *)((t1 + 0x510)) = (*(int *)((a4 + 0x510)));
        t5 = 0xC246498;
        for (;;) {
            *(float *)((t5 + 0x0)) = 0.0f;
            *(float *)((t5 + 0x4)) = 0.0f;
            *(float *)((t5 + 0x8)) = 0.0f;
            t5 = (t5 + 0xC);
            if ((unsigned int)t5 >= (unsigned int)0xC246A38) {
                break;
            }
        }
        t7 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
        FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)((t1 + 0x30))) - (*(float *)((t7 + 0x30)))), ((*(float *)((t1 + 0x34))) - (*(float *)((t7 + 0x34)))), ((*(float *)((t1 + 0x38))) - (*(float *)((t7 + 0x38)))));
        FUN_0c0dc510(0x0);
        FUN_0c0dccc0();
        FUN_0c0dc890((*(int *)(((int)stk + 4))));
        if (((*(int *)0xC23A258) & 1) == 0) {
            *(float *)(((int)stk + 24)) = 0.5f;
            *(float *)(((int)stk + 28)) = 0.5f;
            *(float *)(((int)stk + 32)) = 1.0f;
            FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
            *(float *)(((0x4B0 + t1) + 0x0)) = (*(float *)(((int)stk + 12)));
            *(float *)(((0x4B4 + t1) + 0x0)) = (*(float *)(((int)stk + 16)));
            *(float *)(((0x4B8 + t1) + 0x0)) = (*(float *)(((int)stk + 20)));
        } else {
            *(float *)(((int)stk + 24)) = (*(float *)0xC032FEC);
            *(float *)(((int)stk + 28)) = 0.5f;
            *(float *)(((int)stk + 32)) = 1.0f;
            FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
            *(float *)(((0x4B0 + t1) + 0x0)) = (*(float *)(((int)stk + 12)));
            *(float *)(((0x4B4 + t1) + 0x0)) = (*(float *)(((int)stk + 16)));
            *(float *)(((0x4B8 + t1) + 0x0)) = (*(float *)(((int)stk + 20)));
        }
        FUN_0c0dc4c0(0x1);
        FUN_0c0dcd10((t1 + 0x48), (0x4B0 + t1));
        FUN_0c0dcd10((t1 + 0x30), (t1 + 0x48));
        *(unsigned int *)((t1 + 0x4EC)) = ((*(int *)((t1 + 0x4EC))) + 0x1);
        FUN_0c0e61d4();
    }
}

int FUN_0c0ca332(int a4)
{
    int t0;
    int t17;
    int stk[8];

    t0 = *(int *)0xC23A258;
    if ((*(int *)0xC31FD84) == t0) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((0xC247CAC + ((*(int *)0xC247CF8) << 2))));
        *(unsigned int *)0xC31FD84 = t0;
        FUN_0c0c9e86(a4);
        FUN_0c0c9f70(0xC20A374, a4);
        if ((*(int *)0xC20A28C) == 0) {
        } else {
            FUN_0c0dc510(0x0);
            FUN_0c0dbda0((a4 + 0x34));
            FUN_0c0dc510(0x0);
            FUN_0c0dc890(0x8000);
            FUN_0c0dcb80(0.125f, 0.125f, 0.0249999985f);
            FUN_0c08498e(((*(float *)((a4 + 0x24))) * 1.0f), ((*(float *)((a4 + 0x28))) * 1.0f), ((*(float *)((a4 + 0x2C))) * 1.0f));
            t17 = 0x0;
            if (((*(int *)0xC23A258) & 1) != 0) {
                t17 = 0x8000;
            }
            FUN_0c0dc950(t17);
            FUN_0c0c47ae(0x3C9);
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            FUN_0c0dc4c0(0x1);
            FUN_0c0dc510(0x0);
            FUN_0c0dccc0();
            FUN_0c0dcc70(0.0f, 0.0f, -0.5f);
            FUN_0c0df4c0(0x1);
            FUN_0c0c4684(0x63);
            FUN_0c0df4c0(0x2);
            FUN_0c0dc4c0(0x1);
            if ((*(int *)0xC31FD3C) == 0) {
                FUN_0c0dc510(0x0);
                FUN_0c0dc890(0x8000);
                FUN_0c0dcb80(200.0f, 200.0f, 200.0f);
                FUN_0c0dcc70(0.0f, 0.0f, -0.099999994f);
                FUN_0c0de000(300.0f);
                FUN_0c0dc1e0(((*(int *)(((int)stk + 4))) + 0x2AC));
                FUN_0c0c4684(0xB4);
                FUN_0c0dc4c0(0x1);
            }
            FUN_0c0dc4c0(0x1);
        }
    }
    FUN_0c0dc0b0(0x3);
    FUN_0c0dccc0();
    FUN_0c0dd2f0((*(int *)0xC247ED8), (*(float *)0xC247EDC), (*(float *)0xC247EE0), (*(float *)0xC247EE4));
    return FUN_0c0dc0b0(0x1);
}

int FUN_0c0a4548(int a4, int a5, int a6, int a7, float f4)
{
    int t62;
    int t3;
    int t21;
    int t36;
    int t37;
    int t45;
    int t38;
    int t40;
    int t49;
    int t50;
    int t58;
    int t51;
    int t53;
    int stk[16];

    t62 = 0x88;
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
    } else {
        t3 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        FUN_0c0dc510(0x0);
        FUN_0c0dbda0((*(int *)((t3 + 0x3E4))));
        FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
        FUN_0c0dc950((*(short *)0xC101216));
        FUN_0c0dc890(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)0xC101214)));
        FUN_0c0dc6e0(((*(short *)0xC101212) + (*(short *)((a4 + 0x60)))));
        FUN_0c0a79fa((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
        FUN_0c0dc4c0(0x1);
        if ((*(int *)((t3 + 0x50C))) != 0) {
            t21 = *(int *)(((((*(int *)((t3 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((*(float *)((t3 + 0x30))) - (*(float *)((t21 + 0x30)))), ((*(float *)((t3 + 0x34))) - (*(float *)((t21 + 0x34)))), ((*(float *)((t3 + 0x38))) - (*(float *)((t21 + 0x38)))));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)((((int)stk + 4) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = (*(int *)((((int)stk + 4) + 0x4)));
        }
        t36 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
        t37 = *(int *)(((((int)stk + 4) + 0x18) + 0x4));
        t45 = 0xC0A468C;
        if (_builtin_fabsf((float)(short)(t37 - t36)) > 256.0f) {
            if (((int)(short)(t37 - t36) < (int)0x8000) && ((int)(short)(t37 - t36) > 0)) {
                t38 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t38 + 0x100);
                if ((int)(short)(t38 + 0x100) > (int)0x1000) {
                    *(unsigned short *)((a4 + 0x62)) = 0x1000;
                }
            } else {
                t40 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t40 - 0x100);
                if ((int)(short)(t40 - 0x100) < (int)0xFFFFF000) {
                    *(unsigned short *)((a4 + 0x62)) = 0xFFFFF000;
                }
            }
            t45 = 0x62;
        }
        t49 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
        t50 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
        t58 = t45;
        if (_builtin_fabsf((float)(short)(t50 - t49)) > 256.0f) {
            if (((int)(short)(t50 - t49) < (int)0x8000) && ((int)(short)(t50 - t49) > 0)) {
                t51 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t51 + 0x100);
                if ((int)(short)(t51 + 0x100) > (int)0xC00) {
                    *(unsigned short *)((a4 + 0x60)) = 0xC00;
                }
            } else {
                t53 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t53 - 0x100);
                if ((int)(short)(t53 - 0x100) < (int)0xFFFFF400) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFF400;
                }
            }
            t58 = 0x60;
        }
        t62 = t58;
        _builtin_fabsf((float)(short)(t50 - t49));
    }
    return t62;
}

int FUN_0c0ae7b0(int a4)
{
    int t1;
    int t36;
    float u90;
    int stk[18];

    FUN_0c0e609c();
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)(((int)stk + 4)) = 0x2072;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x2076;
                }
                if ((((unsigned int)(*(int *)0xC23A258) >> 2) & 1) != 0) {
                    FUN_0c0c0340(((int)stk + 4));
                }
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
                if ((*(float *)0xC0AE9B0) > (*(float *)((a4 + 0x90)))) {
                    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00999999978f);
                }
            }
        } else {
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - ((float)(*(int *)(((0x88 + a4) + 0x0))) * 0.00166666647f));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
            t36 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t36 - 1);
            if ((int)(t36 - 1) <= 0) {
                if ((*(int *)((a4 + 0x88))) != 0) {
                    FUN_0c0e19f2();
                } else {
                    *(float *)((a4 + 0x34)) = 0.0f;
                    *(float *)((a4 + 0x74)) = (*(float *)0xC0AE99C);
                    *(unsigned int *)((a4 + 0x78)) = 0xA6;
                    *(float *)((a4 + 0x90)) = (*(float *)0xC0AE9A0);
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
        if ((*(int *)(((*(int *)0xC24FA6C) + 0x80))) != 3) {
        } else {
            *(unsigned int *)((a4 + 0xA0)) = 0x3C;
            *(unsigned int *)((a4 + 0x88)) = ((*(int *)((a4 + 0x88))) - 1);
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dc6e0(0x1000);
    FUN_0c0dc890((*(short *)((a4 + 0x62))));
    u90 = *(float *)((a4 + 0x74));
    FUN_0c0dcb80(u90, u90, u90);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    return (FUN_0c0dc4c0(0x1));
}

int FUN_0c033530(int a4, int a5, int a6, int a7)
{
    int t0;
    float u9;
    float u12;
    int t19;
    float u20;
    float u21;
    float u24;
    int stk[21];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c0e1830(0xC0333F0, 0x41C);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x1DC)) = ((*(int *)(((int)stk + 4))) - 32768);
    *(unsigned int *)((t0 + 0x1CC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t0 + 0x414)) = 0x0;
    *(float *)((t0 + 0x3EC)) = 0.0272199996f;
    *(unsigned int *)((t0 + 0x400)) = 0x874;
    *(unsigned int *)((t0 + 0x3E8)) = ((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 12))));
    *(volatile int *)(((int)stk + 16));
    FUN_0c0e61d4();
    *(float *)((t0 + 0x3F0)) = 1.5f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0.0f;
    if ((*(int *)((t0 + 0x1CC))) != 0) {
        u9 = *(float *)((t0 + 0x3F0));
        FUN_0c0da2e0();
        u12 = 0.699999988f;
        u12 = u12 + 0.099999994f * (float)(FUN_0c0e5f1c());
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((0.659999967f / (u9 / (1.0f + 1.0f))) * u12);
    } else {
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = 0.0f;
    }
    t19 = *(int *)((t0 + 0x1CC));
    u20 = *(float *)0xC033730;
    u21 = *(float *)((t0 + 0x3F0));
    FUN_0c0da2e0();
    u24 = 0.699999988f;
    u24 = u24 + 0.099999994f * (float)(FUN_0c0e5f1c());
    *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = (((((float)t19 * u20) / (u21 / (1.0f + 1.0f)))) * u24);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = ((*(int *)((t0 + 0x3E8))) + 0x8000);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), (0x220 + t0));
    *(unsigned short *)((t0 + 0x6E)) = (*(short *)((t0 + 0x3E8)));
    FUN_0c0da2e0();
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 1536);
    *(unsigned int *)((t0 + 0x230)) = 0x0;
    FUN_0c0da2e0();
    *(unsigned int *)(((0x234 + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 768);
    *(unsigned int *)((t0 + 0x410)) = 0x0;
    *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) + 0x1);
    return 0x410;
}

int FUN_0c06c01c(int a4, int a5, int a6, int a7)
{
    int t8;
    int t23;
    int t18;
    int t20;
    int t48;
    int t60;
    int t69;
    int t63;
    int t53;
    int t28;
    int stk[10];

    FUN_0c0685a4(a4, a5, a6, a7);
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dc950((*(short *)((a4 + 0x64))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    FUN_0c0dc4c0(0x1);
    t8 = *(int *)((a4 + 0x80));
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 != 2) {
                if (t8 == 3) {
                    *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x98 + a4) + 0x0))));
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 4);
                    t23 = 0x64;
                    if ((int)(*(short *)((a4 + 0x64))) < (int)0xFFFFE93F) {
                        FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                        *(volatile int *)((a4 + 0x98));
                        *(unsigned int *)(((0x98 + a4) + 0x0)) = (-(FUN_0c0e5dc0()));
                        t18 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t18 + 0x1);
                        t20 = 0xA0;
                        if ((int)(t18 + 0x1) >= (int)0x3) {
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                            t20 = 0x80;
                        }
                        t23 = t20;
                    }
                    t28 = t23;
                } else {
                    *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                    t28 = 0x64;
                }
                t53 = t28;
            } else {
                *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x98 + a4) + 0x0))));
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 4);
                t48 = 0x64;
                if ((int)(*(short *)((a4 + 0x64))) < (int)0xFFFFE93F) {
                    FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    FUN_0c0dc5a0();
                    *(float *)(((int)stk + 4)) = 50.0f;
                    *(float *)(((int)stk + 8)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 0.0f;
                    FUN_0c0dcca0((a4 + 0x30));
                    FUN_0c0dc950((*(short *)((a4 + 0x64))));
                    FUN_0c0db470(((int)stk + 4), (((int)stk + 4) + 0xC));
                    FUN_0c08b2d0((((int)stk + 4) + 0xC), 0x4000);
                    FUN_0c0dc4c0(0x1);
                    *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                    *(volatile int *)((a4 + 0x98));
                    *(unsigned int *)(((0x98 + a4) + 0x0)) = (-(FUN_0c0e5dc0()));
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    *(unsigned int *)((a4 + 0xA0)) = 0x0;
                    t48 = 0xA0;
                }
                t53 = t48;
            }
            t63 = t53;
        } else {
            t60 = t8;
            if (((*(int *)0xC23ED88) & 0x200) != 0) {
                *(unsigned int *)((a4 + 0x98)) = 0x0;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                t60 = 0x80;
            }
            t63 = t60;
        }
        t69 = t63;
    } else {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t69 = 0x80;
    }
    return t69;
}

int FUN_0c0dfb08(int a4, int a5, int a6)
{
    int t0;
    int t54;
    int t3;
    int t6;
    int t47;
    int t8;
    int t12;
    int t24;
    int t43;
    int t30;
    int t32;
    int t39;
    int t35;
    int t18;

    t0 = *(int *)0xC948270;
    t54 = 0xC943D78;
    if ((unsigned int)(*(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x0))) > (unsigned int)0x0) {
        t3 = *(int *)0xC943D78;
        *(unsigned int *)((((((t0 + a6) << 2) << 1) + t3) + 0x0)) = ((*(int *)((((((t0 + a6) << 2) << 1) + t3) + 0x0))) - 1);
        t6 = *(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x0));
        t47 = t6;
        if (t6 != 0) {
        } else {
            t8 = *(int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x4));
            if ((*(int *)((((t8 * 0x3C) + (*(int *)0xC947AA8)) + 0x28))) == 0) {
                t12 = kmFreeTexture(((t8 * 0x3C) + (*(int *)0xC947AA8)));
                if (t12 != 0) {
                    *(unsigned int *)0xC94C698 = 0x2;
                    for (;;) {
                    }
                }
            } else {
                t18 = a5;
            }
            *(unsigned int *)((((t8 * 0x3C) + (*(int *)0xC947AA8)) + 0x2C)) = 0x0;
            *(unsigned int *)((((t8 * 0x3C) + (*(int *)0xC947AA8)) + 0x38)) = 0xFFFFFFFF;
            t24 = *(short *)((((t0 + a6) << 1) + (*(int *)0xC94C69C)));
            FUN_0c0d82a0(t8, t18);
            FUN_0c0e0784((short)t24);
            *(unsigned int *)((((((t0 + a6) << 2) << 1) + (*(int *)0xC943D78)) + 0x4)) = 0xFFFFFFFF;
            *(unsigned short *)((((t0 + a6) << 1) + (*(int *)0xC94C69C))) = 0xFFFFFFFF;
            t43 = 0xC20CC50;
            if (((*(int *)0xC20CC50) == 0) && (a5 != 0)) {
                t30 = *(int *)(((a6 << 2) + a5));
                t32 = *(int *)(((((((short)t24 << 2) << 2) << 1) + (*(int *)0xC94C6A8)) + 0xC));
                t39 = 0x7;
                if ((*(int *)0xC94C688) != 0) {
                    t35 = (((unsigned int)t32 >> 27) & 0x7);
                    if (((((unsigned int)t32 >> 27) & 0x7) != 5) && ((((unsigned int)t32 >> 27) & 0x7) != 6)) {
                    } else {
                        t35 = (FUN_0c0d8660(t30));
                    }
                    t39 = t35;
                }
                t43 = t39;
            }
            t47 = t43;
        }
        t54 = t47;
    }
    return t54;
}

int FUN_0c0402b8(int a4)
{
    int t0;
    int t2;
    int t4;
    int t8;
    int t10;
    int t20;
    int t21;
    int t31;
    int t32;
    int t36;
    int t52;
    int t39;
    int t41;
    int t45;
    int t47;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    FUN_0c041f2a(a4);
                    t2 = *(int *)((a4 + 0x2CC));
                    t4 = t2;
                    if (t2 == 1) {
                        *(float *)((a4 + 0x26C)) = 0.0333333313f;
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t4 = 0x4EC;
                    }
                    return t4;
                }
                if (t0 == 4) {
                    t8 = FUN_0c040266(a4);
                    t10 = t8;
                    if (t8 != 0) {
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t10 = 0x4EC;
                    }
                    return t10;
                }
                if (t0 == 5) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
            *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) - (((FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000))) * 1.32089996f) / 27.0f));
            *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) - (((FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000))) * 1.32089996f) / 27.0f));
            FUN_0c041f2a(a4);
            t20 = *(int *)((a4 + 0x2CC));
            t21 = t20;
            if (t20 == 1) {
                *(unsigned int *)((a4 + 0x4EC)) = 0x0;
                t21 = 0x4EC;
            }
            return t21;
        }
        *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) + (((FUN_0c0da410((*(short *)((a4 + 0x6E))))) * 2.9053998f) / 32.0f));
        *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) + (((FUN_0c0d9e90((*(short *)((a4 + 0x6E))))) * 2.9053998f) / 32.0f));
        FUN_0c041f2a(a4);
        t31 = *(int *)((a4 + 0x2CC));
        t32 = t31;
        if (t31 == 1) {
            *(unsigned int *)((a4 + 0x4EC)) = 0x0;
            t32 = 0x4EC;
        }
        return t32;
    }
    FUN_0c041f2a(a4);
    t36 = *(int *)((a4 + 0x2CC));
    t52 = t36;
    if (t36 != 1) {
    } else {
        t39 = *(int *)((a4 + 0x2C4));
        if (t39 != 0x241) {
            t41 = t39;
            if (t39 != 0x243) {
            } else {
                *(unsigned int *)((a4 + 0x4EC)) = 0x2;
                t41 = 0x4EC;
            }
            t47 = t41;
        } else {
            t45 = 0x3;
            if ((int)(*(int *)((a4 + 0x4E0))) < (int)0x4) {
                t45 = 0x1;
            }
            *(unsigned int *)((a4 + 0x4EC)) = t45;
            t47 = 0x4EC;
        }
        t52 = t47;
    }
    return t52;
}

int FUN_0c035458(int a4, int a5)
{
    int t34;
    int t69;
    int t49;
    int t65;
    int t56;
    int t61;
    int stk[28];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 24))) + 0x3E4))) + ((((*(int *)(((int)stk + 20))) << 2) << 2) << 2)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x3C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x3C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x48) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x48) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    FUN_0c0dc4c0(0x1);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x8), ((*(float *)(((((int)stk + 4) + 0x30) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x30) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x30) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x8)))));
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x8)))));
    if (((int)(*(int *)(((int)stk + 4))) > (int)0x1000) && (t34 = *(int *)(((int)stk + 4)), (int)t34 < (int)0x7000)) {
        t69 = (*(int *)(((int)stk + 8)));
    } else {
        if (((int)(*(int *)(((int)stk + 4))) > (int)0x9000) && (t49 = *(int *)(((int)stk + 4)), (int)t49 < (int)0xF000)) {
            t65 = ((*(int *)(((int)stk + 8))) + 0x8000);
        } else {
            if (((int)(*(int *)(((int)stk + 4))) > (int)0x4000) && (t56 = *(int *)(((int)stk + 4)), (int)t56 < (int)0xC000)) {
                t61 = ((*(int *)(((int)stk + 12))) + 0x8000);
            } else {
                t61 = (*(int *)(((int)stk + 12)));
            }
            t65 = t61;
        }
        t69 = t65;
    }
    return t69;
}

int FUN_0c045e54(int a4, int a5, int a6)
{
    int t1;
    int t4;
    int t20;
    int t21;
    int t24;
    int t27;
    int t28;
    int t71;
    int t62;
    float u45;
    float u36;
    int stk[15];

    t1 = *(int *)(((*(int *)((a4 + 0x488))) + 0x4));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((t1 + 0x4)));
    t4 = *(int *)((t1 + 0x8));
    if ((*(int *)((a4 + 0x50C))) == 0) {
        *(float *)((a4 + 0x518)) = (*(float *)((a4 + 0x30)));
        *(float *)((a4 + 0x51C)) = (*(float *)((a4 + 0x34)));
        *(float *)((a4 + 0x520)) = (*(float *)((a4 + 0x38)));
        t71 = 0x520;
    } else {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
            *(float *)((a4 + 0x518)) = (*(float *)((a4 + 0x30)));
            *(float *)((a4 + 0x51C)) = (*(float *)((a4 + 0x34)));
            *(float *)((a4 + 0x520)) = (*(float *)((a4 + 0x38)));
            t62 = 0x520;
        } else {
            t20 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            if ((int)t4 <= 0) {
                t21 = *(int *)((a4 + 0x4F4));
                u45 = ((*(float *)((((*(int *)(((0xC1F79B4 + (((t21 << 1) + t21) << 2)) + 0x8))) + 0x7C) + 0x0))) * 2.0999999f);
            } else {
                if (t4 == 3) {
                    t24 = *(int *)((a4 + 0x4F4));
                    u36 = (*(float *)(((((t4 - 1) << 2) + ((*(int *)((((((t24 << 1) + t24) << 2) + 0xC1F79B4) + 0x8))) + 0x7C)) + 0x0)));
                } else {
                    t27 = *(int *)(((0x4F4 + a4) + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = (0xC1F79B4 + (((t27 << 1) + t27) << 2));
                    t28 = *(int *)(((0xC1F79B4 + (((t27 << 1) + t27) << 2)) + 0x8));
                    *(unsigned int *)(((int)stk + 8)) = t28;
                    u36 = ((*(float *)((((t4 - 1) << 2) + (t28 + 0x7C)))) + (*(float *)(((t28 + 0x7C) + (t4 << 2)))));
                }
                u45 = u36;
            }
            FUN_0c0dc510(0x0);
            FUN_0c0dccc0();
            FUN_0c0dcc70((*(float *)((t20 + 0x30))), (*(float *)((t20 + 0x34))), (*(float *)((t20 + 0x38))));
            FUN_0c0dc890(((*(short *)((t20 + 0x6E))) + (((((*(int *)(((int)stk + 12))) << 8) << 2) << 2) << 1)));
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 32)) = 0.0f;
            *(float *)(((int)stk + 36)) = (-(u45 * 0.5f));
            FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
            *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
            *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
            *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
            FUN_0c0dc4c0(0x1);
            *(unsigned int *)((a4 + 0x524)) = 0x1;
            *(unsigned int *)((a4 + 0x528)) = t4;
            t62 = 0x528;
        }
        t71 = t62;
    }
    return t71;
}

int FUN_0c05d764(float f4)
{
    int t0;
    float u2;
    float u26;
    float u29;
    int stk[15];

    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)0xC23A258;
    u2 = 0.5f;
    if ((0x1 & t0) != 0) {
        u2 = 1.0f;
    }
    *(float *)(((int)stk + 8)) = (u2 * (*(float *)(((int)stk + 4))));
    if (t0 != (*(int *)0xC247B90)) {
        *(unsigned int *)0xC247B90 = t0;
        *(float *)0xC247B8C = ((*(float *)0xC247B8C) - 0.0299999993f);
        if (!((*(float *)0xC247B8C) > 0.0f)) {
            *(float *)0xC247B8C = ((*(float *)0xC247B8C) + 1.0f);
        }
        *(float *)0xC247B88 = ((*(float *)0xC247B88) - 0.0399999991f);
        if (!((*(float *)0xC247B88) > 0.0f)) {
            *(float *)0xC247B88 = ((*(float *)0xC247B88) + 1.0f);
        }
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dcb80(0.099999994f, 0.099999994f, 50.0f);
    FUN_0c0de000(50.0f);
    FUN_0c0cae8e(0x3EC);
    FUN_0c0cacde(0x3EC, 0.199999988f, 0.0f);
    u26 = *(float *)(((int)stk + 8));
    FUN_0c0848bc((u26 * 1.0f), (u26 * 1.0f), (u26 * 1.0f));
    FUN_0c0c47ae(0x3EC);
    u29 = *(float *)(((int)stk + 4));
    FUN_0c0848bc((u29 * 1.0f), (u29 * 1.0f), (u29 * 1.0f));
    FUN_0c0cacde(0x3EC, -0.199999988f, 0.0f);
    FUN_0c0cae8e(0x3EC);
    FUN_0c0dcb80(0.5f, 0.5f, 1.0f);
    FUN_0c0de000(50.0f);
    FUN_0c0cae8e(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (*(float *)0xC247B8C));
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, ((*(float *)0xC247B88) - (*(float *)0xC247B8C)));
    FUN_0c0dcb80(1.00999999f, 1.00999999f, 1.0f);
    FUN_0c0de000(50.0f);
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (-(*(float *)0xC247B88)));
    FUN_0c0cae8e(0x3ED);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    return FUN_0c0dc4c0(0x1);
}
