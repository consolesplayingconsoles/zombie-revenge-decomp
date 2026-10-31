/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
extern int FUN_0c01993e();
int FUN_0c01a3d8(int, int);
int FUN_0c01cdc2(int);
int FUN_0c01db0e(int, int);
int FUN_0c020e40(int);
int FUN_0c02286c(int, int, int, int, float, float);
int FUN_0c022e60(int, int, int, int, float);
int FUN_0c0236ce(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c03145c(int);
int FUN_0c034314(int, int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c04994c(int);
int FUN_0c049aaa(int);
int FUN_0c049f54(int);
int FUN_0c04a058(int);
int FUN_0c04fb9e(void);
int FUN_0c04fca2(void);
int FUN_0c04fe0c(void);
int FUN_0c0553b6(int, int, int);
extern int FUN_0c057de4();
extern int FUN_0c057fd4();
int FUN_0c0685a4(int, int, int, int);
int FUN_0c085050(int, int, int);
int FUN_0c0855f4(int);
int FUN_0c085704(int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0b2b18(void);
int FUN_0c0b72d6(int);
int FUN_0c0bb134(int);
int FUN_0c0bbbf4(int);
int FUN_0c0bdec2(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c72b8(int, float, float);
int FUN_0c0c9d1c(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc832(void);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd0a0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c07116c(int a4, int a5, int a6, int a7);
int FUN_0c051198(int a4);
int FUN_0c02ca78(int a4, int a5, int a6, int a7);
int FUN_0c076b0c(int a4, int a5, int a6, int a7);
int FUN_0c02448c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0906e8(int a4);
int FUN_0c0ac990(int a4);
int FUN_0c0314d8(int a4);
int FUN_0c079718(int a4);
int FUN_0c0921cc(int a4, int a5, int a6, int a7);
int FUN_0c0339a0(int a4);
int FUN_0c05a15c(int a4, int a5);
int FUN_0c0660c0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c048dd4(int a4);
int FUN_0c0ab616(int a4, int a5, int a6, int a7);
int FUN_0c01bf8c(int a4, int a5, int a6, int a7);
int FUN_0c06d2c8(int a4, int a5, int a6, int a7);
int FUN_0c0b2cda(int a4);

int FUN_0c07116c(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
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
    v0_2 = a4;
    FUN_0c0685a4(v0_2, a5, a6, a7);
    *(unsigned int *)((v0_2 + 0xA0)) = ((*(int *)((v0_2 + 0xA0))) + 0x1);
    v0_3 = *(int *)((v0_2 + 0x80));
    v0_4 = (v0_3);
    v0_1 = (0x0);
    v0_0 = (v0_2);
    v0_2 = (0x2);
    if ((v0_3 == 0)) goto L_C0711A6;
    if ((v0_4 == 1)) goto L_C0711B8;
    if ((v0_4 == 2)) goto L_C0711DE;
    if ((v0_4 == 3)) goto L_C0711F4;
    if ((v0_4 == 4)) goto L_C07124C;
    if ((v0_4 == 5)) goto L_C071274;
    L_C071274:;
    *(float *)((v0_0 + 0x90)) = ((float)((((((*(int *)((v0_0 + 0x98))) - (*(int *)((v0_0 + 0x7C)))) - 1) << 1) - (*(int *)((v0_0 + 0xA4)))) + 0x2) / (1.0f + 1.0f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((v0_0 + 0x30));
    FUN_0c0dcc70(0.0f, 0.0f, ((*(float *)((v0_0 + 0x50))) * (*(float *)((v0_0 + 0x90)))));
    nlRotateAY((*(short *)((v0_0 + 0x62))));
    FUN_0c0c465c((*(int *)((v0_0 + 0x98))));
    return nlPopMatrix(0x1);
    L_C07124C:;
    v0_2 = *(int *)((v0_0 + 0xA4));
    *(unsigned int *)((v0_0 + 0xA4)) = (v0_2 + 0x1);
    if (((v0_2 + 0x1) != (*(int *)((v0_0 + 0xA8))))) goto L_C071274;
    *(unsigned int *)((v0_0 + 0xA4)) = v0_1;
    v0_1 = *(int *)((v0_0 + 0xA8));
    *(unsigned int *)((v0_0 + 0xA8)) = (v0_1 - 1);
    if (((v0_1 - 1) != 0)) goto L_C071274;
    L_C07126C:;
    *(unsigned int *)((v0_0 + 0x80)) = ((*(int *)((v0_0 + 0x80))) + 0x1);
    goto L_C071274;
    L_C0711F4:;
    v0_3 = *(int *)((v0_0 + 0xA4));
    *(unsigned int *)((v0_0 + 0xA4)) = (v0_3 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)v0_2)) goto L_C071274;
    v0_2 = *(int *)((v0_0 + 0x98));
    *(unsigned int *)((v0_0 + 0x98)) = (v0_2 - 1);
    if (((v0_2 - 1) != (*(int *)((v0_0 + 0x7C))))) goto L_C071226;
    FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)((v0_0 + 0xA8)) = 0x4;
    *(unsigned int *)((v0_0 + 0x80)) = ((*(int *)((v0_0 + 0x80))) + 0x1);
    L_C071226:;
    *(unsigned int *)((v0_0 + 0xA4)) = v0_1;
    goto L_C071274;
    L_C0711DE:;
    if (((*(int *)0xC23EDB0) != 0)) goto L_C071274;
    L_C0711E6:;
    FUN_0c0cc3f8(0x1028A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)((v0_0 + 0xA4)) = v0_1;
    goto L_C07126C;
    L_C0711B8:;
    v0_3 = *(int *)((v0_0 + 0xA4));
    *(unsigned int *)((v0_0 + 0xA4)) = (v0_3 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)v0_2)) goto L_C071274;
    v0_2 = *(int *)((v0_0 + 0x98));
    *(unsigned int *)((v0_0 + 0x98)) = (v0_2 + 0x1);
    if (((v0_2 + 0x1) != (*(int *)((v0_0 + 0x78))))) goto L_C071226;
    *(unsigned int *)((v0_0 + 0x80)) = ((*(int *)((v0_0 + 0x80))) + 0x1);
    goto L_C071226;
    L_C0711A6:;
    if (((int)(*(int *)((v0_0 + 0xA0))) > (int)0x3C)) goto L_C0711E6;
    goto L_C071274;
}

int FUN_0c051198(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC23ED9C;
    if (t0 == 23) {
    } else {
        if (((*(int *)((0xC23EDE0 + ((*(int *)((a4 + 0xBC))) << 2)))) == 8) && ((t0 == 4) || ((t0 == 7) || (t0 == 25)))) {
            FUN_0c0b72d6((*(int *)((a4 + 0xBC))));
            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC23EDE0)) = 0x5;
            FUN_0c049f54(a4);
            FUN_0c04a058(a4);
            *(unsigned int *)((a4 + 0x328)) = 0xB4;
            *(unsigned int *)((a4 + 0x20C)) = 0x8000;
            *(unsigned int *)((a4 + 0x210)) = 0x21;
            *(unsigned int *)((a4 + 0x3AC)) = 0x0;
            *(unsigned int *)((a4 + 0x3B4)) = 0x200;
            *(unsigned int *)((a4 + 0x1CC)) = 0x0;
            FUN_0c0553b6(0x18, 0x3, (a4 + 0x30));
            FUN_0c04994c((*(int *)((a4 + 0xBC))));
            *(float *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC24758C)) = 0.0f;
            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247584)) = 0x0;
            t0 = *(int *)(((0xBC + a4) + 0x0));
            *(unsigned int *)(((0xC247594 + (t0 << 2)) + 0x0)) = (*(int *)(((t0 << 2) + 0xC24759C)));
        } else {
            t0 = *(int *)((0xC23EDE0 + ((*(int *)((a4 + 0xBC))) << 2)));
            if ((t0 != 11) && (t0 != 0)) {
                if (((*(int *)0xC23ED5C) & 0x10034) != 0) {
                    t1 = ((int (*)(int, int))(FUN_0c057de4))(a4, t0);
                    FUN_0c01a3d8((*(int *)((a4 + 0xBC))), 0x1);
                    FUN_0c049aaa(a4);
                    FUN_0c0e19f2();
                }
            } else {
                FUN_0c020e40(a4);
                t0 = ((int (*)(int))(FUN_0c057de4))(a4);
                FUN_0c01a3d8((*(int *)((a4 + 0xBC))), 0x0);
                FUN_0c049aaa(a4);
                FUN_0c0e19f2();
            }
        }
    }
    FUN_0c085704(a4);
    FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
    return FUN_0c0bbbf4(a4);
}

