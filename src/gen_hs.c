/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01db0e(int, int);
int FUN_0c022838(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c022a64(int);
int FUN_0c0278d0(int, int);
extern int FUN_0c02a19a();
int FUN_0c02a416(int);
int FUN_0c034d0c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035280(int, int, int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c038ce0(int);
int FUN_0c044060(int);
int FUN_0c046170(int, float);
int FUN_0c046b50(void);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c0652a2(int, int, int, int, float);
int FUN_0c065340(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c070114(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c085704(int);
int FUN_0c0a447c(int, int);
int FUN_0c0a44c6(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0b3254(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb134(int);
int FUN_0c0bbbf4(int);
int FUN_0c0bdec2(int);
int FUN_0c0c465c(int);
int FUN_0c0c4844(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e20e6(int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0ac1a8(int a4);
int FUN_0c03b568(int a4);
int FUN_0c0b0302(int a4, int a5, int a6, int a7);
int FUN_0c0b2fb0(int a4);
int FUN_0c05cf94(int a4, int a5);
float FUN_0c07056c(int a4);
int FUN_0c02800c(int a4, int a5, int a6, int a7);
int FUN_0c0a2d84(int a4, int a5, int a6, int a7);
int FUN_0c0482a8(int a4, int a5, int a6, int a7);
int FUN_0c025d64(int a4, int a5, int a6, int a7);
int FUN_0c044092(int a4, int a5, int a6);

int FUN_0c0ac1a8(int a4)
{
    int stk[15];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_0 = (v0_4);
    v0_1 = (0xC24FA64);
    if (((*(int *)0xC24FA64) != 0)) goto L_C0AC1C6;
    L_C0AC44A:;
    return R0;
    L_C0AC1C6:;
    nlPushMatrix((*(int *)0xC24FA34));
    v0_2 = *(int *)((v0_1 + 0x0));
    FUN_0c0a79fa((((int)stk + 4) + 0x10), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x14));
    v0_2 = ((v0_2 + 0x58));
    v0_3 = (0xC24FA38);
    v0_4 = (0xC0DB470);
    v0_4 = ((*(int *)((v0_1 + 0x0))));
    v0_5 = (0xC24FA34);
    if (((int)(*(int *)0xC24FA38) >= (int)0x14E)) goto L_C0AC204;
    *(unsigned int *)((v0_4 + 0x50)) = ((*(int *)(((int)stk + 16))) + 0x1555);
    FUN_0c0db470(0xC10E718, v0_2);
    L_C0AC21E:;
    v0_4 = *(int *)((v0_0 + 0x30));
    R0 = (v0_4);
    if ((v0_4 == 0)) goto L_C0AC2A4;
    if (!((R0 != 1))) goto L_C0AC32A;
    if ((R0 != 2)) goto L_C0AC234;
    goto L_C0AC348;
    L_C0AC32A:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x122)) goto L_C0AC342;
    FUN_0c0db470(0xC10EA04, 0xC247EA8);
    v0_4 = (0xC10EA10);
    v0_0 = (0xC247EB4);
    L_C0AC440:;
    FUN_0c0db470(v0_4, v0_0);
    L_C0AC444:;
    R0 = ((nlPopMatrix(0x1)));
    goto L_C0AC44A;
    L_C0AC342:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    L_C0AC348:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x14E)) goto L_C0AC360;
    FUN_0c0db470(0xC10EA1C, 0xC247EA8);
    v0_4 = (0xC10EA28);
    v0_0 = (0xC247EB4);
    goto L_C0AC440;
    L_C0AC360:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    L_C0AC366:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x1B2)) goto L_C0AC378;
    v0_4 = (((*(int *)0xC246FFC) + 0x30));
    v0_0 = (0xC247EB4);
    goto L_C0AC440;
    L_C0AC378:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    L_C0AC37E:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x1DA)) goto L_C0AC400;
    *(float *)0xC247ECC = (*(float *)(((*(int *)((v0_5 + 0x0))) + 0x30)));
    *(float *)0xC247ED0 = (*(float *)(((*(int *)((v0_5 + 0x0))) + 0x34)));
    *(float *)0xC247ED4 = (*(float *)(((*(int *)((v0_5 + 0x0))) + 0x38)));
    v0_4 = (0xC247ECC);
    goto L_C0AC444;
    L_C0AC400:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    L_C0AC406:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x3BA)) goto L_C0AC42E;
    FUN_0c0db470(0xC10EA34, 0xC247EA8);
    FUN_0c0db470(0xC10EA40, 0xC247EB4);
    FUN_0c0db470(0xC10EA4C, 0xC247EC0);
    v0_4 = (0xC10EA58);
    v0_0 = (0xC247ECC);
    goto L_C0AC440;
    L_C0AC42E:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    L_C0AC434:;
    FUN_0c0db470(0xC10EA64, 0xC247EA8);
    v0_4 = (0xC10EA70);
    v0_0 = (0xC247EB4);
    goto L_C0AC440;
    L_C0AC234:;
    if ((R0 != 3)) goto L_C0AC23C;
    goto L_C0AC366;
    L_C0AC23C:;
    if ((R0 != 4)) goto L_C0AC244;
    goto L_C0AC37E;
    L_C0AC244:;
    if ((R0 != 5)) goto L_C0AC24C;
    goto L_C0AC406;
    L_C0AC24C:;
    if ((R0 != 6)) goto L_C0AC254;
    goto L_C0AC434;
    L_C0AC254:;
    goto L_C0AC444;
    L_C0AC2A4:;
    if (((int)(*(int *)((v0_3 + 0x0))) >= (int)0x96)) goto L_C0AC324;
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 28)) = (*(int *)0xC247000);
    nlRotateAX((*(int *)(((0xB4 + v0_2) + 0x18))));
    nlRotateAZ((*(int *)(((0xB4 + v0_2) + 0x1C))));
    nlRotateAY((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x50))));
    FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    nlUnitMatrix();
    FUN_0c0dcca0((0xB4 + v0_2));
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    FUN_0c0db470(0xC10E9F8, ((*(int *)(((int)stk + 28))) + 0x30));
    nlPopMatrix(0x1);
    if (((*(int *)((v0_3 + 0x0))) == -30)) goto L_C0AC316;
    goto L_C0AC444;
    L_C0AC316:;
    *(float *)(((*(int *)((v0_1 + 0x0))) + 0x4C)) = 1.83111042e-05f;
    goto L_C0AC444;
    L_C0AC324:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    goto L_C0AC32A;
    L_C0AC204:;
    *(float *)((v0_4 + 0x4C)) = 4.57777642e-05f;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x54)) = 0x2000;
    nlAddVector(v0_2, ((*(int *)((v0_1 + 0x0))) + 0x40));
    goto L_C0AC21E;
}

