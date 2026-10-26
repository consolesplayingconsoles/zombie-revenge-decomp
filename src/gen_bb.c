/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0101dc(int, int, int);
int FUN_0c01cdc2(int);
int FUN_0c01e7e8(int, int, int);
int FUN_0c01f18e(int);
float FUN_0c01f1b8(int, int);
int FUN_0c0321d4(int, int);
int FUN_0c03227c(int);
int FUN_0c033b04(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c054c8a(int);
int FUN_0c056588(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c05d764(float);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c084730(int, int);
int FUN_0c08476e(float, float, float);
int FUN_0c08b088(int, int);
int FUN_0c090bf0(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4784(int, float);
int FUN_0c0c5d32(int);
int FUN_0c0c9e86(int);
int FUN_0c0d8660(int);
int FUN_0c0d8730(int, int);
int FUN_0c0d8800(int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db3b0(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db640(int);
int FUN_0c0db840(int);
int FUN_0c0db900(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc100(int);
int FUN_0c0dc1e0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dcd10(int, int);
int FUN_0c0dcd50(int, int, int, float, float);
int FUN_0c0dd050(int);
int FUN_0c0de3c0(int, int);
int FUN_0c0de9c0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19f2(int);
int FUN_0c0e61d4(void);
int FUN_0c05bfac(int a4, int a5, int a6, int a7);
int FUN_0c037acc(int a4);
int FUN_0c056928(int a4);
int FUN_0c05db80(int a4, int a5, int a6);
int FUN_0c069e28(void);
int FUN_0c07af2c(int a4, int a5, int a6, int a7);
int FUN_0c07da7e(int a4);
int FUN_0c029302(int a4);
int FUN_0c0418d4(int a4);
int FUN_0c0e02b8(int a4, int a5, int a6, int a7);
int FUN_0c0bd32e(void);
int FUN_0c0ca538(int a4, int a5, int a6);
void FUN_0c0c5de8(int a4);

int FUN_0c05bfac(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int t15;
    int t46;
    int t48;
    int t53;

    if ((*(int *)((a4 + 0xA4))) != 0) {
        t1 = *(int *)((a4 + 0xA4));
        *(unsigned int *)((a4 + 0xA4)) = (t1 - 1);
        if ((t1 - 1) != 0) {
            return 0xA4;
        }
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x88))) << 2)))) != 4) {
            t6 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
        FUN_0c0dc510(0x0);
        if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) != 0) {
            t15 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0dbda0((((((*(int *)((t15 + 0xBC))) << 8) + 0xC25F840) + (((((*(int *)((a4 + 0x98))) << 2) << 2) << 2) << 1)) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            FUN_0c0dcc70((*(float *)((a4 + 0x54))), (*(float *)((a4 + 0x58))), (*(float *)((a4 + 0x5C))));
            FUN_0c0db840((a4 + 0x30));
            FUN_0c0a6800((*(short *)((t15 + 0x6E))), (a4 + 0x48), 0.299999982f, 0.299999982f, 0.199999988f);
        }
        return FUN_0c0dc4c0(0x1);
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + -0.0699999928f);
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    t46 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t46 + 0x1000);
    FUN_0c0dc6e0((t46 + 0x1000));
    t48 = *(int *)((a4 + 0x9C));
    *(unsigned int *)((a4 + 0x9C)) = (t48 + 0x100);
    FUN_0c0dc890((t48 + 0x100));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    FUN_0c0dc4c0(0x1);
    t53 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t53 - 1);
    if ((int)(t53 - 1) <= 0) {
        return ((int (*)(void))(FUN_0c0e19f2))();
    }
    return 0xA0;
}