int FUN_0c02ca78(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02C6EE;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        *(float *)((a4 + 0x24C)) = 425.0f;
        *(float *)((a4 + 0x250)) = 52.0f;
        *(float *)((a4 + 0x254)) = 115.575195f;
        *(unsigned int *)((a4 + 0x52C)) = 0x4000;
        FUN_0c02286c(a4, 0x28, a6, a7, 0.0f, 0.0749999955f);
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x2BC));
        *(unsigned int *)((a4 + 0x478)) = 0xC02CA10;
    }
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
        if ((int)(unsigned short)(*(short *)(((((*(int *)((a4 + 0x510))) * 0xE) + 0xC247998) + 0x2))) <= (int)0x1) {
            *(unsigned int *)(((0x4F0 + a4) + 0x0)) = 0x29;
        } else {
            if ((int)(*(int *)0xC246A3C) <= 0) {
                *(unsigned int *)((a4 + 0x490)) = ((*(int *)((a4 + 0x490))) + 0x1);
            } else {
                *(unsigned int *)((a4 + 0x490)) = 0x0;
            }
            if ((int)(*(int *)((a4 + 0x490))) > (int)0x258) {
                if ((*(int *)((a4 + 0x4F0))) == 39) {
                    *(unsigned int *)((a4 + 0x4F0)) = 0x28;
                }
            } else {
                *(unsigned int *)((a4 + 0x4F0)) = 0x27;
            }
        }
    }
    if (!(((float)(*(int *)((a4 + 0x308))) * 0.5f) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F4)) = 0x30;
    } else {
        if ((*(int *)((a4 + 0x4F4))) != 49) {
            *(unsigned int *)((a4 + 0x4FC)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x4F4)) = 0x31;
    }
    return 0x4F4;
}

