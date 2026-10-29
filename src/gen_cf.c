/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int FUN_0c0341a6(int, int);
int FUN_0c034314(int, int, int);
int FUN_0c034b1c(int, int);
float FUN_0c0467c2(int, int, float, float, float, float);
int FUN_0c0d6c6a(int);
int FUN_0c0d6d74(int);
float FUN_0c0da410(int);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6118(void);
int FUN_0c0e6248(int);
int FUN_0c22baec(int, int, int, int, int);
int FUN_0c22bbe0(int, int, int, int);
int FUN_0c235ce0(int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);
int FUN_0c0294e6(int a4, int a5);
int FUN_0c22c262(int a4, int a5, int a6, int a7);
int ADXB_EndDecode(int a4, int a5);
int FUN_0c0d60a6(int a4);
int FUN_0c0359c0(int a4, int a5, int a6, int a7);
int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7);

int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t8;
    int t11;
    int t30;
    int t31;
    int t32;
    int t20;
    int t22;
    int t25;
    int t34;
    int t49;
    int t55;
    int t17;
    int stk[17];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = *(int *)0xC2364D0;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = (*(int *)0xC2364CC);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t3 = *(int *)0xC2364D8;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = (*(int *)0xC2364D4);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t5 = *(int *)0xC2364E0;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = (*(int *)0xC2364DC);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t8 = 0x0;
    if ((*(int *)(((int)stk + 24))) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((*(int *)(((int)stk + 20))) != 0) {
        t11 = 0x1;
    }
    *(unsigned int *)0xC952324 = t11;
    *(unsigned int *)0xC952328 = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if ((*(int *)0xC95231C) == 1) {
    } else {
        t20 = 0x0;
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t17 = *(int *)0xC95231C, (t17 & 44) != 0) && (0x1 != 0))) {
            t20 = 0x1;
        }
        t22 = 0x140;
        if (((*(int *)0xC95231C) & 16) != 0) {
            t22 = 0x280;
        }
        t25 = 0xF0;
        if (((*(int *)0xC95231C) & 32) != 0) {
            t25 = 0x1E0;
        }
        t30 = t22;
        t31 = t25;
        t32 = t20;
    }
    t34 = *(int *)0xC95266C;
    for (;;) {
        if (t34 != (*(int *)0xC95266C)) {
            break;
        }
    }
    *(int *)((int)stk + 16) = (t8);
    *(int *)((int)stk + 12) = (t11);
    kmiFBControl(t30, t31, (*(int *)0xC952320), t32);
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, ((*(int *)0xC9525C4) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC952600));
    kmiWriteRegister(0x44, (*(int *)0xC9525C4));
    kmiResetBoard();
    *(int *)((int)stk + 8) = 0x0;
    t49 = (*(int *)0xC952364);
    *(int *)((int)stk + 4) = t49;
    kmiSetTAEnvironment(((unsigned int)(*(int *)0xC952368) >> 7), ((unsigned int)(*(int *)0xC95236C) >> 7), ((unsigned int)(*(int *)0xC952370) >> 7), ((unsigned int)(*(int *)0xC952374) >> 7), t49);
    *(unsigned int *)0xC9525A4 = 0x1;
    t55 = *(int *)0xC95266C;
    for (;;) {
        if (t55 != (*(int *)0xC95266C)) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c0294e6(int a4, int a5)
{
    int t1;
    int t2;
    int t15;
    float u33;
    float u38;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
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
    int T_;
    t1 = *(int *)((((((*(int *)0xC23ED50) << 2) << 1) + 0xC1A1660) + 0x4));
    t2 = *(short *)((t1 + 0x16));
    R0 = (t2);
    R14 = (0x0);
    R4 = (t1);
    if ((t2 == 0x10A3)) goto L_C02950E;
    L_C029630:;
    R0 = (0x0);
    L_C029638:;
    return R0;
    L_C02950E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(R4); }
    FUN_0c0e6248(R4);
    R12 = ((((int)stk + 4) + 0x14));
    R13 = (((int)stk + 4));
    R4 = ((a5 << 2));
    R6 = (0xC246FF0);
    if (((*(int *)(((0xC247030 + (a5 << 2)) + 0x0))) != 0)) goto L_C029540;
    goto L_C029630;
    L_C029540:;
    t15 = *(int *)(((R6 + R4) + 0x0));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((*(float *)((t15 + 0x30))) - (*(float *)((R12 + 0x0)))), ((*(float *)((t15 + 0x34))) - (*(float *)((R12 + 0x4)))), ((*(float *)((t15 + 0x38))) - (*(float *)((R12 + 0x8)))));
    nlRotateAX((-(*(short *)((R13 + 0x0)))));
    nlRotateAY((-(*(short *)((R13 + 0x2)))));
    nlRotateAZ((-(*(short *)((R13 + 0x4)))));
    FUN_0c0db840((((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    u33 = *(float *)(((int)stk + 20));
    F4 = (u33);
    if ((0.0f > u33)) goto L_C029630;
    if ((!(31.6899986f > F4))) goto L_C0295AE;
    R14 = (0x3);
    L_C0295B6:;
    u38 = *(float *)(((int)stk + 12));
    F4 = (u38);
    if ((-73.0499954f > u38)) goto L_C029630;
    if ((!(-10.0f > F4))) goto L_C0295CE;
    R14 = ((R14 + 0x1));
    L_C029634:;
    R0 = (R14);
    goto L_C029638;
    L_C0295CE:;
    F1 = (10.0f);
    if ((!(10.0f > F4))) goto L_C029624;
    R14 = ((R14 + 0x2));
    goto L_C029634;
    L_C029624:;
    if ((!((*(float *)0xC029740) > F4))) goto L_C029630;
    R14 = ((R14 + 0x3));
    goto L_C029634;
    L_C0295AE:;
    F1 = (63.2799988f);
    if ((!(63.2799988f > F4))) goto L_C029630;
    goto L_C0295B6;
}

int FUN_0c22c262(int a4, int a5, int a6, int a7)
{
    int t12;
    int t13;
    int t45;
    int t17;
    int t19;
    int t21;
    int t27;
    int t32;
    int t33;
    int t20;
    int t31;

    *(volatile int *)((a4 + 0x30));
    *(volatile int *)((a4 + 0x3C));
    *(volatile int *)((a4 + 0x5C));
    *(volatile int *)((a4 + 0x8));
    FUN_0c0e5dc0();
    FUN_0c0e5dc0();
    *(volatile int *)((a4 + 0x58));
    
    FUN_0c0e5dc0();
    
    t12 = FUN_0c0e5dc0();
    t13 = ((t12 * a4) * a5);
    if ((int)((t12 * a4) * a5) < 0) {
        t13 = (((t12 * a4) * a5) + 0x7);
    }
    t45 = 0x0;
    if ((int)(((t13 >> 1) >> 1) >> 1) <= 0) {
    } else {
        t17 = 0xC95FB90;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t17 = 0xC9603B0;
        }
        t19 = t17;
        t21 = 0x0;
        for (;;) {
            if ((int)t21 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t20 = t21;
            t20 = (t20 << 2);
            t20 = (t20 + (a4 + 0x28));
            *(volatile int *)((a4 + 0x58));
            *(volatile int *)((a4 + 0x8));
            t20 = (*(int *)((t20 + 0x0)));
            t20 = (t20 + (FUN_0c0e5dc0()));
            t19 = a4;
            t27 = FUN_0c22baec(t19, t21, ((t17 + 0x20) & 0xFFFFFFE0), t20, (((t13 >> 1) >> 1) >> 1));
            t21 = (t21 + 0x1);
            t19 = t27;
        }
        *(volatile int *)((a4 + 0x8));
        *(unsigned int *)(((0x60 + a4) + 0x0)) = (((FUN_0c0e5dc0()) << 2) << 1);
        if (((*(int *)((a4 + 0x58))) == 0) && (t31 = *(int *)((a4 + 0x60)), (int)t31 > 0)) {
            t32 = (((t13 >> 1) >> 1) >> 1);
            t33 = 0x0;
            for (;;) {
                if ((int)t33 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                    break;
                }
                t32 = t33;
                *(volatile int *)((a4 + 0x30));
                t32 = (t32 << 2);
                t32 = (t32 + (a4 + 0x28));
                *(volatile int *)((a4 + 0x8));
                t32 = (*(int *)((t32 + 0x0)));
                t32 = (t32 + (FUN_0c0e5dc0()));
                FUN_0c22bbe0(a4, t33, ((t17 + 0x20) & 0xFFFFFFE0), t32);
                t33 = (t33 + 0x1);
            }
        }
        t45 = (*(int *)((a4 + 0x60)));
    }
    return t45;
}

int ADXB_EndDecode(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    *(volatile int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)((a4 + 0x40));
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = *(int *)((a4 + 0x44));
    t7 = FUN_0c0e5dc0();
    t8 = FUN_0c0e5f1c();
    FUN_0c235ce0((*(int *)((a4 + 0x8))));
    *(volatile int *)(((a4 + 0x50) + 0x8));
    t12 = FUN_0c0e5dc0();
    t14 = t12;
    if ((int)t7 <= (int)a5) {
        t14 = (t12 - ((t0 - t8) - 1));
    }
    *(unsigned int *)((a4 + 0xA0)) = t14;
    *(unsigned int *)((a4 + 0xA4)) = (t1 * a5);
    if ((int)(t4 + t14) >= (int)t3) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t14) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t14) - t3));
    }
    return 0xA4;
}

