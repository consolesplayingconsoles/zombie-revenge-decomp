/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
int FUN_0c01db0e(int, int);
int FUN_0c01e7e8(int, int, int);
int FUN_0c01f18e(int);
float FUN_0c01f1b8(int, int);
int FUN_0c01fd30(int);
int FUN_0c022838(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02f39e(int);
int FUN_0c033c8c(int, int, int, float);
int FUN_0c034134(int, float);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c0346ca(int);
int FUN_0c034bac(int);
int FUN_0c034c26(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03542e(int);
int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c037088(void);
int FUN_0c03720a(int);
int FUN_0c037242(int);
int FUN_0c03f4bc(int);
int FUN_0c03f63c(int, int);
int FUN_0c0412b8(int);
int FUN_0c041dd0(int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int);
int FUN_0c04638a(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c049c0a(int);
int FUN_0c04a058(int);
int FUN_0c0519f0(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0553b6(int, int, int, Stk3);
int FUN_0c056016(int);
int FUN_0c056098(int);
int FUN_0c056118(int, int, int, int);
int FUN_0c056588(int);
int FUN_0c0853d4(int, float);
int FUN_0c085704(int);
int FUN_0c0a4c02(int, int, Stk2);
int FUN_0c0a4c2a(int, int, Stk2);
int FUN_0c0bb1a8(int, int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0d8960(int);
int FUN_0c0d9ca0(int, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int direntry(int, int);
int get_vmstime(int, int);
int kmSetVertex(int, int, int, int);
int kmSetVertexRenderState(int);
int kmStartVertexStrip(int);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int set_file_info(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c020750(int a4, int a5);
int FUN_0c055c9c(int a4);
int FUN_0c086778(int a4, int a5, int a6);
int FUN_0c08e504(int a4);
int FUN_0c0b3440(int a4);
int FUN_0c02f4b8(int a4, int a5);
int FUN_0c03f884(int a4);
int FUN_0c047e9c(int a4, int a5, int a6, int a7);
int FUN_0c037fd4(int a4);
int FUN_0c0d7d50(int a4, int a5, int a6);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
float FUN_0c016ac0(void);
int FUN_0c06e0c4(int a4);
float FUN_0c0a46f4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0141d4(int a4, int a5);
int FUN_0c035f64(int a4, int a5, int a6);
int FUN_0c03611c(int a4);
void FUN_0c033b04(int a4);
int FUN_0c047360(int a4, int a5, int a6, int a7);
int FUN_0c0567c0(int a4);
float FUN_0c0b719e(int a4, int a5);
int kmiExecuteDMAChain(void);
int FUN_0c041370(int a4);
int FUN_0c0a5cc6(int a4, int a5, int a6);

int FUN_0c020750(int a4, int a5)
{
    int t0;

    t0 = FUN_0c0e1830(0xC020540, 0x5EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = a4;
    *(unsigned int *)((t0 + 0x48C)) = (*(int *)((a5 + 0x0)));
    *(unsigned int *)((t0 + 0x4BC)) = (*(int *)((a5 + 0x24)));
    *(unsigned int *)((t0 + 0x4C0)) = (*(int *)((a5 + 0x28)));
    *(unsigned int *)((t0 + 0xC8)) = (*(int *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x4)));
    *(unsigned int *)(((0x304 + t0) + 0x0)) = (unsigned short)(*(short *)((a5 + 0xE)));
    *(unsigned int *)(((0x308 + t0) + 0x0)) = (unsigned short)(*(short *)((a5 + 0xE)));
    *(unsigned int *)((t0 + 0xC0)) = (*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((a5 + 0x10)); }
    *(unsigned short *)((t0 + 0x6E)) = (*(int *)((a5 + 0x1C)));
    *(unsigned int *)((t0 + 0x554)) = (*(int *)((a5 + 0x8)));
    *(float *)((t0 + 0x274)) = ((float)(unsigned short)(*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x278)) = ((float)(unsigned short)(*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x27C)) = ((float)(unsigned short)(*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x284)) = ((float)(unsigned short)(*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)(((0x45C + t0) + 0x8)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x4)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x0)) = 1.0f;
    *(unsigned int *)((t0 + 0x4)) = 0xC01FDDC;
    *(unsigned int *)(((0x4F0 + t0) + 0x0)) = (unsigned short)(*(short *)((((((*(int *)((a5 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x8)));
    *(unsigned int *)((t0 + 0x4A8)) = (unsigned short)(*(short *)((a5 + 0x20)));
    *(unsigned int *)((t0 + 0x4AC)) = (unsigned short)(*(short *)((a5 + 0x22)));
    *(unsigned int *)((t0 + 0x47C)) = (*(int *)((a5 + 0x4)));
    FUN_0c03542e(t0);
    *(unsigned int *)((t0 + 0x5C4)) = (*(int *)(((0xC1F958C + (((*(int *)((a5 + 0x0))) << 2) << 2)) + 0xC)));
    *(unsigned int *)(((0xC246FF0 + (a4 << 2)) + 0x0)) = t0;
    *(unsigned int *)((((a4 << 2) + 0xC246FF0) + 0x0)) = t0;
    FUN_0c01fd30(t0);
    FUN_0c049c0a(t0);
    return ((int (*)(int))(0xC0CBAF4))(t0);
}

int FUN_0c055c9c(int a4)
{
    int t1;
    int t2;
    int t3;
    int t17;
    int t31;
    int t45;

    t1 = *(int *)((((*(int *)((a4 + 0x33C))) << 2) + 0xC247634));
    t2 = *(int *)((a4 + 0x210));
    if (t2 != 88) {
        if (t2 != 89) {
            if (t2 != 90) {
                if (t2 != 91) {
                    if (t2 != 92) {
                    } else {
                        t3 = *(int *)((a4 + 0xBC));
                        *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
                        *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
                        *(float *)((a4 + 0x1D4)) = 20.0f;
                        FUN_0c056118(a4, 0x3, (((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0x3C), 0x0);
                        FUN_0c0bb1a8(a4, 0x1);
                        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x0)));
                        *(unsigned int *)(((0x334 + a4) + 0x0)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x4)));
                    }
                } else {
                    t17 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
                    *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
                    *(float *)((a4 + 0x1D4)) = 20.0f;
                    FUN_0c056118(a4, 0x3, (((((((t17 << 1) + t17) << 2) << 2) << 2) + 0xC23F268) + 0x3C), 0x0);
                    FUN_0c0bb1a8(a4, 0x1);
                    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)0xC1FED04);
                    *(unsigned int *)(((0x334 + a4) + 0x0)) = (unsigned short)(*(short *)0xC1FED08);
                }
            } else {
                t31 = *(int *)((a4 + 0xBC));
                *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
                *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
                *(float *)((a4 + 0x1D4)) = 20.0f;
                FUN_0c056118(a4, 0x3, (((((((t31 << 1) + t31) << 2) << 2) << 2) + 0xC23F268) + 0x24), 0x1);
                FUN_0c056016(a4);
                *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x0)));
                *(unsigned int *)(((0x334 + a4) + 0x0)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x4)));
            }
        } else {
            t45 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((a4 + 0x1D8)) = 0x2000;
            *(unsigned int *)((a4 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
            *(float *)((a4 + 0x1D4)) = 20.0f;
            FUN_0c056118(a4, 0x3, (((((((t45 << 1) + t45) << 2) << 2) << 2) + 0xC23F268) + 0x24), 0x1);
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((0xC1FEA3C + ((t1 << 2) << 1)) + 0x0)));
            *(unsigned int *)(((0x334 + a4) + 0x0)) = (unsigned short)(*(short *)(((0xC1FEA3C + ((t1 << 2) << 1)) + 0x4)));
        }
    } else {
        FUN_0c056016(a4);
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x0)));
        *(unsigned int *)(((0x334 + a4) + 0x0)) = (unsigned short)(*(short *)(((0xC1FEC54 + ((t1 << 2) << 1)) + 0x4)));
    }
    return FUN_0c0519f0(a4);
}