int FUN_0c03b568(int a4)
{
    int stk[17];
    register int t0;
    register float u4;
    register int t36;
    register int t79;
    register int t80;
    register int t82;
    register int t85;
    register int t86;
    register float u29;
    register float u22;
    register float u16;
    register float u10;
    register int t33;
    register int t34;

    t0 = *(int *)((a4 + 0x578));
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && (t0 != 3)))) {
        if ((t0 != 4) && (t0 != 5)) {
            if (t0 != 6) {
                if (t0 != 7) {
                    u4 = 0.0f;
                    if ((t0 == 8) || (t0 == 9)) {
                        u4 = ((float)(*(int *)((a4 + 0x57C))) * 0.599999964f);
                    }
                    u10 = u4;
                } else {
                    u10 = ((float)(*(int *)((a4 + 0x57C))) * 0.649999976f);
                }
                u16 = u10;
            } else {
                u16 = ((float)(*(int *)((a4 + 0x57C))) * 0.649999976f);
            }
            u22 = u16;
        } else {
            u22 = ((float)(*(int *)((a4 + 0x57C))) * 0.549999952f);
        }
        u29 = u22;
    } else {
        u29 = ((float)(*(int *)((a4 + 0x57C))) * 0.649999976f);
    }
    if (((int)(*(int *)((a4 + 0x1C4))) < (int)0x10) && (t33 = *(int *)((a4 + 0x1C4)), t34 = *(int *)((0xC247030 + (t33 << 2))), t34 == 4)) {
        nlPushMatrix(0x0);
        t36 = *(int *)((a4 + 0x1C4));
        nlUnitMatrix();
        nlRotateAY((-(*(short *)((a4 + 0x6E)))));
        *(float *)(((int)stk + 36)) = ((-(*(float *)((((((((t36 << 1) + t36) << 2) << 2) << 2) + 0xC23F268) + 0x0)))) + (*(float *)((a4 + 0x30))));
        *(float *)(((int)stk + 40)) = ((-(*(float *)((((((((t36 << 1) + t36) << 2) << 2) << 2) + 0xC23F268) + 0x4)))) + (*(float *)((a4 + 0x34))));
        *(float *)(((int)stk + 44)) = ((-(*(float *)((((((((t36 << 1) + t36) << 2) << 2) << 2) + 0xC23F268) + 0x8)))) + (*(float *)((a4 + 0x38))));
        FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
        *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 24)));
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
        *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
        nlPopMatrix(0x1);
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    } else {
        *(unsigned short *)(((int)stk + 4)) = ((*(short *)((a4 + 0x1D8))) + 0x8000);
        *(unsigned short *)(((int)stk + 8)) = ((*(short *)((a4 + 0x1DC))) + 0x8000);
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((*(short *)((a4 + 0x6E))) + (unsigned short)(*(short *)(((int)stk + 8)))));
    nlRotateAX((unsigned short)(*(short *)(((int)stk + 4))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = u29;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c038ce0(a4);
    if ((int)(*(int *)((a4 + 0x584))) < (int)0x2) {
        t79 = *(int *)((a4 + 0x4F0));
        t80 = *(int *)(((0x584 + a4) + 0x0));
        t82 = *(int *)(((0x5A4 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + ((((*(int *)((((((t79 << 2) + t79) << 2) + 0xC1F8E3C) + 0x10))) + 0x84) + ((((t80 << 1) + t80) << 2) << 2)) + (((t82 << 1) + t82) << 2)))));
    } else {
        t85 = *(int *)((a4 + 0x4F0));
        t86 = *(int *)(((0x584 + a4) + 0x0));
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + (((*(int *)((((((t85 << 2) + t85) << 2) + 0xC1F8E3C) + 0x10))) + 0xE4) + ((((t86 - 2) << 1) + (t86 - 2)) << 2)))));
    }
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x200;
    *(unsigned int *)((a4 + 0x210)) = 0x7;
    *(unsigned int *)((a4 + 0x4C4)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0xD;
    return (FUN_0c022a64(a4));
}

int FUN_0c0b0302(int a4, int a5, int a6, int a7)
{
    int stk[21];
    register float u5;
    register int t7;
    register float u8;
    register float u14;
    register int t17;
    register float u19;
    register float u25;
    register int t36;
    register float u44;
    register float u48;
    register int t61;
    register float u64;
    register float u68;

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
    u5 = 0.299999982f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u5 = 1.0f;
    }
    *(float *)(((int)stk + 4)) = u5;
    t7 = *(int *)((a4 + 0x34));
    u8 = ((float)t7 * 0.0333333313f);
    if (1.0f > ((float)t7 * 0.0333333313f)) {
        u8 = 1.0f;
    }
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC2024CC);
    nlScale(u8, u8, u8);
    u14 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 24)) = (u14 * 1.0f);
    FUN_0c0848bc((u14 * 1.0f), (u14 * 0.869999945f), (u14 * 0.459999979f));
    nlPushMatrix(0x0);
    t17 = 0x0;
    for (;;) {
        *(float *)(((int)stk + 32)) = ((float)t17 * 0.0f);
        nlPushMatrix(0x0);
        u19 = *(float *)(((int)stk + 32));
        nlScale((u19 + 1.32999992f), (u19 + 1.32999992f), (u19 + 1.32999992f));
        nlRotateAY((t17 * 0x80B));
        nlRotateAX((t17 * 0x926));
        nlRotateAZ((((*(int *)0xC23A258) + t17) * 0x74));
        u25 = ((u19 + 1.32999992f) * u8);
        FUN_0c0de000((u25 * 1.0f));
        FUN_0c0c465c(0x1D8);
        nlPopMatrix(0x1);
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    FUN_0c0848bc((*(float *)(((int)stk + 24))), ((*(float *)(((int)stk + 4))) * 0.859999955f), ((*(float *)(((int)stk + 4))) * 0.549999952f));
    nlPushMatrix(0x0);
    t36 = 0x0;
    for (;;) {
        *(float *)(((int)stk + 28)) = ((float)t36 * 0.0f);
        nlPushMatrix(0x0);
        nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CE))));
        nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CC))));
        u44 = *(float *)(((int)stk + 28));
        *(float *)(((int)stk + 16)) = (u44 + 17.2999992f);
        nlScale((u44 + 17.2999992f), (u44 + 17.2999992f), 1.0f);
        nlRotateAZ((t36 * 0x3723));
        u48 = ((*(float *)(((int)stk + 16))) * u8);
        FUN_0c0de000((u48 * 1.0f));
        FUN_0c0c465c(0x3DA);
        nlPopMatrix(0x1);
        t36 = (t36 + 0x1);
        if ((int)t36 >= (int)0x5) {
            break;
        }
    }
    nlPopMatrix(0x1);
    FUN_0c0848bc((*(float *)(((int)stk + 24))), ((*(float *)(((int)stk + 4))) * (*(float *)0xC0B0658)), ((*(float *)(((int)stk + 4))) * (*(float *)0xC0B0654)));
    nlPushMatrix(0x0);
    t61 = 0x0;
    for (;;) {
        *(float *)(((int)stk + 20)) = ((float)t61 * 0.0f);
        nlPushMatrix(0x0);
        nlRotateAX(0x4000);
        u64 = *(float *)(((int)stk + 20));
        *(float *)(((int)stk + 8)) = (u64 + 17.2999992f);
        nlScale((u64 + 17.2999992f), (u64 + 17.2999992f), 1.0f);
        nlRotateAZ((t61 * 0x3723));
        u68 = ((*(float *)(((int)stk + 8))) * u8);
        FUN_0c0de000((u68 * 1.0f));
        FUN_0c0c465c(0x3DA);
        nlPopMatrix(0x1);
        t61 = (t61 + 0x1);
        if ((int)t61 >= (int)0x5) {
            break;
        }
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}