int FUN_0c0d60a6(int a4)
{
    int t2;
    int t3;
    int t4;
    int t28;
    int t29;
    int t0;
    int t1;
    int t5;
    int t8;
    int t9;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = 0xC247594;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x2) {
            break;
        }
        t5 = 0x1D4;
        t5 = (t3 * t5);
        t5 = (t5 + 0xC9436B4);
        t1 = (*(int *)((t5 + 0x0)));
        if ((t1 != 0) && (t8 = *(int *)(((int)stk + 4)), t9 = *(int *)((t8 + 0x0)), t9 != 0)) {
            t0 = 0x58;
            t1 = 0x1;
            *(unsigned int *)((t5 + 0x4)) = t1;
            if ((int)(*(int *)((t5 + t0))) > 0) {
                *(unsigned int *)((t5 + t0)) = ((*(int *)((t5 + t0))) - 1);
            } else {
                if ((*(int *)((t5 + t0))) == 0) {
                    t1 = 0x10000;
                    t0 = 0x54;
                    *(unsigned int *)((t5 + t0)) = t1;
                }
            }
            t0 = (FUN_0c0d6c6a(t5));
            t0 = 0x64;
            t1 = (*(int *)((t5 + t0)));
            if ((int)t1 > 0) {
                t1 = (*(int *)((t5 + t0)));
                t1 = (t1 - 1);
                *(unsigned int *)((t5 + t0)) = t1;
            } else {
                if ((*(int *)((t5 + t0))) == 0) {
                    t0 = 0x5C;
                    *(unsigned int *)((t5 + t0)) = 0x0;
                }
            }
            t0 = (FUN_0c0d6d74(t5));
            t1 = 0xC943554;
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)((t1 + 0x0)) = (*(int *)(((0xC249880 + (t2 << 2)) + 0x0)));
            t1 = 0xC249880;
            t1 = (t1 + (t2 << 2));
            t28 = *(int *)((t1 + 0x4));
            t1 = 0xC943554;
            t1 = (t1 + 0x10);
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)(((0xC943554 + (t2 << 2)) + 0x4)) = t28;
            t29 = *(int *)((t1 + 0x0));
            t1 = 0xC943554;
            t1 = (t1 + 0x10);
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)(((0xC249880 + (t2 << 2)) + 0x0)) = t29;
            *(unsigned int *)(((0xC249880 + (t2 << 2)) + 0x4)) = (*(int *)((t1 + 0x4)));
            t1 = (0xC2497E0 + t4);
            t0 = 0x50;
            t0 = (FUN_0c0e6118());
            t1 = 0xC0;
            t1 = (t1 + 0xC943554);
            t1 = (t1 + t4);
            t0 = 0x50;
            t0 = (FUN_0c0e6118());
        }
        t1 = (*(int *)(((int)stk + 4)));
        t3 = (t3 + 0x1);
        t4 = (t4 + 0x50);
        t1 = (t1 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t1;
        t2 = (t2 + 0x2);
    }
    return t0;
}

