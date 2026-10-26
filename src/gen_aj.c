/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016a86(void);
int FUN_0c01cdf2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01e822(int, int, int, int, int);
float FUN_0c01f172(int);
int FUN_0c05026e(int, int, int, int, int, int);
int FUN_0c050830(int);
int FUN_0c050a30(int, int);
int FUN_0c050aa2(int, int);
int FUN_0c050b2c(int, int);
int FUN_0c050bc2(int);
int FUN_0c050bde(int, int);
int FUN_0c0510be(int);
int FUN_0c0519f0(int);
int FUN_0c051a48(int);
int FUN_0c05477c(int, float);
int FUN_0c056098(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c078018(int);
int FUN_0c08448c(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c084bf6(int, int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c088ec4(int, int);
int FUN_0c0a1c76(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a9894(void);
int FUN_0c0ae738(int, int);
int FUN_0c0aea24(int, float);
int FUN_0c0aeabc(int);
int FUN_0c0b5d54(void);
int FUN_0c0bb250(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0d9bd0(float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
float FUN_0c0dcd80(int, int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0de2c0(int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int strlen(int);
void FUN_0c0503bc(int a4);
int FUN_0c077960(int a4, int a5, int a6, int a7);
int FUN_0c0d3aa0(int a4);
int FUN_0c0bb360(int a4, int a5, int a6, int a7);
int FUN_0c078286(int a4, int a5, int a6, int a7);
int FUN_0c0ae314(int a4, float f4);
int FUN_0c023300(int a4, int a5, int a6, int a7);

void FUN_0c0503bc(int a4)
{
    int t10;
    int t14;
    int t29;
    int t43;
    int t56;
    int t63;
    int t72;
    int t74;
    int t76;
    int t78;
    int t80;
    int t82;
    int t87;
    int t89;
    int t91;
    int t92;
    int t94;
    int t97;
    int t99;
    int t101;
    int t103;
    int t105;
    int t107;
    int t110;
    int t128;
    int stk[10];

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
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    L_C0503BC:;
    R11 = (0xC246FF0);
    R13 = (0x0);
    R14 = (R4);
    if (((*(int *)(((((*(int *)((R4 + 0xBC))) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C0503EA;
    goto L_C0503E6;
    L_C0503E6:;
    goto L_C05081A;
    L_C05081A:;
    R0 = (0x0);
    goto L_C05081C;
    L_C05081C:;
    return;
    L_C0503EA:;
    *(unsigned int *)((R14 + 0x314)) = ((*(int *)((R14 + 0x314))) + 0x1);
    if (((*(int *)((R14 + 0x1BC))) != 0)) goto L_C0503FE;
    goto L_C0503FA;
    L_C0503FA:;
    goto L_C05081A;
    L_C0503FE:;
    t10 = *(int *)((R14 + 0xBC));
    *(unsigned int *)(((((t10 << 2) << 2) << 1) + 0xC247558)) = ((*(int *)(((((t10 << 2) << 2) << 1) + 0xC247558))) + 0x1);
    *(unsigned int *)((R14 + 0x318)) = R13;
    *(unsigned int *)((R14 + 0x368)) = R13;
    *(unsigned int *)((R14 + 0x364)) = R13;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) | 0x2);
    *(unsigned short *)((R14 + 0x6C)) = R13;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((R14 + 0xBC)));
    t14 = *(int *)((R14 + 0x32C));
    R0 = (t14);
    R4 = (0x2);
    if ((t14 == 1)) goto L_C050440;
    goto L_C050438;
    L_C050438:;
    if ((R0 == 2)) goto L_C05046C;
    goto L_C05043C;
    L_C05043C:;
    goto L_C050482;
    L_C050482:;
    R0 = (0x1C8);
    R10 = (0x5);
    if (((*(int *)((R14 + 0x1C8))) != 0)) goto L_C050490;
    goto L_C05048C;
    L_C05048C:;
    R12 = (R4);
    goto L_C05049C;
    L_C05049C:;
    if ((((*(int *)((R14 + 0x20C))) & 64) == 0)) goto L_C0504BA;
    goto L_C0504A4;
    L_C0504A4:;
    if (((int)(*(int *)((R14 + 0x1C4))) >= (int)0xC)) goto L_C0504BA;
    goto L_C0504AE;
    L_C0504AE:;
    t29 = (FUN_0c050830(R14)) == 0;
    if (t29) goto L_C0504BA;
    goto L_C0504B6;
    L_C0504B6:;
    goto L_C0505D0;
    L_C0505D0:;
    *(unsigned int *)((R14 + 0x1BC)) = R13;
    goto L_C05081A;
    L_C0504BA:;
    if ((((*(int *)((R14 + 0x20C))) & 0x200000) == 0)) goto L_C0504D0;
    goto L_C0504C4;
    L_C0504C4:;
    FUN_0c056098(R14);
    FUN_0c0519f0(R14);
    goto L_C0504D0;
    L_C0504D0:;
    FUN_0c0510be(R14);
    R0 = (0x20C);
    if ((((*(int *)((R14 + 0x20C))) & 0x21000) == 0)) goto L_C0504F0;
    goto L_C0504DE;
    L_C0504DE:;
    R0 = (0x1BC);
    R4 = (0x17);
    if (((int)(*(int *)((R14 + 0x1BC))) < (int)0x17)) goto L_C0504EC;
    goto L_C0504E8;
    L_C0504E8:;
    goto L_C0505F0;
    L_C0505F0:;
    FUN_0c05026e(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    t43 = *(int *)(((int)stk + 4));
    R4 = ((t43 << 2));
    if (((int)(*(int *)(((t43 << 2) + 0xC247594))) > 0)) goto L_C050614;
    goto L_C050600;
    L_C050600:;
    *(unsigned int *)(((R4 + (R11 + 0x40)) + 0x0)) = R10;
    R0 = (0x1BC);
    R4 = ((R4 + (R11 + 0x40)));
    if (((int)(*(int *)((R14 + 0x1BC))) > (int)R10)) goto L_C050614;
    goto L_C050610;
    L_C050610:;
    *(unsigned int *)((R14 + R0)) = 0x15;
    goto L_C050614;
    L_C050614:;
    if (((int)(*(int *)((R14 + 0x314))) <= (int)0x37)) goto L_C05062C;
    goto L_C05061E;
    L_C05061E:;
    if ((((*(int *)((R14 + 0x20C))) & 0x5800) != 0)) goto L_C05062C;
    goto L_C050628;
    L_C050628:;
    *(unsigned int *)((R14 + 0x310)) = R13;
    goto L_C05062C;
    L_C05062C:;
    *(unsigned int *)((R14 + 0x314)) = R13;
    *(unsigned short *)((R14 + 0xE8)) = 0xFFFFFFFF;
    FUN_0c051a48(R14);
    t56 = *(int *)((R14 + 0x1BC));
    R0 = ((t56 - 3));
    R10 = (0xC1FE858);
    R11 = (0xC0CC3F8);
    R8 = (0xC1FE858);
    R9 = (0xC0CC054);
    if (((unsigned int)(t56 - 3) < (unsigned int)0x17)) goto L_C050654;
    goto L_C050650;
    L_C050650:;
    goto L_C0507EC;
    L_C0507EC:;
    t63 = *(int *)((R14 + 0xC0));
    R4 = ((((((t63 >> 1) << 1) + (t63 >> 1)) << 2) + R10));
    goto L_C0507FC;
    L_C0507FC:;
    FUN_0c0cc3f8((*(int *)((R4 + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((R14 + 0xBC))), 0x1);
    FUN_0c050a30(R14, R12);
    goto L_C05080E;
    L_C05080E:;
    *(unsigned int *)((R14 + 0x1BC)) = R13;
    *(unsigned int *)((R14 + 0x1CC)) = R13;
    R0 = (0xFFFFFFFF);
    goto L_C05081C;
    L_C050654:;
    switch (((R0 << 1))) { case 0: goto L_C0506CA; case 2: goto L_C0506DC; case 4: goto L_C0506F0; case 6: goto L_C0507EC; case 8: goto L_C0507EC; case 10: goto L_C0507EC; case 12: goto L_C0506DC; case 14: goto L_C0507A6; case 16: goto L_C050716; case 18: goto L_C0507EC; case 20: goto L_C050746; case 22: goto L_C050746; case 24: goto L_C0507EC; case 26: goto L_C0507EC; case 28: goto L_C0507EC; case 30: goto L_C0506AE; case 32: goto L_C0507EC; case 34: goto L_C0507EC; case 36: goto L_C0507A6; case 38: goto L_C0507A6; case 40: goto L_C05077A; case 42: goto L_C05077A; case 44: goto L_C05077A; }
    L_C0507A6:;
    t72 = *(int *)((R14 + 0xC0));
    t74 = ((int (*)(int, int, int, int, float))(R11))((*(int *)(((((((t72 >> 1) << 1) + (t72 >> 1)) << 2) + R10) + 0x4))), R5, R6, R7, F4);
    t76 = ((int (*)(int, int))(R9))((*(int *)((R14 + 0xBC))), 0x1);
    FUN_0c050bde(R14, R12);
    goto L_C05080E;
    L_C05077A:;
    t78 = *(int *)((R14 + 0xC0));
    t80 = ((int (*)(int, int, int, int, float))(R11))((*(int *)(((((((t78 >> 1) << 1) + (t78 >> 1)) << 2) + R10) + 0x8))), R5, R6, R7, F4);
    t82 = ((int (*)(int, int))(R9))((*(int *)((R14 + 0xBC))), 0x1);
    FUN_0c05477c(R14, 1.0f);
    FUN_0c050bc2(R14);
    goto L_C05080E;
    L_C050746:;
    FUN_0c088ec4(R14, 0xB4);
    FUN_0c050b2c(R14, R12);
    t87 = *(int *)((R14 + 0xC0));
    t89 = ((int (*)(int))(R11))((*(int *)(((((((t87 >> 1) << 1) + (t87 >> 1)) << 2) + R8) + 0x8))));
    t91 = ((int (*)(int, int))(R9))((*(int *)((R14 + 0xBC))), 0x1);
    t92 = ((int (*)(int))(R11))(0x132A9);
    goto L_C05080E;
    L_C050716:;
    FUN_0c0a1c76(R14, 0x0, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t94 = *(int *)((R14 + 0xC0));
    R4 = ((*(int *)(((((((t94 >> 1) << 1) + (t94 >> 1)) << 2) + R8) + 0x8))));
    goto L_C050730;
    L_C050730:;
    t97 = ((int (*)(int, int, int, int, float))(R11))(R4, R5, R6, R7, F4);
    t99 = ((int (*)(int, int))(R9))((*(int *)((R14 + 0xBC))), 0x1);
    FUN_0c050aa2(R14, R12);
    goto L_C05080E;
    L_C0506F0:;
    t101 = *(int *)((R14 + 0xC0));
    t103 = ((int (*)(int, int, int, int, float))(R11))((*(int *)(((((((t101 >> 1) << 1) + (t101 >> 1)) << 2) + R10) + 0x8))), R5, R6, R7, F4);
    t105 = ((int (*)(int, int))(R9))((*(int *)((R14 + 0xBC))), 0x2);
    FUN_0c050b2c(R14, R12);
    goto L_C05080E;
    L_C0506DC:;
    t107 = *(int *)((R14 + 0xC0));
    R4 = ((*(int *)(((((((t107 >> 1) << 1) + (t107 >> 1)) << 2) + R10) + 0x4))));
    goto L_C050730;
    L_C0506CA:;
    t110 = *(int *)((R14 + 0xC0));
    R4 = ((((((t110 >> 1) << 1) + (t110 >> 1)) << 2) + R8));
    goto L_C0507FC;
    L_C0506AE:;
    if (((int)(*(int *)((((*(int *)((R14 + 0xBC))) << 2) + 0xC247594))) > 0)) goto L_C0506C4;
    goto L_C0506BC;
    L_C0506BC:;
    *(unsigned int *)((R14 + 0x328)) = 0xFA;
    goto L_C0506CA;
    L_C0506C4:;
    *(unsigned int *)((R14 + 0x328)) = 0x96;
    goto L_C0506CA;
    L_C0504EC:;
    *(unsigned int *)((R14 + R0)) = R4;
    goto L_C0505F0;
    L_C0504F0:;
    if ((((*(int *)((R14 + R0))) & 0xC000) == 0)) goto L_C05050C;
    goto L_C0504F8;
    L_C0504F8:;
    if ((((*(int *)((R14 + 0x1D0))) & 16) != 0)) goto L_C050504;
    goto L_C050500;
    L_C050500:;
    goto L_C05081A;
    L_C050504:;
    *(unsigned int *)((R14 + 0x1BC)) = 0x1A;
    goto L_C0505F0;
    L_C05050C:;
    if ((((*(int *)((R14 + R0))) & 0x400000) == 0)) goto L_C050520;
    goto L_C050514;
    L_C050514:;
    *(float *)((R14 + 0x34)) = (FUN_0c01f172(R14));
    goto L_C0505F0;
    L_C050520:;
    if ((((*(int *)((R14 + R0))) & 0x40000) == 0)) goto L_C0505BC;
    goto L_C050528;
    L_C050528:;
    if (((*(int *)((R14 + 0x1BC))) != 20)) goto L_C050568;
    goto L_C050530;
    L_C050530:;
    FUN_0c05026e(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    goto L_C0505D0;
    L_C050568:;
    t128 = *(int *)(((((*(int *)((R14 + 0xCC))) << 2) + R11) + 0x0));
    *(unsigned int *)((t128 + 0xD0)) = 0xFFFFFFFF;
    *(unsigned int *)((t128 + 0x2F4)) = 0x400;
    *(unsigned int *)((t128 + 0x1DC)) = (*(int *)((R14 + 0x1DC)));
    *(unsigned int *)((t128 + 0x1D8)) = (*(int *)((R14 + 0x1D8)));
    *(float *)((t128 + 0x1D4)) = (*(float *)((R14 + 0x1D4)));
    *(unsigned int *)((t128 + 0x1CC)) = (*(int *)((R14 + 0x1CC)));
    *(unsigned int *)((R14 + 0xCC)) = R13;
    *(unsigned int *)((R14 + 0x39C)) = ((*(int *)((R14 + 0x39C))) & 0xFFFFFBFF);
    R4 = (t128);
    if (((*(int *)0xC23EDAC) != 1)) goto L_C0505B4;
    goto L_C0505AE;
    L_C0505AE:;
    *(unsigned int *)((R14 + 0x1EC)) = R13;
    goto L_C0505F0;
    L_C0505B4:;
    *(unsigned int *)((R14 + 0x1EC)) = 0xF;
    goto L_C0505F0;
    L_C0505BC:;
    if ((((*(int *)((R14 + R0))) & 0x80000) == 0)) goto L_C0505F0;
    goto L_C0505C4;
    L_C0505C4:;
    if (((*(int *)((R14 + 0x1BC))) != 19)) goto L_C0505D0;
    goto L_C0505CC;
    L_C0505CC:;
    FUN_0c05026e(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    goto L_C0505D0;
    L_C050490:;
    if (((int)(*(int *)((R14 + R0))) <= (int)R10)) goto L_C05049A;
    goto L_C050496;
    L_C050496:;
    R12 = (0x1);
    goto L_C05049C;
    L_C05049A:;
    R12 = (R13);
    goto L_C05049C;
    L_C05046C:;
    F2 = (1.5f);
    F3 = ((float)(*(int *)((R14 + 0x1CC))));
    goto L_C050478;
    L_C050478:;
    *(unsigned int *)((R14 + 0x1CC)) = (int)(F3 * F2);
    goto L_C050482;
    L_C050440:;
    F2 = (1.29999995f);
    F3 = ((float)(*(int *)((R14 + 0x1CC))));
    goto L_C050478;
}

int FUN_0c077960(int a4, int a5, int a6, int a7)
{
    int t13;
    int t14;
    float t38;
    float t39;
    float t40;
    float t46;
    float t47;
    float t48;
    float t83;
    float t84;
    float t85;
    float t91;
    float t92;
    float t93;
    float t98;
    float t99;
    int t110;
    int t126;
    float u121;
    int stk[34];

    FUN_0c0685a4(a4, a5, a6, a7);
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 16)) = (a4 + 0x6C);
    *(unsigned int *)(((int)stk + 12)) = (0xFC + a4);
    *(unsigned int *)(((int)stk + 24)) = 0x6;
    FUN_0c0dce80((a4 + 0x60), (a4 + 0x60), 0.799999952f);
    nlAddVector((a4 + 0x54), (a4 + 0x60));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((int)(*(float *)((a4 + 0x58))));
    nlRotateAX((int)(*(float *)((a4 + 0x54))));
    nlRotateAZ((int)(*(float *)((a4 + 0x5C))));
    FUN_0c0c47ae(0x11D4);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 28)) = 0xC0FFC68;
    *(unsigned int *)(((int)stk + 20)) = 0xC0FFC74;
    *(unsigned int *)(((int)stk + 36)) = 0xC0FFC80;
    *(unsigned int *)(((int)stk + 32)) = 0xC0FFC8C;
    t13 = (0xB4 + a4);
    t14 = (0x144 + a4);
    for (;;) {
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12));
        FUN_0c0dce80(t13, t13, 0.799999952f);
        nlAddVector((*(int *)(((int)stk + 16))), t13);
        FUN_0c0dcca0((*(int *)(((int)stk + 28))));
        nlRotateAY((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x4))));
        nlRotateAX((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
        nlRotateAZ((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x8))));
        FUN_0c0c47ae(0x11D6);
        FUN_0c0db470((*(int *)(((int)stk + 20))), (((int)stk + 12) + 0x40));
        if (0.0f > (*(float *)(((int)stk + 80)))) {
            FUN_0c0db840((((int)stk + 12) + 0x34));
            nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            *(float *)(((int)stk + 80)) = 0.0f;
            nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            t38 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
            *(float *)(((int)stk + 8)) = t38;
            t39 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
            *(float *)(((int)stk + 4)) = t39;
            t40 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
            *(float *)((t13 + 0x8)) = ((float)(-(FUN_0c0d9bd0((t38 / (t39 * t40))))) * 0.799999952f);
        } else {
            if ((*(float *)(((int)stk + 80))) > 8.0f) {
                FUN_0c0db840((((int)stk + 12) + 0x34));
                nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                t46 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
                *(float *)(((int)stk + 8)) = t46;
                t47 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)(((int)stk + 4)) = t47;
                t48 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
                *(float *)((t13 + 0x8)) = ((float)(FUN_0c0d9bd0((t46 / (t47 * t48)))) * 0.099999994f);
            }
        }
        t13 = (t13 + 0xC);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC);
        FUN_0c0dce80(t14, t14, 0.799999952f);
        nlAddVector((*(int *)(((int)stk + 12))), t14);
        FUN_0c0dcca0((*(int *)(((int)stk + 20))));
        nlRotateAY((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x4))));
        nlRotateAX((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
        nlRotateAZ((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x8))));
        FUN_0c0c47ae(0x11D5);
        FUN_0c0db470((*(int *)(((int)stk + 36))), (((int)stk + 12) + 0x40));
        if (0.0f > (*(float *)(((int)stk + 80)))) {
            FUN_0c0db840((((int)stk + 12) + 0x34));
            nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            *(float *)(((int)stk + 80)) = 0.0f;
            nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            t83 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
            *(float *)(((int)stk + 8)) = t83;
            t84 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
            *(float *)(((int)stk + 4)) = t84;
            t85 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
            *(float *)((t14 + 0x8)) = ((float)(-(FUN_0c0d9bd0((t83 / (t84 * t85))))) * 0.799999952f);
        } else {
            if ((*(float *)(((int)stk + 80))) > 5.0f) {
                FUN_0c0db840((((int)stk + 12) + 0x34));
                nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                t91 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
                *(float *)(((int)stk + 8)) = t91;
                t92 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)(((int)stk + 4)) = t92;
                t93 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
                *(float *)((t14 + 0x8)) = ((float)(FUN_0c0d9bd0((t91 / (t92 * t93)))) * 0.099999994f);
                FUN_0c0db470((*(int *)(((int)stk + 32))), (((int)stk + 12) + 0x40));
                nlSubVector((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40));
                t98 = FUN_0c0dcd80((((int)stk + 12) + 0x28), 0xC0FFD64);
                *(float *)(((int)stk + 8)) = t98;
                t99 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)((t14 + 0x0)) = ((float)(FUN_0c0d9bd0((t98 / t99))) * 0.099999994f);
            }
        }
        t14 = (t14 + 0xC);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
        t110 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 24)) = (t110 - 1);
        if ((t110 - 1) != 0) continue;
        break;
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x48), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), (*(float *)0xC077E8C));
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    t126 = 0x34;
    if (!((*(float *)((a4 + 0x34))) > 0.0f)) {
        if (0.0f > (*(float *)((a4 + 0x4C)))) {
            *(float *)((a4 + 0x34)) = 0.0f;
            u121 = (*(float *)((a4 + 0x4C)));
            u121 *= -0.979999959f;
            *(float *)((a4 + 0x4C)) = u121;
        }
        t126 = 0x4C;
    }
    return t126;
}