int FUN_0c086778(int a4, int a5, int a6)
{
    int t12;
    int t13;
    int t18;
    int t22;
    int t28;
    int t29;
    int t34;
    int t36;
    int t42;
    int t48;
    int t49;
    int t54;
    int t56;
    int t62;
    int t68;
    int t69;
    int t74;
    int t76;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C086778:;
    R0 = (R6);
    R13 = (0xFFFF8000);
    R14 = (0x4000);
    R7 = (0x8000);
    if ((R6 == 0)) goto L_C08679A;
    goto L_C08678E;
    L_C08678E:;
    if ((R0 == 1)) goto L_C0867E6;
    goto L_C086792;
    L_C086792:;
    if ((R0 == 2)) goto L_C086840;
    goto L_C086796;
    L_C086796:;
    goto L_C0868CC;
    L_C0868CC:;
    return R0;
    L_C086840:;
    R12 = (R5);
    R6 = (R4);
    if (((int)(short)(((*(short *)((R4 + 0x0))) - (*(short *)((R5 + 0x0)))) + R14) >= 0)) goto L_C086880;
    goto L_C086852;
    L_C086852:;
    t12 = *(short *)((R12 + 0x4));
    t13 = *(short *)((R6 + 0x4));
    R0 = ((short)((t13 - t12) + R14));
    if (((int)(short)((t13 - t12) + R14) >= 0)) goto L_C086880;
    goto L_C086862;
    L_C086862:;
    *(unsigned short *)((R6 + 0x0)) = ((*(short *)((R6 + 0x0))) + R7);
    *(unsigned int *)(((int)stk + 4)) = (R6 + 0x2);
    *(unsigned short *)(((R6 + 0x2) + 0x0)) = (R13 - (*(short *)(((R6 + 0x2) + 0x0))));
    t18 = *(short *)((R6 + 0x4));
    *(unsigned short *)((R6 + 0x4)) = (t18 + R7);
    R0 = ((t18 + R7));
    goto L_C086880;
    L_C086880:;
    t22 = (R5 + 0x36);
    R12 = ((R4 + 0x36));
    R5 = (0x7);
    R6 = t22;
    goto L_C08688A;
    L_C08688A:;
    R1 = (R6);
    R4 = (R12);
    if (((int)(short)(((*(short *)((R12 + 0x0))) - (*(short *)((R6 + 0x0)))) + R14) >= 0)) goto L_C0868C4;
    goto L_C08689C;
    L_C08689C:;
    t28 = *(short *)((R1 + 0x4));
    t29 = *(short *)((R4 + 0x4));
    R0 = ((short)((t29 - t28) + R14));
    if (((int)(short)((t29 - t28) + R14) >= 0)) goto L_C0868C4;
    goto L_C0868AC;
    L_C0868AC:;
    *(unsigned short *)((R4 + 0x0)) = ((*(short *)((R4 + 0x0))) + R7);
    *(unsigned short *)(((R4 + 0x2) + 0x0)) = (R13 - (*(short *)(((R4 + 0x2) + 0x0))));
    t34 = *(short *)((R4 + 0x4));
    *(unsigned short *)((R4 + 0x4)) = (t34 + R7);
    R0 = ((t34 + R7));
    goto L_C0868C4;
    L_C0868C4:;
    t36 = (R5 - 0x1) != 0;
    R12 = ((R12 + 0x6));
    R5 = ((R5 - 0x1));
    R6 = ((R6 + 0x6));
    if (t36) goto L_C08688A;
    goto L_C0868CC;
    L_C0867E6:;
    t42 = (R5 + 0x6);
    R12 = ((R4 + 0x6));
    R5 = (0x8);
    R6 = t42;
    goto L_C0867F0;
    L_C0867F0:;
    R1 = (R6);
    R4 = (R12);
    if (((int)(short)(((*(short *)((R12 + 0x0))) - (*(short *)((R6 + 0x0)))) + R14) >= 0)) goto L_C08682A;
    goto L_C086802;
    L_C086802:;
    t48 = *(short *)((R1 + 0x4));
    t49 = *(short *)((R4 + 0x4));
    R0 = ((short)((t49 - t48) + R14));
    if (((int)(short)((t49 - t48) + R14) >= 0)) goto L_C08682A;
    goto L_C086812;
    L_C086812:;
    *(unsigned short *)((R4 + 0x0)) = ((*(short *)((R4 + 0x0))) + R7);
    *(unsigned short *)(((R4 + 0x2) + 0x0)) = (R13 - (*(short *)(((R4 + 0x2) + 0x0))));
    t54 = *(short *)((R4 + 0x4));
    *(unsigned short *)((R4 + 0x4)) = (t54 + R7);
    R0 = ((t54 + R7));
    goto L_C08682A;
    L_C08682A:;
    t56 = (R5 - 0x1) != 0;
    R12 = ((R12 + 0x6));
    R5 = ((R5 - 0x1));
    R6 = ((R6 + 0x6));
    if (t56) goto L_C0867F0;
    goto L_C086832;
    L_C086832:;
    goto L_C0868CC;
    L_C08679A:;
    t62 = R5;
    R12 = (R4);
    R5 = (0x10);
    R6 = t62;
    goto L_C0867A0;
    L_C0867A0:;
    R1 = (R6);
    R4 = (R12);
    if (((int)(short)(((*(short *)((R12 + 0x0))) - (*(short *)((R6 + 0x0)))) + R14) >= 0)) goto L_C0867DA;
    goto L_C0867B2;
    L_C0867B2:;
    t68 = *(short *)((R1 + 0x4));
    t69 = *(short *)((R4 + 0x4));
    R0 = ((short)((t69 - t68) + R14));
    if (((int)(short)((t69 - t68) + R14) >= 0)) goto L_C0867DA;
    goto L_C0867C2;
    L_C0867C2:;
    *(unsigned short *)((R4 + 0x0)) = ((*(short *)((R4 + 0x0))) + R7);
    *(unsigned short *)(((R4 + 0x2) + 0x0)) = (R13 - (*(short *)(((R4 + 0x2) + 0x0))));
    t74 = *(short *)((R4 + 0x4));
    *(unsigned short *)((R4 + 0x4)) = (t74 + R7);
    R0 = ((t74 + R7));
    goto L_C0867DA;
    L_C0867DA:;
    t76 = (R5 - 0x1) != 0;
    R12 = ((R12 + 0x6));
    R5 = ((R5 - 0x1));
    R6 = ((R6 + 0x6));
    if (t76) goto L_C0867A0;
    goto L_C0867E2;
    L_C0867E2:;
    goto L_C0868CC;
}

int FUN_0c08e504(int a4)
{
    int t1;
    float u2;
    float u7;
    float u8;
    int t3;
    float u14;
    float u16;
    float u18;
    float u20;
    float u22;
    float u24;
    float u27;
    float u28;
    float u31;
    float u32;
    float u35;
    float u36;
    int t50;
    int t38;
    int t40;
    int stk[16];

    t1 = *(int *)((a4 + 0x38));
    u2 = 0.399999976f;
    u2 = u2 + 1.83111042e-05f * (float)(FUN_0c0da2e0());
    u7 = 0.0f;
    u8 = 1.0f;
    if ((int)t1 < (int)0xB4) {
        t3 = *(int *)((a4 + 0x38));
        u7 = (((-(float)(t3 * t3)) + 32400.0f) / 32400.0f);
        u8 = (1.0f - (((-(float)(t3 * t3)) + 32400.0f) / 32400.0f));
    }
    u14 = 0.899999976f;
    u14 = u14 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
    *(float *)((((int)stk + 4) + 0x0)) = (u14 * u2);
    u16 = 0.799999952f;
    u16 = u16 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (u16 * u2);
    u18 = 0.5f;
    u18 = u18 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (u18 * u2);
    u20 = (u7 * 1.0f);
    u20 = u20 + u8 * (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)0xC247EE8 = u20;
    u22 = (u7 * 1.0f);
    u22 = u22 + u8 * (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(float *)0xC247EEC = u22;
    u24 = (u7 * 1.0f);
    u24 = u24 + u8 * (*(float *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(float *)0xC247EF0 = u24;
    u27 = 100.0f;
    u27 = u27 + 64.0f * (*(float *)((((int)stk + 4) + 0x0)));
    u28 = (u27 * u8);
    u28 = u28 + u7 * (float)(*(int *)0xC248A7C);
    *(unsigned int *)0xC248A64 = (int)u28;
    u31 = 100.0f;
    u31 = u31 + 64.0f * (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    u32 = (u31 * u8);
    u32 = u32 + u7 * (float)(*(int *)0xC248A80);
    *(unsigned int *)0xC248A68 = (int)u32;
    u35 = 100.0f;
    u35 = u35 + 64.0f * (*(float *)(((((int)stk + 4) + 0x8) + 0x0)));
    u36 = (u35 * u8);
    u36 = u36 + u7 * (float)(*(int *)0xC248A84);
    *(unsigned int *)0xC248A6C = (int)u36;
    t50 = 0xB94;
    if ((int)(*(int *)((a4 + 0x38))) > 0) {
        t38 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t38 - 1);
        t40 = 0xB94;
        if ((t38 - 1) == 0) {
            t40 = (FUN_0c0e19f2());
        }
        t50 = t40;
    }
    return t50;
}

int FUN_0c0b3440(int a4)
{
    int t0;
    int t5;
    int t51;
    int t82;
    int t56;
    int t6;
    int t90;
    int t43;
    int t35;
    int t74;

    t0 = *(int *)((a4 + 0x3D0));
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
    FUN_0c0bbbf4(a4);
    t5 = *(short *)((t0 + 0x6));
    if (((short)t5 != 0) && (t6 = *(int *)((a4 + 0x2B4)), (short)t5 == t6)) {
        if ((*(int *)((a4 + 0x3AC))) == 0) {
            if ((*(short *)(((t0 + 0xC) + 0x2))) != -1) {
                *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x2)));
                *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)(((t0 + 0xC) + 0xA)));
                *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                    *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x8)));
                }
                *(unsigned int *)((a4 + 0x3D0)) = (t0 + 0xC);
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                if (((unsigned short)(*(short *)(((t0 + 0xC) + 0xA))) & 0x100) != 0) {
                    *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
                } else {
                    *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
                }
                t35 = 0x20C;
            } else {
                FUN_0c04a058(a4);
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                *(unsigned int *)0xC23EDB0 = 0x0;
                t35 = 0x2D4;
            }
            t43 = t35;
        } else {
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            t43 = 0x2CC;
        }
        t90 = t43;
    } else {
        t51 = *(int *)((a4 + 0x2EC));
        t82 = t51;
        if ((t51 & 12) != 0) {
            if ((*(int *)((a4 + 0x3AC))) == 0) {
                t56 = *(short *)(((t0 + 0xC) + 0x2));
                if (t56 == -1) {
                    FUN_0c04a058(a4);
                    *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                    *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                    *(unsigned int *)0xC23EDB0 = 0x0;
                } else {
                    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = t56;
                    *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)(((t0 + 0xC) + 0xA)));
                    *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                    if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                        *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x8)));
                    }
                    *(unsigned int *)((a4 + 0x3D0)) = (t0 + 0xC);
                    *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                }
                t74 = 0x2D4;
            } else {
                *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
                t74 = 0x3AC;
            }
            t82 = t74;
        }
        t90 = t82;
    }
    return t90;
}