int FUN_0c0b2fb0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = 0x1;
    if ((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC2475A4))) != 0) {
        t1 = 0x0;
    }
    t2 = *(int *)(((*(int *)0xC23ECFC) + 0x1C));
    *(unsigned int *)((a4 + 0x3CC)) = (((((t1 << 1) + t1) << 2) << 1) + t2);
    *(unsigned int *)((a4 + 0x3D0)) = (*(int *)(((((((t1 << 1) + t1) << 2) << 1) + t2) + 0x14)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((((t1 << 1) + t1) << 2) << 1) + t2) + 0x8)); }
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3B4)) = 0x0;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    *(unsigned int *)((a4 + 0x32C)) = 0x0;
    *(float *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC24758C)) = 0.0f;
    *(unsigned int *)0xC23EDB0 = 0x1;
    *(unsigned int *)((a4 + 0x0)) = 0xC0B301E;
    t1 = *(int *)((a4 + 0x3CC));
    t2 = *(int *)((a4 + 0x3D0));
    t3 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t3 + 0x1);
    t4 = *(short *)((t1 + 0x4));
    if ((int)(t3 + 0x1) > (int)t4) {
        *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)((t2 + 0x4))) - 1);
        *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)((t2 + 0x8)));
        if (((unsigned short)(*(short *)((t2 + 0xA))) & 0x100) != 0) {
            *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
        } else {
            *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        }
        *(unsigned int *)((a4 + 0xA4)) = 0xA7D;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((t2 + 0x2)));
        *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)((t2 + 0xA)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        FUN_0c0bb134(a4);
        *(unsigned int *)((a4 + 0xC0)) = ((*(int *)((a4 + 0xC0))) + 0x1);
        FUN_0c0ba6e8(a4);
        FUN_0c0ba776(a4);
        *(unsigned int *)((a4 + 0x0)) = 0xC0B30F4;
        t1 = *(int *)((a4 + 0x3D0));
        FUN_0c085704(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
        FUN_0c0bbbf4(a4);
        t2 = *(short *)((t1 + 0x6));
        if (((short)t2 != 0) && (t0 = *(int *)((a4 + 0x2B4)), (short)t2 == t0)) {
            if ((*(int *)((a4 + 0x3AC))) == 0) {
                if ((*(short *)(((t1 + 0xC) + 0x2))) != -1) {
                    t0 = *(short *)(((t1 + 0xC) + 0x2));
                    t2 = t0;
                    if (t0 == -2) {
                    } else {
                        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t1 + 0xC) + 0x2)));
                        *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)(((t1 + 0xC) + 0xA)));
                        *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t1 + 0xC) + 0x4))) - 1);
                        if ((unsigned short)(*(short *)(((t1 + 0xC) + 0x8))) != 0xFFFF) {
                            *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t1 + 0xC) + 0x8)));
                        }
                        *(unsigned int *)((a4 + 0x3D0)) = (t1 + 0xC);
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t1 + 0xC) + 0x0)));
                        if (((unsigned short)(*(short *)(((t1 + 0xC) + 0xA))) & 0x100) != 0) {
                            *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
                        } else {
                            *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
                        }
                        t2 = 0x20C;
                    }
                    t0 = t2;
                } else {
                    t2 = 0xBC;
                    if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                        *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t1 + 0xC) + 0x0)));
                        t3 = FUN_0c0b3254(a4);
                        *(unsigned int *)0xC23EDB0 = 0x0;
                        t2 = t3;
                    }
                    t0 = t2;
                }
                t2 = t0;
            } else {
                *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                t2 = 0x2CC;
            }
            t0 = t2;
        } else {
            t2 = *(int *)((a4 + 0x2EC));
            t3 = t2;
            if ((t2 & 12) != 0) {
                if ((*(int *)((a4 + 0x3AC))) == 0) {
                    t2 = *(short *)(((t1 + 0xC) + 0x2));
                    if (t2 == -1) {
                        t5 = 0xBC;
                        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                            *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t1 + 0xC) + 0x0)));
                            t6 = FUN_0c0b3254(a4);
                            *(unsigned int *)0xC23EDB0 = 0x0;
                            t5 = t6;
                        }
                        t6 = t5;
                    } else {
                        t5 = t2;
                        if (t2 != -2) {
                            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t1 + 0xC) + 0x2)));
                            *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)(((t1 + 0xC) + 0xA)));
                            *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t1 + 0xC) + 0x4))) - 1);
                            if ((unsigned short)(*(short *)(((t1 + 0xC) + 0x8))) != 0xFFFF) {
                                *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t1 + 0xC) + 0x8)));
                            }
                            *(unsigned int *)((a4 + 0x3D0)) = (t1 + 0xC);
                            *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t1 + 0xC) + 0x0)));
                            if (((unsigned short)(*(short *)(((t1 + 0xC) + 0xA))) & 0x100) != 0) {
                                *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
                            } else {
                                *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
                            }
                            t5 = 0x20C;
                        }
                        t6 = t5;
                    }
                    t1 = t6;
                } else {
                    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
                    t1 = 0x3AC;
                }
                t3 = t1;
            }
            t0 = t3;
        }
        return t0;
    }
    return t4;
}

