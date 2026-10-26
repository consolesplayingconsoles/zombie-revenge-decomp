/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
extern int FUN_0c02a19a();
int FUN_0c02a416(int);
int FUN_0c03f4bc(int);
int FUN_0c03f6c2(int, int, int, int);
int FUN_0c03f884(int);
int FUN_0c03faa0(int);
int FUN_0c03fd20(int);
int FUN_0c03fed2(int);
int FUN_0c0402b8(int, int, int);
int FUN_0c04045c(int, int);
int FUN_0c040e18(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c040fc4(int);
int FUN_0c04105c(int);
int FUN_0c041370(int, float, float, float, float, float, float, float, float);
int FUN_0c041700(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c04173a(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c0418d4(int);
int FUN_0c041f2a(int);
int FUN_0c04206a(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c0a447c(int, int);
int FUN_0c0a44c6(int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b5d54(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0cfa18(int, int);
int FUN_0c0d9ca0(int, float, float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_evn_mvn(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int memset(int, int, int);
int strlen(int);
void FUN_0c04228c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0d1284(int a4);
int FUN_0c02829e(int a4, int a5, int a6, int a7);
int FUN_0c02fc26(int a4, float f4);
void FUN_0c089d04(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void FUN_0c022e60(int a4, int a5, int a6, int a7, float f4);

void FUN_0c04228c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t1;
    int t9;
    int t3;
    int t11;

    t0 = *(int *)((a4 + 0x4E8));
    *(unsigned int *)((a4 + 0x4E8)) = (t0 + 0x1);
    t1 = *(int *)((a4 + 0x4DC));
    t9 = a5;
    if ((t0 + 0x1) == (*(int *)(((((((t1 - 76) << 1) + (t1 - 76)) << 2) + 0xC1F518C) + 0x4)))) {
        t3 = *(int *)((a4 + 0x4DC));
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(int *)(((0xC1F518C + ((((t3 - 76) << 1) + (t3 - 76)) << 2)) + 0x8))));
        t9 = 0xC23ED88;
    }
    t11 = *(int *)((a4 + 0x4DC));
    if ((unsigned int)(t11 - 76) >= (unsigned int)0x4C) {
        FUN_0c041f2a(a4);
    return;
    }
    switch (((t11 - 76) << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            ((int (*)(int, int))(0xC041F72))(a4, t9);
    return;
        }
        case 4:
        {
            ((int (*)(int, int))(0xC041F90))(a4, t9);
    return;
        }
        case 6:
        {
            ((int (*)(int, int))(0xC04204C))(a4, t9);
    return;
        }
        case 8:
        {
            FUN_0c04206a(a4);
    return;
        }
        case 10:
        {
            ((int (*)(int, int))(0xC04209A))(a4, t9);
    return;
        }
        case 12:
        case 14:
        case 18:
        case 20:
        case 30:
        case 34:
        case 36:
        case 38:
        case 40:
        case 42:
        case 48:
        case 52:
        case 58:
        case 64:
        case 70:
        case 78:
        case 80:
        case 86:
        case 94:
        case 98:
        case 100:
        case 116:
        case 118:
        case 120:
        case 138:
        case 140:
        case 142:
        case 144:
        case 146:
        {
            FUN_0c041f2a(a4);
    return;
        }
        case 16:
        {
            ((int (*)(int, int))(0xC03FAF4))(a4, t9);
    return;
        }
        case 22:
        {
            ((int (*)(int, int))(0xC03FAB6))(a4, t9);
    return;
        }
        case 24:
        case 26:
        {
            FUN_0c03fd20(a4);
    return;
        }
        case 28:
        {
            ((int (*)(int, int))(0xC03FB28))(a4, t9);
    return;
        }
        case 32:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 44:
        {
            ((int (*)(int, int))(0xC03FEBA))(a4, t9);
    return;
        }
        case 46:
        {
            ((int (*)(int, int))(0xC03FE28))(a4, t9);
    return;
        }
        case 50:
        {
            ((int (*)(int, int))(0xC03FAB6))(a4, t9);
    return;
        }
        case 54:
        {
            FUN_0c03faa0(a4);
    return;
        }
        case 56:
        {
            FUN_0c03f4bc(a4);
    return;
        }
        case 60:
        case 62:
        {
            ((int (*)(int, int))(0xC0400E4))(a4, t9);
    return;
        }
        case 66:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 68:
        {
            FUN_0c03fed2(a4);
    return;
        }
        case 72:
        {
            ((int (*)(int, int))(0xC03FF9C))(a4, t9);
    return;
        }
        case 74:
        {
            FUN_0c0402b8(a4, t9, a6);
    return;
        }
        case 76:
        {
            FUN_0c04045c(a4, t9);
    return;
        }
        case 82:
        {
            ((int (*)(int, int))(0xC042164))(a4, t9);
    return;
        }
        case 84:
        case 88:
        case 90:
        {
            ((int (*)(int, int))(0xC0406A8))(a4, t9);
    return;
        }
        case 92:
        {
            ((int (*)(int, int))(0xC040802))(a4, t9);
    return;
        }
        case 96:
        {
            ((int (*)(int, int))(0xC040808))(a4, t9);
    return;
        }
        case 102:
        {
            ((int (*)(int, int))(0xC0408A0))(a4, t9);
    return;
        }
        case 104:
        {
            FUN_0c040e18(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
            ((int (*)(int))(0xC040DFA))(a4);
    return;
        }
        case 106:
        {
            FUN_0c041f2a(a4);
            ((int (*)(int))(0xC040DFA))(a4);
    return;
        }
        case 108:
        {
            FUN_0c040fc4(a4);
    return;
        }
        case 110:
        {
            FUN_0c04105c(a4);
    return;
        }
        case 112:
        {
            FUN_0c041370(a4, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 114:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 122:
        {
            FUN_0c041700(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 124:
        {
            FUN_0c04173a(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 126:
        {
            ((int (*)(int, int))(0xC04179C))(a4, t9);
    return;
        }
        case 128:
        {
            ((int (*)(int, int))(0xC0418AC))(a4, t9);
    return;
        }
        case 130:
        case 132:
        {
            FUN_0c0418d4(a4);
    return;
        }
        case 134:
        {
            ((int (*)(int, int))(0xC041BA0))(a4, t9);
    return;
        }
        case 136:
        {
            ((int (*)(int, int))(0xC041C04))(a4, t9);
    return;
        }
        case 148:
        {
            FUN_0c03f6c2(a4, t9, a6, a7);
    return;
        }
        default:
        {
            FUN_0c03f884(a4);
    return;
        }
    }
}

int FUN_0c0d1284(int a4)
{
    int t0;
    int t222;
    int t4;
    int t5;
    int t207;
    int t8;
    int t9;
    float u12;
    float u15;
    float u16;
    int t18;
    float u21;
    float u25;
    float u27;
    int t39;
    int t40;
    int t47;
    float u50;
    float u53;
    float u54;
    int t62;
    float u65;
    float u68;
    float u69;
    int t74;
    int t84;
    float u87;
    float u90;
    float u91;
    int t92;
    float u95;
    float u98;
    float u99;
    int t115;
    int t116;
    int t122;
    int t123;
    int t130;
    float u133;
    float u136;
    float u137;
    int t178;
    int t200;
    float u184;
    int t187;
    int t197;
    int t188;
    float u191;
    float u194;
    float u195;
    int t239;
    int t262;
    int t264;
    int t246;
    int t82;
    int t102;
    float u105;
    float u106;
    int t107;
    int stk[26];

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            t222 = t0;
            if (t0 != 2) {
            } else {
                *(unsigned int *)(((int)stk + 24)) = (*(int *)0xC9433D4);
                t4 = *(int *)0xC23ED44;
                t5 = *(int *)0xC9433D8;
                t207 = t4;
                if (t4 == 1) {
                } else {
                    FUN_0c0cf6e4(0x0, 0xC1E9FF0, 302.0f, 128.0f, 1.0f, 0.799999952f, 1.0f);
                    t8 = *(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB38));
                    *(float *)(((int)stk + 20)) = 0.899999976f;
                    t9 = strlen(t8);
                    u12 = (float)t9;
                    if ((int)t9 < 0) {
                        u12 = ((float)t9 + 4.2949673e+09f);
                    }
                    u15 = *(float *)(((int)stk + 20));
                    u16 = ((u12 * 18.0f) / (1.0f + 1.0f));
                    FUN_0c0cf6e4(0x0, t8, (float)(int)((-(u16 * u15)) + 320.0f), 160.0f, u15, u15, 1.0f);
                    t18 = strlen(t8);
                    u21 = (float)t18;
                    if ((int)t18 < 0) {
                        u21 = ((float)t18 + 4.2949673e+09f);
                    }
                    u25 = (u21 * (*(float *)(((int)stk + 20))));
                    *(float *)(((int)stk + 44)) = 0.5f;
                    *(unsigned char *)0xC20BDC2 = ((*(signed char *)0xC23A1B0) + 0x31);
                    u27 = *(float *)(((int)stk + 44));
                    FUN_0c0cf6e4(0x0, 0xC20BDBE, (float)(int)((float)(int)((-(u16 * u15)) + 320.0f) + (u25 * 18.0f)), 171.0f, u27, u27, 1.0f);
                    if ((*(int *)0xC9433CC) == -1) {
                        FUN_0c0cf6e4(0x1, 0xC1E9FF4, 212.0f, 235.0f, 1.0f, 0.799999952f, 1.0f);
                    } else {
                        if ((*(int *)0xC9433CC) == 2) {
                            FUN_0c0cf6e4(0x1, 0xC1E9FF4, 212.0f, 235.0f, 1.0f, 0.799999952f, 1.0f);
                        } else {
                            t39 = 0xC20BDC5;
                            t40 = 0x5;
                            if (((*(int *)0xC23A1A8) & 0x20) == 0) {
                            } else {
                                *(unsigned char *)0xC20BDD7 = ((*(signed char *)((t5 + 0x34))) + 0x30);
                                t39 = 0xC20BDD2;
                                t40 = 0x6;
                            }
                            *(unsigned char *)(((t40 + t39) + 0x0)) = ((*(signed char *)((t5 + 0x35))) + 0x30);
                            *(unsigned char *)(((t40 + t39) + 0x2)) = ((*(signed char *)((t5 + 0x36))) + 0x30);
                            *(unsigned char *)(((t40 + t39) + 0x3)) = ((*(signed char *)((t5 + 0x37))) + 0x30);
                            *(unsigned char *)(((t40 + t39) + 0x5)) = ((*(signed char *)((t5 + 0x38))) + 0x30);
                            *(unsigned char *)(((t40 + t39) + 0x6)) = ((*(signed char *)((t5 + 0x39))) + 0x30);
                            *(float *)(((int)stk + 40)) = 0.899999976f;
                            t47 = strlen(t39);
                            u50 = (float)t47;
                            if ((int)t47 < 0) {
                                u50 = ((float)t47 + 4.2949673e+09f);
                            }
                            u53 = *(float *)(((int)stk + 40));
                            u54 = ((u50 * 18.0f) / (1.0f + 1.0f));
                            *(unsigned int *)(((int)stk + 8)) = (int)((-(u54 * u53)) + 320.0f);
                            FUN_0c0cf6e4(0x0, t39, (float)(int)((-(u54 * u53)) + 320.0f), 213.0f, u53, u53, 1.0f);
                            if ((*(int *)((a4 + 0x34))) != 0) {
                                if (((*(int *)0xC23A258) & 14) == 0) {
                                } else {
                                    *(float *)(((int)stk + 36)) = 0.799999952f;
                                    t62 = strlen(0xC20BDE0);
                                    u65 = (float)t62;
                                    if ((int)t62 < 0) {
                                        u65 = ((float)t62 + 4.2949673e+09f);
                                    }
                                    u68 = *(float *)(((int)stk + 36));
                                    u69 = ((u65 * 18.0f) / (1.0f + 1.0f));
                                    *(unsigned int *)(((int)stk + 8)) = (int)((-(u69 * u68)) + 320.0f);
                                    FUN_0c0cf6e4(0x0, 0xC20BDE0, (float)(int)((-(u69 * u68)) + 320.0f), 260.0f, u68, u68, 1.0f);
                                }
                            } else {
                                t74 = *(int *)0xC23A1A8;
                                if (((t74 & 0x20) != 0) && ((0x40 & t74) == 0)) {
                                    if ((*(int *)((a4 + 0x44))) != 0) {
                                        *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) - 1);
                                    }
                                    if (((*(int *)((a4 + 0x44))) == 0) && (t82 = *(int *)0xC23A258, (t82 & 30) != 0)) {
                                        *(float *)(((int)stk + 12)) = 0.799999952f;
                                        if ((*(int *)0xC9433A8) != 12) {
                                            t84 = strlen(0xC20BE06);
                                            u87 = (float)t84;
                                            if ((int)t84 < 0) {
                                                u87 = ((float)t84 + 4.2949673e+09f);
                                            }
                                            u90 = *(float *)(((int)stk + 12));
                                            u91 = ((u87 * 18.0f) / (1.0f + 1.0f));
                                            *(unsigned int *)(((int)stk + 8)) = (int)((-(u91 * u90)) + 320.0f);
                                            t102 = 0xC20BE06;
                                            u105 = u90;
                                            u106 = u90;
                                            t107 = (int)((-(u91 * u90)) + 320.0f);
                                        } else {
                                            t92 = strlen(0xC20BE14);
                                            u95 = (float)t92;
                                            if ((int)t92 < 0) {
                                                u95 = ((float)t92 + 4.2949673e+09f);
                                            }
                                            u98 = *(float *)(((int)stk + 12));
                                            u99 = ((u95 * 18.0f) / (1.0f + 1.0f));
                                            *(unsigned int *)(((int)stk + 8)) = (int)((-(u99 * u98)) + 320.0f);
                                            t102 = 0xC20BE14;
                                            u105 = u98;
                                            u106 = u98;
                                            t107 = (int)((-(u99 * u98)) + 320.0f);
                                        }
                                        FUN_0c0cf6e4(0x0, t102, (float)t107, 260.0f, u105, u106, 1.0f);
                                    }
                                } else {
                                    t115 = *(int *)0xC23A1AC;
                                    t116 = *(int *)0xC23A1B0;
                                    *(unsigned int *)(((int)stk + 8)) = (((t116 << 2) << 1) + (((t115 * 0x2C) + 0xC522B04) + 0x4));
                                    FUN_0c0cfa18((((int)stk + 8) + 0x28), (*(int *)(((((t116 << 2) << 1) + (((t115 * 0x2C) + 0xC522B04) + 0x4)) + 0x4))));
                                    t122 = 0xC20BDEB;
                                    t123 = 0x5;
                                    if ((0x20 & (*(int *)0xC23A1A8)) == 0) {
                                    } else {
                                        *(unsigned char *)0xC20BDFD = ((*(signed char *)(((int)stk + 48))) + 0x30);
                                        t122 = 0xC20BDF8;
                                        t123 = 0x6;
                                    }
                                    *(unsigned char *)(((t123 + t122) + 0x0)) = ((*(signed char *)(((int)stk + 49))) + 0x30);
                                    *(unsigned char *)(((t123 + t122) + 0x2)) = ((*(signed char *)(((int)stk + 50))) + 0x30);
                                    *(unsigned char *)(((t123 + t122) + 0x3)) = ((*(signed char *)(((int)stk + 51))) + 0x30);
                                    *(unsigned char *)(((t123 + t122) + 0x5)) = ((*(signed char *)(((int)stk + 52))) + 0x30);
                                    *(unsigned char *)(((t123 + t122) + 0x6)) = ((*(signed char *)(((int)stk + 53))) + 0x30);
                                    *(float *)(((int)stk + 32)) = 0.799999952f;
                                    t130 = strlen(t122);
                                    u133 = (float)t130;
                                    if ((int)t130 < 0) {
                                        u133 = ((float)t130 + 4.2949673e+09f);
                                    }
                                    u136 = *(float *)(((int)stk + 32));
                                    u137 = ((u133 * 18.0f) / (1.0f + 1.0f));
                                    *(unsigned int *)(((int)stk + 8)) = (int)((-(u137 * u136)) + 320.0f);
                                    FUN_0c0cf6e4(0x0, t122, (float)(int)((-(u137 * u136)) + 320.0f), 260.0f, u136, u136, 1.0f);
                                }
                            }
                        }
                    }
                    t178 = *(int *)((0x48 + (*(int *)(((int)stk + 24)))));
                    t200 = t178;
                    if (t178 == 3) {
                        FUN_0c0b5d54();
                        *(float *)(((int)stk + 16)) = 0.75f;
                        FUN_0c0cf6e4(0x0, 0xC20BE27, 245.0f, 309.0f, 0.75f, 0.75f, 1.0f);
                        u184 = *(float *)(((int)stk + 16));
                        FUN_0c0cf6e4(0x0, 0xC20BE4C, 224.0f, (float)(int)((float)0x135 + ((((*(float *)(((int)stk + 16))) * (float)(*(int *)(((*(int *)(((int)stk + 24))) + 0x3C))))) * 34.0f)), u184, u184, 1.0f);
                        t187 = *(int *)0xC23A258;
                        t197 = t187;
                        if ((t187 & 56) != 0) {
                            *(float *)(((int)stk + 28)) = 0.5f;
                            t188 = strlen(0xC20BE4E);
                            u191 = (float)t188;
                            if ((int)t188 < 0) {
                                u191 = ((float)t188 + 4.2949673e+09f);
                            }
                            u194 = *(float *)(((int)stk + 28));
                            u195 = ((u191 * 18.0f) / (1.0f + 1.0f));
                            *(unsigned int *)(((int)stk + 24)) = (int)((-(u195 * u194)) + 320.0f);
                            t197 = (FUN_0c0cf6e4(0x0, 0xC20BE4E, (float)(int)((-(u195 * u194)) + 320.0f), 440.0f, u194, u194, 1.0f));
                        }
                        t200 = t197;
                    }
                    t207 = t200;
                }
                t222 = t207;
            }
            t246 = t222;
        } else {
            if ((*(int *)((a4 + 0x38))) == 0) {
            } else {
                t239 = *(int *)((a4 + 0x38));
                *(unsigned int *)((a4 + 0x38)) = (t239 - 1);
                if ((t239 - 1) != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
            }
            t246 = t0;
        }
        t264 = t246;
    } else {
        t262 = FUN_0c0cf4c4(0xA, 0x2, 0x0, 0x1, 0xC20BDB0, 208.0f, 82.0f, 1.0f, 1.0f, 1.0f);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t264 = t262;
    }
    return t264;
}

int FUN_0c02829e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t18;
    int t25;
    int t37;
    int t47;
    int t72;
    float u86;
    float u87;
    float u88;
    float u89;
    float u90;
    int t118;
    int t123;
    int t145;
    int t179;
    float u187;
    float u188;
    float u189;
    float u190;
    float u191;
    int t218;
    int t166;
    int t5;
    int t6;
    int t31;
    int t28;
    float u133;
    int t214;
    int t210;
    float u212;
    int stk[25];

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 == 1) {
            if (((*(int *)((a4 + 0x50C))) != 0) && (t5 = *(int *)((a4 + 0x510)), t6 = *(int *)((0xC247030 + (t5 << 2))), t6 == 4)) {
                *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x2C);
                FUN_0c0a7714((((int)stk + 16) + 0x28), (((int)stk + 16) + 0x2C), ((*(float *)((a4 + 0x24C))) - (*(float *)((a4 + 0x518)))), ((*(float *)((a4 + 0x250))) - (*(float *)((a4 + 0x51C)))), ((*(float *)((a4 + 0x254))) - (*(float *)((a4 + 0x520)))));
                FUN_0c0546fe(a4, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), 0x40, 0x1);
                FUN_0c05473c(a4, 0xFFFFE000, 0x40, 0x1);
                t18 = FUN_0c0277c4(a4, 0.0149999997f);
                if (t18 != 0) {
                    _quick_evn_mvn();
                    FUN_0c0a447c(a4, (((int)stk + 16) + 0x20));
                    *(unsigned int *)((a4 + 0x3B0)) = 0x1E;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
                t25 = FUN_0c02a416(a4);
                if (t25 == 0) {
                    t28 = (FUN_0c022838(a4));
                } else {
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    t28 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
                t31 = t28;
            } else {
                t31 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
            }
            t166 = t31;
        } else {
            if (t0 == 2) {
                if ((*(int *)((a4 + 0x50C))) == 0) {
                    *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                } else {
                    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
                        *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                    } else {
                        t37 = *(int *)((a4 + 0x3B0));
                        *(unsigned int *)((a4 + 0x3B0)) = (t37 - 1);
                        if ((int)(t37 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x374)) = 0x0;
                            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                            *(unsigned int *)((a4 + 0x3AC)) = 0xB4;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            _quick_evn_mvn();
                            *(float *)(((int)stk + 52)) = 0.0f;
                            *(float *)(((int)stk + 56)) = -5.0f;
                            *(float *)(((int)stk + 60)) = -8.0f;
                            FUN_0c062d4a(a4, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x30), 0xFFFFF000, 0x0, 0x0, 0x1);
                            FUN_0c0cc3f8(0x72CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                        }
                        t47 = FUN_0c02a416(a4);
                        if (t47 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                        }
                    }
                }
            } else {
                if (t0 == 3) {
                    if ((*(int *)((a4 + 0x50C))) == 0) {
                        *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                    } else {
                        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
                            *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                        } else {
                            t72 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
                            if (((*(int *)0xC23A258) & 127) == 0) {
                                FUN_0c0cc3f8(0x72CA9, a5, a6, a7, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                            }
                            *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x28);
                            FUN_0c0a7714((((int)stk + 16) + 0x28), (((int)stk + 16) + 0x2C), ((*(float *)((t72 + 0x30))) - (*(float *)((a4 + 0x24C)))), ((*(float *)((t72 + 0x34))) - (*(float *)((a4 + 0x250)))), ((*(float *)((t72 + 0x38))) - (*(float *)((a4 + 0x254)))));
                            u86 = *(float *)((a4 + 0x24C));
                            u87 = *(float *)((t72 + 0x30));
                            u88 = *(float *)((a4 + 0x254));
                            u89 = *(float *)((t72 + 0x38));
                            u90 = ((u89 - u88) * (u89 - u88));
                            u90 = u90 + (u87 - u86) * (u87 - u86);
                            nlPushMatrix(0x0);
                            nlUnitMatrix();
                            FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((t72 + 0x34))), (*(float *)((a4 + 0x254))));
                            nlRotateAY((*(int *)(((((int)stk + 16) + 0x2C) + 0x0))));
                            *(float *)(((int)stk + 32)) = 0.0f;
                            *(float *)(((int)stk + 36)) = ((*(float *)((t72 + 0x34))) + 30.0f);
                            *(float *)(((int)stk + 40)) = (_builtin_sqrtf(u90) + -12.2699995f);
                            FUN_0c0db470((((int)stk + 16) + 0x10), (((int)stk + 16) + 0x4));
                            *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 20)));
                            *(float *)((((((int)stk + 16) + 0x1C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                            *(float *)((((((int)stk + 16) + 0x1C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
                            nlPopMatrix(0x1);
                            _quick_odd_mvn();
                            FUN_0c0a7714((*(int *)(((int)stk + 16))), (((int)stk + 16) + 0x2C), ((*(float *)((a4 + 0x24C))) - (*(float *)(((((int)stk + 16) + 0x1C) + 0x0)))), ((*(float *)((a4 + 0x250))) - (*(float *)(((((int)stk + 16) + 0x1C) + 0x4)))), ((*(float *)((a4 + 0x254))) - (*(float *)(((((int)stk + 16) + 0x1C) + 0x8)))));
                            FUN_0c0546fe(a4, (*(int *)(((((int)stk + 16) + 0x2C) + 0x0))), 0x40, 0x1);
                            FUN_0c05473c(a4, 0xFFFFE000, 0x40, 0x1);
                            FUN_0c0277c4(a4, 0.027999999f);
                            t118 = *(int *)((a4 + 0x3AC));
                            *(unsigned int *)((a4 + 0x3AC)) = (t118 - 1);
                            if ((int)(t118 - 1) < 0) {
                                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            }
                            t123 = FUN_0c02a416(a4);
                            if (t123 != 0) {
                                *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                            }
                            u133 = (_builtin_sqrtf(u90) + -12.2699995f);
                        }
                    }
                } else {
                    if (t0 == 4) {
                        _quick_evn_mvn();
                        FUN_0c0a44c6(a4, (((int)stk + 16) + 0x28));
                        t145 = ((int (*)(int))(FUN_0c02a19a))(a4);
                    }
                }
            }
            t166 = (FUN_0c022838(a4));
        }
        t218 = t166;
    } else {
        if ((*(int *)((a4 + 0x50C))) == 0) {
            t214 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
        } else {
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
                t210 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
            } else {
                t179 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
                *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x2C);
                FUN_0c0a7714((((int)stk + 16) + 0x28), (((int)stk + 16) + 0x2C), ((*(float *)((t179 + 0x30))) - (*(float *)((a4 + 0x24C)))), ((*(float *)((t179 + 0x34))) - (*(float *)((a4 + 0x250)))), ((*(float *)((t179 + 0x38))) - (*(float *)((a4 + 0x254)))));
                u187 = *(float *)((a4 + 0x24C));
                u188 = *(float *)((t179 + 0x30));
                u189 = *(float *)((a4 + 0x254));
                u190 = *(float *)((t179 + 0x38));
                u191 = ((u190 - u189) * (u190 - u189));
                u191 = u191 + (u188 - u187) * (u188 - u187);
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((t179 + 0x34))), (*(float *)((a4 + 0x254))));
                nlRotateAY((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
                *(float *)(((int)stk + 32)) = 0.0f;
                *(float *)(((int)stk + 36)) = ((*(float *)((t179 + 0x34))) + 30.0f);
                *(float *)(((int)stk + 40)) = (_builtin_sqrtf(u191) + -12.2699995f);
                FUN_0c0db470((((int)stk + 16) + 0x10), (((int)stk + 16) + 0x4));
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 20)));
                *(float *)((((((int)stk + 16) + 0x1C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                *(float *)((((((int)stk + 16) + 0x1C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
                nlPopMatrix(0x1);
                _quick_odd_mvn();
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                t210 = (FUN_0c022838(a4));
                u212 = (_builtin_sqrtf(u191) + -12.2699995f);
            }
            t214 = t210;
        }
        t218 = t214;
    }
    return t218;
}

int FUN_0c02fc26(int a4, float f4)
{
    int t0;
    float t3;
    int t4;
    int t6;
    int t7;
    float u11;
    float u17;
    float u22;
    int t23;
    int t24;
    float u28;
    float u34;
    float u59;
    int t98;
    float u110;
    float u111;
    float u115;
    int t117;
    float u112;
    int t118;
    int t126;
    float u127;
    int t133;
    int t134;
    float u138;
    float u141;
    int t105;
    float u106;
    float u108;
    int stk[20];

    t0 = *(int *)((a4 + 0x3AC));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c0546fe(a4, (*(int *)((a4 + 0x52C))), 0x100, 0x1);
            t3 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x1C));
            t4 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t4 + 0x1);
            if (((float)(*(int *)((a4 + 0x3B4))) * 0.666666627f) > (float)(t4 + 0x1)) {
                t6 = *(int *)((a4 + 0x3B0));
                *(unsigned int *)(((int)stk + 4)) = t6;
                t7 = *(int *)((a4 + 0x3B4));
                u11 = (*(float *)((a4 + 0x3C4)));
                u11 = u11 + (float)((t6 << 1) + 0x1) * (*(float *)((a4 + 0x3BC)));
                *(float *)(((int)stk + 32)) = ((((*(float *)((a4 + 0x258))) * (float)t7)) * u11);
                u17 = (*(float *)((a4 + 0x3C4)));
                u17 = u17 + (float)((t6 << 1) + 0x1) * (*(float *)((a4 + 0x3BC)));
                *(float *)(((int)stk + 40)) = ((((*(float *)((a4 + 0x260))) * (float)(*(int *)((a4 + 0x3B4))))) * u17);
                u22 = (*(float *)((a4 + 0x26C)));
                u22 = u22 + (float)(((((int)(((float)t7 * 0.666666627f) - (float)t6) - 1) * (int)(((float)t7 * 0.666666627f) - (float)t6)) << 1) + 0x1) * ((*(float *)((a4 + 0x3C0))) * ((float)(((int)(((float)t7 * 0.666666627f) - (float)t6) << 1) - 1)));
                *(float *)(((int)stk + 36)) = (u22 + 0.5f);
            } else {
                t23 = *(int *)((a4 + 0x3B0));
                t24 = *(int *)((a4 + 0x3B4));
                u28 = (*(float *)((a4 + 0x3C4)));
                u28 = u28 + (float)(((int)((float)t24 * 0.666666627f) << 1) + 0x1) * (*(float *)((a4 + 0x3BC)));
                *(float *)(((int)stk + 32)) = ((((*(float *)((a4 + 0x258))) * (float)t24)) * u28);
                u34 = (*(float *)((a4 + 0x3C4)));
                u34 = u34 + (float)(((int)((float)t24 * 0.666666627f) << 1) + 0x1) * (*(float *)((a4 + 0x3BC)));
                *(float *)(((int)stk + 40)) = ((((*(float *)((a4 + 0x260))) * (float)(*(int *)((a4 + 0x3B4))))) * u34);
                *(float *)(((int)stk + 36)) = (((-((*(float *)((a4 + 0x3C8))) * ((float)((((((int)((float)t23 - ((float)t24 * 0.666666627f)) + 0x1) * (int)((float)t23 - ((float)t24 * 0.666666627f))) << 1) + (((int)((float)t23 - ((float)t24 * 0.666666627f)) + 0x1) * (int)((float)t23 - ((float)t24 * 0.666666627f)))) + 0x1)))) + (*(float *)((a4 + 0x26C)))) + 0.5f);
            }
            nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x1C));
            if (0.0f > ((*(float *)(((int)stk + 36))) + -0.5f)) {
                *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | 0x60);
            }
            u59 = *(float *)((a4 + 0x4C));
            if ((t3 > ((*(float *)((a4 + 0x34))) + u59)) && (0.0f > u59)) {
                *(float *)((a4 + 0x258)) = 0.0f;
                *(float *)((a4 + 0x25C)) = 0.0f;
                *(float *)((a4 + 0x260)) = 0.0f;
                *(float *)((a4 + 0x3BC)) = 0.0f;
                *(float *)((a4 + 0x3C0)) = 0.0f;
                *(float *)((a4 + 0x3C4)) = 0.0f;
                *(float *)((a4 + 0x3C8)) = 0.0f;
                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                *(unsigned int *)((a4 + 0x3B4)) = 0x0;
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 10.0f);
                *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | 0x62);
                *(unsigned int *)((a4 + 0x2C4)) = 0x554;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x20C)) = 0x10000;
                *(unsigned int *)((a4 + 0x210)) = 0x30;
                *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
            }
        } else {
            if (t0 == 2) {
                if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) & 0xFFFEFFFF);
                    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) | 0x1);
                    *(unsigned int *)((a4 + 0x210)) = 0x0;
                    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
                    *(unsigned int *)((a4 + 0x2D4)) = 0x3;
                }
            }
        }
    } else {
        FUN_0c0546fe(a4, (*(int *)((a4 + 0x52C))), 0x200, 0x1);
        if (((*(int *)((a4 + 0x2EC))) & 12) == 0) {
        } else {
            if ((*(int *)((a4 + 0x508))) == 0) {
                t98 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
                t105 = t98;
                u106 = (*(float *)((t98 + 0x38)));
                u108 = ((*(float *)((a4 + 0x30))) - (*(float *)((t98 + 0x30))));
            } else {
                u106 = (*(float *)((a4 + 0x520)));
                u108 = ((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x518))));
            }
            u110 = *(float *)((a4 + 0x38));
            u111 = ((u110 - u106) * (u110 - u106));
            u111 = u111 + u108 * u108;
            u115 = 10.0f;
            t117 = 0;
            if (10.0f > _builtin_sqrtf(u111)) {
                t117 = (1);
            } else {
                u112 = _builtin_sqrtf(u111);
                if (_builtin_sqrtf(u111) > 100.0f) {
                    u112 = 100.0f;
                }
                u115 = u112;
                t117 = ((_builtin_sqrtf(u111) > 100.0f));
            }
            t118 = FUN_0c0d9ca0(t105, ((u115 * 0.049999997f) / 5.66439915f), (u110 - u106));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((((int)((unsigned int)((int)((unsigned int)(unsigned short)t118 + (unsigned int)0x0)) + ((((int)0x0 > (int)(unsigned short)t118)) ? 1u : 0u))) >> 1) - 16384);
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(short *)((a4 + 0x6E))) - 32768);
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
            *(float *)(((int)stk + 32)) = 0.0f;
            *(float *)(((int)stk + 36)) = 0.0f;
            *(float *)(((int)stk + 40)) = 2.37999988f;
            FUN_0c0a6610((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (0x258 + a4));
            *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) * 0.599999964f);
            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
            *(unsigned int *)((a4 + 0x3B4)) = (int)(((*(float *)((a4 + 0x25C))) * (1.0f + 1.0f)) / 0.049999997f);
            t126 = *(int *)((a4 + 0x3B4));
            u127 = *(float *)((a4 + 0x25C));
            *(float *)((a4 + 0x3BC)) = ((-0.5f / (float)(int)((float)t126 * 0.666666627f)) / (float)(int)((float)t126 * 0.666666627f));
            *(float *)((a4 + 0x3C0)) = (((((((u127 * u127) / 0.049999997f) / (1.0f + 1.0f)) / (float)(int)((float)t126 * 0.666666627f)) / (float)(int)((float)t126 * 0.666666627f)) / (float)(int)((float)t126 * 0.666666627f)) / (float)(int)((float)t126 * 0.666666627f));
            *(float *)((a4 + 0x3C4)) = (1.5f / (float)(int)((float)t126 * 0.666666627f));
            *(float *)((a4 + 0x3C8)) = ((((((u127 * u127) / 0.049999997f) / (1.0f + 1.0f)) / (float)(t126 - (int)((float)t126 * 0.666666627f))) / (float)(t126 - (int)((float)t126 * 0.666666627f))) / (float)(t126 - (int)((float)t126 * 0.666666627f)));
            *(float *)((a4 + 0x26C)) = (((FUN_0c01f1b8((0x518 + a4), (((int)stk + 4) + 0x10))) - (*(float *)((a4 + 0x34)))) / (float)(*(int *)((a4 + 0x3B4))));
            if ((*(int *)((a4 + 0x50C))) != 0) {
                t133 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
                t134 = *(int *)((a4 + 0x3B4));
                u138 = (*(float *)((a4 + 0x30)));
                u138 = u138 + (float)t134 * (*(float *)((a4 + 0x258)));
                u141 = (*(float *)((a4 + 0x38)));
                u141 = u141 + (float)t134 * (*(float *)((a4 + 0x260)));
                *(unsigned int *)(((0x52C + a4) + 0x0)) = ((FUN_0c0d9dc0(((*(float *)((t133 + 0x30))) - u138), ((*(float *)((t133 + 0x38))) - u141))) - 32768);
            } else {
                *(unsigned int *)((a4 + 0x52C)) = (*(short *)((a4 + 0x6E)));
            }
            *(unsigned int *)((a4 + 0x2C4)) = 0x552;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            *(unsigned int *)((a4 + 0x20C)) = 0x20000;
            *(unsigned int *)((a4 + 0x210)) = 0x10000;
            *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFFF9D);
            FUN_0c0cc3f8(0xA2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
        }
    }
    return ((*(int *)((a4 + 0x20C))) & 0x30000);
}