int FUN_0c076b0c(int a4, int a5, int a6, int a7)
{
    int stk[18];
    register int t1;
    register int t4;
    register int t11;
    register int t16;
    register int t17;
    register int t18;
    register int t21;
    register float u23;
    register float u28;
    register float u35;
    register float u38;
    register float u43;
    register float u46;
    register int t47;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    FUN_0c0dc5a0();
    t4 = *(int *)((a4 + 0x40));
    *(unsigned short *)(((int)stk + 4)) = ((FUN_0c0d9dc0(((*(float *)((t1 + 0x254))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t1 + 0x25C))) - (*(float *)((a4 + 0x38)))))) - 16384);
    *(unsigned short *)((a4 + 0x70)) = ((*(short *)((a4 + 0x70))) + 0x100);
    t11 = *(short *)(((int)stk + 4));
    nlRotateAY((-(((int)((unsigned int)((int)((unsigned int)t11 + (unsigned int)0x0)) + ((((int)0x0 > (int)t11)) ? 1u : 0u))) >> 1)));
    t16 = 0x0;
    t17 = 0x0;
    t18 = t4;
    for (;;) {
        if ((int)t17 >= (int)(*(short *)((a4 + 0x3E)))) {
            break;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)((*(int *)((t18 + 0x0)))); }
        t21 = *(short *)((a4 + 0x70));
        *(unsigned int *)(((int)stk + 4)) = (short)t16;
        u23 = 1.0f;
        u23 = u23 + 0.099999994f * (FUN_0c0d9e90((t21 + (short)t16)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) * u23);
        u28 = 1.0f;
        u28 = u28 + 0.099999994f * (FUN_0c0da410(((*(short *)((a4 + 0x70))) + (*(int *)(((int)stk + 4))))));
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) * u28);
        FUN_0c0db4d0((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        u35 = (*(float *)((a4 + 0x54)));
        u35 = u35 + (*(float *)(((int)stk + 8))) * (*(float *)((a4 + 0x60)));
        u38 = u35;
        u38 = u38 + (*(float *)(((int)stk + 16))) * (*(float *)((a4 + 0x6C)));
        *(float *)(((*(int *)((t18 + 0x0))) + 0x18)) = u38;
        u43 = (*(float *)((a4 + 0x4C)));
        u43 = u43 + (*(float *)(((int)stk + 8))) * (*(float *)((a4 + 0x58)));
        u46 = u43;
        u46 = u46 + (*(float *)(((int)stk + 16))) * (*(float *)((a4 + 0x64)));
        *(float *)(((*(int *)((t18 + 0x0))) + 0x1C)) = u46;
        t47 = *(int *)((t18 + 0x0));
        t18 = (t18 + 0x4);
        *(unsigned int *)(((t47 + 0x1C) + 0x0)) = ((*(int *)(((t47 + 0x1C) + 0x0))) | 0x1);
        *(volatile short *)((a4 + 0x3E));
        t17 = (t17 + 0x1);
        t16 = (t16 + (FUN_0c0e5dc0()));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0c465c((*(short *)((a4 + 0x3C))));
    return (nlPopMatrix(0x1));
}

int FUN_0c02448c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_5 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_4 = *(int *)((v0_5 + 0x500));
    v0_0 = (v0_5);
    v0_5 = (v0_4);
    if (((int)v0_4 >= (int)0x6)) goto L_C0244A2;
    L_C024588:;
    v0_5 = FUN_0c022e60(v0_0, v0_1, v0_2, v0_3, f4);
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C0245E4;
    v0_4 = (FUN_0c034fbc(v0_0, 0x200, 0x1, 0x0)) == 0;
    if (v0_4) goto L_C0245DE;
    v0_4 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) > (int)(*(int *)((v0_0 + 0x3B0))))) goto L_C0245DE;
    v0_4 = (0x54C);
    if (((int)(*(int *)((v0_0 + 0x54C))) < (int)(*(int *)((v0_0 + 0x528))))) goto L_C0245E4;
    v0_5 = FUN_0c034314(v0_0, (*(int *)((((*(int *)((v0_0 + 0x510))) << 2) + 0xC246FF0))), ((int)stk + 4));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C0245E4;
    v0_4 = (0x3AC);
    if (((int)(*(int *)((v0_0 + 0x3AC))) <= (int)0x3C)) goto L_C0245E4;
    L_C0245DE:;
    v0_4 = ((FUN_0c02a19a(v0_0, v0_1, v0_2, v0_3)));
    L_C0245E4:;
    return v0_4;
    L_C0244A2:;
    if (((int)v0_5 > (int)0xD)) goto L_C024588;
    v0_1 = *(int *)((v0_0 + 0x2EC));
    v0_4 = (v0_1);
    if (((v0_1 & 12) != 0)) goto L_C0244B4;
    goto L_C0245E4;
    L_C0244B4:;
    v0_1 = *(int *)((v0_0 + 0x500));
    v0_4 = (v0_1);
    v0_5 = (0x8000);
    if ((v0_1 == 6)) goto L_C0244DE;
    if ((v0_4 == 7)) goto L_C0244E4;
    if ((v0_4 == 8)) goto L_C0244EA;
    if ((v0_4 == 9)) goto L_C024508;
    if ((v0_4 == 10)) goto L_C0244F0;
    if ((v0_4 == 11)) goto L_C0244F6;
    if ((v0_4 == 12)) goto L_C0244FC;
    if ((v0_4 == 13)) goto L_C024508;
    L_C024510:;
    v0_1 = *(int *)((v0_0 + 0x4F0));
    *(unsigned int *)((v0_0 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((v0_1 << 2) + v0_1) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((v0_0 + 0x2CC)) = 0x1;
    *(unsigned int *)((v0_0 + 0x2D4)) = 0x0;
    *(unsigned int *)((v0_0 + 0x20C)) = 0x1;
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x0;
    *(unsigned int *)((v0_0 + 0x3B0)) = 0xA;
    *(unsigned int *)((v0_0 + 0x4C8)) = 0x0;
    *(unsigned int *)((v0_0 + 0x500)) = 0x1;
    *(unsigned int *)((v0_0 + 0x4E0)) = 0x0;
    *(unsigned int *)((v0_0 + 0x4E4)) = 0x0;
    *(unsigned int *)((v0_0 + 0x4E8)) = 0x0;
    *(unsigned int *)((v0_0 + 0x4EC)) = 0x0;
    *(unsigned int *)((v0_0 + 0x4F8)) = 0x1;
    v0_4 = (0x4F8);
    goto L_C0245E4;
    L_C024508:;
    *(unsigned short *)((v0_0 + 0x6E)) = ((*(short *)((v0_0 + 0x6E))) + v0_5);
    goto L_C024510;
    L_C0244FC:;
    v0_4 = (0x6E);
    v0_1 = (0xA000);
    L_C024500:;
    *(unsigned short *)((v0_0 + v0_4)) = ((*(short *)((v0_0 + v0_4))) + v0_1);
    goto L_C024510;
    L_C0244F6:;
    v0_4 = (0x6E);
    v0_1 = (0xC000);
    goto L_C024500;
    L_C0244F0:;
    v0_4 = (0x6E);
    v0_1 = (0xE000);
    goto L_C024500;
    L_C0244EA:;
    v0_4 = (0x6E);
    v0_1 = (0x6000);
    goto L_C024500;
    L_C0244E4:;
    v0_4 = (0x6E);
    v0_1 = (0x4000);
    goto L_C024500;
    L_C0244DE:;
    v0_4 = (0x6E);
    v0_1 = (0x2000);
    goto L_C024500;
}

int FUN_0c0906e8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0x88));
    if (t0 != 0) {
        u0 = (-(*(float *)((a4 + 0x90))));
    } else {
        u0 = (*(float *)((a4 + 0x90)));
    }
    *(float *)((a4 + 0x94)) = u0;
    nlPushMatrix(0x0);
    t1 = *(int *)((a4 + 0xA0));
    if ((int)t1 > (int)0x9) {
        *(volatile int *)((a4 + 0xA0));
        *(unsigned int *)(((0x78 + a4) + 0x0)) = ((FUN_0c0e5dc0()) + 0x64);
        nlUnitMatrix();
        FUN_0c0dcc70((((*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0))) + (*(float *)((a4 + 0x94)))) + -0.699999988f), (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x4))), (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x8))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        *(volatile int *)((a4 + 0xA0));
        *(unsigned int *)(((0x78 + a4) + 0x0)) = ((FUN_0c0e5f1c()) + 0x64);
        nlUnitMatrix();
        u0 = 0.699999988f;
        u1 = ((*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0))) + (*(float *)((a4 + 0x94))));
        u2 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x4)));
        u3 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x8)));
    } else {
        *(unsigned int *)((a4 + 0x78)) = (t1 + 0x64);
        nlUnitMatrix();
        u0 = (*(float *)((a4 + 0x94)));
        u1 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x0)));
        u2 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x4)));
        u3 = (*(float *)((((((t0 << 1) + t0) << 2) + 0xC200A7C) + 0x8)));
    }
    FUN_0c0dcc70((u1 + u0), u2, u3);
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    nlPopMatrix(0x1);
    if (8.0f > (*(float *)((a4 + 0x90)))) {
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.799999952f);
        return 0x90;
    }
    t0 = *(int *)((a4 + 0xA4));
    *(unsigned int *)((a4 + 0xA4)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x6) {
        return FUN_0c0e19f2();
    }
    return 0xA4;
}