int FUN_0c05cf94(int a4, int a5)
{
    int stk[31];
    register int t1;
    register int t4;
    register int t10;
    register int t36;

    *(unsigned int *)(((int)stk + 4)) = 0x1;
    t1 = FUN_0c0e19aa(0xC05CB48, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t4 = FUN_0c0e19aa(0xC08C20E, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t4);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x3C)) = *(struct mv3 *)(0xC0F9BCC); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x24)) = *(struct mv6 *)(0xC0F9BD8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(0xC0F9BF0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0F9BFC); }
    FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x48) + 0x8);
    FUN_0c0a79fa((((int)stk + 4) + 0x48), ((((int)stk + 4) + 0x48) + 0x4), ((((int)stk + 4) + 0x48) + 0x8));
    t10 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = ((((t10 << 1) + t10) << 2) + (((int)stk + 4) + 0x24));
    FUN_0c0db470(((((t10 << 1) + t10) << 2) + (((int)stk + 4) + 0x24)), (t1 + 0x30));
    FUN_0c0dcca0((*(int *)(((int)stk + 12))));
    FUN_0c0dcc70(0.0f, 1.0f, 16.0f);
    nlGetMatrix((t4 + 0x30));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 4) + 0x48) + 0x4) + 0x0))));
    nlRotateAX((*(int *)(((((int)stk + 4) + 0x48) + 0x0))));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
    FUN_0c0db470((((int)stk + 4) + 0x3C), (t1 + 0x48));
    FUN_0c0a7714((((int)stk + 4) + 0x48), ((((int)stk + 4) + 0x48) + 0x4), (*(float *)((t1 + 0x48))), (*(float *)((t1 + 0x4C))), (*(float *)((t1 + 0x50))));
    *(unsigned short *)((t1 + 0x6E)) = (*(int *)((((((int)stk + 4) + 0x48) + 0x4) + 0x0)));
    *(unsigned short *)((t1 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x48) + 0x0)));
    nlPopMatrix(0x1);
    FUN_0c0cc3f8(0xF28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t36 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t36 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t36;
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    *(unsigned int *)((t1 + 0x220)) = 0x124E;
    *(float *)((t1 + 0x238)) = 1.19999993f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned short *)((t4 + 0x9A)) = 0x40A;
    *(unsigned short *)((t4 + 0xA2)) = 0x1;
    *(unsigned short *)((t4 + 0xA0)) = 0x3;
    *(float *)((t4 + 0x90)) = 1.0f;
    return 0x90;
}

float FUN_0c07056c(int a4)
{
    int stk[41];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_1 = *(int *)((v0_2 + 0x34));
    v0_4 = *(int *)((v0_2 + 0x54));
    *(int *)((int)stk + 4) = (v0_1 - v0_4);
    FUN_0c0da2e0();
    v0_5 = FUN_0c0e5f1c();
    v0_3 = (v0_5);
    v0_0 = (0xC0DA2E0);
    v0_0 = (v0_2);
    if (((int)(v0_1 - v0_4) > (int)v0_5)) goto L_C0705AA;
    L_C0707E4:;
    return F0;
    L_C0705AA:;
    { struct mv14 { int w[14]; }; *(struct mv14 *)((((int)stk + 8) + 0x34)) = *(struct mv14 *)(0xC0FC318); }
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((v0_0 + 0x70)));
    v0_1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 12)) = 0xC246FF0;
    w0_1 = *(float *)((v0_1 + 0x278));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_1 = (0x0);
    v0_2 = (0x4);
    v0_3 = (0xC);
    w0_0 = ((w0_1 + -60.0f));
    w0_1 = ((w0_1 + 60.0f));
    L_C0705E4:;
    v0_4 = *(int *)((((v0_2 << 2) + ((*(int *)(((int)stk + 12))) + 0x40)) + 0x0));
    v0_5 = (v0_4);
    if ((v0_4 == 4)) goto L_C070608;
    if ((v0_5 == 2)) goto L_C070608;
    if ((v0_5 != 3)) goto L_C07061A;
    L_C070608:;
    v0_4 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + 0x1);
    *(unsigned int *)((((((v0_4 + 0x1) - 1) << 2) + (((int)stk + 8) + 0x14)) + 0x0)) = v0_2;
    L_C07061A:;
    v0_4 = (int)(v0_2 + 0x1) < (int)v0_3;
    v0_2 = ((v0_2 + 0x1));
    if (v0_4) goto L_C0705E4;
    v0_3 = (0x58);
    if ((!((*(float *)((v0_0 + 0x58))) > w0_0))) goto L_C07062A;
    w0_0 = ((*(float *)((v0_0 + v0_3))));
    L_C07062A:;
    v0_3 = (0x64);
    if ((!(w0_1 > (*(float *)((v0_0 + 0x64)))))) goto L_C070634;
    w0_1 = ((*(float *)((v0_0 + v0_3))));
    L_C070634:;
    *(unsigned int *)(((int)stk + 16)) = v0_1;
    v0_2 = (0x3E8);
    w0_2 = ((w0_1 - w0_0));
    w0_3 = (15.0f);
    w0_1 = (1000.0f);
    L_C070708:;
    if (!(((int)(*(int *)(((int)stk + 16))) < (int)0x4))) goto L_C070710;
    *(unsigned int *)(((int)stk + 24)) = 0x1;
    FUN_0c0da2e0();
    w0_4 = w0_0;
    w0_4 = w0_4 + w0_2 * ((float)(FUN_0c0e5f1c()) / w0_1);
    *(float *)(((int)stk + 60)) = w0_4;
    FUN_0c0da2e0();
    w0_4 = (*(float *)((v0_0 + 0x60)));
    w0_4 = w0_4 + ((*(float *)((v0_0 + 0x6C))) - (*(float *)((v0_0 + 0x60)))) * ((float)(FUN_0c0e5f1c()) / w0_1);
    *(float *)(((int)stk + 68)) = w0_4;
    v0_2 = ((((int)stk + 8) + 0x14));
    v0_3 = (v0_1);
    if (((int)(*(int *)(((int)stk + 8))) <= 0)) goto L_C0706FC;
    goto L_C0706CE;
    L_C070710:;
    FUN_0c0da2e0();
    w0_0 = (*(float *)((v0_0 + 0x5C)));
    w0_0 = w0_0 + ((*(float *)((v0_0 + 0x68))) - (*(float *)((v0_0 + 0x5C)))) * ((float)(FUN_0c0e5f1c()) / w0_1);
    *(float *)(((int)stk + 64)) = w0_0;
    *(unsigned short *)(((((int)stk + 8) + 0x40) + 0x0)) = (FUN_0c0da2e0());
    *(unsigned short *)(((((int)stk + 8) + 0x42) + 0x0)) = (FUN_0c0da2e0());
    *(unsigned short *)(((((int)stk + 8) + 0x44) + 0x0)) = (FUN_0c0da2e0());
    *(unsigned short *)(((int)stk + 78)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
    FUN_0c0da2e0();
    *(float *)(((int)stk + 92)) = ((float)((FUN_0c0e5f1c()) - 5) / w0_1);
    FUN_0c0da2e0();
    *(float *)(((int)stk + 96)) = ((float)((FUN_0c0e5f1c()) - 5) / w0_1);
    FUN_0c0da2e0();
    *(float *)(((int)stk + 100)) = ((float)((FUN_0c0e5f1c()) - 5) / w0_1);
    *(unsigned int *)(((int)stk + 104)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x4)));
    v0_5 = (0x1);
    if (((*(int *)0xC23ED9C) == 4)) goto L_C0707C0;
    *(unsigned short *)(((int)stk + 112)) = v0_1;
    L_C0707C0:;
    FUN_0c070114((((int)stk + 8) + 0x34), v0_5);
    v0_1 = *(int *)((v0_0 + 0x70));
    *(unsigned int *)((v0_0 + 0x70)) = (v0_1 + 0x8);
    if (((*(int *)(((v0_1 + 0x8) + 0x4))) != 0)) goto L_C0707DE;
    *(unsigned int *)((v0_0 + 0x70)) = (*(int *)((v0_0 + 0x74)));
    L_C0707DE:;
    *(unsigned int *)((v0_0 + 0x54)) = (*(int *)((v0_0 + 0x34)));
    v0_3 = (0x54);
    goto L_C0707E4;
    L_C0706CE:;
    v0_4 = *(int *)((((*(int *)((v0_2 + 0x0))) << 2) + (*(int *)(((int)stk + 12)))));
    *(float *)(((int)stk + 64)) = (*(float *)((v0_4 + 0x34)));
    v0_4 = !(w0_3 > (nlLength((((int)stk + 8) + 0x34), (v0_4 + 0x30))));
    if (v0_4) goto L_C0706F2;
    *(unsigned int *)(((int)stk + 24)) = v0_1;
    L_C0706FC:;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_C070710;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C070708;
    L_C0706F2:;
    v0_4 = (int)(v0_3 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    if (v0_4) goto L_C0706CE;
    goto L_C0706FC;
}

