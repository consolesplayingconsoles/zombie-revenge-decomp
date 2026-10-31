/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(int, int, int, int);
int FUN_0c01cdc2(int);
int FUN_0c053c64(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0847a2(int, float);
int FUN_0c0847b8(int);
int FUN_0c0847de(int);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086b70(void);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0ba1d8(int);
int FUN_0c0ba278(int);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e262a(int);
int FUN_0c0e2794(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c01913c(int a4, int a5, int a6, int a7);
int FUN_0c087290(int a4);
int FUN_0c0ba31a(int a4, int a5, int a6, int a7);
int FUN_0c0b86cc(void);
int FUN_0c0887bc(int a4);
void FUN_0c076cc0(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c07d72e(int a4, int a5, int a6, int a7);
int FUN_0c05d95c(int a4, int a5);
float FUN_0c0901bc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c07c21c(int a4, int a5, int a6, int a7);
int FUN_0c05ac0c(int a4, int a5, int a6);

int FUN_0c01913c(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t1;
    register float u3;
    register float u4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t16;
    register int t19;
    register float u23;
    register float u24;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register float u32;
    register float u72;
    register float u73;
    register float u61;
    register int t9;
    register int t14;
    register float u31;
    register float u33;
    register float u68;
    register float u69;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c01843e(a4, a5, a6, a7);
    u3 = *(float *)((a4 + 0x30));
    u4 = *(float *)((a4 + 0x38));
    t5 = *(int *)((a4 + 0xAC));
    *(unsigned int *)(((int)stk + 40)) = ((int)((float)(int)u4 / 200.0f) - t5);
    *(unsigned int *)(((int)stk + 16)) = ((int)((float)(int)u4 / 200.0f) + t5);
    t6 = *(int *)((a4 + 0xA8));
    *(unsigned int *)(((int)stk + 20)) = ((int)((float)(int)u3 / 200.0f) - t6);
    t8 = 0xA8;
    t10 = ((int)((float)(int)u3 / 200.0f) - t6);
    t11 = (int)((float)(int)u3 / 200.0f);
    t12 = t5;
    t13 = (*(int *)(((int)stk + 40)));
    t15 = 0x0;
    for (;;) {
        t16 = *(int *)(((int)stk + 16));
        if ((int)t13 > (int)t16) {
            break;
        }
        t10 = 0xC23F058;
        t9 = 0xC23EE58;
        t14 = (t15 * 0x1A);
        t11 = (*(int *)(((int)stk + 20)));
        t12 = 0x0;
        t9 = (t9 + (((((t13 + 0x10) & 0xF) << 2) << 2) << 1));
        t14 = (t14 + t10);
        *(unsigned int *)(((int)stk + 8)) = t9;
        if ((int)t11 <= (int)((int)((float)(int)u3 / 200.0f) + t6)) {
            for (;;) {
                t8 = t12;
                t10 = t11;
                t8 = (t8 << 1);
                t10 = (t10 + 0x10);
                t19 = t8;
                t8 = (*(int *)(((int)stk + 8)));
                t10 = (t10 & 0xF);
                t10 = (t10 << 1);
                t10 = (*(short *)((t10 + t8)));
                t11 = (t11 + 0x1);
                *(unsigned short *)(((t19 + t14) + 0x0)) = t10;
                t12 = (t12 + 0x1);
                if ((int)t11 > (int)((int)((float)(int)u3 / 200.0f) + t6)) {
                    break;
                }
            }
        }
        t15 = (t15 + 0x1);
        t13 = (t13 + 0x1);
    }
    u23 = *(float *)((t1 + 0x254));
    u24 = *(float *)((t1 + 0x25C));
    t26 = *(int *)((a4 + 0xAC));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(float *)(((int)stk + 32)) = (-(u24 / 200.0f));
    *(float *)(((int)stk + 36)) = (-(u23 / 200.0f));
    t27 = t16;
    t28 = t14;
    t29 = (-t26);
    t30 = 0x0;
    u32 = ((float)(int)u4 / 200.0f);
    for (;;) {
        if ((int)t29 <= (int)(*(int *)((a4 + 0xAC)))) {
            t27 = (*(int *)(((int)stk + 16)));
            t27 = (t27 * 0x1A);
            *(unsigned int *)(((int)stk + 8)) = (0xC23F058 + t27);
            t30 = (*(int *)((a4 + 0xA8)));
            t28 = (*(int *)(((int)stk + 20)));
            t30 = (-t30);
            u32 = (float)(*(int *)(((int)stk + 24)));
            u33 = u32;
            u33 = (u33 * 200.0f);
            for (;;) {
                if ((int)t30 > (int)(*(int *)((a4 + 0xA8)))) {
                    break;
                }
                t27 = 0xC0DC510;
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((-(*(short *)((t1 + 0x3CE)))));
                nlRotateAX((-(*(short *)((t1 + 0x3CC)))));
                FUN_0c0dcc70((*(float *)(((int)stk + 36))), 0.0f, (*(float *)(((int)stk + 32))));
                u32 = (float)t30;
                *(float *)(((int)stk + 56)) = u32;
                u32 = (float)t29;
                *(float *)(((int)stk + 60)) = 0.0f;
                *(float *)(((int)stk + 64)) = u32;
                FUN_0c0db470((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28));
                t27 = ((int)stk + 4);
                u32 = (*(float *)(((int)stk + 44)));
                t27 = (t27 + 0x8);
                *(float *)((t27 + 0x0)) = u32;
                u32 = (*(float *)(((int)stk + 48)));
                *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u32;
                u32 = (*(float *)(((int)stk + 52)));
                *(float *)((((int)stk + 4) + 0x0)) = u32;
                nlPopMatrix(0x1);
                u32 = (*(float *)(((int)stk + 4)));
                u31 = 0.0f;
                u32 = (u32 - (1.0f + 1.0f));
                *(float *)(((int)stk + 4)) = u32;
                u72 = u31;
                u73 = u32;
                if (!(u32 > u31)) {
                    u31 = (*(float *)(((int)stk + 4)));
                    u32 = (*(float *)(((int)stk + 12)));
                    u32 = _builtin_fabsf(u32);
                    u32 = (u32 + u31);
                    u31 = 0.0f;
                    if (!(u32 > u31)) {
                        nlPushMatrix(0x0);
                        u32 = (*(float *)((a4 + 0x38)));
                        u31 = (*(float *)((a4 + 0x30)));
                        u61 = (u33 - u32);
                        u32 = (float)t28;
                        u32 = (u32 * 200.0f);
                        FUN_0c0dcc70((u32 - u31), 0.0f, u61);
                        FUN_0c0c465c((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))));
                        t27 = 0xC0DC4C0;
                        nlPopMatrix(0x1);
                    } else {
                        u68 = u31;
                        u69 = u32;
                    }
                    u72 = u68;
                    u73 = u69;
                }
                u31 = u72;
                u32 = u73;
                t28 = (t28 + 0x1);
                t30 = (t30 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            }
            t29 = (t29 + 0x1);
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
            t27 = (*(int *)(((int)stk + 16)));
            t27 = (t27 + 0x1);
            *(unsigned int *)(((int)stk + 16)) = t27;
            continue;
        }
        break;
    }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x44 + a4) + 0x0))));
    return 0x38;
}