int FUN_0c0d3aa0(int a4)
{
    int t0;
    int t110;
    int t102;
    int t1;
    int t63;
    int t4;
    int t6;
    int t7;
    float u10;
    int t16;
    int t17;
    float u20;
    int t24;
    int t31;
    int t33;
    float u36;
    int t51;
    int t60;
    int t52;
    float u55;
    int t71;
    int t86;
    float u89;
    int t92;
    int t120;
    int t121;
    int t135;
    int t131;
    int t140;
    float u143;
    int t153;
    int t156;
    float u159;
    int t164;
    int t174;
    int t165;
    int t94;
    int t78;
    int t29;
    int t128;
    int t129;

    t0 = *(int *)0xC9433FC;
    if (t0 != 0) {
        if (t0 != 1) {
            t110 = t0;
            if (t0 == 2) {
            } else {
                t102 = t0;
                if (t0 == 3) {
                    t1 = *(int *)((a4 + 0x30));
                    if (t1 != 0) {
                        if (t1 != 1) {
                            t63 = t1;
                            if (t1 != 2) {
                            } else {
                                t4 = *(int *)0xC943404;
                                t6 = *(int *)((((*(int *)0xC943410) << 2) + 0xC20BE88));
                                t7 = strlen(t6);
                                u10 = (float)t7;
                                if ((int)t7 < 0) {
                                    u10 = ((float)t7 + 4.2949673e+09f);
                                }
                                FUN_0c0cf6e4(0x0, t6, ((-((u10 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 142.0f, 1.0f, 0.899999976f, 1.0f);
                                FUN_0c0cf6e4(0x0, 0xC1EA0E4, 302.0f, 173.199997f, 1.0f, 0.799999952f, 1.0f);
                                t16 = *(int *)((((*(int *)0xC943414) << 2) + 0xC20BE88));
                                t17 = strlen(t16);
                                u20 = (float)t17;
                                if ((int)t17 < 0) {
                                    u20 = ((float)t17 + 4.2949673e+09f);
                                }
                                FUN_0c0cf6e4(0x0, t16, ((-((u20 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 203.199997f, 1.0f, 0.899999976f, 1.0f);
                                t24 = *(int *)0xC943400;
                                if ((*(int *)0xC943400) == 0) {
                                    t29 = (*(int *)((0xC247594 + ((*(int *)0xC23A1BC) << 2))));
                                } else {
                                    t29 = (*(int *)0xC247594);
                                }
                                t31 = *(int *)(((((t24 << 2) << 1) + 0xC20C54C) + ((((t29 == 0)) ? 1 : 0) << 2)));
                                if (((*(int *)0xC23A258) & 30) != 0) {
                                    t33 = strlen(t31);
                                    u36 = (float)t33;
                                    if ((int)t33 < 0) {
                                        u36 = ((float)t33 + 4.2949673e+09f);
                                    }
                                    FUN_0c0cf6e4(0x0, t31, ((-((u36 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 257.0f, 1.0f, 0.899999976f, 1.0f);
                                }
                                FUN_0c0b5d54();
                                FUN_0c0cf6e4(0x0, 0xC20C564, 218.0f, 321.0f, 0.75f, 0.75f, 1.0f);
                                FUN_0c0cf6e4(0x0, 0xC20C58C, 197.0f, (float)(int)((float)0x141 + (((0.75f * (float)(*(int *)((t4 + 0x4C))))) * 34.0f)), 0.75f, 0.75f, 1.0f);
                                t51 = *(int *)0xC23A258;
                                t60 = t51;
                                if ((t51 & 56) != 0) {
                                    t52 = strlen(0xC20C58E);
                                    u55 = (float)t52;
                                    if ((int)t52 < 0) {
                                        u55 = ((float)t52 + 4.2949673e+09f);
                                    }
                                    t60 = (FUN_0c0cf6e4(0x0, 0xC20C58E, (float)(int)((-((((u55 * 18.0f) / (1.0f + 1.0f))) * 0.5f)) + 320.0f), 440.0f, 0.5f, 0.5f, 1.0f));
                                }
                                t63 = t60;
                            }
                            t78 = t63;
                        } else {
                            if ((*(int *)((a4 + 0x38))) == 0) {
                            } else {
                                t71 = *(int *)((a4 + 0x38));
                                *(unsigned int *)((a4 + 0x38)) = (t71 - 1);
                                if ((t71 - 1) != 0) {
                                } else {
                                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                }
                            }
                            t78 = t1;
                        }
                        t94 = t78;
                    } else {
                        t86 = strlen(0xC20C539);
                        u89 = (float)t86;
                        if ((int)t86 < 0) {
                            u89 = ((float)t86 + 4.2949673e+09f);
                        }
                        t92 = FUN_0c0cf4c4(0xA, 0x2, 0x0, 0x1, 0xC20C539, (float)(int)((-((u89 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 91.0f, 1.0f, 1.0f, 1.0f);
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                        t94 = t92;
                    }
                    t102 = t94;
                }
                t110 = t102;
            }
            t165 = t110;
        } else {
            t120 = *(int *)0xC247594;
            t121 = *(int *)0xC247598;
            t135 = 0x2;
            if ((*(int *)(((*(int *)0xC943508) + 0x38))) != 2) {
                t131 = 0x1;
                if ((t120 != (*(int *)((0xC24759C + ((*(int *)0xC23A1BC) << 2))))) && (t128 = *(int *)0xC23A1BC, t129 = *(int *)((0xC24759C + ((0x1 - t128) << 2))), t121 != t129)) {
                    t131 = 0x0;
                }
                t135 = t131;
            }
            t140 = strlen((*(int *)((((t135 << 2) + 0xC20C510) + 0x0))));
            u143 = (float)t140;
            if ((int)t140 < 0) {
                u143 = ((float)t140 + 4.2949673e+09f);
            }
            FUN_0c0cf4c4(0x0, 0x2, 0x12C, 0xFFFFFFFF, ((*(int *)((((t135 << 2) + 0xC20C510) + 0x0)))), (float)(int)((-((((u143 * 18.0f) / (1.0f + 1.0f))) * 1.0f)) + 320.0f), 136.0f, 1.0f, 1.0f, 1.0f);
            t153 = 0xC20C534;
            if (t120 == t121) {
            } else {
                t153 = (*(int *)(((((-(((((int)t120 >= (int)t121)) ? 1 : 0) - 1)) << 2) + (0xC20C51C + (((*(int *)0xC943400) << 2) << 1))) + 0x0)));
            }
            t156 = strlen(t153);
            u159 = (float)t156;
            if ((int)t156 < 0) {
                u159 = ((float)t156 + 4.2949673e+09f);
            }
            t164 = FUN_0c0cf4c4(0x14, 0x2, 0x118, 0x1, (t153), (float)(int)((-((((u159 * 18.0f) / (1.0f + 1.0f))) * 1.19999993f)) + 320.0f), 221.0f, 1.19999993f, 1.19999993f, 1.0f);
            *(unsigned int *)0xC9433FC = 0x2;
            t165 = t164;
        }
        t174 = t165;
    } else {
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        t174 = t0;
    }
    return t174;
}

int FUN_0c0bb360(int a4, int a5, int a6, int a7)
{
    int t1;
    int t154;
    int t3;
    int t4;
    int t5;
    int t6;
    float u31;
    float u32;
    int t57;
    int t65;
    int t70;
    int t73;
    int t78;
    int t86;
    int t91;
    int t94;
    int t99;
    int t108;
    int t112;
    int t117;
    int t120;
    int t123;
    int t135;
    int t138;
    int t141;
    int stk[13];

    t1 = *(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0));
    t154 = 0xBC;
    if (t1 == 0) {
    } else {
        t3 = *(int *)((((*(int *)((t1 + 0xC0))) << 2) + 0xC195BE0));
        t4 = *(int *)((t1 + 0x3D4));
        t5 = *(int *)((a4 + 0xBC));
        t6 = *(int *)((((t5 << 2) + 0xC247030) + 0x0));
        if ((t6 != 0) && (((int)t5 < (int)0x2) || ((int)t6 < (int)0x5))) {
        } else {
            FUN_0c0e19f2(0xC246FF0, t5, t6, a7);
        }
        FUN_0c0848d6(((*(float *)(((0x45C + t1) + 0x0))) * 0.5f), ((*(float *)(((0x45C + t1) + 0x4))) * 0.5f), ((*(float *)(((0x45C + t1) + 0x8))) * 0.5f));
        *(float *)(((int)stk + 4)) = ((*(float *)0xC247F40) * (*(float *)0xC247F34));
        *(float *)(((int)stk + 8)) = (-((*(float *)0xC247F44) * (*(float *)0xC247F34)));
        *(float *)(((int)stk + 12)) = ((*(float *)0xC247F48) * (*(float *)0xC247F34));
        FUN_0c0dbda0(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
        FUN_0c0db4d0(((int)stk + 4), ((int)stk + 4));
        FUN_0c0de2c0(((int)stk + 4));
        *(unsigned int *)0xC260A34 = (*(int *)(((((*(int *)(((0xC4 + t1) + 0x0))) << 2) + (0xC26086C + (((*(int *)((t1 + 0xC0))) << 2) << 1))) + 0x0)));
        u31 = *(float *)((t1 + 0x34));
        u32 = *(float *)((t1 + 0x390));
        FUN_0c0dc5a0();
        FUN_0c0dcc70((*(float *)((t1 + 0x30))), ((u32 - u31) + -0.199999988f), (*(float *)((t1 + 0x38))));
        nlRotateAZ(((*(short *)((t1 + 0x70))) + 0x8000));
        nlRotateAY((-(*(short *)((t1 + 0x6E)))));
        nlRotateAX((*(short *)((t1 + 0x6C))));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(0.0f, (*(float *)((t1 + 0x3E8))), 0.0f);
        nlRotateAZ((-(*(short *)((t4 + 0x0)))));
        nlRotateAY((-(*(short *)(((t4 + 0x2) + 0x0)))));
        nlRotateAX((*(short *)((((t4 + 0x2) + 0x2) + 0x0))));
        FUN_0c0dcbb0((0x274 + t1));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, t3, (((t4 + 0x2) + 0x2) + 0x2), (0x404 + a4));
        t57 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x110)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (t3 + 0xC), ((((t4 + 0x2) + 0x2) + 0x2) + 0x6), ((0x404 + a4) + 0x4));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((t3 + 0xC) + 0x18), (((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18), (((0x404 + a4) + 0x4) + 0x8));
        t65 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x118)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((t3 + 0xC) + 0x18) + 0xC), ((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6), ((((0x404 + a4) + 0x4) + 0x8) + 0x4));
        t70 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x11C)))))();
        t73 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x74)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((t3 + 0xC) + 0x18) + 0xC) + 0xC), (((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6), (((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4));
        t78 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x94)))))(a4);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC), ((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30), ((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4));
        t86 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x118)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6), (((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4));
        t91 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x11C)))))();
        t94 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x84)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6), ((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t99 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0xA4)))))(a4);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18), (((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t108 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x114)))))(a4);
        t112 = ((int (*)(int, int))((*(int *)(((*(int *)0xC260A34) + 0x4)))))(a4, (*(int *)((a4 + 0x40C))));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18), ((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t117 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x14)))))(a4);
        t120 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x34)))))();
        t123 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x54)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6), (((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6), ((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30), (((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t135 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x24)))))(a4);
        t138 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x44)))))(a4);
        t141 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x64)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30) + 0x6), ((((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6), (((((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t154 = (FUN_0c08448c(0x0));
    }
    return t154;
}

int FUN_0c078286(int a4, int a5, int a6, int a7)
{
    int t9;
    int t11;
    int t12;
    int t30;
    int t62;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t59;
    int t47;
    int t50;
    int t55;
    int t56;
    int t69;
    int t99;
    int t123;
    int t141;
    int t149;
    int t172;
    int t189;
    int t32;
    int stk[8];

    if ((int)(*(int *)0xC23ED50) > (int)0x4F) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    if (t9 != 2) {
        return t9;
    }
    t11 = *(int *)((a4 + 0x288));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 == 2) {
                t12 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t12 - 37);
                if ((int)(t12 - 37) > 0) {
                    *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                    *(unsigned short *)((a4 + 0x70)) = 0x0;
                }
                FUN_0c085704(a4);
                FUN_0c078018(a4);
                t30 = *(int *)((a4 + 0x2B4));
                t62 = t30;
                if (t30 == 1) {
                    t31 = t30;
                    t33 = a5;
                    t34 = a6;
                    t35 = 0x600;
                    t36 = 0xC0FFE20;
                    t37 = 0x0;
                    t38 = 0xC0DA410;
                    t39 = 0x0;
                    for (;;) {
                        if ((int)t37 >= (int)0x10) {
                            break;
                        }
                        t41 = *(short *)((t36 + 0x0));
                        t59 = t35;
                        if ((t41 != 0) && (t32 = (short)t41, t32 != 0x11E9)) {
                            t33 = 0xB4;
                            t38 = 0xC0E18CE;
                            t31 = (FUN_0c0e18ce(0xC0786A0, t33));
                            t38 = 0xC0E19D0;
                            t39 = t31;
                            t31 = (FUN_0c0e19d0(t31));
                            t31 = 0x78;
                            t38 = t37;
                            t32 = 0x5C4;
                            *(unsigned int *)((t39 + t31)) = (*(short *)((t36 + 0x0)));
                            t38 = (t38 << 1);
                            t38 = (t38 + t37);
                            t38 = (t38 << 2);
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            t31 = 0xC;
                            t31 = (_quick_odd_mvn());
                            t31 = 0x60;
                            t32 = 0x744;
                            t33 = t39;
                            t34 = 0x684;
                            t35 = 0xC0DCEF0;
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            *(unsigned short *)((t39 + t31)) = (*(int *)((((0x744 + a4) + t38) + 0x0)));
                            t31 = 0x62;
                            t47 = *(int *)((t32 + 0x4));
                            t34 = (t34 + a4);
                            t32 = 0x744;
                            t33 = (t33 + 0x30);
                            *(unsigned short *)((t39 + t31)) = t47;
                            t31 = 0x64;
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            t34 = (t34 + t38);
                            *(unsigned short *)((t39 + t31)) = (*(int *)((t32 + 0x8)));
                            t31 = (nlSubVector3op((t39 + 0x48), t33, t34));
                            t34 = 0x804;
                            t31 = 0x60;
                            t50 = *(short *)((t39 + t31));
                            t32 = t39;
                            t34 = (t34 + a4);
                            t34 = (t34 + t38);
                            t34 = (*(int *)((t34 + 0x0)));
                            t32 = (t32 + 0x68);
                            t31 = 0x62;
                            t33 = (short)(t50 - t34);
                            *(unsigned int *)((t32 + 0x0)) = t33;
                            t33 = 0x804;
                            t34 = (*(short *)((t39 + t31)));
                            t31 = 0x6C;
                            t33 = (t33 + a4);
                            t33 = (t33 + t38);
                            t33 = (*(int *)((t33 + 0x4)));
                            t34 = (t34 - t33);
                            t55 = (short)t34;
                            t34 = 0x804;
                            *(unsigned int *)((t39 + t31)) = t55;
                            t31 = 0x64;
                            t34 = (t34 + a4);
                            t56 = *(short *)((t39 + t31));
                            t34 = (t34 + t38);
                            t34 = (*(int *)((t34 + 0x8)));
                            t31 = 0x70;
                            t33 = (short)(t56 - t34);
                            *(unsigned int *)((t39 + t31)) = t33;
                            t59 = 0xC0DCEF0;
                        }
                        t37 = (t37 + 0x1);
                        t35 = t59;
                        t36 = (t36 + 0x2);
                    }
                    FUN_0c0cc3f8(0x128A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
                    t62 = 0x288;
                }
                return t62;
            }
            if (t11 == 3) {
                t69 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t69 - 37);
                if ((int)(t69 - 37) > 0) {
                    *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                    *(unsigned short *)((a4 + 0x70)) = 0x0;
                }
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
                nlRotateAZ((-(*(short *)((a4 + 0x70)))));
                nlRotateAY((*(short *)((a4 + 0x6E))));
                nlRotateAX((*(short *)((a4 + 0x6C))));
                FUN_0c0c465c((*(int *)((a4 + 0x28C))));
                return nlPopMatrix(0x1);
            }
            return t11;
        }
        if ((*(int *)((a4 + 0x1BC))) != 0) {
            *(unsigned int *)((a4 + 0x1F8)) = 0x0;
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
            *(unsigned int *)((a4 + 0x314)) = ((*(int *)((a4 + 0x314))) + 0x1);
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                t99 = *(int *)((a4 + 0x1C4));
                *(unsigned int *)(((t99 << 2) + 0xC247584)) = ((*(int *)(((t99 << 2) + 0xC247584))) + 0x1F4);
            }
            if ((int)(*(int *)((a4 + 0x314))) >= (int)0x3) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x56F;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                *(unsigned int *)((a4 + 0x3AC)) = 0x800;
                *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x520;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3AC)) = 0x800;
            }
            FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        } else {
            if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x28;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2D4)) = 0x3;
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
            }
        }
        t123 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t123 - 37);
        if ((int)(t123 - 37) > 0) {
            *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
            *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
            *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
            *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
        } else {
            *(unsigned short *)((a4 + 0x6C)) = 0x0;
            *(unsigned short *)((a4 + 0x70)) = 0x0;
        }
        FUN_0c085704(a4);
        FUN_0c078018(a4);
        t141 = *(int *)((a4 + 0x1B0));
        if (t141 == -1) {
            return t141;
        }
        return FUN_0c01cdf2(a4);
    }
    FUN_0c01ce40(a4, 0xC1B6A14, 25.0f);
    FUN_0c085638(a4);
    *(unsigned int *)((a4 + 0x2C4)) = 0x28;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
    if ((*(int *)((a4 + 0x1BC))) != 0) {
        *(unsigned int *)((a4 + 0x1F8)) = 0x0;
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x314)) = ((*(int *)((a4 + 0x314))) + 0x1);
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t149 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t149 << 2) + 0xC247584)) = ((*(int *)(((t149 << 2) + 0xC247584))) + 0x1F4);
        }
        if ((int)(*(int *)((a4 + 0x314))) >= (int)0x3) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x56F;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2E8)) = 0x0;
            *(unsigned int *)((a4 + 0x3AC)) = 0x800;
            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
            *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x520;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3AC)) = 0x800;
        }
        FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    } else {
        if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x28;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2D4)) = 0x3;
            *(unsigned int *)((a4 + 0x2E8)) = 0x0;
        }
    }
    t172 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t172 - 37);
    if ((int)(t172 - 37) > 0) {
        *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
        *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
        *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
        *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
    } else {
        *(unsigned short *)((a4 + 0x6C)) = 0x0;
        *(unsigned short *)((a4 + 0x70)) = 0x0;
    }
    FUN_0c085704(a4);
    FUN_0c078018(a4);
    t189 = *(int *)((a4 + 0x1B0));
    if (t189 == -1) {
        return t189;
    }
    return FUN_0c01cdf2(a4);
}