int FUN_0c037acc(int a4)
{
    int t1;
    int t4;
    int t7;
    int t16;
    int t25;
    int t34;
    int t52;
    int t18;
    int t27;
    int t36;
    int stk[11];

    if ((int)(*(int *)((a4 + 0x3DC))) >= 0) {
        t1 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x268)) = ((*(float *)(((0x244 + a4) + 0x0))) - (*(float *)((((((t1 << 1) + t1) << 2) + (0x244 + a4)) + 0x0))));
        t4 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x26C)) = ((*(float *)(((0x244 + a4) + 0x4))) - (*(float *)((((((t4 << 1) + t4) << 2) + (0x244 + a4)) + 0x4))));
        t7 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x270)) = ((*(float *)(((0x244 + a4) + 0x8))) - (*(float *)((((((t7 << 1) + t7) << 2) + (0x244 + a4)) + 0x8))));
        *(volatile int *)((a4 + 0x3DC));
        t52 = (((int (*)(int))(FUN_0c0e61d4))((0x244 + a4)));
    } else {
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        t16 = 0x0;
        if ((*(int *)((a4 + 0x238))) != 0) {
            FUN_0c0dcd10((((int)stk + 4) + 0xC), (0x244 + a4));
            FUN_0c0dcd10(((int)stk + 4), (0x370 + a4));
            t16 = 0x1;
        } else {
            t18 = a4;
        }
        t25 = t16;
        if ((*(int *)((a4 + 0x23C))) != 0) {
            FUN_0c0dcd10((((int)stk + 4) + 0xC), ((0x244 + a4) + 0xC));
            FUN_0c0dcd10(((int)stk + 4), ((0x370 + a4) + 0xC));
            t25 = (t16 + 0x1);
        } else {
            t27 = t18;
        }
        t34 = t25;
        if ((*(int *)((a4 + 0x240))) != 0) {
            FUN_0c0dcd10((((int)stk + 4) + 0xC), ((0x244 + a4) + 0x18));
            FUN_0c0dcd10(((int)stk + 4), ((0x370 + a4) + 0x18));
            t34 = (t25 + 0x1);
        } else {
            t36 = t27;
        }
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) / (float)t34);
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) / (float)t34);
        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) / (float)t34);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / (float)t34);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / (float)t34);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / (float)t34);
        *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 16))));
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 20))));
        *(float *)((a4 + 0x270)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 24))));
        t52 = (((int (*)(int, float))(FUN_0c0e61d4))(t36, (float)t34));
    }
    return t52;
}

int FUN_0c056928(int a4)
{
    int t0;
    int t5;
    float u14;
    int t44;
    int t83;
    float u90;
    int t69;
    float u75;
    int t54;

    t0 = *(int *)((a4 + 0x25C));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.0599999987f);
            }
        } else {
            t5 = *(int *)((a4 + 0x260));
            *(unsigned int *)((a4 + 0x260)) = (t5 - 1);
            if ((int)(t5 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x25C)) = ((*(int *)((a4 + 0x25C))) + 0x1);
            }
        }
    } else {
        u14 = *(float *)((a4 + 0x64));
        *(float *)((a4 + 0x64)) = (u14 + -0.0599999987f);
        if (!((u14 + -0.0599999987f) > 0.0f)) {
            *(float *)((a4 + 0x60)) = 0.0f;
            *(float *)((a4 + 0x64)) = 0.0f;
            *(float *)((a4 + 0x68)) = 0.0f;
            *(unsigned int *)((a4 + 0x260)) = 0x1E;
            *(unsigned int *)((a4 + 0x25C)) = ((*(int *)((a4 + 0x25C))) + 0x1);
            FUN_0c08b088((a4 + 0x30), 0x46);
        }
    }
    *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
    *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + 0x800);
    FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
    if ((*(int *)((a4 + 0xA8))) != 0) {
        FUN_0c056588(a4);
        *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
        *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
        *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
    }
    t44 = FUN_0c01f18e(a4);
    if (t44 != 0) {
        *(float *)((a4 + 0x64)) = (-((*(float *)((a4 + 0x64))) * 0.5f));
        *(float *)((a4 + 0x60)) = ((*(float *)((a4 + 0x60))) * 0.699999988f);
        *(float *)((a4 + 0x68)) = ((*(float *)((a4 + 0x68))) * 0.699999988f);
        *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
        if (!((*(float *)((a4 + 0x64))) > (*(float *)((a4 + 0x258))))) {
            if (((int)(*(int *)((a4 + 0x224))) > 0) && (t54 = *(int *)((a4 + 0x21C)), (int)t54 > 0)) {
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0xB;
                *(unsigned int *)((a4 + 0x25C)) = 0x0;
                *(unsigned int *)((a4 + 0x260)) = 0x0;
                *(unsigned short *)((a4 + 0x6C)) = 0x0;
            } else {
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0x7;
                *(unsigned int *)((a4 + 0x25C)) = 0x3C;
                *(unsigned int *)((a4 + 0x260)) = 0x0;
            }
            t69 = 0x34;
            u75 = ((*(float *)((a4 + 0xB4))) + (*(float *)((a4 + 0x258))));
        } else {
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
            t69 = 0x38;
            u75 = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
        }
        t83 = t69;
        u90 = u75;
    } else {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
        t83 = 0x38;
        u90 = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
    }
    *(float *)((a4 + t83)) = u90;
    return t83;
}