int FUN_0c02800c(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t10;
    register int t25;
    register int t29;
    register int t42;
    register int t60;
    register int t68;
    register int t78;
    register int t79;
    register int t81;
    register int t89;
    register int t98;
    register int t104;
    register int t109;
    register int t96;
    register int t76;
    register int t74;
    register int t71;
    register int t94;
    register int t87;
    register int t84;
    register int t92;
    register int t107;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
                        FUN_0c0278d0(a4, 0x1);
                        t10 = *(int *)((a4 + 0x3B0));
                        *(unsigned int *)((a4 + 0x3B0)) = (t10 - 1);
                        if ((int)(t10 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x374)) = 0x0;
                            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                            *(unsigned int *)((a4 + 0x3AC)) = 0x78;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 16)) = *(struct mv4 *)(0xC0F53D8); }
                            *(float *)(((int)stk + 32)) = 0.0f;
                            *(float *)(((int)stk + 36)) = -4.90189981f;
                            *(float *)(((int)stk + 40)) = -14.0120993f;
                            *(int *)((int)stk + 12) = 0x0;
                            *(int *)((int)stk + 8) = 0x0;
                            *(int *)((int)stk + 4) = 0x0;
                            FUN_0c062d4a(a4, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x1C), 0xFFFFEAAB, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                            FUN_0c0372f8(a4, 0x133A9, 0x233A9, (*(int *)((a4 + 0x3AC))));
                        } else {
                            *(volatile int *)((a4 + 0x3B0));
                            *(unsigned int *)(((0x374 + a4) + 0x0)) = (FUN_0c0e5dc0());
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x374)) = 0x0;
                        *(unsigned int *)((a4 + 0x3A0)) = 0x5;
                    }
                    t25 = FUN_0c02a416(a4);
                    if (t25 != 0) {
                        *(unsigned int *)((a4 + 0x374)) = 0x0;
                        *(unsigned int *)((a4 + 0x3A0)) = 0x5;
                    }
                } else {
                    if (t0 == 4) {
                        t29 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t29 - 1);
                        if ((int)(t29 - 1) > (int)0x64) {
                            FUN_0c0278d0(a4, 0x1);
                        }
                        if ((int)(*(int *)((a4 + 0x3AC))) < 0) {
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        }
                    } else {
                        if (t0 == 5) {
                            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 16) + 0x14)) = *(struct mv2 *)(0xC0F53E8); }
                            FUN_0c0a44c6(a4, (((int)stk + 16) + 0x14));
                            t42 = ((int (*)(int))(FUN_0c02a19a))(a4);
                        }
                    }
                }
                t76 = (FUN_0c022838(a4));
            } else {
                if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
                    FUN_0c0278d0(a4, 0x1);
                    t60 = *(int *)((a4 + 0x3B0));
                    *(unsigned int *)((a4 + 0x3B0)) = (t60 - 1);
                    if ((int)(t60 - 1) < 0) {
                        *(float *)(((int)stk + 32)) = 0.0f;
                        *(float *)(((int)stk + 36)) = -4.90189981f;
                        *(float *)(((int)stk + 40)) = -14.0120993f;
                        FUN_0c062f54(a4, (((int)stk + 16) + 0x10), 0x0);
                        *(unsigned int *)((a4 + 0x3B0)) = 0x3C;
                        FUN_0c0372f8(a4, 0x333A9, 0x433A9, (*(int *)((a4 + 0x3B0))));
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t68 = FUN_0c02a416(a4);
                    if (t68 == 0) {
                        t71 = (FUN_0c022838(a4));
                    } else {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t71 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                    t74 = t71;
                } else {
                    t74 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
                }
                t76 = t74;
            }
            t96 = t76;
        } else {
            t78 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t78 - 1);
            if ((int)(t78 - 1) < 0) {
                t79 = FUN_0c034d0c(a4, a5);
                if (t79 != 0) {
                    *(unsigned int *)((a4 + 0x3B0)) = 0x28;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    t81 = FUN_0c02a416(a4);
                    if (t81 == 0) {
                        t84 = (FUN_0c022838(a4));
                    } else {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t84 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                    t87 = t84;
                } else {
                    t87 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
                t94 = t87;
            } else {
                t89 = FUN_0c02a416(a4);
                if (t89 == 0) {
                    t92 = (FUN_0c022838(a4));
                } else {
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    t92 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
                t94 = t92;
            }
            t96 = t94;
        }
        t109 = t96;
    } else {
        t98 = FUN_0c0278d0(a4, 0x0);
        if (t98 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 16) + 0x14)) = *(struct mv2 *)(0xC0F53D0); }
            FUN_0c0a447c(a4, (((int)stk + 16) + 0x14));
            *(unsigned int *)((a4 + 0x3B0)) = 0xA;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        }
        t104 = FUN_0c02a416(a4);
        if (t104 == 0) {
            t107 = (FUN_0c022838(a4));
        } else {
            *(unsigned int *)((a4 + 0x534)) = 0x0;
            t107 = (((int (*)(int))(FUN_0c02a19a))(a4));
        }
        t109 = t107;
    }
    return t109;
}