int FUN_0c0ae314(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t12;
    int t13;
    int t26;
    int t51;
    int t52;
    int t65;
    int t67;
    int t75;
    int t79;
    int t80;
    int t82;
    int t107;
    int t113;
    int t119;
    int t125;
    int t144;
    int t146;
    int t154;
    int t158;
    int t159;
    int t161;
    int t191;
    int t265;
    int t255;
    int t222;
    int t223;
    float u229;
    float u230;
    float t240;
    float t242;
    int t247;
    int t97;
    int t98;
    int t117;
    int t118;
    int t192;
    int t193;
    float u224;
    float u225;
    int stk[15];

    t0 = *(int *)((a4 + 0x84));
    *(unsigned int *)(((int)stk + 8)) = (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0);
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = FUN_0c016a86();
                if (t2 != 0) {
                    *(unsigned int *)((a4 + 0xA0)) = 0x1E;
                    *(unsigned int *)((a4 + 0x80)) = 0x4;
                } else {
                    t3 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t3 - 1);
                    if ((int)(t3 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0xA0)) = 0xB4;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    }
                }
            } else {
                if (t1 == 3) {
                    t12 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t12 - 1);
                    if ((int)(t12 - 1) > 0) {
                        t13 = FUN_0c016a86();
                        if (t13 != 0) {
                            FUN_0c084bf6(0xA, 0x0);
                            *(unsigned int *)((a4 + 0xA0)) = 0xA;
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        }
                    } else {
                        FUN_0c084bf6(0xA, 0x0);
                        *(unsigned int *)((a4 + 0xA0)) = 0xA;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        t26 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t26 - 1);
                        if ((int)(t26 - 1) <= 0) {
                            *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        }
                    }
                }
            }
        } else {
            t51 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t51 - 1);
            if ((int)(t51 - 1) >= 0) {
                t52 = FUN_0c0a9894();
                if (t52 != 0) {
                    t65 = *(int *)((a4 + 0x78));
                    if (((((int)t65 >= 0) ? (0x1 << (t65 & 31)) : ((-(int)t65 & 31) ? ((int)0x1 >> (-(int)t65 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) != 0) {
                    } else {
                        t67 = *(int *)(((0x78 + a4) + 0x0));
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) | (((int)t67 >= 0) ? (0x1 << (t67 & 31)) : ((-(int)t67 & 31) ? ((int)0x1 >> (-(int)t67 & 31)) : ((int)0x1 >> 31))));
                        FUN_0c0ae738((*(int *)((a4 + 0x9C))), (*(int *)((a4 + 0x78))));
                        *(unsigned short *)(((((*(int *)((a4 + 0x9C))) & 0x3) << 1) + 0xC247AF4)) = (*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0)));
                        t75 = FUN_0c0a9894();
                        if (t75 != 0) {
                            FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        }
                        t79 = *(int *)((a4 + 0x9C));
                        *(unsigned int *)((a4 + 0x9C)) = (t79 + 0x1);
                        if ((int)(t79 + 0x1) >= (int)0x3) {
                            *(unsigned int *)((a4 + 0xA0)) = 0x3C;
                            *(unsigned int *)((a4 + 0x80)) = 0x2;
                            *(unsigned int *)((a4 + 0x78)) = 0x8;
                        } else {
                            for (;;) {
                                t80 = *(int *)((a4 + 0x78));
                                *(unsigned int *)((a4 + 0x78)) = (t80 + 0x1);
                                if ((int)(t80 + 0x1) >= (int)0x8) {
                                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                                }
                                t82 = *(int *)((a4 + 0x78));
                                if (((((int)t82 >= 0) ? (0x1 << (t82 & 31)) : ((-(int)t82 & 31) ? ((int)0x1 >> (-(int)t82 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) == 0) {
                                    break;
                                }
                            }
                            FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        }
                    }
                } else {
                    if (((int)(*(int *)((((((*(int *)((a4 + 0x84))) << 1) << 2) + 0xC249880) + 0x4))) < (int)0xFFFFFFC0) && (t97 = *(int *)(((int)stk + 8)), t98 = *(int *)((t97 + 0x28)), (unsigned int)t98 <= (unsigned int)0x1)) {
                        for (;;) {
                            t107 = *(int *)((a4 + 0x78));
                            *(unsigned int *)((a4 + 0x78)) = (t107 - 1);
                            if ((int)(t107 - 1) < 0) {
                                *(unsigned int *)((a4 + 0x78)) = 0x7;
                            }
                            FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                            t113 = *(int *)((a4 + 0x78));
                            if (((((int)t113 >= 0) ? (0x1 << (t113 & 31)) : ((-(int)t113 & 31) ? ((int)0x1 >> (-(int)t113 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) == 0) {
                                break;
                            }
                        }
                    } else {
                        if (((int)(*(int *)((((((*(int *)((a4 + 0x84))) << 1) << 2) + 0xC249880) + 0x4))) > (int)0x40) && (t117 = *(int *)(((int)stk + 8)), t118 = *(int *)((t117 + 0x28)), (unsigned int)t118 <= (unsigned int)0x1)) {
                            for (;;) {
                                t119 = *(int *)((a4 + 0x78));
                                *(unsigned int *)((a4 + 0x78)) = (t119 + 0x1);
                                if ((int)(t119 + 0x1) >= (int)0x8) {
                                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                                }
                                FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                                t125 = *(int *)((a4 + 0x78));
                                if (((((int)t125 >= 0) ? (0x1 << (t125 & 31)) : ((-(int)t125 & 31) ? ((int)0x1 >> (-(int)t125 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) == 0) {
                                    break;
                                }
                            }
                        }
                    }
                }
            } else {
                t144 = *(int *)((a4 + 0x78));
                if (((((int)t144 >= 0) ? (0x1 << (t144 & 31)) : ((-(int)t144 & 31) ? ((int)0x1 >> (-(int)t144 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) != 0) {
                } else {
                    t146 = *(int *)(((0x78 + a4) + 0x0));
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) | (((int)t146 >= 0) ? (0x1 << (t146 & 31)) : ((-(int)t146 & 31) ? ((int)0x1 >> (-(int)t146 & 31)) : ((int)0x1 >> 31))));
                    FUN_0c0ae738((*(int *)((a4 + 0x9C))), (*(int *)((a4 + 0x78))));
                    *(unsigned short *)(((((*(int *)((a4 + 0x9C))) & 0x3) << 1) + 0xC247AF4)) = (*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0)));
                    t154 = FUN_0c0a9894();
                    if (t154 != 0) {
                        FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    }
                    t158 = *(int *)((a4 + 0x9C));
                    *(unsigned int *)((a4 + 0x9C)) = (t158 + 0x1);
                    if ((int)(t158 + 0x1) >= (int)0x3) {
                        *(unsigned int *)((a4 + 0xA0)) = 0x3C;
                        *(unsigned int *)((a4 + 0x80)) = 0x2;
                        *(unsigned int *)((a4 + 0x78)) = 0x8;
                    } else {
                        for (;;) {
                            t159 = *(int *)((a4 + 0x78));
                            *(unsigned int *)((a4 + 0x78)) = (t159 + 0x1);
                            if ((int)(t159 + 0x1) >= (int)0x8) {
                                *(unsigned int *)((a4 + 0x78)) = 0x0;
                            }
                            t161 = *(int *)((a4 + 0x78));
                            if (((((int)t161 >= 0) ? (0x1 << (t161 & 31)) : ((-(int)t161 & 31) ? ((int)0x1 >> (-(int)t161 & 31)) : ((int)0x1 >> 31))) & (*(int *)((a4 + 0x98)))) == 0) {
                                break;
                            }
                        }
                        FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)((((((*(int *)((a4 + 0x78))) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    }
                }
            }
        }
    } else {
        FUN_0c0aea24(a4, f4);
        t191 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t191 - 1);
        if (((int)(t191 - 1) > 0) && (t192 = *(int *)(((int)stk + 8)), t193 = *(int *)((t192 + 0x0)), (t193 & 0x602) == 0)) {
        } else {
            *(float *)((a4 + 0x34)) = 0.0299999993f;
            *(float *)((a4 + 0x38)) = -0.199999988f;
            *(float *)((a4 + 0x74)) = 0.099999994f;
            *(unsigned int *)((a4 + 0xA0)) = 0x384;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    t265 = 0x80;
    if ((int)(*(int *)((a4 + 0x80))) > 0) {
        if ((*(int *)((a4 + 0x80))) == 1) {
            FUN_0c0aeabc(a4);
        }
        t255 = 0x80;
        if ((int)(*(int *)((a4 + 0x80))) < (int)0x3) {
            *(unsigned int *)((a4 + 0x7C)) = 0xC6;
            t222 = 0xC0AE708;
            t223 = 0x0;
            for (;;) {
                if ((int)t223 >= (int)0x3) {
                    break;
                }
                t222 = 0x9C;
                if ((int)t223 < (int)(*(int *)((a4 + t222)))) {
                    u225 = 1.0f;
                } else {
                    t222 = 0xC0AE710;
                    u225 = (*(float *)((t222 + 0x0)));
                }
                t222 = 0xC0AE714;
                u229 = *(float *)((t222 + 0x0));
                t222 = 0x30;
                u230 = -0.109999999f;
                u230 = u230 + u229 * (float)t223;
                *(float *)((a4 + t222)) = u230;
                t222 = (nlPushMatrix(0x0));
                t222 = (nlUnitMatrix());
                t222 = (FUN_0c0dcca0((a4 + 0x30)));
                t222 = 0x74;
                u224 = (*(float *)((a4 + t222)));
                t222 = (nlScale(u224, u224, u224));
                t222 = 0x74;
                t222 = (FUN_0c0de000((*(float *)((a4 + t222)))));
                t222 = 0x9C;
                if (t223 == (*(int *)((a4 + t222)))) {
                    t222 = 0xA4;
                    t240 = FUN_0c0da410((*(int *)((a4 + t222))));
                    t222 = 0xA4;
                    *(float *)(((int)stk + 4)) = t240;
                    t242 = FUN_0c0da410((*(int *)((a4 + t222))));
                    t222 = (FUN_0c0848d6(1.0f, t242, t240));
                    t222 = 0xA4;
                    *(unsigned int *)((a4 + t222)) = ((*(int *)((a4 + t222))) + 0x800);
                }
                t222 = 0x7C;
                t247 = *(int *)((a4 + t222));
                *(unsigned int *)((a4 + t222)) = (t247 + 0x1);
                t222 = (FUN_0c0c475c(((t247 + 0x1) - 1), u225));
                t222 = 0x9C;
                if (t223 == (*(int *)((a4 + t222)))) {
                    t222 = (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
                }
                t222 = (nlPopMatrix(0x1));
                t223 = (t223 + 0x1);
            }
            t255 = t222;
        }
        t265 = t255;
    }
    return t265;
}

int FUN_0c023300(int a4, int a5, int a6, int a7)
{
    int t12;
    int t13;
    int t14;
    float u15;
    float u16;
    int t24;
    int t25;
    int t28;
    int t29;
    int t36;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    float u55;
    int t59;
    int t86;
    int t95;
    int t97;
    int t98;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t148;
    int t132;
    int t26;
    int t27;
    float u30;
    float u31;
    float u64;
    int t93;
    int t90;
    int t96;
    float u107;
    float u108;
    int stk[84];

    if ((*(int *)((a4 + 0x50C))) == 0) {
        *(float *)((a4 + 0x518)) = (*(float *)((a4 + 0x30)));
        *(float *)((a4 + 0x51C)) = (*(float *)((a4 + 0x34)));
        *(float *)((a4 + 0x520)) = (*(float *)((a4 + 0x38)));
        t148 = 0x520;
    } else {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
            *(float *)((a4 + 0x518)) = (*(float *)((a4 + 0x30)));
            *(float *)((a4 + 0x51C)) = (*(float *)((a4 + 0x34)));
            *(float *)((a4 + 0x520)) = (*(float *)((a4 + 0x38)));
            t132 = 0x520;
        } else {
            t12 = *(int *)((a4 + 0x4F4));
            t13 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            *(unsigned int *)(((int)stk + 28)) = ((((t12 << 1) + t12) << 2) + 0xC1F79B4);
            t14 = *(int *)((((((t12 << 1) + t12) << 2) + 0xC1F79B4) + 0x8));
            *(unsigned int *)(((int)stk + 32)) = t14;
            u15 = *(float *)(((t14 + 0x7C) + 0x4));
            u16 = *(float *)(((t14 + 0x7C) + 0x0));
            nlPushMatrix(0x0);
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)((t13 + 0x30))), (*(float *)((t13 + 0x34))), (*(float *)((t13 + 0x38))));
            t24 = nlRotateAY((*(short *)((t13 + 0x6E))));
            *(unsigned int *)(((int)stk + 12)) = (((int)stk + 8) + 0x58);
            *(unsigned int *)(((int)stk + 16)) = (((int)stk + 8) + 0x58);
            *(unsigned int *)(((int)stk + 20)) = (0xF8 + ((int)stk + 8));
            t25 = t24;
            t28 = (0xF8 + ((int)stk + 8));
            t29 = 0x0;
            for (;;) {
                if ((int)t29 < (int)0x8) {
                    t27 = t29;
                    t27 = (t27 << 8);
                    t27 = (t27 << 2);
                    t28 = 0xC0DC510;
                    t27 = (t27 << 2);
                    t27 = (t27 << 1);
                    *(unsigned int *)(((int)stk + 8)) = t27;
                    t25 = (nlPushMatrix(0x0));
                    t28 = 0xC0DC890;
                    t25 = (nlRotateAY((*(int *)(((int)stk + 8)))));
                    t25 = 0x28;
                    *(float *)((((int)stk + 8) + t25)) = 0.0f;
                    t25 = 0x2C;
                    *(float *)((((int)stk + 8) + t25)) = 0.0f;
                    t25 = 0x30;
                    t28 = 0xC0DB470;
                    *(float *)((((int)stk + 8) + t25)) = (-((u16 + u15) * 0.5f));
                    t25 = (FUN_0c0db470((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x1C)));
                    t28 = t29;
                    t36 = ((t29 << 1) + t28);
                    t28 = 0x98;
                    t25 = 0x1C;
                    *(unsigned int *)(((int)stk + 24)) = (t36 << 2);
                    t28 = (t28 + ((int)stk + 8));
                    u31 = (*(float *)((((int)stk + 8) + t25)));
                    t25 = 0x20;
                    t27 = ((t36 << 2) + t28);
                    *(float *)((((t36 << 2) + t28) + 0x0)) = u31;
                    t27 = (t27 + 0x4);
                    u31 = (*(float *)((((int)stk + 8) + t25)));
                    t25 = 0x24;
                    *(float *)((t27 + 0x0)) = u31;
                    t27 = ((t36 << 2) + t28);
                    u31 = (*(float *)((((int)stk + 8) + t25)));
                    t27 = (t27 + 0x8);
                    t25 = 0x30;
                    *(float *)((t27 + 0x0)) = u31;
                    u30 = (*(float *)((((t36 << 2) + t28) + 0x0)));
                    u31 = (*(float *)((t13 + t25)));
                    t25 = 0x4C;
                    u30 = (u30 - u31);
                    *(float *)((((int)stk + 8) + t25)) = u30;
                    t25 = 0x34;
                    u31 = (*(float *)((t13 + t25)));
                    t25 = 0x4;
                    u30 = (*(float *)((((t36 << 2) + t28) + t25)));
                    u30 = (u30 - u31);
                    t25 = 0x50;
                    t27 = 0xA5C;
                    t26 = 0xC01E822;
                    *(float *)((((int)stk + 8) + t25)) = u30;
                    t25 = 0x38;
                    u31 = (*(float *)((t13 + t25)));
                    t25 = 0x8;
                    u30 = (*(float *)((((t36 << 2) + t28) + t25)));
                    t25 = 0x54;
                    u30 = (u30 - u31);
                    *(float *)((((int)stk + 8) + t25)) = u30;
                    t25 = (FUN_0c01e822((t13 + 0x30), (((int)stk + 4) + 0x50), (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x44), (t27)));
                    t27 = 0xF8;
                    t28 = t29;
                    t28 = (t28 << 2);
                    t27 = (t27 + ((int)stk + 8));
                    t28 = (t28 + t27);
                    *(unsigned int *)(((int)stk + 8)) = t28;
                    if (t25 == 0) {
                        *(float *)((t28 + 0x0)) = ((u16 + u15) * 0.5f);
                    } else {
                        t25 = 0x40;
                        *(unsigned int *)(((int)stk + 8)) = t28;
                        u31 = (*(float *)((((int)stk + 8) + t25)));
                        t25 = 0x30;
                        u50 = *(float *)((t13 + t25));
                        t25 = 0x48;
                        u51 = *(float *)((((int)stk + 8) + t25));
                        t25 = 0x38;
                        u52 = *(float *)((t13 + t25));
                        t25 = 0x28;
                        u53 = (u50 - u31);
                        u54 = (u50 - u31);
                        u31 = (u52 - u51);
                        u31 = (u31 * (u52 - u51));
                        u55 = u31;
                        u55 = u55 + u54 * u53;
                        u31 = u55;
                        u31 = _builtin_sqrtf(u31);
                        u31 = (u31 + (-1.0f));
                        *(float *)((t28 + 0x0)) = u31;
                        *(float *)((((int)stk + 8) + t25)) = 0.0f;
                        t25 = 0x2C;
                        *(float *)((((int)stk + 8) + t25)) = 0.0f;
                        t25 = 0x30;
                        t28 = (*(int *)(((int)stk + 8)));
                        u31 = (*(float *)((t28 + 0x0)));
                        u31 = (-u31);
                        *(float *)((((int)stk + 8) + t25)) = u31;
                        t25 = (FUN_0c0db470((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x1C)));
                        t28 = 0x98;
                        t25 = 0x1C;
                        t59 = *(int *)(((int)stk + 24));
                        u31 = (*(float *)((((int)stk + 8) + t25)));
                        t28 = (t28 + ((int)stk + 8));
                        t25 = 0x20;
                        *(float *)(((t59 + t28) + 0x0)) = u31;
                        u31 = (*(float *)((((int)stk + 8) + t25)));
                        t27 = (t59 + t28);
                        t27 = (t27 + 0x4);
                        t25 = 0x24;
                        *(float *)((t27 + 0x0)) = u31;
                        u31 = (*(float *)((((int)stk + 8) + t25)));
                        t27 = (t59 + t28);
                        t27 = (t27 + 0x8);
                        *(float *)((t27 + 0x0)) = u31;
                        u64 = u31;
                    }
                    u31 = u64;
                    t28 = 0xC0DC4C0;
                    t25 = (nlPopMatrix(0x1));
                    t28 = 0xF8;
                    t27 = t29;
                    t25 = 0x4F4;
                    t27 = (t27 << 2);
                    t28 = (t28 + ((int)stk + 8));
                    t26 = (*(int *)((a4 + t25)));
                    t27 = (t27 + t28);
                    t25 = t26;
                    t26 = (t26 << 1);
                    u30 = (*(float *)((t27 + 0x0)));
                    t26 = (t26 + t25);
                    t25 = 0xC1F79BC;
                    t26 = (t26 << 2);
                    t26 = (*(int *)((t26 + t25)));
                    t25 = 0x80;
                    u31 = (*(float *)((t26 + t25)));
                    if (u30 > u31) {
                        t25 = t29;
                        t25 = (t25 << 2);
                        *(unsigned int *)(((((int)stk + 8) + 0x58) + t25)) = 0x1;
                    } else {
                        t25 = 0x4F4;
                        t26 = (*(int *)(((int)stk + 20)));
                        t27 = (*(int *)((a4 + t25)));
                        t25 = t27;
                        t27 = (t27 << 1);
                        u30 = (*(float *)((t26 + 0x0)));
                        t27 = (t27 + t25);
                        t25 = 0xC1F79BC;
                        t27 = (t27 << 2);
                        t27 = (*(int *)((t27 + t25)));
                        t25 = 0x84;
                        u31 = (*(float *)((t27 + t25)));
                        if (u30 > u31) {
                            t26 = (*(int *)(((int)stk + 16)));
                            t27 = 0x2;
                            *(unsigned int *)((t26 + 0x0)) = t27;
                        } else {
                            t25 = (*(int *)(((int)stk + 12)));
                            t27 = 0x3;
                            *(unsigned int *)((t25 + 0x0)) = t27;
                        }
                    }
                    t28 = (*(int *)(((int)stk + 12)));
                    t29 = (t29 + 0x1);
                    t28 = (t28 + 0x4);
                    *(unsigned int *)(((int)stk + 12)) = t28;
                    t27 = (*(int *)(((int)stk + 16)));
                    t27 = (t27 + 0x4);
                    *(unsigned int *)(((int)stk + 16)) = t27;
                    t26 = (*(int *)(((int)stk + 20)));
                    t26 = (t26 + 0x4);
                    *(unsigned int *)(((int)stk + 20)) = t26;
                    continue;
                }
                break;
            }
            nlPopMatrix(0x1);
            *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x0)) = 0x4;
            *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x1C)) = 0x3;
            *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x4)) = 0x3;
            FUN_0c0da2e0();
            t86 = FUN_0c0e5f1c();
            if (t86 != 0) {
                if (t86 != 1) {
                    if (t86 != 2) {
                    } else {
                        *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x18)) = 0x2;
                        *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x8)) = 0x2;
                        *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x14)) = 0x0;
                        *(unsigned int *)(((((int)stk + 8) + 0x78) + 0xC)) = 0x0;
                        *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x10)) = 0x1;
                    }
                } else {
                    *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x18)) = 0x0;
                    *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x8)) = 0x0;
                    *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x14)) = 0x1;
                    *(unsigned int *)(((((int)stk + 8) + 0x78) + 0xC)) = 0x1;
                    *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x10)) = 0x2;
                    t90 = 0x2;
                }
                t93 = t90;
            } else {
                *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x18)) = 0x2;
                *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x8)) = 0x2;
                *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x14)) = 0x1;
                *(unsigned int *)(((((int)stk + 8) + 0x78) + 0xC)) = 0x1;
                *(unsigned int *)(((((int)stk + 8) + 0x78) + 0x10)) = 0x0;
                t93 = 0x2;
            }
            t95 = t86;
            t97 = t93;
            t98 = 0x0;
            for (;;) {
                if ((unsigned int)t98 >= (unsigned int)0x20) {
                    break;
                }
                t95 = t98;
                t97 = (*(int *)(((((int)stk + 8) + 0x58) + t95)));
                t98 = (t98 + 0x4);
                t96 = (*(int *)(((((int)stk + 8) + 0x78) + t95)));
                t97 = (t97 << 1);
                t96 = (t96 + t97);
                *(unsigned int *)(((((int)stk + 8) + 0x78) + t95)) = t96;
            }
            t101 = t95;
            t102 = t96;
            t103 = t97;
            t104 = 0x1;
            t105 = 0x0;
            t106 = a7;
            for (;;) {
                if ((int)t104 >= (int)0x8) {
                    break;
                }
                t106 = t104;
                t106 = (t106 << 2);
                t106 = (t106 + (((int)stk + 8) + 0x78));
                t101 = (t105 << 2);
                t102 = (*(int *)((t106 + 0x0)));
                t103 = (*(int *)(((((int)stk + 8) + 0x78) + t101)));
                if ((int)t102 >= (int)t103) {
                    t101 = (t105 << 2);
                    t102 = (*(int *)((t106 + 0x0)));
                    t103 = (*(int *)(((((int)stk + 8) + 0x78) + t101)));
                    if (t102 == t103) {
                        t102 = t104;
                        t102 = (t102 - 4);
                        t103 = t105;
                        t103 = (t103 - 4);
                        u108 = (float)t102;
                        u107 = (float)t103;
                        u108 = _builtin_fabsf(u108);
                        u107 = _builtin_fabsf(u107);
                        if (u107 > u108) {
                            t105 = t104;
                        }
                    }
                } else {
                    t105 = t104;
                }
                t104 = (t104 + 0x1);
            }
            *(float *)((a4 + 0x518)) = (*(float *)((((((t105 << 1) + t105) << 2) + (0x98 + ((int)stk + 8))) + 0x0)));
            *(float *)((a4 + 0x51C)) = (*(float *)((((((t105 << 1) + t105) << 2) + (0x98 + ((int)stk + 8))) + 0x4)));
            *(float *)((a4 + 0x520)) = (*(float *)((((((t105 << 1) + t105) << 2) + (0x98 + ((int)stk + 8))) + 0x8)));
            *(unsigned int *)((a4 + 0x524)) = 0x1;
            *(unsigned int *)(((0x528 + a4) + 0x0)) = (*(int *)(((((int)stk + 8) + 0x58) + (t105 << 2))));
            t132 = (t105 << 2);
        }
        t148 = t132;
    }
    return t148;
}