int FUN_0c02f4b8(int a4, int a5)
{
    int t14;
    int t16;
    int t17;
    int t22;
    int t31;
    int t35;
    int t41;
    int t43;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R14;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C02F4B8:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c03720a(R4));
    *(unsigned int *)(((int)stk + 16)) = (FUN_0c037242(R4));
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C02F4F6;
    goto L_C02F4DA;
    L_C02F4DA:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C02F55E;
    goto L_C02F4E2;
    L_C02F4E2:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0)));
    if (((*(int *)((R14 + 0x49C))) == 1)) goto L_C02F4FE;
    goto L_C02F4F6;
    L_C02F4F6:;
    R2 = (0x3);
    goto L_C02F4F8;
    L_C02F4F8:;
    *(unsigned int *)((R14 + 0x538)) = R2;
    goto L_C02F5FA;
    L_C02F5FA:;
    return 0x0;
    L_C02F4FE:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C02F52A;
    goto L_C02F504;
    L_C02F504:;
    t14 = *(int *)((R14 + 0xBC));
    t16 = (FUN_0c0853d4(((((((t14 << 1) + t14) << 2) << 2) << 2) + 0xC23F268), 1.0f)) != 0;
    if (t16) goto L_C02F52A;
    goto L_C02F522;
    L_C02F522:;
    *(unsigned int *)((R14 + 0x538)) = 0x4;
    goto L_C02F5FA;
    L_C02F52A:;
    t17 = FUN_0c02f39e(R14);
    R4 = (t17);
    if ((t17 == 0)) goto L_C02F54E;
    goto L_C02F534;
    L_C02F534:;
    if ((R4 != 2)) goto L_C02F552;
    goto L_C02F53C;
    L_C02F53C:;
    t22 = *(int *)((((*(int *)((R14 + 0x28C))) << 2) + 0xC246FF0));
    R4 = (t22);
    if (((*(int *)((t22 + 0x554))) != 2)) goto L_C02F552;
    goto L_C02F54E;
    L_C02F54E:;
    R2 = (0x8);
    goto L_C02F4F8;
    L_C02F552:;
    if ((((*(int *)(((*(int *)(((int)stk + 8))) + 0x20C))) & 0x400CDE00) == 0)) goto L_C02F566;
    goto L_C02F55E;
    L_C02F55E:;
    *(unsigned int *)((R14 + 0x538)) = 0x5;
    goto L_C02F5FA;
    L_C02F566:;
    t31 = (FUN_0c034bac(R14)) != 0;
    if (t31) goto L_C02F5C4;
    goto L_C02F570;
    L_C02F570:;
    FUN_0c0da2e0();
    t35 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 12)));
    if (t35) goto L_C02F5C4;
    goto L_C02F584;
    L_C02F584:;
    *(unsigned int *)(((0x538 + R14) + 0x0)) = 0x6;
    goto L_C02F5FA;
    L_C02F5C4:;
    if (((*(int *)((R14 + 0x548))) == 0)) goto L_C02F5EA;
    goto L_C02F5CC;
    L_C02F5CC:;
    FUN_0c0da2e0();
    t41 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 16)));
    if (t41) goto L_C02F5EA;
    goto L_C02F5E0;
    L_C02F5E0:;
    *(unsigned int *)(((0x538 + R14) + 0x0)) = 0x7;
    goto L_C02F5FA;
    L_C02F5EA:;
    t43 = (FUN_0c037088()) != 0;
    if (t43) goto L_C02F604;
    goto L_C02F5F4;
    L_C02F5F4:;
    *(unsigned int *)((R14 + 0x538)) = 0x9;
    goto L_C02F5FA;
    L_C02F604:;
    *(unsigned int *)((R14 + 0x538)) = 0x0;
    return 0x1;
}

int FUN_0c03f884(int a4)
{
    int t0;
    int t8;
    int t3;
    int t5;
    int t19;
    float t26;
    int t34;
    int t56;
    int t57;
    int t69;
    int t48;
    int t20;
    int t41;
    int t58;
    int stk[8];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            t8 = t0;
            if (t0 == 2) {
                t3 = *(int *)((a4 + 0x2EC));
                t5 = t3;
                if ((t3 & 12) != 0) {
                    t5 = (FUN_0c03f4bc(a4));
                }
                t8 = t5;
            }
            t48 = t8;
        } else {
            if ((*(float *)((a4 + 0x26C))) > -1.25f) {
                *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
            }
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            t19 = FUN_0c034134(a4, 5.0f);
            if ((t19 != 0) && (t20 = *(int *)((a4 + 0x508)), t20 == 0)) {
                FUN_0c0546fe(a4, (*(short *)(((*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))) + 0x6E))), 0x200, 0x0);
            }
            t26 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            if ((*(int *)((a4 + 0xD8))) != 0) {
                t41 = (FUN_0c03f63c(a4, 0x0));
            } else {
                t34 = 0x34;
                if ((t26 + 10.8623991f) > (*(float *)((a4 + 0x34)))) {
                    *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    *(float *)((a4 + 0x34)) = t26;
                    *(float *)((a4 + 0x4C)) = 0.0f;
                    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) | 0x800);
                    t34 = (FUN_0c041dd0(a4));
                }
                t41 = t34;
            }
            t48 = t41;
        }
        t69 = t48;
    } else {
        t56 = FUN_0c034c26(a4);
        if (t56 != 0) {
            t57 = FUN_0c034134(a4, 5.0f);
            if ((t57 != 0) && (t58 = *(int *)((a4 + 0x508)), t58 == 0)) {
                *(unsigned short *)((a4 + 0x6E)) = (*(short *)(((*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))) + 0x6E)));
            }
        }
        *(float *)((a4 + 0x26C)) = 0.0f;
        *(unsigned int *)((a4 + 0x20C)) = 0x1;
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t69 = 0x4EC;
    }
    return t69;
}

int FUN_0c047e9c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t12;
    int t28;
    int t38;
    int t42;
    int t43;
    int t37;
    int stk[13];

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                    *(unsigned int *)((a4 + 0x248)) = 0x0;
                    t2 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
                }
            }
        } else {
            FUN_0c034fbc(a4, 0x80, 0x1, 0x0);
            FUN_0c04638a(a4);
            *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) + 0x1000);
            t12 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t12 - 1);
            if ((int)(t12 - 1) < 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x59F;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
        }
        return (FUN_0c022838(a4));
    }
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0)));
    t28 = FUN_0c046cc0(a4);
    if (t28 == 0) {
        return (((int (*)(int))(FUN_0c02a19a))(a4));
    }
    FUN_0c03442c(a4, (*(int *)(((int)stk + 28))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
    *(unsigned int *)((a4 + 0x248)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x14)) = *(struct mv3 *)(0xC0F6738); }
    FUN_0c046294(a4, (((int)stk + 12) + 0x14), 0x1);
    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    FUN_0c046170(a4, (*(float *)0xC048048));
    if (((*(int *)((a4 + 0x54C))) == 1) && (t37 = *(int *)(((int)stk + 12)), t37 == 0)) {
        t38 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t38 << 2) + t38) << 2) + 0xC1F8E44))) + 0x0)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    } else {
        t42 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t42 - 1);
        if ((int)(t42 - 1) < 0) {
            t43 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t43 << 2) + t43) << 2) + 0xC1F8E44))) + 0x0)));
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        }
    }
    return (FUN_0c022838(a4));
}