int FUN_0c0359c0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t10;
    int t11;
    int t13;
    int t38;
    int t39;
    int t43;
    int t44;
    int t46;
    int t49;
    int t3;
    int t7;
    int t40;
    int stk[14];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(int *)((a4 + 0xBC));
    if ((*(float *)((((((t0 << 2) << 2) << 2) + 0xC247084) + 0x0))) > (*(float *)((((((t0 << 2) << 2) << 2) + 0xC247084) + 0x4)))) {
        if (0x1 != 0) {
            t4 = 0x1;
            t5 = 0x4;
            t6 = 0x4;
            for (;;) {
                if ((*(int *)((t5 + 0xC247030))) == 4) {
                    t7 = 0xC246FF0;
                    t7 = (t7 + t6);
                    t7 = (*(int *)((t7 + 0x0)));
                    t10 = FUN_0c0341a6(a4, t7);
                    t3 = t10;
                    *(unsigned int *)((a6 + 0x0)) = t10;
                    if ((int)t3 > 0) {
                        t3 = 0xC034314;
                        t11 = FUN_0c034314(a4, t7, ((int)stk + 8));
                        if (t11 == 0) {
                            t4 = (t4 - 1);
                            t6 = (t6 - 4);
                            t5 = (t5 - 4);
                            if ((int)t4 < 0) {
                                break;
                            }
                            continue;
                        }
                        t3 = (*(int *)(((int)stk + 20)));
                        t13 = t3;
                        *(int *)((int)stk + 4) = t13;
                        *(unsigned int *)((t13 + 0x0)) = (FUN_0c034b1c(a4, t7));
                        *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = t7;
                        return 0x1;
                    }
                    t4 = (t4 - 1);
                    t6 = (t6 - 4);
                    t5 = (t5 - 4);
                    if ((int)t4 < 0) {
                        break;
                    }
                    continue;
                }
                t4 = (t4 - 1);
                t6 = (t6 - 4);
                t5 = (t5 - 4);
                if ((int)t4 < 0) {
                    break;
                }
            }
        }
        t49 = 0x0;
    } else {
        t38 = 0x0;
        t39 = 0x0;
        for (;;) {
            if ((*(int *)((t39 + 0xC247030))) == 4) {
                t40 = 0xC246FF0;
                t40 = (t40 + t38);
                t40 = (*(int *)((t40 + 0x0)));
                t43 = FUN_0c0341a6(a4, t40);
                *(unsigned int *)((a6 + 0x0)) = t43;
                if ((int)(t43) > 0) {
                    t44 = FUN_0c034314(a4, t40, (((int)stk + 8) + 0x4));
                    if (t44 != 0) {
                        break;
                    }
                    t39 = (t39 + 0x4);
                    t38 = (t38 + 0x4);
                    if ((unsigned int)t39 >= (unsigned int)0x8) {
                        return 0x0;
                    }
                    continue;
                }
                t39 = (t39 + 0x4);
                t38 = (t38 + 0x4);
                if ((unsigned int)t39 >= (unsigned int)0x8) {
                    return 0x0;
                }
                continue;
            }
            t39 = (t39 + 0x4);
            t38 = (t38 + 0x4);
            if ((unsigned int)t39 >= (unsigned int)0x8) {
                return 0x0;
            }
        }
        t46 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 4) = t46;
        *(unsigned int *)((t46 + 0x0)) = (FUN_0c034b1c(a4, t40));
        *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = t40;
        t49 = 0x1;
    }
    return t49;
}

