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
    int t88;
    float u91;
    int t112;
    int stk[18];

    *(unsigned int *)(((int)stk + 20)) = 0xC522B00;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1E9FA4);
    *(unsigned int *)(((int)stk + 4)) = 0xC20BD10;
    t3 = 0xC20BD04;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
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
    t13 = *(int *)((a4 + 0x40));
    *(unsigned int *)(((int)stk + 8)) = (((((t12 == 0)) ? 1 : 0) ^ 0x1) + 0x1);
    u14 = 16384.0f;
    u14 = u14 + 16384.0f * ((float)t12 / (float)t13);
    *(unsigned int *)(((int)stk + 16)) = (int)u14;
    *(float *)(((int)stk + 12)) = (1.0f - ((float)t12 / (float)t13));
    if ((int)(*(int *)(((int)stk + 8))) <= 0) {
        u69 = 16384.0f;
    } else {
        t16 = 0x0;
        for (;;) {
            t18 = FUN_0c0da410((*(int *)(((int)stk + 16))));
            if (t16 == 0) {
                t27 = (*(int *)0xC23A1AC);
                t30 = (int)(((((-t18) + 1.0f) * (float)(*(int *)((a4 + 0x44))))) * 480.0f);
                u31 = (*(float *)(((int)stk + 12)));
            } else {
                t27 = (*(int *)((a4 + 0x48)));
                t30 = (int)((((((-t18) + 1.0f) + (-1.0f)) * (float)(*(int *)((a4 + 0x44))))) * 480.0f);
                u31 = ((float)t12 / (float)t13);
            }
            t38 = *(short *)(((*(int *)(((int)stk + 20))) + 0x0));
            if ((t38 != 0) && ((int)((short)t38 - 1) >= (int)t27)) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                FUN_0c0dcc70((float)t30, 0.0f, 0.0f);
                t44 = (*(int *)(((t27 << 2) + 0xC20BD10)));
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x1;
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
            if ((int)t16 < (int)(*(int *)(((int)stk + 8)))) continue;
            break;
        }
    }
    if (((*(int *)0xC2498F4) & 0x4040) != 0) {
        *(unsigned int *)((a4 + 0x48)) = (*(int *)0xC23A1AC);
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        *(unsigned int *)((a4 + 0x44)) = 0xFFFFFFFF;
        *(unsigned int *)0xC23A1B0 = 0x0;
        t74 = *(int *)0xC23A1AC;
        *(unsigned int *)0xC23A1AC = (t74 - 1);
        if ((int)(t74 - 1) < 0) {
            *(unsigned int *)0xC23A1AC = 0xD;
        }
        FUN_0c0cc3f8(0x29A9, 0xD, u69);
    } else {
        if (((*(int *)0xC2498F4) & 0x8080) != 0) {
            *(unsigned int *)((a4 + 0x48)) = (*(int *)0xC23A1AC);
            *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
            *(unsigned int *)((a4 + 0x44)) = 0x1;
            *(unsigned int *)0xC23A1B0 = 0x0;
            t80 = *(int *)0xC23A1AC;
            *(unsigned int *)0xC23A1AC = (t80 + 0x1);
            if ((int)(t80 + 0x1) > (int)0xD) {
                *(unsigned int *)0xC23A1AC = 0x0;
            }
            FUN_0c0cc3f8(0x29A9, 0xD, u69);
        } else {
            t88 = 0xD;
            u91 = u69;
        }
        t98 = t88;
        u101 = u91;
    }
    if ((*(int *)((a4 + 0x3C))) == 0) {
        if (((*(int *)0xC2498F4) & 2) != 0) {
            *(unsigned int *)0xC23ED54 = 0x5;
            *(unsigned int *)0xC23ED44 = 0x1;
            *(unsigned int *)0xC23ED48 = 0x1F;
            *(unsigned int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDE0)) = 0x1;
        } else {
            if (((*(int *)(((int)stk + 4))) == 0) && (t112 = *(int *)0xC2498F4, (t112 & 0x604) != 0)) {
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
    *(unsigned int *)0xC9527EC = 0x3;
    *(unsigned int *)0xC9527F0 = 0x2;
    *(unsigned int *)0xC9527F4 = 0x6;
    *(unsigned int *)0xC9527F8 = 0x1;
    *(unsigned int *)0xC9527FC = 0xC23981C;
    *(unsigned int *)0xC9522F8 = 0xC9527EC;
    *(unsigned int *)0xC952330 = 0x0;
    *(unsigned int *)0xC952334 = 0x0;
    *(unsigned int *)0xC952338 = 0x0;
    *(unsigned int *)0xC95234C = 0x0;
    *(unsigned int *)0xC952350 = 0x0;
    *(unsigned int *)0xC9527D4 = 0x1F0;
    *(unsigned int *)0xC9527D8 = 0x200;
    *(unsigned int *)0xC9527DC = 0x210;
    *(unsigned int *)0xC9527E0 = 0x220;
    *(unsigned int *)0xC9527E4 = 0x230;
    kmiInitCallback();
    *(unsigned int *)0xC952504 = 0x0;
    *(unsigned int *)0xC952508 = 0x0;
    *(unsigned int *)0xC9524E0 = ((kmiGetProfileInt(0xC237414, 0xC23741C, 0x1)) - 1);
    *(unsigned int *)0xC9524DC = (*(int *)0xC9524E0);
    *(unsigned int *)0xC95230C = 0x10000;
    *(unsigned int *)0xC952310 = 0x800000;
    *(unsigned int *)0xC952314 = 0x800000;
    *(unsigned int *)0xC9524C4 = 0x0;
    *(unsigned int *)0xC9524C0 = 0x0;
    *(unsigned int *)0xC9524BC = 0x0;
    *(unsigned int *)0xC9524D8 = 0x3;
    *(unsigned int *)0xC9525A4 = 0x1;
    kmiInitializeBackGroundPlane();
    t11 = kmiGetProfileInt(0xC237414, 0xC237428, 0x6000);
    t12 = kmiGetProfileInt(0xC237414, 0xC237434, 0x7A000);
    t13 = kmiGetProfileInt(0xC237414, 0xC237440, 0x180000);
    t14 = kmiGetProfileInt(0xC237414, 0xC237450, 0x180000);
    *(unsigned int *)0xC952390 = (((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)0xC952394 = (((((unsigned int)((unsigned int)((unsigned int)t14 >> 8) >> 2) >> 1) << 8) << 2) << 1);
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
    *(unsigned int *)0xC952640 = 0x0;
    *(unsigned int *)0xC95271C = 0x0;
    *(unsigned int *)0xC952648 = 0x0;
    *(unsigned int *)0xC95264C = 0xFFFFFFFF;
    *(unsigned int *)0xC952650 = 0xFFFFFFFF;
    *(unsigned int *)0xC952654 = 0xFFFFFFFF;
    *(unsigned int *)0xC952658 = 0x0;
    *(unsigned int *)0xC95265C = 0x0;
    *(unsigned int *)0xC952660 = 0x0;
    *(unsigned int *)0xC952728 = 0x0;
    *(unsigned int *)0xC952730 = 0x0;
    *(unsigned int *)0xC95272C = 0x1;
    *(unsigned int *)0xC95273C = (kmiGetProfileInt(0xC237460, 0xC237470, 0xACC00000));
    *(unsigned int *)0xC952740 = (kmiGetProfileInt(0xC237460, 0xC23747C, 0x400000));
    *(unsigned int *)0xC952360 = (kmiGetProfileInt(0xC237414, 0xC237488, 0x0));
    *(unsigned int *)0xC952520 = (kmiGetProfileInt(0xC237414, 0xC237498, 0xA));
    *(unsigned int *)0xC952524 = (kmiGetProfileInt(0xC237414, 0xC2374A8, 0xA));
    *(unsigned int *)0xC952528 = (kmiGetProfileInt(0xC237414, 0xC2374B8, 0xA));
    *(unsigned int *)0xC9524D0 = 0x0;
    *(unsigned int *)0xC9524D4 = 0x1;
    *(unsigned int *)0xC952364 = 0xF;
    *(unsigned int *)0xC952364 = ((*(int *)0xC952364) | 0x0);
    *(unsigned int *)0xC952514 = 0x0;
    *(unsigned int *)0xC952518 = 0x0;
    return (kmiInitRenderer());
}