int FUN_0c037fd4(int a4)
{
    int t0;
    float u3;
    float u4;
    int t7;
    float u19;
    float u20;
    float u21;
    float u24;
    float u25;
    float u26;
    float u29;
    float u30;
    float u31;
    float u34;
    float u35;
    float u36;
    int t39;
    float t40;
    int stk[41];

    t0 = *(int *)((a4 + 0x3E0));
    FUN_0c033c8c((0x404 + a4), ((((t0 << 1) + t0) << 2) + (0x370 + a4)), 0x3, 1.0f);
    FUN_0c0db0a0(0xA, 0xD);
    u3 = *(float *)((a4 + 0x408));
    *(float *)(((int)stk + 84)) = u3;
    u4 = *(float *)((a4 + 0x404));
    *(float *)(((int)stk + 80)) = u4;
    nlPrintf(0xC0F55DC, u4, u3);
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 76) + 0xC)) = *(struct mv10 *)(0xC0F55EC); }
    nlPushMatrix(0x0);
    t7 = *(int *)((a4 + 0x3E0));
    FUN_0c0dcc70((*(float *)((((((t7 << 1) + t7) << 2) + (0x370 + a4)) + 0x0))), (*(float *)((((((t7 << 1) + t7) << 2) + (0x370 + a4)) + 0x4))), (*(float *)((((((t7 << 1) + t7) << 2) + (0x370 + a4)) + 0x8))));
    nlRotateAY((unsigned short)(((*(short *)0xC23A258) << 8) << 2));
    FUN_0c0c465c((*(int *)(((((*(int *)((a4 + 0x3E0))) << 2) + (((int)stk + 76) + 0xC)) + 0x0))));
    nlPopMatrix(0x1);
    FUN_0c0db0a0(0xA, 0xD);
    u19 = *(float *)((a4 + 0x38));
    *(float *)(((int)stk + 72)) = u19;
    u20 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 68)) = u20;
    u21 = *(float *)((a4 + 0x30));
    *(float *)(((int)stk + 64)) = u21;
    nlPrintf(0xC0F5614, u21, u20, u19);
    FUN_0c0db0a0(0xA, 0xE);
    u24 = *(float *)(((0x370 + a4) + 0x8));
    *(float *)(((int)stk + 56)) = u24;
    u25 = *(float *)(((0x370 + a4) + 0x4));
    *(float *)(((int)stk + 52)) = u25;
    u26 = *(float *)(((0x370 + a4) + 0x0));
    *(float *)(((int)stk + 48)) = u26;
    nlPrintf(0xC0F5614, u26, u25, u24);
    FUN_0c0db0a0(0xA, 0xF);
    u29 = *(float *)((((0x370 + a4) + 0xC) + 0x8));
    *(float *)(((int)stk + 40)) = u29;
    u30 = *(float *)((((0x370 + a4) + 0xC) + 0x4));
    *(float *)(((int)stk + 36)) = u30;
    u31 = *(float *)((((0x370 + a4) + 0xC) + 0x0));
    *(float *)(((int)stk + 32)) = u31;
    nlPrintf(0xC0F5614, u31, u30, u29);
    FUN_0c0db0a0(0xA, 0x10);
    u34 = *(float *)((((0x370 + a4) + 0x18) + 0x8));
    *(float *)(((int)stk + 24)) = u34;
    u35 = *(float *)((((0x370 + a4) + 0x18) + 0x4));
    *(float *)(((int)stk + 20)) = u35;
    u36 = *(float *)((((0x370 + a4) + 0x18) + 0x0));
    *(float *)(((int)stk + 16)) = u36;
    nlPrintf(0xC0F5614, u36, u35, u34);
    FUN_0c0db0a0(0xA, 0x11);
    t39 = *(int *)((a4 + 0x3E0));
    t40 = FUN_0c01f1b8(((((t39 << 1) + t39) << 2) + (0x370 + a4)), (((int)stk + 12) + 0x74));
    *(float *)(((int)stk + 8)) = t40;
    return (nlPrintf(0xC0F5628, t40));
}

