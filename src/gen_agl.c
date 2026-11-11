/* Straight-line functions with calls and guards (batch gen_agl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o238_ushort { char p[0x238]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o270_float { char p[0x270]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o310_int { char p[0x310]; int v; };
struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34C_int { char p[0x34C]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o45C_float { char p[0x45C]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C0_int { char p[0x4C0]; int v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4CC_int { char p[0x4CC]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_int { char p[0x500]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o55C_int { char p[0x55C]; int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o56C_int { char p[0x56C]; int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o90_float { char p[0x90]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_float { char p[0xA4]; float v; };
struct oA8_float { char p[0xA8]; float v; };
struct oAC_float { char p[0xAC]; float v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC0_float { char p[0xC0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE8_ushort { char p[0xE8]; unsigned short v; };
int FUN_0c02120e(void);
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c049b80(int);
int FUN_0c049c5c(int, int, int, int, float, float, float);
int FUN_0c058f7c(void);
int FUN_0c058fa0(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(int, int, int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b9b7a(void);
int FUN_0c0bbbf4(int);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0ce10c(void);
int FUN_0c0cee9e(void);
int FUN_0c0cf386(void);
int FUN_0c0cf46c(int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0cf98e(int, int);
int FUN_0c0d18d8(void);
int FUN_0c0d19b8(int, int);
int FUN_0c0d19d4(void);
int FUN_0c0d1b00(void);
int FUN_0c0d2b30(void);
int FUN_0c0d41c6(void);
int FUN_0c0d6c52(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int strlen(int);
int FUN_0c0d0276(int a4);
int FUN_0c06ede8(int a4, int a5, int a6, int a7);
int FUN_0c0d22d0(int a4);
int FUN_0c0b97d4(int a4, int a5, int a6, int a7);
int FUN_0c0987a4(int a4, int a5, int a6, int a7);
int FUN_0c0d27a0(int a4);
int FUN_0c08eabc(int a4, int a5, int a6, int a7);
float FUN_0c0d5d94(void);
int FUN_0c03bd28(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);

int FUN_0c0d0276(int a4)
{
    int stk[17];
    register int t0;
    register int t4;
    register int t5;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t23;
    register int t33;
    register int t34;
    register int t35;
    register float u37;
    register float u40;
    register float u42;
    register float u43;
    register int t49;
    register float u54;
    register int t55;
    register int t57;
    register float u74;
    register float u75;
    register float u76;
    register int t137;
    register int t94;
    register int t100;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (((struct o4_int *)0xC23A1A8)->v);
    *(unsigned int *)(((int)stk + 8)) = (((t0 * 0x2C) + 0xC522B04) + 0x4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1E9FA4);
    t4 = 0xC20BD48;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)0xC20BD5C) {
            break;
        }
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        FUN_0c0c465c(t5);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1E9FB0);
    FUN_0c0c465c(0x12F5);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1E9FBC);
    FUN_0c0c465c(0x12B2);
    nlPopMatrix(0x1);
    FUN_0c0c465c((*(int *)(((((((struct o4_int *)0xC23A1A8)->v)) << 2) + 0xC20BD5C))));
    t18 = *(int *)(((int)stk + 8));
    t19 = (((struct o8_int *)0xC23A1A8)->v);
    t21 = *(signed char *)(((((t19 << 2) << 1) + t18) + 0x1));
    t22 = *(signed char *)(((((t19 << 2) << 1) + t18) + 0x2));
    t23 = (int)((int)(t21 * 0x64) / (int)t22);
    (((struct o0_uchar *)0xC9433E6)->v) = (((int)((int)t21 / (int)0xA)) + 0x30);
    (((struct o1_uchar *)0xC9433E6)->v) = (((int)((int)t21 % (int)0xA)) + 0x30);
    (((struct o2_uchar *)0xC9433E6)->v) = 0x2F;
    (((struct o3_uchar *)0xC9433E6)->v) = (((int)((int)t22 / (int)0xA)) + 0x30);
    (((struct o4_uchar *)0xC9433E6)->v) = (((int)((int)t22 % (int)0xA)) + 0x30);
    (((struct o5_uchar *)0xC9433E6)->v) = 0x20;
    (((struct o6_uchar *)0xC9433E6)->v) = 0x3C;
    (((struct o7_uchar *)0xC9433E6)->v) = (((int)((int)t23 / (int)0x64)) + 0x30);
    (((struct o8_uchar *)0xC9433E6)->v) = (((int)((int)((int)((int)t23 % (int)0x64)) / (int)0xA)) + 0x30);
    (((struct o9_uchar *)0xC9433E6)->v) = (((int)((int)t23 % (int)0xA)) + 0x30);
    (((struct oA_uchar *)0xC9433E6)->v) = 0x3B;
    (((struct oB_uchar *)0xC9433E6)->v) = 0x3E;
    (((struct oC_uchar *)0xC9433E6)->v) = 0x0;
    FUN_0c0cf6e4(0x0, 0xC9433E6, 350.0f, 129.0f, 0.899999976f, 1.0f, 1.0f);
    *(float *)(((int)stk + 16)) = 180.0f;
    *(unsigned int *)(((int)stk + 12)) = 0x27;
    t33 = *(int *)(((int)stk + 0));
    t34 = 0xC0D0434;
    t35 = 0x0;
    for (;;) {
        if ((int)t35 < (int)0x5) {
            if (t35 == (*(short *)((((t0 * 0x2C) + 0xC522B04) + 0x0)))) {
                t34 = 0xC0D0584;
                u37 = *(float *)((t34 + 0x0));
                t34 = 0x2C;
                *(float *)(((t33 + 0x4C) + t34)) = u37;
            }
            t34 = 0xC0D0588;
            u40 = *(float *)((t34 + 0x0));
            t34 = 0x4;
            *(float *)(((t33 + 0x4C) + t34)) = u40;
            t34 = 0x10;
            u42 = *(float *)((((int)stk + 0) + t34));
            t34 = 0xC0D058C;
            u43 = *(float *)((t34 + 0x0));
            t34 = 0x8;
            *(float *)(((t33 + 0x4C) + t34)) = ((((float)((t35 + 0x1) * (*(int *)(((int)stk + 12))))) + u42) + u43);
            t34 = 0x4;
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) + 0.0f);
            t34 = 0x8;
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) + 0.0f);
            t34 = 0x4;
            *(unsigned int *)(((int)stk + 4)) = (0xC20BDAB + t35);
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) - (float)(*(signed char *)(((0xC20BDAB + t35) + 0x0))));
            t34 = 0xC20BDA6;
            t49 = *(signed char *)((t35 + t34));
            t34 = 0xC11231A;
            (((struct o4C_uint *)(t33))->v) = (*(short *)(((t49 << 1) + t34)));
            t34 = (FUN_0c0c0340((t33 + 0x4C)));
            t34 = 0x4;
            u54 = *(float *)(((t33 + 0x4C) + t34));
            t55 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x0));
            *(float *)(((t33 + 0x4C) + t34)) = (u54 + (float)t55);
            *(float *)(((t33 + 0x4C) + t34)) = ((u54 + (float)t55) + 160.0f);
            t57 = *(int *)(((int)stk + 8));
            t34 = 0xC1122FE;
            *(unsigned int *)(((int)stk + 4)) = (((t35 << 2) << 1) + t57);
            (((struct o4C_uint *)(t33))->v) = (*(short *)(((((*(signed char *)(((((t35 << 2) << 1) + t57) + 0x0))) >> 1) << 1) + t34)));
            t34 = (FUN_0c0c0340((t33 + 0x4C)));
            t34 = 0x4;
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) - 0.0f);
            t34 = 0x8;
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) - 0.0f);
            t34 = 0x4;
            *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) + 112.0f);
            t34 = ((((struct o0_int *)0xC23A1A8)->v));
            if ((t34 & 32) != 0) {
                t34 = 0x4;
                *(float *)(((t33 + 0x4C) + t34)) = ((*(float *)(((t33 + 0x4C) + t34))) - 8.0f);
            }
            t34 = (FUN_0c0cf98e(0xC9433F3, (*(int *)(((*(int *)(((int)stk + 4))) + 0x4)))));
            t34 = 0x2C;
            u74 = *(float *)(((t33 + 0x4C) + t34));
            t34 = 0x14;
            u75 = *(float *)(((t33 + 0x4C) + t34));
            t34 = 0x8;
            u76 = *(float *)(((t33 + 0x4C) + t34));
            t34 = 0x4;
            t34 = (FUN_0c0cf6e4(0x0, 0xC9433F3, (*(float *)(((t33 + 0x4C) + t34))), u76, 0.899999976f, u75, u74));
            if (t35 == ((((struct o8_int *)0xC23A1A8)->v))) {
                t34 = (nlPushMatrix(0x0));
                t34 = (FUN_0c0dcc70(0.0f, (-((float)t35 * 0.5f)), 0.0f));
                t34 = (FUN_0c0c465c(0x12B3));
                t34 = (nlPopMatrix(0x1));
            }
            t35 = (t35 + 0x1);
            continue;
        }
        break;
    }
    (((struct o2C_float *)((t33 + 0x4C)))->v) = 1.0f;
    t137 = 0x2C;
    if ((*(int *)(((*(int *)(((int)stk + 0))) + 0x38))) == 0) {
        if (((*(int *)0xC2498F4) & 0x1010) != 0) {
            t94 = (((struct o8_int *)0xC23A1A8)->v);
            (((struct o8_uint *)0xC23A1A8)->v) = (t94 - 1);
            if ((int)(t94 - 1) < 0) {
                (((struct o8_uint *)0xC23A1A8)->v) = ((*(short *)((((t0 * 0x2C) + 0xC522B04) + 0x0))) - 1);
            }
            FUN_0c0cc3f8(0x29A9, 0x0, 0x0, 0x0);
        } else {
            if (((*(int *)0xC2498F4) & 0x2020) != 0) {
                t100 = (((struct o8_int *)0xC23A1A8)->v);
                (((struct o8_uint *)0xC23A1A8)->v) = (t100 + 0x1);
                if ((int)(t100 + 0x1) > (int)((*(short *)((((t0 * 0x2C) + 0xC522B04) + 0x0))) - 1)) {
                    (((struct o8_uint *)0xC23A1A8)->v) = 0x0;
                }
                FUN_0c0cc3f8(0x29A9, 0x0, 0x0, 0x0);
            }
        }
        if (((*(int *)0xC2498F4) & 2) != 0) {
            *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = 0x0;
        } else {
            if (((*(int *)0xC2498F4) & 0x604) != 0) {
                *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x38)) = 0x1;
                *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x30)) = 0x69;
                FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0);
            }
        }
        t137 = (nlPopMatrix(0x1));
    }
    return t137;
}

int FUN_0c06ede8(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t12;
    register int t15;
    register int t17;
    register float u19;
    register float u23;
    register float u24;
    register int t47;
    register int t48;
    register float u57;
    register float t65;
    register float u68;
    register int t71;
    register int t74;
    register int t76;
    register int t79;
    register float u86;
    register float u94;
    register float u100;
    register int t121;
    register int t124;
    register float u133;
    register float u141;
    register float u149;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4(((((struct o84_int *)(a4))->v)));
        FUN_0c0e19f2();
    }
    t12 = *(int *)0xC23ED9C;
    if (t12 == 24) {
        return t12;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct oC4_int *)(a4))->v))))(a4, a5, a6, a7, R1004, *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    if (t15 == 0) {
    } else {
        t17 = (int)((int)(FUN_0c0da2e0()) % (int)0x64);
        if (((((struct o78_float *)(a4))->v)) > (float)t17) {
            u19 = (((struct o7C_float *)(a4))->v);
            u23 = (((struct o68_float *)(a4))->v);
            u24 = (((((((struct o80_float *)(a4))->v)) - u19) * (float)((int)((int)(FUN_0c0da2e0()) % (int)0x64))) / 99.0f);
            if ((u19 + u24) > u23) {
                if (((((struct oC8_int *)(a4))->v)) != 0) {
                    FUN_0c0cc3f8(0xB2BA9, 0x0, 0x0, 0x0);
                }
                (((struct o68_float *)(a4))->v) = (u19 + u24);
            }
        }
        (((struct o34_float *)(a4))->v) = 0.0f;
        t47 = 0x0;
        t48 = (a4 + 0x38);
        for (;;) {
            *(int *)((int)stk + 0) = (a4 + 0x34);
            t47 = (t47 + 0x1);
            u57 = ((((struct o34_float *)(a4))->v));
            u57 = u57 + (FUN_0c0d9e90(((*(int *)((t48 + 0x8))) + ((int)((int)((((((*(int *)((a4 + 0x30))) << 8) << 2) << 2) << 2) << 1) / (int)(*(int *)((t48 + 0xC)))))))) * (*(float *)((t48 + 0x0)));
            (((struct o34_float *)(a4))->v) = u57;
            *(float *)((t48 + 0x0)) = ((*(float *)((t48 + 0x0))) * ((((struct o4_float *)(t48))->v)));
            t48 = (t48 + 0x10);
            if ((int)t47 >= (int)0x3) {
                break;
            }
        }
        t65 = FUN_0c0d9e90(((*(int *)(((a4 + 0x68) + 0x8))) + ((int)((int)((((((*(int *)((a4 + 0x30))) << 8) << 2) << 2) << 2) << 1) / (int)(*(int *)(((a4 + 0x68) + 0xC)))))));
        u68 = (((struct o68_float *)(a4))->v);
        (((struct o68_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * ((((struct o4_float *)((a4 + 0x68)))->v)));
        if (_builtin_fabsf((u68 * t65)) > _builtin_fabsf(((((struct o34_float *)(a4))->v)))) {
            (((struct o34_float *)(a4))->v) = (u68 * t65);
        }
        t71 = R1004;
        (((struct o270_float *)(t71))->v) = (((((struct o270_float *)(t71))->v)) + ((((struct o34_float *)(a4))->v)));
        t74 = (((struct o90_int *)(a4))->v);
        if (t74 != 0) {
            if (t74 == 1) {
                t76 = (int)((int)(FUN_0c0da2e0()) % (int)0x3E8);
                if ((((((struct o8C_float *)(a4))->v)) * 1000.0f) > (float)t76) {
                    t79 = FUN_0c0e19aa(0xC06ECE4, 0xB4, ((((struct o84_int *)(a4))->v)));
                    FUN_0c0e19d0(t79);
                    u86 = ((((struct oB4_float *)(a4))->v));
                    u86 = u86 + ((((struct oC0_float *)(a4))->v)) * (((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) - 500) / 1000.0f));
                    (((struct o30_float *)(t79))->v) = u86;
                    u94 = ((((struct oA0_float *)(a4))->v));
                    u94 = u94 + ((((((struct oAC_float *)(a4))->v)) - ((((struct oA0_float *)(a4))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
                    (((struct o34_float *)(t79))->v) = u94;
                    u100 = ((((struct oB4_float *)(a4))->v));
                    u100 = u100 + ((((struct oC0_float *)(a4))->v)) * (((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) - 500) / 1000.0f));
                    (((struct o38_float *)(t79))->v) = u100;
                    (((struct o90_float *)(t79))->v) = ((((struct o94_float *)(a4))->v));
                    (((struct o94_float *)(t79))->v) = ((((struct o98_float *)(a4))->v));
                    (((struct o78_uint *)(t79))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)0x3)) + 0xD66);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB4 + a4)) = *(struct mv3 *)((t79 + 0x30)); }
                } else {
                    (((struct o90_uint *)(a4))->v) = 0x0;
                }
            }
        } else {
            t121 = (int)((int)(FUN_0c0da2e0()) % (int)0x3E8);
            if (!((((((struct o88_float *)(a4))->v)) * 1000.0f) > (float)t121)) {
            } else {
                t124 = FUN_0c0e19aa(0xC06ECE4, 0xB4, ((((struct o84_int *)(a4))->v)));
                FUN_0c0e19d0(t124);
                u133 = ((((struct o9C_float *)(a4))->v));
                u133 = u133 + ((((((struct oA8_float *)(a4))->v)) - ((((struct o9C_float *)(a4))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
                (((struct o30_float *)(t124))->v) = u133;
                u141 = ((((struct oA0_float *)(a4))->v));
                u141 = u141 + ((((((struct oAC_float *)(a4))->v)) - ((((struct oA0_float *)(a4))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
                (((struct o34_float *)(t124))->v) = u141;
                u149 = ((((struct oA4_float *)(a4))->v));
                u149 = u149 + ((((((struct oB0_float *)(a4))->v)) - ((((struct oA4_float *)(a4))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
                (((struct o38_float *)(t124))->v) = u149;
                (((struct o90_float *)(t124))->v) = ((((struct o94_float *)(a4))->v));
                (((struct o94_float *)(t124))->v) = ((((struct o98_float *)(a4))->v));
                (((struct o78_uint *)(t124))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)0x3)) + 0xD66);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB4 + a4)) = *(struct mv3 *)((t124 + 0x30)); }
                (((struct o90_uint *)(a4))->v) = 0x1;
            }
        }
    }
    return FUN_0c0e16c0(((((struct o84_int *)(a4))->v)));
}

int FUN_0c0d22d0(int a4)
{
    int stk[11];
    register int t0;
    register int t1;
    register float u4;
    register float u7;
    int t11;
    register int t17;
    register int t18;
    register float u20;
    register int t54;
    register int t23;
    register float t25;
    register float u28;
    register float u32;
    register int t42;
    register int t43;
    register float u46;
    register float u50;
    register int t52;
    register int t67;
    register int t154;
    register int t97;
    register int t107;
    register int t103;
    register int t129;
    register int t126;
    register int t35;
    register int t36;
    int R1000;
    float R1004;
    int R1008;
    float R1012;
    float R1016;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(float *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);

    t0 = *(int *)0xC23A1BC;
    R1008 = (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0);
    t1 = strlen(0xC20C488);
    u4 = (float)t1;
    if ((int)t1 < 0) {
        u4 = ((float)t1 + 4.2949673e+09f);
    }
    u7 = ((u4 * 18.0f) / (1.0f + 1.0f));
    u7 = -u7;
    R1000 = (int)(u7 + 320.0f);
    FUN_0c0cf6e4(0x1, 0xC20C488, (float)(int)(u7 + 320.0f), 34.0f, 1.0f, 1.0f, 1.0f);
    t11 = *(int *)(((R1008) + 0x0));
    if ((*(int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0))) != 0) {
        *(unsigned int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0)) = ((*(int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0))) - 1);
    }
    t17 = *(int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0));
    t18 = *(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0));
    R1004 = ((float)t17 / (float)t18);
    R1000 = (((((t17 == 0)) ? 1 : 0) ^ 0x1) + 0x1);
    u20 = 16384.0f;
    u20 = u20 + 16384.0f * (((float)t17 / (float)t18));
    R1008 = (int)u20;
    R1012 = (1.0f - (R1004));
    t54 = 0xC;
    if ((int)(R1000) > 0) {
        t23 = 0x0;
        for (;;) {
            t25 = FUN_0c0da410((R1008));
            if (t23 == 0) {
                t35 = (((struct o68_int *)(a4))->v);
                u28 = (((-t25) + 1.0f) * (float)(*(int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0))));
                R1016 = (R1012);
                t36 = (int)(u28 * 480.0f);
            } else {
                t35 = (((struct o6C_int *)(a4))->v);
                u32 = ((((-t25) + 1.0f) + -1.0f) * (float)(*(int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0))));
                R1016 = (R1004);
                t36 = (int)(u32 * 480.0f);
            }
            t42 = *(int *)(((t35 << 2) + 0xC20BEFC));
            t43 = strlen(t42);
            u46 = (float)t43;
            if ((int)t43 < 0) {
                u46 = ((float)t43 + 4.2949673e+09f);
            }
            u50 = ((u46 * 18.0f) / (1.0f + 1.0f));
            t52 = FUN_0c0cf6e4(0x0, t42, (float)(int)((((-(u50 * 1.0f))) + (float)t36) + 320.0f), 224.0f, 1.0f, 1.0f, (R1016));
            t23 = (t23 + 0x1);
            if ((int)t23 >= (int)(R1000)) {
                break;
            }
        }
        t54 = t52;
    }
    t107 = t54;
    if ((*(int *)((a4 + 0x38))) == 0) {
        { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 0) + 0x14)) = *(struct mv6 *)(0xC1EA0C8); }
        t67 = *(int *)0xC23A258;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (((int)stk + 0) + 0x14)));
        nlScale(0.199999988f, 0.199999988f, 0.199999988f);
        FUN_0c0de000(0.199999988f);
        FUN_0c0c465c(((t67 & 0x7) + 0x33));
        nlUnitMatrix();
        nlRotateAZ(0x7FFF);
        (((struct o4_float *)(((((t0 << 1) + t0) << 2) + (((int)stk + 0) + 0x14))))->v) = (-((((struct o4_float *)(((((t0 << 1) + t0) << 2) + (((int)stk + 0) + 0x14))))->v)));
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (((int)stk + 0) + 0x14)));
        nlScale(0.199999988f, 0.199999988f, 0.199999988f);
        FUN_0c0de000(0.199999988f);
        FUN_0c0c465c(((t67 & 0x7) + 0x33));
        t107 = (nlPopMatrix(0x1));
    }
    t154 = t107;
    if ((*(int *)((a4 + 0x38))) != 0) {
    } else {
        if ((0x4040 & t11) != 0) {
            (((struct o6C_uint *)(a4))->v) = ((((struct o68_int *)(a4))->v));
            t97 = (((struct o68_int *)(a4))->v);
            (((struct o68_uint *)(a4))->v) = (t97 - 1);
            if ((int)(t97 - 1) < 0) {
                (((struct o68_uint *)(a4))->v) = 0x6;
            }
            *(unsigned int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0)) = (*(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0)));
            *(unsigned int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0)) = 0xFFFFFFFF;
            t129 = (FUN_0c0cc3f8(0x29A9, 0x0, 0x0, 0x0));
        } else {
            if ((0x8080 & t11) != 0) {
                (((struct o6C_uint *)(a4))->v) = ((((struct o68_int *)(a4))->v));
                t103 = (((struct o68_int *)(a4))->v);
                (((struct o68_uint *)(a4))->v) = (t103 + 0x1);
                (((struct o68_uint *)(a4))->v) = ((int)((int)(t103 + 0x1) % (int)0x7));
                *(unsigned int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0)) = (*(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0)));
                *(unsigned int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0)) = 0x1;
                t107 = (FUN_0c0cc3f8(0x29A9, 0x0, 0x0, 0x0));
            }
            t129 = t107;
        }
        t154 = t129;
        if ((*(int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0))) == 0) {
            if ((0x2 & t11) != 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                t154 = t129;
            } else {
                if ((t11 & 0x604) != 0) {
                    t126 = (((struct o68_int *)(a4))->v);
                    *(unsigned int *)0xC94342C = t126;
                    *(unsigned int *)0xC23ED54 = (*(int *)(((t126 * 0x2C) + 0xC20BF54)));
                    t129 = FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0);
                    *(unsigned int *)((a4 + 0x34)) = 0x2;
                }
                t154 = t129;
            }
        }
    }
    return t154;
}

int FUN_0c0b97d4(int a4, int a5, int a6, int a7)
{
    int stk[15];

    register int R1;
    register int R2;
    int R4;
    int R9;
    int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    int R1000;
    int R1004;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    v0_3 = a5;
    v0_4 = a6;
    *(unsigned int *)(((int)stk + 8)) = R4;
    FUN_0c0ce10c();
    v0_0 = (0xC0C465C);
    v0_0 = (0xC23A258);
    R13 = (0x1);
    v0_1 = (0xC24FB4E);
    R4 = (0x0);
    v0_2 = (0xC0DC510);
    R9 = (0x3);
    w0_0 = (1.0f);
    if (((*(short *)0xC24FB4E) == 0)) goto L_C0B9810;
    *(unsigned short *)((v0_1 + 0x0)) = ((*(short *)((v0_1 + 0x0))) - 1);
    L_C0B9810:;
    v0_2 = ((*(int *)((v0_0 + 0x0))) & R13) == 0;
    v0_5 = ((nlPushMatrix(R4)));
    w0_1 = ((1.0f + 1.0f));
    if (v0_2) goto L_C0B98DA;
    v0_2 = (int)((int)(*(short *)((v0_1 + 0x0))) % (int)0x5A);
    R1000 = (0x24 - ((int)((int)((((v0_2 << 2) << 1) + v0_2) << 2) / (int)0x5A)));
    nlUnitMatrix();
    if (((*(int *)0xC204994) == 0)) goto L_C0B98AC;
    FUN_0c0dcc70(4.0f, w0_1, 0.0f);
    FUN_0c0dcca0(0xC1126CC);
    v0_5 = ((nlScale(0.799999952f, 0.799999952f, 0.799999952f)));
    L_C0B98B4:;
    FUN_0c0c465c((((int)((int)((*(short *)((v0_1 + 0x0))) + 0x59) / (int)0x5A)) + 0xCB5));
    v0_3 = R1000;
    v0_2 = (0xCB5);
    v0_1 = ((v0_3 + 0xC91));
    if (((int)(v0_3 + 0xC91) >= (int)0xCB5)) goto L_C0B98DA;
    L_C0B98D0:;
    FUN_0c0c465c(v0_1);
    v0_3 = (int)(v0_1 + 0x1) < (int)v0_2;
    v0_1 = ((v0_1 + 0x1));
    if (v0_3) goto L_C0B98D0;
    L_C0B98DA:;
    nlUnitMatrix();
    FUN_0c0dcca0(0xC1126D8);
    if (((*(int *)0xC204994) == 0)) goto L_C0B98FC;
    nlScale(0.625f, w0_0, w0_0);
    L_C0B98FC:;
    FUN_0c0dcbb0(0xC1126E4);
    FUN_0c0de000(w0_1);
    FUN_0c0c465c((((*(int *)((v0_0 + 0x0))) & R9) + 0xC87));
    v0_4 = (0x0);
    if ((((*(int *)((v0_0 + 0x0))) & R9) == 0)) goto L_C0B9920;
    v0_3 = (0x0);
    L_C0B9922:;
    FUN_0c0844dc(v0_4, v0_3, v0_4, w0_0);
    nlPopMatrix(0x1);
    R4 = ((*(int *)0xC23ED5C));
    v0_3 = (0xC23EDE0);
    if (((*(int *)0xC23EDE0) == 0)) goto L_C0B99B0;
    if (((*(int *)0xC204994) != 0)) goto L_C0B9962;
    if (((*(int *)((v0_3 + 0x4))) == 0)) goto L_C0B995A;
    if (((R4 & R13) == 0)) goto L_C0B99BA;
    if (((0x2 & R4) != 0)) goto L_C0B99B6;
    L_C0B99BA:;
    R1004 = 0xC25F840;
    v0_5 = (0xC0B9AB0);
    v0_2 = (0x0);
    w0_2 = (5.0f);
    w0_1 = (1.5f);
    w0_3 = (6.0f);
    L_C0B9B56:;
    if (((int)v0_2 >= (int)R9)) goto L_C0B9B5E;
    v0_1 = *(int *)(((v0_2 << 2) + 0xC246FF0));
    v0_5 = *(signed char *)((v0_2 + 0xC24FB48));
    R1000 = v0_5;
    v0_1 = (v0_1);
    v0_6 = (v0_5);
    if ((v0_5 != -1)) goto L_C0B99E8;
    (((struct o34_float *)(v0_1))->v) = (*(float *)0xC0B9BD8);
    v0_5 = (0x34);
    L_C0B9B54:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0B9B56;
    L_C0B99E8:;
    *(unsigned int *)(((int)stk + 8)) = ((((v0_6 << 1) + v0_6) << 2) + 0xC112698);
    if ((v0_2 != 2)) goto L_C0B9A24;
    nlPushMatrix(0x0);
    nlMultiMatrix((((((((*(int *)((v0_0 + 0x0))) & R13) << 2) << 2) << 2) + (R1004)) + 0x200));
    FUN_0c0c465c(0x1252);
    nlPopMatrix(0x1);
    L_C0B9A24:;
    (((struct o238_ushort *)(v0_1))->v) = 0x0;
    (((struct o8_float *)((0x45C + v0_1)))->v) = 0.099999994f;
    (((struct o4_float *)((0x45C + v0_1)))->v) = 0.099999994f;
    (((struct o45C_float *)(v0_1))->v) = 0.099999994f;
    v0_5 = (0xC24FB4B);
    R4 = ((0x45C + v0_1));
    if (((*(signed char *)((v0_2 + 0xC24FB4B))) != 0)) goto L_C0B9A50;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
    L_C0B9A50:;
    (((struct o38_float *)(v0_1))->v) = (((((struct o38_float *)(v0_1))->v)) - w0_2);
    (((struct o6E_ushort *)(v0_1))->v) = (*(short *)((((R1000) << 1) + 0xC1126B0)));
    if ((((*(int *)((v0_0 + 0x0))) & R9) == 0)) goto L_C0B9B30;
    if (((*(int *)0xC204994) == 0)) goto L_C0B9AE0;
    (((struct o30_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) + w0_3);
    (((struct o34_float *)(v0_1))->v) = (((((struct o34_float *)(v0_1))->v)) + w0_1);
    FUN_0c0bbbf4(v0_1);
    (((struct o34_float *)(v0_1))->v) = (((((struct o34_float *)(v0_1))->v)) - w0_1);
    (((struct o30_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) - w0_3);
    L_C0B9AE6:;
    if ((v0_2 != 2)) goto L_C0B9B30;
    R1000 = (0x45C + v0_1);
    FUN_0c0848d6(R4, v0_3, v0_4, ((((struct o45C_float *)(v0_1))->v)), ((((struct o4_float *)((0x45C + v0_1)))->v)), ((((struct o8_float *)((0x45C + v0_1)))->v)));
    nlPushMatrix(0x0);
    nlMultiMatrix((((((((*(int *)((v0_0 + 0x0))) & R13) << 2) << 2) << 2) + (R1004)) + 0x200));
    FUN_0c0c465c(0x1252);
    nlPopMatrix(0x1);
    FUN_0c0849da();
    L_C0B9B30:;
    (((struct o38_float *)(v0_1))->v) = (((((struct o38_float *)(v0_1))->v)) + w0_2);
    (((struct o238_ushort *)(v0_1))->v) = R13;
    (((struct o8_float *)((0x45C + v0_1)))->v) = w0_0;
    (((struct o4_float *)((0x45C + v0_1)))->v) = w0_0;
    (((struct o45C_float *)(v0_1))->v) = w0_0;
    v0_5 = (0x4);
    R4 = ((0x45C + v0_1));
    goto L_C0B9B54;
    L_C0B9AE0:;
    FUN_0c0bbbf4(v0_1);
    goto L_C0B9AE6;
    L_C0B9B5E:;
    return v0_5;
    L_C0B99B6:;
    *(volatile int *)(((int)stk + 8));
    FUN_0c0b9b7a();
    goto L_C0B99BA;
    L_C0B995A:;
    if (((R4 & R13) == 0)) goto L_C0B99BA;
    goto L_C0B99B6;
    L_C0B9962:;
    if (((R4 & R13) == 0)) goto L_C0B99BA;
    goto L_C0B99B6;
    L_C0B99B0:;
    if (((R4 & 0x2) == 0)) goto L_C0B99BA;
    goto L_C0B99B6;
    L_C0B9920:;
    v0_3 = (0x7FFF);
    goto L_C0B9922;
    L_C0B98AC:;
    v0_5 = ((FUN_0c0dcca0(0xC1126CC)));
    goto L_C0B98B4;
}

int FUN_0c0987a4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t6;
    register int t11;
    register int t22;
    register int t28;
    register int t31;
    register int t33;
    register int t34;
    register int t44;
    register float u51;
    register int t78;
    register int t79;
    register int t81;
    register int t82;
    register float u83;
    register float u84;
    register float u85;
    register float u90;
    register float u92;
    register float u93;
    register float u95;
    register float u96;
    register float u97;
    register float u98;
    register float u99;
    register float u102;
    register float u103;
    register float u114;
    register float u136;
    register int t139;
    register int t141;
    register float u73;
    register float u75;
    register float u76;
    register int t53;
    register float u60;
    register float u62;
    register float u63;
    register int t80;
    register int t126;
    register float u129;
    register float u130;
    register int t149;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x30));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 != 0) {
    } else {
        t53 = *(int *)((a4 + 0x34));
        if (t53 == 0) {
        } else {
            t6 = *(int *)((a4 + 0x30));
            t11 = (int)((int)(((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u))) >> 1) % (int)0x5);
            *(unsigned int *)(((int)stk + 8)) = t11;
            *(unsigned int *)(((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4)) + 0x0)) = 0x14;
            (((struct o4_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.5f);
            *(unsigned int *)(((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4)) + 0x14)) = (FUN_0c0da2e0());
            *(unsigned int *)(((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4)) + 0x8)) = ((*(int *)(((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4)) + 0x8))) + 0x1);
            (((struct o18_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x0)));
            (((struct o1C_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = ((((struct o4_float *)((*(int *)((a4 + 0x38)))))->v));
            (((struct o20_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = ((((struct o8_float *)((*(int *)((a4 + 0x38)))))->v));
            t22 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t22 + 0xC);
            (((struct o24_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = ((((struct oC_float *)(t22))->v));
            (((struct o28_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = ((((struct o4_float *)((*(int *)((a4 + 0x38)))))->v));
            (((struct o2C_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v) = ((((struct o8_float *)((*(int *)((a4 + 0x38)))))->v));
            t28 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t28 - 1);
            if ((int)(t28 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x30)) = 0x3C;
            }
            t31 = *(int *)(((int)stk + 8));
            t33 = 0x0;
            t34 = ((((t31 << 1) + (t31 << 2)) * 0x1C) + (0xB4 + a4));
            for (;;) {
                *(unsigned int *)((t34 + 0x18)) = 0x28;
                *(float *)((t34 + 0x0)) = ((((struct o24_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v));
                (((struct o4_float *)(t34))->v) = ((((struct o28_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v));
                (((struct o8_float *)(t34))->v) = ((((struct o2C_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v));
                (((struct oC_float *)(t34))->v) = (((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f)) + -0.25f);
                (((struct o10_float *)(t34))->v) = (((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f)) + -0.25f);
                t33 = (t33 + 0x1);
                (((struct o14_float *)(t34))->v) = (((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f)) + -0.25f);
                t34 = (t34 + 0x1C);
                if ((int)t33 >= (int)0x6) {
                    break;
                }
            }
            t44 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C)) + 0x0)) = 0x14;
            *(unsigned int *)(((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C)) + 0x10)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
            (((struct o14_float *)((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C))))->v) = (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f) + 0.5f);
            (((struct o4_float *)((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C))))->v) = ((((struct o24_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v));
            (((struct o8_float *)((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C))))->v) = ((((struct o28_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v));
            u51 = (((struct o2C_float *)((((((t11 << 1) + t11) << 2) << 2) + (0x3FC + a4))))->v);
            (((struct oC_float *)((((((t44 << 1) + t44) << 2) << 1) + (a4 + 0x3C))))->v) = u51;
            u60 = -0.25f;
            u62 = 255.0f;
            u63 = u51;
        }
        t79 = t53;
        u73 = u60;
        u75 = u62;
        u76 = u63;
    }
    t78 = 0xC098A80;
    t81 = 0x0;
    t82 = (0x3FC + a4);
    u83 = u75;
    u84 = u76;
    u85 = u73;
    for (;;) {
        if ((*(int *)((t82 + 0x0))) != 0) {
            t78 = 0x4;
            u83 = 0.0f;
            u84 = (*(float *)((t82 + t78)));
            if (u84 != u83) {
                t78 = 0x24;
                u84 = (*(float *)((t82 + t78)));
                t78 = 0x18;
                u90 = *(float *)((t82 + t78));
                t78 = 0x28;
                u92 = (u90 - u84);
                u84 = (*(float *)((t82 + t78)));
                t78 = 0x1C;
                u93 = *(float *)((t82 + t78));
                t78 = 0x2C;
                u95 = (u93 - u84);
                u84 = (*(float *)((t82 + t78)));
                t78 = 0x20;
                u96 = *(float *)((t82 + t78));
                t78 = 0xC;
                u97 = (u96 - u84);
                u84 = u95;
                u84 = (u84 * u95);
                u98 = u84;
                u98 = u98 + u92 * u92;
                u84 = u98;
                u99 = u84;
                u99 = u99 + u97 * u97;
                u84 = u99;
                u84 = _builtin_sqrtf(u84);
                *(float *)((((int)stk + 0) + t78)) = u84;
                t78 = (FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), u92, u95, u97));
                t80 = 0xC0DC510;
                t78 = (nlPushMatrix(0x0));
                t78 = 0x20;
                u102 = *(float *)((t82 + t78));
                t78 = 0x1C;
                u103 = *(float *)((t82 + t78));
                t78 = 0x18;
                t78 = (FUN_0c0dcc70((*(float *)((t82 + t78))), u103, u102));
                t78 = (nlRotateAY((*(int *)(((int)stk + 4)))));
                t78 = (nlRotateAX((*(int *)(((int)stk + 0)))));
                t80 = 0xC0DC950;
                t78 = (nlRotateAZ((*(int *)((t82 + 0x14)))));
                t78 = 0xC;
                u85 = (*(float *)((((int)stk + 0) + t78)));
                u85 = (u85 * 0.166666657f);
                t78 = (nlScale(4.0f, 4.0f, u85));
                u114 = 4.0f;
                if (u85 > 4.0f) {
                    u114 = u85;
                }
                t80 = 0xC0DE000;
                t78 = (FUN_0c0de000(u114));
                t78 = (nlRotateAY(0x3FFF));
                t80 = 0xC200AEC;
                u84 = (float)(*(int *)((t82 + 0x0)));
                t79 = 0xC200AE8;
                u85 = u84;
                u85 = (u85 / 20.0f);
                t78 = (FUN_0c0848bc(((*(float *)((t79 + 0x0))) * u85), ((*(float *)((t80 + 0x0))) * u85), ((*(float *)0xC200AF0) * u85)));
                t80 = 0xC0C465C;
                t78 = (FUN_0c0c465c(0x2B0));
                t78 = (nlPopMatrix(0x1));
            } else {
                t126 = t79;
                u129 = u83;
                u130 = u84;
            }
            u83 = u129;
            u84 = u130;
            t79 = t126;
            t80 = (*(int *)((t82 + 0x0)));
            t80 = (t80 - 1);
            *(unsigned int *)((t82 + 0x0)) = t80;
        }
        t81 = (t81 + 0x1);
        t82 = (t82 + 0x30);
        if ((int)t81 >= (int)0x5) {
            break;
        }
    }
    FUN_0c096094((0xB4 + a4), 0x1E);
    u136 = *(float *)0xC098BE0;
    FUN_0c084800(u136, u136, 1.0f);
    FUN_0c095fa0((a4 + 0x3C), 0x5);
    t139 = FUN_0c0849da();
    if ((int)(*(int *)((a4 + 0x34))) <= 0) {
        t141 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t141 - 1);
        t149 = t139;
        if ((int)(t141 - 1) <= 0) {
            t149 = (FUN_0c0e19f2());
        }
    } else {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t149 = t139;
    }
    return t149;
}

int FUN_0c0d27a0(int a4)
{
    int stk[5];

    register int R0;
    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
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
    register float w0_2;
    register float w0_3;
    register float w0_4;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    v0_8 = a4;
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x800);
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x1000);
    *(unsigned int *)0xC23A1A8 = (((*(int *)0xC23A1A8) & 0xFFFFBFFF) & 0xFFFF7FFF);
    (((struct o0_uint *)0xC9433FC)->v) = 0x0;
    *(unsigned int *)((v0_8 + 0x34)) = 0x78;
    (((struct o68_uint *)(v0_8))->v) = 0xFFFFFFFF;
    FUN_0c0d41c6();
    FUN_0c0d1b00();
    R1004 = 0xC943514;
    v0_4 = (0x0);
    v0_3 = (v0_8);
    v0_0 = (0x1);
    v0_1 = (0x0);
    v0_5 = (0x0);
    v0_6 = (0x0);
    w0_1 = (0.0f);
    w0_0 = (1.0f);
    L_C0D2806:;
    R1008 = (v0_5 << 2);
    v0_7 = *(int *)(((v0_5 << 2) + 0xC246FF0));
    (((struct o21C_uint *)((*(int *)(((((((struct o34C_int *)(v0_7))->v)) << 2) + 0xC2475D4)))))->v) = v0_1;
    *(unsigned short *)((((v0_5 * 0xE) + 0xC247998) + 0x0)) = v0_1;
    *(unsigned short *)((((v0_5 * 0xE) + 0xC247998) + 0x2)) = v0_1;
    (((struct o288_uint *)(v0_7))->v) = v0_0;
    FUN_0c049c5c(v0_7, R5, R6, R7, F4, F5, F6);
    v0_2 = (v0_7);
    v0_8 = (v0_7);
    if ((v0_0 == 0)) goto L_C0D2844;
    (((struct o20C_uint *)(v0_2))->v) = v0_0;
    L_C0D2844:;
    FUN_0c049b80(v0_8);
    (((struct oE8_ushort *)(v0_2))->v) = 0xFFFFFFFF;
    *(unsigned int *)(((R1008) + 0xC24759C)) = 0x100;
    if ((((((struct o50_int *)(v0_3))->v)) == 0)) goto L_C0D286A;
    *(unsigned int *)(((R1008) + 0xC247594)) = v0_0;
    L_C0D28D0:;
    *(float *)((v0_6 + 0xC24758C)) = w0_1;
    (((struct o32C_uint *)(v0_2))->v) = (int)w0_1;
    v0_7 = *(int *)((v0_6 + 0xC247594));
    (((struct o308_uint *)(v0_2))->v) = v0_7;
    (((struct o304_uint *)(v0_2))->v) = v0_7;
    R1004 = ((R1004) + 0x20);
    v0_2 = (int)(v0_5 + 0x1) < (int)0x2;
    v0_4 = ((v0_4 + 0x4));
    v0_5 = ((v0_5 + 0x1));
    v0_6 = ((v0_6 + 0x4));
    FPUL_ = ((int)w0_1);
    if (v0_2) goto L_C0D2806;
    FUN_0c0cf46c(0xFFFFFFFF);
    if (((*(int *)0xC522D80) == 0)) goto L_C0D2912;
    FUN_0c0d2b30();
    L_C0D2912:;
    FUN_0c02120e();
    v0_8 = (((((struct o4_int *)0xC943508)->v)));
    if ((((((struct o50_int *)(v0_3))->v)) != 0)) goto L_C0D292A;
    v0_7 = ((*(int *)0xC94343C));
    L_C0D292C:;
    *(unsigned int *)((v0_8 + 0x30)) = v0_7;
    v0_2 = (((struct o0_int *)0xC943508)->v);
    *(unsigned int *)((v0_2 + 0x38)) = v0_1;
    *(unsigned int *)((v0_2 + 0x30)) = (*(int *)((v0_3 + 0x34)));
    v0_8 = (v0_2);
    R5 = (0xC943438);
    if ((((((struct o3C_int *)0xC9433FC)->v)) == -1)) goto L_C0D2944;
    v0_7 = ((*(int *)((R5 + 0x0))));
    L_C0D2946:;
    *(unsigned int *)((v0_8 + 0x34)) = v0_7;
    v0_8 = (0xC20C4A4);
    if ((((((struct o50_int *)(v0_3))->v)) != 0)) goto L_C0D29AC;
    v0_2 = *(int *)0xC94343C;
    R5 = ((v0_2 - 1));
    R6 = ((v0_3 + 0x44));
    if ((((((struct o44_int *)(v0_3))->v)) != (v0_2 - 1))) goto L_C0D2968;
    if (!(((*(int *)((R6 + 0x4))) == R5))) goto L_C0D2968;
    v0_2 = ((*(int *)((v0_8 + 0x4))));
    goto L_C0D29AE;
    L_C0D2968:;
    v0_2 = *(int *)((v0_8 + 0x0));
    *(unsigned char *)((v0_2 + 0x6)) = ((*(signed char *)0xC943434) + 0x31);
    v0_2 = (v0_2);
    L_C0D29AE:;
    w0_1 = (((struct o0_float *)0xC0D2BBC)->v);
    v0_3 = strlen(v0_2);
    w0_3 = ((1.0f + 1.0f));
    w0_2 = (w0_1);
    w0_1 = (w0_0);
    w0_4 = ((float)v0_3);
    FPUL_ = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C0D29CE;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0D29CE:;
    w0_4 = ((w0_4 * ((((struct oC_float *)0xC0D2BBC)->v))) / w0_3);
    w0_4 = (-(w0_4 * w0_1));
    R1004 = (int)(w0_4 + w0_2);
    v0_2 = v0_2;
    R1000 = v0_2;
    FUN_0c0cf4c4(0x0, 0x2, 0x78, 0xFFFFFFFF, v0_2, (float)(int)(w0_4 + w0_2), ((((struct o10_float *)0xC0D2BBC)->v)), w0_1, w0_1, w0_0);
    w0_1 = (((struct o18_float *)0xC0D2BBC)->v);
    v0_2 = strlen(0xC20C4B0);
    w0_1 = (w0_1);
    w0_4 = ((float)v0_2);
    FPUL_ = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C0D2A1C;
    w0_4 = ((w0_4 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C0D2A1C:;
    w0_3 = ((w0_4 * ((((struct oC_float *)0xC0D2BBC)->v))) / w0_3);
    w0_3 = (-(w0_3 * w0_1));
    R1004 = (int)(w0_3 + w0_2);
    R1000 = 0xC20C4B0;
    FUN_0c0cf4c4(0x3C, 0x2, 0x3C, 0x1, 0xC20C4B0, (float)(int)(w0_3 + w0_2), ((((struct o20_float *)0xC0D2BBC)->v)), w0_1, w0_1, w0_0);
    if ((((((struct o38_int *)0xC9433FC)->v)) != 0)) goto L_C0D2AEA;
    FUN_0c0cf386();
    FUN_0c0cee9e();
    *(int *)((int)stk + 16) = *(int *)0xC1EA0E0;
    v0_2 = (((struct o30_int *)0xC9433FC)->v);
    R1004 = ((v0_2 * 0x2C) + 0xC20BF54);
    R1012 = (*(int *)((((v0_2 * 0x2C) + 0xC20BF54) + 0x18)));
    v0_3 = *(int *)0xC943164;
    v0_2 = (v0_3);
    v0_5 = (v0_3);
    v0_6 = ((((int)stk + 4) + 0xC));
    L_C0D2ADA:;
    if (((int)v0_2 < (int)0x4)) goto L_C0D2A92;
    FUN_0c0d18d8();
    L_C0D2B04:;
    FUN_0c0d19b8(0x16, 0x0);
    return (FUN_0c0d19b8(0x16, 0x0));
    L_C0D2A92:;
    R1008 = (v0_2 + v0_6);
    L_C0D2A98:;
    v0_4 = (v0_1);
    v0_3 = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((R1004) + 0x1C))))));
    v0_8 = (v0_5);
    R5 = ((v0_5 + v0_6));
    if (((int)v0_5 >= (int)v0_2)) goto L_C0D2AC6;
    L_C0D2AB4:;
    if ((v0_3 != (*(signed char *)((R5 + 0x0))))) goto L_C0D2ABE;
    v0_4 = (v0_0);
    L_C0D2AC6:;
    if ((v0_4 != 0)) goto L_C0D2A98;
    *(unsigned char *)(((R1008) + 0x0)) = v0_3;
    FUN_0c0d19b8((*(signed char *)((v0_3 + (R1012)))), 0x2);
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D2ADA;
    L_C0D2ABE:;
    v0_7 = (int)(v0_8 + 0x1) < (int)v0_2;
    v0_8 = ((v0_8 + 0x1));
    R5 = ((R5 + 0x1));
    if (v0_7) goto L_C0D2AB4;
    goto L_C0D2AC6;
    L_C0D2AEA:;
    FUN_0c058f7c();
    FUN_0c058fa0((*(int *)0xC23ED50));
    FUN_0c0cee9e();
    FUN_0c0d19d4();
    goto L_C0D2B04;
    L_C0D29AC:;
    v0_2 = ((*(int *)((v0_8 + 0x8))));
    goto L_C0D29AE;
    L_C0D2944:;
    v0_7 = (0x1734);
    goto L_C0D2946;
    L_C0D292A:;
    v0_7 = (0x1);
    goto L_C0D292C;
    L_C0D286A:;
    v0_8 = *(int *)((v0_4 + 0xC24759C));
    w0_2 = *(float *)(((R1004) + 0x0));
    v0_7 = ((0xC247594 + v0_4));
    F4 = (((float)v0_8 * w0_2));
    FPUL_ = (v0_8);
    if ((w0_0 > ((float)v0_8 * w0_2))) goto L_C0D28C8;
    w0_4 = (F4);
    L_C0D28CA:;
    *(unsigned int *)((v0_7 + 0x0)) = (int)w0_4;
    FPUL_ = ((int)w0_4);
    goto L_C0D28D0;
    L_C0D28C8:;
    w0_4 = (w0_0);
    goto L_C0D28CA;
}

int FUN_0c08eabc(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register float u2;
    register float u74;
    register float u75;
    register int t5;
    register float u12;
    register float u15;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u28;
    register float u29;
    register float u32;
    register float u35;
    register float u39;
    register int t48;
    register int t77;
    register int t78;
    register int t79;
    register float u80;
    register float u81;
    register float u82;
    register int t85;
    register float u94;
    register float u105;
    register int t117;
    register int t119;
    register int t121;
    register float u71;
    register float u59;
    register float u62;
    register float u63;
    float u20;
    register int t112;
    register float u114;
    register float u115;

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) - 1);
    u2 = (((struct o34_float *)(a4))->v);
    u74 = u2;
    u75 = 0.0f;
    if (!(u2 > 0.0f)) {
    } else {
        if ((int)((((struct o40_int *)(a4))->v)) >= 0) {
            u62 = u2;
            u63 = 0.0f;
        } else {
            (((struct o40_uint *)(a4))->v) = 0x0;
            t5 = (((struct o44_int *)(a4))->v);
            (((struct o44_uint *)(a4))->v) = (t5 + 0x1);
            if ((unsigned int)((((struct o44_int *)(a4))->v)) >= (unsigned int)0x20) {
                (((struct o44_uint *)(a4))->v) = 0x0;
            }
            u12 = ((((struct o30_float *)(a4))->v));
            u12 = u12 + 0.00488400459f * (float)((FUN_0c0da2e0()) & 0xFFF);
            (((struct o14_float *)(((int)stk + 0)))->v) = (u12 + -10.0f);
            u15 = ((((struct o38_float *)(a4))->v));
            u15 = u15 + 0.00488400459f * (float)((FUN_0c0da2e0()) & 0xFFF);
            (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (u15 + -10.0f);
            (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = ((((((struct o34_float *)(a4))->v)) - (((float)((FUN_0c0da2e0()) & 0xFFF) * 0.0024420023f))) + -10.0f);
            if (((int)(*(int *)0xC23ED50) > (int)0x46) && (u20 = *(float *)(((int)stk + 28)), 83.0f > u20)) {
                (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = 83.0f;
            }
            u24 = (((struct o14_float *)(((int)stk + 0)))->v);
            u25 = (((struct o30_float *)(a4))->v);
            u26 = (((struct o4_float *)((((int)stk + 0) + 0x14)))->v);
            u27 = (((struct o34_float *)(a4))->v);
            u28 = (((struct o8_float *)((((int)stk + 0) + 0x14)))->v);
            u29 = (((struct o38_float *)(a4))->v);
            u32 = ((u27 - u26) * (u27 - u26));
            u32 = u32 + ((u25 - u24)) * ((u25 - u24));
            u35 = u32;
            u35 = u35 + ((u29 - u28)) * ((u29 - u28));
            (((struct o44_float *)(((t5 * 0x54) + (a4 + 0x48))))->v) = (_builtin_sqrtf(u35) * 0.166666657f);
            (((struct o4C_float *)(((t5 * 0x54) + (a4 + 0x48))))->v) = (_builtin_sqrtf(u35) * 0.099999994f);
            (((struct o48_uint *)(((t5 * 0x54) + (a4 + 0x48))))->v) = (((FUN_0c0da2e0()) & 0xF) + 0x2A7);
            u39 = 1001.0f;
            u39 = u39 + 0.000732421875f * (float)((int)((int)(FUN_0c0da2e0()) / (int)0xFFF));
            (((struct o50_uint *)(((t5 * 0x54) + (a4 + 0x48))))->v) = (int)u39;
            (((struct o40_uint *)(((t5 * 0x54) + (a4 + 0x48))))->v) = 0x18;
            FUN_0c0a7714((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), (u25 - u24), (u27 - u26), (u29 - u28));
            nlPushMatrix(0x0);
            nlUnitMatrix();
            FUN_0c0dcca0((a4 + 0x30));
            nlRotateAY((*(int *)(((int)stk + 8))));
            nlRotateAX((*(int *)(((int)stk + 4))));
            t48 = FUN_0c0da2e0();
            nlRotateAZ((t48 << 1));
            nlGetMatrix(((t5 * 0x54) + (a4 + 0x48)));
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
            t77 = (a4 + 0x30);
            u59 = (u25 - u24);
        }
        u71 = u59;
        u74 = u62;
        u75 = u63;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t78 = 0x0;
    t79 = (a4 + 0x48);
    u80 = u74;
    u81 = u75;
    u82 = u71;
    for (;;) {
        if ((int)((((struct o40_int *)(t79))->v)) > 0) {
            t77 = 0x1;
            *(unsigned int *)(((int)stk + 16)) = t77;
            t78 = ((((struct o40_int *)(t79))->v));
            u80 = 0.0416666642f;
            t85 = t78;
            t78 = 0xC0848BC;
            u81 = (float)t85;
            u82 = u81;
            u82 = (u82 * u80);
            u81 = 1.39999998f;
            *(float *)(((int)stk + 12)) = (u82 * u81);
            FUN_0c0848bc((u82 * u81), (u82 * u81), (u82 * 7.0f));
            nlPushMatrix(0x0);
            nlMultiMatrix(t79);
            nlPushMatrix(0x0);
            nlScale((1.0f + 1.0f), (1.0f + 1.0f), ((((struct o44_float *)(t79))->v)));
            nlRotateAY(0x4000);
            u82 = ((((struct o44_float *)(t79))->v));
            u94 = (1.0f + 1.0f);
            if (u82 > (1.0f + 1.0f)) {
                u94 = u82;
            }
            FUN_0c0de000(u94);
            FUN_0c0c465c(((((struct o48_int *)(t79))->v)));
            nlPopMatrix(0x1);
            nlScale(4.0f, 4.0f, ((((struct o4C_float *)(t79))->v)));
            nlRotateAY(0x8000);
            u82 = ((((struct o4C_float *)(t79))->v));
            u105 = 4.0f;
            if (u82 > 4.0f) {
                u105 = u82;
            }
            FUN_0c0de000(u105);
            FUN_0c0c465c(((((struct o50_int *)(t79))->v)));
            nlPopMatrix(0x1);
            t78 = ((((struct o40_int *)(t79))->v));
            t78 = (t78 - 1);
            (((struct o40_uint *)(t79))->v) = t78;
        } else {
            t112 = t77;
            u114 = u80;
            u115 = u81;
        }
        t117 = *(int *)(((int)stk + 0));
        u80 = u114;
        u81 = u115;
        t77 = t112;
        t78 = 0x20;
        *(unsigned int *)(((int)stk + 0)) = (t117 + 0x1);
        t79 = (t79 + 0x54);
        if ((unsigned int)(t117 + 0x1) >= (unsigned int)t78) {
            break;
        }
    }
    t119 = *(int *)(((int)stk + 16));
    t121 = (FUN_0c0849da());
    if (t119 == 0) {
        t121 = (FUN_0c0e19f2());
    }
    return t121;
}

float FUN_0c0d5d94(void)
{
    int stk[1];

    register int R2;
    register int R3;
    register int R5;
    register float F0;
    register float F3;
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
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    *(unsigned int *)(((int)stk + 0)) = 0xC943554;
    v0_0 = (0xC943514);
    v0_1 = (0x0);
    v0_2 = (0x0);
    v0_3 = (0xC943514);
    v0_4 = (0xC943514);
    L_C0D6080:;
    if (((int)v0_1 >= (int)0x2)) goto L_C0D608A;
    v0_6 = *(int *)(((int)stk + 0));
    v0_5 = (((v0_6 + 0x160) + (v0_1 * 0x1D4)));
    if (!(((*(int *)((((v0_6 + 0x160) + (v0_1 * 0x1D4)) + 0x0))) != 0))) goto L_C0D6078;
    v0_6 = ((v0_1 << 2));
    if (((*(int *)((0xC247594 + (v0_1 << 2)))) != 0)) goto L_C0D5DEA;
    goto L_C0D6078;
    L_C0D6078:;
    v0_0 = ((v0_0 + 0x20));
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((v0_3 + 0x20));
    v0_4 = ((v0_4 + 0x20));
    goto L_C0D6080;
    L_C0D5DEA:;
    *(unsigned int *)((v0_5 + 0x10)) = ((*(int *)((v0_5 + 0x10))) + 0x1);
    *(unsigned int *)((v0_5 + 0x34)) = ((int)0x1 << (int)(*(int *)((v0_5 + 0x30))));
    v0_6 = *(int *)((v0_5 + 0x30));
    v0_7 = (0x1);
    v0_8 = (v0_6);
    if (!((v0_6 != 0))) goto L_C0D5FC0;
    v0_6 = (0x40);
    if ((((((struct o40_int *)(v0_5))->v)) != v0_8)) goto L_C0D5E10;
    goto L_C0D5FC0;
    L_C0D5FC0:;
    (((struct o44_uint *)(v0_5))->v) = ((int)v0_7 << (int)((((struct o40_int *)(v0_5))->v)));
    (((struct o4C_uint *)(v0_5))->v) = ((int)v0_7 << (int)((((struct o48_int *)(v0_5))->v)));
    v0_7 = (((struct o40_int *)(v0_5))->v);
    v0_6 = (v0_7);
    v0_8 = (0x4);
    if ((v0_7 == 1)) goto L_C0D6078;
    if ((v0_6 == 2)) goto L_C0D6004;
    if ((v0_6 == 3)) goto L_C0D6078;
    if ((v0_6 == 4)) goto L_C0D6078;
    if ((v0_6 == 5)) goto L_C0D6078;
    if ((v0_6 == 6)) goto L_C0D600E;
    if ((v0_6 == 7)) goto L_C0D602A;
    if ((v0_6 == 8)) goto L_C0D6038;
    if ((v0_6 == 9)) goto L_C0D6064;
    goto L_C0D6078;
    L_C0D6064:;
    if ((((*(int *)((v0_5 + 0x1C))) & 0x5) == 0)) goto L_C0D6078;
    v0_8 = (0x200);
    L_C0D606E:;
    (((struct o5C_uint *)(v0_5))->v) = v0_8;
    (((struct o64_uint *)(v0_5))->v) = 0x3;
    v0_6 = (0x64);
    goto L_C0D6078;
    L_C0D6038:;
    (((struct o54_uint *)(v0_5))->v) = ((((struct o98_int *)(v0_5))->v));
    (((struct o58_uint *)(v0_5))->v) = v0_8;
    v0_6 = (0x58);
    if ((((*(int *)((v0_5 + 0x24))) & 0x1000000) == 0)) goto L_C0D6078;
    v0_8 = (0x400);
    goto L_C0D606E;
    L_C0D602A:;
    (((struct o54_uint *)(v0_5))->v) = ((((struct o98_int *)(v0_5))->v));
    L_C0D6032:;
    (((struct o58_uint *)(v0_5))->v) = v0_8;
    v0_6 = (0x58);
    goto L_C0D6078;
    L_C0D600E:;
    v0_6 = (0x50);
    if (((((int)0x10 << (int)((((struct o50_int *)(v0_5))->v))) & (*(int *)((v0_5 + 0x24)))) != 0)) goto L_C0D6078;
    (((struct o54_uint *)(v0_5))->v) = ((((struct o98_int *)(v0_5))->v));
    goto L_C0D6032;
    L_C0D6004:;
    (((struct o54_uint *)(v0_5))->v) = ((((struct o98_int *)(v0_5))->v));
    goto L_C0D6032;
    L_C0D5E10:;
    *(unsigned int *)((v0_5 + 0x10)) = v0_2;
    v0_8 = *(int *)((v0_5 + v0_6));
    v0_6 = (v0_8);
    if ((v0_8 == 1)) goto L_C0D5E50;
    if ((v0_6 == 2)) goto L_C0D5E50;
    if ((v0_6 == 3)) goto L_C0D5E50;
    if ((v0_6 == 4)) goto L_C0D5E4C;
    if ((v0_6 == 5)) goto L_C0D5E50;
    if ((v0_6 == 6)) goto L_C0D5E50;
    if ((v0_6 == 7)) goto L_C0D5E50;
    if ((v0_6 == 9)) goto L_C0D5E50;
    L_C0D5E50:;
    if ((((*(int *)((v0_5 + 0x34))) & 0x6) == 0)) goto L_C0D5E68;
    (((struct o74_uint *)(v0_5))->v) = v0_2;
    if (((*(int *)((v0_5 + 0x3C))) != 0)) goto L_C0D5E68;
    *(unsigned int *)((v0_5 + 0x38)) = (*(int *)((v0_5 + 0x30)));
    *(unsigned int *)((v0_5 + 0x3C)) = v0_2;
    L_C0D5E68:;
    if ((((*(int *)((v0_5 + 0x34))) & 0x246) == 0)) goto L_C0D5E78;
    (((struct o64_uint *)(v0_5))->v) = v0_2;
    (((struct o58_uint *)(v0_5))->v) = v0_2;
    L_C0D5E78:;
    v0_9 = *(int *)((v0_5 + 0x30));
    v0_6 = (v0_9);
    v0_8 = (0x7);
    w0_1 = (60.0f);
    w0_2 = (30.0f);
    w0_3 = (4.0f);
    w0_0 = (1.0f);
    if ((v0_9 == 1)) goto L_C0D5ECA;
    if ((v0_6 == 2)) goto L_C0D5F5C;
    if (!((v0_6 != 3))) goto L_C0D5FB6;
    if ((v0_6 != 4)) goto L_C0D5EA2;
    goto L_C0D5FB6;
    L_C0D5FB6:;
    (((struct o40_uint *)(v0_5))->v) = (*(int *)((v0_5 + 0x30)));
    (((struct o48_uint *)(v0_5))->v) = v0_2;
    goto L_C0D5FC0;
    L_C0D5EA2:;
    if ((v0_6 != 5)) goto L_C0D5EAA;
    goto L_C0D5FB6;
    L_C0D5EAA:;
    if ((v0_6 != 6)) goto L_C0D5EB2;
    goto L_C0D5FB6;
    L_C0D5EB2:;
    if ((v0_6 != 7)) goto L_C0D5EBA;
    goto L_C0D5FB6;
    L_C0D5EBA:;
    if ((v0_6 != 8)) goto L_C0D5EC2;
    goto L_C0D5FB6;
    L_C0D5EC2:;
    if ((v0_6 == 9)) goto L_C0D5FB6;
    goto L_C0D5FB6;
    L_C0D5F5C:;
    if ((((((struct o68_int *)(v0_5))->v)) != 0)) goto L_C0D5FB6;
    if (((v0_8 & (*(int *)((v0_5 + 0x2C)))) != 0)) goto L_C0D5F8C;
    w0_2 = w0_3;
    w0_2 = w0_2 + w0_1 * (((-((((struct o1C_float *)(v0_0))->v))) + w0_0));
    v0_6 = ((int)w0_2);
    v0_8 = ((FUN_0c0da2e0()));
    F0 = (w0_1);
    FPUL_ = ((int)w0_2);
    L_C0D5FAA:;
    (((struct o68_uint *)(v0_5))->v) = ((int)((int)v0_8 % (int)v0_6));
    goto L_C0D5FB6;
    L_C0D5F8C:;
    w0_1 = w0_3;
    w0_1 = w0_1 + w0_2 * (((-((((struct o18_float *)(v0_4))->v))) + w0_0));
    v0_6 = ((int)w0_1);
    v0_8 = ((FUN_0c0da2e0()));
    F0 = (w0_2);
    FPUL_ = ((int)w0_1);
    goto L_C0D5FAA;
    L_C0D5ECA:;
    if (((((((struct o44_int *)(v0_5))->v)) & 0x20C) == 0)) goto L_C0D5EDA;
    if ((((*(int *)((v0_5 + 0x1C))) & 64) == 0)) goto L_C0D5FB6;
    L_C0D5EDA:;
    if ((((((struct o68_int *)(v0_5))->v)) != 0)) goto L_C0D5FB6;
    if (((v0_8 & (*(int *)((v0_5 + 0x2C)))) != 0)) goto L_C0D5F12;
    w0_2 = w0_3;
    w0_2 = w0_2 + w0_1 * (((-(*(float *)(((0xC943530 + (((v0_1 << 2) << 2) << 1)) + 0x0)))) + w0_0));
    v0_6 = ((int)w0_2);
    v0_8 = ((FUN_0c0da2e0()));
    F0 = (w0_1);
    FPUL_ = ((int)w0_2);
    L_C0D5F30:;
    (((struct o68_uint *)(v0_5))->v) = ((int)((int)v0_8 % (int)v0_6));
    goto L_C0D5FB6;
    L_C0D5F12:;
    w0_1 = w0_3;
    w0_1 = w0_1 + w0_2 * (((-((((struct o18_float *)(v0_3))->v))) + w0_0));
    v0_6 = ((int)w0_1);
    v0_8 = ((FUN_0c0da2e0()));
    F0 = (w0_2);
    FPUL_ = ((int)w0_1);
    goto L_C0D5F30;
    L_C0D5E4C:;
    FUN_0c0d6c52(v0_5);
    goto L_C0D5E50;
    L_C0D608A:;
    return F0;
}

int FUN_0c03bd28(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
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
    register float w0_0;
    v0_4 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_6 = a7;
    w0_0 = f7;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = (((struct o304_int *)(v0_4))->v);
    v0_7 = (int)((((struct o55C_int *)(v0_4))->v)) <= 0;
    v0_0 = (((int)((int)(((v0_3 << 2) + v0_3) << 1) / (int)((((struct o308_int *)(v0_4))->v)))));
    v0_2 = (0x0);
    v0_1 = (v0_4);
    v0_4 = (v0_3);
    if (v0_7) goto L_C03BD8C;
    if (((int)v0_4 <= 0)) goto L_C03BD8C;
    v0_4 = (v0_2);
    L_C03BD8E:;
    v0_3 = (0x57C);
    if (((int)((((struct o57C_int *)(v0_1))->v)) <= (int)v0_6)) goto L_C03BD98;
    *(unsigned int *)((v0_1 + v0_3)) = v0_6;
    L_C03BD98:;
    if ((v0_4 != 0)) goto L_C03BDF4;
    if ((((((struct o4C8_int *)(v0_1))->v)) == 10)) goto L_C03BDE0;
    v0_3 = (0x500);
    if (((int)((((struct o500_int *)(v0_1))->v)) < (int)0x6)) goto L_C03BDBA;
    if (((int)(*(int *)((v0_1 + v0_3))) <= (int)0xD)) goto L_C03BDE0;
    L_C03BDBA:;
    v0_6 = (((struct o578_int *)(v0_1))->v);
    v0_3 = (v0_6);
    if ((v0_6 == 4)) goto L_C03BDD4;
    if ((v0_3 == 5)) goto L_C03BDD4;
    if (!((((((struct o48C_int *)(v0_1))->v)) != 51))) goto L_C03BDD4;
    (((struct o55C_uint *)(v0_1))->v) = v0_2;
    goto L_C03BDEE;
    L_C03BDD4:;
    v0_3 = (((struct o55C_int *)(v0_1))->v);
    (((struct o55C_uint *)(v0_1))->v) = (v0_3 - 1);
    if (((int)(v0_3 - 1) <= 0)) goto L_C03BDEE;
    L_C03BDE0:;
    (((struct o560_uint *)(v0_1))->v) = v0_2;
    (((struct o57C_uint *)(v0_1))->v) = v0_2;
    L_C03BE74:;
    v0_5 = (((struct o560_int *)(v0_1))->v);
    v0_3 = (0x560);
    v0_4 = (v0_5);
    if (!((v0_5 != 0))) goto L_C03BFEA;
    v0_3 = (v0_4);
    if ((v0_4 != 10)) goto L_C03BE8C;
    goto L_C03BFEA;
    L_C03BFEA:;
    return v0_3;
    L_C03BE8C:;
    v0_4 = (((struct o48C_int *)(v0_1))->v);
    v0_3 = (v0_4);
    if ((v0_4 == 51)) goto L_C03BF66;
    v0_3 = (((struct o4C8_int *)(v0_1))->v);
    v0_4 = (v0_3);
    if ((v0_3 != 2)) goto L_C03BEA6;
    if ((((((struct o4CC_int *)(v0_1))->v)) == 0)) goto L_C03BEF8;
    L_C03BEA6:;
    if ((v0_4 != 9)) goto L_C03BEB6;
    if ((((((struct o210_int *)(v0_1))->v)) == 67)) goto L_C03BEF8;
    L_C03BEB6:;
    if ((v0_4 == 4)) goto L_C03BEF8;
    if ((v0_4 == 7)) goto L_C03BEF8;
    if ((v0_4 == 12)) goto L_C03BEF8;
    if ((v0_4 == 10)) goto L_C03BEF8;
    if ((v0_4 == 13)) goto L_C03BEF8;
    if ((v0_4 == 8)) goto L_C03BEF8;
    v0_3 = (0x500);
    if (((int)((((struct o500_int *)(v0_1))->v)) < (int)0x6)) goto L_C03BEFE;
    if (((int)(*(int *)((v0_1 + v0_3))) > (int)0xD)) goto L_C03BEFE;
    L_C03BEF8:;
    FUN_0c0355f8(v0_1);
    L_C03BEFE:;
    v0_5 = (((struct o4C8_int *)(v0_1))->v);
    v0_3 = (v0_5);
    v0_4 = (v0_5);
    if ((v0_5 == 5)) goto L_C03BF66;
    v0_3 = (v0_4);
    if ((v0_4 == 6)) goto L_C03BF66;
    FUN_0c039034(v0_1);
    FUN_0c039110(v0_1);
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C03BF2C;
    (((struct o5A4_uint *)(v0_1))->v) = (((((struct o5A0_int *)(v0_1))->v)) << 1);
    L_C03BF2C:;
    v0_4 = (((struct o560_int *)(v0_1))->v);
    v0_3 = (v0_4);
    if ((v0_4 == 11)) goto L_C03BF66;
    v0_4 = (v0_1);
    v0_3 = (0x1);
    v0_3 = ((FUN_0c0356f4(v0_4, v0_3)));
    L_C03BF66:;
    if ((a8 == 0)) goto L_C03BFEA;
    v0_3 = (((struct o56C_int *)(v0_1))->v);
    v0_4 = ((((a8 - 1) * 0x34) + 0xC1F02E8));
    FPUL_ = (v0_3);
    if ((!((float)v0_3 > (*(float *)((((v0_0 << 2) + (((a8 - 1) * 0x34) + 0xC1F02E8)) + 0x0)))))) goto L_C03BFA2;
    if (((int)v0_0 <= (int)0x1)) goto L_C03BFA2;
    (((struct o560_uint *)(v0_1))->v) = 0x9;
    (((struct o56C_uint *)(v0_1))->v) = v0_2;
    v0_3 = (0x56C);
    goto L_C03BFEA;
    L_C03BFA2:;
    v0_2 = (((struct o560_int *)(v0_1))->v);
    v0_3 = (v0_2);
    if ((v0_2 != 1)) goto L_C03BFEA;
    v0_3 = (0x5A0);
    if ((((((struct o5A0_int *)(v0_1))->v)) != 0)) goto L_C03BFEA;
    v0_3 = (0x304);
    if (((int)((((struct o304_int *)(v0_1))->v)) <= 0)) goto L_C03BFEA;
    v0_2 = ((v0_4 + 0x30));
    v0_5 = ((v0_4 + 0x2C));
    v0_6 = (0x8);
    L_C03BFC4:;
    if (((int)v0_0 > (int)(*(short *)((v0_5 + 0x0))))) goto L_C03BFDE;
    v0_7 = FUN_0c0da2e0();
    v0_3 = ((v0_7 & 0xF));
    if (((int)(v0_7 & 0xF) >= (int)(*(short *)((v0_2 + 0x0))))) goto L_C03BFDE;
    (((struct o560_uint *)(v0_1))->v) = v0_6;
    v0_3 = (0x560);
    goto L_C03BFEA;
    L_C03BFDE:;
    v0_7 = (unsigned int)(v0_5 + 0x2) < (unsigned int)(v0_4 + 0x30);
    v0_2 = ((v0_2 + 0x2));
    v0_5 = ((v0_5 + 0x2));
    if (v0_7) goto L_C03BFC4;
    goto L_C03BFEA;
    L_C03BDEE:;
    (((struct o57C_uint *)(v0_1))->v) = 0x2;
    L_C03BDF4:;
    if (((int)v0_5 <= 0)) goto L_C03BE10;
    if ((v0_4 == 0)) goto L_C03BE10;
    if (((int)((((struct o310_int *)(v0_1))->v)) < (int)(v0_5 + ((((struct o4C0_int *)(v0_1))->v))))) goto L_C03BE10;
    (((struct o57C_uint *)(v0_1))->v) = 0x3;
    L_C03BE10:;
    if (((int)((((struct o304_int *)(v0_1))->v)) > 0)) goto L_C03BE20;
    if (!((((((struct o57C_int *)(v0_1))->v)) != 4))) goto L_C03BE20;
    v0_4 = ((((((struct o57C_int *)(v0_1))->v)) + 0x5));
    goto L_C03BE40;
    L_C03BE20:;
    v0_4 = (((((struct o57C_int *)(v0_1))->v)));
    L_C03BE40:;
    v0_3 = (((struct o4F0_int *)(v0_1))->v);
    (((struct o560_uint *)(v0_1))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(v0_1))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(v0_1))->v)) << 2) + (*(int *)((0xC1F8E40 + (((v0_3 << 2) + v0_3) << 2))))))) + (v0_4 * 0xE)))));
    goto L_C03BE74;
    L_C03BD8C:;
    v0_4 = (0x1);
    goto L_C03BD8E;
}