int FUN_0c087290(int a4)
{
    int stk[34];
    register int t0;
    register int t61;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register float u17;
    register float u18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register float t26;
    register int t27;
    register int t28;
    register int t29;
    register float t30;
    register int t31;
    register int t33;
    register int t35;
    register float u37;
    register int t38;
    register float u40;
    register int t41;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;

    t0 = *(int *)0xC23ED50;
    t61 = t0;
    if (t0 == 64) {
    } else {
        nlPushMatrix(0x0);
        t3 = *(int *)((a4 + 0x3C));
        t4 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        t5 = *(int *)((a4 + 0x50));
        *(unsigned int *)(((int)stk + 16)) = t5;
        t6 = *(int *)((a4 + 0x4C));
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)((a4 + 0x40))) + (t5 << 2));
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)((a4 + 0x44))) + (t5 << 2));
        *(unsigned int *)(((int)stk + 32)) = ((t5 << 2) + (*(int *)((a4 + 0x48))));
        FUN_0c0de3c0(0x4, 0x1);
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x20);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 8) + 0x20) + 0x18);
        t11 = (t6 + (t5 << 2));
        t12 = t3;
        for (;;) {
            *(unsigned int *)(((int)stk + 20)) = (((int)stk + 8) + 0x20);
            *(unsigned int *)(((int)stk + 24)) = 0xC10A984;
            t13 = *(int *)(((int)stk + 32));
            *(unsigned int *)(((int)stk + 32)) = (t13 - 4);
            *(int *)((int)stk + 4) = (t13 - 4);
            t14 = FUN_0c0da2e0();
            t15 = *(int *)(((t13 - 4) + 0x0));
            *(unsigned int *)(((t13 - 4) + 0x0)) = (t15 + ((t14 & 0x1FF) + 0x400));
            t11 = (t11 - 4);
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t15 + ((t14 & 0x1FF) + 0x400))));
            u18 = *(float *)((t12 + 0xC));
            t19 = *(int *)((t11 + 0x0));
            t20 = 0x4;
            for (;;) {
                t21 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t21 + 0xC);
                t22 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t22 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t21 + 0xC) - 12)) = *(struct mv3 *)(((t22 + 0xC) - 12)); }
                t20 = (t20 - 0x1);
                if (t20 == 0) {
                    break;
                }
            }
            t23 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t23 - 4);
            *(int *)((int)stk + 4) = (t23 - 4);
            t24 = FUN_0c0da2e0();
            t25 = *(int *)(((t23 - 4) + 0x0));
            *(unsigned int *)(((t23 - 4) + 0x0)) = (t25 + ((t24 & 0xFFF) + 0x200));
            t26 = FUN_0c0da410((t25 + ((t24 & 0xFFF) + 0x200)));
            t27 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t27 - 4);
            *(int *)((int)stk + 4) = (t27 - 4);
            t28 = FUN_0c0da2e0();
            t29 = *(int *)(((t27 - 4) + 0x0));
            *(unsigned int *)(((t27 - 4) + 0x0)) = (t29 + ((unsigned char)t28 + 0x100));
            t30 = FUN_0c0da410((t29 + ((unsigned char)t28 + 0x100)));
            t31 = *(int *)(((int)stk + 8));
            *(float *)((t31 + 0x0)) = ((*(float *)((t31 + 0x0))) + (t30 * 1.0f));
            t33 = *(int *)(((int)stk + 12));
            *(float *)((t33 + 0x0)) = ((*(float *)((t33 + 0x0))) + (t30 * 1.0f));
            t35 = *(int *)(((int)stk + 8));
            u37 = ((t26 * 0.099999994f) + 0.899999976f);
            *(float *)((t35 + 0x4)) = ((*(float *)((t35 + 0x4))) * u37);
            t38 = *(int *)(((int)stk + 12));
            u40 = (0.899999976f - (t26 * 0.099999994f));
            *(float *)((t38 + 0x4)) = ((*(float *)((t38 + 0x4))) * u40);
            t41 = ((int (*)(int, int, float))(FUN_0c0be6ee))(((short)((unsigned int)t19 >> 16) + 0x1B8), (((int)stk + 8) + 0x20), (t30 * 1.0f));
            FUN_0c0dbda0((0x2AC + t4));
            FUN_0c0dcca0(t12);
            nlRotateAY((*(short *)((t4 + 0x3CE))));
            nlRotateAX((*(short *)((t4 + 0x3CC))));
            nlScale((u18 * u17), (u18 * u17), (u18 * u17));
            FUN_0c0de000((u18 * u17));
            FUN_0c0c475c(((short)((unsigned int)t19 >> 16) + 0x1B8), (*(float *)0xC087580));
            t12 = (t12 + 0x10);
            *(unsigned int *)((t11 + 0x0)) = ((((FUN_0c0da2e0()) + (*(int *)((t11 + 0x0)))) + 0x4000) & 0x1FFFFF);
            t54 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t54 - 1);
            if ((t54 - 1) != 0) continue;
            break;
        }
        t55 = 0x1B8;
        t56 = 0x20;
        for (;;) {
            t57 = t55;
            t55 = (t55 + 0x1);
            t58 = ((int (*)(int, int))(FUN_0c0be6ee))(t57, 0xC10A984);
            t56 = (t56 - 0x1);
            if (t56 == 0) {
                break;
            }
        }
        FUN_0c0de3c0(0x4, 0x5);
        t61 = (nlPopMatrix(0x1));
    }
    return t61;
}