int FUN_0c0ac990(int a4)
{
    int stk[28];
    register int t1;
    register int t2;
    int t4;
    register int t6;
    register float u7;
    register int t8;
    register float u10;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t29;
    register int t45;

    FUN_0c0dc5a0();
    t1 = *(int *)((a4 + 0x50));
    t2 = FUN_0c0da2e0();
    nlRotateAY((0x17FF & (t2 + 0x1FFF)));
    t4 = FUN_0c0da2e0();
    nlRotateAX((0x17FF & t4));
    *(float *)((a4 + 0x40)) = 0.0f;
    *(float *)((a4 + 0x44)) = 0.0f;
    t6 = FUN_0c0da2e0();
    u7 = *(float *)((a4 + 0x4C));
    t8 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t8 + 0x200);
    u10 = ((float)t6 * u7);
    *(float *)((a4 + 0x48)) = (u10 * (FUN_0c0da410((t8 + 0x200))));
    FUN_0c0db470((a4 + 0x40), (a4 + 0x40));
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.277222186f);
    *(unsigned int *)(((int)stk + 4)) = 0x14;
    t13 = (a4 + 0x58);
    t14 = ((a4 + 0x58) + 0x24);
    for (;;) {
        t15 = *(int *)((t14 + 0x20));
        t16 = t14;
        t14 = (t14 + 0x24);
        t17 = t13;
        t13 = (t13 + 0x24);
        t18 = ((int (*)(int, int, int, int, float))(t15))(t17, t16, 0xC10E70C, (a4 + 0x40), 0.599999964f);
        t19 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t19 - 1);
        if ((t19 - 1) == 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x13;
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x58));
    nlRotateAX((*(int *)(((a4 + 0x58) + 0x18))));
    nlRotateAZ((*(int *)(((a4 + 0x58) + 0x1C))));
    nlRotateAY(t1);
    nlGetMatrix((((int)stk + 4) + 0x4));
    FUN_0c0c47ae(0xE76);
    t29 = (a4 + 0x58);
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0(t29);
        nlRotateAX((*(int *)((t29 + 0x18))));
        nlRotateAZ((*(int *)((t29 + 0x1C))));
        nlRotateAY(t1);
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        nlMultiMatrix((((int)stk + 4) + 0x4));
        FUN_0c0dcca0(0xC10E70C);
        FUN_0c0bdec2((a4 + 0x30));
        nlPopMatrix(0x1);
        nlGetMatrix((((int)stk + 4) + 0x4));
        FUN_0c0c47ae(0xE76);
        t45 = *(int *)(((int)stk + 4));
        t29 = (t29 + 0x24);
        *(unsigned int *)(((int)stk + 4)) = (t45 - 1);
        if ((t45 - 1) == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0314d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(int *)((a4 + 0x488));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    t2 = *(int *)((t1 + 0xBC));
    t3 = *(int *)((t1 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + (((t3 << 1) + t3) << 2))); }
    *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF787);
    u0 = nlLength((a4 + 0x30), (a4 + 0x60));
    if (!(150.0f > u0)) {
        *(unsigned int *)(((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460FC)) = 0x6;
        return 0xC2460FC;
    }
    if (((*(int *)((a4 + 0x49C))) == 1) && (t0 = *(int *)((a4 + 0x4D0)), t0 == 0)) {
        if ((*(int *)((t1 + 0x248))) != 0) {
            FUN_0c03145c(a4);
            *(unsigned int *)((t1 + 0x22C)) = 0x0;
            *(unsigned int *)((t1 + 0x248)) = 0x0;
        }
        if ((*(int *)((t1 + 0xD8))) != 0) {
            if ((*(int *)((t1 + 0xD8))) == 2) {
                FUN_0c090f70(t1);
            } else {
                FUN_0c0909fc(t1);
            }
            *(unsigned int *)((t1 + 0xD8)) = 0x0;
            *(unsigned int *)((t1 + 0x22C)) = 0x78;
            t0 = 0x1C4;
            if ((int)(*(int *)((t1 + 0x1C4))) >= 0) {
                *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | ((int)0x1 << (int)(*(int *)(((0x1C4 + t1) + 0x0)))));
                t0 = 0x1EC;
            }
            return t0;
        }
        if ((int)(*(int *)((t1 + 0x22C))) > 0) {
            t0 = *(int *)((t1 + 0x22C));
            *(unsigned int *)((t1 + 0x22C)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                return FUN_0c03145c(a4);
            }
            return 0x22C;
        }
        return FUN_0c01cdc2(t1);
    }
    *(unsigned int *)((t1 + 0x248)) = 0x1;
    return 0x248;
}

