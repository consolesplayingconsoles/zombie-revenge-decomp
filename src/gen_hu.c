/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01843e(void);
extern int FUN_0c01cdc2();
int FUN_0c022c5e(int);
int FUN_0c02a19a(int);
int FUN_0c032394(int);
int FUN_0c03261c(int, float, float);
int FUN_0c03271c(int, float, float);
int FUN_0c0327c8(int, float, float, float);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c054ae0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c0685a4(int, int, int);
int FUN_0c0848d6(int, int, int, int, float, float, float);
int FUN_0c0849da(void);
extern int FUN_0c0909fc();
int FUN_0c090bf0(int);
int FUN_0c090c68(int);
int FUN_0c090f70(int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0b3cee(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de260(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c060152(int a4, int a5, int a6, int a7);
int FUN_0c0b3a88(int a4);
int FUN_0c064220(int a4, int a5);
int FUN_0c02585c(int a4);
int FUN_0c07bcac(int a4, int a5, int a6);
void FUN_0c0a3916(int a4, int a5, int a6, int a7);
int FUN_0c05ba2a(int a4, int a5);
int FUN_0c018c7c(int a4);

int FUN_0c060152(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t9;
    register int t22;
    register int t23;
    register int t25;
    register int t26;
    register int t67;
    register int t78;
    register int t79;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register float u68;

    t1 = *(int *)0xC247CAC;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        FUN_0c090c68(a4);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC05FF8C;
    } else {
        t9 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t9 - 1);
        if ((int)(t9 - 1) <= 0) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
    }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0272199996f);
    t22 = *(int *)((a4 + 0x248));
    t23 = 0x3CDEFC7A;
    t25 = ((((((t22 - 1) - 1) << 1) + ((t22 - 1) - 1)) << 2) + (0x25C + a4));
    t26 = ((((((t22 - 1) << 1) + (t22 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t26 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t26 = (t26 - 12);
        t23 = t26;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t25); }
        t25 = (t25 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    if ((*(int *)((a4 + 0xD8))) == 0) {
        FUN_0c01cdc2(a4, t26);
    } else {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0xF31A9, t26, (t22 - 1), (0x25C + a4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x15);
        } else {
            t45 = t25;
            t46 = t26;
            t47 = (t22 - 1);
            t48 = (0x25C + a4);
        }
        t56 = t45;
        t57 = t46;
        t58 = t47;
        t59 = t48;
    }
    FUN_0c0848d6(t56, t57, t58, t59, (*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
    t67 = 0x0;
    for (;;) {
        if ((int)t67 >= (int)(*(int *)((a4 + 0x248)))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t67 << 1) + t67) << 2) + (0x25C + a4)));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        u68 = 4.0f;
        u68 = (u68 - ((float)t67 / (1.0f + 1.0f)));
        nlScale(u68, u68, u68);
        FUN_0c0de000(u68);
        t78 = FUN_0c0da2e0();
        t79 = ((~(((~t78) + 0x1) & 0x3)) + 0x1);
        if ((int)t78 >= 0) {
            t79 = (t78 & 0x3);
        }
        FUN_0c0c465c(((*(int *)(((0x220 + a4) + 0x0))) + t79));
        nlPopMatrix(0x1);
        t67 = (t67 + 0x1);
    }
    return FUN_0c0849da();
}

int FUN_0c0b3a88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(int *)((a4 + 0x90));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.0666666627f);
                        *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 0.000333333301f);
                        *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 0.000333333301f);
                        t2 = *(int *)((a4 + 0x94));
                        *(unsigned int *)((a4 + 0x94)) = (t2 - 1);
                        if ((int)(t2 - 1) <= 0) {
                            *(float *)((a4 + 0xA0)) = 0.649999976f;
                            *(unsigned int *)((a4 + 0x94)) = 0x14;
                            *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
                        }
                        u0 = 0.000333333301f;
                    } else {
                        if (t1 == 5) {
                            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.0666666627f);
                            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 0.000333333301f);
                            *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 0.000333333301f);
                            *(float *)((a4 + 0xA0)) = ((*(float *)((a4 + 0xA0))) + 0.0175000001f);
                            FUN_0c0de260((*(float *)((a4 + 0xA0))));
                            t2 = *(int *)((a4 + 0x94));
                            *(unsigned int *)((a4 + 0x94)) = (t2 - 1);
                            if ((int)(t2 - 1) <= 0) {
                                *(unsigned int *)((a4 + 0x94)) = 0x14;
                                *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
                            }
                        } else {
                            if (t1 == 6) {
                                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.0666666627f);
                                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 0.000333333301f);
                                *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 0.000333333301f);
                                *(float *)((a4 + 0xA0)) = ((*(float *)((a4 + 0xA0))) - 0.0175000001f);
                                FUN_0c0de260((*(float *)((a4 + 0xA0))));
                                t1 = *(int *)((a4 + 0x94));
                                *(unsigned int *)((a4 + 0x94)) = (t1 - 1);
                                if ((int)(t1 - 1) <= 0) {
                                    FUN_0c0b3cee();
                                    *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
                                }
                            } else {
                                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.0666666627f);
                                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 0.000333333301f);
                                *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 0.000333333301f);
                                u1 = 0.000333333301f;
                            }
                            u2 = u1;
                        }
                        u0 = u2;
                    }
                    u1 = u0;
                } else {
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.0666666627f);
                    *(float *)((a4 + 0xA0)) = ((*(float *)((a4 + 0xA0))) - 0.0124999993f);
                    *(float *)((a4 + 0xA4)) = ((*(float *)((a4 + 0xA4))) + 0.00999999885f);
                    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0xA0)));
                    *(unsigned int *)((a4 + 0x30)) = 0x206C;
                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) - 0.000999999931f);
                    FUN_0c0c0340((a4 + 0x30), 0.000333333301f);
                    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0xA4)));
                    *(float *)((a4 + 0x3C)) = (*(float *)((a4 + 0x7C)));
                    *(unsigned int *)((a4 + 0x30)) = (*(int *)((a4 + 0x70)));
                    t1 = *(int *)((a4 + 0x94));
                    *(unsigned int *)((a4 + 0x94)) = (t1 - 1);
                    if ((int)(t1 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x30)) = (*(int *)((a4 + 0x70)));
                        *(unsigned int *)((a4 + 0x94)) = 0x28;
                        *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
                    }
                }
                u0 = u1;
            } else {
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.112499997f);
                *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.112499997f);
                t1 = *(int *)((a4 + 0x94));
                *(unsigned int *)((a4 + 0x94)) = (t1 - 1);
                u1 = 0.112499997f;
                if ((int)(t1 - 1) > 0) {
                } else {
                    *(float *)((a4 + 0x40)) = 1.0f;
                    *(float *)((a4 + 0x44)) = 1.0f;
                    *(float *)((a4 + 0xA0)) = 1.0f;
                    *(float *)((a4 + 0xA4)) = 0.0f;
                    *(unsigned int *)((a4 + 0x94)) = 0x50;
                    *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
                    u1 = 1.0f;
                }
                u0 = u1;
            }
            if (((*(int *)0xC23A1A0) == 4) && (t0 = *(int *)((a4 + 0x90)), (int)t0 >= (int)0x4)) {
                FUN_0c0c7354(0xC111704, (*(float *)0xC0B3DA4), (*(float *)0xC0B3DA0));
            } else {
                u1 = u0;
            }
            return FUN_0c0c0340((a4 + 0x30), u1);
        }
        t0 = *(int *)((a4 + 0x94));
        *(unsigned int *)((a4 + 0x94)) = (t0 - 1);
        if ((int)(t0 - 1) > 0) {
            return 0x94;
        }
        *(float *)((a4 + 0x40)) = 10.0f;
        *(float *)((a4 + 0x44)) = 10.0f;
        *(unsigned int *)((a4 + 0x94)) = 0x50;
        *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
        return 0x90;
    }
    *(unsigned int *)((a4 + 0x94)) = 0x32;
    *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
    t0 = *(int *)((a4 + 0x94));
    *(unsigned int *)((a4 + 0x94)) = (t0 - 1);
    if ((int)(t0 - 1) > 0) {
        return 0x94;
    }
    *(float *)((a4 + 0x40)) = 10.0f;
    *(float *)((a4 + 0x44)) = 10.0f;
    *(unsigned int *)((a4 + 0x94)) = 0x50;
    *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
    return 0x90;
}

