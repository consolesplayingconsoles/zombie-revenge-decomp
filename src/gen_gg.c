/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[7]; } Stk7;
int FUN_0c01c46a(int, int);
int FUN_0c01c86c(int, int);
int FUN_0c01cb94(int, int);
int FUN_0c036256(int, int, Stk7);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c0392e8(int, int);
int FUN_0c039302(int);
int FUN_0c039354(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5fe4(void);
int kdGetDevice(int);
int kdSetBlockWrite(Stk4);
int kdSetGetLastError(Stk4);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int vmsfb_sleep(void);
int vmsio_ismount(int);
int FUN_0c039e96(int a4);
int FUN_0c0194e8(int a4, int a5, int a6, int a7);
int FUN_0c09bb20(int a4, int a5, int a6, int a7);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
int FUN_0c0a7064(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c03e388(int a4, float f4);
void FUN_0c01c274(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int FUN_0c0c8e40(int a4, int a5, int a6, int a7, float f4);
float vmsio_block_write(int a4, int a5, int a6);

int FUN_0c039e96(int a4)
{
    int t1;
    int t2;
    int t96;
    int t5;
    int t86;
    int t8;
    int t9;
    int t10;
    int t19;
    int t22;
    int t23;
    int t24;
    int t26;
    int t44;
    int t62;
    int t64;
    int t65;
    int t75;
    int t77;
    int t79;
    int stk[23];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195AFC));
    t96 = 0x5CC;
    if ((*(int *)((a4 + 0x5CC))) == 0) {
    } else {
        t5 = *(int *)((a4 + 0xC8));
        t86 = t5;
        if ((t5 & 64) != 0) {
        } else {
            *(unsigned int *)(((int)stk + 32)) = (*(int *)(((0x5D0 + a4) + 0x8)));
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((0x5D0 + a4) + 0xC)));
            *(unsigned int *)(((int)stk + 24)) = (((int)stk + 16) + 0x14);
            t8 = (((int)stk + 16) + 0x14);
            for (;;) {
                if ((unsigned int)t8 >= (unsigned int)((((int)stk + 16) + 0x14) + 0x18)) {
                    break;
                }
                *(unsigned int *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x4);
            }
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x14) + 0x4);
            t9 = 0x0;
            for (;;) {
                *(unsigned int *)((a4 + 0x580)) = t9;
                for (;;) {
                    t10 = FUN_0c039354(a4);
                    if (t10 == 0) {
                        break;
                    }
                    *(unsigned int *)((((t9 << 2) + (((int)stk + 16) + 0x14)) + 0x0)) = 0x1;
                }
                if (((*(int *)((a4 + 0x5E8))) == 0) && (t9 == 1)) {
                    *(unsigned int *)((a4 + 0x5D4)) = ((*(int *)((a4 + 0x5D4))) + 0x2);
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x1;
                    *(unsigned int *)((a4 + 0x5E8)) = 0x1;
                }
                if ((*(int *)(((((int)stk + 16) + 0x14) + ((*(int *)((a4 + 0x580))) << 2)))) != 0) {
                    t19 = 0x0;
                    for (;;) {
                        t22 = *(int *)(((((*(int *)(((0x580 + a4) + 0x0))) << 2) + (0x5D0 + a4)) + 0x0));
                        t23 = *(signed char *)((t19 + ((((*(int *)((a4 + 0x580))) * 0x1E) + (0x96 + (t2 + (t1 * 0x28A)))) + ((t22 << 1) + (t22 << 2)))));
                        t24 = *(int *)(((0x5D0 + a4) + (t19 << 2)));
                        t26 = (t19 << 2);
                        t19 = (t19 + 0x1);
                        if ((int)t24 < (int)(unsigned char)t23) {
                            *(unsigned int *)((((0x5D0 + a4) + t26) + 0x0)) = (unsigned char)t23;
                            *(unsigned int *)(((((int)stk + 16) + 0x14) + t26)) = 0x1;
                        }
                        if ((int)t19 >= (int)0x6) {
                            break;
                        }
                    }
                }
                t9 = (t9 + 0x1);
                if ((int)t9 >= (int)0x4) {
                    break;
                }
            }
            if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) != 0) {
                FUN_0c039288(a4, 0x1, 0x0);
                t44 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t44 + 0x1);
                *(int *)((int)stk + 12) = ((t44 + 0x1) - 1);
                *(int *)((int)stk + 8) = (0x1EA + (t2 + (t1 * 0x28A)));
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x1, 0x1, 0x1, 0xA, (0x1EA + (t2 + (t1 * 0x28A))), ((t44 + 0x1) - 1));
            }
            FUN_0c0392e8(a4, 0x1);
            FUN_0c039302(a4);
            FUN_0c0392e8(a4, 0x0);
            FUN_0c0392e8(a4, 0x2);
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0x8))) != 0) {
                FUN_0c039288(a4, 0x3, 0x2);
                FUN_0c039288(a4, 0x4, 0x2);
                FUN_0c039288(a4, 0x5, 0x2);
                t62 = *(int *)(((int)stk + 32));
                t64 = *(short *)(((((((t62 << 2) + t62) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5D8))) << 1)) + 0x0));
                t65 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t65 + 0x1);
                *(int *)((int)stk + 12) = ((t65 + 0x1) - 1);
                *(int *)((int)stk + 8) = ((((t64 << 1) + t64) << 2) + (0x1F0 + (t2 + (t1 * 0x28A))));
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x3, 0x4, 0x5, 0xA, ((((t64 << 1) + t64) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))), ((t65 + 0x1) - 1));
            }
            FUN_0c0392e8(a4, 0x3);
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0xC))) != 0) {
                FUN_0c039288(a4, 0x6, 0x3);
                FUN_0c039288(a4, 0x7, 0x3);
                FUN_0c039288(a4, 0x8, 0x3);
                t75 = *(int *)(((int)stk + 28));
                t77 = *(short *)((((((((t75 << 2) + t75) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5DC))) << 1)) + 0x32) + 0x0));
                t79 = (*(int *)(((int)stk + 16)));
                *(int *)((int)stk + 12) = t79;
                *(int *)((int)stk + 8) = (((((t77 << 1) + t77) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6);
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x6, 0x7, 0x8, 0xA, (((((t77 << 1) + t77) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6), t79);
            }
            FUN_0c0392e8(a4, 0x6);
            t86 = (FUN_0c0cc3f8(0x22CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
        }
        t96 = t86;
    }
    return t96;
}

int FUN_0c0194e8(int a4, int a5, int a6, int a7)
{
    int t1;
    float u11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u45;
    int t66;
    float u46;
    float u47;
    int t74;
    int t6;
    int t7;
    int t19;
    float u61;
    int stk[38];

    *(unsigned int *)(((int)stk + 8)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x44)) = *(struct mv8 *)(0xC0F5294); }
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)0xC23ED5C) & 4) != 0) {
        *(unsigned int *)0xC23EE54 = 0x0;
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t6 = 0xC0F5294;
        t7 = 0xC23ED5C;
    }
    u11 = *(float *)(((*(int *)(((int)stk + 8))) + 0x34));
    t12 = 0x34;
    t13 = t6;
    t14 = t7;
    t15 = (int)((float)(int)u11 / 137.049988f);
    t16 = ((int)((float)(int)u11 / 137.049988f) - 2);
    t17 = 0x0;
    t18 = a7;
    for (;;) {
        if ((int)t16 > (int)((int)((float)(int)u11 / 137.049988f) + 0x2)) {
            break;
        }
        t19 = 0x1A;
        t18 = t16;
        t18 = (t18 + 0x10);
        t13 = 0xC23EE58;
        t18 = (t18 & 0xF);
        t14 = 0xC23F058;
        t18 = (t18 << 2);
        t15 = 0x0;
        t19 = (t17 * t19);
        t18 = (t18 << 2);
        t18 = (t18 << 1);
        t18 = (t18 + t13);
        t19 = (t19 + t14);
        for (;;) {
            t12 = t15;
            t15 = (t15 + 0x2);
            t14 = (*(short *)((t18 + t12)));
            *(unsigned short *)((t19 + t12)) = t14;
            if ((unsigned int)t15 >= (unsigned int)0x8) {
                break;
            }
        }
        t17 = (t17 + 0x1);
        t16 = (t16 + 0x1);
    }
    *(unsigned int *)(((int)stk + 16)) = 0xFFFFFFFE;
    *(unsigned int *)(((int)stk + 24)) = ((int)((float)(int)u11 / 137.049988f) - 2);
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 4) + 0x64);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x44);
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = (0xC23F058 + ((*(int *)(((int)stk + 28))) * 0x1A));
        t24 = *(int *)(((int)stk + 32));
        *(float *)(((int)stk + 44)) = ((float)(*(int *)(((int)stk + 16))) * 137.049988f);
        t25 = *(int *)(((int)stk + 24));
        t26 = 0x0;
        t27 = t24;
        t28 = t24;
        for (;;) {
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAX((-(*(short *)((t1 + 0x3CC)))));
            nlRotateAY((-(*(short *)((t1 + 0x3CE)))));
            FUN_0c0dcc70(0.0f, (-(*(float *)((t1 + 0x258)))), 0.0f);
            *(float *)(((int)stk + 60)) = (*(float *)((t28 + 0x0)));
            *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 44)));
            *(float *)(((int)stk + 68)) = (*(float *)((t28 + 0x4)));
            FUN_0c0db470((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C));
            *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 48)));
            *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 52)));
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 56)));
            nlPopMatrix(0x1);
            u45 = *(float *)(((int)stk + 4));
            *(float *)(((int)stk + 4)) = (u45 - 274.099976f);
            t66 = 0;
            if (!((u45 - 274.099976f) > 0.0f)) {
                u46 = *(float *)(((int)stk + 4));
                u47 = *(float *)(((int)stk + 12));
                if (!((_builtin_fabsf(u47) + u46) > 0.0f)) {
                    nlPushMatrix(0x0);
                    FUN_0c0dcc70((*(float *)((t27 + 0x0))), (((float)t25 * 137.049988f) - (*(float *)(((*(int *)(((int)stk + 8))) + 0x34)))), (*(float *)((t27 + 0x4))));
                    nlRotateAY(t26);
                    FUN_0c0c465c((*(short *)(((*(int *)(((int)stk + 20))) + 0x0))));
                    nlPopMatrix(0x1);
                } else {
                    u61 = (_builtin_fabsf(u47) + u46);
                }
                t66 = (((_builtin_fabsf(u47) + u46) > 0.0f));
            } else {
                t66 = (1);
            }
            t28 = (t28 + 0x8);
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x2);
            t26 = (t26 + 0x4000);
            t27 = (t27 + 0x8);
            if ((unsigned int)t28 >= (unsigned int)(*(int *)(((int)stk + 40)))) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
        if ((int)(*(int *)(((int)stk + 16))) <= (int)0x2) continue;
        break;
    }
    nlPushMatrix(0x0);
    t74 = *(int *)(((int)stk + 8));
    FUN_0c0c465c((*(int *)((t74 + 0x5C))));
    nlPopMatrix(0x1);
    *(float *)((t74 + 0x34)) = ((*(float *)((t74 + 0x34))) + (*(float *)(((0x40 + t74) + 0x0))));
    return 0x34;
}