void FUN_0c089d04(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t13;
    int t28;
    int t31;
    int t36;
    int t41;
    int t43;
    int t48;
    float u49;
    float u51;
    float u52;
    float u53;
    int t58;
    float u95;
    float u96;
    float u97;
    int t129;
    int t136;
    int t143;
    int t144;
    float u156;
    int t162;
    int t163;
    int t182;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C089D04:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    R11 = (R4);
    R13 = ((*(int *)((R4 + 0x30))));
    if (((*(int *)((R4 + 0x44))) != 0)) goto L_C089D42;
    goto L_C089D36;
    L_C089D36:;
    if ((((*(int *)((R13 + 0x2EC))) & 15) == 0)) goto L_C089D42;
    goto L_C089D3E;
    L_C089D3E:;
    goto L_C089F66;
    L_C089F66:;
    *(float *)((R13 + 0x45C)) = 1.0f;
    *(float *)((R13 + 0x460)) = 1.0f;
    *(float *)((R13 + 0x464)) = 1.0f;
    *(unsigned int *)((R13 + 0x388)) = (*(int *)((R11 + 0x48)));
    R0 = ((FUN_0c0e19f2(R4, R5, R6, a7)));
    R14 = (0xC0E19F2);
    goto L_C08A19C;
    L_C08A19C:;
    return;
    L_C089D42:;
    t13 = *(int *)((R11 + 0x3C));
    *(unsigned int *)((R11 + 0x3C)) = (t13 + 0x1);
    R12 = (0x1);
    R8 = (0xA);
    R9 = (0x0);
    if (((int)((t13 + 0x1) - 1) >= (int)(*(int *)((R11 + 0x40))))) goto L_C089D62;
    goto L_C089D58;
    L_C089D58:;
    if (((*(int *)((R11 + 0x38))) == 0)) goto L_C089D62;
    goto L_C089D5E;
    L_C089D5E:;
    goto L_C089F9A;
    L_C089F9A:;
    *(unsigned int *)(((int)stk + 8)) = R9;
    R0 = (0xC08A028);
    R10 = (0xC23A258);
    R14 = ((R11 + 0x4C));
    F14 = (0.199999988f);
    F15 = (0.299999982f);
    goto L_C089FAA;
    L_C089FAA:;
    if (((*(int *)((R14 + 0x0))) != 0)) goto L_C089FB4;
    goto L_C089FB0;
    L_C089FB0:;
    goto L_C08A18C;
    L_C08A18C:;
    t28 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t28 + 0x1);
    R14 = ((R14 + 0x48));
    if (((int)(t28 + 0x1) >= (int)R8)) goto L_C08A19C;
    goto L_C08A198;
    L_C08A198:;
    goto L_C089FAA;
    L_C089FB4:;
    t31 = *(int *)((R14 + 0x0));
    R0 = (t31);
    if ((t31 == 1)) goto L_C089FC6;
    goto L_C089FBA;
    L_C089FBA:;
    if ((R0 == 2)) goto L_C089FC6;
    goto L_C089FBE;
    L_C089FBE:;
    if ((R0 == 3)) goto L_C08A0A8;
    goto L_C089FC2;
    L_C089FC2:;
    goto L_C08A166;
    L_C08A166:;
    t36 = *(int *)((R14 + 0x3C));
    *(unsigned int *)((R14 + 0x3C)) = (t36 + 0x1);
    R0 = (0x40);
    if (((int)((t36 + 0x1) - 1) < (int)(*(int *)((R14 + 0x40))))) goto L_C08A18C;
    goto L_C08A176;
    L_C08A176:;
    *(unsigned int *)((R14 + 0x3C)) = R9;
    *(unsigned int *)((R14 + 0x34)) = ((*(int *)((R14 + 0x34))) + 0x1);
    t41 = *(int *)((R14 + 0x38));
    *(unsigned int *)((R14 + 0x38)) = (t41 - 1);
    if (((t41 - 1) != 0)) goto L_C08A18C;
    goto L_C08A18A;
    L_C08A18A:;
    *(unsigned int *)((R14 + 0x0)) = R9;
    goto L_C08A18C;
    L_C08A0A8:;
    t43 = *(int *)((R14 + 0x44));
    R0 = (t43);
    if ((t43 == 0)) goto L_C08A0BC;
    goto L_C08A0B0;
    L_C08A0B0:;
    if ((R0 == 1)) goto L_C08A0FA;
    goto L_C08A0B4;
    L_C08A0B4:;
    if ((R0 == 2)) goto L_C08A134;
    goto L_C08A0B8;
    L_C08A0B8:;
    goto L_C08A166;
    L_C08A134:;
    t48 = *(int *)((R14 + 0x38));
    u49 = *(float *)((R14 + 0x30));
    u51 = F15;
    u51 = u51 + ((u49 - (float)t48) / u49) * (*(float *)0xC08A208);
    *(float *)((R13 + 0x45C)) = u51;
    *(float *)((R13 + 0x460)) = u51;
    u52 = *(float *)0xC08A20C;
    u53 = F14;
    u53 = u53 + ((u49 - (float)t48) / u49) * u52;
    *(float *)((R13 + 0x464)) = u53;
    F0 = (((u49 - (float)t48) / u49));
    F1 = (u52);
    F4 = (((u49 - (float)t48) / u49));
    F5 = (u51);
    goto L_C08A166;
    L_C08A0FA:;
    *(float *)((R13 + 0x45C)) = F15;
    *(float *)((R13 + 0x460)) = F15;
    *(float *)((R13 + 0x464)) = F14;
    goto L_C08A166;
    L_C08A0BC:;
    t58 = *(int *)((R10 + 0x0));
    *(float *)((R13 + 0x45C)) = (*(float *)(((((((t58 & 0x3) << 1) + (t58 & 0x3)) << 2) + 0xC10AB04) + 0x0)));
    *(float *)((R13 + 0x460)) = (*(float *)(((((((t58 & 0x3) << 1) + (t58 & 0x3)) << 2) + 0xC10AB04) + 0x4)));
    *(float *)((R13 + 0x464)) = (*(float *)(((((((t58 & 0x3) << 1) + (t58 & 0x3)) << 2) + 0xC10AB04) + 0x8)));
    R4 = ((((((t58 & 0x3) << 1) + (t58 & 0x3)) << 2) + 0xC10AB04));
    R5 = ((t58 & 0x3));
    if ((((*(int *)((R10 + 0x0))) & R12) == 0)) goto L_C08A0F0;
    goto L_C08A0EC;
    L_C08A0EC:;
    R3 = (0x0);
    goto L_C08A0F4;
    L_C08A0F4:;
    *(unsigned int *)((R13 + 0x388)) = R3;
    goto L_C08A166;
    L_C08A0F0:;
    R3 = ((*(int *)((R11 + 0x48))));
    goto L_C08A0F4;
    L_C089FC6:;
    *(float *)((R14 + 0x18)) = ((*(float *)((R14 + 0x18))) + (*(float *)(((0x24 + R14) + 0x0))));
    *(float *)((R14 + 0x1C)) = ((*(float *)((R14 + 0x1C))) + (*(float *)(((0x28 + R14) + 0x0))));
    *(float *)((R14 + 0x20)) = ((*(float *)((R14 + 0x20))) + (*(float *)(((0x2C + R14) + 0x0))));
    nlPushMatrix(0x0);
    if ((((*(int *)((R14 + 0x44))) & R12) == 0)) goto L_C08A030;
    goto L_C089FFE;
    L_C089FFE:;
    F5 = ((((*(float *)((R14 + 0x8))) + (*(float *)((R14 + 0x1C)))) + (-1.0f)));
    F6 = ((*(float *)((R14 + 0xC))));
    goto L_C08A038;
    L_C08A038:;
    FUN_0c0dcc70((*(float *)((R14 + 0x4))), F5, F6);
    nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CE))));
    nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CC))));
    nlScale((*(float *)((R14 + 0x18))), (*(float *)((R14 + 0x1C))), (*(float *)((R14 + 0x20))));
    u95 = *(float *)((R14 + 0x18));
    *(float *)(((int)stk + 12)) = u95;
    u96 = *(float *)((R14 + 0x1C));
    u97 = *(float *)((R14 + 0x20));
    F12 = (u97);
    F13 = (u96);
    F3 = (u95);
    if ((!(u97 > u96))) goto L_C08A07C;
    goto L_C08A078;
    L_C08A078:;
    F2 = (F12);
    goto L_C08A07E;
    L_C08A07E:;
    if ((!(F2 > F3))) goto L_C08A08E;
    goto L_C08A082;
    L_C08A082:;
    if ((!(F12 > F13))) goto L_C08A08A;
    goto L_C08A086;
    L_C08A086:;
    F4 = (F12);
    goto L_C08A092;
    L_C08A092:;
    FUN_0c0de000(F4);
    FUN_0c0c465c((*(int *)((R14 + 0x34))));
    nlPopMatrix(0x1);
    goto L_C08A166;
    L_C08A08A:;
    F4 = (F13);
    goto L_C08A092;
    L_C08A08E:;
    F4 = ((*(float *)(((int)stk + 12))));
    goto L_C08A092;
    L_C08A07C:;
    F2 = (F13);
    goto L_C08A07E;
    L_C08A030:;
    F5 = ((*(float *)((R14 + 0x8))));
    F6 = ((*(float *)((R14 + 0xC))));
    goto L_C08A038;
    L_C089D62:;
    *(unsigned int *)((R11 + 0x3C)) = R9;
    R10 = ((*(int *)((R11 + 0x34))));
    goto L_C089F86;
    L_C089F86:;
    if (((*(int *)((R11 + 0x38))) != (*(short *)((R10 + 0x2))))) goto L_C089F92;
    goto L_C089F8E;
    L_C089F8E:;
    goto L_C089D68;
    L_C089D68:;
    if (((*(short *)((R10 + 0x0))) != 0)) goto L_C089D72;
    goto L_C089D6E;
    L_C089D6E:;
    goto L_C089F66;
    L_C089D72:;
    R14 = ((R11 + 0x4C));
    R4 = (R9);
    goto L_C089D78;
    L_C089D78:;
    if (((*(int *)((R14 + 0x0))) == 0)) goto L_C089D86;
    goto L_C089D7E;
    L_C089D7E:;
    t129 = (int)(R4 + 0x1) < (int)R8;
    R14 = ((R14 + 0x48));
    R4 = ((R4 + 0x1));
    if (t129) goto L_C089D78;
    goto L_C089D86;
    L_C089D86:;
    if (((int)R4 < (int)R8)) goto L_C089D8E;
    goto L_C089D8A;
    L_C089D8A:;
    goto L_C089F84;
    L_C089F84:;
    R10 = ((R10 + 0x8));
    goto L_C089F86;
    L_C089D8E:;
    memset(R14, 0x0, 0x4);
    *(unsigned int *)((R14 + 0x0)) = (*(short *)((R10 + 0x0)));
    t136 = *(short *)((R10 + 0x0));
    R0 = (t136);
    R4 = (0x4000);
    if ((t136 == 1)) goto L_C089DC4;
    goto L_C089DA4;
    L_C089DA4:;
    if ((R0 == 2)) goto L_C089E56;
    goto L_C089DA8;
    L_C089DA8:;
    if ((R0 != 3)) goto L_C089DB0;
    goto L_C089DAC;
    L_C089DAC:;
    goto L_C089F24;
    L_C089F24:;
    *(unsigned int *)((R13 + 0x388)) = (*(int *)((R11 + 0x48)));
    t143 = *(short *)((R10 + 0x4));
    t144 = *(int *)(((0x2E8 + R13) + 0x0));
    *(unsigned int *)((R14 + 0x38)) = (((t143 + 0x1) * (((int)t144 >= 0) ? (0x1 << (t144 & 31)) : ((-(int)t144 & 31) ? ((int)0x1 >> (-(int)t144 & 31)) : ((int)0x1 >> 31)))) - 1);
    *(float *)((R14 + 0x30)) = (float)(((t143 + 0x1) * (((int)t144 >= 0) ? (0x1 << (t144 & 31)) : ((-(int)t144 & 31) ? ((int)0x1 >> (-(int)t144 & 31)) : ((int)0x1 >> 31)))) - 1);
    *(unsigned int *)(((0x44 + R14) + 0x0)) = (*(short *)((R10 + 0x6)));
    *(unsigned int *)((R14 + 0x40)) = R9;
    if (((*(int *)((R14 + 0x44))) != 2)) goto L_C089F84;
    goto L_C089F60;
    L_C089F60:;
    *(unsigned int *)((R11 + 0x44)) = R12;
    goto L_C089F84;
    L_C089DB0:;
    goto L_C089F84;
    L_C089E56:;
    F4 = (-2.0f);
    if (((*(short *)((R10 + 0x4))) != 1)) goto L_C089E76;
    goto L_C089E60;
    L_C089E60:;
    *(float *)((R14 + 0x4)) = (*(float *)((R13 + 0x30)));
    *(float *)((R14 + 0x8)) = ((*(float *)((R13 + 0x34))) + F4);
    R0 = (0x38);
    goto L_C089E8A;
    L_C089E8A:;
    *(float *)((R14 + 0xC)) = (*(float *)((R13 + R0)));
    u156 = 5.0f;
    u156 = u156 + (1.0f + 1.0f) * (float)(*(short *)((R10 + 0x6)));
    *(float *)((R14 + 0x18)) = u156;
    *(float *)((R14 + 0x1C)) = 5.0f;
    *(float *)((R14 + 0x20)) = 5.0f;
    *(unsigned short *)((R14 + 0x10)) = (*(short *)((R13 + 0x6C)));
    *(unsigned short *)((R14 + 0x12)) = (((*(short *)((R13 + 0x6E))) + (*(short *)((0x3CE + (*(int *)(((int)stk + 4))))))) + R4);
    *(unsigned short *)((R14 + 0x14)) = (*(short *)((R13 + 0x70)));
    t162 = *(int *)((R13 + 0x2E8));
    *(unsigned int *)((R14 + 0x40)) = ((((int)t162 >= 0) ? (R12 << (t162 & 31)) : ((-(int)t162 & 31) ? ((int)R12 >> (-(int)t162 & 31)) : ((int)R12 >> 31))) - 1);
    t163 = *(int *)0xC248DD0;
    *(unsigned int *)0xC248DD0 = (t163 + 0x1);
    F0 = ((1.0f + 1.0f));
    F4 = (5.0f);
    F5 = ((1.0f + 1.0f));
    if (((t163 & R12) == 0)) goto L_C089EF0;
    goto L_C089EE8;
    L_C089EE8:;
    *(unsigned int *)((R14 + 0x34)) = 0x328;
    R4 = (0x15);
    goto L_C089EF6;
    L_C089EF6:;
    *(unsigned int *)((R14 + 0x38)) = R4;
    goto L_C089F84;
    L_C089EF0:;
    *(unsigned int *)((R14 + 0x34)) = 0x312;
    R4 = (0x16);
    goto L_C089EF6;
    L_C089E76:;
    *(float *)((R14 + 0x4)) = (*(float *)((R13 + 0x22C)));
    *(float *)((R14 + 0x8)) = ((*(float *)((R13 + 0x230))) + F4);
    R0 = (0x234);
    goto L_C089E8A;
    L_C089DC4:;
    *(unsigned short *)((R14 + 0x10)) = (*(short *)((R13 + 0x6C)));
    *(unsigned short *)((R14 + 0x12)) = (((*(short *)((R13 + 0x6E))) + (*(short *)((0x3CE + (*(int *)(((int)stk + 4))))))) + R4);
    *(unsigned short *)((R14 + 0x14)) = (*(short *)((R13 + 0x70)));
    *(float *)((R14 + 0x4)) = (*(float *)((R13 + 0x30)));
    *(float *)((R14 + 0x8)) = ((*(float *)((R13 + 0x34))) + 7.0f);
    *(float *)((R14 + 0xC)) = (*(float *)((R13 + 0x38)));
    *(float *)((R14 + 0x18)) = 2.5f;
    *(float *)((R14 + 0x1C)) = ((float)(*(short *)((R10 + 0x4))) / 8.0f);
    *(float *)((R14 + 0x20)) = 2.5f;
    *(unsigned int *)((R14 + 0x34)) = 0x150;
    *(unsigned int *)((R14 + 0x38)) = 0x8;
    *(unsigned int *)((R14 + 0x44)) = R12;
    t182 = *(int *)((R13 + 0x2E8));
    *(unsigned int *)((R14 + 0x40)) = ((((int)t182 >= 0) ? (R12 << (t182 & 31)) : ((-(int)t182 & 31) ? ((int)R12 >> (-(int)t182 & 31)) : ((int)R12 >> 31))) - 1);
    *(float *)((R14 + 0x28)) = (((float)((*(short *)((R10 + 0x6))) - (*(short *)((R10 + 0x4)))) / 8.0f) / (float)((*(int *)((R14 + 0x40))) + 0x1));
    R4 = (0x8);
    F4 = (8.0f);
    F5 = (2.5f);
    goto L_C089F84;
    L_C089F92:;
    *(unsigned int *)((R11 + 0x34)) = R10;
    *(unsigned int *)((R11 + 0x38)) = ((*(int *)((R11 + 0x38))) + 0x1);
    goto L_C089F9A;
}