int FUN_0c064220(int a4, int a5)
{
    int stk[18];
    register int t1;
    register int t10;
    register int t24;
    register int t25;
    register int t41;
    register int t47;
    register int t14;

    t1 = FUN_0c0e19aa(0xC064520, 0x2BC, (*(int *)0xC23ECE4));
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
        t14 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = *(int *)((a4 + 0xBC));
    t25 = *(int *)((t1 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a4 + 0x6E)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = (*(short *)((t1 + 0x6E)));
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = 0x0;
    FUN_0c0a6780((((int)stk + 4) + 0x18), (t1 + 0x48), 0.0f, 0.0f, -10.0f);
    *(unsigned short *)((t1 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x18) + 0x0)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((t1 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX(((*(short *)((a4 + 0x6C))) + 0x4000));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    FUN_0c0db840((((int)stk + 4) + 0xC));
    FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    t41 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t41);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t41 + 0x70)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(unsigned short *)((t41 + 0x88)) = (*(int *)((((int)stk + 4) + 0x0)));
    *(unsigned short *)((t41 + 0x8A)) = (*(int *)((((int)stk + 4) + 0x4)));
    *(unsigned short *)((t41 + 0x8C)) = (*(int *)((((int)stk + 4) + 0x8)));
    *(unsigned short *)((t41 + 0x9A)) = 0x3FB;
    *(unsigned short *)((t41 + 0xA2)) = 0x1;
    *(unsigned short *)((t41 + 0xA0)) = 0x3;
    *(float *)((t41 + 0x90)) = (1.0f + 1.0f);
    t47 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t47);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x70)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(unsigned short *)((t47 + 0x9A)) = 0x344;
    *(unsigned short *)((t47 + 0xA2)) = 0x1;
    *(unsigned short *)((t47 + 0xA0)) = 0xA;
    *(float *)((t47 + 0x90)) = (1.0f + 1.0f);
    return (nlPopMatrix(0x1));
}