int FUN_0c09bb20(int a4, int a5, int a6, int a7)
{
    int t11;
    int t12;
    int t13;
    int t16;
    int t31;
    float u35;
    int t49;
    int t51;
    int t52;
    float u56;
    float u64;
    float u65;
    float u66;
    float u68;
    int t94;
    int t9;
    float u14;
    float u15;
    int t24;
    float u25;
    float u26;
    int t50;
    float u53;
    int t88;
    int stk[17];

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    if ((*(int *)0xC24970C) == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t9 = a4;
    }
    t11 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        t12 = t9;
        t13 = 0x20;
        for (;;) {
            t16 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t16 + 0x1);
            if ((unsigned int)(*(int *)((a4 + 0x48))) >= (unsigned int)0x100) {
                *(unsigned int *)((a4 + 0x48)) = 0x0;
            }
            *(unsigned int *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x4)) = 0x291;
            if ((int)0x291 < 0) {
                *(unsigned int *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x4)) = ((-((FUN_0c0da2e0()) & 0xF)) - 679);
            } else {
                t24 = t12;
                u25 = u14;
                u26 = u15;
            }
            u14 = u25;
            u15 = u26;
            t12 = t24;
            *(unsigned int *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x10)) = ((FUN_0c0da2e0()) << 1);
            *(unsigned int *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x0)) = 0x3;
            u15 = (float)((FUN_0c0da2e0()) & 0xFFF);
            u15 = (u15 * 0.00024420023f);
            *(float *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0xC)) = u15;
            FUN_0c0da2e0();
            t31 = FUN_0c0e5fe4();
            t12 = (((((t31 << 1) + t31) << 2) << 1) + 0xC200BB8);
            *(unsigned int *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x8)) = (((((t31 << 1) + t31) << 2) << 1) + 0xC200BB8);
            u15 = (*(float *)((t12 + 0x10)));
            u14 = (*(float *)((t12 + 0xC)));
            t13 = (t13 - 0x1);
            u35 = u14;
            u35 = u35 + (*(float *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0xC))) * u15;
            u14 = u35;
            *(float *)(((((((((t16 + 0x1) - 1) << 1) + ((t16 + 0x1) - 1)) << 2) << 1) + (a4 + 0x4C)) + 0x14)) = u14;
            if (t13 == 0) {
                break;
            }
        }
    }
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t49 = 0xC09BCA8;
    t51 = a4;
    t52 = (a4 + 0x4C);
    for (;;) {
        if ((*(int *)((t52 + 0x0))) == 0) {
        } else {
            t49 = 0xC09BCAC;
            u56 = *(float *)((t49 + 0x0));
            t49 = 0xC;
            *(float *)((((int)stk + 4) + t49)) = ((float)(*(int *)((t52 + 0x0))) * u56);
            t51 = (*(int *)((t52 + 0x8)));
            t49 = 0x3E4;
            t49 = (FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 12))) + t49))) + ((((*(int *)((t51 + 0x0))) << 2) << 2) << 2))));
            t49 = (nlRotateAY((*(int *)((t52 + 0x10)))));
            t49 = 0x8;
            u64 = *(float *)((t51 + t49));
            t49 = 0x4;
            u65 = *(float *)((t51 + t49));
            t49 = 0xC;
            u66 = *(float *)((t52 + t49));
            t49 = 0xC09BDAC;
            u68 = *(float *)((t49 + 0x0));
            t49 = 0x14;
            t49 = (FUN_0c0dcc70(((*(float *)((t52 + t49))) * u68), (((u65 * u64)) * u66), 0.0f));
            t49 = 0xC;
            u53 = (*(float *)((((int)stk + 4) + t49)));
            u53 = (u53 * 1.0f);
            if ((int)(*(int *)((t52 + 0x4))) < 0) {
                t49 = (nlScale(2.79999995f, 0.461999953f, 0.461999953f));
                t50 = 0xC0DE000;
                t49 = (FUN_0c0de000(2.79999995f));
                t49 = (FUN_0c0848bc(u53, u53, u53));
                t88 = (-(*(int *)((t52 + 0x4))));
            } else {
                t50 = 0xC0DCCF0;
                t49 = (FUN_0c0dccf0());
                t49 = 0x3CE;
                t49 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + t49)))));
                t49 = 0x3CC;
                t49 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + t49)))));
                t50 = 0xC0DCB80;
                t49 = (nlScale(2.79999995f, 2.79999995f, 1.0f));
                t49 = (FUN_0c0de000(2.79999995f));
                t49 = (FUN_0c0848bc(u53, u53, u53));
                t88 = (*(int *)((t52 + 0x4)));
            }
            t49 = (FUN_0c0c47ae(t88));
            t50 = (*(int *)((t52 + 0x0)));
            t50 = (t50 - 1);
            *(unsigned int *)((t52 + 0x0)) = t50;
        }
        t94 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t94 + 0x1);
        t52 = (t52 + 0x18);
        if ((int)(t94 + 0x1) < (int)0x100) continue;
        break;
    }
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}

