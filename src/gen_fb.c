/* Straight-line functions with calls and guards (batch gen_fb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
extern int FUN_0c0cc3f8();
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int kmiGetProfileInt(int, int, int);
int kmiInitCallback(void);
int kmiInitRenderer(void);
int kmiInitializeBackGroundPlane(void);
int memset(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0bc798(int a4, int a5, int a6);
int FUN_0c0cff8e(int a4);
int FUN_0c217564(void);
int FUN_0c0ad340(int a4, int a5, int a6, int a7, float f4, float f5);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };




int FUN_0c0cff8e(int a4)
{
    int t3;
    int t6;
    int t12;
    int t13;
    float u14;
    int t16;
    float t18;
    int t38;
    int t47;
    float u49;
    float u52;
    int t74;
    int t80;
    float u69;
    int t27;
    int t30;
    float u31;
    int t44;
    int t98;
    float u101;
    float u91;
    int t112;
    int stk[18];
    int R1004;
    int R1008;
    float R1012;
    int R1016;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1020 = 0xC522B00;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1E9FA4);
    R1004 = 0xC20BD10;
    t3 = 0xC20BD04;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)(R1004)) {
            break;
        }
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        FUN_0c0c465c(t6);
    }
    if ((*(int *)((a4 + 0x3C))) != 0) {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 1);
    }
    t12 = *(int *)((a4 + 0x3C));
    t13 = (((struct o40_int *)(a4))->v);
    R1008 = (((((t12 == 0)) ? 1 : 0) ^ 0x1) + 0x1);
    u14 = 16384.0f;
    u14 = u14 + 16384.0f * ((float)t12 / (float)t13);
    R1016 = (int)u14;
    R1012 = (1.0f - ((float)t12 / (float)t13));
    if ((int)(R1008) <= 0) {
        u69 = 16384.0f;
    } else {
        t16 = 0x0;
        for (;;) {
            t18 = FUN_0c0da410((R1016));
            if (t16 == 0) {
                t27 = ((((struct o0_int *)0xC23A1AC)->v));
                t30 = (int)(((((-t18) + 1.0f) * (float)((((struct o44_int *)(a4))->v)))) * 480.0f);
                u31 = (R1012);
            } else {
                t27 = ((((struct o48_int *)(a4))->v));
                t30 = (int)((((((-t18) + 1.0f) + (-1.0f)) * (float)((((struct o44_int *)(a4))->v)))) * 480.0f);
                u31 = ((float)t12 / (float)t13);
            }
            t38 = *(short *)(((R1020) + 0x0));
            if ((t38 != 0) && ((int)((short)t38 - 1) >= (int)t27)) {
                R1004 = 0x0;
                FUN_0c0dcc70((float)t30, 0.0f, 0.0f);
                t44 = (*(int *)(((t27 << 2) + 0xC20BD10)));
            } else {
                R1004 = 0x1;
                FUN_0c0dcc70((float)t30, 0.0f, 0.0f);
                t44 = 0x12C6;
            }
            FUN_0c0c475c(t44, u31);
            FUN_0c0c475c(0x12C4, u31);
            t47 = *(int *)0xC23A258;
            u49 = (float)(0x1F & t47);
            if (0.0f > (float)(0x1F & t47)) {
                u49 = ((float)(0x1F & t47) + 4.2949673e+09f);
            }
            u52 = u49;
            if ((t47 & 0x20) != 0) {
                u52 = (31.0f - u49);
            }
            FUN_0c0c475c(0x12D2, (u52 / 31.0f));
            FUN_0c0c475c(0x12D1, (u52 / 31.0f));
            t16 = (t16 + 0x1);
            if ((int)t16 < (int)(R1008)) continue;
            break;
        }
    }
    if (((*(int *)0xC2498F4) & 0x4040) != 0) {
        (((struct o48_uint *)(a4))->v) = ((((struct o0_int *)0xC23A1AC)->v));
        *(unsigned int *)((a4 + 0x3C)) = ((((struct o40_int *)(a4))->v));
        (((struct o44_uint *)(a4))->v) = 0xFFFFFFFF;
        (((struct o4_uint *)0xC23A1AC)->v) = 0x0;
        t74 = (((struct o0_int *)0xC23A1AC)->v);
        (((struct o0_uint *)0xC23A1AC)->v) = (t74 - 1);
        if ((int)(t74 - 1) < 0) {
            (((struct o0_uint *)0xC23A1AC)->v) = 0xD;
        }
        FUN_0c0cc3f8(0x29A9, 0xD, u69);
    } else {
        if (((*(int *)0xC2498F4) & 0x8080) != 0) {
            (((struct o48_uint *)(a4))->v) = ((((struct o0_int *)0xC23A1AC)->v));
            *(unsigned int *)((a4 + 0x3C)) = ((((struct o40_int *)(a4))->v));
            (((struct o44_uint *)(a4))->v) = 0x1;
            (((struct o4_uint *)0xC23A1AC)->v) = 0x0;
            t80 = (((struct o0_int *)0xC23A1AC)->v);
            (((struct o0_uint *)0xC23A1AC)->v) = (t80 + 0x1);
            if ((int)(t80 + 0x1) > (int)0xD) {
                (((struct o0_uint *)0xC23A1AC)->v) = 0x0;
            }
            FUN_0c0cc3f8(0x29A9, 0xD, u69);
        } else {
            t98 = 0xD;
            u91 = u69;
        }
        u101 = u91;
    }
    if ((*(int *)((a4 + 0x3C))) == 0) {
        if (((*(int *)0xC2498F4) & 2) != 0) {
            (((struct o10_uint *)0xC23ED44)->v) = 0x5;
            (((struct o0_uint *)0xC23ED44)->v) = 0x1;
            (((struct o4_uint *)0xC23ED44)->v) = 0x1F;
            *(unsigned int *)(((((((struct o10_int *)0xC23A1AC)->v)) << 2) + 0xC23EDE0)) = 0x1;
        } else {
            if (((R1004) == 0) && (t112 = *(int *)0xC2498F4, (t112 & 0x604) != 0)) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                FUN_0c0cc3f8(0x828A9, t98, u101);
            }
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c217564(void)
{
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    if ((*(int *)0xC239A8C) == 0) {
        *(unsigned int *)0xC239A8C = 0xC9522F8;
        memset((*(int *)0xC239A8C), 0x0, 0x4F4);
    }
    (((struct o18_uint *)0xC9527D4)->v) = 0x3;
    (((struct o1C_uint *)0xC9527D4)->v) = 0x2;
    (((struct o20_uint *)0xC9527D4)->v) = 0x6;
    (((struct o24_uint *)0xC9527D4)->v) = 0x1;
    (((struct o28_uint *)0xC9527D4)->v) = 0xC23981C;
    (((struct o0_uint *)0xC9522F8)->v) = 0xC9527EC;
    (((struct o38_uint *)0xC9522F8)->v) = 0x0;
    (((struct o3C_uint *)0xC9522F8)->v) = 0x0;
    (((struct o0_uint *)0xC952338)->v) = 0x0;
    (((struct o14_uint *)0xC952338)->v) = 0x0;
    (((struct o18_uint *)0xC952338)->v) = 0x0;
    (((struct o0_uint *)0xC9527D4)->v) = 0x1F0;
    (((struct o4_uint *)0xC9527D4)->v) = 0x200;
    (((struct o8_uint *)0xC9527D4)->v) = 0x210;
    (((struct oC_uint *)0xC9527D4)->v) = 0x220;
    (((struct o10_uint *)0xC9527D4)->v) = 0x230;
    kmiInitCallback();
    (((struct o0_uint *)0xC952504)->v) = 0x0;
    (((struct o4_uint *)0xC952504)->v) = 0x0;
    (((struct o24_uint *)0xC9524BC)->v) = ((kmiGetProfileInt(0xC237414, 0xC23741C, 0x1)) - 1);
    (((struct o20_uint *)0xC9524BC)->v) = ((((struct o24_int *)0xC9524BC)->v));
    (((struct o14_uint *)0xC9522F8)->v) = 0x10000;
    (((struct o18_uint *)0xC9522F8)->v) = 0x800000;
    (((struct o1C_uint *)0xC9522F8)->v) = 0x800000;
    (((struct o8_uint *)0xC9524BC)->v) = 0x0;
    (((struct o4_uint *)0xC9524BC)->v) = 0x0;
    (((struct o0_uint *)0xC9524BC)->v) = 0x0;
    (((struct o1C_uint *)0xC9524BC)->v) = 0x3;
    *(unsigned int *)0xC9525A4 = 0x1;
    kmiInitializeBackGroundPlane();
    t11 = kmiGetProfileInt(0xC237414, 0xC237428, 0x6000);
    t12 = kmiGetProfileInt(0xC237414, 0xC237434, 0x7A000);
    t13 = kmiGetProfileInt(0xC237414, 0xC237440, 0x180000);
    t14 = kmiGetProfileInt(0xC237414, 0xC237450, 0x180000);
    (((struct o0_uint *)0xC952390)->v) = (((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    (((struct o4_uint *)0xC952390)->v) = (((((unsigned int)((unsigned int)((unsigned int)t14 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    t15 = t14;
    t16 = 0xC952390;
    t17 = 0xC952394;
    t18 = 0x0;
    t19 = 0x0;
    t20 = 0x0;
    for (;;) {
        if ((unsigned int)t19 >= (unsigned int)0x20) {
            break;
        }
        t15 = 0xC952368;
        *(unsigned int *)((t19 + t15)) = t18;
        t16 = t18;
        t17 = t15;
        t16 = (t16 + (((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        t17 = (t17 + t19);
        *(unsigned int *)((t17 + 0x4)) = t16;
        t16 = t18;
        t17 = t15;
        t16 = (t16 + ((((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t12 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t17 = (t17 + t19);
        *(unsigned int *)((t17 + 0x8)) = t16;
        t16 = ((((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t12 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t17 = t15;
        t17 = (t17 + t19);
        t16 = (t16 + t18);
        *(unsigned int *)((t17 + 0xC)) = t16;
        t17 = 0x7D0000;
        t15 = 0xC952388;
        t17 = (t17 - t18);
        *(unsigned int *)((t20 + t15)) = t17;
        t19 = (t19 + 0x10);
        t18 = (t18 + 0x400000);
        t20 = (t20 + 0x4);
    }
    (((struct o0_uint *)0xC952640)->v) = 0x0;
    (((struct o0_uint *)0xC95271C)->v) = 0x0;
    (((struct o8_uint *)0xC952640)->v) = 0x0;
    (((struct oC_uint *)0xC952640)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC952640)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC952640)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC952640)->v) = 0x0;
    (((struct o1C_uint *)0xC952640)->v) = 0x0;
    (((struct o20_uint *)0xC952640)->v) = 0x0;
    (((struct oC_uint *)0xC95271C)->v) = 0x0;
    (((struct o14_uint *)0xC95271C)->v) = 0x0;
    (((struct o10_uint *)0xC95271C)->v) = 0x1;
    (((struct o20_uint *)0xC95271C)->v) = (kmiGetProfileInt(0xC237460, 0xC237470, 0xACC00000));
    (((struct o24_uint *)0xC95271C)->v) = (kmiGetProfileInt(0xC237460, 0xC23747C, 0x400000));
    (((struct o28_uint *)0xC952338)->v) = (kmiGetProfileInt(0xC237414, 0xC237488, 0x0));
    (((struct o1C_uint *)0xC952504)->v) = (kmiGetProfileInt(0xC237414, 0xC237498, 0xA));
    (((struct o20_uint *)0xC952504)->v) = (kmiGetProfileInt(0xC237414, 0xC2374A8, 0xA));
    (((struct o24_uint *)0xC952504)->v) = (kmiGetProfileInt(0xC237414, 0xC2374B8, 0xA));
    (((struct o14_uint *)0xC9524BC)->v) = 0x0;
    (((struct o18_uint *)0xC9524BC)->v) = 0x1;
    (((struct o2C_uint *)0xC952338)->v) = 0xF;
    (((struct o2C_uint *)0xC952338)->v) = (((((struct o2C_int *)0xC952338)->v)) | 0x0);
    (((struct o10_uint *)0xC952504)->v) = 0x0;
    (((struct o14_uint *)0xC952504)->v) = 0x0;
    return (kmiInitRenderer());
}