int FUN_0c079718(int a4)
{
    int stk[8];
    register int t15;
    register int t30;
    register int t54;
    register int t59;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x40));
    nlRotateAY((*(short *)((a4 + 0x5A))));
    nlRotateAX((*(short *)((a4 + 0x58))));
    nlRotateAZ((*(short *)((a4 + 0x5C))));
    FUN_0c0c465c((unsigned short)(*(short *)((a4 + 0x64))));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x34))) != 0) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
    }
    t15 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t15 - 1);
    if ((int)(t15 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x40), (a4 + 0x4C));
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.0277222153f);
    FUN_0c0dce80((a4 + 0x4C), (a4 + 0x4C), 0.979999959f);
    FUN_0c010128((a4 + 0x58), (a4 + 0x5E));
    if ((*(int *)((a4 + 0x3C))) != 0) {
        t30 = 0x44;
        if (0.0f > (*(float *)((a4 + 0x44)))) {
            t30 = (FUN_0c0e19f2());
        }
        t59 = t30;
    } else {
        if (0.0f > (*(float *)((a4 + 0x44)))) {
            *(float *)((a4 + 0x50)) = (-(*(float *)((a4 + 0x50))));
            FUN_0c0dce80(((int)stk + 4), (a4 + 0x4C), 10.0f);
            *(unsigned short *)((a4 + 0x5E)) = (int)(*(float *)(((int)stk + 4)));
            *(unsigned short *)((a4 + 0x60)) = (int)(*(float *)(((int)stk + 8)));
            *(unsigned short *)((a4 + 0x62)) = (int)(*(float *)(((int)stk + 12)));
            FUN_0c0dce80((a4 + 0x4C), (a4 + 0x4C), 0.959999979f);
        }
        t54 = 0x48;
        if ((*(float *)((a4 + 0x48))) > -180.0f) {
            *(float *)((a4 + 0x54)) = (-(*(float *)((a4 + 0x54))));
            FUN_0c0dce80(((int)stk + 4), (a4 + 0x4C), 20.0f);
            *(unsigned short *)((a4 + 0x5E)) = (int)(*(float *)(((int)stk + 4)));
            *(unsigned short *)((a4 + 0x60)) = (int)(*(float *)(((int)stk + 8)));
            *(unsigned short *)((a4 + 0x62)) = (int)(*(float *)(((int)stk + 12)));
            t54 = (FUN_0c0dce80((a4 + 0x4C), (a4 + 0x4C), 0.959999979f));
        }
        t59 = t54;
    }
    return t59;
}

int FUN_0c0921cc(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t29;
    register int t3;
    register int t4;
    register int t5;

    if (((*(int *)((0xC247604 + ((*(int *)(((*(int *)((a4 + 0x8C))) + 0xBC))) << 2)))) == 1) && ((t3 = *(int *)((a4 + 0x88)), t4 = *(int *)((0xC247030 + (t3 << 2))), t4 == 4) && (t5 = *(int *)0xC23ED5C, (t5 & 0x100A4) == 0))) {
    } else {
        FUN_0c0cc3f8(0xB20A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0x88))), 0x1A);
        FUN_0c0e19f2();
    }
    if (((*(int *)0xC23ED88) & 0x10000) != 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFEFFFF);
        *(unsigned int *)(((0xA0 + a4) + 0x0)) = 0x1;
        *(unsigned int *)((a4 + 0xA4)) = 0x6;
    }
    if ((*(int *)((a4 + 0xA0))) != 0) {
        if ((int)(*(int *)((a4 + 0xAC))) < (int)0x1800) {
            *(unsigned int *)((a4 + 0xAC)) = ((*(int *)((a4 + 0xAC))) + 0x300);
        }
        t29 = *(int *)((a4 + 0xA4));
        *(unsigned int *)((a4 + 0xA4)) = (t29 - 1);
        if ((int)(t29 - 1) <= 0) {
            *(unsigned int *)((a4 + 0xA0)) = 0x0;
        }
    } else {
        if ((int)(*(int *)((a4 + 0xAC))) > 0) {
            *(unsigned int *)((a4 + 0xAC)) = ((*(int *)((a4 + 0xAC))) - 96);
        }
    }
    *(unsigned int *)((a4 + 0xA8)) = ((*(int *)((a4 + 0xA8))) + (*(int *)(((0xAC + a4) + 0x0))));
    if ((*(int *)0xC23EDB4) == 0) {
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((((*(int *)((a4 + 0x88))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
        FUN_0c0dcc70((*(float *)0xC092398), (*(float *)0xC092394), (*(float *)0xC092390));
        nlRotateAZ((*(int *)((a4 + 0xA8))));
        FUN_0c0c9d1c((*(int *)((a4 + 0x78))));
        FUN_0c0c47ae((*(int *)((a4 + 0x78))));
        return nlPopMatrix(0x1);
    }
    return 0xC23EDB4;
}

int FUN_0c0339a0(int a4)
{
    int stk[11];
    register int t0;
    register int t5;
    register int t16;
    register int t10;
    register int t14;
    register int t43;
    register int t37;
    register int t31;
    register int t36;
    register int t33;
    register int t34;
    register int t57;
    register int t51;
    register int t56;
    register int t53;
    register int t54;
    register int t69;
    register int t21;
    register int t63;
    register int t32;
    register int t52;

    t0 = *(int *)((a4 + 0x488));
    if ((*(int *)((t0 + 0xD8))) != 0) {
        *(unsigned int *)((a4 + 0x510)) = (*(int *)((t0 + 0x1C4)));
        *(unsigned int *)((a4 + 0xE4)) = (*(int *)((t0 + 0x1C4)));
        t5 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
        FUN_0c03442c(a4, t5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        if ((*(int *)((t0 + 0xD8))) != 2) {
            *(unsigned int *)((t0 + 0xD8)) = 0x0;
            FUN_0c0909fc(t0);
            t16 = 0x1;
            if ((*(int *)(((int)stk + 12))) == 0) {
                t10 = FUN_0c034b1c(a4, t5);
                t14 = 0x3;
                if ((((int)((unsigned int)((int)((unsigned int)t10 + (unsigned int)0x0)) + ((((int)0x0 > (int)t10)) ? 1u : 0u))) >> 1) == 0) {
                    t14 = 0x2;
                }
                t16 = t14;
            }
            t21 = t16;
        } else {
            *(unsigned int *)((t0 + 0xD8)) = 0x0;
            FUN_0c090f70(t0);
            t21 = 0x1;
        }
        t69 = t21;
    } else {
        if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 12.0f))) {
            t43 = 0x1;
            if (!(-0.0272199996f > (*(float *)((a4 + 0x64))))) {
                t37 = 0x1;
                if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390)))) {
                    t31 = FUN_0c02a416(a4);
                    t36 = 0x1;
                    if ((t31 == 0) && (t32 = *(int *)((a4 + 0x49C)), t32 != 3)) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
                        t33 = *(int *)((t0 + 0xBC));
                        t34 = *(int *)((t0 + 0x1E8));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t33 << 1) + t33) << 2) << 2) << 2) + 0xC23F268) + (((t34 << 1) + t34) << 2))); }
                        FUN_0c01cdc2(t0);
                        t36 = 0x0;
                    }
                    t37 = t36;
                }
                t43 = t37;
            }
            t63 = t43;
        } else {
            t57 = 0x1;
            if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390)))) {
                t51 = FUN_0c02a416(a4);
                t56 = 0x1;
                if ((t51 == 0) && (t52 = *(int *)((a4 + 0x49C)), t52 != 3)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
                    t53 = *(int *)((t0 + 0xBC));
                    t54 = *(int *)((t0 + 0x1E8));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t53 << 1) + t53) << 2) << 2) << 2) + 0xC23F268) + (((t54 << 1) + t54) << 2))); }
                    FUN_0c01cdc2(t0);
                    t56 = 0x0;
                }
                t57 = t56;
            }
            t63 = t57;
        }
        t69 = t63;
    }
    return t69;
}