int FUN_0c0d7d50(int a4, int a5, int a6)
{
    int t6;
    int t7;
    int t8;
    int t9;
    float u11;
    float u12;
    float u13;
    float u14;
    float u17;
    float u18;
    int stk[24];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((*(int *)0xC9480B0) + 0x6C)) = ((a6 * 0x3C) + (*(int *)0xC947AA8));
    FUN_0c0d8960(0x12);
    kmSetVertexRenderState((*(int *)0xC9480B0));
    t6 = *(int *)(((int)stk + 4));
    t7 = (kmStartVertexStrip(0xC944450));
    t8 = t6;
    t9 = a5;
    for (;;) {
        t8 = (t8 - 0x1);
        if (t8 == 0) {
            break;
        }
        t7 = 0x8;
        *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
        *(float *)((((int)stk + 4) + t7)) = (*(float *)((t9 + 0x0)));
        t7 = 0x4;
        u11 = *(float *)((t9 + t7));
        t7 = 0xC;
        *(float *)((((int)stk + 4) + t7)) = u11;
        t7 = 0x8;
        u12 = *(float *)((t9 + t7));
        t7 = 0x10;
        *(float *)((((int)stk + 4) + t7)) = u12;
        t7 = 0xC;
        u13 = *(float *)((t9 + t7));
        t7 = 0x14;
        *(float *)((((int)stk + 4) + t7)) = u13;
        t7 = 0x10;
        u14 = *(float *)((t9 + t7));
        t7 = 0x18;
        *(float *)((((int)stk + 4) + t7)) = u14;
        t7 = 0xC;
        *(unsigned int *)(((int)stk + 40)) = (*(int *)((t9 + 0x14)));
        *(unsigned int *)(((int)stk + 48)) = (*(int *)((t9 + 0x18)));
        u17 = *(float *)((t9 + t7));
        t7 = 0x1C;
        *(float *)((((int)stk + 4) + t7)) = u17;
        t7 = 0x10;
        u18 = *(float *)((t9 + t7));
        t7 = 0x20;
        *(float *)((((int)stk + 4) + t7)) = u18;
        *(unsigned int *)(((int)stk + 44)) = (*(int *)((t9 + 0x24)));
        *(unsigned int *)(((int)stk + 52)) = (*(int *)((t9 + 0x18)));
        t7 = (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0xB, 0x40));
        t9 = (t9 + 0x2C);
    }
    *(unsigned int *)(((int)stk + 8)) = 0xF0000000;
    *(float *)(((int)stk + 12)) = (*(float *)((t9 + 0x0)));
    *(float *)(((int)stk + 16)) = (*(float *)((t9 + 0x4)));
    *(float *)(((int)stk + 20)) = (*(float *)((t9 + 0x8)));
    *(float *)(((int)stk + 24)) = (*(float *)((t9 + 0xC)));
    *(float *)(((int)stk + 28)) = (*(float *)((t9 + 0x10)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((t9 + 0x14)));
    *(unsigned int *)(((int)stk + 48)) = (*(int *)((t9 + 0x18)));
    *(float *)(((int)stk + 32)) = (*(float *)((t9 + 0xC)));
    *(float *)(((int)stk + 36)) = (*(float *)((t9 + 0x10)));
    *(unsigned int *)(((int)stk + 44)) = (*(int *)((t9 + 0x14)));
    *(unsigned int *)(((int)stk + 52)) = (*(int *)((t9 + 0x18)));
    return (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0xB, 0x40));
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t15;
    int t20;
    int t28;
    int t51;
    int stk[19];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C226ADC:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    R12 = (R4);
    R13 = (R6);
    R14 = (((R4 * 0x148) + 0xC956768));
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C226B2A;
    goto L_C226B00;
    L_C226B00:;
    t6 = (vmsio_isready(R12)) != 0;
    if (t6) goto L_C226B14;
    goto L_C226B0A;
    L_C226B0A:;
    vmsfs_unmount(R12);
    goto L_C226B2A;
    L_C226B2A:;
    R0 = (0xFFFFFF01);
    goto L_C226C0C;
    L_C226C0C:;
    return R0;
    L_C226B14:;
    t10 = (vmsio_ismount(R12)) == 0;
    if (t10) goto L_C226B2A;
    goto L_C226B1E;
    L_C226B1E:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + 0xC956768) + 0x8))) != 0)) goto L_C226B30;
    goto L_C226B2A;
    L_C226B30:;
    t15 = (int)(buIsFormat(R12)) >= 0;
    if (t15) goto L_C226B40;
    goto L_C226B3A;
    L_C226B3A:;
    R0 = (0xFFFFFF03);
    goto L_C226C0C;
    L_C226B40:;
    *(unsigned int *)((R14 + 0x18)) = 0x0;
    t20 = (direntry(R12, 0x0));
    R11 = (0x0);
    R12 = (0x1);
    R4 = t20;
    R5 = (0x0);
    R7 = (0x0);
    goto L_C226B74;
    L_C226B74:;
    if (((int)R5 < (int)(*(int *)(((*(int *)((R14 + 0x1C))) + 0x30))))) goto L_C226B56;
    goto L_C226B7C;
    L_C226B7C:;
    if ((R7 != 0)) goto L_C226B86;
    goto L_C226B80;
    L_C226B80:;
    R0 = (0xFFFFFF05);
    goto L_C226C0C;
    L_C226B86:;
    t28 = *(int *)(((int)stk + 4));
    R1 = ((t28 + 0xC));
    R5 = (t28);
    R6 = ((R4 + 0x4));
    goto L_C226BBA;
    L_C226BBA:;
    if (((unsigned int)R5 < (unsigned int)R1)) goto L_C226BB4;
    goto L_C226BBE;
    L_C226BBE:;
    *(unsigned char *)((R1 + 0x0)) = R11;
    *(unsigned int *)((R14 + 0x18)) = ((*(int *)((R14 + 0x18))) + 0x1);
    set_file_info(R4, (((int)stk + 4) + 0x8), R6, R7);
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)((R14 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((R13 + 0x4)) = (*(int *)(((int)stk + 52)));
    *(unsigned char *)((R13 + 0x6)) = (*(signed char *)(((int)stk + 16)));
    *(unsigned char *)((R13 + 0x7)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned short *)((R13 + 0x8)) = (*(short *)(((int)stk + 20)));
    if (((*(int *)(((int)stk + 16))) != 0xCC)) goto L_C226BFA;
    goto L_C226BF6;
    L_C226BF6:;
    R0 = (R12);
    goto L_C226BFC;
    L_C226BFC:;
    *(unsigned char *)((R13 + 0x6)) = R0;
    get_vmstime((R13 + 0xA), (((int)stk + 4) + 0x28));
    R0 = (0x0);
    goto L_C226C0C;
    L_C226BFA:;
    R0 = (R11);
    goto L_C226BFC;
    L_C226BB4:;
    *(unsigned char *)((R5 + 0x0)) = (*(signed char *)((R6 + 0x0)));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    goto L_C226BBA;
    L_C226B56:;
    t51 = *(signed char *)((R4 + 0x0));
    R1 = ((unsigned char)t51);
    if (((unsigned char)t51 == 51)) goto L_C226B66;
    goto L_C226B60;
    L_C226B60:;
    if ((R1 != 0xCC)) goto L_C226B6A;
    goto L_C226B66;
    L_C226B66:;
    R7 = (R12);
    goto L_C226B7C;
    L_C226B6A:;
    *(unsigned int *)((R14 + 0x18)) = ((*(int *)((R14 + 0x18))) + 0x1);
    R4 = ((R4 + 0x20));
    R5 = ((R5 + 0x1));
    goto L_C226B74;
}

float FUN_0c016ac0(void)
{
    int t6;
    int t9;
    int t20;
    int t21;
    float u25;
    int t54;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R12;
    int R13;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    L_C016AC0:;
    *(unsigned int *)0xC23ED80 = ((*(int *)0xC23ED80) + 0x1);
    R4 = (0xC23ED80);
    R5 = (0xC23EDE0);
    if (((*(int *)0xC23EDE0) != 5)) goto L_C016ADA;
    goto L_C016AD6;
    L_C016AD6:;
    R5 = (0x0);
    goto L_C016AE6;
    L_C016AE6:;
    t6 = *(int *)((R4 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (((((int)t6 >> 8) & 0x3) + 0x3) & 0x3);
    t9 = *(int *)0xC23EE0C;
    *(unsigned int *)(((int)stk + 12)) = ((((((*(int *)0xC23EE04) + (*(int *)0xC23EE08)) + t9) + (*(int *)0xC23EE10)) >> 1) >> 1);
    R0 = (t9);
    R12 = (0x3);
    R13 = (0xC23EE04);
    R4 = (0xC23EE04);
    R6 = ((((int)t6 >> 8) & 0x3));
    if (((unsigned char)t6 != 0)) goto L_C016BF4;
    goto L_C016B18;
    L_C016B18:;
    *(unsigned int *)(((int)stk + 16)) = (R4 + (R6 << 2));
    *(unsigned int *)(((int)stk + 8)) = (R5 << 2);
    *(unsigned int *)(((R4 + (R6 << 2)) + 0x0)) = (*(int *)(((R5 << 2) + 0xC247594)));
    t20 = *(int *)(((*(int *)(((int)stk + 8))) + 0xC24759C));
    t21 = *(int *)(((int)stk + 4));
    u25 = ((float)t20 * 0.099999994f);
    R0 = ((t21 << 2));
    R3 = ((t21 << 2));
    R4 = ((*(int *)0xC23ED70));
    R7 = ((R6 << 2));
    F0 = ((u25 * 3.32999992f));
    F1 = (3.32999992f);
    F4 = (((float)t20 * 0.099999994f));
    if ((!((float)((*(int *)((R13 + (t21 << 2)))) - (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))) > (u25 * 3.32999992f)))) goto L_C016BA4;
    goto L_C016B62;
    L_C016B62:;
    R4 = ((R4 - 2));
    goto L_C016BDE;
    L_C016BDE:;
    R5 = (0x4);
    if (((int)R4 <= (int)0x4)) goto L_C016BE8;
    goto L_C016BE4;
    L_C016BE4:;
    R4 = (R5);
    goto L_C016BF0;
    L_C016BF0:;
    *(unsigned int *)0xC23ED70 = R4;
    goto L_C016BF4;
    L_C016BF4:;
    return F0;
    L_C016BE8:;
    R5 = (0xFFFFFFFD);
    if (((int)R4 >= (int)0xFFFFFFFD)) goto L_C016BF0;
    goto L_C016BEE;
    L_C016BEE:;
    R4 = (R5);
    goto L_C016BF0;
    L_C016BA4:;
    R0 = (R13);
    R5 = (R13);
    F0 = ((1.0f + 1.0f));
    if ((!((float)((*(int *)((R3 + R13))) - (*(int *)((R7 + R13)))) > (F4 * (1.0f + 1.0f))))) goto L_C016BC4;
    goto L_C016BC0;
    L_C016BC0:;
    R4 = ((R4 - 1));
    goto L_C016BDE;
    L_C016BC4:;
    if (((R6 & R12) != 0)) goto L_C016BDE;
    goto L_C016BC8;
    L_C016BC8:;
    R0 = (R7);
    if (((-F4) > (float)((*(int *)((R5 + R7))) - (*(int *)(((int)stk + 12)))))) goto L_C016BDE;
    goto L_C016BDC;
    L_C016BDC:;
    R4 = ((R4 + 0x1));
    goto L_C016BDE;
    L_C016ADA:;
    t54 = *(int *)((R5 + 0x4));
    R0 = (t54);
    if ((t54 == 5)) goto L_C016AE4;
    goto L_C016AE0;
    L_C016AE0:;
    goto L_C016BF4;
    L_C016AE4:;
    R5 = (0x1);
    goto L_C016AE6;
}

int FUN_0c06e0c4(int a4)
{
    int t0;
    int t1;
    float u13;
    float u17;
    int stk[27];

    t0 = *(int *)((a4 + 0x48));
    t1 = *(int *)((a4 + 0x4C));
    *(unsigned int *)(((int)stk + 4)) = t1;
    *(unsigned short *)(((0x3C + a4) + 0x0)) = (-(FUN_0c0d9ca0(a4, (((*(float *)((t1 + 0x10))) - (*(float *)((t1 + 0x4)))) / (*(float *)((a4 + 0xA8)))))));
    *(unsigned short *)((a4 + 0x98)) = ((*(short *)((a4 + 0x98))) + (*(short *)(((0x9E + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x9A)) = ((*(short *)((a4 + 0x9A))) + (*(short *)(((0xA0 + a4) + 0x0))));
    u13 = (float)(*(short *)((a4 + 0x92)));
    u13 = u13 + 2048.0f * (FUN_0c0da410((*(short *)((a4 + 0x98)))));
    *(unsigned short *)((a4 + 0x3E)) = (int)u13;
    u17 = (float)(*(short *)((a4 + 0x94)));
    u17 = u17 + 2048.0f * (FUN_0c0da410((*(short *)((a4 + 0x9A)))));
    *(unsigned short *)((a4 + 0x40)) = (int)u17;
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x3E))));
    FUN_0c0dcca0(t0);
    nlRotateAY((*(int *)((a4 + 0xB0))));
    nlRotateAX(((*(short *)((a4 + 0x3C))) + (*(int *)((a4 + 0xAC)))));
    nlRotateAZ((*(short *)((a4 + 0x40))));
    nlRotateAX((-(*(int *)((a4 + 0xAC)))));
    nlRotateAY((-(*(int *)((a4 + 0xB0)))));
    FUN_0c0dcc80(t0);
    nlGetMatrix((((int)stk + 4) + 0x10));
    FUN_0c0db4d0(t0, (((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x30)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((*(int *)((a4 + 0x4C))) + 0x4))) - (*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x38)));
    nlUnitMatrix();
    FUN_0c0dcca0((((int)stk + 4) + 0x4));
    return (nlMultiMatrix((((int)stk + 4) + 0x10)));
}