int FUN_0c0a2d84(int a4, int a5, int a6, int a7)
{
    int stk[30];
    register int t1;
    register int t13;
    register int t93;
    register float t20;
    register float u21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t50;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t57;
    register int t62;
    register float u63;
    register float u69;
    register float u70;
    register int t71;
    register int t72;
    register int t82;
    register int t84;
    register int t89;
    register int t106;
    register int t36;
    register int t37;

    t1 = *(int *)((a4 + 0x30));
    if (((*(int *)0xC23A1A8) & 0x10000001) != 0x10000001) {
        if ((*(int *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030))) == 0) {
            FUN_0c0e19f2(0x10000001, a5, a6, a7);
        }
        t13 = *(int *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030));
        t93 = t13;
        if ((t13 != 3) && (t13 != 4)) {
        } else {
            nlPushMatrix(0x0);
            *(float *)((((0x150 + a4) + 0x100) + 0x0)) = (*(float *)((t1 + 0x30)));
            *(float *)((((0x150 + a4) + 0x100) + 0x4)) = ((*(float *)((t1 + 0x34))) + (*(float *)((t1 + 0x3E8))));
            *(float *)((((0x150 + a4) + 0x100) + 0x8)) = (*(float *)((t1 + 0x38)));
            *(unsigned int *)(((int)stk + 4)) = (0x150 + a4);
            t20 = nlLength((*(int *)(((int)stk + 4))), ((0x150 + a4) + 0x100));
            u21 = *(float *)((a4 + 0x34));
            if (0.5f > (t20 / u21)) {
                t22 = 0x7;
                t23 = 0xC10CFBC;
                t24 = (a4 + 0x38);
                for (;;) {
                    t25 = t23;
                    t23 = (t23 + 0xC);
                    t26 = t24;
                    t24 = (t24 + 0xC);
                    FUN_0c0dce80(t26, t25, 0.5f);
                    t22 = (t22 - 0x1);
                    if (t22 == 0) {
                        break;
                    }
                }
                t36 = t23;
                t37 = t24;
            } else {
                t28 = 0x7;
                t29 = 0xC10CFBC;
                t30 = (a4 + 0x38);
                for (;;) {
                    t31 = t29;
                    t29 = (t29 + 0xC);
                    t32 = t30;
                    t30 = (t30 + 0xC);
                    FUN_0c0dce80(t32, t31, (t20 / u21));
                    t28 = (t28 - 0x1);
                    if (t28 == 0) {
                        break;
                    }
                }
                t36 = t29;
                t37 = t30;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t37) = *(struct mv3 *)(t36); }
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x38) + 0x60);
            *(unsigned int *)(((int)stk + 8)) = 0xC10CF7C;
            t39 = (((0x150 + a4) + 0x100) - 32);
            t40 = 0x7;
            t41 = ((0x150 + a4) + 0x100);
            for (;;) {
                t42 = *(int *)(((int)stk + 4));
                t43 = *(int *)(((int)stk + 8));
                t44 = t39;
                t39 = (t39 - 32);
                *(unsigned int *)(((int)stk + 4)) = (t42 - 12);
                t45 = t41;
                t41 = (t41 - 32);
                FUN_0c0652a2(t45, t44, (t42 - 12), t43, 0.998999953f);
                t40 = (t40 - 0x1);
                if (t40 == 0) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 12)) = (((0x150 + a4) + 0x20) + 0x20);
            *(unsigned int *)(((int)stk + 4)) = (a4 + 0x38);
            *(unsigned int *)(((int)stk + 8)) = 0x8;
            nlUnitMatrix();
            FUN_0c0dcca0(0xC10D01C);
            nlRotateAY(0xFFFFC001);
            t50 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t50 + 0xC);
            FUN_0c0db470(((t50 + 0xC) - 12), ((0x150 + a4) + 0x20));
            t52 = ((0x150 + a4) + 0x20);
            for (;;) {
                t53 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t53 + 0xC);
                t54 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t54 + 0x20);
                t55 = t52;
                t52 = (t52 + 0x20);
                FUN_0c065340(t55, ((t54 + 0x20) - 32), ((t53 + 0xC) - 12));
                t57 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t57 - 1);
                if ((t57 - 1) == 0) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 12)) = (0xB0 + a4);
            *(unsigned int *)(((int)stk + 4)) = 0xC10CFBC;
            *(unsigned int *)(((int)stk + 8)) = 0xC10CFA2;
            nlUnitMatrix();
            FUN_0c0dcca0(0xC10D01C);
            nlRotateAY(0xFFFFC001);
            nlGetMatrix((((int)stk + 4) + 0xC));
            t62 = *(int *)(((int)stk + 8));
            u63 = *(float *)0xC0A3038;
            *(unsigned int *)(((int)stk + 8)) = (t62 + 0x2);
            FUN_0c0c4844((*(short *)((((t62 + 0x2) - 2) + 0x0))), u63);
            FUN_0c0c4844((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))), u63);
            *(unsigned int *)(((int)stk + 8)) = 0xC10CF94;
            u69 = *(float *)0xC0A3044;
            u70 = *(float *)0xC0A3048;
            t71 = 0x7;
            t72 = ((a4 + 0x150) + 0x20);
            for (;;) {
                nlUnitMatrix();
                FUN_0c0dcca0(t72);
                nlRotateAY((*(int *)((t72 + 0x1C))));
                nlRotateAX((*(int *)((t72 + 0x18))));
                nlPushMatrix(0x0);
                nlInvertMatrix(0x0);
                nlMultiMatrix((((int)stk + 4) + 0xC));
                t82 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t82 + 0xC);
                FUN_0c0dcca0(((t82 + 0xC) - 12));
                t84 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t84 + 0x10);
                FUN_0c0bdec2(((t84 + 0x10) - 16));
                nlPopMatrix(0x1);
                nlGetMatrix((((int)stk + 4) + 0xC));
                FUN_0c0de000(u70);
                t89 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t89 + 0x2);
                FUN_0c0c4844((*(short *)((((t89 + 0x2) - 2) + 0x0))), u69);
                t71 = (t71 - 0x1);
                t72 = (t72 + 0x20);
                if (t71 == 0) {
                    break;
                }
            }
            t93 = (nlPopMatrix(0x1));
        }
        t106 = t93;
    }
    return t106;
}