int FUN_0c05a15c(int a4, int a5)
{
    int stk[15];
    register int t1;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;

    *(unsigned int *)(((int)stk + 8)) = 0x3C;
    *(unsigned int *)(((int)stk + 4)) = 0x1E;
    t1 = FUN_0c0e19aa(0xC059F6C, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((t1 + 0x60)) = 0x0;
    *(unsigned short *)(((0x62 + t1) + 0x0)) = (*(short *)((a5 + 0xC)));
    *(unsigned short *)((t1 + 0x64)) = 0x0;
    *(unsigned int *)(((t1 + 0x68) + 0x0)) = (*(short *)((a4 + 0x6C)));
    *(unsigned int *)((t1 + 0x6C)) = (*(short *)((a4 + 0x6E)));
    *(unsigned int *)((t1 + 0x70)) = (*(short *)((a4 + 0x70)));
    *(float *)((t1 + 0x74)) = (*(float *)((a4 + 0x25C)));
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (*(short *)((a5 + 0xE)));
    *(unsigned int *)((t1 + 0x80)) = 0x0;
    *(unsigned int *)((t1 + 0xA0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t1 + 0xA4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((0x84 + t1) + 0x0)) = ((*(short *)((a5 + 0xE))) & 0x1);
    *(float *)((t1 + 0x94)) = 10.0f;
    *(unsigned int *)((t1 + 0xA8)) = 0x0;
    *(unsigned int *)((t1 + 0xAC)) = 0xE6;
    u11 = *(float *)((a5 + 0x4));
    u12 = *(float *)((a5 + 0x0));
    u13 = *(float *)((a5 + 0x8));
    u14 = (u11 * u11);
    u14 = u14 + u12 * u12;
    u15 = u14;
    u15 = u15 + u13 * u13;
    *(unsigned int *)(((int)stk + 4)) = 0x888;
    *(float *)((t1 + 0x48)) = ((1.0f * (*(float *)((a5 + 0x0)))) / _builtin_sqrtf(u15));
    *(float *)((t1 + 0x4C)) = ((1.0f * (*(float *)((a5 + 0x4)))) / _builtin_sqrtf(u15));
    *(float *)((t1 + 0x50)) = ((1.0f * (*(float *)((a5 + 0x8)))) / _builtin_sqrtf(u15));
    *(float *)((t1 + 0x90)) = 1.0f;
    *(float *)(((int)stk + 24)) = (-(*(float *)((t1 + 0x50))));
    *(float *)(((int)stk + 28)) = (*(float *)((t1 + 0x4C)));
    *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x48)));
    FUN_0c0dd0a0((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((t1 + 0x48) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((t1 + 0x4C) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((t1 + 0x50) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(unsigned int *)((t1 + 0x98)) = 0x0;
    *(unsigned int *)((t1 + 0x9C)) = (*(int *)(((int)stk + 4)));
    return 0x9C;
}

int FUN_0c0660c0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t51;
    int t4;
    register int t55;
    register int t63;

    t0 = *(int *)((a4 + 0x24C));
    if (t0 != 0) {
        t51 = t0;
        if (t0 != 1) {
        } else {
            t4 = *(int *)0xC2497B0;
            if ((0x40000 & t4) != 0) {
                if ((t4 & 0x400000) != 0) {
                    *(unsigned short *)((a4 + 0x3CE)) = ((*(short *)((a4 + 0x3CE))) - 0x100);
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    *(unsigned short *)((a4 + 0x3CE)) = ((*(short *)((a4 + 0x3CE))) + 0x100);
                }
            } else {
                if ((t4 & 0x400000) != 0) {
                    *(float *)((a4 + 0x254)) = ((*(float *)((a4 + 0x254))) - 0.099999994f);
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    *(float *)((a4 + 0x254)) = ((*(float *)((a4 + 0x254))) + 0.099999994f);
                }
                if (((*(int *)0xC2497B0) & 0x100000) != 0) {
                    *(float *)((a4 + 0x258)) = ((*(float *)((a4 + 0x258))) + 0.099999994f);
                }
                if (((*(int *)0xC2497B0) & 0x200000) != 0) {
                    *(float *)((a4 + 0x258)) = ((*(float *)((a4 + 0x258))) - 0.099999994f);
                }
            }
            FUN_0c0db0a0(0x3, 0x32);
            nlPrintf(0xC0FA22C, (*(float *)((a4 + 0x254))));
            nlPrintf(0xC0FA23C, (*(float *)((a4 + 0x258))));
            nlPrintf(0xC0FA24C, (*(float *)((a4 + 0x25C))));
            t51 = (nlPrintf(0xC0FA25C, ((*(short *)((a4 + 0x3CE))))));
        }
        t63 = t51;
    } else {
        t55 = *(int *)((a4 + 0x420));
        if (t55 != 0) {
            if (t55 != 1) {
            } else {
                *(float *)((a4 + 0x254)) = -60.0f;
                *(float *)((a4 + 0x258)) = 20.0f;
                *(unsigned short *)((a4 + 0x3CE)) = 0xFFFFC000;
            }
        } else {
            *(float *)((a4 + 0x254)) = -40.0f;
            *(float *)((a4 + 0x258)) = 20.0f;
            *(unsigned short *)((a4 + 0x3CE)) = 0xFFFFC000;
            *(float *)((a4 + 0x254)) = -60.0f;
            *(float *)((a4 + 0x258)) = 20.0f;
            *(unsigned short *)((a4 + 0x3CE)) = 0xFFFFC000;
        }
        *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
        t63 = 0x24C;
    }
    return t63;
}

int FUN_0c048dd4(int a4)
{
    register int t0;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    } else {
        if ((int)(*(int *)((a4 + 0x4D4))) <= 0) {
            if ((int)(*(int *)((a4 + 0x54C))) <= 0) {
                *(unsigned int *)((a4 + 0x54C)) = 0x1;
            }
            t0 = FUN_0c035b26(a4);
            if (t0 != 0) {
                t0 = FUN_0c035ce4(a4);
                if (t0 != 0) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                } else {
                    t0 = *(int *)((a4 + 0x538));
                    if ((t0 != 1) && ((t0 != 3) && ((t0 != 5) && (t0 != 10)))) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x524)) = 0x0;
                        t0 = FUN_0c0236ce(a4);
                        if (t0 != 0) {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        }
                    }
                }
            } else {
                t0 = *(int *)((a4 + 0x538));
                if ((t0 != 1) && ((t0 != 3) && ((t0 != 5) && (t0 != 10)))) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                } else {
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    t0 = FUN_0c0236ce(a4);
                    if (t0 != 0) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    }
                }
            }
        } else {
            t0 = FUN_0c03593a(a4);
            if (t0 != 0) {
                t0 = FUN_0c02a35a(a4);
                if ((t0 != 0) && (t0 != 1)) {
                    *(unsigned int *)((a4 + 0x538)) = 0x2;
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    t0 = FUN_0c0236ce(a4);
                    if (t0 != 0) {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    }
                }
            } else {
                *(unsigned int *)((a4 + 0x538)) = 0x1;
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
        }
    }
    return 0x4F8;
}

