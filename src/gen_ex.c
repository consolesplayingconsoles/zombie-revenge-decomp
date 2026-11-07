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