int FUN_0c05db80(int a4, int a5, int a6)
{
    int t10;
    int t22;
    int t14;
    int t15;
    int t19;
    int t33;
    int t34;
    int t8;
    int t29;
    float u31;
    float u24;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t8 = a4;
    }
    t10 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t10 - 1);
    if ((int)(t10 - 1) <= 0) {
        FUN_0c0e19f2(t8);
    } else {
        t22 = t8;
        if ((*(int *)((a4 + 0x248))) != 0) {
            t14 = FUN_0c0e1830(0xC05DD5C, 0xB4);
            t15 = ((int (*)(int))(FUN_0c0e61d4))(t14);
            *(unsigned short *)((a4 + 0x62)) = (*(short *)((a4 + 0x6E)));
            *(unsigned short *)((a4 + 0x60)) = (*(short *)((a4 + 0x6C)));
            *(unsigned int *)((a4 + 0x78)) = (*(int *)((a4 + 0x220)));
            *(unsigned int *)((a4 + 0xA0)) = 0x14;
            *(float *)((a4 + 0x90)) = 0.799999952f;
            *(float *)((a4 + 0x94)) = 0.299999982f;
            *(float *)((a4 + 0x54)) = 1.0f;
            *(float *)((a4 + 0x48)) = 0.199999988f;
            *(float *)((a4 + 0x50)) = (1.0f + 1.0f);
            t19 = *(int *)((a4 + 0xA0));
            *(float *)((a4 + 0x4C)) = ((1.0f + 1.0f) / (float)t19);
            *(unsigned int *)((a4 + 0x80)) = 0x0;
            *(unsigned int *)((a4 + 0x248)) = 0x0;
            t22 = a4;
            u24 = ((1.0f + 1.0f) / (float)t19);
        }
        t29 = t22;
        u31 = u24;
    }
    t33 = *(int *)((a4 + 0x23C));
    *(unsigned int *)((a4 + 0x23C)) = (t33 + 0x1);
    if (((t33 + 0x1) - 1) != 0) {
        if (((t33 + 0x1) - 1) != 1) {
            t34 = ((int (*)(int, float))(FUN_0c0e61d4))(t29, u31);
        } else {
            *(float *)((a4 + 0x1E4)) = ((*(float *)((a4 + 0x1E4))) * 5.0f);
        }
    } else {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dcca0((0x25C + a4));
    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
    FUN_0c05d764(1.0f);
    return FUN_0c0dc4c0(0x1);
}

int FUN_0c069e28(void)
{
    int t1;
    float u2;
    float u12;
    int t18;
    float u29;
    float u33;
    float u34;
    float u20;
    float u25;
    float u26;
    float u43;
    int t44;
    int t52;
    int t53;

    t1 = *(int *)0xC23A258;
    if ((*(int *)0xC247C48) == t1) {
    } else {
        *(unsigned int *)0xC247C48 = t1;
        u2 = *(float *)0xC247C44;
        *(float *)0xC247C44 = (u2 + -6.0f);
        if (-100.0f > (u2 + -6.0f)) {
            *(float *)0xC247C44 = ((*(float *)0xC247C44) - -100.0f);
            if ((int)(*(int *)0xC247C3C) < (int)0x100) {
                *(unsigned int *)0xC247C3C = ((*(int *)0xC247C3C) + 0x1);
            }
        }
        u12 = *(float *)0xC247C40;
        *(float *)0xC247C40 = (u12 + 6.0f);
        if (!(3200.0f > (u12 + 6.0f))) {
            *(float *)0xC247C40 = ((*(float *)0xC247C40) - 3200.0f);
        }
        FUN_0c0845e8(0x1);
        FUN_0c0de9c0();
        t18 = *(int *)0xC247C3C;
        if ((int)(t18 - 16) > 0) {
            FUN_0c08476e(0.939999998f, 0.849999964f, 0.519999981f);
        } else {
            u29 = 0.569999993f;
            u33 = 0.589999974f;
            u34 = 0.539999962f;
            if ((int)(t18 - 16) < 0) {
            } else {
                u20 = *(float *)0xC247C44;
                u25 = (*(float *)0xC06A028);
                u25 = u25 + (u20 / -100.0f) * (*(float *)0xC06A02C);
                u26 = 0.569999993f;
                u26 = u26 + (u20 / -100.0f) * (*(float *)0xC06A030);
                u29 = u26;
                u33 = u25;
                u34 = (0.539999962f - ((u20 / -100.0f) * (*(float *)0xC06A024)));
            }
            FUN_0c08476e(u29, u33, u34);
        }
        FUN_0c0845f0(0x1);
        u43 = *(float *)0xC06A048;
        t44 = 0x0;
        for (;;) {
            FUN_0c0845f8(t44, 0x1);
            FUN_0c084610(t44, 0x3);
            FUN_0c0846de(t44, 1.0f, 0.849999964f, (*(float *)0xC06A054), (*(float *)0xC06A050));
            FUN_0c0846a6(t44, 1.0f, 0.0f, 0.0f);
            FUN_0c0846be(t44, u43);
            t52 = FUN_0c084730(t44, 0x2AAA);
            t44 = (t44 + 0x1);
            if ((int)t44 >= (int)0x2) {
                break;
            }
        }
        t53 = t52;
    }
    return t53;
}