int FUN_0c02585c(int a4)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t6;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register int t30;
    register int t34;
    register float u35;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register float u42;
    register int t47;
    register int t51;
    register int t56;
    register int t57;
    register int t58;
    register int t65;
    register int t73;

    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    t1 = *(int *)((a4 + 0x3AC));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t2 = FUN_0c032394(a4);
                    if ((int)t2 < 0) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        FUN_0c02a19a(a4);
                    }
                    t6 = *(int *)((a4 + 0x488));
                    if ((*(int *)((t6 + 0xD8))) != 0) {
                        if ((*(int *)((t6 + 0xD8))) == 2) {
                            FUN_0c090f70(t6);
                        } else {
                            t11 = ((int (*)(int))(FUN_0c0909fc))(t6);
                        }
                        *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
                        t15 = *(int *)((t6 + 0xBC));
                        t16 = *(int *)((t6 + 0x1E8));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)((((((((t15 << 1) + t15) << 2) << 2) << 2) + 0xC23F268) + (((t16 << 1) + t16) << 2))); }
                        t17 = ((int (*)(int))(FUN_0c01cdc2))(t6);
                    }
                } else {
                    if (t1 == 4) {
                        t21 = FUN_0c032394(a4);
                        if ((int)t21 < 0) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            FUN_0c02a19a(a4);
                        }
                    }
                }
            } else {
                t30 = FUN_0c03261c(a4, 3.0f, 20.0f);
                if (t30 == 0) {
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    FUN_0c02a19a(a4);
                }
                t34 = *(int *)((a4 + 0x510));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((((((((t34 << 1) + t34) << 2) << 2) << 2) + 0xC23F268) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
                u35 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
                u36 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
                u37 = *(float *)((((int)stk + 4) + 0x4));
                u38 = *(float *)((((int)stk + 4) + 0x0));
                u39 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
                u40 = *(float *)((((int)stk + 4) + 0x8));
                u41 = ((u37 - u36) * (u37 - u36));
                u41 = u41 + (u38 - u35) * (u38 - u35);
                u42 = u41;
                u42 = u42 + (u40 - u39) * (u40 - u39);
                if (!(_builtin_sqrtf(u42) > 10.0f)) {
                    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                }
                t47 = *(int *)((a4 + 0x488));
                if ((*(int *)((t47 + 0xD8))) != 0) {
                    if ((*(int *)((t47 + 0xD8))) != 2) {
                        t51 = ((int (*)(int, Stk3))(FUN_0c0909fc))(t47, *(Stk3 *)(((int)stk + 4)));
                    } else {
                        FUN_0c090f70(t47);
                    }
                    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x3C)) = *(struct mv3 *)((t47 + 0x30)); }
                    t56 = *(int *)((t47 + 0xBC));
                    t57 = *(int *)((t47 + 0x1E8));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x30)) = *(struct mv3 *)((((((((t56 << 1) + t56) << 2) << 2) << 2) + 0xC23F268) + (((t57 << 1) + t57) << 2))); }
                    t58 = ((int (*)(int, int))(FUN_0c01cdc2))(t47, (((int)stk + 4) + 0xC));
                }
            }
        } else {
            t65 = FUN_0c03271c(a4, 4.0f, 20.0f);
            if (t65 == 0) {
            } else {
                *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
            }
        }
    } else {
        t73 = FUN_0c0327c8(a4, 0.0199999996f, 0.0399999991f, 0.799999952f);
        if (t73 != 0) {
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
        }
    }
    return (FUN_0c022c5e(a4));
}