float FUN_0c0a46f4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    int t67;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u53;
    float u56;
    float u57;
    float u61;
    float u62;
    float u63;
    float u65;
    float u41;
    float u42;
    float u43;
    float u45;
    float u46;
    float u47;
    float u48;
    float u50;

    u0 = *(float *)((a4 + 0x4));
    u1 = *(float *)(((a4 + 0xC) + 0x4));
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)(((a4 + 0xC) + 0x8));
    u4 = ((u2 - u3) * (u2 - u3));
    u4 = u4 + (u0 - u1) * (u0 - u1);
    u5 = *(float *)(((a4 + 0xC) + 0x4));
    u6 = *(float *)((((a4 + 0xC) + 0xC) + 0x4));
    u7 = *(float *)(((a4 + 0xC) + 0x8));
    u8 = *(float *)((((a4 + 0xC) + 0xC) + 0x8));
    u9 = *(float *)((((a4 + 0xC) + 0xC) + 0x4));
    u10 = ((u7 - u8) * (u7 - u8));
    u10 = u10 + (u5 - u6) * (u5 - u6);
    u11 = *(float *)(((((a4 + 0xC) + 0xC) + 0xC) + 0x4));
    u12 = *(float *)(((((a4 + 0xC) + 0xC) + 0xC) + 0x8));
    u13 = *(float *)((((a4 + 0xC) + 0xC) + 0x8));
    u14 = ((u13 - u12) * (u13 - u12));
    u14 = u14 + (u9 - u11) * (u9 - u11);
    t67 = 0;
    if (_builtin_sqrtf(u4) > (f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14)))) {
        u15 = *(float *)(((a4 + 0xC) + 0x8));
        u16 = *(float *)((a4 + 0x8));
        u17 = *(float *)((a4 + 0x4));
        u18 = *(float *)(((a4 + 0xC) + 0x4));
        u19 = u16;
        u19 = u19 + ((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) / _builtin_sqrtf(u4)) * (u15 - u16);
        u20 = *(float *)((a5 + 0x0));
        u21 = u17;
        u21 = u21 + (u19 - u16) * ((u18 - u17) / (u15 - u16));
        u23 = u20;
        u23 = u23 + ((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) / _builtin_sqrtf(u4)) * ((*(float *)(((a5 + 0x4) + 0x0))) - u20);
        u56 = ((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) / _builtin_sqrtf(u4));
        u57 = ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14));
        u61 = u19;
        u62 = u21;
        u63 = u23;
        u65 = ((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) / _builtin_sqrtf(u4));
        t67 = (1);
    } else {
        if ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) > (f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14)))) {
            u24 = *(float *)((((a4 + 0xC) + 0xC) + 0x8));
            u25 = *(float *)(((a4 + 0xC) + 0x8));
            u26 = *(float *)(((a4 + 0xC) + 0x4));
            u27 = *(float *)((((a4 + 0xC) + 0xC) + 0x4));
            u28 = *(float *)(((a5 + 0x4) + 0x0));
            u29 = u25;
            u29 = u29 + (((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) / _builtin_sqrtf(u10)) * (u24 - u25);
            u30 = u26;
            u30 = u30 + (u29 - u25) * ((u27 - u26) / (u24 - u25));
            u31 = *(float *)(((a5 + 0x8) + 0x0));
            u41 = (((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) / _builtin_sqrtf(u10));
            u42 = (((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) / _builtin_sqrtf(u10));
            u43 = f11;
            u45 = (u31 - u28);
            u46 = u29;
            u47 = u30;
            u48 = u28;
            u50 = u25;
        } else {
            u32 = *(float *)(((((a4 + 0xC) + 0xC) + 0xC) + 0x8));
            u33 = *(float *)((((a4 + 0xC) + 0xC) + 0x8));
            u34 = *(float *)((((a4 + 0xC) + 0xC) + 0x4));
            u35 = *(float *)(((((a4 + 0xC) + 0xC) + 0xC) + 0x4));
            u36 = *(float *)(((a5 + 0x8) + 0x0));
            u37 = u33;
            u37 = u37 + ((((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) - _builtin_sqrtf(u10)) / _builtin_sqrtf(u14)) * (u32 - u33);
            u38 = u34;
            u38 = u38 + (u37 - u33) * ((u35 - u34) / (u32 - u33));
            u39 = *(float *)((a5 + 0xC));
            u41 = ((((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) - _builtin_sqrtf(u10)) / _builtin_sqrtf(u14));
            u42 = (u32 - u33);
            u43 = ((((f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14))) - _builtin_sqrtf(u4)) - _builtin_sqrtf(u10)) / _builtin_sqrtf(u14));
            u45 = (u39 - u36);
            u46 = u37;
            u47 = u38;
            u48 = u36;
            u50 = _builtin_sqrtf(u14);
        }
        u53 = u48;
        u53 = u53 + u41 * u45;
        u56 = u41;
        u57 = u42;
        u61 = u46;
        u62 = u47;
        u63 = u53;
        u65 = u50;
        t67 = (((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) > (f4 * ((_builtin_sqrtf(u4) + _builtin_sqrtf(u10)) + _builtin_sqrtf(u14)))));
    }
    *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0x0)));
    *(float *)((a6 + 0x4)) = u62;
    *(float *)((a6 + 0x8)) = u61;
    *(float *)((a7 + 0x0)) = u63;
    return u56;
}

int FUN_0c0141d4(int a4, int a5)
{
    int t7;
    int t10;
    int t11;
    int t15;
    int t20;
    int t25;
    int t27;
    int t32;
    float u40;
    float u41;
    int t42;
    int t43;
    float u51;
    int t30;
    int stk[22];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(0x0);
    if (((*(int *)(((int)stk + 8))) & 0x2) != 0) {
        FUN_0c0dcc70((*(float *)0xC014400), 0.0f, 0.0f);
    }
    t7 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t7 & 0x1);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 4))) + 0x2);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 4))) + 0x4);
    t10 = (((((t7 & 0x1) << 1) + (t7 & 0x1)) << 2) + 0xC1EF5A8);
    t11 = 0x0;
    for (;;) {
        t15 = 0x0;
        if (((*(short *)(((*(int *)(((int)stk + 4))) + 0x0))) & (*(short *)((t10 + 0x0)))) != 0) {
            t15 = 0x4;
        }
        t20 = t15;
        if (((*(short *)(((*(int *)(((int)stk + 16))) + 0x0))) & (*(short *)((t10 + 0x0)))) != 0) {
            t20 = (t15 | 0x2);
        }
        if (((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) & (*(short *)((t10 + 0x0)))) != 0) {
            t25 = 0x0;
            for (;;) {
                if ((t20 | 0x1) != (*(signed char *)((t25 + 0xC1EF5A0)))) {
                    t25 = (t25 + 0x1);
                    if ((int)t25 >= (int)0x7) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t30 = t25;
        } else {
            t27 = 0x0;
            for (;;) {
                if (t20 != (*(signed char *)((t27 + 0xC1EF5A0)))) {
                    t27 = (t27 + 0x1);
                    if ((int)t27 >= (int)0x7) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t30 = t27;
        }
        t32 = t11;
        t11 = (t11 + 0x1);
        *(unsigned int *)(((((int)stk + 4) + 0x10) + (t32 << 2))) = t30;
        t10 = (t10 + 0x2);
        if ((int)t11 >= (int)0x6) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC01440C));
    FUN_0c0c465c((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0xC0F4490))));
    nlPopMatrix(0x1);
    u40 = *(float *)0xC01441C;
    u41 = *(float *)0xC014420;
    t42 = 0x0;
    for (;;) {
        t43 = *(int *)(((((int)stk + 4) + 0x10) + (t42 << 2)));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)(((t43 << 2) + 0xC1EF5C0))), (*(float *)(((t43 << 2) + 0xC1EF5DC))), 0.0f);
        FUN_0c0c465c((*(int *)(((t43 << 2) + 0xC0F4498))));
        nlPopMatrix(0x1);
        u51 = u40;
        if (t42 != 3) {
            u51 = 0.0f;
        }
        FUN_0c0dcc70(u51, u41, 0.0f);
        t42 = (t42 + 0x1);
        if ((int)t42 >= (int)0x6) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c035f64(int a4, int a5, int a6)
{
    int t63;
    int t1;
    int t2;
    int t3;
    int t4;
    float u49;
    int t50;
    int t51;
    float u53;
    float u5;
    int t7;
    int t48;
    int t43;
    float u44;
    int t38;
    float u39;
    int t27;
    float u34;
    int stk[37];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t63 = 0xFFFFFFFF;
    if ((*(int *)0xC247994) != 0) {
        t1 = 0x3C0;
        t2 = 0x0;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            u49 = u5;
            if (((int)(*(int *)((((t4 << 2) + 0xC247604) + 0x0))) >= (int)0xB) && (t7 = *(int *)((((t4 << 2) + 0xC247634) + 0x0)), t1 = t7, (int)t1 < (int)0x16)) {
                t1 = (*(int *)((((t4 << 2) + 0xC2475D4) + 0x0)));
                t2 = t1;
                *(unsigned int *)(((int)stk + 8)) = t1;
                t2 = (t2 + 0x30);
                t1 = (FUN_0c0346ca(t2));
                if (t1 != 0) {
                    t1 = t4;
                    t1 = (t1 << 2);
                    t1 = (*(int *)((0xC247634 + t1)));
                    if ((t1 == 5) || (t1 == 7)) {
                        t2 = (*(int *)(((int)stk + 4)));
                        t2 = (t2 + 0x5D0);
                        if (((*(int *)((t2 + 0x8))) == 0) && (t27 = *(int *)((t2 + 0xC)), t27 == 0)) {
                            t2 = t3;
                            t2 = (t2 << 2);
                            t1 = t2;
                            *(unsigned int *)(((((int)stk + 4) + 0x3C) + t1)) = t4;
                            t3 = (t3 + 0x1);
                            u5 = (*(float *)(((((((t4 << 2) << 2) << 2) + 0xC247694) + ((*(int *)(((0xBC + (*(int *)(((int)stk + 4)))) + 0x0))) << 2)) + 0x0)));
                            *(float *)(((((int)stk + 4) + 0x8) + t1)) = u5;
                            u34 = u5;
                        }
                        t38 = t2;
                        u39 = u34;
                    }
                    t43 = t38;
                    u44 = u39;
                }
                t48 = t43;
                u49 = u44;
            } else {
                t48 = t2;
            }
            u5 = u49;
            t4 = (t4 + 0x1);
            t2 = t48;
            if ((int)t4 >= (int)0xC) {
                break;
            }
        }
        *(unsigned int *)(((((int)stk + 4) + 0x3C) + (t3 << 2))) = 0xFFFFFFFF;
        *(float *)(((((int)stk + 4) + 0x8) + (t3 << 2))) = 999.998962f;
        t50 = 0xFFFFFFFF;
        t51 = t3;
        u53 = 999.998962f;
        for (;;) {
            t50 = (t50 + 0x1);
            if ((int)(*(int *)(((((int)stk + 4) + 0x3C) + (t50 << 2)))) < 0) {
                break;
            }
            u53 = (*(float *)(((((int)stk + 4) + 0x8) + (t50 << 2))));
            if (!(u53 > ((*(float *)(((((int)stk + 4) + 0x8) + (t51 << 2))))))) {
                t51 = t50;
            }
        }
        t63 = (*(int *)(((((int)stk + 4) + 0x3C) + (t51 << 2))));
    }
    return t63;
}

