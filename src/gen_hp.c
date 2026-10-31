/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01cdf2(int);
int FUN_0c01d636(int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c01e7e8(int, int, int);
float FUN_0c01f172(int);
int FUN_0c022838(int);
extern int FUN_0c02a19a();
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c046170(int, float);
int FUN_0c04638a(int);
int FUN_0c046cc0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c090bf0(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c047ba4(int a4, int a5, int a6, int a7);
int FUN_0c05ccb0(int a4, int a5);
int FUN_0c05921e(int a4);
int FUN_0c05f3e0(int a4, int a5, int a6, int a7);

int FUN_0c047ba4(int a4, int a5, int a6, int a7)
{
    int stk[27];
    register int t0;
    register int t6;
    register int t12;
    register int t28;
    register int t72;
    register int t78;
    register int t91;
    register int t93;
    register int t107;
    register int t121;
    register int t103;
    register int t87;
    register int t85;
    register int t101;
    register int t119;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        FUN_0c034fbc(a4, 0x40, 0x1, 0x0);
                        FUN_0c04638a(a4);
                        *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) + 0x1C00);
                        if ((int)(*(int *)((a4 + 0x2B4))) >= (int)0x1E) {
                            *(unsigned int *)((a4 + 0x2B4)) = 0x1E;
                        }
                        t6 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t6 - 1);
                        if ((int)(t6 - 1) < 0) {
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        }
                    } else {
                        if (t0 == 5) {
                            *(unsigned int *)((a4 + 0x248)) = 0x0;
                            if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                                *(unsigned int *)((a4 + 0x534)) = 0x0;
                                *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                                t12 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
                            }
                        }
                    }
                } else {
                    FUN_0c034fbc(a4, 0x60, 0x1, 0x0);
                    FUN_0c04638a(a4);
                    *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) + 0x1C00);
                    if ((int)(*(int *)((a4 + 0x2B4))) < (int)0x1E) {
                    } else {
                        *(unsigned int *)((a4 + 0x2B4)) = 0x1E;
                        *(unsigned int *)((a4 + 0x3AC)) = 0x78;
                        { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x18)) = *(struct mv4 *)(0xC0F6728); }
                        t28 = *(int *)((a4 + 0xBC));
                        *(float *)(((((int)stk + 16) + 0x28) + 0x0)) = ((((*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x0))) + (*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x0)))) * 0.5f) - (*(float *)((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x0))));
                        *(float *)(((((int)stk + 16) + 0x28) + 0x4)) = ((((*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x4))) + (*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x4)))) * 0.5f) - (*(float *)((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x4))));
                        *(float *)(((((int)stk + 16) + 0x28) + 0x8)) = ((((*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x8))) + (*(float *)(((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x8)))) * 0.5f) - (*(float *)((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x8))));
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        nlRotateAX((-(*(short *)((a4 + 0x6C)))));
                        nlRotateAY((-(*(short *)((a4 + 0x6E)))));
                        nlRotateAZ((-(*(short *)((a4 + 0x70)))));
                        *(float *)(((int)stk + 28)) = (*(float *)(((((int)stk + 16) + 0x28) + 0x0)));
                        *(float *)(((int)stk + 32)) = (*(float *)(((((int)stk + 16) + 0x28) + 0x4)));
                        *(float *)(((int)stk + 36)) = (*(float *)(((((int)stk + 16) + 0x28) + 0x8)));
                        FUN_0c0db470((((int)stk + 16) + 0xC), ((int)stk + 16));
                        *(float *)(((((int)stk + 16) + 0x34) + 0x0)) = (*(float *)(((int)stk + 16)));
                        *(float *)(((((int)stk + 16) + 0x38) + 0x0)) = (*(float *)(((int)stk + 20)));
                        *(float *)(((((int)stk + 16) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 24)));
                        nlPopMatrix(0x1);
                        *(int *)((int)stk + 12) = 0x0;
                        *(int *)((int)stk + 8) = 0x0;
                        *(int *)((int)stk + 4) = 0xFFFFFC00;
                        FUN_0c062d4a(a4, (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x40), 0xFFFFDC00, 0xFFFFFC00, 0x0, 0x0);
                        FUN_0c0372f8(a4, 0x34A9, 0x134A9, (*(int *)((a4 + 0x3AC))));
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                }
                t87 = (FUN_0c022838(a4));
            } else {
                t72 = FUN_0c046cc0(a4);
                if (t72 == 0) {
                    FUN_0c0cc3f8(0x334A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                    t85 = (((int (*)(int))(FUN_0c02a19a))(a4));
                } else {
                    FUN_0c034fbc(a4, 0x60, 0x1, 0x0);
                    FUN_0c04638a(a4);
                    *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) + 0x1C00);
                    t78 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t78 - 1);
                    if ((int)(t78 - 1) >= 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x59E;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t85 = (FUN_0c022838(a4));
                }
                t87 = t85;
            }
            t103 = t87;
        } else {
            t91 = FUN_0c046cc0(a4);
            if (t91 != 0) {
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                t93 = FUN_0c046170(a4, 0.049999997f);
                if (t93 == 0) {
                } else {
                    *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
                t101 = (FUN_0c022838(a4));
            } else {
                FUN_0c0cc3f8(0x334A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                t101 = (((int (*)(int))(FUN_0c02a19a))(a4));
            }
            t103 = t101;
        }
        t121 = t103;
    } else {
        t107 = FUN_0c046cc0(a4);
        if (t107 != 0) {
            *(unsigned int *)((a4 + 0x248)) = 0x0;
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            FUN_0c046170(a4, 0.049999997f);
            if (((*(int *)((a4 + 0x2EC))) & 12) == 0) {
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x59D;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            t119 = (FUN_0c022838(a4));
        } else {
            FUN_0c0cc3f8(0x334A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
            t119 = (((int (*)(int))(FUN_0c02a19a))(a4));
        }
        t121 = t119;
    }
    return t121;
}

int FUN_0c05ccb0(int a4, int a5)
{
    int stk[22];
    register int t1;
    register int t85;
    register int t72;
    register int t8;
    register int t16;
    register int t19;
    register int t22;
    register int t29;
    register int t56;

    t1 = *(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4));
    t85 = 0x344;
    if ((*(int *)((a4 + 0x344))) == 0) {
    } else {
        t72 = 0x21C;
        if ((int)(*(int *)((t1 + 0x21C))) <= 0) {
        } else {
            if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                t8 = *(int *)((a4 + 0xBC));
                *(unsigned int *)(((((t8 << 2) << 2) << 1) + 0xC247544)) = ((*(int *)(((((t8 << 2) << 2) << 1) + 0xC247544))) + 0x1);
            }
            *(unsigned int *)((t1 + 0x21C)) = ((*(int *)((t1 + 0x21C))) - 1);
            t16 = FUN_0c0e19aa(0xC05CB48, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t16);
            t19 = FUN_0c0e19aa(0xC05BFAC, 0xB4, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t19);
            t22 = FUN_0c0e19aa(0xC08C20E, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t22);
            nlPushMatrix(0x0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(0xC0F9BA8); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC0F9BB4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9BC0); }
            FUN_0c0dbda0(((((*(int *)((a4 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x30);
            FUN_0c0a79fa((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x30));
            t29 = *(int *)((a4 + 0x340));
            FUN_0c0db470(((((t29 << 1) + t29) << 2) + 0xC1FEFBC), (t16 + 0x30));
            FUN_0c0db470((((int)stk + 4) + 0x10), (t19 + 0x30));
            nlGetMatrix((t22 + 0x30));
            nlUnitMatrix();
            nlRotateAY((*(int *)(((((int)stk + 4) + 0x2C) + 0x0))));
            nlRotateAX((*(int *)(((((int)stk + 4) + 0x28) + 0x0))));
            nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
            FUN_0c0db470((((int)stk + 4) + 0x1C), (t16 + 0x48));
            FUN_0c0db470((((int)stk + 4) + 0x4), (t19 + 0x48));
            FUN_0c0a7714((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x2C), (*(float *)((t16 + 0x48))), (*(float *)((t16 + 0x4C))), (*(float *)((t16 + 0x50))));
            *(unsigned short *)((t16 + 0x6E)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
            *(unsigned short *)((t16 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x28) + 0x0)));
            nlPopMatrix(0x1);
            FUN_0c0cc3f8(0xF28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x9);
            t56 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t56 = (*(int *)((a4 + 0x1EC)));
            }
            *(unsigned int *)((t16 + 0x1EC)) = t56;
            *(unsigned int *)((t16 + 0xBC)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)(((0x200 + t16) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            *(unsigned int *)(((0x1E8 + t16) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            *(unsigned int *)(((0x1F4 + t16) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            *(unsigned int *)(((0x204 + t16) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            *(float *)((t16 + 0x1E4)) = (*(float *)((a5 + 0xC)));
            *(unsigned int *)(((0x1FC + t16) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            *(unsigned int *)((t16 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            *(unsigned int *)(((0x22C + t16) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
            *(unsigned int *)((t16 + 0x220)) = 0x124E;
            *(float *)((t16 + 0x238)) = (*(float *)0xC05CFD0);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t16 + 0x3C)) = *(struct mv3 *)((t16 + 0x30)); }
            *(unsigned int *)((t19 + 0x88)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)((t19 + 0x8C)) = a4;
            *(unsigned int *)((t19 + 0x78)) = 0x124F;
            *(unsigned int *)((t19 + 0xA0)) = 0x3C;
            *(unsigned int *)((t19 + 0xA4)) = 0x3;
            *(float *)((t19 + 0x54)) = (*(float *)0xC05CFD8);
            *(float *)((t19 + 0x58)) = (*(float *)0xC05CFDC);
            *(float *)((t19 + 0x5C)) = (-1.0f);
            *(unsigned short *)((t22 + 0x9A)) = 0x40A;
            *(unsigned short *)((t22 + 0xA2)) = 0x1;
            *(unsigned short *)((t22 + 0xA0)) = 0x3;
            *(float *)((t22 + 0x90)) = 1.0f;
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x20000);
            t72 = 0x90;
        }
        t85 = t72;
    }
    return t85;
}

int FUN_0c05921e(int a4)
{
    int stk[9];
    int t0;
    register int t1;
    register int t7;
    register int t27;
    register int t48;
    register int t36;
    register int t42;
    register int t84;
    register int t105;
    register int t93;
    register int t99;
    register int t120;
    register int t127;
    register int t148;
    register int t151;
    register int t154;
    register int t162;
    register int t182;
    register int t203;
    register int t191;
    register int t197;
    register int t209;
    register int t235;
    register int t257;
    register int t246;
    register int t2;
    register int t22;
    register int t13;
    register int t56;
    register int t112;
    register int t219;
    register int t229;
    register int t251;

    t0 = *(int *)0xC23ED5C;
    t1 = *(int *)((a4 + 0x284));
    if (((0x40000 & t0) == 0) && ((t2 = *(int *)((a4 + 0x244)), t2 == 0) || ((0x6 & t0) == 0))) {
        t22 = t0;
    } else {
        t7 = *(int *)((a4 + 0xC0));
        if (((*(int *)((a4 + 0x270))) & 0x2) != 0) {
            FUN_0c01d9c2(a4);
        } else {
            t13 = t0;
        }
        *(unsigned int *)((((((*(int *)((a4 + 0xBC))) - 16) << 2) + ((((((t7 << 1) + t7) << 2) << 1) + 0xC247B24) + 0x8)) + 0x0)) = 0x0;
        *(unsigned int *)(((((((t7 << 1) + t7) << 2) << 1) + 0xC247B24) + 0x4)) = ((*(int *)(((((((t7 << 1) + t7) << 2) << 1) + 0xC247B24) + 0x4))) - 1);
        FUN_0c0e19f2(t13);
    }
    if ((*(int *)((a4 + 0x21C))) != 0) {
        if ((*(int *)((a4 + 0x28C))) == 0) {
            t27 = ((int (*)(int))((*(int *)((((*(int *)((a4 + 0x26C))) << 2) + 0xC1FFAEC)))))(a4);
        }
        t48 = 0x21C;
        if ((*(int *)((a4 + 0x21C))) == 0) {
            t36 = *(int *)((a4 + 0x270));
            t42 = t36;
            if ((t36 & 1) != 0) {
                FUN_0c01cdf2(a4);
                if ((*(int *)0xC23ED50) == (*(int *)((a4 + 0x220)))) {
                    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                }
                t42 = 0x1B0;
            }
            t48 = t42;
        }
        return t48;
    }
    *(unsigned int *)((a4 + 0x1FC)) = (*(int *)((a4 + 0x1F8)));
    if (((*(int *)((a4 + 0x1BC))) == 0) && (t56 = *(int *)0xC23A1A8, (t56 & 0x8000) == 0)) {
        if ((*(int *)((a4 + 0x28C))) != 0) {
            FUN_0c01cdc2(a4);
        }
        if ((*(int *)((a4 + 0x28C))) == 0) {
            t84 = ((int (*)(int))((*(int *)((((*(int *)((a4 + 0x26C))) << 2) + 0xC1FFAEC)))))(a4);
        }
        t105 = 0x21C;
        if ((*(int *)((a4 + 0x21C))) == 0) {
            t93 = *(int *)((a4 + 0x270));
            t99 = t93;
            if ((t93 & 1) != 0) {
                FUN_0c01cdf2(a4);
                if ((*(int *)0xC23ED50) == (*(int *)((a4 + 0x220)))) {
                    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                }
                t99 = 0x1B0;
            }
            t105 = t99;
        }
        return t105;
    }
    if (((*(int *)((a4 + 0x28C))) == 0) && (t112 = *(int *)0xC23A1A8, (t112 & 0x8000) == 0)) {
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t120 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t120 << 2) + 0xC247584)) = ((*(int *)(((t120 << 2) + 0xC247584))) + 0x1F4);
        }
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        t127 = *(int *)((a4 + 0x1F8));
        *(unsigned int *)((a4 + 0x1F8)) = (t127 - 1);
        if ((int)(t127 - 1) <= 0) {
            FUN_0c0cc3f8(0xE28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
            *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) + 0x1);
            *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) & 0xFFFFFFFE);
            if (((*(int *)((a4 + 0x270))) & 0x2) != 0) {
                FUN_0c01d9c2(a4);
                *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) & 0xFFFFFFFD);
            }
            if (((*(int *)((t1 + 0x1C))) & 1) != 0) {
                FUN_0c01d636(a4, (*(int *)((t1 + 0x18))), 0x0);
                *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) | 0x2);
            }
            t148 = (*(int *)((t1 + 0xC)));
            for (;;) {
                if ((*(short *)((t148 + 0xE))) == 0) {
                    break;
                }
                t151 = t148;
                t148 = (t148 + 0x10);
                t154 = ((int (*)(int, int))((*(int *)((0xC1FFB1C + ((*(int *)((a4 + 0x26C))) << 2))))))(a4, t151);
            }
            if ((*(int *)0xC204998) == 1) {
                *(unsigned int *)0xC1FF88C = ((((*(int *)((a4 + 0x268))) == 6)) ? 1 : 0);
            } else {
                *(unsigned int *)0xC1FF88C = 0x0;
            }
            t162 = ((int (*)(int))((*(int *)((((*(int *)((a4 + 0x268))) << 2) + 0xC1FFB4C)))))(a4);
        }
        if ((*(int *)((a4 + 0x28C))) != 0) {
            FUN_0c01cdc2(a4);
        }
        if ((*(int *)((a4 + 0x28C))) == 0) {
            t182 = ((int (*)(int))((*(int *)((((*(int *)((a4 + 0x26C))) << 2) + 0xC1FFAEC)))))(a4);
        }
        t203 = 0x21C;
        if ((*(int *)((a4 + 0x21C))) == 0) {
            t191 = *(int *)((a4 + 0x270));
            t197 = t191;
            if ((t191 & 1) != 0) {
                FUN_0c01cdf2(a4);
                if ((*(int *)0xC23ED50) == (*(int *)((a4 + 0x220)))) {
                    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                }
                t197 = 0x1B0;
            }
            t203 = t197;
        }
        return t203;
    }
    t209 = *(int *)((a4 + 0xC0));
    t235 = t22;
    if ((*(int *)((a4 + 0x28C))) == 0) {
        *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) & 0xFFFFFFFE);
        if (((*(int *)((a4 + 0x270))) & 0x2) != 0) {
            FUN_0c01d9c2(a4);
            *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) & 0xFFFFFFFD);
        } else {
            t219 = t22;
        }
        if (((*(int *)((t1 + 0x1C))) & 1) != 0) {
            FUN_0c01d636(a4, (*(int *)((t1 + 0x18))), 0x0);
            *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) | 0x2);
        } else {
            t229 = t219;
        }
        t235 = t229;
    }
    t257 = t235;
    if ((*(int *)((a4 + 0x224))) != 0) {
        if (((*(int *)0xC23A1A8) & 0x8000) == 0) {
            if ((*(int *)0xC204998) == 1) {
                *(unsigned int *)0xC1FF88C = ((((*(int *)((a4 + 0x268))) == 6)) ? 1 : 0);
            } else {
                *(unsigned int *)0xC1FF88C = 0x0;
            }
            t246 = ((int (*)(int))((*(int *)((((*(int *)((a4 + 0x268))) << 2) + 0xC1FFB4C)))))(a4);
        } else {
            t251 = t235;
        }
        t257 = t251;
    }
    *(unsigned int *)((((((*(int *)((a4 + 0xBC))) - 16) << 2) + ((((((t209 << 1) + t209) << 2) << 1) + 0xC247B24) + 0x8)) + 0x0)) = 0x0;
    *(unsigned int *)(((((((t209 << 1) + t209) << 2) << 1) + 0xC247B24) + 0x4)) = ((*(int *)(((((((t209 << 1) + t209) << 2) << 1) + 0xC247B24) + 0x4))) - 1);
    return FUN_0c0e19f2(t257);
}