int FUN_0c07bcac(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register float t13;
    register float u14;
    register int t41;
    register float u47;
    register float u48;
    register float u54;
    register int t59;
    register float u79;
    register int t30;
    register int t31;
    register int t32;
    register int t19;
    register int t20;
    register int t21;
    register int t42;
    register float u43;

    t0 = *(int *)0xC247C78;
    *(float *)(((int)stk + 16)) = ((float)t0 * 0.00138888881f);
    if ((int)(*(int *)((a4 + 0x98))) < (int)0x78) {
        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
        t30 = 0xC247C78;
        t31 = t0;
        t32 = a6;
    } else {
        if ((int)t0 < (int)0x2D0) {
            *(unsigned int *)0xC247C78 = ((*(int *)0xC247C78) + 0x1);
            *(float *)0xC200798 = ((*(float *)(((int)stk + 16))) * 60.0f);
            t19 = 0xC247C78;
            t20 = t0;
            t21 = 0x2D0;
        } else {
            if (t0 == 0x2D0) {
                *(unsigned int *)0xC247C78 = ((*(int *)0xC247C78) + 0x1);
                *(unsigned int *)0xC247C88 = (*(int *)0xC23A258);
            }
            t13 = FUN_0c0da410((((*(int *)0xC23A258) - (*(int *)0xC247C88)) * 0x111));
            u14 = 60.0f;
            u14 = u14 + 60.0f * t13;
            *(float *)0xC200798 = u14;
        }
        t30 = t19;
        t31 = t20;
        t32 = t21;
    }
    FUN_0c0685a4(t30, t31, t32);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xC20092C;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    FUN_0c0dcca0(0xC200920);
    t41 = 0xC07BDA8;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
            t42 = (*(int *)(((int)stk + 8)));
            t41 = 0xC200900;
            t42 = (t42 << 2);
            u47 = *(float *)0xC200798;
            u48 = *(float *)((t42 + t41));
            t41 = 0xC200910;
            *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (u48 + u47);
            u43 = ((((u48 + u47) * 6.28317976f) - (*(float *)((t42 + t41)))) / 24.0f);
            t41 = (nlPushMatrix(0x0));
            t41 = 0xC;
            u54 = (float)((*(int *)(((int)stk + 8))) * 0x64);
            *(unsigned int *)((((a4 + 0x68) + t42) + 0x0)) = (int)((float)(*(int *)((((a4 + 0x68) + t42) + 0x0))) + (u54 * (*(float *)((((int)stk + 4) + t41)))));
            t41 = (nlRotateAZ((*(int *)((((a4 + 0x68) + t42) + 0x0)))));
            t41 = (nlRotateAX(((*(int *)((((a4 + 0x68) + t42) + 0x0))) << 1)));
            t59 = *(int *)((((a4 + 0x68) + t42) + 0x0));
            t41 = (nlRotateAY(((t59 << 1) + t59)));
            t42 = 0x0;
            for (;;) {
                t41 = (nlRotateAY(0x555));
                t41 = (nlPushMatrix(0x0));
                t41 = (FUN_0c0dcc70((*(float *)0xC200798), 0.0f, 0.0f));
                t41 = (FUN_0c0c465c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                t41 = (nlPopMatrix(0x1));
                t41 = (nlRotateAY(0x555));
                if (u43 > 0.0f) {
                    t41 = (nlPushMatrix(0x0));
                    t41 = 0x8;
                    t41 = (FUN_0c0dcc70(0.0f, 0.0f, (*(float *)((((int)stk + 4) + t41)))));
                    t41 = (nlScale(u43, 1.69999993f, 1.69999993f));
                    t41 = (nlRotateAX(((((unsigned int)(*(int *)0xC23A258) >> 1) & 0xFFF) * 0x3763)));
                    t41 = (nlRotateAZ(0x4000));
                    t41 = 0xC07BF38;
                    t41 = (nlScale(1.0f, (*(float *)((t41 + 0x0))), 1.0f));
                    u79 = u43;
                    if (1.69999993f > u43) {
                        u79 = 1.69999993f;
                    }
                    t41 = (FUN_0c0de000(u79));
                    *(volatile int *)0xC23A258;
                    t41 = 0x3;
                    t41 = (FUN_0c0e5fe4());
                    t41 = (FUN_0c0c465c((0x2BB + t41)));
                    t41 = (nlPopMatrix(0x1));
                }
                t42 = (t42 + 0x1);
                if ((int)t42 >= (int)0x18) {
                    break;
                }
            }
            t41 = (nlPopMatrix(0x1));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
            continue;
        }
        break;
    }
    return (nlPopMatrix(0x1));
}

