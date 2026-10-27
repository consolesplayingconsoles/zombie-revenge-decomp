/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0110d0(int);
int FUN_0c01132c(int);
int FUN_0c0115c0(void);
int FUN_0c012570(int);
int FUN_0c0125f4(int, int, int, int, int);
int FUN_0c0129b6(int, int, int, int, float);
int FUN_0c0154a4(void);
int FUN_0c01632c(void);
int FUN_0c0169da(int, int, int, int);
int FUN_0c0211e2(void);
int FUN_0c02120e(void);
int FUN_0c021266(void);
int FUN_0c057fd4(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int, float);
int FUN_0c0cc720(void);
int FUN_0c0cf2ac(int, int);
extern int FUN_0c0cf3ec();
int FUN_0c0cf46c(int);
int FUN_0c0cf486(void);
int FUN_0c0cf4aa(int);
int FUN_0c0d19b8(int, int);
int FUN_0c0d1b00(void);
int FUN_0c0d2040(int, int);
int FUN_0c0d2060(int);
int FUN_0c0d27a0(int);
int FUN_0c0d2d2e(void);
int FUN_0c0d35e0(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e5f1c();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int FUN_0c011cfc(int a4);
int FUN_0c0d2dd4(int a4);

int FUN_0c011cfc(int a4)
{
    int t15;
    int t16;
    float u21;
    float u22;
    float u25;
    float u39;
    float u40;
    float u43;
    int t246;
    int t252;
    int t373;
    int t84;
    int t88;
    int t142;
    int t146;
    int t178;
    int t184;
    int t400;
    int t401;
    int t402;
    int t390;
    int t391;
    int t392;
    int t329;
    int t330;
    int t346;
    int t347;
    int t405;
    int t406;
    int t426;
    int t427;
    int stk[19];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)0xC23EAD4 = (FUN_0c0110d0(a4));
    *(unsigned int *)0xC1EF56C = ((*(int *)0xC1EF56C) + 0x100);
    FUN_0c0115c0();
    nlPushMatrix(0x0);
    nlScale(1.0f, 1.0f, 0.599999964f);
    FUN_0c0dcca0(0xC0F4208);
    FUN_0c0c465c(0x1304);
    FUN_0c0c465c(0x12EA);
    if ((*(int *)0xC23EACC) != 2) {
        FUN_0c0c465c(0x1317);
        FUN_0c0c465c(0x1319);
    }
    t15 = (nlPushMatrix(0x0));
    t16 = 0x0;
    for (;;) {
        if ((int)t16 < (int)0x3) {
            if ((*(int *)0xC23EAC4) == t16) {
                t15 = (FUN_0c0c475c(0x12EE, (*(float *)0xC23EB00)));
                t15 = (nlPushMatrix(0x0));
                t15 = 0xC011EB8;
                u21 = *(float *)((t15 + 0x0));
                t15 = 0xC011EBC;
                u22 = *(float *)((t15 + 0x0));
                t15 = 0xC011EC0;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), u22, u21));
                t15 = 0xC011EC4;
                u25 = *(float *)((t15 + 0x0));
                t15 = 0xC011EC8;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), 0.604399979f, u25));
                t15 = (nlScale(1.5f, 1.5f, 1.5f));
                t15 = 0xC011ED0;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), -1.2852f, -1.60659993f));
                t15 = (FUN_0c0c465c(0x12D6));
                t15 = (nlPopMatrix(0x1));
            }
            if ((*(int *)0xC23EAC8) == t16) {
                t15 = (FUN_0c0c475c(0x12EF, (*(float *)0xC23EB04)));
                t15 = (nlPushMatrix(0x0));
                t15 = 0xC011EB8;
                u39 = *(float *)((t15 + 0x0));
                t15 = 0xC011EBC;
                u40 = *(float *)((t15 + 0x0));
                t15 = 0xC011EC0;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), u40, u39));
                t15 = 0xC011EC4;
                u43 = *(float *)((t15 + 0x0));
                t15 = 0xC011ED8;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), 0.604399979f, u43));
                t15 = (nlScale(1.5f, 1.5f, 1.5f));
                t15 = 0xC011EDC;
                t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), -1.2852f, -1.60659993f));
                t15 = (FUN_0c0c465c(0x12DA));
                t15 = (nlPopMatrix(0x1));
            }
            *(unsigned int *)(((int)stk + 16)) = ((t16 << 2) + 0xC0F41FC);
            if ((*(int *)0xC23EAC4) != (*(int *)0xC23EAC8)) {
                if ((*(int *)0xC23EAC4) != t16) {
                    t15 = (*(int *)0xC23EAC8);
                    if (t15 == t16) {
                        t15 = (FUN_0c0c465c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                    } else {
                        t15 = 0xC011FF0;
                        t15 = (FUN_0c0c475c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)((t15 + 0x0)))));
                    }
                } else {
                    t15 = (FUN_0c0c465c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                }
            } else {
                if ((*(int *)0xC23EAC4) == t16) {
                    t15 = (FUN_0c0c465c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                } else {
                    t15 = 0xC011FF0;
                    t15 = (FUN_0c0c475c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)((t15 + 0x0)))));
                }
            }
            if (((*(int *)0xC23EAC4) == t16) && (t84 = *(int *)0xC23EAEC, t15 = t84, t15 == 1)) {
                t15 = (FUN_0c0c465c(0x12D7));
            }
            if (((*(int *)0xC23EAC8) == t16) && (t88 = *(int *)0xC23EAF0, t15 = t88, t15 == 1)) {
                t15 = (FUN_0c0c465c(0x12DB));
            }
            t15 = 0xC011FFC;
            t15 = (FUN_0c0dcc70((*(float *)((t15 + 0x0))), 0.0f, 0.0f));
            t16 = (t16 + 0x1);
            continue;
        }
        break;
    }
    nlPopMatrix(0x1);
    if ((*(int *)0xC23EAC4) == 3) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(2.80849981f, -1.56899989f, 0.245299995f);
        FUN_0c0dcc70(-0.529999971f, -0.143999994f, 0.0546999983f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(1.14409995f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12D6);
        nlPopMatrix(0x1);
        FUN_0c0c475c(0x12E8, (*(float *)0xC23EB00));
    }
    if ((*(int *)0xC23EAC8) == 3) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(2.80849981f, -1.56899989f, 0.245299995f);
        FUN_0c0dcc70(0.51849997f, -0.0159999989f, 0.0546999983f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(0.923499942f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12DA);
        nlPopMatrix(0x1);
        FUN_0c0c475c(0x12E9, (*(float *)0xC23EB00));
    }
    if ((*(int *)0xC23EAC4) != (*(int *)0xC23EAC8)) {
        if ((*(int *)0xC23EAC4) != 3) {
            if ((*(int *)0xC23EAC8) == 3) {
                FUN_0c0c465c(0x12E6);
            } else {
                FUN_0c0c475c(0x12E6, 0.5f);
            }
        } else {
            FUN_0c0c465c(0x12E6);
        }
    } else {
        if ((*(int *)0xC23EAC4) == 3) {
            FUN_0c0c465c(0x12E6);
        } else {
            FUN_0c0c475c(0x12E6, 0.5f);
        }
    }
    if (((*(int *)0xC23EAC4) == 3) && (t142 = *(int *)0xC23EAEC, t142 == 1)) {
        FUN_0c0c465c(0x12D8);
    }
    if (((*(int *)0xC23EAC8) == 3) && (t146 = *(int *)0xC23EAF0, t146 == 1)) {
        FUN_0c0c465c(0x12DC);
    }
    if ((*(int *)0xC23EAD4) != 0) {
        if ((*(int *)0xC23EAC4) != (*(int *)0xC23EAC8)) {
            if ((int)(*(int *)0xC23EAC4) < (int)0x4) {
                if ((int)(*(int *)0xC23EAC8) >= (int)0x4) {
                    FUN_0c0c465c(0x12F7);
                } else {
                    FUN_0c0c475c(0x12F7, 0.5f);
                }
            } else {
                FUN_0c0c465c(0x12F7);
            }
        } else {
            if ((int)(*(int *)0xC23EAC4) >= (int)0x4) {
                FUN_0c0c465c(0x12F7);
            } else {
                FUN_0c0c475c(0x12F7, 0.5f);
            }
        }
        if (((int)(*(int *)0xC23EAC4) >= (int)0x4) && (t178 = *(int *)0xC23EAEC, t178 == 2)) {
            FUN_0c0c465c(0x12D9);
        }
        if (((int)(*(int *)0xC23EAC8) >= (int)0x4) && (t184 = *(int *)0xC23EAF0, t184 == 2)) {
            FUN_0c0c465c(0x12DD);
        }
    } else {
        FUN_0c0c465c(0x12F8);
    }
    if ((int)(*(int *)0xC23EAC4) >= (int)0x4) {
        FUN_0c0c475c(0x12F9, (*(float *)0xC23EB00));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(-2.76189995f, -1.54789996f, 0.245299995f);
        FUN_0c0dcc70(-0.370099992f, 0.604399979f, 0.0453999974f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(1.14409995f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12D6);
        nlPopMatrix(0x1);
    }
    if ((int)(*(int *)0xC23EAC8) >= (int)0x4) {
        FUN_0c0c475c(0x12FA, (*(float *)0xC23EB04));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(-2.76189995f, -1.54789996f, 0.245299995f);
        FUN_0c0dcc70(0.459899992f, 0.604399979f, 0.0453999974f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(0.923499942f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12DA);
        nlPopMatrix(0x1);
    }
    if ((int)(*(int *)0xC23EAC4) < (int)0x4) {
        FUN_0c0c465c(0x12E3);
    }
    if ((int)(*(int *)0xC23EAC8) < (int)0x4) {
        FUN_0c0c465c(0x12E4);
    }
    nlPushMatrix(0x0);
    FUN_0c0129b6((*(int *)0xC23EAC4), (*(int *)0xC23EADC), 0x0, (*(int *)0xC23EAE4), (*(float *)0xC23EB00));
    FUN_0c0dcc70(2.45219994f, 0.0f, 0.0f);
    FUN_0c0129b6((*(int *)0xC23EAC8), (*(int *)0xC23EAE0), 0x1, (*(int *)0xC23EAE8), (*(float *)0xC23EB04));
    nlPopMatrix(0x1);
    t246 = nlPopMatrix(0x1);
    if ((*(int *)(((*(int *)(((int)stk + 12))) + 0x38))) != 0) {
        return t246;
    }
    t252 = *(int *)0xC23EACC;
    if (t252 != 0) {
        if (t252 != 1) {
            if (t252 != 2) {
            } else {
                FUN_0c01132c((*(int *)0xC23EB10));
                if ((int)(*(int *)0xC23ECBC) < 0) {
                    *(unsigned int *)0xC23EACC = 0x1;
                }
            }
        } else {
            if ((*(int *)0xC23EAD4) != (*(int *)0xC23EAD8)) {
                *(unsigned int *)0xC23EAD8 = (*(int *)0xC23EAD4);
                if ((int)(*(int *)0xC23EAC4) > (int)0x3) {
                    *(unsigned int *)0xC23EAC4 = 0x0;
                    *(unsigned int *)0xC23EAEC = 0x3;
                }
                if ((int)(*(int *)0xC23EAC8) > (int)0x3) {
                    *(unsigned int *)0xC23EAC8 = 0x2;
                    *(unsigned int *)0xC23EAF0 = 0x3;
                }
                if ((*(int *)0xC23EAD4) != 0) {
                    *(unsigned int *)0xC23EAD0 = 0x0;
                    *(unsigned int *)0xC23EACC = 0x2;
                }
            }
            *(unsigned int *)0xC23ECBC = 0x0;
        }
    } else {
        *(unsigned int *)0xC23EB10 = (FUN_0c0e262a(0x6E0));
        *(unsigned int *)0xC23EACC = 0x1;
    }
    if ((*(int *)0xC23ECC8) != 1) {
    } else {
        if ((*(int *)0xC23ECCC) != 1) {
        } else {
            FUN_0c0e2a4c((*(int *)0xC23EB10), 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
            FUN_0c0154a4();
            if ((int)(*(int *)0xC23EAEC) < (int)0x2) {
                *(unsigned int *)(((int)stk + 24)) = (*(int *)0xC23EAC4);
            } else {
                *(unsigned int *)(((int)stk + 24)) = (signed char)(FUN_0c012570((*(short *)0xC20C5B6)));
            }
            if ((int)(*(int *)0xC23EAF0) < (int)0x2) {
                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC23EAC8);
            } else {
                *(unsigned int *)(((int)stk + 16)) = (signed char)(FUN_0c012570((*(short *)0xC20C5CC)));
            }
            if ((*(int *)0xC23EAC4) != 3) {
                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 24))) << 1);
                if (((*(int *)(((int)stk + 24))) == (*(int *)(((int)stk + 16)))) && (t329 = *(int *)0xC23ECD0, t330 = *(int *)0xC23ECD4, t329 == t330)) {
                    FUN_0c0d2040(0x0, (((((*(int *)0xC1EF568) == 0)) ? 1 : 0) + (*(int *)(((int)stk + 20)))));
                } else {
                    FUN_0c0d2040(0x0, ((*(int *)0xC23ECD0) + (*(int *)(((int)stk + 20)))));
                }
            }
            if ((*(int *)0xC23EAC8) != 3) {
                *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 16))) << 1);
                if (((*(int *)(((int)stk + 24))) == (*(int *)(((int)stk + 16)))) && (t346 = *(int *)0xC23ECD0, t347 = *(int *)0xC23ECD4, t346 == t347)) {
                    FUN_0c0d2040(0x1, (((((*(int *)0xC1EF568) == 1)) ? 1 : 0) + (*(int *)(((int)stk + 20)))));
                } else {
                    FUN_0c0d2040(0x1, ((*(int *)0xC23ECD4) + (*(int *)(((int)stk + 20)))));
                }
            }
            if ((*(int *)0xC23EAC4) == 3) {
                FUN_0c0d2060(0x0);
            }
            if ((*(int *)0xC23EAC8) == 3) {
                FUN_0c0d2060(0x1);
            }
            t373 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((t373 + 0x5C) + 0x0)) = 0x1;
            *(unsigned int *)((t373 + 0x60)) = 0x1;
            *(unsigned int *)0xC23ED54 = (*(int *)((((*(int *)0xC94342C) * 0x2C) + 0xC20BF54)));
            *(unsigned int *)((t373 + 0x38)) = 0x1;
            *(unsigned int *)((t373 + 0x30)) = 0x69;
            if ((int)(*(int *)0xC23EAC4) < (int)0x4) {
                *(unsigned short *)0xC20C5A8 = 0x3C;
                *(unsigned short *)0xC20C5AA = 0x3C;
                *(unsigned short *)0xC20C5AC = 0x32;
                *(unsigned short *)0xC20C5AE = 0x0;
                *(unsigned short *)0xC20C5B0 = 0x32;
                *(unsigned short *)0xC20C5B2 = 0x46;
                *(unsigned short *)0xC20C5B4 = 0x14;
            }
            if ((int)(*(int *)0xC23EAC8) < (int)0x4) {
                *(unsigned short *)0xC20C5BE = 0x3C;
                *(unsigned short *)0xC20C5C0 = 0x3C;
                *(unsigned short *)0xC20C5C2 = 0x32;
                *(unsigned short *)0xC20C5C4 = 0x0;
                *(unsigned short *)0xC20C5C6 = 0x32;
                *(unsigned short *)0xC20C5C8 = 0x46;
                *(unsigned short *)0xC20C5CA = 0x14;
            }
            t390 = 0x3C;
            t391 = 0x32;
            t392 = 0x46;
        }
        t400 = t390;
        t401 = t391;
        t402 = t392;
    }
    if ((((*(int *)0xC2498F4) & 2) != 0) && ((t405 = *(int *)0xC23EAEC, t405 == 3) && (t406 = *(int *)0xC23EAF0, t406 == 3))) {
        FUN_0c0e2a4c((*(int *)0xC23EB10), t400, t401, t402, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        FUN_0c0154a4();
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x34)) = 0x0;
    }
    if ((*(int *)0xC943400) == 1) {
        FUN_0c0125f4(0xC23EAC4, 0xC23EAEC, 0xC23EADC, 0x0, 0xC23EAE4);
        FUN_0c0125f4(0xC23EAC8, 0xC23EAF0, 0xC23EAE0, 0x10001, 0xC23EAE8);
    } else {
        if (((int)(*(int *)0xC23EAEC) <= (int)0x2) && ((t426 = *(int *)0xC23EAF0, t426 != 3) || (t427 = *(short *)0xC2497C8, ((unsigned short)t427 & 0x2) == 0))) {
            FUN_0c0125f4(0xC23EAC8, 0xC23EAF0, 0xC23EAE0, 0x10000, 0xC23EAE8);
        } else {
            FUN_0c0125f4(0xC23EAC4, 0xC23EAEC, 0xC23EADC, 0x0, 0xC23EAE4);
        }
    }
    return FUN_0c01632c();
}