int FUN_0c0ba31a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t5 = *(int *)((a4 + 0x3C));
    if ((((*(int *)0xC23ED5C) & 0x101F4) == 0) && ((t0 = *(int *)0xC23ED9C, t0 == 25) || ((t1 = *(int *)0xC23ED9C, t1 == 4) || (t2 = *(int *)0xC23ED9C, t2 == 7)))) {
    } else {
        *(unsigned int *)((((*(int *)((a4 + 0x3C))) << 2) + 0xC23EDE0)) = 0x1;
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    if ((int)(*(int *)((((((t5 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) < (int)0xFFFFFFC0) {
        t0 = *(int *)((a4 + 0x4C));
        t1 = t0;
        if (t0 == 0) {
            *(unsigned int *)((a4 + 0x4C)) = 0x1;
            t2 = *(int *)((a4 + 0x44));
            if ((int)(t2 - 1) >= 0) {
                t6 = *(int *)((a4 + 0x40));
                if (t6 == (t2 - 1)) {
                    if ((int)((t2 - 1) - 1) < 0) {
                        *(unsigned int *)((a4 + 0x44)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x44)) = ((t2 - 1) - 1);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x44)) = (t2 - 1);
                }
                t2 = t6;
            } else {
                if ((*(int *)((a4 + 0x40))) != 2) {
                    *(unsigned int *)((a4 + 0x44)) = 0x2;
                } else {
                    *(unsigned int *)((a4 + 0x44)) = 0x1;
                }
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        if ((int)(*(int *)((((((t5 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) > (int)0x40) {
            if ((*(int *)((a4 + 0x4C))) == 0) {
                *(unsigned int *)((a4 + 0x4C)) = 0x1;
                t1 = *(int *)((a4 + 0x44));
                if ((int)(t1 + 0x1) <= (int)0x2) {
                    if ((*(int *)((a4 + 0x40))) == (t1 + 0x1)) {
                        if ((int)((t1 + 0x1) + 0x1) > (int)0x2) {
                            *(unsigned int *)((a4 + 0x44)) = 0x0;
                        } else {
                            *(unsigned int *)((a4 + 0x44)) = ((t1 + 0x1) + 0x1);
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x44)) = (t1 + 0x1);
                    }
                } else {
                    if ((*(int *)((a4 + 0x40))) == 0) {
                        *(unsigned int *)((a4 + 0x44)) = 0x1;
                    } else {
                        *(unsigned int *)((a4 + 0x44)) = 0x0;
                    }
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x4C)) = 0x0;
        }
        t0 = 0x40;
    }
    if (t5 != 0) {
        if (((0x606 & (*(int *)(((((((t5 << 2) + t5) << 2) << 2) + 0xC2497E0) + 0x0)))) != 0) && (t3 = *(int *)0xC2497B0, (t3 & 0x80000) != 0)) {
            *(unsigned int *)((0xC23EDD0 + (t5 << 2))) = 0x1;
            *(unsigned int *)((0xC23EDF0 + (t5 << 2))) = 0x0;
            t1 = t3;
        } else {
            t1 = t0;
        }
        t2 = t1;
    } else {
        t1 = t0;
        if (((0x606 & (*(int *)(((((((t5 << 2) + t5) << 2) << 2) + 0xC2497E0) + 0x0)))) != 0) && (t4 = *(int *)0xC2497B0, (t4 & 8) != 0)) {
            *(unsigned int *)((0xC23EDD0 + (t5 << 2))) = 0x1;
            *(unsigned int *)((0xC23EDF0 + (t5 << 2))) = 0x0;
            t1 = 0xC2497B0;
        }
        t2 = t1;
    }
    if (((*(int *)(((((((t5 << 2) + t5) << 2) << 2) + 0xC2497E0) + 0x0))) & 12) == 0) {
        t0 = *(int *)((a4 + 0x3C));
        t1 = *(int *)(((t0 << 2) + 0xC23EDF0));
        *(unsigned int *)(((t0 << 2) + 0xC23EDF0)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            *(unsigned int *)(((((*(int *)((a4 + 0x3C))) << 2) + 0xC23EDC0) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x44 + a4) + 0x0))) << 1) + 0xC204718)));
            *(unsigned int *)((((*(int *)((a4 + 0x3C))) << 2) + 0xC23EDE0)) = 0x4;
            *(unsigned int *)((0xC23EDF0 + ((*(int *)((a4 + 0x3C))) << 2))) = 0x0;
            t0 = ((int (*)(int, int, int))(FUN_0c0e19f2))(0xC23EDD0, 0xC23EDF0, 0x606);
        } else {
            t0 = t2;
            t2 = (t1 - 1);
            t1 = 0xC23EDD0;
        }
        t3 = t0;
        t0 = t2;
        t2 = t1;
    } else {
        *(unsigned int *)(((((*(int *)((a4 + 0x3C))) << 2) + 0xC23EDC0) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x44 + a4) + 0x0))) << 1) + 0xC204718)));
        *(unsigned int *)((((*(int *)((a4 + 0x3C))) << 2) + 0xC23EDE0)) = 0x4;
        *(unsigned int *)((0xC23EDF0 + ((*(int *)((a4 + 0x3C))) << 2))) = 0x0;
        t1 = ((int (*)(int, int, int))(FUN_0c0e19f2))(0xC23EDD0, 0xC23EDF0, 0x606);
    }
    t1 = 0xC0BA578;
    t4 = t3;
    t3 = t0;
    t0 = t2;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x3) {
            break;
        }
        t1 = 0x44;
        t0 = t2;
        t3 = (*(int *)((a4 + t1)));
        t0 = (t0 << 2);
        if (t3 == t2) {
            t4 = a4;
            t4 = (t4 + 0x30);
            t4 = (t4 + t0);
            u0 = (*(float *)((t4 + 0x0)));
            if (6.99999946e-05f > u0) {
                t3 = a4;
                t3 = (t3 + 0x30);
                t0 = (t0 + t3);
                u0 = (*(float *)((t0 + 0x0)));
                u0 = (u0 + 4.99999987e-06f);
                *(float *)((t0 + 0x0)) = u0;
            }
        } else {
            t3 = a4;
            t3 = (t3 + 0x30);
            t3 = (t3 + t0);
            u0 = (*(float *)((t3 + 0x0)));
            if (u0 > 4.99999987e-05f) {
                t3 = a4;
                t3 = (t3 + 0x30);
                t0 = (t0 + t3);
                u0 = (*(float *)((t0 + 0x0)));
                u0 = (u0 - 4.99999987e-06f);
                *(float *)((t0 + 0x0)) = u0;
            }
        }
        t2 = (t2 + 0x1);
    }
    FUN_0c0ba1d8(a4);
    return FUN_0c0ba278(a4);
}