int kmiFBgetfreemem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t8;
    int t13;
    int t34;
    int t15;
    int t16;
    int t17;
    int t28;
    int t27;
    int t35;
    int t47;
    int t36;
    int t43;
    int t49;
    int t50;
    int t51;
    int t52;
    int t70;
    int t71;
    int t72;
    int t73;
    int t102;
    int t103;
    int t98;
    int t99;
    int t94;
    int t95;
    int t90;
    int t91;
    int t86;
    int t87;
    int t82;
    int t83;
    int t78;
    int t79;
    int t74;
    int t75;
    int t105;
    int t106;
    int t128;
    int t131;
    int t11;
    int t12;
    int t31;
    int t14;
    int stk[15];

    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)0xC239F00;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            if ((int)(*(int *)((t1 + 0x10))) > (int)(*(int *)(((int)stk + 8)))) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((t1 + 0x10)));
            }
            t7 = *(int *)(((int)stk + 24));
            t8 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 24)) = (t7 + t8);
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t11 = (t7 + t8);
        t12 = t8;
    }
    t13 = *(int *)0xC239EF8;
    t34 = t12;
    if (t13 != 0) {
        t15 = t11;
        t16 = t13;
        for (;;) {
            t17 = *(short *)((t16 + 0x0));
            t28 = (unsigned short)t17;
            if (((unsigned short)t17 & 0x4) == 0) {
                t15 = (*(int *)((t16 + 0x10)));
                t14 = (*(int *)(((int)stk + 8)));
                if ((int)t15 > (int)t14) {
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)((t16 + 0x10)));
                }
                t15 = (*(int *)(((int)stk + 20)));
                t27 = *(int *)((t16 + 0x10));
                t15 = (t15 + t27);
                *(unsigned int *)(((int)stk + 20)) = t15;
                t28 = t27;
            }
            t16 = (*(int *)((t16 + 0x8)));
            if (t16 == 0) {
                break;
            }
        }
        t31 = t14;
        t34 = t28;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC239F0C;
    t35 = *(int *)0xC239F14;
    t47 = t34;
    if (t35 != 0) {
        t36 = t35;
        for (;;) {
            if ((int)(*(int *)((t36 + 0x10))) > (int)(*(int *)(((int)stk + 12)))) {
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((t36 + 0x10)));
            }
            t43 = *(int *)((t36 + 0x10));
            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + t43);
            t36 = (*(int *)((t36 + 0x8)));
            if (t36 == 0) {
                break;
            }
        }
        t47 = t43;
    }
    t49 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    if (t49 != 0) {
        t50 = t31;
        t51 = t47;
        t52 = t49;
        for (;;) {
            if (((unsigned short)(*(short *)((t52 + 0x0))) & 0x4) == 0) {
                t51 = (*(int *)((t52 + 0x10)));
                t50 = (*(int *)(((int)stk + 12)));
                if ((int)t51 > (int)t50) {
                    t51 = (*(int *)((t52 + 0x10)));
                    *(unsigned int *)(((int)stk + 12)) = t51;
                }
                t51 = (*(int *)((t52 + 0x10)));
                *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + t51);
            }
            t52 = (*(int *)((t52 + 0x8)));
            if (t52 == 0) {
                break;
            }
        }
    }
    t70 = *(int *)0xC239F20;
    if (t70 != 0) {
        t71 = 0xC239F20;
        t72 = t70;
        for (;;) {
            t73 = *(short *)((t72 + 0x0));
            t102 = 0x90;
            t103 = 0x10;
            if (((unsigned short)t73 & 0xF000) != 0x1000) {
                t98 = 0xA0;
                t99 = 0x10;
                if (((unsigned short)t73 & 0xF000) != 0x2000) {
                    t94 = 0xC0;
                    t95 = 0x10;
                    if (((unsigned short)t73 & 0xF000) != 0x3000) {
                        t90 = 0xE0;
                        t91 = 0x10;
                        if (((unsigned short)t73 & 0xF000) != 0x4000) {
                            t86 = 0x200;
                            t87 = 0x8;
                            if (((unsigned short)t73 & 0xF000) != 0x5000) {
                                t82 = 0x360;
                                t83 = 0x4;
                                if (((unsigned short)t73 & 0xF000) != 0x6000) {
                                    t78 = 0x800;
                                    t79 = 0x2;
                                    if (((unsigned short)t73 & 0xF000) != 0x7000) {
                                        t74 = 0xD60;
                                        t75 = 0x1;
                                        if (((unsigned short)t73 & 0xF000) != 0x8000) {
                                            t74 = 0x0;
                                            t75 = 0x0;
                                        }
                                        t78 = t74;
                                        t79 = t75;
                                    }
                                    t82 = t78;
                                    t83 = t79;
                                }
                                t86 = t82;
                                t87 = t83;
                            }
                            t90 = t86;
                            t91 = t87;
                        }
                        t94 = t90;
                        t95 = t91;
                    }
                    t98 = t94;
                    t99 = t95;
                }
                t102 = t98;
                t103 = t99;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((int)t103 > 0) {
                t105 = (t72 + 0xC);
                t106 = 0xF000;
                for (;;) {
                    t71 = (*(int *)((t105 + 0x0)));
                    if (t71 == 0) {
                        t106 = (*(int *)(((int)stk + 16)));
                        t106 = (t106 + t102);
                        *(unsigned int *)(((int)stk + 16)) = t106;
                    }
                    t71 = (*(int *)(((int)stk + 4)));
                    t71 = (t71 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t71;
                    t105 = (t105 + 0x4);
                    if ((int)t71 >= (int)t103) {
                        break;
                    }
                }
            }
            t72 = (*(int *)((t72 + 0x4)));
            if (t72 != 0) continue;
            break;
        }
    }
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)(((int)stk + 24))) + (*(int *)(((int)stk + 20))));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)(((int)stk + 28))) + (*(int *)(((int)stk + 32))));
    *(unsigned int *)((a6 + 0x0)) = (*(int *)(((int)stk + 16)));
    t128 = *(int *)(((int)stk + 12));
    t131 = t128;
    if ((int)(*(int *)(((int)stk + 8))) < (int)t128) {
    } else {
        t131 = (*(int *)(((int)stk + 8)));
    }
    *(unsigned int *)((a7 + 0x0)) = t131;
    return 0x0;
}