int FUN_0c03611c(int a4)
{
    int t14;
    int t19;
    int t34;
    int t1;
    int stk[9];

    if ((((*(int *)0xC23A1A8) & 1) != 0) && (t1 = *(int *)((a4 + 0xC0)), (int)t1 < (int)0x29)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 5.0f);
        FUN_0c0553b6(0x17, 0x4, ((int)stk + 4), *(Stk3 *)(((int)stk + 4)));
    }
    if (((*(int *)((a4 + 0x20C))) & 0x200000) != 0) {
        FUN_0c056098(a4);
    }
    t14 = *(int *)((a4 + 0x330));
    if (t14 != 2) {
        if (t14 == 4) {
            if ((*(int *)((a4 + 0x344))) != 0) {
                t19 = *(int *)((a4 + 0xBC));
                *(float *)(((int)stk + 20)) = (*(float *)((((0xC23F268 + (((((t19 << 1) + t19) << 2) << 2) << 2)) + 0x3C) + 0x4)));
                *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x30)));
                *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x38)));
                FUN_0c056118(a4, 0x3, (((int)stk + 4) + 0xC), 0x0);
            }
        }
    } else {
        if ((*(int *)((a4 + 0x348))) != 0) {
            t34 = *(int *)((a4 + 0xBC));
            *(float *)(((int)stk + 20)) = (*(float *)((((0xC23F268 + (((((t34 << 1) + t34) << 2) << 2) << 2)) + 0x24) + 0x4)));
            *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x30)));
            *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x38)));
            FUN_0c056118(a4, 0x3, (((int)stk + 4) + 0xC), 0x1);
        }
    }
    *(unsigned int *)((a4 + 0x330)) = 0x0;
    *(unsigned int *)((a4 + 0x554)) = 0x0;
    return 0x554;
}

void FUN_0c033b04(int a4)
{
    int t0;
    int t24;
    int t25;
    int stk[16];

    t0 = *(int *)((a4 + 0x488));
    FUN_0c035828(a4, 0x400, 0x1, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x10), 1.5f, 0.0272199996f);
    if (((*(int *)(((int)stk + 8))) & 0x8000) != 0) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
    }
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x1000) {
        *(unsigned int *)(((int)stk + 8)) = 0x1000;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = -1.5f;
    FUN_0c0db470((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x14));
    *(float *)(((((int)stk + 8) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 8) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)((a4 + 0x4B0)) = (*(float *)(((int)stk + 20)));
    *(float *)((a4 + 0x4B4)) = (*(float *)(((int)stk + 16)));
    *(float *)((a4 + 0x4B8)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
    *(unsigned int *)((t0 + 0x200)) = 0x1;
    *(unsigned int *)((t0 + 0x1E8)) = 0x1;
    *(unsigned int *)((t0 + 0x1F4)) = 0xA;
    *(unsigned int *)((t0 + 0x204)) = 0x0;
    *(float *)((t0 + 0x1E4)) = 3.0f;
    *(unsigned int *)((t0 + 0x1FC)) = 0x2;
    *(unsigned int *)((t0 + 0x1F8)) = 0x3;
    *(unsigned int *)((t0 + 0xD8)) = 0x0;
    t24 = *(int *)((t0 + 0xBC));
    t25 = *(int *)((t0 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
}

int FUN_0c047360(int a4, int a5, int a6, int a7)
{
    int t0;
    int t19;
    int t20;
    int t24;
    int t45;
    int t47;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        FUN_0c02a19a(a4, a5, a6, a7);
                    }
                }
            } else {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    t19 = FUN_0c046cc0(a4);
                    if (t19 == 0) {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x5B8;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x3A0)) = 0x3;
                    } else {
                        t20 = *(int *)((a4 + 0x558));
                        *(unsigned int *)((a4 + 0x558)) = (t20 - 1);
                        if ((int)(t20 - 1) < 0) {
                            *(unsigned int *)((a4 + 0x558)) = 0x0;
                            *(unsigned int *)((a4 + 0x3B8)) = 0x3;
                        }
                        t24 = *(int *)((a4 + 0x3B8));
                        *(unsigned int *)((a4 + 0x3B8)) = (t24 + 0x1);
                        if ((int)(t24 + 0x1) >= (int)0x3) {
                            *(unsigned int *)((a4 + 0x2C4)) = 0x5B8;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        }
                    }
                }
            }
        } else {
            t45 = FUN_0c046cc0(a4);
            if (t45 != 0) {
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                t47 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t47 - 1);
                if ((int)(t47 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x5B7;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x5B8;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = 0x3;
            }
        }
    } else {
        FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x5B9;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        }
    }
    return FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
}

int FUN_0c0567c0(int a4)
{
    int t22;
    int t60;
    float u66;
    int t47;
    float u52;
    int t32;

    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.0599999987f);
    *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
    *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
    if (5.0f > (*(float *)((a4 + 0x258)))) {
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x100);
        *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + 0x800);
    }
    FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
    if ((*(int *)((a4 + 0xA8))) != 0) {
        FUN_0c056588(a4);
        *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
        *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
        *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
    }
    t22 = FUN_0c01f18e(a4);
    if (t22 != 0) {
        *(float *)((a4 + 0x64)) = (-((*(float *)((a4 + 0x64))) * 0.5f));
        *(float *)((a4 + 0x60)) = ((*(float *)((a4 + 0x60))) * 0.699999988f);
        *(float *)((a4 + 0x68)) = ((*(float *)((a4 + 0x68))) * 0.699999988f);
        *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
        if (!((*(float *)((a4 + 0x64))) > (*(float *)((a4 + 0x258))))) {
            if (((int)(*(int *)((a4 + 0x224))) > 0) && (t32 = *(int *)((a4 + 0x21C)), (int)t32 > 0)) {
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0xB;
                *(unsigned short *)((a4 + 0x6C)) = 0x0;
            } else {
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0x7;
                *(unsigned int *)((a4 + 0x25C)) = 0x3C;
            }
            t47 = 0x34;
            u52 = ((*(float *)((a4 + 0xB4))) + (*(float *)((a4 + 0x258))));
        } else {
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
            t47 = 0x38;
            u52 = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
        }
        t60 = t47;
        u66 = u52;
    } else {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
        t60 = 0x38;
        u66 = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
    }
    *(float *)((a4 + t60)) = u66;
    return t60;
}

float FUN_0c0b719e(int a4, int a5)
{
    float u1;
    float u18;
    int t2;
    int t3;
    float u10;
    int t20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u33;
    int t27;
    float u28;
    float u39;
    float u55;
    int t40;
    int t41;
    int t42;
    float u43;
    int t45;
    float u46;
    float u48;
    int t59;
    int t60;
    float u61;
    int t63;
    int t64;
    float u65;
    float u66;
    int t68;
    float u69;
    float u70;
    int t72;
    float u73;
    int t75;
    float u76;
    float u78;

    u1 = *(float *)0xC0B732C;
    u18 = 0.0f;
    if ((int)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0))) > 0) {
        t2 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        t3 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0));
        u10 = (((float)t2 / (float)t3) * u1);
        if ((int)t3 < (int)0x32) {
            u10 = (((((float)t2 / (float)t3) * u1)) * ((float)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0))) / (*(float *)0xC0B7330)));
        }
        u18 = u10;
    }
    t20 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
    u21 = *(float *)0xC0B7334;
    u22 = *(float *)0xC0B7338;
    u23 = *(float *)0xC0B733C;
    u24 = ((float)t20 * u22);
    if (((float)t20 * u22) > u23) {
        u24 = u23;
    }
    u33 = ((u18 * u21) + u24);
    if ((int)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x8))) > 0) {
        t27 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        u28 = ((float)t27 * u21);
        if (((float)t27 * u21) > (1.0f + 1.0f)) {
            u28 = (1.0f + 1.0f);
        }
        u33 = (((u18 * u21) + u24) + u28);
    }
    u39 = *(float *)0xC0B7340;
    u55 = u33;
    if ((int)((*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4))) + (*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC)))) > 0) {
        t40 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        t41 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        t42 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        u43 = ((float)(t40 + t41) / u1);
        if (((float)(t40 + t41) / u1) > 1.0f) {
            u43 = 1.0f;
        }
        t45 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        u46 = ((((float)t42 / (float)(t45 + t42)) / u39) * u43);
        if (((((float)t42 / (float)(t45 + t42)) / u39) * u43) > 1.0f) {
            u46 = 1.0f;
        }
        u48 = u33;
        u48 = u48 + (1.0f + 1.0f) * u46;
        u55 = u48;
    }
    t59 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x14));
    t60 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x10));
    u61 = (float)(t59 - t60);
    if (!((float)(t59 - t60) > 0.0f)) {
        u61 = 1.0f;
    }
    t63 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
    t64 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
    u65 = *(float *)0xC0B7344;
    u66 = (((float)(t64 + t63) / u61) * u65);
    if ((((float)(t64 + t63) / u61) * u65) > (1.0f + 1.0f)) {
        u66 = (1.0f + 1.0f);
    }
    t68 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x10));
    u69 = *(float *)0xC0B7348;
    u70 = ((float)t68 * u69);
    if (((float)t68 * u69) > u39) {
        u70 = u39;
    }
    t72 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x18));
    u73 = ((float)t72 * u65);
    if (((float)t72 * u65) > u39) {
        u73 = u39;
    }
    t75 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x1C));
    u76 = *(float *)0xC0B734C;
    *(volatile float *)0xC0B7350;
    u78 = (((u55 + u66) + u70) + u73);
    u78 = u78 + u76 * (float)t75;
    
    return u76;
}