int FUN_0c05f3e0(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t1;
    register int t2;
    register float t44;
    register int t47;
    register int t89;
    register float t90;
    register int t93;
    register int t88;

    t1 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC2475D4));
    if (t1 == 0) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) - 0x2000);
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.00999999978f);
    *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
    *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
    if (((*(int *)0xC23A258) & 7) == 0) {
        FUN_0c0cc3f8(0x12DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0x1C4))), 0xE);
    }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c0cc3f8(0x52CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xF);
        FUN_0c05a98a(a4);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    FUN_0c01e7e8(a4, 0xA7D, (*(int *)((a4 + 0xBC))));
    if ((*(int *)((a4 + 0xA8))) == 0) {
        t44 = FUN_0c01f172(a4);
        if (t44 > ((*(float *)((a4 + 0x34))) - (*(float *)((t1 + 0x258))))) {
            *(unsigned int *)((t1 + 0x260)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
            t47 = ((int (*)(void))(FUN_0c0e19f2))();
        }
    } else {
        if ((int)(*(int *)((a4 + 0xAC))) > (int)0x16) {
        } else {
            nlPushMatrix(0x0);
            FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))));
            nlUnitMatrix();
            nlRotateAX((-(*(int *)(((int)stk + 4)))));
            nlRotateAY((-(*(int *)(((int)stk + 8)))));
            *(float *)(((int)stk + 36)) = (*(float *)((a4 + 0x60)));
            *(float *)(((int)stk + 40)) = (*(float *)((a4 + 0x64)));
            *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x68)));
            FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 24)));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
            *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
            nlUnitMatrix();
            nlRotateAY((*(int *)(((int)stk + 8))));
            nlRotateAX((*(int *)(((int)stk + 4))));
            *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 20))) * 0.199999988f);
            *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 16))) * 0.199999988f);
            *(float *)(((int)stk + 44)) = (-((*(float *)(((int)stk + 12))) * 0.199999988f));
            FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
            *(float *)(((a4 + 0x54) + 0x0)) = (*(float *)(((int)stk + 24)));
            *(float *)(((a4 + 0x58) + 0x0)) = (*(float *)(((int)stk + 28)));
            *(float *)(((a4 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 32)));
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x54)); }
        }
        if (((*(int *)((a4 + 0xA8))) != 0) && (t88 = *(int *)((a4 + 0xAC)), (int)t88 <= (int)0x2)) {
            *(unsigned int *)((t1 + 0x260)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
            t89 = ((int (*)(void))(FUN_0c0e19f2))();
        } else {
            t90 = FUN_0c01f172(a4);
            if (t90 > ((*(float *)((a4 + 0x34))) - (*(float *)((t1 + 0x258))))) {
                *(unsigned int *)((t1 + 0x260)) = 0x1;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
                t93 = ((int (*)(void))(FUN_0c0e19f2))();
            }
        }
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    return (nlPopMatrix(0x1));
}