int FUN_0c0b86cc(void)
{
    int stk[6];
    register int t19;
    register int t13;
    register int t14;
    register int t23;
    register int t24;
    register int t25;
    register int t30;
    register int t40;
    register int t35;
    register int t34;
    register int t51;
    register int t53;
    register int t56;
    register int t60;
    register int t64;
    register int t20;

    *(unsigned int *)0xC23ED6C = 0x1;
    *(unsigned int *)0xC23ED70 = 0x0;
    *(unsigned int *)0xC23EDE4 = 0x0;
    *(unsigned int *)0xC23EDE0 = 0x0;
    *(unsigned int *)0xC23ECFC = (((((*(int *)0xC23ED50) << 2) << 2) << 1) + 0xC2087EC);
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    t19 = 0xC23A18C;
    if ((*(int *)0xC23ED44) != 0) {
        FUN_0c086b70();
        *(unsigned int *)0xC23ED58 = (*(int *)0xC23ED50);
        *(unsigned int *)0xC23A18C = 0x1;
        if ((*(int *)0xC23ED48) == 31) {
            *(unsigned int *)0xC23ED50 = (*(int *)0xC23ED54);
            *(unsigned int *)0xC23ED54 = 0x0;
        } else {
            *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
        }
        *(unsigned int *)0xC23A190 = 0x0;
        *(unsigned int *)0xC23ED44 = 0x0;
        *(unsigned int *)0xC23ED48 = 0x0;
        t13 = *(int *)0xC23ED50;
        *(unsigned int *)0xC23ECFC = ((((t13 << 2) << 2) << 1) + 0xC2087EC);
        t14 = *(short *)((0x4 + ((((t13 << 2) << 2) << 1) + 0xC2087EC)));
        *(unsigned int *)0xC23ED00 = (0xC2087EC + ((((unsigned char)t14 << 2) << 2) << 1));
        t19 = (0xC2087EC + ((((unsigned char)t14 << 2) << 2) << 1));
    } else {
        t20 = 0xC23EDE0;
    }
    t23 = *(int *)(((*(int *)0xC23ECFC) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = t23;
    t24 = ((int (*)(int, int))(t23))(t19, t20);
    *(int *)((int)stk + 20) = 0xC23ECFC;
    t25 = *(int *)0xC2498F4;
    if ((t25 & 8) == 0) {
        return t25;
    }
    t30 = *(int *)0xC23ED50;
    if (t30 != 9) {
        t40 = t30;
        if (t30 == 11) {
        } else {
            t35 = t30;
            if (t30 == 12) {
            } else {
                t34 = FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                *(unsigned int *)0xC23A260 = 0x3;
                t35 = t34;
            }
            t40 = t35;
        }
        return t40;
    }
    if ((*(int *)0xC2041EC) != 0) {
        if ((*(int *)0xC2041F0) != 0) {
            t51 = 0x828A9;
            if ((*(int *)0xC522D6C) == 4) {
                t51 = 0x2A;
            }
            t53 = FUN_0c0cc3f8(t51, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
            if ((*(int *)0xC204994) != 0) {
                t56 = *(short *)0xC2497D8;
                if (((unsigned short)t56 & 8) == 0) {
                    if ((int)(*(int *)0xC23EABC) > 0) {
                        *(unsigned int *)0xC23A180 = 0x2;
                        *(unsigned int *)0xC23ED50 = 0x1;
                        *(unsigned int *)0xC23ED44 = 0x0;
                        *(unsigned int *)0xC23ED48 = 0x0;
                        *(unsigned int *)0xC23A184 = 0x0;
                        *(unsigned int *)0xC23A190 = 0x0;
                        *(unsigned int *)0xC23A18C = 0x0;
                        *(unsigned int *)0xC249890 = 0x0;
                        *(unsigned int *)0xC2475B0 = 0x0;
                        return 0xC23A180;
                    }
                    return (unsigned short)t56;
                }
                return (unsigned short)t56;
            }
            if ((int)(*(int *)0xC23EABC) > 0) {
                *(unsigned int *)0xC23A180 = 0x2;
                *(unsigned int *)0xC23ED50 = 0x1;
                *(unsigned int *)0xC23ED44 = 0x0;
                *(unsigned int *)0xC23ED48 = 0x0;
                *(unsigned int *)0xC23A184 = 0x0;
                *(unsigned int *)0xC23A190 = 0x0;
                *(unsigned int *)0xC23A18C = 0x0;
                *(unsigned int *)0xC249890 = 0x0;
                *(unsigned int *)0xC2475B0 = 0x0;
                return 0xC23A180;
            }
            return t53;
        }
        t60 = 0x28A9;
        if ((*(int *)0xC522D6C) == 4) {
            t60 = 0x3A;
        }
        return (FUN_0c0cc3f8(t60, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    t64 = 0x28A9;
    if ((*(int *)0xC522D6C) == 4) {
        t64 = 0x3A;
    }
    return (FUN_0c0cc3f8(t64, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
}

int FUN_0c0887bc(int a4)
{
    int stk[18];
    register int t0;
    register int t45;
    register int t2;
    register int t6;
    register int t8;
    register int t9;
    register float u11;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t27;
    register int t29;
    register int t32;
    register int t35;
    register int t41;
    register int t52;

    t0 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t0 - 1);
    t45 = (t0 - 1);
    if (((t0 - 1) & 3) != 0) {
        t52 = a4;
    } else {
        nlPushMatrix(0x0);
        t2 = *(int *)((a4 + 0x30));
        *(unsigned int *)(((int)stk + 20)) = (*(short *)((t2 + 0x222)));
        *(unsigned int *)(((int)stk + 12)) = (*(short *)((t2 + 0x220)));
        *(unsigned int *)(((int)stk + 8)) = 0xC10AA94;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x40)));
        for (;;) {
            t6 = FUN_0c0e1830(0xC0889F4, 0x64);
            FUN_0c0e19d0(t6);
            t8 = *(int *)((t2 + 0xBC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)(((((((t8 << 1) + t8) << 2) << 2) << 2) + 0xC23F274)); }
            *(float *)((t6 + 0x50)) = 3.0f;
            t9 = FUN_0c0da2e0();
            u11 = 1.0f;
            u11 = u11 + 0.5f * (FUN_0c0d9e90((0x1000 + (t9 & 0x1FFF))));
            *(float *)((t6 + 0x58)) = u11;
            *(unsigned int *)((t6 + 0x60)) = 0x1F;
            *(unsigned short *)((t6 + 0x5E)) = 0x1999;
            *(unsigned int *)(((0x48 + t6) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
            *(float *)((t6 + 0x44)) = (*(float *)((a4 + 0x34)));
            *(float *)((t6 + 0x4C)) = 1.0f;
            nlUnitMatrix();
            FUN_0c0dcca0((t6 + 0x30));
            t16 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t16 + 0x2);
            t17 = *(short *)((((t16 + 0x2) - 2) + 0x0));
            t18 = *(int *)(((int)stk + 20));
            *(int *)((int)stk + 4) = (t17 + t18);
            t19 = FUN_0c0da2e0();
            nlRotateAY((((t19 & 0xFFF) + (t17 + t18)) - 2048));
            t21 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t21 + 0x2);
            t22 = *(short *)((((t21 + 0x2) - 2) + 0x0));
            t23 = *(int *)(((int)stk + 12));
            *(int *)((int)stk + 4) = (t22 + t23);
            t24 = FUN_0c0da2e0();
            nlRotateAX((((t24 & 0xFFF) + (t22 + t23)) - 2048));
            FUN_0c0db4d0((t6 + 0x3C), (t6 + 0x3C));
            t27 = FUN_0c0da2e0();
            *(float *)((t6 + 0x30)) = ((FUN_0c0d9e90(t27)) * (1.0f + 1.0f));
            t29 = FUN_0c0da2e0();
            *(float *)((t6 + 0x34)) = ((FUN_0c0da410(t29)) * (1.0f + 1.0f));
            *(float *)((t6 + 0x38)) = 0.0f;
            FUN_0c0db470((t6 + 0x30), (t6 + 0x30));
            t32 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t32 - 1);
            if (((t32 - 1) + 0x1) != 0) continue;
            break;
        }
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.000999999931f);
        nlPopMatrix(0x1);
        t35 = *(int *)((a4 + 0x3C));
        t41 = t35;
        if ((t35 & 31) == 0) {
            if ((int)(*(int *)((a4 + 0x40))) < (int)0x7) {
                *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
            }
            t41 = 0x40;
        }
        t45 = t41;
    }
    if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
        return FUN_0c0e19f2(t52);
    }
    return t45;
}

void FUN_0c076cc0(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t9;
    register int t13;
    register int t14;
    register int t15;
    int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t23;
    register int t25;
    register int t26;
    register int t39;
    register int t47;
    register int t54;
    register int t55;
    register int t68;
    register int t76;
    register float u98;
    register float u102;
    register float u106;
    register float u110;
    register int t10;
    register int t11;
    register int t12;
    int t16;
    register float u21;
    register float u22;

    t0 = *(int *)0xC0FFBA4;
    t1 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC2623A0) + 0x0));
    if (t1 == 0) {
    } else {
        t2 = *(short *)((((((t0 << 1) + t0) << 2) + 0xC2623A0) + 0xA));
        t4 = FUN_0c0e19aa(0xC076B0C, 0x74, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(0xC0FFB98); }
        *(unsigned short *)((t4 + 0x3C)) = t0;
        *(unsigned short *)((t4 + 0x3E)) = (unsigned short)t2;
        *(unsigned int *)(((0x40 + t4) + 0x0)) = (FUN_0c0e262a(((unsigned short)t2 << 2)));
        t9 = (FUN_0c0e2794(t4, (*(int *)((t4 + 0x40)))));
        t13 = a5;
        t14 = a6;
        t15 = a7;
        t17 = t1;
        t18 = (t1 + 0x18);
        t19 = 0x0;
        t20 = 0xC0FFB98;
        for (;;) {
            t23 = *(int *)((t18 + 0x0));
            t18 = (t18 + 0x4);
            if (t23 == 0) {
                break;
            }
            t17 = 0x80000000;
            t12 = t23;
            if ((t12 & t17) != 0) {
                t10 = t18;
                t10 = (t10 - 4);
                t18 = t10;
                t18 = (t18 + 0x50);
            } else {
                t11 = t23;
                t16 = 0x10;
                t17 = 0x1;
                if ((t11 & t16) != 0) {
                    t25 = *(int *)((t18 + 0x0));
                    t18 = (t18 + 0x4);
                    t16 = t25;
                    t26 = t18;
                    for (;;) {
                        t12 = (*(int *)((t26 + 0x0)));
                        if ((t12 & t17) == 0) {
                            t26 = (t26 + 0x8);
                        } else {
                            if (t19 == 0) {
                                t20 = t26;
                                t13 = t26;
                                t14 = t26;
                                t15 = t26;
                            } else {
                                u21 = (*(float *)((t15 + 0x0)));
                                u22 = (*(float *)((t26 + 0x0)));
                                t39 = (u22 > u21);
                                u22 = (*(float *)((t26 + 0x0)));
                                if (t39) {
                                    t15 = t26;
                                }
                                u21 = (*(float *)((t20 + 0x0)));
                                t9 = 0x8;
                                if (u21 > u22) {
                                    t20 = t26;
                                }
                                u21 = (*(float *)((t13 + t9)));
                                u22 = (*(float *)((t26 + t9)));
                                t47 = (u22 > u21);
                                u22 = (*(float *)((t26 + t9)));
                                if (t47) {
                                    t13 = t26;
                                }
                                u21 = (*(float *)((t14 + t9)));
                                if (u21 > u22) {
                                    t14 = t26;
                                }
                            }
                            t9 = 0x40;
                            t11 = t19;
                            t9 = (*(int *)((t4 + t9)));
                            t11 = (t11 << 2);
                            t19 = (t19 + 0x1);
                            *(unsigned int *)((t11 + t9)) = t26;
                            t26 = (t26 + 0x20);
                        }
                        t16 = (t16 - 0x1);
                        if (t16 == 0) {
                            break;
                        }
                    }
                    t18 = t26;
                } else {
                    t16 = 0x8;
                    if ((t23 & t16) != 0) {
                        t54 = *(int *)((t18 + 0x0));
                        t18 = (t18 + 0x4);
                        t16 = t54;
                        t12 = t16;
                        t16 = (t16 << 1);
                        t16 = (t16 + t12);
                        t55 = t18;
                        for (;;) {
                            t11 = (*(int *)((t55 + 0x0)));
                            if ((t11 & t17) == 0) {
                                t55 = (t55 + 0x8);
                            } else {
                                if (t19 == 0) {
                                    t20 = t55;
                                    t13 = t55;
                                    t14 = t55;
                                    t15 = t55;
                                } else {
                                    u21 = (*(float *)((t15 + 0x0)));
                                    u22 = (*(float *)((t55 + 0x0)));
                                    t68 = (u22 > u21);
                                    u22 = (*(float *)((t55 + 0x0)));
                                    if (t68) {
                                        t15 = t55;
                                    }
                                    u21 = (*(float *)((t20 + 0x0)));
                                    t9 = 0x8;
                                    if (u21 > u22) {
                                        t20 = t55;
                                    }
                                    u21 = (*(float *)((t13 + t9)));
                                    u22 = (*(float *)((t55 + t9)));
                                    t76 = (u22 > u21);
                                    u22 = (*(float *)((t55 + t9)));
                                    if (t76) {
                                        t13 = t55;
                                    }
                                    u21 = (*(float *)((t14 + t9)));
                                    if (u21 > u22) {
                                        t14 = t55;
                                    }
                                }
                                t9 = 0x40;
                                t11 = t19;
                                t9 = (*(int *)((t4 + t9)));
                                t11 = (t11 << 2);
                                t19 = (t19 + 0x1);
                                *(unsigned int *)((t11 + t9)) = t55;
                                t55 = (t55 + 0x20);
                            }
                            t16 = (t16 - 0x1);
                            if (t16 == 0) {
                                break;
                            }
                        }
                        t18 = t55;
                    }
                }
            }
        }
        *(float *)((t4 + 0x44)) = (((*(float *)((t15 + 0x0))) - (*(float *)((t20 + 0x0)))) / (1.0f + 1.0f));
        *(float *)((t4 + 0x48)) = (((*(float *)((t13 + 0x8))) - (*(float *)((t14 + 0x8)))) / (1.0f + 1.0f));
        *(float *)((t4 + 0x54)) = (((((*(float *)((t15 + 0x18))) + (*(float *)((t20 + 0x18)))) + (*(float *)((t13 + 0x18)))) + (*(float *)((t14 + 0x18)))) / 4.0f);
        *(float *)((t4 + 0x4C)) = (((((*(float *)((t15 + 0x1C))) + (*(float *)((t20 + 0x1C)))) + (*(float *)((t13 + 0x1C)))) + (*(float *)((t14 + 0x1C)))) / 4.0f);
        u98 = *(float *)((t4 + 0x54));
        *(float *)((t4 + 0x60)) = ((((((*(float *)((t15 + 0x18))) - u98) + u98) - (*(float *)((t20 + 0x18)))) / (1.0f + 1.0f)) / (*(float *)((t4 + 0x44))));
        u102 = *(float *)((t4 + 0x4C));
        *(float *)((t4 + 0x58)) = ((((((*(float *)((t15 + 0x1C))) - u102) + u102) - (*(float *)((t20 + 0x1C)))) / (1.0f + 1.0f)) / (*(float *)((t4 + 0x44))));
        u106 = *(float *)((t4 + 0x54));
        *(float *)((t4 + 0x6C)) = ((((((*(float *)((t13 + 0x18))) - u106) + u106) - (*(float *)((t14 + 0x18)))) / (1.0f + 1.0f)) / (*(float *)((t4 + 0x48))));
        u110 = *(float *)((t4 + 0x4C));
        *(float *)((t4 + 0x64)) = ((((((*(float *)((t13 + 0x1C))) - u110) + u110) - (*(float *)((t14 + 0x1C)))) / (1.0f + 1.0f)) / (*(float *)((t4 + 0x48))));
    }
}