int FUN_0c07af2c(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t15;
    int t28;
    int t40;
    float u57;
    float u60;
    float u63;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                } else {
                    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 0.049999997f);
                    t3 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t3 - 1);
                    if ((int)(t3 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0xA0)) = 0x258;
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                    }
                }
            } else {
                *(float *)((a4 + 0x90)) = 1.0f;
                t15 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t15 - 1);
                if ((int)(t15 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0xA0)) = 0x14;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        } else {
            *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.199999988f);
            t28 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t28 - 1);
            if ((int)(t28 - 1) > 0) {
            } else {
                *(unsigned int *)((a4 + 0xA0)) = 0x14;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        t40 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t40 - 1);
        if ((int)(t40 - 1) <= 0) {
            *(float *)((a4 + 0x54)) = 0.0f;
            *(float *)((a4 + 0x58)) = 0.0f;
            *(float *)((a4 + 0x5C)) = 0.0f;
            *(float *)((a4 + 0x90)) = 0.0f;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            *(unsigned int *)((a4 + 0xA0)) = 0x5;
        }
    }
    if ((int)(*(int *)((a4 + 0x80))) > 0) {
        u57 = (*(float *)((a4 + 0x54)));
        u57 = u57 + (1.0f + 1.0f) * (*(float *)(((0x48 + a4) + 0x0)));
        *(float *)((a4 + 0x54)) = u57;
        u60 = (*(float *)((a4 + 0x58)));
        u60 = u60 + (1.0f + 1.0f) * (*(float *)(((0x4C + a4) + 0x0)));
        *(float *)((a4 + 0x58)) = u60;
        u63 = (*(float *)((a4 + 0x5C)));
        u63 = u63 + (1.0f + 1.0f) * (*(float *)(((0x50 + a4) + 0x0)));
        *(float *)((a4 + 0x5C)) = u63;
        *(float *)((a4 + 0x94)) = ((-(((float)((FUN_0c0da2e0()) & 0xF) * (*(float *)0xC07B130)) / (*(float *)0xC07B134))) + 1.0f);
        FUN_0c0dc510(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        FUN_0c0dcca0((a4 + 0x54));
        FUN_0c0dc950((*(short *)((a4 + 0x64))));
        FUN_0c0c4784((*(int *)((a4 + 0x78))), ((*(float *)((a4 + 0x90))) * (*(float *)((a4 + 0x94)))));
        return FUN_0c0dc4c0(0x1);
    }
    return 0x80;
}

int FUN_0c07da7e(int a4)
{
    float t1;
    int t2;
    int t3;
    float u4;
    int t22;
    int t37;
    int t53;
    int t54;
    int t69;
    int t70;
    int t85;
    int t90;
    int t95;

    t1 = FUN_0c0da410((*(int *)((a4 + 0x54))));
    t2 = *(int *)((a4 + 0x30));
    t3 = *(int *)0xC23A258;
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    if (t2 != 4) {
                    } else {
                        u4 = *(float *)((a4 + 0x5C));
                        *(float *)((a4 + 0x5C)) = (u4 - 0.0166666657f);
                        if (!((u4 - 0.0166666657f) > 0.0f)) {
                            FUN_0c0e19f2((t3 & 0x1));
                        }
                    }
                } else {
                    if ((t3 & 0x1) != 0) {
                        t22 = *(int *)((a4 + 0x60));
                        *(unsigned int *)((a4 + 0x60)) = (t22 - 1);
                        if ((int)(t22 - 1) <= (int)0x1) {
                            *(unsigned int *)((a4 + 0x30)) = 0x4;
                        }
                    }
                }
            } else {
                if ((t3 & 0x1) != 0) {
                    t37 = *(int *)((a4 + 0x60));
                    *(unsigned int *)((a4 + 0x60)) = (t37 + 0x1);
                    if ((int)(t37 + 0x1) >= (int)0x5) {
                        *(unsigned int *)((a4 + 0x30)) = 0x3;
                    }
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x4E)) = (int)(t1 * 16383.0f);
            t53 = *(int *)(((0x58 + a4) + 0x0));
            t54 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t54 + t53);
            if ((int)(t54 + t53) >= (int)0x3FFF) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
            }
        }
    } else {
        FUN_0c0db470(0xC23F568, (a4 + 0x34));
        FUN_0c0dcd50((a4 + 0x40), (a4 + 0x34), (a4 + 0x34), t1, (1.0f - t1));
        t69 = *(int *)(((0x58 + a4) + 0x0));
        t70 = *(int *)((a4 + 0x54));
        *(unsigned int *)((a4 + 0x54)) = (t70 + t69);
        if ((int)(t70 + t69) >= (int)0x3FFF) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(unsigned int *)((a4 + 0x54)) = 0x0;
        }
    }
    FUN_0c0de3c0(0x4, 0x1);
    FUN_0c0dc5a0();
    t85 = *(int *)((a4 + 0x60));
    FUN_0c0dcca0((a4 + 0x34));
    FUN_0c0dc890(((*(short *)((a4 + 0x4E))) + 0x3FFF));
    FUN_0c0dc950(0x1555);
    t90 = t85;
    for (;;) {
        FUN_0c0c475c((*(short *)((a4 + 0x52))), (*(float *)((a4 + 0x5C))));
        FUN_0c0dcc70(0.0f, 0.0f, -9.99999975e-05f);
        t95 = (t90 == 0);
        t90 = (t90 - 1);
        if (t95) {
            break;
        }
    }
    FUN_0c0dc4c0(0x1);
    return FUN_0c0de3c0(0x4, 0x5);
}