int FUN_0c0a7064(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    float u24;
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[32];

    stk[20] = a8;
    stk[21] = a9;
    stk[22] = a10;
    stk[23] = a11;
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = f10;
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = f11;
    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) - f7);
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f8);
    u2 = (*(float *)&a8 - f9);
    *(float *)(((int)stk + 80)) = u2;
    u3 = (*(float *)&a9 - f7);
    *(float *)(((int)stk + 84)) = u3;
    u4 = (*(float *)&a10 - f8);
    *(float *)(((int)stk + 88)) = u4;
    u5 = (*(float *)&a11 - f9);
    *(float *)(((int)stk + 92)) = u5;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 48)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = u3;
    *(float *)(((int)stk + 44)) = u4;
    *(float *)(((int)stk + 48)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x58) + 0x0)) = (*(float *)(((int)stk + 36)));
    u2 = (-u2);
    *(float *)(((int)stk + 80)) = u2;
    u5 = (-u5);
    *(float *)(((int)stk + 92)) = u5;
    u24 = (-u2);
    if (*(float *)&a12 > (-u2)) {
        u2 = *(float *)&a12;
        *(float *)(((int)stk + 80)) = u2;
        u24 = *(float *)&a12;
    }
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 48)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = u3;
    *(float *)(((int)stk + 44)) = u4;
    *(float *)(((int)stk + 48)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0x58) + 0x0)) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 24))) + 0x0)) = (f7 + (*(float *)(((int)stk + 56))));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f8 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f9 + u2);
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((*(float *)(((int)stk + 56))) - u3);
    *(float *)((a13 + 0x0)) = ((*(float *)(((int)stk + 52))) - u4);
    *(float *)((a14 + 0x0)) = (u2 - u5);
    return 0x4C;
}