int FUN_0c07d72e(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t6;
    register int t7;
    register int t10;
    register int t8;
    register int t13;
    register int t11;
    register int t14;
    register float t15;
    register float t16;
    register int t17;
    register int t20;
    register int t18;
    register float t21;
    register float u22;
    register float t23;
    register float u24;
    register int t27;
    register int t25;
    register float t28;
    register float t29;
    register float u30;
    register float u31;
    register int t32;
    register int t33;
    int t34;
    register float u36;
    register float u37;
    register int t40;
    register float t42;
    register float u45;
    register float u47;
    register float u60;
    register float u61;
    register float u63;
    register int t68;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 12)) = 0xD;
    FUN_0c0685a4(a4, a5, a6, a7);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)0xC23A258) * 0x2A);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC200994);
    *(unsigned int *)(((int)stk + 8)) = 0x40;
    t6 = 0x47AE927;
    for (;;) {
        t7 = *(int *)(((int)stk + 12));
        t10 = (t6 & 0x1);
        t8 = (int)(((unsigned int)t10 >> 1) | ((unsigned int)t10 << 31));
        t13 = ((((t6 >> 1) | t8) ^ t7) & 0x1);
        t11 = (int)(((unsigned int)t13 >> 1) | ((unsigned int)t13 << 31));
        *(unsigned int *)(((int)stk + 16)) = (((((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1) | ((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1))) * 0x22AC8EE1);
        t14 = *(int *)(((int)stk + 20));
        t15 = FUN_0c0da410((t14 + (((t6 >> 1) | t8) ^ t7)));
        t16 = FUN_0c0d9e90((t14 + (((t6 >> 1) | t8) ^ t7)));
        t17 = *(int *)(((int)stk + 16));
        t20 = (((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) & 0x1);
        t18 = (int)(((unsigned int)t20 >> 1) | ((unsigned int)t20 << 31));
        t21 = FUN_0c0da410((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17));
        u22 = (t15 * 127.0f);
        *(float *)(((int)stk + 24)) = (u22 * t21);
        t23 = FUN_0c0d9e90((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17));
        u24 = (t15 * 127.0f);
        t27 = ((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) & 0x1);
        t25 = (int)(((unsigned int)t27 >> 1) | ((unsigned int)t27 << 31));
        t28 = FUN_0c0d9e90(((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) >> 1) | t25) ^ (((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1)));
        t29 = FUN_0c0da410(((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) >> 1) | t25) ^ (((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1)));
        u30 = (t16 * 127.0f);
        u31 = (t16 * 127.0f);
        t32 = ((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) >> 1) | t25) ^ (((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1));
        t33 = (((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1) | ((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) >> 1) | t25) ^ (((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1))) * 0x22AC8EE1);
        t34 = (t14 + (((t6 >> 1) | t8) ^ t7));
        t6 = ((((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) >> 1) | t25) ^ (((((((((((t6 >> 1) | t8) ^ t7) >> 1) | t11) ^ (((((t6 >> 1) | t8) ^ t7) | t7) * 0x22AC8EE1)) >> 1) | t18) ^ t17) | t17) * 0x22AC8EE1));
        t6 = (t6 >> 1);
        u36 = (u31 * t29);
        u36 = u36 + t28 * (u24 * t23);
        u37 = (u24 * t23);
        t40 = (t32 & 0x1);
        t6 = (t6 | ((int)(((unsigned int)t40 >> 1) | ((unsigned int)t40 << 31))));
        t6 = (t6 ^ t33);
        *(unsigned int *)(((int)stk + 12)) = ((t33 | t6) * 0x22AC8EE1);
        nlPushMatrix(0x0);
        t42 = FUN_0c0da410((int)((float)(0x1FFF & t34) * 4.00048828f));
        u45 = 1.0f;
        if (((*(int *)0xC23A258) & 1) != 0) {
            u45 = 0.299999982f;
        }
        u47 = *(float *)0xC07D9CC;
        FUN_0c0dcc70(u36, (*(float *)(((int)stk + 24))), ((u30 * t28) - (u37 * t29)));
        nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CE))));
        nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CC))));
        nlRotateAZ(t6);
        nlScale(u47, u47, 1.0f);
        u60 = (t42 * u45);
        u61 = (t42 * u45);
        u63 = (t42 * u45);
        FUN_0c0848bc((u63 * (*(float *)0xC07D9EC)), (u61 * (*(float *)0xC07D9E8)), (u60 * (*(float *)0xC07D9E4)));
        FUN_0c0de000(u47);
        FUN_0c0c465c(0x291);
        nlPopMatrix(0x1);
        t68 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t68 - 1);
        if ((t68 - 1) != 0) continue;
        break;
    }
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}