int FUN_0c0ab616(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register float u32;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)0xC24FA38;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        t2 = *(int *)((a4 + 0x38));
                        *(unsigned int *)((a4 + 0x38)) = (t2 + 0x111);
                        *(float *)((a4 + 0x3C)) = ((FUN_0c0da410((t2 + 0x111))) * (*(float *)0xC0AB7C8));
                        if ((int)(*(int *)((a4 + 0x38))) >= (int)0x3FFF) {
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            FUN_0c0cc3f8(0xD1FA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        }
                    }
                } else {
                    if (t1 == 0x1E0) {
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                        *(unsigned int *)((a4 + 0x38)) = 0x0;
                        FUN_0c0cc3f8(0xC1FA9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                }
            } else {
                u32 = *(float *)((a4 + 0x3C));
                *(float *)((a4 + 0x3C)) = (u32 + 0.00999999978f);
                if ((1.0f + 1.0f) > (u32 + 0.00999999978f)) {
                } else {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    FUN_0c0cc3f8(0xD1FA9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((FUN_0c0da2e0()) & 0x2FF));
            *(float *)((a4 + 0x3C)) = ((FUN_0c0da410(((*(int *)((a4 + 0x38))) & 0x7FFF))) * 1.0f);
            if ((*(int *)0xC24FA38) == 0xEC) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                *(float *)((a4 + 0x3C)) = 0.0f;
                FUN_0c0cc3f8(0xC1FA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
    } else {
        if (t1 == 120) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)0xC10E0D4), ((*(float *)0xC10E0D8) + (*(float *)((a4 + 0x3C)))), (*(float *)0xC10E0DC));
    FUN_0c0c465c(0xD7B);
    return nlPopMatrix(0x1);
}

int FUN_0c01bf8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c01993e))(a4, a5, a6, a7);
    }
    FUN_0c04fb9e();
    FUN_0c0c72b8(0xC0F53AC, 230.0f, 215.0f);
    t0 = *(int *)0xC247030;
    if (t0 != 4) {
        t1 = 0x0;
        if ((t0 != 3) && (t0 != 5)) {
            
            t1 = 0x1;
        }
        t0 = t1;
    } else {
        t1 = *(int *)0xC246FF0;
        t2 = 0x0;
        if (((*(int *)((t1 + 0x20C))) & 0x1) != 0) {
            t2 = 0x1;
        }
        t0 = t2;
        t2 = t1;
    }
    t1 = *(int *)0xC247034;
    if (t1 != 4) {
        t3 = t0;
        if ((t1 != 3) && (t1 != 5)) {
            
            t3 = (t0 + 0x2);
        }
        t1 = t3;
        t3 = 0xC246FF0;
    } else {
        t4 = *(int *)0xC246FF4;
        t5 = t0;
        if (((*(int *)((t4 + 0x20C))) & 0x1) != 0) {
            t5 = (t0 + 0x2);
        }
        t1 = t5;
        t3 = t4;
    }
    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 - 1);
    if (((int)(t0 - 1) < 0) && (t1 == 3)) {
        t0 = FUN_0c04fe0c();
        if (t0 != 0) {
            t0 = *(int *)((a4 + 0x50));
            *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                t0 = ((int (*)(void))(FUN_0c057fd4))();
                *(unsigned int *)0xC23ED9C = 0x18;
                *(unsigned int *)((a4 + 0x50)) = 0x1A4;
                FUN_0c04fca2();
                FUN_0c0b2b18();
                *(unsigned int *)0xC23EDB0 = 0x1;
                t0 = FUN_0c0e1830(0xC08214C, 0x54);
                FUN_0c0e19d0(t0);
                *(unsigned int *)((t0 + 0x30)) = 0x2;
                *(unsigned int *)((t0 + 0x34)) = 0x9;
                *(unsigned char *)((t0 + 0x3B)) = 0xA;
                *(unsigned short *)((t0 + 0x3C)) = 0x1;
                FUN_0c085050(0x78, 0x12C, 0x1);
                return FUN_0c0cc832();
            }
            return ((int (*)(int))(FUN_0c01993e))(a4);
        }
        t0 = ((int (*)(void))(FUN_0c057fd4))();
        *(unsigned int *)0xC23ED9C = 0x18;
        *(unsigned int *)((a4 + 0x50)) = 0x1A4;
        FUN_0c04fca2();
        FUN_0c0b2b18();
        *(unsigned int *)0xC23EDB0 = 0x1;
        t0 = FUN_0c0e1830(0xC08214C, 0x54);
        FUN_0c0e19d0(t0);
        *(unsigned int *)((t0 + 0x30)) = 0x2;
        *(unsigned int *)((t0 + 0x34)) = 0x9;
        *(unsigned char *)((t0 + 0x3B)) = 0xA;
        *(unsigned short *)((t0 + 0x3C)) = 0x1;
        FUN_0c085050(0x78, 0x12C, 0x1);
        return FUN_0c0cc832();
    }
    t0 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t0 = ((int (*)(int, int))(FUN_0c057fd4))(t3, t2);
        *(unsigned int *)0xC23ED9C = 0x18;
        *(unsigned int *)((a4 + 0x50)) = 0x1A4;
        FUN_0c04fca2();
        FUN_0c0b2b18();
        *(unsigned int *)0xC23EDB0 = 0x1;
        t0 = FUN_0c0e1830(0xC08214C, 0x54);
        FUN_0c0e19d0(t0);
        *(unsigned int *)((t0 + 0x30)) = 0x2;
        *(unsigned int *)((t0 + 0x34)) = 0x9;
        *(unsigned char *)((t0 + 0x3B)) = 0xA;
        *(unsigned short *)((t0 + 0x3C)) = 0x1;
        FUN_0c085050(0x78, 0x12C, 0x1);
        return FUN_0c0cc832();
    }
    return ((int (*)(int, int))(FUN_0c01993e))(a4, t2);
}

