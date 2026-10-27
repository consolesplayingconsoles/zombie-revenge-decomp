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

int FUN_0c0bc798(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t61;
    int t75;
    int t76;
    int t99;
    int t100;
    int t101;
    int t103;
    int t116;
    int t117;
    int t118;
    int t121;
    int t167;
    int t174;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t54;
    int t59;
    int stk[23];

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = 0x1000;
    t1 = 0x100;
    t2 = 0x1000;
    if ((0x100 & (*(int *)0xC23A1A8)) != 0) {
        t1 = 0x200;
        t2 = 0x2800;
    }
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x18) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x18) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    FUN_0c0a79fa((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((((int)stk + 4) + 0x18) + 0x8));
    *(unsigned short *)((a4 + 0x226)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(unsigned short *)((a4 + 0x228)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(unsigned short *)((a4 + 0x22A)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    FUN_0c0dc5a0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x24);
    FUN_0c0a79fa((((int)stk + 4) + 0x24), ((((int)stk + 4) + 0x24) + 0x4), ((((int)stk + 4) + 0x24) + 0x8));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0xC0))) == 50) {
    } else {
        if ((((*(int *)((a4 + 0x20C))) & 0x10015) != 0) && ((t39 = *(int *)((a4 + 0xBC)), t40 = *(int *)((0xC247484 + (t39 << 2))), t40 != -1) && ((t41 = *(int *)((a4 + 0xBC)), t42 = *(int *)((0xC247484 + (t41 << 2))), t43 = *(int *)(((t42 << 2) + 0xC247030)), t43 != 0) && (t44 = *(int *)((a4 + 0xC8)), (t44 & 0x2F5) != 0)))) {
            if (((int)(*(int *)((a4 + 0xBC))) < (int)0x2) && (t54 = *(short *)((a4 + 0xE8)), (int)t54 >= 0)) {
                t59 = (*(short *)((a4 + 0xE8)));
            } else {
                t59 = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247484) + 0x0)));
            }
            t61 = *(int *)((((t59 << 2) + 0xC246FF0) + 0x0));
            if (t61 != 0) {
                FUN_0c0a7714((((int)stk + 4) + 0x30), ((((int)stk + 4) + 0x30) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((t61 + 0x22C)))), ((*(float *)((a4 + 0x230))) - (*(float *)((t61 + 0x230)))), ((*(float *)((a4 + 0x234))) - (*(float *)((t61 + 0x234)))));
            }
            t75 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
            t76 = *(short *)((a4 + 0x6E));
            if (_builtin_fabsf((float)(short)(t76 - t75)) > 16384.0f) {
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
            }
            _builtin_fabsf((float)(short)(t76 - t75));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        }
        t99 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
        t100 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
        if (_builtin_fabsf((float)(short)(t100 - t99)) > (float)t1) {
            if (((int)(short)(t100 - t99) < (int)0x8000) && ((int)(short)(t100 - t99) > 0)) {
                t101 = *(short *)((a4 + 0x222));
                *(unsigned short *)((a4 + 0x222)) = (t101 + t1);
                if ((int)(short)(t101 + t1) > (int)t2) {
                    *(unsigned short *)((a4 + 0x222)) = t2;
                }
            } else {
                t103 = *(short *)((a4 + 0x222));
                *(unsigned short *)((a4 + 0x222)) = (t103 - t1);
                if ((int)(short)(t103 - t1) < (int)(-t2)) {
                    *(unsigned short *)((a4 + 0x222)) = (-t2);
                }
            }
        }
        t116 = *(int *)(((((int)stk + 4) + 0x30) + 0x0));
        t117 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
        if (_builtin_fabsf((float)(short)(t116 - t117)) > (float)t1) {
            if (((int)(short)(t116 - t117) < (int)0x8000) && ((int)(short)(t116 - t117) > 0)) {
                t118 = *(short *)((a4 + 0x220));
                *(unsigned short *)((a4 + 0x220)) = (t118 + 0x100);
                if ((int)(short)(t118 + 0x100) > (int)(*(int *)(((int)stk + 20)))) {
                    *(unsigned short *)((a4 + 0x220)) = 0x1000;
                }
            } else {
                t121 = *(short *)((a4 + 0x220));
                *(unsigned short *)((a4 + 0x220)) = (t121 - 0x100);
                if ((int)(short)(t121 - 0x100) < (int)0xFFFFF000) {
                    *(unsigned short *)((a4 + 0x220)) = 0xFFFFF000;
                }
            }
        }
        _builtin_fabsf((float)(short)(t100 - t99));
        _builtin_fabsf((float)(short)(t116 - t117));
    }
    nlPushMatrix(0x0);
    FUN_0c0dccf0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    nlScale((*(float *)((a4 + 0x274))), (*(float *)((a4 + 0x278))), (*(float *)((a4 + 0x27C))));
    if ((*(short *)((a4 + 0x238))) == 0) {
        FUN_0c0de000((*(float *)((a4 + 0x280))));
        t167 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)((a4 + 0x458))));
    } else {
        *(unsigned short *)((a4 + 0x238)) = ((*(short *)0xC247CF8) + 0x1);
    }
    if ((*(int *)0xC260868) != 0) {
        t174 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t174 + 0x40);
        nlGetMatrix(((t174 + 0x40) - 64));
    }
    return (nlPopMatrix(0x1));
}

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