int FUN_0c029302(int a4)
{
    int t0;
    int t3;
    int t8;
    int t5;
    int t6;
    int t15;
    int t62;
    int t44;
    int t11;

    t0 = *(int *)((a4 + 0x3A4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t3 = 0x0;
                if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
                    t3 = 0x1;
                }
                t11 = t3;
            } else {
                t8 = 0x1;
                if (t0 == 3) {
                    t5 = FUN_0c03227c(a4);
                    t6 = 0x1;
                    if (t5 == 0) {
                        t6 = 0x0;
                    }
                    t8 = t6;
                }
                t11 = t8;
            }
            t44 = t11;
        } else {
            t15 = ((int (*)(int))(0xC0339A0))(a4);
            if ((t15 != 0) && (t15 != 1)) {
                if (t15 != 2) {
                    if (t15 != 3) {
                    } else {
                        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x390)));
                        *(unsigned int *)((a4 + 0x3A4)) = 0x3;
                        FUN_0c0321d4(a4, 0x13);
                    }
                } else {
                    *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x390)));
                    *(unsigned int *)((a4 + 0x3A4)) = 0x3;
                    FUN_0c0321d4(a4, 0x12);
                }
            } else {
                FUN_0c0e61d4();
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
                FUN_0c0dcd10((a4 + 0x48), (0x4B0 + a4));
                FUN_0c0e61d4();
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - -0.5f);
                *(float *)((a4 + 0x4B0)) = 0.0f;
                *(float *)((a4 + 0x4B4)) = 0.0f;
                *(float *)((a4 + 0x4B8)) = 0.0f;
                if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390))))) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x573;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
                }
            }
            t44 = 0x1;
        }
        t62 = t44;
    } else {
        if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            *(unsigned int *)((a4 + 0x2C4)) = 0x572;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            FUN_0c033b04(a4);
            FUN_0c0dcd10((a4 + 0x48), (0x4B0 + a4));
            FUN_0c0e61d4();
            *(float *)((a4 + 0x4B0)) = 0.0f;
            *(float *)((a4 + 0x4B4)) = 0.0f;
            *(float *)((a4 + 0x4B8)) = 0.0f;
            *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
        }
        t62 = 0x1;
    }
    return t62;
}

int FUN_0c0418d4(int a4)
{
    int t0;
    int t8;
    int t5;
    int t11;
    int t35;
    int t13;
    int t29;
    int t14;
    int t15;
    int t18;
    float t55;
    int t60;
    int t76;
    int t64;
    int t41;
    int t3;
    int t23;
    int stk[9];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t8 = t0;
                if (t0 == 3) {
                    *(unsigned int *)((a4 + 0x4E4)) = ((*(int *)((a4 + 0x4E4))) - 1);
                    t5 = 0x4E4;
                    if ((((*(int *)((a4 + 0x2EC))) & 12) == 0) && (t3 = *(int *)((a4 + 0x4E4)), (int)t3 >= 0)) {
                    } else {
                        t5 = (FUN_0c03f4bc(a4));
                    }
                    t8 = t5;
                }
                t41 = t8;
            } else {
                t11 = *(int *)((a4 + 0x4E4));
                *(unsigned int *)((a4 + 0x4E4)) = (t11 - 1);
                t35 = 0x4E4;
                if ((int)(t11 - 1) < 0) {
                    t13 = *(int *)((a4 + 0x2EC));
                    t29 = t13;
                    if ((t13 & 12) != 0) {
                        t14 = *(int *)((a4 + 0x4DC));
                        t15 = *(int *)((a4 + 0x4E0));
                        *(unsigned int *)((a4 + 0x4E0)) = (t15 + 0x1);
                        if ((int)(*(short *)((((((t15 + 0x1) << 2) << 1) + (*(int *)((((((t14 - 76) << 1) + (t14 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                            t18 = *(int *)((a4 + 0x4F0));
                            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t18 << 2) + t18) << 2) + 0xC1F8E44))) + 0x0)));
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x2D4)) = 0x4;
                            *(unsigned int *)((a4 + 0x4E4)) = 0x1E;
                            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                            t23 = 0x4EC;
                        } else {
                            t23 = (FUN_0c041dd0(a4));
                        }
                        t29 = t23;
                    }
                    t35 = t29;
                }
                t41 = t35;
            }
            t64 = t41;
        } else {
            *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.0749999955f);
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) + (-((FUN_0c0d9e90((*(short *)((a4 + 0x6E))))) * 0.166666657f)));
            *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) + (-((FUN_0c0da410((*(short *)((a4 + 0x6E))))) * 0.166666657f)));
            t55 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t60 = 0x34;
            if (t55 > (*(float *)((a4 + 0x34)))) {
                *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                *(float *)((a4 + 0x34)) = t55;
                *(float *)((a4 + 0x4C)) = 0.0f;
                t60 = (FUN_0c041dd0(a4));
            }
            t64 = t60;
        }
        t76 = t64;
    } else {
        FUN_0c041f2a(a4);
        *(float *)((a4 + 0x26C)) = 0.0f;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t76 = 0x4EC;
    }
    return t76;
}

