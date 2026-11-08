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
int FUN_0c0169da(int);
int FUN_0c0211e2(void);
int FUN_0c02120e(void);
int FUN_0c021266(void);
int FUN_0c057fd4(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
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
int FUN_0c0e2a4c(int);
extern int FUN_0c0e5f1c();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int FUN_0c011cfc(int a4);
int FUN_0c0d2dd4(int a4);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oE_short { char p[0xE]; short v; };


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
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;

    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);

    R1012 = a4;
    (((struct o10_uint *)0xC23EAC4)->v) = (FUN_0c0110d0(a4));
    (((struct o4_uint *)0xC1EF568)->v) = (((((struct o4_int *)0xC1EF568)->v)) + 0x100);
    FUN_0c0115c0();
    nlPushMatrix(0x0);
    nlScale(1.0f, 1.0f, 0.599999964f);
    FUN_0c0dcca0(0xC0F4208);
    FUN_0c0c465c(0x1304);
    FUN_0c0c465c(0x12EA);
    if (((((struct o8_int *)0xC23EAC4)->v)) != 2) {
        FUN_0c0c465c(0x1317);
        FUN_0c0c465c(0x1319);
    }
    t15 = (nlPushMatrix(0x0));
    t16 = 0x0;
    for (;;) {
        if ((int)t16 < (int)0x3) {
            if (((((struct o0_int *)0xC23EAC4)->v)) == t16) {
                t15 = (FUN_0c0c475c(0x12EE, ((((struct o3C_float *)0xC23EAC4)->v))));
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
            if (((((struct o4_int *)0xC23EAC4)->v)) == t16) {
                t15 = (FUN_0c0c475c(0x12EF, ((((struct o0_float *)0xC23EB04)->v))));
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
            R1016 = ((t16 << 2) + 0xC0F41FC);
            if (((((struct o0_int *)0xC23EAC4)->v)) != ((((struct o4_int *)0xC23EAC4)->v))) {
                if (((((struct o0_int *)0xC23EAC4)->v)) != t16) {
                    t15 = ((((struct o4_int *)0xC23EAC4)->v));
                    if (t15 == t16) {
                        t15 = (FUN_0c0c465c((*(int *)(((R1016) + 0x0)))));
                    } else {
                        t15 = 0xC011FF0;
                        t15 = (FUN_0c0c475c((*(int *)(((R1016) + 0x0))), (*(float *)((t15 + 0x0)))));
                    }
                } else {
                    t15 = (FUN_0c0c465c((*(int *)(((R1016) + 0x0)))));
                }
            } else {
                if (((((struct o0_int *)0xC23EAC4)->v)) == t16) {
                    t15 = (FUN_0c0c465c((*(int *)(((R1016) + 0x0)))));
                } else {
                    t15 = 0xC011FF0;
                    t15 = (FUN_0c0c475c((*(int *)(((R1016) + 0x0))), (*(float *)((t15 + 0x0)))));
                }
            }
            if ((((((struct o0_int *)0xC23EAC4)->v)) == t16) && (t84 = (((struct o28_int *)0xC23EAC4)->v), t15 = t84, t15 == 1)) {
                t15 = (FUN_0c0c465c(0x12D7));
            }
            if ((((((struct o4_int *)0xC23EAC4)->v)) == t16) && (t88 = (((struct o2C_int *)0xC23EAC4)->v), t15 = t88, t15 == 1)) {
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
    if (((((struct o0_int *)0xC23EAC4)->v)) == 3) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(2.80849981f, -1.56899989f, 0.245299995f);
        FUN_0c0dcc70(-0.529999971f, -0.143999994f, 0.0546999983f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(1.14409995f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12D6);
        nlPopMatrix(0x1);
        FUN_0c0c475c(0x12E8, ((((struct o3C_float *)0xC23EAC4)->v)));
    }
    if (((((struct o4_int *)0xC23EAC4)->v)) == 3) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(2.80849981f, -1.56899989f, 0.245299995f);
        FUN_0c0dcc70(0.51849997f, -0.0159999989f, 0.0546999983f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(0.923499942f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12DA);
        nlPopMatrix(0x1);
        FUN_0c0c475c(0x12E9, ((((struct o3C_float *)0xC23EAC4)->v)));
    }
    if (((((struct o0_int *)0xC23EAC4)->v)) != ((((struct o4_int *)0xC23EAC4)->v))) {
        if (((((struct o0_int *)0xC23EAC4)->v)) != 3) {
            if (((((struct o4_int *)0xC23EAC4)->v)) == 3) {
                FUN_0c0c465c(0x12E6);
            } else {
                FUN_0c0c475c(0x12E6, 0.5f);
            }
        } else {
            FUN_0c0c465c(0x12E6);
        }
    } else {
        if (((((struct o0_int *)0xC23EAC4)->v)) == 3) {
            FUN_0c0c465c(0x12E6);
        } else {
            FUN_0c0c475c(0x12E6, 0.5f);
        }
    }
    if ((((((struct o0_int *)0xC23EAC4)->v)) == 3) && (t142 = (((struct o28_int *)0xC23EAC4)->v), t142 == 1)) {
        FUN_0c0c465c(0x12D8);
    }
    if ((((((struct o4_int *)0xC23EAC4)->v)) == 3) && (t146 = (((struct o2C_int *)0xC23EAC4)->v), t146 == 1)) {
        FUN_0c0c465c(0x12DC);
    }
    if (((((struct o10_int *)0xC23EAC4)->v)) != 0) {
        if (((((struct o0_int *)0xC23EAC4)->v)) != ((((struct o4_int *)0xC23EAC4)->v))) {
            if ((int)((((struct o0_int *)0xC23EAC4)->v)) < (int)0x4) {
                if ((int)((((struct o4_int *)0xC23EAC4)->v)) >= (int)0x4) {
                    FUN_0c0c465c(0x12F7);
                } else {
                    FUN_0c0c475c(0x12F7, 0.5f);
                }
            } else {
                FUN_0c0c465c(0x12F7);
            }
        } else {
            if ((int)((((struct o0_int *)0xC23EAC4)->v)) >= (int)0x4) {
                FUN_0c0c465c(0x12F7);
            } else {
                FUN_0c0c475c(0x12F7, 0.5f);
            }
        }
        if (((int)((((struct o0_int *)0xC23EAC4)->v)) >= (int)0x4) && (t178 = (((struct o28_int *)0xC23EAC4)->v), t178 == 2)) {
            FUN_0c0c465c(0x12D9);
        }
        if (((int)((((struct o4_int *)0xC23EAC4)->v)) >= (int)0x4) && (t184 = (((struct o2C_int *)0xC23EAC4)->v), t184 == 2)) {
            FUN_0c0c465c(0x12DD);
        }
    } else {
        FUN_0c0c465c(0x12F8);
    }
    if ((int)((((struct o0_int *)0xC23EAC4)->v)) >= (int)0x4) {
        FUN_0c0c475c(0x12F9, ((((struct o3C_float *)0xC23EAC4)->v)));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(-2.76189995f, -1.54789996f, 0.245299995f);
        FUN_0c0dcc70(-0.370099992f, 0.604399979f, 0.0453999974f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(1.14409995f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12D6);
        nlPopMatrix(0x1);
    }
    if ((int)((((struct o4_int *)0xC23EAC4)->v)) >= (int)0x4) {
        FUN_0c0c475c(0x12FA, ((((struct o0_float *)0xC23EB04)->v)));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(-2.76189995f, -1.54789996f, 0.245299995f);
        FUN_0c0dcc70(0.459899992f, 0.604399979f, 0.0453999974f);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0dcc70(0.923499942f, -1.2852f, -1.60659993f);
        FUN_0c0c465c(0x12DA);
        nlPopMatrix(0x1);
    }
    if ((int)((((struct o0_int *)0xC23EAC4)->v)) < (int)0x4) {
        FUN_0c0c465c(0x12E3);
    }
    if ((int)((((struct o4_int *)0xC23EAC4)->v)) < (int)0x4) {
        FUN_0c0c465c(0x12E4);
    }
    nlPushMatrix(0x0);
    FUN_0c0129b6(((((struct o0_int *)0xC23EAC4)->v)), ((((struct o18_int *)0xC23EAC4)->v)), 0x0, ((((struct o20_int *)0xC23EAC4)->v)), ((((struct o3C_float *)0xC23EAC4)->v)));
    FUN_0c0dcc70(2.45219994f, 0.0f, 0.0f);
    FUN_0c0129b6(((((struct o4_int *)0xC23EAC4)->v)), ((((struct o1C_int *)0xC23EAC4)->v)), 0x1, ((((struct o24_int *)0xC23EAC4)->v)), ((((struct o0_float *)0xC23EB04)->v)));
    nlPopMatrix(0x1);
    t246 = nlPopMatrix(0x1);
    if ((*(int *)(((R1012) + 0x38))) != 0) {
        return t246;
    }
    t252 = (((struct o8_int *)0xC23EAC4)->v);
    switch (t252) {
    case 0:
        (((struct oC_uint *)0xC23EB04)->v) = (FUN_0c0e262a(0x6E0));
        (((struct o8_uint *)0xC23EAC4)->v) = 0x1;
        break;
    case 1:
        if (((((struct o10_int *)0xC23EAC4)->v)) != ((((struct o14_int *)0xC23EAC4)->v))) {
            (((struct o14_uint *)0xC23EAC4)->v) = ((((struct o10_int *)0xC23EAC4)->v));
            if ((int)((((struct o0_int *)0xC23EAC4)->v)) > (int)0x3) {
                (((struct o0_uint *)0xC23EAC4)->v) = 0x0;
                (((struct o28_uint *)0xC23EAC4)->v) = 0x3;
            }
            if ((int)((((struct o4_int *)0xC23EAC4)->v)) > (int)0x3) {
                (((struct o4_uint *)0xC23EAC4)->v) = 0x2;
                (((struct o2C_uint *)0xC23EAC4)->v) = 0x3;
            }
            if (((((struct o10_int *)0xC23EAC4)->v)) != 0) {
                (((struct oC_uint *)0xC23EAC4)->v) = 0x0;
                (((struct o8_uint *)0xC23EAC4)->v) = 0x2;
            }
        }
        (((struct o0_uint *)0xC23ECBC)->v) = 0x0;
        break;
    case 2:
        FUN_0c01132c(((((struct oC_int *)0xC23EB04)->v)));
        if ((int)((((struct o0_int *)0xC23ECBC)->v)) < 0) {
            (((struct o8_uint *)0xC23EAC4)->v) = 0x1;
        }
        break;
    }
    if (((((struct oC_int *)0xC23ECBC)->v)) != 1) {
    } else {
        if (((((struct o10_int *)0xC23ECBC)->v)) != 1) {
        } else {
            FUN_0c0e2a4c(((((struct oC_int *)0xC23EB04)->v)));
            FUN_0c0154a4();
            if ((int)((((struct o28_int *)0xC23EAC4)->v)) < (int)0x2) {
                R1024 = ((((struct o0_int *)0xC23EAC4)->v));
            } else {
                R1024 = (signed char)(FUN_0c012570(((((struct oE_short *)0xC20C5A8)->v))));
            }
            if ((int)((((struct o2C_int *)0xC23EAC4)->v)) < (int)0x2) {
                R1016 = ((((struct o4_int *)0xC23EAC4)->v));
            } else {
                R1016 = (signed char)(FUN_0c012570(((((struct o24_short *)0xC20C5A8)->v))));
            }
            if (((((struct o0_int *)0xC23EAC4)->v)) != 3) {
                R1020 = ((R1024) << 1);
                if (((R1024) == (R1016)) && (t329 = (((struct o14_int *)0xC23ECBC)->v), t330 = (((struct o18_int *)0xC23ECBC)->v), t329 == t330)) {
                    FUN_0c0d2040(0x0, ((((((((struct o0_int *)0xC1EF568)->v)) == 0)) ? 1 : 0) + (R1020)));
                } else {
                    FUN_0c0d2040(0x0, (((((struct o14_int *)0xC23ECBC)->v)) + (R1020)));
                }
            }
            if (((((struct o4_int *)0xC23EAC4)->v)) != 3) {
                R1020 = ((R1016) << 1);
                if (((R1024) == (R1016)) && (t346 = (((struct o14_int *)0xC23ECBC)->v), t347 = (((struct o18_int *)0xC23ECBC)->v), t346 == t347)) {
                    FUN_0c0d2040(0x1, ((((((((struct o0_int *)0xC1EF568)->v)) == 1)) ? 1 : 0) + (R1020)));
                } else {
                    FUN_0c0d2040(0x1, (((((struct o18_int *)0xC23ECBC)->v)) + (R1020)));
                }
            }
            if (((((struct o0_int *)0xC23EAC4)->v)) == 3) {
                FUN_0c0d2060(0x0);
            }
            if (((((struct o4_int *)0xC23EAC4)->v)) == 3) {
                FUN_0c0d2060(0x1);
            }
            t373 = R1012;
            *(unsigned int *)(((t373 + 0x5C) + 0x0)) = 0x1;
            *(unsigned int *)((t373 + 0x60)) = 0x1;
            *(unsigned int *)0xC23ED54 = (*(int *)(((((((struct o2C_int *)0xC943400)->v)) * 0x2C) + 0xC20BF54)));
            *(unsigned int *)((t373 + 0x38)) = 0x1;
            *(unsigned int *)((t373 + 0x30)) = 0x69;
            if ((int)((((struct o0_int *)0xC23EAC4)->v)) < (int)0x4) {
                (((struct o0_ushort *)0xC20C5A8)->v) = 0x3C;
                (((struct o2_ushort *)0xC20C5A8)->v) = 0x3C;
                (((struct o4_ushort *)0xC20C5A8)->v) = 0x32;
                (((struct o6_ushort *)0xC20C5A8)->v) = 0x0;
                (((struct o8_ushort *)0xC20C5A8)->v) = 0x32;
                (((struct oA_ushort *)0xC20C5A8)->v) = 0x46;
                (((struct oC_ushort *)0xC20C5A8)->v) = 0x14;
            }
            if ((int)((((struct o4_int *)0xC23EAC4)->v)) < (int)0x4) {
                (((struct o16_ushort *)0xC20C5A8)->v) = 0x3C;
                (((struct o18_ushort *)0xC20C5A8)->v) = 0x3C;
                (((struct o1A_ushort *)0xC20C5A8)->v) = 0x32;
                (((struct o1C_ushort *)0xC20C5A8)->v) = 0x0;
                (((struct o1E_ushort *)0xC20C5A8)->v) = 0x32;
                (((struct o20_ushort *)0xC20C5A8)->v) = 0x46;
                (((struct o22_ushort *)0xC20C5A8)->v) = 0x14;
            }
            t390 = 0x3C;
            t391 = 0x32;
            t392 = 0x46;
        }
        t400 = t390;
        t401 = t391;
        t402 = t392;
    }
    if ((((*(int *)0xC2498F4) & 2) != 0) && ((t405 = (((struct o28_int *)0xC23EAC4)->v), t405 == 3) && (t406 = (((struct o2C_int *)0xC23EAC4)->v), t406 == 3))) {
        FUN_0c0e2a4c(((((struct oC_int *)0xC23EB04)->v)));
        FUN_0c0154a4();
        *(unsigned int *)(((R1012) + 0x34)) = 0x0;
    }
    if (((((struct o0_int *)0xC943400)->v)) == 1) {
        FUN_0c0125f4(0xC23EAC4, 0xC23EAEC, 0xC23EADC, 0x0, 0xC23EAE4);
        FUN_0c0125f4(0xC23EAC8, 0xC23EAF0, 0xC23EAE0, 0x10001, 0xC23EAE8);
    } else {
        if (((int)((((struct o28_int *)0xC23EAC4)->v)) <= (int)0x2) && ((t426 = (((struct o2C_int *)0xC23EAC4)->v), t426 != 3) || (t427 = *(short *)0xC2497C8, ((unsigned short)t427 & 0x2) == 0))) {
            FUN_0c0125f4(0xC23EAC8, 0xC23EAF0, 0xC23EAE0, 0x10000, 0xC23EAE8);
        } else {
            FUN_0c0125f4(0xC23EAC4, 0xC23EAEC, 0xC23EADC, 0x0, 0xC23EAE4);
        }
    }
    return FUN_0c01632c();
}

