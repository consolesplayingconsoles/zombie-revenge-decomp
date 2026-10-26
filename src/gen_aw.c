/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0d1942(int, int, int, int, int);
int FUN_0c0d6592(int, int);
float FUN_0c0d7178(int, int, float);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dcd10(int, int);
float FUN_0c0dcda0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e61d4(void);
int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c09bdec(int a4, int a5, int a6, int a7);

int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4)
{
    int t11;
    float t14;
    float u16;
    float u18;
    float u19;
    int t29;
    int t31;
    int t32;
    int t33;
    float t34;
    float u36;
    float u37;
    int t41;
    int t58;
    int stk[24];

    *(unsigned int *)((a4 + 0x74)) = a5;
    if (a5 == 2) {
        *(unsigned int *)((a4 + 0x78)) = (*(int *)((a4 + 0xF4)));
    } else {
        if (a5 == 3) {
            *(unsigned int *)((a4 + 0x78)) = (*(int *)((a4 + 0x11C)));
        } else {
            *(unsigned int *)((a4 + 0x78)) = 0xFFFFFFFF;
        }
    }
    if (a5 != 4) {
    } else {
        if ((*(int *)((a4 + 0x30))) != 8) {
            t11 = *(int *)((a4 + 0x6C));
            FUN_0c0d1942(a4, a5, a6, a7, (0x14C + a4));
            t14 = FUN_0c0dcda0(((*(int *)((a4 + 0x6C))) + 0x30), (0x14C + a4));
            u16 = *(float *)0xC0D65F4;
            u18 = u16;
            u18 = u18 + u16 * ((-(*(float *)((((((*(int *)((a4 + 0x8))) << 2) << 2) << 1) + 0xC943530)))) + 1.0f);
            u19 = u18;
            if (!(t14 > u18)) {
                u19 = t14;
            }
            FUN_0c0a68ec((((int)stk + 8) + 0xC), ((*(float *)((t11 + 0x30))) - (*(float *)((a4 + 0x14C)))), ((*(float *)((t11 + 0x38))) - (*(float *)((a4 + 0x154)))));
            FUN_0c0a6800((*(int *)(((int)stk + 20))), (((int)stk + 8) + 0x1C), 0.0f, 0.0f, (-u19));
            FUN_0c0dcd10((0x14C + a4), (((int)stk + 8) + 0x1C));
        } else {
            t29 = *(int *)((a4 + 0x6C));
            *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x70)));
            t31 = *(int *)((a4 + 0xC0));
            *(unsigned int *)(((int)stk + 12)) = 0x8;
            t32 = 0x0;
            t33 = (t31 - 16384);
            for (;;) {
                t34 = FUN_0c0d7178((t29 + 0x30), t33, f4);
                if ((t34 - 40.0f) > 22.0f) {
                    u36 = 22.0f;
                    u36 = u36 + (FUN_0c0da300()) * ((t34 - 40.0f) + -22.0f);
                    u37 = u36;
                    if (u36 > 35.0f) {
                        u37 = 35.0f;
                    }
                    FUN_0c0a6800(t33, (((int)stk + 8) + 0x1C), 0.0f, 0.0f, (-u37));
                    FUN_0c0dcd10((((int)stk + 8) + 0x1C), (t29 + 0x30));
                    t41 = *(int *)(((int)stk + 16));
                    FUN_0c0a68ec(((int)stk + 8), ((*(float *)(((int)stk + 36))) - (*(float *)((t41 + 0x30)))), ((*(float *)(((int)stk + 44))) - (*(float *)((t41 + 0x38)))));
                    if ((int)(*(int *)(((int)stk + 8))) > (int)t32) {
                        FUN_0c0e61d4();
                        t32 = (*(int *)(((int)stk + 8)));
                    }
                }
                t58 = *(int *)(((int)stk + 12));
                t33 = (t33 + 0x1000);
                *(unsigned int *)(((int)stk + 12)) = (t58 - 1);
                if ((t58 - 1) == 0) {
                    break;
                }
            }
            if ((int)t32 > (int)0x11C7) {
                FUN_0c0e61d4();
            } else {
                FUN_0c0d1942(0x0, 0x0, 0x0, 0x0, (0x14C + a4));
            }
        }
    }
    return (FUN_0c0d6592(a4, a5));
}