int FUN_0c0e02b8(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t9;
    int t10;
    int t11;
    int t24;
    int t26;
    int t27;
    int t29;
    int t47;
    int t17;
    int stk[17];

    *(unsigned int *)(((int)stk + 60)) = a4;
    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 48)) = a7;
    if ((*(int *)(((int)stk + 56))) == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 52)));
    t2 = *(int *)(((int)stk + 52));
    t3 = *(int *)0xC948270;
    *(unsigned int *)(((int)stk + 40)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 52)) = (t3 + t2);
    *(unsigned int *)(((int)stk + 36)) = (short)(*(short *)((((*(int *)(((int)stk + 40))) << 1) + (*(int *)0xC94C69C))));
    t9 = *(int *)((((*(int *)(((int)stk + 44))) << 2) + (*(int *)(((int)stk + 56)))));
    *(unsigned int *)(((int)stk + 32)) = t9;
    *(unsigned int *)(((int)stk + 24)) = t9;
    t10 = *(int *)(((int)stk + 36));
    t11 = *(int *)0xC94C6A8;
    *(unsigned int *)(((int)stk + 20)) = ((((t10 << 2) << 2) << 1) + t11);
    *(unsigned int *)(((int)stk + 28)) = (((unsigned int)(*(int *)((((((t10 << 2) << 2) << 1) + t11) + 0xC))) >> 27) & 0x7);
    if ((*(int *)0xC94C688) == 0) {
    } else {
        if (((*(int *)(((int)stk + 28))) != 5) && (t17 = *(int *)(((int)stk + 28)), t17 != 6)) {
        } else {
            FUN_0c0d8660((*(int *)(((int)stk + 32))));
            *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 48)));
            if ((int)(*(int *)(((int)stk + 32))) < (int)(*(short *)0xC990E84)) {
                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC990E98);
                t24 = *(int *)(((int)stk + 32));
                *(unsigned int *)(((int)stk + 12)) = ((((t24 << 1) + t24) << 2) + (*(int *)0xC94C688));
                t26 = *(int *)(((int)stk + 32));
                t27 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t27 + ((t26 << 2) << 1));
                if ((*(short *)(((t27 + ((t26 << 2) << 1)) + 0x4))) != 0) {
                    t29 = *(int *)(((int)stk + 16));
                    *(unsigned short *)((t29 + 0x4)) = ((*(short *)((t29 + 0x4))) + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = (*(short *)(((*(int *)(((int)stk + 16))) + 0x0)));
                } else {
                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x2)));
                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = ((int)((*(int *)(((*(int *)(((int)stk + 12))) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x1;
                    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x6)) = (*(short *)(((int)stk + 32)));
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x8)));
                    t47 = FUN_0c0d8730((*(short *)(((*(int *)(((int)stk + 12))) + 0x2))), (*(int *)(((int)stk + 4))));
                    *(unsigned int *)(((int)stk + 8)) = t47;
                    if ((int)t47 >= 0) {
                        *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 8)));
                        FUN_0c0d8800((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))));
                        FUN_0c0db3b0((((*(int *)(((int)stk + 8))) << 2) << 2), (*(int *)(((*(int *)(((int)stk + 12))) + 0x4))), (*(int *)(((int)stk + 4))));
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                    }
                }
                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0xC)) = (((*(int *)(((*(int *)(((int)stk + 20))) + 0xC))) & 0xF81FFFFF) | ((*(int *)(((int)stk + 8))) << 21));
            }
        }
    }
    return (*(int *)(((int)stk + 24)));
}