void FUN_0c0a3916(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    return;
    }
    if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) == 1) {
        return;
    }
    t0 = *(int *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x0));
    if (((*(int *)((t0 + 0x290))) & 0x40000000) != 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    }
    if ((*(int *)((0xC247030 + ((*(int *)((t0 + 0xBC))) << 2)))) == 8) {
        return;
    }
    t1 = *(int *)((t0 + 0x4C8));
    if (t1 != 1) {
        if (t1 != 2) {
        } else {
            if ((*(int *)((t0 + 0x4E8))) == 1) {
                *(unsigned int *)((t0 + 0x4E8)) = 0x0;
                *(unsigned int *)((a4 + 0xA0)) = 0x0;
                *(unsigned int *)((a4 + 0xA4)) = 0x2;
            }
            if ((*(int *)((t0 + 0x4E8))) == 2) {
                *(unsigned int *)((t0 + 0x4E8)) = 0x0;
                *(unsigned int *)((a4 + 0xA0)) = 0x0;
                *(unsigned int *)((a4 + 0xA4)) = 0x3;
            }
            if ((*(int *)((t0 + 0x4E8))) == 3) {
                *(unsigned int *)((t0 + 0x4E8)) = 0x0;
                *(unsigned int *)((a4 + 0xA0)) = 0x0;
                *(unsigned int *)((a4 + 0xA4)) = 0x4;
            }
            if ((*(int *)((a4 + 0xA4))) == 2) {
                t1 = *(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)));
                t2 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t2 + 0x1);
                t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                *(unsigned int *)((a4 + 0x78)) = t3;
                if ((int)t3 < 0) {
                    *(unsigned int *)((a4 + 0xA0)) = 0x0;
                    *(unsigned int *)((a4 + 0xA4)) = 0x1;
                    *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)(((0xA0 + a4) + 0x0))) << 1) + (*(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)))))));
                }
            } else {
                if ((*(int *)((a4 + 0xA4))) == 3) {
                    t1 = *(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)));
                    t2 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t2 + 0x1);
                    t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                    *(unsigned int *)((a4 + 0x78)) = t3;
                    if ((int)t3 < 0) {
                        *(unsigned int *)((a4 + 0xA0)) = ((*(int *)((a4 + 0xA0))) - 1);
                        *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)(((0xA0 + a4) + 0x0))) << 1) + (*(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)))))));
                    }
                } else {
                    if ((*(int *)((a4 + 0xA4))) == 4) {
                        t1 = *(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)));
                        t2 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t2 + 0x1);
                        t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                        *(unsigned int *)((a4 + 0x78)) = t3;
                        if ((int)t3 < 0) {
                            *(unsigned int *)((a4 + 0xA0)) = 0x0;
                            *(unsigned int *)((a4 + 0xA4)) = 0x1;
                            *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)(((0xA0 + a4) + 0x0))) << 1) + (*(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)))))));
                        }
                    }
                }
            }
        }
    } else {
        *(unsigned int *)((a4 + 0xA4)) = 0x1;
        t1 = *(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)));
        t2 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t2 + 0x1);
        t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
        *(unsigned int *)((a4 + 0x78)) = t3;
        if ((int)t3 >= 0) {
        } else {
            *(unsigned int *)((a4 + 0xA0)) = 0x0;
            *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)(((0xA0 + a4) + 0x0))) << 1) + (*(int *)(((*(int *)(((0x8C + a4) + 0x0))) + ((*(int *)((a4 + 0xA4))) << 2)))))));
        }
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)((t0 + 0x3E4))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    nlPopMatrix(0x1);
}