int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7)
{
    float u0;
    float t1;
    float u2;
    float u4;
    float u8;
    float u16;
    int t18;
    float t20;
    float u21;
    float u47;

    u0 = *(float *)((a4 + 0x250));
    t1 = FUN_0c0467c2(a4, a5, f4, u0, f6, f7);
    u2 = *(float *)0xC046980;
    if ((*(int *)((a4 + 0x48C))) == 54) {
        u4 = *(float *)0xC046984;
        if (!((*(float *)((a4 + 0x34))) > (u0 + (t1 + u4)))) {
            u8 = (*(float *)((a4 + 0x4B4)));
            u8 = u8 + u2 * ((((t1 + u4) + u0) - (*(float *)(((0x34 + a4) + 0x0)))) / (t1 + u4));
            *(float *)((a4 + 0x4B4)) = u8;
        }
    } else {
        if (!((*(float *)((a4 + 0x34))) > (u0 + t1))) {
            u16 = *(float *)(((0x34 + a4) + 0x0));
            *(volatile int *)((a4 + 0xBC));
            t18 = FUN_0c0e5dc0();
            t20 = FUN_0c0da410((a4 + (t18 * (*(int *)0xC23A258))));
            u21 = (t20 * f5);
            u21 = u21 + u2 * (((u0 + t1) - u16) / t1);
            *(float *)(((0x4B4 + a4) + 0x0)) = ((*(float *)(((0x4B4 + a4) + 0x0))) + u21);
        }
        if ((*(float *)((a4 + 0x34))) > (u0 + t1)) {
            *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + 0.0f);
        }
    }
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    u47 = *(float *)0xC04699C;
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * u47);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x64))) * u47);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * u47);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}