int FUN_0c0bd32e(void)
{
    int t3;
    int t4;
    int t5;
    int t0;
    int t1;
    int t2;

    t3 = 0xC1527B4;
    t4 = 0xC1527B4;
    t5 = 0xC1527B4;
    for (;;) {
        if ((*(int *)(((t3 + 0x4) + 0x0))) == 0xC15237C) {
            t1 = 0xC15233C;
            *(unsigned int *)(((t3 + 0x4) + 0x0)) = t1;
        } else {
            t2 = 0xC15238C;
            if ((*(int *)(((t3 + 0x4) + 0x0))) == t2) {
                t0 = 0xC15234C;
                *(unsigned int *)(((t3 + 0x4) + 0x0)) = t0;
            } else {
                t1 = 0xC15239C;
                if ((*(int *)(((t3 + 0x4) + 0x0))) == t1) {
                    *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC15235C;
                } else {
                    t0 = 0xC1523AC;
                    if ((*(int *)(((t3 + 0x4) + 0x0))) == t0) {
                        *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC15236C;
                    }
                }
            }
        }
        t2 = 0xC15241C;
        if ((*(int *)(((t4 + 0xC) + 0x0))) == t2) {
            t0 = 0xC1523EC;
            *(unsigned int *)(((t4 + 0xC) + 0x0)) = t0;
        } else {
            t1 = 0xC15242C;
            if ((*(int *)(((t4 + 0xC) + 0x0))) == t1) {
                *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC1523FC;
            } else {
                t0 = 0xC15243C;
                if ((*(int *)(((t4 + 0xC) + 0x0))) == t0) {
                    *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC15240C;
                }
            }
        }
        if ((*(int *)(((t5 + 0x14) + 0x0))) == 0xC1522EC) {
            *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522CC;
        } else {
            t2 = (*(int *)(((t5 + 0x14) + 0x0)));
            if (t2 == 0xC1522BC) {
                *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522DC;
            }
        }
        t3 = (t3 + 0x18);
        t5 = (t5 + 0x18);
        t4 = (t4 + 0x18);
        if ((unsigned int)t3 >= (unsigned int)0xC1531D4) {
            break;
        }
    }
    if ((*(int *)0xC195A18) == 0xC1917E8) {
        *(unsigned int *)0xC195A18 = 0xC191798;
    }
    if ((*(int *)0xC195A1C) == 0xC191888) {
        *(unsigned int *)0xC195A1C = 0xC191838;
    }
    if ((*(int *)0xC195A20) == 0xC191658) {
        *(unsigned int *)0xC195A20 = 0xC191608;
    }
    if ((*(int *)0xC195A24) == 0xC1916F8) {
        *(unsigned int *)0xC195A24 = 0xC1916A8;
    }
    if ((*(int *)0xC195A28) == 0xC191928) {
        *(unsigned int *)0xC195A28 = 0xC1918D8;
    }
    if ((*(int *)0xC195A2C) == 0xC191A18) {
        *(unsigned int *)0xC195A2C = 0xC1919C8;
    }
    *(unsigned short *)0xC0F84CA = 0x505;
    *(unsigned short *)0xC0F84C8 = 0x505;
    *(unsigned short *)0xC0F84C4 = 0x505;
    *(unsigned short *)0xC0F84C2 = 0x505;
    return 0x505;
}

int FUN_0c0ca538(int a4, int a5, int a6)
{
    int t18;
    int t26;
    int t29;
    int t30;
    int t33;
    int t35;
    int t36;
    int t27;
    int t39;
    int stk[28];

    *(unsigned int *)(((((int)stk + 4) + 0x58) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0dc510(0x0);
    FUN_0c0dc1e0(((*(int *)(((int)stk + 12))) + 0x2EC));
    FUN_0c0db640((((int)stk + 4) + 0x18));
    FUN_0c0c9e86(a6);
    FUN_0c0dc510(0x0);
    FUN_0c0e61d4();
    FUN_0c0dbda0((a6 + 0x74));
    FUN_0c0dc100((((int)stk + 4) + 0x18));
    FUN_0c0db900(0x0);
    FUN_0c0db4d0((((int)stk + 4) + 0xC), 0xC31FD88);
    FUN_0c0dd050(0xC31FD88);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc1e0((a6 + 0x74));
    FUN_0c0dc1e0(0xC1E9CDC);
    FUN_0c0dc1e0((0xB4 + a6));
    t18 = *(int *)(((int)stk + 8));
    if (t18 != 0) {
        FUN_0c0844dc((*(int *)((a6 + 0xC))), (*(int *)((a6 + 0x10))), 0x0, 1.0f);
        FUN_0c0844dc((*(int *)((a6 + 0xC))), (*(int *)((a6 + 0x10))), 0x1, 1.0f);
        *(unsigned int *)(((int)stk + 4)) = (t18 + 0x18);
        t26 = (FUN_0c0db640((((int)stk + 4) + 0x18)));
        for (;;) {
            t29 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t29 + 0x4);
            t30 = *(int *)((((t29 + 0x4) - 4) + 0x0));
            if (t30 == 0) {
                t26 = (FUN_0c0dc4c0(0x1));
                return t26;
            }
            if ((t30 & 0x80000000) != 0) {
                t27 = (*(int *)(((int)stk + 4)));
                t27 = (t27 - 4);
                *(unsigned int *)(((int)stk + 4)) = (t27 + 0x50);
            } else {
                if ((t30 & 0x10) != 0) {
                    t33 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t33 + 0x4);
                    t39 = (*(int *)((((t33 + 0x4) - 4) + 0x0)));
                } else {
                    if ((t30 & 0x8) == 0) {
                        break;
                    }
                    t35 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t35 + 0x4);
                    t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
                    t39 = ((t36 << 1) + t36);
                }
                t26 = (FUN_0c0101dc(((int)stk + 4), (((int)stk + 4) + 0x58), t39));
            }
        }
        for (;;) {
        }
    }
    return (FUN_0c0dc4c0(0x1));
}