int FUN_0c05ba2a(int a4, int a5)
{
    int stk[13];

    register int R7;
    register int R9;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
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
    v0_7 = a4;
    v0_2 = a5;
    v0_4 = (0xBC);
    v0_5 = (0x1);
    v0_0 = (v0_2);
    v0_1 = (v0_7);
    v0_2 = (0x0);
    v0_3 = (0x0);
    if (((int)(*(int *)((v0_7 + 0xBC))) >= (int)0x2)) goto L_C05BAA2;
    v0_4 = (0x344);
    if (((*(int *)((v0_1 + 0x344))) != 0)) goto L_C05BA5C;
    L_C05BC56:;
    return v0_4;
    L_C05BA5C:;
    v0_6 = *(int *)((((*(int *)((v0_1 + 0x34C))) << 2) + 0xC2475D4));
    v0_4 = (0x21C);
    v0_7 = (v0_6);
    if (((int)(*(int *)((v0_6 + 0x21C))) <= 0)) goto L_C05BAA4;
    v0_9 = *(int *)((v0_7 + v0_4));
    v0_6 = (v0_9);
    v0_8 = (0x5);
    v0_2 = (0xC247544);
    if (((int)v0_9 >= (int)0x5)) goto L_C05BA8C;
    *(unsigned int *)((v0_7 + v0_4)) = v0_3;
    v0_7 = *(int *)((v0_1 + 0xBC));
    v0_4 = (0xBC);
    v0_6 = (((*(int *)(((v0_2 + (((v0_7 << 2) << 2) << 1)) + 0x0))) + 0x1));
    v0_2 = ((v0_2 + (((v0_7 << 2) << 2) << 1)));
    L_C05BAA0:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_6;
    L_C05BAA2:;
    v0_2 = (v0_5);
    L_C05BAA4:;
    if ((v0_2 != 0)) goto L_C05BAAC;
    goto L_C05BC56;
    L_C05BAAC:;
    v0_6 = FUN_0c0e19aa(0xC05BCD0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(v0_6);
    *(unsigned int *)((v0_6 + 0x21C)) = v0_5;
    *(unsigned int *)((v0_6 + 0xBC)) = (*(int *)((v0_1 + 0xBC)));
    *(unsigned int *)(((0x200 + v0_6) + 0x0)) = (unsigned char)(*(signed char *)((v0_0 + 0x2)));
    v0_4 = (0xE8);
    v0_6 = (v0_6);
    if (((int)(*(short *)((v0_1 + 0xE8))) >= (int)0x4)) goto L_C05BB18;
    if (((*(signed char *)((v0_0 + 0x4))) == 0)) goto L_C05BAEA;
    v0_4 = ((*(int *)((v0_1 + 0x1EC))));
    L_C05BB24:;
    *(unsigned int *)((v0_6 + 0x1EC)) = v0_4;
    *(unsigned int *)(((0x1E8 + v0_6) + 0x0)) = (unsigned char)(*(signed char *)((v0_0 + 0x3)));
    *(unsigned int *)(((0x1F4 + v0_6) + 0x0)) = (unsigned char)(*(signed char *)((v0_0 + 0x4)));
    *(unsigned int *)(((0x204 + v0_6) + 0x0)) = (unsigned char)(*(signed char *)((v0_0 + 0x5)));
    *(float *)((v0_6 + 0x1E4)) = ((*(float *)((v0_0 + 0xC))) * 1.5f);
    *(unsigned int *)(((0x1FC + v0_6) + 0x0)) = (unsigned char)(*(signed char *)((v0_0 + 0x1)));
    *(unsigned int *)((v0_6 + 0x1F8)) = (unsigned char)(*(signed char *)((v0_0 + 0x0)));
    *(unsigned int *)(((0x22C + v0_6) + 0x0)) = (unsigned short)(*(short *)((v0_0 + 0x8)));
    FUN_0c0cc3f8(0x828A9, v0_2, v0_3, R7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    FUN_0c0cc054((*(int *)((v0_1 + 0xBC))), 0x5);
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((*(int *)((v0_1 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    v0_2 = *(int *)((v0_1 + 0x344));
    FUN_0c0db470(((((v0_2 << 1) + v0_2) << 2) + 0xC1FEFBC), (v0_6 + 0x30));
    nlPopMatrix(0x1);
    *(unsigned short *)((v0_6 + 0x6E)) = (*(short *)((v0_1 + 0x6E)));
    *(unsigned int *)((v0_6 + 0x220)) = 0x124E;
    *(unsigned int *)((((int)stk + 8) + 0x0)) = (FUN_0c054ae0(v0_1));
    *(unsigned int *)((((int)stk + 8) + 0x4)) = (*(short *)((v0_6 + 0x6E)));
    *(unsigned int *)((((int)stk + 8) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 8), (v0_6 + 0x48), 0.0f, 0.0f, -6.0f);
    *(float *)((v0_6 + 0x238)) = 0.599999964f;
    *(unsigned short *)((v0_6 + 0x6C)) = (*(int *)((((int)stk + 8) + 0x0)));
    *(float *)((v0_6 + 0x24C)) = 2.5f;
    *(float *)((v0_6 + 0x250)) = 2.5f;
    *(float *)((v0_6 + 0x3C)) = ((*(float *)((v0_6 + 0x30))) - ((*(float *)((v0_6 + 0x48))) * 0.699999988f));
    *(float *)((v0_6 + 0x40)) = ((*(float *)((v0_6 + 0x34))) - ((*(float *)((v0_6 + 0x4C))) * 0.699999988f));
    *(float *)((v0_6 + 0x44)) = ((*(float *)((v0_6 + 0x38))) - ((*(float *)((v0_6 + 0x50))) * 0.699999988f));
    *(int *)((int)stk + 4) = 0x0;
    v0_4 = ((FUN_0c05b274(v0_1, v0_0, v0_6, 0x1, 0x0)));
    goto L_C05BC56;
    L_C05BAEA:;
    v0_4 = (0x0);
    goto L_C05BB24;
    L_C05BB18:;
    v0_4 = ((~(((int)v0_5 << (int)(*(short *)((v0_1 + v0_4)))) | 0xFF000)));
    goto L_C05BB24;
    L_C05BA8C:;
    *(unsigned int *)((v0_7 + v0_4)) = (v0_6 - v0_8);
    v0_7 = *(int *)((v0_1 + 0xBC));
    v0_4 = (0xBC);
    v0_6 = (((*(int *)(((v0_2 + (((v0_7 << 2) << 2) << 1)) + 0x0))) + v0_8));
    v0_2 = ((v0_2 + (((v0_7 << 2) << 2) << 1)));
    goto L_C05BAA0;
}