int FUN_0c0482a8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t17;
    register int t32;
    register int t106;
    register int t122;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t1 - 1);
                        if ((int)(t1 - 1) >= 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x2C4)) = 0x5A9;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x3;
                            FUN_0c046b50();
                            FUN_0c0cc3f8(0x42BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            FUN_0c0cc3f8(0x32BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        }
                    } else {
                        if (t0 == 5) {
                            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                                *(unsigned int *)((a4 + 0x2C4)) = 0x5AA;
                                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            }
                        } else {
                            if (t0 == 6) {
                                t17 = *(int *)((a4 + 0x3AC));
                                *(unsigned int *)((a4 + 0x3AC)) = (t17 - 1);
                                if ((int)(t17 - 1) < 0) {
                                    *(unsigned int *)((a4 + 0x2C4)) = 0x5AB;
                                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                                }
                            } else {
                                if (t0 == 7) {
                                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                                        *(unsigned int *)((a4 + 0x2C4)) = 0x5AC;
                                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                                    }
                                } else {
                                    if (t0 == 8) {
                                        FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                                        if ((*(int *)0xC247074) != 1) {
                                            if ((*(int *)0xC2462F4) == 2) {
                                                t32 = ((int (*)(void))(0xC020A64))();
                                                if (t32 != 0) {
                                                    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
                                                    *(unsigned int *)((a4 + 0x2C4)) = 0x5AD;
                                                    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                                                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                                                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
                                            *(unsigned int *)((a4 + 0x2C4)) = 0x5AD;
                                            *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                                        }
                                    } else {
                                        if (t0 == 9) {
                                            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                                                *(unsigned int *)((a4 + 0x534)) = 0x0;
                                                *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                                                *(unsigned int *)((a4 + 0x490)) = ((*(int *)((a4 + 0x490))) - 1);
                                                *(unsigned int *)((a4 + 0x398)) = 0x4B0;
                                                FUN_0c02a19a(a4, a5, a6, a7);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                        *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                        FUN_0c0cc3f8(0xE1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                }
            } else {
                FUN_0c035280(a4, 0x400, 0x1);
                t106 = FUN_0c046170(a4, 0.049999997f);
                if (t106 == 0) {
                } else {
                    *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                    *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                    FUN_0c0cc3f8(0xE1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
            }
        } else {
            FUN_0c035280(a4, 0x400, 0x1);
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x5A8;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = 0x2;
            }
            t122 = FUN_0c046170(a4, 0.049999997f);
            if (t122 == 0) {
            } else {
                *(unsigned int *)((a4 + 0x3A0)) = 0x3;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x5A7;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((0x24C + a4)); }
        *(float *)((a4 + 0x51C)) = ((*(float *)((a4 + 0x51C))) + 60.0f);
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    }
    return FUN_0c022838(a4);
}

int FUN_0c025d64(int a4, int a5, int a6, int a7)
{
    int stk[21];
    register int t1;
    register int t7;
    register int t8;
    register float u33;
    register float u34;
    register float u35;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register int t72;
    register int t73;
    register int t80;
    register int t87;
    register int t88;

    if ((*(int *)((a4 + 0x50C))) == 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
    }
    t7 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
    t8 = *(int *)((a4 + 0x510));
    *(float *)((a4 + 0x3BC)) = (*(float *)(((((((t8 << 1) + t8) << 2) << 2) << 2) + 0xC23F278)));
    *(float *)((a4 + 0x3BC)) = ((*(float *)((a4 + 0x3BC))) - (*(float *)(((0x390 + t7) + 0x0))));
    *(float *)((a4 + 0x3BC)) = ((*(float *)((a4 + 0x3BC))) - 20.0f);
    FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)((t7 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t7 + 0x34))) - (*(float *)((a4 + 0x34)))), ((*(float *)((t7 + 0x38))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((t7 + 0x30))), (*(float *)((a4 + 0x3BC))), (*(float *)((t7 + 0x38))));
    nlRotateAY((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = -20.0f;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x2C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x2C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    u33 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    u34 = *(float *)((a4 + 0x30));
    u35 = *(float *)((a4 + 0x34));
    u36 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
    u37 = *(float *)((a4 + 0x38));
    u38 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
    u39 = ((u36 - u35) * (u36 - u35));
    u39 = u39 + (u33 - u34) * (u33 - u34);
    u40 = u39;
    u40 = u40 + (u38 - u37) * (u38 - u37);
    FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))) - (*(float *)((a4 + 0x30)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x4))) - (*(float *)((a4 + 0x34)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x8))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 4))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0249999985f;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x4B0)) = ((*(float *)((a4 + 0x4B0))) + (*(float *)(((((int)stk + 4) + 0x20) + 0x0))));
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + (*(float *)(((0x4 + (((int)stk + 4) + 0x20)) + 0x0))));
    *(float *)((a4 + 0x4B8)) = ((*(float *)((a4 + 0x4B8))) + (*(float *)(((0x8 + (((int)stk + 4) + 0x20)) + 0x0))));
    *(unsigned int *)((a4 + 0x508)) = 0x1;
    *(unsigned int *)((a4 + 0x514)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t7 + 0x30)); }
    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    if ((*(float *)0xC026020) > _builtin_sqrtf(u40)) {
        *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
    }
    if ((int)(*(int *)((a4 + 0x3AC))) <= (int)0x78) {
        t72 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t72 + 0x1);
        if ((int)(t72 + 0x1) > (int)0x12C) {
            t73 = ((int (*)(int))(FUN_0c02a19a))(a4);
        }
    } else {
        t80 = ((int (*)(int))(FUN_0c02a19a))(a4);
    }
    t87 = FUN_0c02a416(a4);
    if (t87 != 0) {
        t88 = ((int (*)(int))(FUN_0c02a19a))(a4);
    }
    return (FUN_0c02286c(a4, 0x28, (*(float *)((a4 + 0x3BC))), (*(float *)0xC02602C)));
}