void FUN_0c0c5de8(int a4)
{
    int t3;
    int t9;
    int t10;
    float u15;
    float u25;
    int t36;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    L_C0C5DE8:;
    R14 = (R4);
    if (((*(short *)((R4 + 0x27E))) != 0)) goto L_C0C5E04;
    goto L_C0C5E00;
    L_C0C5E00:;
    goto L_C0C5F28;
    L_C0C5F28:;
    t3 = *(short *)((R14 + 0x27C));
    *(unsigned short *)((R14 + 0x27C)) = (t3 - 1);
    R0 = (0x27C);
    if (((int)(short)(t3 - 1) > 0)) goto L_C0C5F4E;
    goto L_C0C5F36;
    L_C0C5F36:;
    *(unsigned short *)(((0x27C + R14) + 0x0)) = (((FUN_0c0da2e0()) & 0x1F) + 0x12C);
    *(unsigned short *)((R14 + 0x27E)) = 0x1;
    R0 = (0x27E);
    goto L_C0C5F4E;
    L_C0C5F4E:;
    return;
    L_C0C5E04:;
    t9 = *(int *)((((*(int *)((R14 + 0x220))) << 2) + 0xC0F893C));
    t10 = *(short *)((R14 + 0x27C));
    *(unsigned short *)((R14 + 0x27C)) = (t10 - 1);
    R13 = (t9);
    if (((int)(short)(t10 - 1) > 0)) goto L_C0C5E34;
    goto L_C0C5E1C;
    L_C0C5E1C:;
    *(unsigned short *)(((0x27C + R14) + 0x0)) = (((FUN_0c0da2e0()) & 0x1F) + 0xB4);
    *(unsigned short *)((R14 + 0x27E)) = 0x0;
    goto L_C0C5E34;
    L_C0C5E34:;
    FUN_0c0db470((R14 + 0x30), ((int)stk + 4));
    u15 = *(float *)(((int)stk + 12));
    R0 = (0xC0C5EF4);
    F15 = (u15);
    if ((u15 > -100.0f)) goto L_C0C5E4E;
    goto L_C0C5E4A;
    L_C0C5E4A:;
    goto L_C0C5F4E;
    L_C0C5E4E:;
    R0 = (0xC0C5EF8);
    if ((!(5.0f > F15))) goto L_C0C5F4E;
    goto L_C0C5E56;
    L_C0C5E56:;
    if ((((*(int *)0xC23A258) & 1) == 0)) goto L_C0C5ED2;
    goto L_C0C5E5E;
    L_C0C5E5E:;
    u25 = 298.399994f;
    u25 = u25 + 320.0f * ((*(float *)(((int)stk + 4))) / ((*(float *)0xC247D0C) * F15));
    *(float *)0xC31FCC0 = u25;
    *(float *)0xC31FCC4 = ((-(((((*(float *)(((int)stk + 8))) + 5.0f) / ((*(float *)0xC247D10) * (*(float *)(((int)stk + 12)))))) * 240.0f)) + 240.0f);
    *(float *)0xC31FCC8 = (-(*(float *)(((int)stk + 12))));
    R11 = (0xC0C0340);
    R12 = (0xC1E8760);
    R14 = (0xC31FCBC);
    F15 = (7.19999933f);
    F4 = (240.0f);
    goto L_C0C5ECA;
    L_C0C5ECA:;
    t36 = *(signed char *)((R13 + 0x0));
    R13 = ((R13 + 0x1));
    R4 = (t36);
    if (((signed char)t36 != 0)) goto L_C0C5EB0;
    goto L_C0C5ED2;
    L_C0C5ED2:;
    R0 = ((FUN_0c0c5d32(((int)stk + 4))));
    goto L_C0C5F4E;
    L_C0C5EB0:;
    if (((signed char)R4 == 32)) goto L_C0C5EC2;
    goto L_C0C5EB6;
    L_C0C5EB6:;
    *(unsigned int *)((R14 + 0x0)) = (*(short *)((R12 + ((signed char)R4 << 1))));
    FUN_0c0c0340(0xC31FCBC, F4);
    goto L_C0C5EC2;
    L_C0C5EC2:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    goto L_C0C5ECA;
}