int FUN_0c0d2dd4(int a4)
{
    int t1;
    int t2;
    int t3;
    int t13;
    int t20;
    int t36;
    int t48;
    int t52;
    int t62;
    int t69;
    int t73;
    int t81;
    int t89;
    int t105;
    int t122;
    int t133;
    int t150;
    int t161;
    int t167;
    int t195;
    int t226;
    int t231;
    int t310;
    int t319;
    int stk[13];

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
    float F15;
    int T_;
    R4 = a4;
    L_C0D2DD4:;
    t1 = *(int *)0xC246FF4;
    t2 = *(int *)0xC247598;
    t3 = *(int *)0xC247594;
    *(unsigned int *)(((*(int *)0xC246FF0) + 0x304)) = t3;
    *(unsigned int *)((t1 + 0x304)) = t2;
    R10 = (0xC94342C);
    R11 = (t2);
    R12 = (t3);
    R14 = (R4);
    R8 = (0xC943434);
    R9 = (0x1);
    F15 = (0.799999952f);
    if (((*(int *)0xC943400) == 1)) goto L_C0D2E28;
    goto L_C0D2E0E;
    L_C0D2E0E:;
    t13 = *(int *)0xC23A1BC;
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(*(short *)(((((t13 << 2) << 2) + 0xC2497C0) + 0x8)));
    *(unsigned int *)(((int)stk + 8)) = (unsigned short)(*(short *)(((((t13 << 2) << 2) + 0xC2497C0) + 0x4)));
    goto L_C0D2E34;
    L_C0D2E34:;
    R13 = (0xC23A1A8);
    if ((((*(int *)0xC23A1A8) & 0x800) == 0)) goto L_C0D2E46;
    goto L_C0D2E3E;
    L_C0D2E3E:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) & 0xFFFFF7FF);
    goto L_C0D2E46;
    L_C0D2E46:;
    t20 = *(int *)((R14 + 0x30));
    R0 = (t20);
    R4 = (0xC24758C);
    R5 = (0xC24758C);
    R6 = (0xC9433FC);
    F4 = (0.998999953f);
    if ((t20 == 0)) goto L_C0D2E82;
    goto L_C0D2E56;
    L_C0D2E56:;
    if ((R0 == 1)) goto L_C0D2EC8;
    goto L_C0D2E5A;
    L_C0D2E5A:;
    if ((R0 == 2)) goto L_C0D2ED2;
    goto L_C0D2E5E;
    L_C0D2E5E:;
    if ((R0 == 3)) goto L_C0D2EE2;
    goto L_C0D2E62;
    L_C0D2E62:;
    if ((R0 == 4)) goto L_C0D2F38;
    goto L_C0D2E66;
    L_C0D2E66:;
    if ((R0 != 5)) goto L_C0D2E6E;
    goto L_C0D2E6A;
    L_C0D2E6A:;
    goto L_C0D32A8;
    L_C0D32A8:;
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) * F4);
    *(float *)((R5 + 0x4)) = ((*(float *)((R5 + 0x4))) * F4);
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_C0D3320;
    goto L_C0D32BC;
    L_C0D32BC:;
    t36 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t36 - 1);
    if (((t36 - 1) != 0)) goto L_C0D330C;
    goto L_C0D32C6;
    L_C0D32C6:;
    if (((*(int *)((R14 + 0x54))) == 0)) goto L_C0D3300;
    goto L_C0D32CE;
    L_C0D32CE:;
    *(unsigned int *)0xC24FA14 = 0x0;
    *(unsigned int *)((R6 + 0x0)) = 0x3;
    *(unsigned int *)((R14 + 0x3C)) = 0x2F;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D330C;
    L_C0D330C:;
    if (((*(int *)((R14 + 0x54))) != 0)) goto L_C0D3320;
    goto L_C0D3314;
    L_C0D3314:;
    if (((*(int *)((R14 + 0x34))) != 1)) goto L_C0D3320;
    goto L_C0D331A;
    L_C0D331A:;
    FUN_0c057fd4(R4, R5);
    goto L_C0D3320;
    L_C0D3320:;
    if (((*(int *)((R14 + 0x38))) == 0)) goto L_C0D336C;
    goto L_C0D3326;
    L_C0D3326:;
    t48 = *(int *)((R14 + 0x38));
    *(unsigned int *)((R14 + 0x38)) = (t48 - 1);
    if (((t48 - 1) != 0)) goto L_C0D3378;
    goto L_C0D3330;
    L_C0D3330:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) & 0xFFFFDFFF);
    FUN_0c0cf4aa(0xFFFFFFFF);
    t52 = *(int *)((R14 + 0x40));
    R4 = (t52);
    if ((t52 != 0)) goto L_C0D3350;
    goto L_C0D3346;
    L_C0D3346:;
    if ((((*(int *)0xC23A1A8) & 0x80000) != 0)) goto L_C0D3362;
    goto L_C0D3350;
    L_C0D3350:;
    if ((R4 != 1)) goto L_C0D3378;
    goto L_C0D3358;
    L_C0D3358:;
    if ((((*(int *)0xC23A1A8) & 0x100000) == 0)) goto L_C0D3378;
    goto L_C0D3362;
    L_C0D3362:;
    FUN_0c02120e();
    goto L_C0D3378;
    L_C0D3378:;
    return FUN_0c0d35e0(R14);
    L_C0D336C:;
    FUN_0c0cf486();
    t62 = ((int (*)(void))(FUN_0c0cf3ec))();
    goto L_C0D3378;
    L_C0D3300:;
    FUN_0c0d2d2e();
    *(unsigned int *)((R8 + 0x0)) = ((*(int *)((R8 + 0x0))) + 0x1);
    *(unsigned int *)((R14 + 0x30)) = R9;
    goto L_C0D330C;
    L_C0D2E6E:;
    if ((R0 != 6)) goto L_C0D2E76;
    goto L_C0D2E72;
    L_C0D2E72:;
    goto L_C0D3390;
    L_C0D3390:;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC943510);
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) * F4);
    *(float *)((R5 + 0x4)) = ((*(float *)((R5 + 0x4))) * F4);
    t69 = ((int (*)(int))(FUN_0c0cf3ec))(R4);
    t73 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x38))) == 0;
    R0 = ((FUN_0c0d35e0(R14)));
    if (t73) goto L_C0D33B8;
    goto L_C0D33B4;
    L_C0D33B4:;
    goto L_C0D35CA;
    L_C0D35CA:;
    return R0;
    L_C0D33B8:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) | 0x10000);
    if (((*(int *)((R14 + 0x3C))) == 0)) goto L_C0D33CE;
    goto L_C0D33C6;
    L_C0D33C6:;
    *(unsigned int *)((R14 + 0x3C)) = ((*(int *)((R14 + 0x3C))) - 1);
    goto L_C0D35CA;
    L_C0D33CE:;
    if ((((*(int *)(((int)stk + 4))) & 0x1010) == 0)) goto L_C0D3418;
    goto L_C0D33D6;
    L_C0D33D6:;
    t81 = *(int *)((R14 + 0x4C));
    *(unsigned int *)((R14 + 0x4C)) = (t81 - 1);
    R0 = (0x4C);
    if (((int)(t81 - 1) >= 0)) goto L_C0D343A;
    goto L_C0D33E4;
    L_C0D33E4:;
    *(unsigned int *)((R14 + R0)) = 0x3;
    goto L_C0D343A;
    L_C0D343A:;
    FUN_0c0cc3f8(0x29A9, R5, R6, R7, F4);
    goto L_C0D3442;
    L_C0D3442:;
    if ((((*(int *)(((int)stk + 4))) & 0x604) == 0)) goto L_C0D34B4;
    goto L_C0D344A;
    L_C0D344A:;
    if (((*(int *)((R14 + 0x4C))) != 0)) goto L_C0D34AE;
    goto L_C0D3452;
    L_C0D3452:;
    t89 = *(int *)(((int)stk + 8));
    R0 = (t89);
    if (((t89 & 8) != 0)) goto L_C0D3496;
    goto L_C0D3458;
    L_C0D3458:;
    if ((((*(int *)(((int)stk + 4))) & 4) != 0)) goto L_C0D349E;
    goto L_C0D345E;
    L_C0D345E:;
    R13 = (0x7);
    if ((((*(int *)(((int)stk + 4))) & 0x400) == 0)) goto L_C0D3486;
    goto L_C0D3468;
    L_C0D3468:;
    R12 = (0xC0DA2E0);
    R4 = ((*(int *)((R10 + 0x0))));
    goto L_C0D347C;
    L_C0D347C:;
    if ((R4 == (*(int *)((R10 + 0x0))))) goto L_C0D346E;
    goto L_C0D3482;
    L_C0D3482:;
    *(unsigned int *)((R10 + 0x0)) = R4;
    goto L_C0D349E;
    L_C0D349E:;
    *(unsigned int *)0xC23ED54 = (*(int *)((((*(int *)((R10 + 0x0))) * 0x2C) + 0xC20BF54)));
    goto L_C0D34AE;
    L_C0D34AE:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D34B4;
    L_C0D34B4:;
    t105 = *(int *)((R14 + 0x64));
    *(unsigned int *)((R14 + 0x64)) = (t105 + 0x1);
    R0 = (0x64);
    if (((int)(t105 + 0x1) >= (int)0x4650)) goto L_C0D34C6;
    goto L_C0D34C2;
    L_C0D34C2:;
    goto L_C0D35CA;
    L_C0D34C6:;
    *(unsigned int *)((R14 + 0x4C)) = 0x3;
    R0 = (0x4C);
    goto L_C0D34CC;
    L_C0D34CC:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D35CA;
    L_C0D346E:;
    FUN_0c0da2e0();
    R4 = ((((int (*)(void))(FUN_0c0e5f1c))()));
    goto L_C0D347C;
    L_C0D3486:;
    *(unsigned int *)((R10 + 0x0)) = ((*(int *)((R10 + 0x0))) + 0x1);
    *(unsigned int *)((R10 + 0x0)) = (((int (*)(int))(FUN_0c0e5f1c))(R4));
    goto L_C0D349E;
    L_C0D3496:;
    *(unsigned int *)0xC23ED54 = 0x0;
    goto L_C0D34CC;
    L_C0D3418:;
    if ((((*(int *)(((int)stk + 4))) & 0x3020) == 0)) goto L_C0D3442;
    goto L_C0D3420;
    L_C0D3420:;
    *(unsigned int *)((R14 + 0x4C)) = ((*(int *)((R14 + 0x4C))) + 0x1);
    if (((int)(*(int *)(((0x4C + R14) + 0x0))) <= (int)0x3)) goto L_C0D343A;
    goto L_C0D3434;
    L_C0D3434:;
    *(unsigned int *)((R14 + 0x4C)) = 0x0;
    goto L_C0D343A;
    L_C0D2E76:;
    if ((R0 != 7)) goto L_C0D2E7E;
    goto L_C0D2E7A;
    L_C0D2E7A:;
    goto L_C0D34D4;
    L_C0D34D4:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) & 0x60100);
    t122 = *(int *)((R14 + 0x4C));
    R0 = (t122);
    R5 = (0x1F);
    R6 = (0xC23ED44);
    R7 = (0xC23ED48);
    if ((t122 == 0)) goto L_C0D3524;
    goto L_C0D34EA;
    L_C0D34EA:;
    if ((R0 == 1)) goto L_C0D354C;
    goto L_C0D34EE;
    L_C0D34EE:;
    if ((R0 == 2)) goto L_C0D3556;
    goto L_C0D34F2;
    L_C0D34F2:;
    if ((R0 == 3)) goto L_C0D356A;
    goto L_C0D34F6;
    L_C0D34F6:;
    goto L_C0D356E;
    L_C0D356E:;
    if (((*(int *)((R14 + 0x4C))) == 3)) goto L_C0D35A6;
    goto L_C0D3576;
    L_C0D3576:;
    t133 = *(int *)0xC23A1BC;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t133 << 2) + 0xC23EDC0)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((t133 << 2) + 0xC23EDD0)));
    FUN_0c0169da((*(int *)0xC23A1BC), R5, R6, R7);
    *(unsigned int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDC0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDD0)) = (*(int *)(((int)stk + 4)));
    goto L_C0D35A6;
    L_C0D35A6:;
    FUN_0c0cc720();
    return FUN_0c0d8c40(0x0, 0x0, 0x0);
    L_C0D356A:;
    *(unsigned int *)0xC23A260 = R9;
    goto L_C0D356E;
    L_C0D3556:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) | 0x200);
    goto L_C0D355E;
    L_C0D355E:;
    *(unsigned int *)0xC23ED54 = 0x3;
    *(unsigned int *)((R6 + 0x0)) = R9;
    *(unsigned int *)((R7 + 0x0)) = R5;
    goto L_C0D356E;
    L_C0D354C:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) & 0xFFFFF9FF);
    goto L_C0D355E;
    L_C0D3524:;
    if (((*(int *)0xC23ED54) != 0)) goto L_C0D3536;
    goto L_C0D352C;
    L_C0D352C:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) | 0x400);
    goto L_C0D355E;
    L_C0D3536:;
    *(unsigned int *)0xC23ED50 = ((*(int *)0xC23ED50) - 1);
    *(unsigned int *)((R6 + 0x0)) = R9;
    *(unsigned int *)((R7 + 0x0)) = R5;
    *(unsigned int *)0xC943430 = ((*(int *)0xC943430) + 0x1);
    goto L_C0D356E;
    L_C0D2E7E:;
    goto L_C0D35CA;
    L_C0D2F38:;
    t150 = *(int *)0xC943508;
    *(unsigned int *)(((int)stk + 4)) = t150;
    R4 = (0x12C);
    if (((*(int *)((t150 + 0x38))) == 0)) goto L_C0D2F4A;
    goto L_C0D2F46;
    L_C0D2F46:;
    goto L_C0D313C;
    L_C0D313C:;
    *(unsigned int *)((R14 + 0x34)) = R4;
    *(unsigned int *)((R14 + 0x38)) = 0xDC;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) | 0x4000);
    *(unsigned int *)((R6 + 0x0)) = R9;
    if ((R12 == R11)) goto L_C0D3190;
    goto L_C0D3150;
    L_C0D3150:;
    R0 = (0x40);
    if (((int)R12 <= (int)R11)) goto L_C0D315A;
    goto L_C0D3156;
    L_C0D3156:;
    R1 = (0x0);
    goto L_C0D315C;
    L_C0D315C:;
    *(unsigned int *)((R14 + R0)) = R1;
    *(unsigned int *)((((R1 << 2) + (R14 + 0x44)) + 0x0)) = ((*(int *)((((R1 << 2) + (R14 + 0x44)) + 0x0))) + 0x1);
    goto L_C0D31A8;
    L_C0D31A8:;
    t161 = *(int *)0xC94343C;
    R3 = (t161);
    R4 = ((R14 + 0x44));
    if (((*(int *)(((R14 + 0x44) + 0x0))) != t161)) goto L_C0D31CE;
    goto L_C0D31B6;
    L_C0D31B6:;
    if (((*(int *)((R4 + 0x4))) != R3)) goto L_C0D31CE;
    goto L_C0D31BC;
    L_C0D31BC:;
    *(unsigned int *)((R14 + 0x50)) = R9;
    *(unsigned int *)(((R14 + 0x44) + 0x0)) = 0x0;
    *(unsigned int *)((R14 + 0x48)) = 0x0;
    goto L_C0D31CE;
    L_C0D31CE:;
    t167 = *(int *)((R14 + 0x50));
    R4 = (t167);
    if ((t167 == 0)) goto L_C0D31E8;
    goto L_C0D31D6;
    L_C0D31D6:;
    if (((*(int *)(((R14 + 0x44) + 0x0))) != 0)) goto L_C0D320A;
    goto L_C0D31E0;
    L_C0D31E0:;
    if (((*(int *)((R14 + 0x48))) != 0)) goto L_C0D320A;
    goto L_C0D31E8;
    L_C0D31E8:;
    if ((R4 != 0)) goto L_C0D31FA;
    goto L_C0D31EC;
    L_C0D31EC:;
    if (((int)(*(int *)(((R14 + 0x44) + 0x0))) >= (int)(*(int *)0xC94343C))) goto L_C0D320A;
    goto L_C0D31FA;
    L_C0D31FA:;
    if (((int)(*(int *)((R14 + 0x48))) >= (int)(*(int *)0xC94343C))) goto L_C0D320A;
    goto L_C0D3206;
    L_C0D3206:;
    R3 = (0x0);
    goto L_C0D320C;
    L_C0D320C:;
    *(unsigned int *)((R14 + 0x54)) = R3;
    R6 = (0xC94340C);
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x38))) == 2)) goto L_C0D321E;
    goto L_C0D321A;
    L_C0D321A:;
    if ((R12 != R11)) goto L_C0D325C;
    goto L_C0D321E;
    L_C0D321E:;
    if ((R12 == 0)) goto L_C0D325C;
    goto L_C0D3222;
    L_C0D3222:;
    if ((R11 == 0)) goto L_C0D325C;
    goto L_C0D3226;
    L_C0D3226:;
    if ((R12 == R11)) goto L_C0D3232;
    goto L_C0D322A;
    L_C0D322A:;
    if (((int)R12 < (int)R11)) goto L_C0D324A;
    goto L_C0D322E;
    L_C0D322E:;
    R4 = (0x1);
    goto L_C0D3258;
    L_C0D3258:;
    *(unsigned int *)((R14 + 0x68)) = R4;
    goto L_C0D325C;
    L_C0D325C:;
    R0 = (0x40);
    if (((*(int *)((R14 + 0x40))) != 0)) goto L_C0D326A;
    goto L_C0D3264;
    L_C0D3264:;
    *(unsigned int *)((R6 + 0x0)) = 0x0;
    goto L_C0D3272;
    L_C0D3272:;
    t195 = *(int *)((R14 + 0x40));
    R4 = (t195);
    if ((t195 != 0)) goto L_C0D3284;
    goto L_C0D327A;
    L_C0D327A:;
    if ((((*(int *)0xC23A1A8) & 0x100000) != 0)) goto L_C0D329E;
    goto L_C0D3284;
    L_C0D3284:;
    R0 = (R4);
    if ((R4 == 1)) goto L_C0D3290;
    goto L_C0D328C;
    L_C0D328C:;
    goto L_C0D34CC;
    L_C0D3290:;
    if ((((*(int *)0xC23A1A8) & 0x80000) != 0)) goto L_C0D329E;
    goto L_C0D329A;
    L_C0D329A:;
    goto L_C0D34CC;
    L_C0D329E:;
    R0 = ((FUN_0c021266()));
    goto L_C0D34CC;
    L_C0D326A:;
    if (((*(int *)((R14 + R0))) != 1)) goto L_C0D3272;
    goto L_C0D3270;
    L_C0D3270:;
    *(unsigned int *)((R6 + 0x0)) = R9;
    goto L_C0D3272;
    L_C0D324A:;
    R4 = (0x0);
    goto L_C0D3258;
    L_C0D3232:;
    if (((*(int *)(((R14 + 0x44) + 0x0))) == (*(int *)(((R14 + 0x44) + 0x4))))) goto L_C0D3252;
    goto L_C0D323E;
    L_C0D323E:;
    if (((int)(*(int *)(((R14 + 0x44) + 0x0))) >= (int)(*(int *)(((R14 + 0x44) + 0x4))))) goto L_C0D324E;
    goto L_C0D324A;
    L_C0D324E:;
    R4 = (0x1);
    goto L_C0D3258;
    L_C0D3252:;
    R4 = ((R9 - (*(int *)((R6 + 0x0)))));
    goto L_C0D3258;
    L_C0D320A:;
    R3 = (0x1);
    goto L_C0D320C;
    L_C0D315A:;
    R1 = (0x1);
    goto L_C0D315C;
    L_C0D3190:;
    *(unsigned int *)((R14 + 0x40)) = 0xFFFFFFFF;
    *(unsigned int *)(((R14 + 0x44) + 0x0)) = ((*(int *)(((R14 + 0x44) + 0x0))) + 0x1);
    *(unsigned int *)((R14 + 0x48)) = ((*(int *)((R14 + 0x48))) + 0x1);
    goto L_C0D31A8;
    L_C0D2F4A:;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x34))) != 0)) goto L_C0D2F56;
    goto L_C0D2F52;
    L_C0D2F52:;
    goto L_C0D313C;
    L_C0D2F56:;
    t226 = *(int *)(((*(int *)(((int)stk + 4))) + 0x34));
    R13 = ((t226 - 59));
    if (((t226 - 59) == 0)) goto L_C0D2F7E;
    goto L_C0D2F60;
    L_C0D2F60:;
    if (((int)R13 > (int)0x4B0)) goto L_C0D2F7E;
    goto L_C0D2F66;
    L_C0D2F66:;
    t231 = (((int (*)(int))(FUN_0c0e5f1c))(R4)) != 0;
    if (t231) goto L_C0D2F7E;
    goto L_C0D2F76;
    L_C0D2F76:;
    FUN_0c0d19b8(0x16, 0x1);
    goto L_C0D2F7E;
    L_C0D2F7E:;
    if (((*(int *)((R14 + 0x58))) != 0)) goto L_C0D3030;
    goto L_C0D2F86;
    L_C0D2F86:;
    if ((R12 == R11)) goto L_C0D3030;
    goto L_C0D2F8A;
    L_C0D2F8A:;
    if (((*(int *)(((R14 + 0x44) + 0x0))) != ((*(int *)0xC94343C) - 1))) goto L_C0D2FD2;
    goto L_C0D2F9A;
    L_C0D2F9A:;
    if ((((float)(*(int *)0xC24759C) * F15) > (float)R12)) goto L_C0D2FC2;
    goto L_C0D2FAC;
    L_C0D2FAC:;
    F1 = (0.199999988f);
    if ((!((float)R11 > ((float)(*(int *)0xC2475A0) * 0.199999988f)))) goto L_C0D2FC8;
    goto L_C0D2FC2;
    L_C0D2FC2:;
    if ((R13 != 0x708)) goto L_C0D2FD2;
    goto L_C0D2FC8;
    L_C0D2FC8:;
    *(unsigned int *)((R14 + 0x58)) = ((*(int *)((R8 + 0x0))) + 0x1);
    R5 = (0x1);
    goto L_C0D2FD2;
    L_C0D2FD2:;
    if (((*(int *)((R14 + 0x48))) != ((*(int *)0xC94343C) - 1))) goto L_C0D3018;
    goto L_C0D2FE0;
    L_C0D2FE0:;
    if ((((float)(*(int *)0xC2475A0) * F15) > (float)R11)) goto L_C0D3008;
    goto L_C0D2FF2;
    L_C0D2FF2:;
    F1 = (0.199999988f);
    if ((!((float)R12 > ((float)(*(int *)0xC24759C) * 0.199999988f)))) goto L_C0D300E;
    goto L_C0D3008;
    L_C0D3008:;
    if ((R13 != 0x708)) goto L_C0D3018;
    goto L_C0D300E;
    L_C0D300E:;
    *(unsigned int *)((R14 + 0x58)) = ((*(int *)((R8 + 0x0))) + 0x1);
    R5 = (0x0);
    goto L_C0D3018;
    L_C0D3018:;
    if (((*(int *)((R14 + 0x58))) == 0)) goto L_C0D3030;
    goto L_C0D3020;
    L_C0D3020:;
    FUN_0c0cf2ac((*(int *)((((*(int *)((R10 + 0x0))) * 0x2C) + 0xC20BF74))), R5);
    goto L_C0D3030;
    L_C0D3030:;
    R0 = (0x58);
    T_ = ((((*(int *)((R14 + 0x58))) == ((*(int *)((R8 + 0x0))) + 0x1))));
    goto L_C0D3068;
    L_C0D3068:;
    if ((T_)) goto L_C0D3128;
    goto L_C0D306A;
    L_C0D306A:;
    R2 = (0xC94343C);
    if (((*(int *)(((R14 + 0x44) + 0x0))) != ((*(int *)0xC94343C) - 1))) goto L_C0D3128;
    goto L_C0D307A;
    L_C0D307A:;
    R0 = (0x48);
    if (((*(int *)((R14 + 0x48))) != ((*(int *)((R2 + 0x0))) - 1))) goto L_C0D3128;
    goto L_C0D3086;
    L_C0D3086:;
    if ((R12 == R11)) goto L_C0D3128;
    goto L_C0D308A;
    L_C0D308A:;
    if (((*(int *)(((R14 + 0x44) + 0x0))) != ((*(int *)0xC94343C) - 1))) goto L_C0D30CC;
    goto L_C0D309A;
    L_C0D309A:;
    if ((((float)(*(int *)0xC24759C) * F15) > (float)R12)) goto L_C0D30CC;
    goto L_C0D30AC;
    L_C0D30AC:;
    F1 = (0.199999988f);
    if (((float)R11 > ((float)(*(int *)0xC2475A0) * 0.199999988f))) goto L_C0D30CC;
    goto L_C0D30C2;
    L_C0D30C2:;
    *(unsigned int *)((R14 + 0x58)) = ((*(int *)((R8 + 0x0))) + 0x1);
    R5 = (0x1);
    goto L_C0D30CC;
    L_C0D30CC:;
    if (((*(int *)((R14 + 0x48))) != ((*(int *)0xC94343C) - 1))) goto L_C0D310C;
    goto L_C0D30DA;
    L_C0D30DA:;
    if ((((float)(*(int *)0xC2475A0) * F15) > (float)R11)) goto L_C0D310C;
    goto L_C0D30EC;
    L_C0D30EC:;
    F1 = (0.199999988f);
    if (((float)R12 > ((float)(*(int *)0xC24759C) * 0.199999988f))) goto L_C0D310C;
    goto L_C0D3102;
    L_C0D3102:;
    *(unsigned int *)((R14 + 0x58)) = ((*(int *)((R8 + 0x0))) + 0x1);
    R5 = (0x0);
    goto L_C0D310C;
    L_C0D310C:;
    R0 = (0x58);
    if (((*(int *)((R14 + 0x58))) != ((*(int *)((R8 + 0x0))) + 0x1))) goto L_C0D3128;
    goto L_C0D3118;
    L_C0D3118:;
    R0 = ((FUN_0c0cf2ac((*(int *)((((*(int *)((R10 + 0x0))) * 0x2C) + 0xC20BF74))), R5)));
    goto L_C0D3128;
    L_C0D3128:;
    if ((R12 == 0)) goto L_C0D3134;
    goto L_C0D312C;
    L_C0D312C:;
    if ((R11 == 0)) goto L_C0D3134;
    goto L_C0D3130;
    L_C0D3130:;
    goto L_C0D35CA;
    L_C0D3134:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x38)) = R9;
    goto L_C0D35CA;
    L_C0D2EE2:;
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_C0D2EEC;
    goto L_C0D2EE8;
    L_C0D2EE8:;
    goto L_C0D35CA;
    L_C0D2EEC:;
    t310 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t310 - 1);
    if (((t310 - 1) == 0)) goto L_C0D2EFA;
    goto L_C0D2EF6;
    L_C0D2EF6:;
    goto L_C0D35CA;
    L_C0D2EFA:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) & 0xFFFFEFFF);
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) | 0x2000);
    FUN_0c0cf46c(0x0);
    FUN_0c0211e2();
    R0 = ((FUN_0c0cf4aa(0x0)));
    goto L_C0D34CC;
    L_C0D2ED2:;
    *(unsigned int *)0xC247D04 = 0xA;
    FUN_0c0d1b00();
    t319 = *(int *)((R14 + 0x30));
    *(unsigned int *)((R14 + 0x30)) = (t319 + 0x1);
    R0 = ((t319 + 0x1));
    goto L_C0D2EE2;
    L_C0D2EC8:;
    FUN_0c0d27a0(R14);
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D2ED2;
    L_C0D2E82:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D35CA;
    L_C0D2E28:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC2498F4);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC2498F8);
    goto L_C0D2E34;
}