int FUN_0c06d2c8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(int *)0xC23ED9C;
    t1 = 0xE;
    if (((int)t0 < (int)0xC) || ((int)t0 > (int)0xE)) {
        if ((int)t0 <= (int)0x9) {
            FUN_0c0685a4(t0, a5, a6, a7);
        }
        t0 = *(int *)((a4 + 0x80));
        if (t0 != 0) {
            t2 = 0;
            if (t0 != 1) {
                t3 = 0;
                if (t0 != 2) {
                    t3 = (0);
                } else {
                    *(unsigned int *)((a4 + 0x6C)) = (int)((float)(*(int *)((a4 + 0x6C))) + (*(float *)((a4 + 0x4C))));
                    if ((int)(*(int *)((a4 + 0x6C))) < 0) {
                        *(unsigned int *)(((a4 + 0x6C) + 0x0)) = (int)(0.0f - ((float)(*(int *)(((a4 + 0x6C) + 0x0))) * 0.049999997f));
                        u0 = (*(float *)((a4 + 0x4C)));
                        u0 *= -0.049999997f;
                        *(float *)((a4 + 0x4C)) = u0;
                    } else {
                        if ((int)(*(int *)((a4 + 0x6C))) > (int)0xA000) {
                            *(unsigned int *)(((a4 + 0x6C) + 0x0)) = (int)((*(float *)0xC06D45C) - ((float)((*(int *)(((a4 + 0x6C) + 0x0))) - 40960) * 0.049999997f));
                            u0 = (*(float *)((a4 + 0x4C)));
                            u0 *= -0.049999997f;
                            *(float *)((a4 + 0x4C)) = u0;
                        }
                    }
                    u0 = *(float *)((a4 + 0x4C));
                    *(float *)((a4 + 0x4C)) = (u0 * 0.98999995f);
                    if (16.0f > _builtin_fabsf((u0 * 0.98999995f))) {
                        *(unsigned int *)((a4 + 0x80)) = 0x1;
                    }
                    _builtin_fabsf((u0 * 0.98999995f));
                    u1 = 0.98999995f;
                    t3 = ((16.0f > _builtin_fabsf((u0 * 0.98999995f))));
                }
                u0 = u1;
                t2 = (t3);
            } else {
                u1 = *(float *)((a4 + 0x4C));
                if (_builtin_fabsf(u1) > 16.0f) {
                    *(unsigned int *)((a4 + 0x80)) = 0x2;
                }
                u0 = _builtin_fabsf(u1);
                t2 = ((_builtin_fabsf(u1) > 16.0f));
            }
        } else {
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY((*(int *)((a4 + 0x6C))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        t0 = *(int *)0xC23ED88;
        t2 = (nlPopMatrix(0x1));
        if ((t0 & 0x800) != 0) {
            *(float *)((a4 + 0x4C)) = (*(float *)0xC06D480);
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFF7FF);
            t2 = 0x4C;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0b2cda(int a4)
{
    register int t0;
    register float u0;

    if ((*(int *)0xC23ED9C) != 24) {
        FUN_0c0bb134(a4);
        FUN_0c0855f4(a4);
        FUN_0c0e19f2();
    }
    t0 = *(int *)((a4 + 0x288));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t0 = *(int *)((a4 + 0x3B0));
                *(unsigned int *)((a4 + 0x3B0)) = (t0 - 0x100);
                u0 = (*(float *)((a4 + 0x60)));
                u0 = u0 + 1.0f * (FUN_0c0da410((t0 - 0x100)));
                *(float *)((a4 + 0x34)) = u0;
            }
        } else {
            t0 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t0 - 68);
            u0 = (*(float *)((a4 + 0x60)));
            u0 = u0 + (*(float *)((a4 + 0x64))) * (FUN_0c0da410((t0 - 68)));
            *(float *)((a4 + 0x34)) = u0;
            t0 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                *(float *)((a4 + 0x64)) = (*(float *)((a4 + 0x34)));
                *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
            }
            if ((*(int *)((a4 + 0x3AC))) == 120) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x12B;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x127;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        t0 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u0 = 5.0f;
        if ((t0 != 1) && ((t0 != 2) && ((t0 != 5) && ((t0 != 22) && ((t0 != 24) && ((t0 != 25) && ((t0 != 27) && ((t0 != 29) && ((t0 != 38) && ((t0 != 40) && (t0 != 42))))))))))) {
            u0 = 22.0f;
        }
        *(float *)((a4 + 0x64)) = u0;
        *(float *)((a4 + 0x60)) = ((*(float *)((a4 + 0x34))) - u0);
        *(unsigned int *)((a4 + 0x3B0)) = 0x4000;
        *(unsigned int *)((a4 + 0x3AC)) = 0xF0;
        *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
        t0 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t0 - 68);
        u0 = (*(float *)((a4 + 0x60)));
        u0 = u0 + (*(float *)((a4 + 0x64))) * (FUN_0c0da410((t0 - 68)));
        *(float *)((a4 + 0x34)) = u0;
        t0 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(float *)((a4 + 0x64)) = (*(float *)((a4 + 0x34)));
            *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
        }
        if ((*(int *)((a4 + 0x3AC))) == 120) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x12B;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        }
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}