void FUN_0c022e60(int a4, int a5, int a6, int a7, float f4)
{
    int t5;
    int t15;
    int t16;
    int t20;
    int t40;
    float t50;
    int t54;
    float t58;
    float u64;
    int t76;
    int t94;
    int t110;
    int t119;
    int t120;
    int stk[25];

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
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    L_C022E60:;
    R10 = (0xC0A7714);
    R12 = (0x1);
    R14 = (R4);
    if (((*(int *)((R4 + 0x504))) != 0)) goto L_C022EFE;
    goto L_C022E84;
    L_C022E84:;
    t5 = *(int *)((R14 + 0xAC));
    R0 = (0xAC);
    R4 = (t5);
    F15 = (12288.0f);
    if (((int)t5 < (int)0x9)) goto L_C022EC8;
    goto L_C022E92;
    L_C022E92:;
    if (((int)R4 > (int)0xB)) goto L_C022EC8;
    goto L_C022E98;
    L_C022E98:;
    FUN_0c0a7714((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    t15 = *(int *)(((int)stk + 12));
    t16 = *(short *)((R14 + 0x6E));
    R4 = ((short)(t16 - t15));
    R6 = ((t16 - t15));
    if ((!(F15 > _builtin_fabsf((float)(short)(t16 - t15))))) goto L_C022EFE;
    goto L_C022EC2;
    L_C022EC2:;
    *(unsigned int *)((R14 + 0x504)) = R12;
    goto L_C022EFE;
    L_C022EFE:;
    t20 = *(int *)((R14 + 0x504));
    R0 = (t20);
    R11 = (0xC1F8E3C);
    R13 = (0x0);
    R8 = (0xC);
    R9 = (0x3);
    F15 = (0.0f);
    if ((t20 != 0)) goto L_C022F14;
    goto L_C022F10;
    L_C022F10:;
    goto L_C0232BC;
    L_C0232BC:;
    R0 = (0x0);
    goto L_C0232BE;
    L_C0232BE:;
    return;
    L_C022F14:;
    if ((R0 == 1)) goto L_C022F5C;
    goto L_C022F18;
    L_C022F18:;
    if ((R0 == 2)) goto L_C022FD8;
    goto L_C022F1C;
    L_C022F1C:;
    if ((R0 != 3)) goto L_C022F24;
    goto L_C022F20;
    L_C022F20:;
    goto L_C023076;
    L_C023076:;
    *(unsigned int *)((R14 + 0x20C)) = R12;
    *(unsigned int *)((R14 + 0x210)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = (*(int *)((R14 + 0x3B0)));
    *(unsigned int *)((R14 + 0x2D4)) = 0x4;
    goto L_C0232AA;
    L_C0232AA:;
    *(unsigned int *)((R14 + 0x4C4)) = R13;
    *(unsigned int *)((R14 + 0x500)) = R13;
    *(unsigned int *)((R14 + 0x504)) = R13;
    goto L_C0232BC;
    L_C022F24:;
    if ((R0 != 4)) goto L_C022F2C;
    goto L_C022F28;
    L_C022F28:;
    goto L_C0230B8;
    L_C0230B8:;
    FUN_0c0a7714(((int)stk + 4), (0x52C + R14), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | 0x400000);
    *(unsigned int *)((R14 + 0x210)) = 0x2F;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) & 0xFFFFFF9D);
    *(unsigned int *)(((0x2D4 + R14) + 0x0)) = 0x2;
    *(unsigned int *)((R14 + 0x4C4)) = R9;
    *(unsigned int *)((R14 + 0x500)) = 0xF;
    t40 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t40 << 2) + t40) << 2)) + 0x8))) + 0x26)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    R3 = (0x5);
    goto L_C022FD2;
    L_C022FD2:;
    *(unsigned int *)((R14 + 0x504)) = R3;
    goto L_C0232B8;
    L_C0232B8:;
    R0 = (0x1);
    goto L_C0232BE;
    L_C022F2C:;
    if ((R0 != 5)) goto L_C022F34;
    goto L_C022F30;
    L_C022F30:;
    goto L_C02311A;
    L_C02311A:;
    FUN_0c0546fe(R14, (*(int *)((R14 + 0x52C))), 0x200, 0x1);
    if (((R8 & (*(int *)((R14 + 0x2EC)))) != 0)) goto L_C023134;
    goto L_C023130;
    L_C023130:;
    goto L_C0232B8;
    L_C023134:;
    t50 = FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.25f;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = R13;
    FUN_0c0a6610((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (0x258 + R14));
    *(float *)((R14 + 0x26C)) = F15;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + ((*(float *)(((0x3E8 + R14) + 0x0))) - t50));
    t54 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t54 << 2) + t54) << 2)) + 0x8))) + 0x28)));
    *(unsigned int *)((R14 + 0x20C)) = 0x20000;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x504)) = 0x6;
    goto L_C0232B8;
    L_C022F34:;
    if ((R0 != 6)) goto L_C022F3C;
    goto L_C022F38;
    L_C022F38:;
    goto L_C0231E0;
    L_C0231E0:;
    t58 = FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    R0 = (0x26C);
    F0 = (t58);
    F5 = (t58);
    if ((!((*(float *)((R14 + 0x26C))) > (-1.0f)))) goto L_C023206;
    goto L_C0231FA;
    L_C0231FA:;
    u64 = *(float *)((R14 + R0));
    *(float *)((R14 + R0)) = (u64 - 0.049999997f);
    F1 = ((u64 - 0.049999997f));
    goto L_C023206;
    L_C023206:;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((0x258 + R14) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((0x26C + R14) + 0x0))));
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + (*(float *)(((0x260 + R14) + 0x0))));
    F4 = (10.0f);
    if ((!((F5 + 10.0f) > (*(float *)((R14 + 0x34)))))) goto L_C0232B8;
    goto L_C02323E;
    L_C02323E:;
    *(float *)((R14 + 0x258)) = F15;
    *(float *)((R14 + 0x25C)) = F15;
    *(float *)((R14 + 0x260)) = F15;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) - F4);
    t76 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t76 << 2) + t76) << 2)) + 0x8))) + 0x2A)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x504)) = 0x7;
    goto L_C0232B8;
    L_C022F3C:;
    if ((R0 != 7)) goto L_C022F44;
    goto L_C022F40;
    L_C022F40:;
    goto L_C023278;
    L_C023278:;
    if (((R8 & (*(int *)((R14 + 0x2EC)))) == 0)) goto L_C0232B8;
    goto L_C023280;
    L_C023280:;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) | 0x62);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) & 0xFFFDFFFF);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | R12);
    *(unsigned int *)((R14 + 0x210)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = (*(int *)((R14 + 0x3B0)));
    *(unsigned int *)((R14 + 0x2D4)) = R9;
    goto L_C0232AA;
    L_C022F44:;
    goto L_C0232BC;
    L_C022FD8:;
    FUN_0c0546fe(R14, (*(int *)((R14 + 0x52C))), 0x200, 0x1);
    if (((R8 & (*(int *)((R14 + 0x2EC)))) != 0)) goto L_C022FF2;
    goto L_C022FEE;
    L_C022FEE:;
    goto L_C0232B8;
    L_C022FF2:;
    if (((*(int *)((R14 + 0x2BC))) != 0x2DB)) goto L_C02302C;
    goto L_C023000;
    L_C023000:;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) | 0x62);
    *(unsigned int *)((R14 + 0x20C)) = R12;
    *(unsigned int *)((R14 + 0x210)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = (*(int *)((R14 + 0x3B0)));
    *(unsigned int *)((R14 + 0x2D4)) = R13;
    *(unsigned int *)((R14 + 0x4C4)) = R13;
    *(unsigned int *)((R14 + 0x500)) = R13;
    *(unsigned int *)((R14 + 0x504)) = R13;
    goto L_C0232B8;
    L_C02302C:;
    t94 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t94 << 2) + t94) << 2)) + 0x8))) + 0x22)));
    *(unsigned int *)((R14 + 0x2D4)) = R13;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) | 0x62);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) & 0xFFBFFFFF);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | R12);
    *(unsigned int *)((R14 + 0x210)) = R13;
    *(unsigned int *)((R14 + 0x4C4)) = R13;
    *(unsigned int *)((R14 + 0x500)) = R13;
    *(unsigned int *)((R14 + 0x504)) = R9;
    goto L_C0232B8;
    L_C022F5C:;
    FUN_0c0a7714(((int)stk + 4), (0x52C + R14), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | 0x400000);
    *(unsigned int *)((R14 + 0x210)) = 0x74;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) & 0xFFFFFF9D);
    *(unsigned int *)((R14 + 0x2D4)) = R9;
    *(unsigned int *)((R14 + 0x4C4)) = R9;
    *(unsigned int *)((R14 + 0x500)) = 0xE;
    if (((*(int *)((R14 + 0xAC))) != 9)) goto L_C022FAC;
    goto L_C022FA0;
    L_C022FA0:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x2DB;
    goto L_C022FCC;
    L_C022FCC:;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    R3 = (0x2);
    goto L_C022FD2;
    L_C022FAC:;
    *(volatile int *)((R14 + 0xAC));
    t110 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t110 << 2) + t110) << 2)) + 0x8))) + 0x24)));
    goto L_C022FCC;
    L_C022EC8:;
    if (((*(int *)((R14 + R0))) != 8)) goto L_C022EFE;
    goto L_C022ECE;
    L_C022ECE:;
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    t119 = *(int *)(((int)stk + 8));
    t120 = *(short *)((R14 + 0x6E));
    R4 = ((short)(t120 - t119));
    R6 = (t119);
    if ((!(F15 > _builtin_fabsf((float)(short)(t120 - t119))))) goto L_C022EFE;
    goto L_C022EF8;
    L_C022EF8:;
    *(unsigned int *)((R14 + 0x504)) = 0x4;
    goto L_C022EFE;
}