int FUN_0c09bdec(int a4, int a5, int a6, int a7)
{
    int t1;
    int t13;
    int t16;
    int t17;
    float u20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t26;
    float u27;
    float u33;
    float u34;
    float u36;
    float u39;
    float u40;
    float u53;
    int t9;
    int stk[15];

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    if ((*(int *)0xC24970C) == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t9 = a4;
    }
    FUN_0c0685a4(t9);
    FUN_0c0dc510(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x7;
    for (;;) {
        t13 = *(int *)((a4 + 0x48));
        *(unsigned int *)((a4 + 0x48)) = (t13 + 0x1);
        if ((unsigned int)(*(int *)((a4 + 0x48))) >= (unsigned int)0x80) {
            *(unsigned int *)((a4 + 0x48)) = 0x0;
        }
        t16 = FUN_0c0da2e0();
        t17 = FUN_0c0da2e0();
        *(unsigned int *)((((t13 * 0x2C) + (a4 + 0x4C)) + 0x4)) = (0xC10C3B8 + (((((t17 & 0x7) << 1) + (t17 & 0x7)) << 2) << 1));
        *(float *)((((t13 * 0x2C) + (a4 + 0x4C)) + 0x24)) = ((float)(t16 & 0xFFF) * 0.00024420023f);
        *(unsigned int *)((((t13 * 0x2C) + (a4 + 0x4C)) + 0x0)) = 0xC;
        *(float *)((((t13 * 0x2C) + (a4 + 0x4C)) + 0x28)) = 1.4167999f;
        u20 = (*(float *)(((0xC10C3B8 + (((((t17 & 0x7) << 1) + (t17 & 0x7)) << 2) << 1)) + 0xC)));
        u20 = u20 + ((float)(t16 & 0xFFF) * 0.00024420023f) * (*(float *)(((0xC10C3B8 + (((((t17 & 0x7) << 1) + (t17 & 0x7)) << 2) << 1)) + 0x10)));
        *(float *)((((t13 * 0x2C) + (a4 + 0x4C)) + 0x14)) = u20;
        t21 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t21 - 1);
        if ((t21 - 1) == 0) {
            break;
        }
    }
    FUN_0c0dc4c0(0x1);
    t23 = 0xC09BF74;
    t24 = 0x0;
    t25 = a4;
    t26 = (a4 + 0x4C);
    u27 = 0.00024420023f;
    for (;;) {
        if ((*(int *)((t26 + 0x0))) != 0) {
            t23 = 0x28;
            *(unsigned int *)((t26 + 0x0)) = ((*(int *)((t26 + 0x0))) - 1);
            *(float *)((t26 + t23)) = ((*(float *)((t26 + t23))) + 0.135299996f);
            t23 = (FUN_0c0dc510(0x0));
            t23 = 0x14;
            t25 = (*(int *)((t26 + 0x4)));
            u33 = *(float *)((t26 + t23));
            t23 = 0x28;
            u34 = *(float *)((t26 + t23));
            t23 = 0x278;
            u36 = *(float *)((t1 + t23));
            t23 = 0x3E4;
            u27 = (u34 * u33);
            u27 = (u27 * u36);
            t23 = (FUN_0c0dbda0((((((*(int *)((t25 + 0x0))) << 2) << 2) << 2) + (*(int *)((t1 + t23))))));
            t23 = 0x4;
            u39 = *(float *)((t25 + t23));
            t23 = 0x24;
            u40 = *(float *)((t26 + t23));
            t23 = 0x8;
            t23 = (FUN_0c0dcc70(0.0f, (((u40 * u39)) * (*(float *)((t25 + t23)))), 0.0f));
            t23 = (FUN_0c0dccf0());
            t23 = 0x3CE;
            t23 = (FUN_0c0dc890((*(short *)(((*(int *)(((int)stk + 8))) + t23)))));
            t23 = 0x3CC;
            t23 = (FUN_0c0dc6e0((*(short *)(((*(int *)(((int)stk + 8))) + t23)))));
            t23 = (FUN_0c0dcca0(0xC10C3AC));
            t23 = (FUN_0c0dcb80(u27, u27, 1.0f));
            t23 = 0xC09C074;
            u53 = *(float *)((t23 + 0x0));
            t23 = 0xC09C078;
            t23 = (FUN_0c0848bc((*(float *)((t23 + 0x0))), u53, 0.549999952f));
            t23 = (FUN_0c0de000(u27));
            t23 = (FUN_0c0c47ae(0x291));
            t23 = (FUN_0c0dc4c0(0x1));
        }
        t24 = (t24 + 0x1);
        t26 = (t26 + 0x2C);
        if ((unsigned int)t24 < (unsigned int)0x80) continue;
        break;
    }
    return FUN_0c0849da();
}