int kmiExecuteDMAChain(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t11;
    int t14;

    t0 = *(int *)0xC9522F0;
    t1 = *(int *)0xC9522F4;
    *(unsigned int *)(((((t1 << 8) + 0xC9520DC) + (((t0 << 2) << 2) << 1)) + 0x18)) = ((*(int *)(((((t1 << 8) + 0xC9520DC) + (((t0 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC);
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((0xC9522E8 + (t3 << 2)));
        if (((*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x18))) & 0x3) == 1) {
            break;
        }
        t3 = (t3 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x2) {
            return 0x0;
        }
    }
    *(unsigned int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
    *(unsigned int *)0xFFA00020 = (*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x4)));
    *(unsigned int *)0xFFA00024 = (((*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x14))) >> 2) >> 2) >> 1);
    t11 = 0x241;
    if (((*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
        t11 = 0x2C1;
    }
    t14 = t11;
    if (((*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
        t14 = (t11 | 0x1000);
    }
    *(unsigned int *)0xFFA0002C = t14;
    *(unsigned int *)0xA05F6800 = (*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0xC)));
    *(unsigned int *)0xA05F6804 = (*(int *)(((((t3 << 8) + 0xC9520DC) + (((t4 << 2) << 2) << 1)) + 0x14)));
    *(unsigned int *)0xA05F6808 = 0x1;
    *(unsigned int *)0xC9522F0 = t4;
    *(unsigned int *)0xC9522F4 = t3;
    *(unsigned int *)((((t3 << 2) + 0xC9522E8) + 0x0)) = (((*(int *)((((t3 << 2) + 0xC9522E8) + 0x0))) + 0x1) & 0x7);
    return 0x1;
}

int FUN_0c041370(int a4)
{
    int t0;
    int t7;
    int t1;
    int t3;
    int t11;
    int t15;
    int t25;
    int t27;
    int t45;
    int t48;
    int t39;
    int t31;
    int t20;
    int stk[5];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t7 = t0;
                    if (t0 != 4) {
                    } else {
                        t1 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t1 - 1);
                        t3 = 0x3AC;
                        if ((int)(t1 - 1) < 0) {
                            *(unsigned int *)((a4 + 0x474)) = 0xC02CC94;
                            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                            t3 = (FUN_0c03f4bc(a4));
                        }
                        t7 = t3;
                    }
                    t20 = t7;
                } else {
                    t11 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t11 - 1);
                    t15 = 0x3AC;
                    if ((int)(t11 - 1) < 0) {
                        { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0xC0F57A4); }
                        FUN_0c0a4c2a(a4, ((int)stk + 4), *(Stk2 *)(((int)stk + 4)));
                        *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                        *(unsigned int *)((a4 + 0x308)) = 0x64;
                        *(unsigned int *)((a4 + 0x304)) = (*(int *)((a4 + 0x308)));
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t15 = 0x4EC;
                    }
                    t20 = t15;
                }
                t31 = t20;
            } else {
                t25 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t25 - 1);
                t27 = 0x3AC;
                if ((int)(t25 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t27 = 0x4EC;
                }
                t31 = t27;
            }
            t39 = t31;
        } else {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0xC0F579C); }
            FUN_0c0a4c02(a4, ((int)stk + 4), *(Stk2 *)(((int)stk + 4)));
            *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            t39 = (FUN_0c0412b8(a4));
        }
        t48 = t39;
    } else {
        t45 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((0xC205CB8 + ((((t45 << 1) + t45) << 2) << 1))); }
        *(unsigned int *)((a4 + 0x514)) = 0x1;
        *(unsigned int *)((a4 + 0x508)) = 0x1;
        FUN_0c034fbc(a4, 0x200, 0x0, 0x0);
        *(unsigned int *)((a4 + 0x508)) = 0x0;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t48 = 0x4EC;
    }
    return t48;
}

int FUN_0c0a5cc6(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t6;
    int t9;
    int t24;
    int t29;
    int t35;
    int t49;
    int t0;
    int t1;
    int t2;
    int t3;

    t4 = 0xC2497C0;
    t5 = a6;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x2) {
            break;
        }
        t2 = t6;
        t2 = (t2 << 2);
        t2 = (t2 << 2);
        t2 = (t2 + 0xC249914);
        t9 = *(int *)((t2 + 0x0));
        t3 = (*(int *)((t9 + 0x0)));
        if (t3 != 0) {
            t1 = 0xC24990C;
            t5 = 0x1;
            t2 = 0x8000;
            *(unsigned int *)((t4 + 0x0)) = t5;
            t0 = (*(short *)((t4 + 0x4)));
            *(unsigned short *)((t4 + 0x6)) = t0;
            t0 = t6;
            t0 = (t0 << 2);
            t0 = (*(int *)((t1 + t0)));
            t5 = (*(int *)((t9 + 0x8)));
            if (t0 == 5) {
                t0 = (*(short *)((t9 + 0x1C)));
                t24 = ((int)t0 > (int)0x40);
                t0 = (*(short *)((t9 + 0x1C)));
                if (t24) {
                    t5 = (t5 | t2);
                }
                if ((int)t0 >= (int)0xFFFFFFC0) {
                } else {
                    t2 = 0x4000;
                    t5 = (t5 | t2);
                }
            } else {
                t0 = (*(short *)((t9 + 0x18)));
                t1 = 0x80;
                t0 = (unsigned short)t0;
                t29 = ((int)t0 > (int)t1);
                t0 = (*(short *)((t9 + 0x1A)));
                if (t29) {
                    t5 = (t5 | t2);
                }
                t0 = (unsigned short)t0;
                if ((int)t0 > (int)t1) {
                    t2 = 0x4000;
                    t5 = (t5 | t2);
                }
            }
            t0 = (*(short *)((t9 + 0x1E)));
            t35 = ((int)t0 > (int)0x40);
            t0 = (*(short *)((t9 + 0x1E)));
            if (t35) {
                t2 = 0x2000;
                t5 = (t5 | t2);
            }
            if ((int)t0 < (int)0xFFFFFFC0) {
                t2 = 0x1000;
                t5 = (t5 | t2);
            }
            t0 = t5;
            *(unsigned short *)((t4 + 0x4)) = t0;
            t0 = (*(short *)((t4 + 0x6)));
            t0 = (~t0);
            t0 = (t0 & t5);
            *(unsigned short *)((t4 + 0x8)) = t0;
            t0 = (~t5);
            t3 = t0;
            t0 = (*(short *)((t4 + 0x6)));
            t0 = (t0 & t3);
            *(unsigned short *)((t4 + 0xA)) = t0;
            t0 = (*(short *)((t9 + 0x18)));
            *(unsigned char *)((t4 + 0xC)) = t0;
            t0 = (*(short *)((t9 + 0x1A)));
            *(unsigned char *)((t4 + 0xD)) = t0;
            t0 = (*(short *)((t9 + 0x1C)));
            *(unsigned char *)((t4 + 0xE)) = t0;
            t0 = (*(short *)((t9 + 0x1E)));
            *(unsigned char *)((t4 + 0xF)) = t0;
        } else {
            *(unsigned int *)((t4 + 0x0)) = 0x0;
        }
        t4 = (t4 + 0x10);
        t6 = (t6 + 0x1);
    }
    *(unsigned int *)0xC2498F4 = ((unsigned short)(*(short *)0xC2497C8) | (unsigned short)(*(short *)0xC2497D8));
    t49 = *(short *)0xC2497D4;
    *(unsigned int *)0xC2498F8 = ((unsigned short)(*(short *)0xC2497C4) | (unsigned short)t49);
    return (unsigned short)t49;
}