int FUN_0c0ad340(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    int t7;
    int t8;
    int t9;
    float u10;
    int t12;
    int t34;
    int t35;
    int t41;
    int t42;
    int t50;
    int t51;
    int t52;
    float u53;
    int t55;
    int t77;
    float u79;
    int t84;
    int t170;
    int t171;
    int t172;
    int t175;
    int t176;
    int t178;
    int t180;
    int stk[13];

    t0 = *(int *)((a4 + 0x74));
    t1 = *(int *)0xC24FA38;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            t7 = *(int *)((a4 + 0x90));
                            *(unsigned int *)((a4 + 0x90)) = (t7 + 0x1);
                            t8 = *(int *)((a4 + 0x90));
                            t9 = *(int *)0xC23EE54;
                            u10 = (1.0f - ((160000.0f - (float)(((-(t7 + 0x1)) + 0x190) * ((-t8) + 0x190))) / 160000.0f));
                            *(float *)((a4 + 0x8C)) = (u10 * 6.0f);
                            *(float *)((t9 + 0x44)) = (u10 * 6.0f);
                            if ((*(int *)((a4 + 0x90))) == 0x190) {
                                *(unsigned int *)((a4 + 0x74)) = 0xFFFFFFFF;
                                t12 = ((int (*)(int, int, int, int, float, float))(FUN_0c0cc3f8))(0x521A9, a5, a6, a7, 160000.0f, (float)(((-(t7 + 0x1)) + 0x190) * ((-t8) + 0x190)));
                            }
                        }
                    } else {
                        if (!((*(float *)((a4 + 0x88))) > 620.0f)) {
                            *(unsigned int *)((a4 + 0x74)) = ((*(int *)((a4 + 0x74))) + 0x1);
                            FUN_0c0e15d4((*(int *)((a4 + 0x30))), a5, a6, a7);
                            t34 = FUN_0c0e14c4(0x0);
                            *(unsigned int *)((a4 + 0x30)) = t34;
                            t35 = FUN_0c0e19aa(0xC0AD126, 0x58, t34);
                            FUN_0c0e19d0(t35);
                            FUN_0c0dc5a0();
                            nlRotateAX(0xFFFFCE39);
                            *(float *)((t35 + 0x48)) = 8.0f;
                            FUN_0c0db470((t35 + 0x40), (t35 + 0x40));
                            *(unsigned short *)((t35 + 0x54)) = 0x71C;
                            *(unsigned short *)((t35 + 0x52)) = 0xFFFFC71D;
                            nlPopMatrix(0x1);
                            t41 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x628A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t42 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        }
                        t50 = *(int *)((a4 + 0x90));
                        *(unsigned int *)((a4 + 0x90)) = (t50 + 0x1);
                        t51 = *(int *)((a4 + 0x90));
                        t52 = *(int *)0xC23EE54;
                        u53 = (1.0f - ((160000.0f - (float)(((-(t50 + 0x1)) + 0x190) * ((-t51) + 0x190))) / 160000.0f));
                        *(float *)((a4 + 0x8C)) = (u53 * 6.0f);
                        *(float *)((t52 + 0x44)) = (u53 * 6.0f);
                        if ((*(int *)((a4 + 0x90))) == 0x190) {
                            *(unsigned int *)((a4 + 0x74)) = 0xFFFFFFFF;
                            t55 = ((int (*)(int, float, float))(FUN_0c0cc3f8))(0x521A9, 160000.0f, (float)(((-(t50 + 0x1)) + 0x190) * ((-t51) + 0x190)));
                        }
                    }
                } else {
                    if (t1 == 0x2D0) {
                        *(unsigned int *)((a4 + 0x74)) = ((*(int *)((a4 + 0x74))) + 0x1);
                        *(float *)((a4 + 0x88)) = 430.0f;
                        t77 = 0x190;
                        for (;;) {
                            u79 = (*(float *)((a4 + 0x88)));
                            u79 = u79 + 6.0f * (1.0f - ((160000.0f - (float)((0x190 - t77) * (0x190 - t77))) / 160000.0f));
                            *(float *)((a4 + 0x88)) = u79;
                            t84 = (t77 == 0);
                            t77 = (t77 - 1);
                            if (t84) {
                                break;
                            }
                        }
                    }
                }
            } else {
                if (t1 != 0x208) {
                } else {
                    *(unsigned int *)((a4 + 0x74)) = ((*(int *)((a4 + 0x74))) + 0x1);
                    *(float *)((a4 + 0x88)) = 2000.0f;
                }
            }
        } else {
            if (t1 != 0xF0) {
            } else {
                *(unsigned int *)((a4 + 0x74)) = ((*(int *)((a4 + 0x74))) + 0x1);
                *(float *)((a4 + 0x8C)) = 6.0f;
            }
        }
    } else {
        if (t1 != 0x8C) {
        } else {
            *(unsigned int *)((a4 + 0x74)) = ((*(int *)((a4 + 0x74))) + 0x1);
            *(float *)((a4 + 0x8C)) = 0.0f;
            *(float *)((a4 + 0x88)) = 2600.0f;
        }
    }
    *(float *)((a4 + 0x88)) = ((*(float *)((a4 + 0x88))) - (*(float *)(((0x8C + a4) + 0x0))));
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xC10F1DC;
    FUN_0c0dcca0(0xC10F2B8);
    FUN_0c0c465c(0xFB5);
    nlRotateAX(0xFFFFBC72);
    FUN_0c0c465c(0xFBB);
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
    FUN_0c0dcca0((0x80 + a4));
    t170 = 0x5;
    t171 = 0xC10F290;
    for (;;) {
        t172 = *(short *)((t171 + 0x0));
        t171 = (t171 + 0x2);
        FUN_0c0c465c((unsigned short)t172);
        t170 = (t170 - 0x1);
        if (t170 == 0) {
            break;
        }
    }
    nlPushMatrix(0x0);
    t175 = 0xF;
    t176 = t171;
    for (;;) {
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        t178 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t178 + 0xC);
        FUN_0c0dcca0(((t178 + 0xC) - 12));
        t180 = *(short *)((t176 + 0x0));
        t176 = (t176 + 0x2);
        FUN_0c0c465c((unsigned short)t180);
        t175 = (t175 - 0x1);
        if (t175 == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    FUN_0c0e16c0((*(int *)((a4 + 0x30))));
    return (nlPopMatrix(0x1));
}