int FUN_0c05d95c(int a4, int a5)
{
    int stk[14];
    register int t1;
    register int t56;
    register int t6;
    register int t27;
    register int t45;

    t1 = *(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4));
    t56 = 0x344;
    if ((*(int *)((a4 + 0x344))) == 0) {
    } else {
        if ((int)(*(int *)((t1 + 0x21C))) <= 0) {
            *(unsigned int *)((t1 + 0x21C)) = 0x0;
            t45 = 0x21C;
        } else {
            t6 = FUN_0c0e19aa(0xC05DB80, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t6);
            *(unsigned int *)((t1 + 0x21C)) = ((*(int *)((t1 + 0x21C))) - 1);
            *(unsigned int *)((t6 + 0xBC)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)(((0x200 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            FUN_0c0cc3f8(0x432A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xB);
            *(unsigned int *)((t6 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
            *(unsigned int *)(((0x1E8 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            *(unsigned int *)(((0x1F4 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            *(unsigned int *)(((0x204 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            *(float *)((t6 + 0x1E4)) = ((*(float *)((a5 + 0xC))) * 0.199999988f);
            *(unsigned int *)(((0x1FC + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            *(unsigned int *)((t6 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            *(unsigned int *)(((0x22C + t6) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
            nlPushMatrix(0x0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C14); }
            FUN_0c0dbda0(((((*(int *)((a4 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x8);
            FUN_0c0a79fa((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), ((((int)stk + 4) + 0x10) + 0x8));
            t27 = *(int *)((a4 + 0x340));
            FUN_0c0db470(((((t27 << 1) + t27) << 2) + 0xC1FEFBC), (t6 + 0x30));
            nlUnitMatrix();
            nlRotateAY((*(int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0))));
            nlRotateAX((*(int *)(((((int)stk + 4) + 0x10) + 0x0))));
            nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
            FUN_0c0db470((((int)stk + 4) + 0x4), (t6 + 0x48));
            FUN_0c0a7714((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), (*(float *)((t6 + 0x48))), (*(float *)((t6 + 0x4C))), (*(float *)((t6 + 0x50))));
            *(unsigned short *)((t6 + 0x6E)) = (*(int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0)));
            *(unsigned short *)((t6 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x10) + 0x0)));
            nlPopMatrix(0x1);
            *(unsigned int *)((t6 + 0x220)) = 0x9E;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + t6)) = *(struct mv3 *)((t6 + 0x30)); }
            *(unsigned int *)((t6 + 0x248)) = 0x1;
            t45 = 0x248;
        }
        t56 = t45;
    }
    return t56;
}

float FUN_0c0901bc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register float F0;
    register float F2;
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
    register float w0_4;
    register float w0_5;
    v0_2 = a4;
    v0_0 = a5;
    w0_1 = f4;
    v0_1 = (0xC0E19F2);
    v0_3 = (0xC246074);
    v0_1 = (v0_2);
    if (((*(short *)((((((*(int *)((v0_2 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0)) goto L_C0901E8;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_2, v0_0, a6, a7);
    L_C0901E8:;
    if (((unsigned short)(*(short *)((((((*(int *)((v0_1 + 0x34))) << 2) << 2) + (0x80 + v0_3)) + 0x4))) == 2)) goto L_C090216;
    v0_3 = *(int *)((((((*(int *)((v0_1 + 0x34))) << 2) << 2) + (0x80 + v0_3)) + 0xC));
    v0_5 = (v0_3);
    if (!((v0_3 != 3))) goto L_C0903CA;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    goto L_C090216;
    L_C0903CA:;
    return F0;
    L_C090216:;
    v0_3 = *(int *)(((((*(int *)((v0_1 + 0x30))) << 2) + 0xC247030) + 0x0));
    v0_4 = (0xC246FF0);
    v0_2 = (v0_3);
    if (((int)v0_3 < (int)0x2)) goto L_C090230;
    if (((int)v0_2 < (int)0x5)) goto L_C090234;
    L_C090230:;
    v0_3 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C090234:;
    v0_5 = *(int *)(((((*(int *)((v0_1 + 0x30))) << 2) + v0_4) + 0x0));
    v0_3 = (v0_5);
    if (((*(int *)((v0_5 + 0xD8))) != 0)) goto L_C09024E;
    if (((*(int *)((v0_3 + 0x4D0))) == 0)) goto L_C090252;
    L_C09024E:;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C090252:;
    v0_6 = *(int *)((v0_1 + 0x48));
    v0_5 = (v0_6);
    v0_2 = (0x9);
    w0_0 = (0.0f);
    if ((v0_6 == 0)) goto L_C090276;
    if ((v0_5 == 1)) goto L_C090290;
    if ((v0_5 == 2)) goto L_C0902EC;
    if ((v0_5 == 3)) goto L_C09030A;
    if ((v0_5 != 4)) goto L_C090272;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    *(float *)((v0_1 + 0x38)) = w0_0;
    L_C0903A8:;
    *(unsigned int *)((v0_1 + 0x48)) = ((*(int *)((v0_1 + 0x48))) + 0x1);
    L_C0903B0:;
    nlAddVector((v0_3 + 0x48), (v0_1 + 0x38));
    v0_5 = (0x48);
    if (((int)(*(int *)((v0_1 + 0x48))) <= (int)0x4)) goto L_C0903CA;
    v0_5 = ((((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0)));
    goto L_C0903CA;
    L_C090272:;
    goto L_C0903B0;
    L_C09030A:;
    v0_5 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) <= (int)0x2D)) goto L_C0903B0;
    if (((*(int *)(((v0_4 + 0x40) + ((*(int *)((v0_3 + 0x510))) << 2)))) == 4)) goto L_C09032C;
    v0_5 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C09032C:;
    v0_4 = *(int *)(((((*(int *)((v0_3 + 0x510))) << 2) + v0_4) + 0x0));
    *(float *)(((int)stk + 4)) = ((*(float *)((v0_4 + 0x30))) - (*(float *)((v0_3 + 0x30))));
    *(float *)(((int)stk + 12)) = ((*(float *)((v0_4 + 0x38))) - (*(float *)((v0_3 + 0x38))));
    *(float *)(((int)stk + 8)) = w0_0;
    w0_2 = FUN_0c0dcea0(((int)stk + 4));
    w0_3 = *(float *)0xC090428;
    w0_4 = *(float *)0xC09042C;
    w0_5 = ((w0_2 + w0_3));
    w0_0 = ((w0_2 + w0_3));
    w0_1 = (w0_4);
    if ((!((w0_2 + w0_3) > w0_4))) goto L_C09036C;
    w0_0 = (w0_1);
    L_C09036C:;
    FUN_0c0dce80((v0_1 + 0x38), ((int)stk + 4), ((w0_0 / w0_5) / (*(float *)0xC090430)));
    *(float *)((v0_1 + 0x3C)) = (*(float *)0xC090438);
    L_C090388:;
    *(unsigned int *)((v0_1 + 0x44)) = 0x0;
    goto L_C0903A8;
    L_C0902EC:;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    *(float *)((v0_1 + 0x38)) = w0_0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    w0_0 = ((*(float *)0xC090420));
    L_C090304:;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    goto L_C090388;
    L_C090290:;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) > (int)0x17)) goto L_C0902A2;
    goto L_C0903B0;
    L_C0902A2:;
    v0_4 = *(short *)((v0_3 + 0x6E));
    *(float *)((v0_1 + 0x38)) = ((FUN_0c0da410(v0_4)) * 0.599999964f);
    *(float *)((v0_1 + 0x40)) = ((FUN_0c0d9e90(v0_4)) * 0.599999964f);
    w0_0 = (2.16666651f);
    goto L_C090304;
    L_C090276:;
    *(float *)((v0_1 + 0x38)) = w0_0;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    *(unsigned int *)((v0_1 + 0x44)) = 0x0;
    *(unsigned int *)((v0_1 + 0x48)) = ((*(int *)((v0_1 + 0x48))) + 0x1);
    goto L_C090290;
}

int FUN_0c07c21c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = *(int *)0xC247C94;
    *(unsigned int *)0xC247C94 = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x1A4) {
        *(unsigned int *)0xC247C94 = 0x0;
        *(unsigned int *)0xC247C98 = 0xB4;
        t0 = *(int *)0xC247C9C;
        *(unsigned int *)0xC247C9C = (t0 + 0x1);
        if ((unsigned int)(t0 + 0x1) >= (unsigned int)0x7) {
            *(unsigned int *)0xC247C9C = 0x0;
        }
    }
    u0 = *(float *)0xC247C8C;
    *(float *)0xC247C8C = (u0 + 0.000999999931f);
    u1 = 0.0f;
    if (!(1.0f > (u0 + 0.000999999931f))) {
        *(float *)0xC247C8C = ((*(float *)0xC247C8C) - 1.0f);
        u1 = (-1.0f);
    }
    u0 = *(float *)0xC247C90;
    *(float *)0xC247C90 = (u0 + 0.00919999927f);
    u2 = 0.0f;
    if (!(1.0f > (u0 + 0.00919999927f))) {
        *(float *)0xC247C90 = ((*(float *)0xC247C90) - 1.0f);
        u2 = (-1.0f);
    }
    FUN_0c0cacde(0x11F7, (u1 + 0.000999999931f), (u2 + 0.00919999927f));
    if ((*(int *)0xC247C98) != 0) {
        *(unsigned int *)0xC247C98 = ((*(int *)0xC247C98) - 1);
    }
    t0 = *(int *)0xC247C98;
    t1 = *(int *)0xC247C9C;
    t2 = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        t2 = 0x6;
    }
    t3 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x0));
    t4 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x4));
    u0 = (float)t3;
    u0 = u0 + ((float)t0 * 0.00555555522f) * (float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x0))) - t3);
    u1 = (float)t4;
    u1 = u1 + ((float)t0 * 0.00555555522f) * (float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x4))) - t4);
    t3 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x8));
    u2 = (float)t3;
    u2 = u2 + ((float)t0 * 0.00555555522f) * (float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x8))) - t3);
    FUN_0c0848bc(u0, u1, u2);
    if (((*(int *)0xC23ED88) & 32) != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcca0(0xC100DD0);
        nlRotateAY(0x8000);
        nlRotateAZ((((*(int *)0xC23A258) << 2) << 1));
        u3 = *(float *)0xC07C4A0;
        nlScale(u3, u3, u3);
        FUN_0c0de000((*(float *)0xC07C4A8));
        FUN_0c0c465c(0x11F7);
        nlPopMatrix(0x1);
        u3 = *(float *)0xC20079C;
        u4 = u3;
        u4 = u4 + (1.0f - u3) * u0;
        *(float *)0xC247C7C = u4;
        u0 = (*(float *)0xC20079C);
        u0 = u0 + (1.0f - u3) * u1;
        *(float *)0xC247C80 = u0;
        u0 = (*(float *)0xC20079C);
        u0 = u0 + (1.0f - u3) * u2;
        *(float *)0xC247C84 = u0;
        FUN_0c0847a2(0x1, (1.0f - u3));
        FUN_0c0847f4(1.0f, 0.0f);
        FUN_0c0847b8(0xC247C7C);
        return FUN_0c0847de(0xC247C7C);
    }
    return FUN_0c0849da();
}

int FUN_0c05ac0c(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t56;
    register int t59;
    register int t67;
    register int t68;
    register int t103;
    register int t120;
    register int t116;
    register int t33;
    register int t81;
    register int t82;
    register int t121;
    register int t122;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if ((*(int *)((a4 + 0xD8))) == 0) {
        t116 = a4;
    } else {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                FUN_0c0cc3f8((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if ((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))) != 0) {
                    FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x0);
                }
            } else {
                if ((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0))) + 0xC0))) < (int)0x29) {
                    FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t33 = 0x1;
                } else {
                    FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFC58))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t33 = 0x2;
                }
                FUN_0c0cc054((*(int *)((a4 + 0x1C4))), t33);
            }
            FUN_0c054c8a(a4);
            if ((*(int *)((a4 + 0x23C))) != 0) {
                FUN_0c0909fc(a4);
            }
        }
        if ((*(int *)((a4 + 0xD8))) == 4) {
            FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x3);
        } else {
            if ((*(int *)((a4 + 0xD8))) == 2) {
                t56 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0xBC))) << 2)));
                t59 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x1C4))) << 2)));
                if (((*(int *)0xC23A1A8) & 0x100) != 0) {
                    FUN_0c053c64(t59, 0x0);
                }
                t67 = *(short *)((t56 + 0x6E));
                t68 = *(short *)((t59 + 0x6E));
                if (16384.0f > _builtin_fabsf((float)(short)(t68 - t67))) {
                    if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                        FUN_0c0cc3f8((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))), t67, (t68 - t67), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x4);
                    } else {
                        if ((int)(*(int *)((t56 + 0xC0))) < (int)0x29) {
                            t81 = 0xC1FFBE4;
                            t82 = ((*(int *)((a4 + 0x1F8))) << 2);
                        } else {
                            t81 = 0xC1FFC58;
                            t82 = ((*(int *)((a4 + 0x1F8))) << 2);
                        }
                        FUN_0c0cc3f8((*(int *)((t82 + t81))), t67, (t68 - t67), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                    FUN_0c0909fc(a4);
                } else {
                    FUN_0c090f70(a4);
                }
            }
        }
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t103 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t103 << 2) << 2) << 1) + 0xC247550)) = ((*(int *)(((((t103 << 2) << 2) << 1) + 0xC247550))) + 0x1);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    t120 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t120 - 1);
    if (((int)(t120 - 1) >= 0) && (t121 = *(int *)((a4 + 0x1C)), t122 = *(int *)((t121 + 0x20C)), (t122 & 0xC1800) == 0)) {
    } else {
        FUN_0c0e19f2(t116);
    }
    return FUN_0c01cdc2(a4);
}