int FUN_0c03e388(int a4, float f4)
{
    int t35;
    int stk[32];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    F4 = f4;
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x54)) = *(struct mv7 *)(0xC0F5660); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x38)) = *(struct mv7 *)(0xC0F567C); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x1C)) = *(struct mv7 *)(0xC0F5698); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)(((int)stk + 4)) = *(struct mv7 *)(0xC0F56B4); }
    R13 = (((int)stk + 4));
    R14 = ((((int)stk + 4) + 0x38));
    R6 = ((((int)stk + 4) + 0x54));
    R7 = ((((int)stk + 4) + 0x1C));
    if (((*(int *)((R4 + 0x57C))) != 4)) goto L_C03E3FC;
    F4 = ((float)(*(int *)((R4 + 0x304))));
    L_C03E4DA:;
    if ((!(0.0f > F4))) goto L_C03E4E8;
    if ((F4 > 1.0f)) goto L_C03E4E8;
    F4 = (1.0f);
    L_C03E4E8:;
    R5 = (0x40);
    if (((*(int *)((R4 + 0xC0))) != 45)) goto L_C03E542;
    if (((*(int *)((R4 + 0x578))) != 3)) goto L_C03E528;
    if (((R5 & (*(int *)((R4 + 0x20C)))) != 0)) goto L_C03E55A;
    *(unsigned int *)((R4 + 0x304)) = (int)((float)(*(int *)((R4 + 0x304))) + F4);
    if (((int)(*(int *)((R4 + 0x304))) <= (int)(*(int *)((R4 + 0x308))))) goto L_C03E55A;
    *(unsigned int *)((R4 + 0x304)) = (*(int *)((R4 + 0x308)));
    L_C03E55A:;
    *(unsigned int *)((R4 + 0x56C)) = (int)((float)(*(int *)((R4 + 0x56C))) + F4);
    if (((int)(*(int *)((R4 + 0x304))) > 0)) goto L_C03E58C;
    *(unsigned int *)((((*(int *)((R4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
    *(unsigned int *)((R4 + 0x304)) = 0x0;
    *(unsigned int *)((R4 + 0x5CC)) = (*(int *)0xC246300);
    L_C03E58C:;
    return (FUN_0c036256(R4, R5, *(Stk7 *)(((int)stk + 4))));
    L_C03E528:;
    if (((R5 & (*(int *)((R4 + 0x20C)))) != 0)) goto L_C03E55A;
    *(unsigned int *)((R4 + 0x304)) = (int)((float)(*(int *)((R4 + 0x304))) - F4);
    goto L_C03E55A;
    L_C03E542:;
    if (((R5 & (*(int *)((R4 + 0x20C)))) != 0)) goto L_C03E55A;
    *(unsigned int *)((R4 + 0x304)) = (int)((float)(*(int *)((R4 + 0x304))) - F4);
    goto L_C03E55A;
    L_C03E3FC:;
    t35 = *(int *)((R4 + 0x578));
    R0 = (t35);
    R5 = (0x6);
    if ((t35 == 0)) goto L_C03E42E;
    if ((R0 == 1)) goto L_C03E42E;
    if ((R0 == 2)) goto L_C03E42E;
    if ((R0 == 3)) goto L_C03E42E;
    if ((R0 == 4)) goto L_C03E458;
    if ((R0 == 5)) goto L_C03E458;
    if ((R0 == 6)) goto L_C03E458;
    if ((R0 == 7)) goto L_C03E482;
    if ((R0 == 8)) goto L_C03E4AC;
    if ((R0 == 9)) goto L_C03E4AC;
    goto L_C03E4DA;
    L_C03E4AC:;
    if (((int)(*(int *)((R4 + 0x310))) <= (int)R5)) goto L_C03E4C6;
    R0 = (0x18);
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    L_C03E4D4:;
    F4 = ((F3 * (*(float *)((R13 + R0)))));
    goto L_C03E4DA;
    L_C03E4C6:;
    R0 = (((*(int *)((R4 + 0x310))) << 2));
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    goto L_C03E4D4;
    L_C03E482:;
    if (((int)(*(int *)((R4 + 0x310))) <= (int)R5)) goto L_C03E496;
    R0 = (0x18);
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    L_C03E4A4:;
    F4 = ((F3 * (*(float *)((R7 + R0)))));
    goto L_C03E4DA;
    L_C03E496:;
    R0 = (((*(int *)((R4 + 0x310))) << 2));
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    goto L_C03E4A4;
    L_C03E458:;
    if (((int)(*(int *)((R4 + 0x310))) <= (int)R5)) goto L_C03E46C;
    R0 = (0x18);
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    L_C03E47A:;
    F4 = ((F3 * (*(float *)((R14 + R0)))));
    goto L_C03E4DA;
    L_C03E46C:;
    R0 = (((*(int *)((R4 + 0x310))) << 2));
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    goto L_C03E47A;
    L_C03E42E:;
    if (((int)(*(int *)((R4 + 0x310))) <= (int)R5)) goto L_C03E442;
    R0 = (0x18);
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    L_C03E450:;
    F4 = ((F3 * (*(float *)((R6 + R0)))));
    goto L_C03E4DA;
    L_C03E442:;
    R0 = (((*(int *)((R4 + 0x310))) << 2));
    F3 = ((float)(*(int *)((R4 + 0x1CC))));
    goto L_C03E450;
}

void FUN_0c01c274(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int t6;
    int t9;
    float u12;
    float u13;
    float u21;
    float u22;
    float u28;
    float u29;
    float u35;
    float u36;
    float u41;
    float u42;
    float u48;
    float u49;
    float u61;
    int t64;
    int t68;
    int t69;
    int t74;
    int t79;
    int t80;
    int t85;
    int t90;
    int t94;
    int t97;
    int t100;
    int t107;
    int t113;
    int t116;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
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
    float F8;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F8 = f8;
    *(unsigned int *)(((int)stk + 4)) = 0xC23FF14;
    R11 = (0x1);
    R12 = (0xC23FE74);
    R13 = (0xC23FE80);
    R3 = (0xC23FF14);
    R8 = (0x100);
    R9 = (0xC23FE90);
    L_C01C44C:;
    t6 = *(int *)((R9 + 0x0));
    R2 = (t6);
    if ((t6 == 0)) goto L_C01C456;
    t9 = *(int *)((R9 + 0x0));
    u12 = *(float *)((t9 + 0x30));
    u13 = *(float *)((t9 + 0x3C));
    R10 = ((*(int *)(((int)stk + 4))));
    R14 = (t9);
    F4 = ((*(float *)((t9 + 0x1E4))));
    F5 = (u13);
    F6 = (u12);
    if ((!(u12 > u13))) goto L_C01C2AE;
    F3 = (F6);
    L_C01C2B0:;
    *(float *)((R12 + 0x0)) = F3;
    u21 = *(float *)((R14 + 0x34));
    u22 = *(float *)((R14 + 0x40));
    R0 = (0x4);
    F5 = (u21);
    F6 = (u22);
    if ((!(u21 > u22))) goto L_C01C2C4;
    F3 = (F5);
    L_C01C2C6:;
    *(float *)((R12 + R0)) = F3;
    u28 = *(float *)((R14 + 0x38));
    u29 = *(float *)((R14 + 0x44));
    R0 = (0x8);
    F5 = (u28);
    F6 = (u29);
    if ((!(u28 > u29))) goto L_C01C2DA;
    F3 = (F5);
    L_C01C2DC:;
    *(float *)((R12 + R0)) = F3;
    u35 = *(float *)((R14 + 0x30));
    u36 = *(float *)((R14 + 0x3C));
    F5 = (u36);
    F6 = (u35);
    if ((!(u36 > u35))) goto L_C01C2EE;
    F3 = (F6);
    L_C01C2F0:;
    *(float *)((R13 + 0x0)) = F3;
    u41 = *(float *)((R14 + 0x34));
    u42 = *(float *)((R14 + 0x40));
    R0 = (0x4);
    F5 = (u42);
    F6 = (u41);
    if ((!(u42 > u41))) goto L_C01C304;
    F3 = (F6);
    L_C01C306:;
    *(float *)((R13 + R0)) = F3;
    u48 = *(float *)((R14 + 0x38));
    u49 = *(float *)((R14 + 0x44));
    R0 = (0x8);
    F5 = (u49);
    F6 = (u48);
    T_ = (((u49 > u48)));
    if ((!(u49 > u48))) goto L_C01C33C;
    F3 = (F6);
    L_C01C33E:;
    *(float *)((R13 + R0)) = F3;
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + F4);
    *(float *)((R12 + 0x4)) = ((*(float *)((R12 + 0x4))) + F4);
    *(float *)((R12 + 0x8)) = ((*(float *)((R12 + 0x8))) + F4);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - F4);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - F4);
    u61 = *(float *)((R13 + 0x8));
    *(float *)((R13 + 0x8)) = (u61 - F4);
    R0 = (0x8);
    F2 = ((u61 - F4));
    L_C01C444:;
    t64 = *(int *)((R10 + 0x0));
    R4 = (t64);
    if ((t64 != 0)) goto L_C01C36E;
    R9 = ((R9 + 0x4));
    goto L_C01C44C;
    L_C01C36E:;
    t68 = *(int *)((R4 + 0xBC));
    t69 = *(int *)((R14 + 0xBC));
    R0 = (0xBC);
    R3 = (t68);
    R5 = (t69);
    if ((t68 == t69)) goto L_C01C442;
    t74 = *(int *)((R4 + 0x1B0));
    R0 = (0x1B0);
    R1 = ((((int)R5 >= 0) ? (0x1 << (R5 & 31)) : ((-(int)R5 & 31) ? ((int)0x1 >> (-(int)R5 & 31)) : ((int)0x1 >> 31))));
    R3 = (t74);
    if ((((((int)R5 >= 0) ? (0x1 << (R5 & 31)) : ((-(int)R5 & 31) ? ((int)0x1 >> (-(int)R5 & 31)) : ((int)0x1 >> 31))) & t74) != 0)) goto L_C01C442;
    t79 = *(int *)((R4 + 0xBC));
    t80 = *(int *)((R14 + 0x1EC));
    R0 = (0x1EC);
    R1 = (t80);
    R3 = (t79);
    if ((((((int)t79 >= 0) ? (R11 << (t79 & 31)) : ((-(int)t79 & 31) ? ((int)R11 >> (-(int)t79 & 31)) : ((int)R11 >> 31))) & t80) != 0)) goto L_C01C442;
    t85 = *(int *)0xC23A1A8;
    R3 = (t85);
    R5 = (t85);
    R6 = (0x0);
    if (((t85 & R8) == 0)) goto L_C01C400;
    t90 = *(int *)((R4 + 0xBC));
    R0 = (0xBC);
    R1 = (t90);
    if (((int)t90 >= (int)0x2)) goto L_C01C3D2;
    t94 = *(int *)((R14 + R0));
    R1 = (t94);
    if (((int)t94 < (int)0x4)) goto L_C01C3D2;
    t97 = *(int *)((R14 + R0));
    R1 = (t97);
    if (((int)t97 >= (int)0x10)) goto L_C01C3D2;
    t100 = *(int *)((R4 + R0));
    R7 = (t100);
    if ((t100 != 0)) goto L_C01C3C6;
    if (((0x80000 & R5) != 0)) goto L_C01C3D0;
    L_C01C3C6:;
    if ((R7 == 0)) goto L_C01C3D2;
    if (((0x100000 & R5) == 0)) goto L_C01C3D2;
    L_C01C3D0:;
    R6 = (R11);
    L_C01C3D2:;
    t107 = *(int *)((R4 + R0));
    R3 = (0x4);
    R7 = (t107);
    if (((int)t107 < (int)0x4)) goto L_C01C400;
    R1 = (0x10);
    if (((int)R7 >= (int)0x10)) goto L_C01C400;
    t113 = *(int *)((R14 + R0));
    R3 = (t113);
    if (((int)t113 >= (int)0x2)) goto L_C01C400;
    t116 = *(int *)((R14 + R0));
    R7 = (t116);
    if ((t116 != 0)) goto L_C01C3F4;
    if (((0x80000 & R5) != 0)) goto L_C01C3FE;
    L_C01C3F4:;
    if ((R7 == 0)) goto L_C01C400;
    R3 = (0x100000);
    if (((0x100000 & R5) == 0)) goto L_C01C400;
    L_C01C3FE:;
    R6 = (R11);
    L_C01C400:;
    if ((R6 != 0)) goto L_C01C442;
    R0 = (0xC8);
    if ((((*(int *)((R4 + 0xC8))) & 0x3FF) == 0)) goto L_C01C42C;
    R0 = ((FUN_0c01c46a(R4, R14)));
    L_C01C442:;
    R10 = ((R10 + 0x4));
    goto L_C01C444;
    L_C01C42C:;
    if ((((*(int *)((R4 + R0))) & 0x20000) == 0)) goto L_C01C43C;
    R0 = ((FUN_0c01c86c(R4, R14)));
    goto L_C01C442;
    L_C01C43C:;
    R0 = ((FUN_0c01cb94(R4, R14)));
    goto L_C01C442;
    L_C01C33C:;
    F3 = (F5);
    goto L_C01C33E;
    L_C01C304:;
    F3 = (F5);
    goto L_C01C306;
    L_C01C2EE:;
    F3 = (F5);
    goto L_C01C2F0;
    L_C01C2DA:;
    F3 = (F6);
    goto L_C01C2DC;
    L_C01C2C4:;
    F3 = (F6);
    goto L_C01C2C6;
    L_C01C2AE:;
    F3 = (F5);
    goto L_C01C2B0;
    L_C01C456:;
}

int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t24;
    int t25;
    int t26;
    float u27;
    float u29;
    float u30;
    float u32;
    int t33;
    int t35;
    int t36;
    float u37;
    float u40;
    float u41;
    float u43;
    int t11;
    float u12;
    float u13;
    int stk[13];

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 24)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t7 = 0x0;
    t8 = a6;
    t9 = a4;
    t10 = a8;
    u14 = (float)(t1 << 16);
    u15 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u16 = 65536.0f;
    u17 = f5;
    u18 = f6;
    u19 = (float)(t0 << 16);
    u20 = (float)(t2 << 16);
    u21 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 16)))) {
            t24 = *(short *)((t9 + 0x0));
            if (((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u18 = u15;
            t25 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u14);
                t26 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238BC0;
                u27 = u15;
                u27 = u27 + u12 * u19;
                u15 = u27;
                u16 = (*(float *)((((unsigned char)t26 << 2) + t7)));
                t11 = ((unsigned char)t26 << 2);
                u12 = u18;
                u17 = u19;
                u29 = u15;
                u29 = u29 + u12 * u16;
                u15 = u29;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238FC0;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u14 = u13;
                u30 = u15;
                u30 = u30 + u12 * u13;
                u15 = u30;
                u12 = u18;
                *(unsigned short *)((t8 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t8 = (t8 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u32 = u15;
                u32 = u32 + u12 * u16;
                u15 = u32;
                u16 = u15;
                u19 = u15;
                t25 = (t25 + 0x2);
                *(unsigned short *)((t8 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t8 = (t8 + 0x2);
                if ((int)t25 >= (int)0x20) {
                    break;
                }
            }
            t33 = *(short *)((t9 + 0x0));
            t11 = t33;
            t11 = ((int)t11 >> 8);
            t11 = (unsigned char)t11;
            t11 = (t11 | ((t33 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t11) != 0) {
                t7 = (*(int *)(((int)stk + 12)));
                return t7;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)t11 & 0x1FFF) + 0x1);
            u18 = u15;
            t35 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u21);
                t36 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238BC0;
                u37 = u15;
                u37 = u37 + u12 * u20;
                u15 = u37;
                u16 = (*(float *)((((unsigned char)t36 << 2) + t7)));
                t11 = ((unsigned char)t36 << 2);
                u12 = u18;
                u17 = u20;
                u40 = u15;
                u40 = u40 + u12 * u16;
                u15 = u40;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238FC0;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u21 = u13;
                u41 = u15;
                u41 = u41 + u12 * u13;
                u15 = u41;
                u12 = u18;
                *(unsigned short *)((t10 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t10 = (t10 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u43 = u15;
                u43 = u43 + u12 * u16;
                u15 = u43;
                u16 = u15;
                u20 = u15;
                t35 = (t35 + 0x2);
                *(unsigned short *)((t10 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t10 = (t10 + 0x2);
                if ((int)t35 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x2);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            continue;
        }
        t7 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u19 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u14 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 24))) + 0x0)) = ((unsigned int)(int)u21 >> 16);
        return t7;
    }
    return (*(int *)(((int)stk + 8)));
}

int FUN_0c0c8e40(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    int t17;
    int t19;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    float u64;
    float u70;
    float u76;
    int t85;
    int t87;
    int t89;
    int t0;
    int t2;
    int stk[26];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x34);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x34) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x34) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x28);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x28) + 0x4);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 4) + 0x28) + 0x8);
    t1 = a7;
    for (;;) {
        if ((int)(*(short *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) >= 0) {
            t0 = (nlPushMatrix(0x0));
            t0 = (*(short *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x2)));
            *(unsigned short *)(((((int)stk + 4) + 0x24) + 0x0)) = t0;
            if ((int)t1 < 0) {
            } else {
                t0 = (FUN_0c0dcca0(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x4)));
                t17 = *(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0x0));
                t19 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0));
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((int)t17 >> 4) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = (((int)t17 >> 14) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = ((((t17 << 2) << 2) << 2) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = (((int)t19 >> 4) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (((int)t19 >> 14) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 36))) + 0x0)) = ((((t19 << 2) << 2) << 2) & 0xFFC0);
                t27 = (((int)t19 >> 14) & 0xFFC0);
                t28 = 0x0;
                t29 = 0x0;
                t30 = (*(int *)(((int)stk + 12)));
                t31 = (*(int *)(((int)stk + 8)));
                for (;;) {
                    if ((int)t29 >= (int)0x3) {
                        break;
                    }
                    t2 = t29;
                    t2 = (t2 << 2);
                    t0 = t2;
                    t27 = (*(int *)(((((int)stk + 4) + 0x28) + t0)));
                    if ((int)(*(int *)(((((int)stk + 4) + 0x34) + t0))) < (int)t27) {
                        t0 = t2;
                        t27 = (*(int *)(((((int)stk + 4) + 0x34) + t0)));
                        if ((int)((*(int *)(((((int)stk + 4) + 0x28) + t0))) - t27) > (int)0x8000) {
                            t27 = (*(int *)((t30 + 0x0)));
                            t27 = (t27 + 0x10000);
                            *(unsigned int *)((t30 + 0x0)) = t27;
                        }
                    } else {
                        t0 = t28;
                        t27 = (*(int *)(((((int)stk + 4) + 0x28) + t0)));
                        if ((int)((*(int *)(((((int)stk + 4) + 0x34) + t0))) - t27) > (int)0x8000) {
                            t27 = (*(int *)((t31 + 0x0)));
                            t27 = (t27 + 0x10000);
                            *(unsigned int *)((t31 + 0x0)) = t27;
                        }
                    }
                    t28 = (t28 + 0x4);
                    t30 = (t30 + 0x4);
                    t29 = (t29 + 0x1);
                    t31 = (t31 + 0x4);
                }
                t2 = (*(int *)(((int)stk + 24)));
                t2 = (*(int *)((t2 + 0x0)));
                u64 = (float)t2;
                u64 = u64 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))) - t2);
                t0 = (nlRotateAZ((int)u64));
                t2 = (*(int *)(((int)stk + 12)));
                t2 = (*(int *)((t2 + 0x0)));
                u70 = (float)t2;
                u70 = u70 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - t2);
                t0 = (nlRotateAY((int)u70));
                t2 = (*(int *)(((int)stk + 32)));
                t2 = (*(int *)((t2 + 0x0)));
                u76 = (float)t2;
                u76 = u76 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) - t2);
                t0 = (nlRotateAX((int)u76));
                if (t1 == 0) {
                    t0 = (nlGetMatrix(0xC31FD40));
                }
                t1 = (t1 - 1);
            }
            t85 = *(int *)(((int)stk + 20));
            t0 = 0x24;
            *(unsigned int *)((t85 + 0x0)) = ((*(int *)((t85 + 0x0))) + 0x4);
            t87 = *(int *)(((int)stk + 16));
            *(unsigned int *)((t87 + 0x0)) = ((*(int *)((t87 + 0x0))) + 0x4);
            t89 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t89 + 0x0)) = ((*(int *)((t89 + 0x0))) + 0x10);
            t2 = (*(short *)((((int)stk + 4) + t0)));
            t2 = (unsigned short)t2;
            if ((0x1 & t2) != 0) {
                t0 = (((int (*)(int, int, int, int, float))(FUN_0c0c8e40))((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), t1, f4));
                t1 = t0;
            }
            t0 = (nlPopMatrix(0x1));
            if ((t2 & 0x2) == 0) continue;
            break;
        }
        break;
    }
    return t1;
}