int FUN_0c044092(int a4, int a5, int a6)
{
    int stk[12];
    register int t1;
    register int t112;
    register int t11;
    register int t15;
    register int t28;
    register int t43;
    register int t64;
    register int t104;
    register int t97;

    t1 = *(int *)0xC23A258;
    t112 = 0x21C;
    if ((*(int *)((a4 + 0x21C))) == t1) {
    } else {
        *(unsigned int *)((a4 + 0x21C)) = t1;
        if ((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC247030) + 0x0))) == 0) {
            *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246394) + 0x8)) = 0x6;
            t104 = 0x498;
        } else {
            t11 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            if ((int)(*(int *)((a4 + 0x8))) < (int)(*(int *)((t11 + 0x8)))) {
                FUN_0c0e20e6(a4, t11, a6);
                t15 = *(int *)((a4 + 0x8));
                *(unsigned int *)((a4 + 0x8)) = (*(int *)((t11 + 0x8)));
                *(unsigned int *)((t11 + 0x8)) = t15;
            }
            if ((*(int *)((0xC247030 + ((*(int *)((t11 + 0xBC))) << 2)))) == 8) {
                *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246394) + 0x4)) = 0x3;
                *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246394) + 0x8)) = 0x2;
                t97 = 0x498;
            } else {
                if ((*(int *)((a4 + 0xC0))) == 51) {
                    t28 = *(int *)((a4 + 0x510));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t28 << 1) + t28) << 2) << 2) << 2) + 0xC23F268) + 0x24)); }
                    if (((*(int *)((t11 + 0x2D0))) & 0x1) != 0) {
                        *(unsigned int *)((t11 + 0x2D0)) = ((*(int *)((t11 + 0x2D0))) & 0xFFFFFFFE);
                        *(unsigned int *)((a4 + 0x2C4)) = ((*(int *)((t11 + 0x2C8))) + 0x1);
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x2D4)) = (*(int *)((t11 + 0x2D8)));
                    } else {
                        if ((int)(*(int *)((t11 + 0x2B4))) <= 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((t11 + 0x2B4))) - 1);
                        }
                    }
                } else {
                    t43 = *(int *)((a4 + 0x510));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t43 << 1) + t43) << 2) << 2) << 2) + 0xC23F268) + 0x3C)); }
                    if ((0x2 & (*(int *)((t11 + 0x2D0)))) != 0) {
                        *(unsigned int *)((t11 + 0x2D0)) = ((*(int *)((t11 + 0x2D0))) & 0xFFFFFFFD);
                        *(unsigned int *)((a4 + 0x2C4)) = ((*(int *)((t11 + 0x2C8))) + 0x2);
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x2D4)) = (*(int *)((t11 + 0x2D8)));
                    } else {
                        if ((int)(*(int *)((t11 + 0x2B4))) > 0) {
                            *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((t11 + 0x2B4))) - 1);
                        }
                    }
                }
                *(unsigned short *)((a4 + 0x6E)) = (*(short *)((t11 + 0x6E)));
                t64 = *(int *)((a4 + 0xBC));
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 20)) = -3.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
                *(float *)(((((((((t64 << 1) + t64) << 2) << 2) << 2) + 0xC23F268) + 0xB4) + 0x0)) = (*(float *)(((int)stk + 4)));
                *(float *)((((((((((t64 << 1) + t64) << 2) << 2) << 2) + 0xC23F268) + 0xB4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)((((((((((t64 << 1) + t64) << 2) << 2) << 2) + 0xC23F268) + 0xB4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
                nlPopMatrix(0x1);
                *(unsigned int *)((a4 + 0xC8)) = ((*(int *)((a4 + 0xC8))) | 0x400);
                if ((*(int *)((a4 + 0x1BC))) != 0) {
                    *(unsigned int *)((t11 + 0x1BC)) = (*(int *)((a4 + 0x1BC)));
                    *(unsigned int *)((t11 + 0x1C0)) = (*(int *)((a4 + 0x1C0)));
                    *(unsigned int *)((t11 + 0x1C4)) = (*(int *)((a4 + 0x1C4)));
                    *(unsigned int *)((t11 + 0x1CC)) = (int)((float)(*(int *)((a4 + 0x1CC))) / (1.0f + 1.0f));
                    *(unsigned int *)((t11 + 0x1D0)) = (*(int *)((a4 + 0x1D0)));
                    *(float *)((t11 + 0x1D4)) = (*(float *)((a4 + 0x1D4)));
                    *(unsigned int *)((t11 + 0x1D8)) = (*(int *)((a4 + 0x1D8)));
                    *(unsigned int *)((t11 + 0x1DC)) = (*(int *)((a4 + 0x1DC)));
                    *(unsigned int *)((t11 + 0x1E0)) = (*(int *)((a4 + 0x1E0)));
                    if ((*(int *)((a4 + 0xC0))) == 51) {
                        *(unsigned int *)((t11 + 0x1C8)) = 0x3;
                    } else {
                        *(unsigned int *)((t11 + 0x1C8)) = 0x5;
                    }
                    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                    *(unsigned int *)((a4 + 0x1CC)) = 0x0;
                }
                t97 = (FUN_0c044060(a4));
            }
            t104 = t97;
        }
        t112 = t104;
    }
    return t112;
}