float vmsio_block_write(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int t29;
    int t31;
    int t34;
    int t36;
    int t37;
    int t40;
    int t42;
    int t47;
    int t52;
    int t60;
    int t67;
    int t70;
    int t72;
    int t73;
    int t76;
    int t78;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(unsigned int *)(((int)stk + 24)) = R4;
    *(unsigned int *)(((int)stk + 16)) = R6;
    *(unsigned int *)(((int)stk + 36)) = (((*(int *)(((int)stk + 24))) * 0x148) + 0xC956768);
    t2 = vmsio_ismount((*(int *)(((int)stk + 24))));
    R0 = (t2);
    R10 = (0xC223A0A);
    R11 = (0xC223CB6);
    R13 = (0xC232022);
    R8 = (R5);
    T_ = (((t2 == 0)));
    if ((t2 != 0)) goto L_C2323CC;
    vmsfb_sleep();
    L_C23252E:;
    R0 = (0xFFFFFF01);
    L_C232530:;
    return F0;
    L_C2323CC:;
    R14 = ((*(int *)(((int)stk + 24))));
    t14 = *(int *)(((R14 << 2) + 0xC2382DC));
    kdGetDevice(t14);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x48)));
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    R14 = (t14);
    R4 = (0x0);
    R9 = (0x0);
    L_C23246C:;
    if (((int)(*(int *)(((int)stk + 44))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x40))))) goto L_C2323F0;
    L_C23247A:;
    t29 = (((int (*)(int, int, int, int))(R11))(R14, R5, R6, R7)) != 0;
    if (t29) goto L_C2324C2;
    *(int *)((int)stk + 12) = (R8);
    t31 = kdSetGetLastError(*(Stk4 *)((int)stk + 12));
    R12 = (t31);
    if (((int)t31 >= 0)) goto L_C2324A0;
    t34 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C23247A;
    L_C2324A0:;
    t36 = (((int (*)(int, int, int, int))(R10))(R14, R12, R6, R7)) != 0;
    if (t36) goto L_C2324B2;
    t37 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C2324A0;
    L_C2324B2:;
    *(unsigned int *)(((int)stk + 20)) = (kdGetDevice(R14));
    t40 = (((int (*)(int))(R11))(R14)) == 0;
    if (t40) goto L_C2324E0;
    L_C2324C2:;
    R0 = (0xFFFFFF30);
    goto L_C232530;
    L_C2324E0:;
    t42 = *(int *)0xC239F58;
    *(unsigned int *)(((int)stk + 16)) = t42;
    if ((t42 == 0)) goto L_C232500;
    t47 = (((int (*)(int, int, int, int))((*(int *)(((int)stk + 16)))))((*(int *)(((int)stk + 24))), R8, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x10))) != 0;
    if (t47) goto L_C23250C;
    L_C232500:;
    *(unsigned char *)(((int)stk + 28)) = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0xC)));
    L_C23250C:;
    t52 = *(signed char *)(((int)stk + 28));
    R0 = ((unsigned char)t52);
    if (((unsigned char)t52 == 7)) goto L_C232524;
    if ((R0 == 0xFC)) goto L_C23247A;
    if ((R0 == 0xFB)) goto L_C232528;
    goto L_C23252E;
    L_C232528:;
    R0 = (0xFFFFFF40);
    goto L_C232530;
    L_C232524:;
    R0 = (0x0);
    goto L_C232530;
    L_C2323F0:;
    t60 = (((int (*)(int, int, int, int))(R11))(R14, R5, R6, R7)) != 0;
    if (t60) goto L_C2324C2;
    *(volatile int *)(((int)stk + 16));
    *(int *)((int)stk + 12) = ((FUN_0c0e5dc0()));
    *(int *)((int)stk + 8) = ((*(int *)(((int)stk + 20))));
    *(int *)((int)stk + 4) = (R8);
    t67 = kdSetBlockWrite(*(Stk4 *)((int)stk + 4));
    R12 = (t67);
    if (((int)t67 >= 0)) goto L_C232426;
    t70 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C2323F0;
    L_C232426:;
    t72 = (((int (*)(int, int, int, int))(R10))(R14, R12, R6, R7)) != 0;
    if (t72) goto L_C232438;
    t73 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C232426;
    L_C232438:;
    *(unsigned int *)(((int)stk + 40)) = (kdGetDevice(R14));
    t76 = (((int (*)(int))(R11))(R14)) != 0;
    if (t76) goto L_C2324C2;
    t78 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x4));
    R0 = ((unsigned char)t78);
    if (((unsigned char)t78 == 7)) goto L_C23245C;
    if ((R0 == 0xFC)) goto L_C2323F0;
    goto L_C23252E;
    L_C23245C:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    R9 = ((R9 + 0x1));
    goto L_C23246C;
}
