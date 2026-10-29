/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05265c(float);
int FUN_0c05a978(int, int, int, int);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08640a(int, int, int, int, int, int);
extern int FUN_0c086638();
extern int FUN_0c0866c4();
int FUN_0c086778(int, int, int);
int FUN_0c0868d6(int, int);
int FUN_0c092c2c(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c7aa4(int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e6118(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c085752(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c052754(int a4, int a5, int a6, int a7);

int FUN_0c085752(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    float u2;
    int t6;
    int t19;
    int t37;
    int t41;
    int t58;
    int t76;
    int t78;
    int t88;
    int t89;
    int t97;
    int t104;
    int t108;
    int t135;
    int t165;
    int t173;
    int t183;
    int t184;
    float u185;
    float u196;
    float u198;
    float u199;
    int t200;
    int t210;
    int t306;
    int t338;
    int t339;
    int t348;
    int t360;
    int t366;
    int t370;
    int t373;
    int t381;
    int t389;
    int t392;
    int t419;
    int t423;
    int t424;
    int t442;
    int t447;
    int t476;
    int t498;
    int stk[34];

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
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    *(unsigned int *)(((int)stk + 12)) = R5;
    t0 = *(int *)((((0x2BC + R4) + ((R5 & 0x1) << 2)) + 0x0));
    u2 = *(float *)((R4 + 0x284));
    *(unsigned int *)(((int)stk + 24)) = (0xC1AAE7C + ((((*(int *)((((0x2C4 + R4) + ((R5 & 0x1) << 2)) + 0x0))) << 2) << 2) << 1));
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((R4 + 0x3D4)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((R4 + 0x3D8)));
    t6 = *(int *)((R4 + 0x3DC));
    *(unsigned int *)(((0x2EC + R4) + 0x0)) = ((*(int *)(((0x2EC + R4) + 0x0))) & (~(*(int *)((((*(int *)(((int)stk + 12))) << 2) + 0xC200A6C)))));
    R10 = (0x0);
    R11 = (t6);
    R12 = (((((t0 << 2) << 2) << 1) + 0xC1AAE7C));
    R13 = (((R5 & 0x1) << 2));
    R14 = (R4);
    R8 = ((R5 & 0x1));
    R9 = (0x1);
    F15 = (u2);
    if ((((R5 & 0x1) & 0x1) != 0)) goto L_C0857D0;
    *(unsigned int *)((R14 + 0x2F4)) = (*(int *)((R12 + 0xC)));
    L_C0857D0:;
    t19 = *(signed char *)((R12 + 0x16));
    R4 = (t19);
    if (((unsigned char)t19 == 0)) goto L_C085802;
    if (((int)(*(int *)((((0x2B4 + R14) + R13) + 0x0))) < (int)(unsigned char)R4)) goto L_C085802;
    *(unsigned int *)(((int)stk + 28)) = (((unsigned char)(*(signed char *)((R12 + 0x17))) + (*(int *)((R14 + 0x2E8)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0))));
    R0 = (0x2E8);
    L_C08581A:;
    if ((((*(int *)((((0x2CC + R14) + R13) + 0x0))) & R9) == 0)) goto L_C08590A;
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((R12 + 0x8)));
    *(unsigned int *)((((0x2CC + R14) + R13) + 0x0)) = 0x2;
    if ((R8 != 0)) goto L_C085846;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)(((*(int *)(((int)stk + 20))) + 0x60)); }
    L_C085846:;
    t37 = ((int (*)(int, int, int, int))(FUN_0c086638))((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    t41 = ((int (*)(int, int, int, float))(FUN_0c0866c4))((*(int *)(((*(int *)(((int)stk + 24))) + 0x18))), R11, (*(int *)(((int)stk + 12))), F15);
    FUN_0c086778((*(int *)(((int)stk + 16))), R11, (*(int *)(((int)stk + 12))));
    if (((*(int *)((((0x2D4 + R14) + R13) + 0x0))) == 0)) goto L_C0858AC;
    *(unsigned int *)((((0x2DC + R14) + R13) + 0x0)) = (*(int *)((((0x2D4 + R14) + R13) + 0x0)));
    R3 = (0x2D4);
    L_C0858AE:;
    *(unsigned int *)((((R3 + R14) + R13) + 0x0)) = R10;
    if (((int)(*(int *)((((0x2C4 + R14) + R13) + 0x0))) > (int)0x27)) goto L_C0858DC;
    R0 = ((((unsigned short)(*(short *)((R12 + 0x12))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    L_C0858F4:;
    *(unsigned int *)(((int)stk + 28)) = R0;
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = (((int)R0 >= 0) ? (R9 << (R0 & 31)) : ((-(int)R0 & 31) ? ((int)R9 >> (-(int)R0 & 31)) : ((int)R9 >> 31)));
    R3 = (0x2B4);
    L_C085C8A:;
    *(unsigned int *)((((R3 + R14) + R13) + 0x0)) = R10;
    L_C085D66:;
    *(unsigned int *)((((0x2A4 + R14) + R13) + 0x0)) = ((*(int *)((((0x2A4 + R14) + R13) + 0x0))) + 0x1);
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = ((*(int *)((((0x2AC + R14) + R13) + 0x0))) - 1);
    t58 = *(int *)((R13 + (0x2CC + R14)));
    R0 = (t58);
    if (((t58 & 14) != 0)) goto L_C085D94;
    if (((*(int *)((((0x2B4 + R14) + R13) + 0x0))) != 0)) goto L_C085DDA;
    L_C085D94:;
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((R12 + 0x8)));
    if (((int)(*(int *)((((0x2C4 + R14) + R13) + 0x0))) > (int)0x27)) goto L_C085DC0;
    R0 = ((((unsigned short)(*(short *)((R12 + 0x12))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    L_C085DD8:;
    *(unsigned int *)(((int)stk + 28)) = R0;
    L_C085DDA:;
    if ((R8 != 0)) goto L_C085DEC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x40)) = *(struct mv3 *)(((*(int *)(((int)stk + 20))) + 0x60)); }
    L_C085DEC:;
    if (((*(int *)((((0x2AC + R14) + R13) + 0x0))) == 0)) goto L_C085E1A;
    *(volatile int *)((R14 + 0x2E8));
    t76 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 8) = t76;
    t78 = (*(int *)((((0x2AC + R14) + R13) + 0x0)));
    *(int *)((int)stk + 4) = t78;
    R0 = ((FUN_0c08640a((*(int *)(((int)stk + 16))), R11, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 28))), t78, t76)));
    L_C085E64:;
    if ((R8 == 0)) goto L_C085E6C;
    L_C0861BE:;
    if (((*(int *)((((0x2AC + R14) + R13) + 0x0))) == 0)) goto L_C0861CE;
    L_C0862DE:;
    if ((R8 == 0)) goto L_C0862E6;
    L_C0863F4:;
    return R0;
    L_C0862E6:;
    t88 = *(int *)((((0x2BC + R14) + R13) + 0x0));
    t89 = *(int *)((((((t88 << 2) << 2) << 1) + 0xC1AAE7C) + 0x0));
    R11 = (((((t88 << 2) << 2) << 1) + 0xC1AAE7C));
    R12 = (t89);
    if ((t89 == 0)) goto L_C086326;
    R8 = (0xC05A978);
    L_C08631C:;
    R0 = (0xC);
    if (((*(float *)((R12 + 0xC))) != 0.0f)) goto L_C086304;
    L_C086326:;
    t97 = *(int *)((R11 + 0x4));
    R12 = (t97);
    if ((t97 == 0)) goto L_C0863F4;
    R11 = (0xC0CC054);
    R8 = (0xC0CC3F8);
    L_C0863EE:;
    if (((*(short *)((R12 + 0x0))) != 0)) goto L_C086334;
    goto L_C0863F4;
    L_C086334:;
    t104 = *(short *)((R12 + 0x2));
    R0 = ((unsigned short)t104);
    if (((unsigned short)t104 != (*(int *)((((0x2A4 + R14) + R13) + 0x0))))) goto L_C0863EC;
    t108 = *(short *)((R12 + 0x0));
    R0 = ((unsigned short)t108);
    if (((unsigned short)t108 != 75)) goto L_C0863D6;
    if ((((*(int *)0xC23A1A8) & 0x100) != 0)) goto L_C0863A4;
    FUN_0c0cc3f8((*(int *)((R12 + 0x4))), R5, R6, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    R0 = (0xC0);
    if (((int)(*(int *)((R14 + 0xC0))) < (int)0x29)) goto L_C0863B2;
    if (((*(int *)((R12 + 0x4))) != 0x62CA9)) goto L_C0863B2;
    FUN_0c0cc054(0x0, 0x1D);
    R0 = ((FUN_0c0cc054(0x1, 0x1D)));
    L_C0863B2:;
    if (((*(int *)((R12 + 0x4))) != 0x52CA9)) goto L_C0863C2;
    R0 = ((FUN_0c0cc054((*(int *)((R14 + 0xE4))), 0x16)));
    L_C0863C2:;
    if (((*(int *)((R12 + 0x4))) != 0x82CA9)) goto L_C0863EC;
    R0 = ((FUN_0c0cc054((*(int *)((R14 + 0xE4))), 0x17)));
    L_C0863EC:;
    R12 = ((R12 + 0x8));
    goto L_C0863EE;
    L_C0863A4:;
    t135 = FUN_0c0868d6(R14, (*(int *)((R12 + 0x4))));
    R0 = (t135);
    if ((t135 == 0)) goto L_C0863B2;
    R0 = ((FUN_0c0cc3f8((*(int *)((R12 + 0x4))), R5, R6, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28))));
    goto L_C0863B2;
    L_C0863D6:;
    if ((R0 != 59)) goto L_C0863E4;
    R0 = (0xC0);
    if (((int)(*(int *)((R14 + 0xC0))) > (int)0x5)) goto L_C0863EC;
    L_C0863E4:;
    R0 = ((FUN_0c092c2c(R14, R12, R6, R7)));
    goto L_C0863EC;
    L_C086304:;
    if (((unsigned short)(*(short *)((R12 + 0x6))) != (*(int *)((((0x2A4 + R14) + R13) + 0x0))))) goto L_C08631A;
    FUN_0c05a978(R14, R12, R6, R7);
    L_C08631A:;
    R12 = ((R12 + 0x10));
    goto L_C08631C;
    L_C0861CE:;
    R4 = (0x1F70);
    R5 = (0xC200A5C);
    R6 = (0xC200A64);
    if (((*(int *)((R13 + (0x2CC + R14)))) != 2)) goto L_C08627C;
    *(unsigned int *)((R14 + 0xD8)) = R10;
    *(unsigned int *)(((0x2EC + R14) + 0x0)) = ((*(int *)(((0x2EC + R14) + 0x0))) | (*(int *)((R6 + R13))));
    *(unsigned int *)((((0x2BC + R14) + R13) + 0x0)) = (*(int *)((((0x2C4 + R14) + R13) + 0x0)));
    *(unsigned int *)((((0x2CC + R14) + R13) + 0x0)) = 0x4;
    *(unsigned int *)((((0x2A4 + R14) + R13) + 0x0)) = R10;
    R0 = (0x14);
    if ((((*(int *)((((0x2B4 + R14) + R13) + 0x0))) + 0x1) != (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 24))) + 0x14))))) goto L_C0862DE;
    t165 = *(int *)((R12 + 0x8));
    *(unsigned int *)(((0x2EC + R14) + 0x0)) = ((*(int *)((R5 + R13))) + (R4 & t165));
    R0 = (R13);
    R4 = ((R4 & t165));
    goto L_C0862DE;
    L_C08627C:;
    R0 = (0x14);
    if (((int)((*(int *)((((0x2B4 + R14) + R13) + 0x0))) + 0x1) < (int)(unsigned char)(*(signed char *)((R12 + 0x14))))) goto L_C0862A2;
    t173 = *(int *)((R12 + 0x8));
    *(unsigned int *)(((0x2EC + R14) + 0x0)) = ((*(int *)((R5 + R13))) + (R4 & t173));
    R0 = (R13);
    R4 = ((R4 & t173));
    L_C0862A2:;
    if (((*(int *)((((0x2B4 + R14) + R13) + 0x0))) != 0)) goto L_C0862DE;
    *(unsigned int *)((R14 + 0xD8)) = R10;
    *(unsigned int *)(((0x2EC + R14) + 0x0)) = ((*(int *)(((0x2EC + R14) + 0x0))) | (*(int *)((R6 + R13))));
    *(unsigned int *)((((0x2BC + R14) + R13) + 0x0)) = (*(int *)((((0x2C4 + R14) + R13) + 0x0)));
    *(unsigned int *)((((0x2A4 + R14) + R13) + 0x0)) = R10;
    R0 = (R13);
    goto L_C0862DE;
    L_C085E6C:;
    t183 = *(int *)(((int)stk + 28));
    t184 = *(int *)(((int)stk + 16));
    u185 = *(float *)((R11 + 0x60));
    R4 = ((((int)t183 >= 0) ? (R9 << (t183 & 31)) : ((-(int)t183 & 31) ? ((int)R9 >> (-(int)t183 & 31)) : ((int)R9 >> 31))));
    R5 = (t184);
    F2 = (((u185 - (*(float *)((t184 + 0x60)))) * (float)(*(int *)((((0x2AC + R14) + R13) + 0x0)))));
    F5 = ((float)(((int)t183 >= 0) ? (R9 << (t183 & 31)) : ((-(int)t183 & 31) ? ((int)R9 >> (-(int)t183 & 31)) : ((int)R9 >> 31))));
    F6 = (u185);
    if ((!(0.0f > (float)(((int)t183 >= 0) ? (R9 << (t183 & 31)) : ((-(int)t183 & 31) ? ((int)R9 >> (-(int)t183 & 31)) : ((int)R9 >> 31)))))) goto L_C085EA4;
    F4 = ((F5 + 4.2949673e+09f));
    L_C085EA6:;
    *(float *)(((int)stk + 88)) = (F6 - (F2 / F4));
    u196 = *(float *)((R11 + 0x64));
    *(float *)(((int)stk + 92)) = (u196 - (((u196 - (*(float *)((R5 + 0x64)))) * (float)(*(int *)((((0x2AC + R14) + R13) + 0x0)))) / F4));
    u198 = *(float *)((R11 + 0x68));
    u199 = *(float *)((R5 + 0x68));
    t200 = *(int *)((((0x2AC + R14) + R13) + 0x0));
    *(float *)(((int)stk + 96)) = (u198 - (((u198 - u199) * (float)t200) / F4));
    *(float *)((R14 + 0x3E8)) = (*(float *)(((int)stk + 92)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 20))) + 0x60)) = *(struct mv3 *)((((int)stk + 12) + 0x4C)); }
    F1 = ((u198 - (((u198 - u199) * (float)t200) / F4)));
    F5 = (u198);
    if ((((*(int *)(((int)stk + 36))) & 4) == 0)) goto L_C085F20;
    if (((*(int *)((R14 + 0x2C4))) == (*(int *)((R14 + 0x2BC))))) goto L_C085F20;
    *(unsigned int *)(((int)stk + 36)) = 0x3;
    L_C085F20:;
    t210 = *(int *)(((int)stk + 36));
    R0 = ((t210 & 0x7));
    R11 = (0xC0DC4C0);
    F15 = (0.0f);
    if (((t210 & 0x7) == 1)) goto L_C085F64;
    if ((R0 == 2)) goto L_C086014;
    if ((R0 != 3)) goto L_C085F38;
    L_C0861B0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)((R14 + 0x3E0)))) = *(struct mv3 *)((R14 + 0x48)); }
    goto L_C0861BE;
    L_C085F38:;
    if ((R0 != 4)) goto L_C085F40;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((*(int *)(((0x3E0 + R14) + 0x0))) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((0x4 + (*(int *)(((0x3E0 + R14) + 0x0)))) + 0x0))));
    R0 = (0x50);
    F3 = ((*(float *)(((0x8 + (*(int *)(((0x3E0 + R14) + 0x0)))) + 0x0))));
    L_C0861AA:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) + F3);
    goto L_C0861B0;
    L_C085F40:;
    if ((R0 != 0)) goto L_C085F48;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((R14 + 0x70))));
    nlRotateAY((*(short *)((R14 + 0x6E))));
    nlRotateAX((*(short *)((R14 + 0x6C))));
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 88))) - (*(float *)(((int)stk + 76))));
    *(float *)(((int)stk + 56)) = F15;
    *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 96))) - (*(float *)(((int)stk + 84))));
    FUN_0c0db4d0((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
    *(float *)(((((int)stk + 12) + 0x34) + 0x0)) = (*(float *)(((int)stk + 40)));
    *(float *)(((((int)stk + 12) + 0x38) + 0x0)) = (*(float *)(((int)stk + 44)));
    *(float *)(((((int)stk + 12) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 48)));
    nlPopMatrix(0x1);
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((((int)stk + 12) + 0x34) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((((int)stk + 12) + 0x38) + 0x0))));
    R0 = (0x50);
    F3 = ((*(float *)(((((int)stk + 12) + 0x3C) + 0x0))));
    goto L_C0861AA;
    L_C085F48:;
    goto L_C0861B0;
    L_C086014:;
    if (((int)(*(int *)((((0x2C4 + R14) + R13) + 0x0))) <= (int)0x27)) goto L_C086026;
    goto L_C0861B0;
    L_C086026:;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((R14 + 0x70))));
    nlRotateAY((*(short *)((R14 + 0x6E))));
    nlRotateAX((*(short *)((R14 + 0x6C))));
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 88))) - (*(float *)(((int)stk + 76))));
    *(float *)(((int)stk + 56)) = F15;
    *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 96))) - (*(float *)(((int)stk + 84))));
    FUN_0c0db4d0((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
    *(float *)(((((int)stk + 12) + 0x34) + 0x0)) = (*(float *)(((int)stk + 40)));
    *(float *)(((((int)stk + 12) + 0x38) + 0x0)) = (*(float *)(((int)stk + 44)));
    *(float *)(((((int)stk + 12) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 48)));
    nlPopMatrix(0x1);
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((((int)stk + 12) + 0x34) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((((int)stk + 12) + 0x38) + 0x0))));
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + (*(float *)(((((int)stk + 12) + 0x3C) + 0x0))));
    goto L_C0861B0;
    L_C085F64:;
    if (((int)(*(int *)((((0x2C4 + R14) + R13) + 0x0))) > (int)0x27)) goto L_C085F76;
    goto L_C0861B0;
    L_C085F76:;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((R14 + 0x70))));
    nlRotateAY((*(short *)((R14 + 0x6E))));
    nlRotateAX((*(short *)((R14 + 0x6C))));
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 88))) - (*(float *)(((int)stk + 76))));
    *(float *)(((int)stk + 56)) = F15;
    *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 96))) - (*(float *)(((int)stk + 84))));
    FUN_0c0db4d0((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
    *(float *)(((((int)stk + 12) + 0x34) + 0x0)) = (*(float *)(((int)stk + 40)));
    *(float *)(((((int)stk + 12) + 0x38) + 0x0)) = (*(float *)(((int)stk + 44)));
    *(float *)(((((int)stk + 12) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 48)));
    nlPopMatrix(0x1);
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((((int)stk + 12) + 0x34) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((((int)stk + 12) + 0x38) + 0x0))));
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + (*(float *)(((((int)stk + 12) + 0x3C) + 0x0))));
    goto L_C0861B0;
    L_C085EA4:;
    F4 = (F5);
    goto L_C085EA6;
    L_C085E1A:;
    t306 = *(int *)(((int)stk + 12));
    R0 = (t306);
    if ((t306 == 0)) goto L_C085E40;
    if ((R0 == 2)) goto L_C085E4E;
    if ((R0 == 1)) goto L_C085E5C;
    goto L_C085E64;
    L_C085E5C:;
    R0 = ((((int (*)(int, int, int, int))(FUN_0c086638))(R11, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 12))), R7)));
    goto L_C085E64;
    L_C085E4E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 20))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    goto L_C085E5C;
    L_C085E40:;
    *(volatile int *)(((int)stk + 20));
    R0 = ((FUN_0c0e6118()));
    goto L_C085E64;
    L_C085DC0:;
    R0 = ((((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x10))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    goto L_C085DD8;
    L_C0858DC:;
    R0 = ((((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x10))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    goto L_C0858F4;
    L_C0858AC:;
    R3 = (0x2DC);
    goto L_C0858AE;
    L_C08590A:;
    if (((*(int *)((((0x2AC + R14) + R13) + 0x0))) == 0)) goto L_C08591A;
    goto L_C085D66;
    L_C08591A:;
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = ((*(int *)((((0x2B4 + R14) + R13) + 0x0))) + 0x1);
    R4 = (0x8);
    if ((((*(int *)((R13 + (0x2CC + R14)))) & 12) == 0)) goto L_C0859E8;
    if (((R4 & (*(int *)((((0x2CC + R14) + R13) + 0x0)))) == 0)) goto L_C085942;
    *(unsigned int *)((R14 + 0x2F0)) = R10;
    L_C085942:;
    *(unsigned int *)((((0x2CC + R14) + R13) + 0x0)) = R10;
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = R9;
    *(unsigned int *)((((0x2D4 + R14) + R13) + 0x0)) = R10;
    *(unsigned int *)((((0x2DC + R14) + R13) + 0x0)) = R10;
    t338 = *(signed char *)((R12 + 0x15));
    t339 = *(int *)((R14 + 0x2E8));
    *(unsigned int *)(((int)stk + 28)) = ((unsigned char)t338 + t339);
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = (((int)((unsigned char)t338 + t339) >= 0) ? (R9 << (((unsigned char)t338 + t339) & 31)) : ((-(int)((unsigned char)t338 + t339) & 31) ? ((int)R9 >> (-(int)((unsigned char)t338 + t339) & 31)) : ((int)R9 >> 31)));
    R0 = (0x2E8);
    if (((R8 & R9) != 0)) goto L_C085988;
    *(unsigned int *)((R14 + 0x2F4)) = (*(int *)((R12 + 0xC)));
    R0 = (0x2F4);
    L_C085988:;
    if ((R8 != 0)) goto L_C08599A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    L_C08599A:;
    t348 = ((int (*)(int, int, int, int))(FUN_0c086638))(R11, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    if (((*(int *)((((0x2B4 + R14) + R13) + 0x0))) != (unsigned char)(*(signed char *)((R12 + 0x14))))) goto L_C0859C2;
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((R12 + 0x8)));
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = R10;
    L_C085BD4:;
    R4 = ((*(int *)(((int)stk + 24))));
    R5 = (R11);
    R6 = ((*(int *)(((int)stk + 12))));
    F4 = (F15);
    L_C085BDC:;
    t360 = ((int (*)(int, int, int, int, float))(FUN_0c0866c4))((*(int *)((R4 + 0x18))), R5, R6, R7, F4);
    FUN_0c086778((*(int *)(((int)stk + 16))), R11, (*(int *)(((int)stk + 12))));
    goto L_C085D66;
    L_C0859C2:;
    t366 = ((int (*)(int, int, int, int, float))(FUN_0c0866c4))(((*(int *)((R12 + 0x18))) + 0x6C), R11, (*(int *)(((int)stk + 12))), R7, F15);
    goto L_C085D66;
    L_C0859E8:;
    if (((int)(*(int *)((((0x2B4 + R14) + R13) + 0x0))) >= (int)(unsigned char)(*(signed char *)((R12 + 0x14))))) goto L_C0859FE;
    t370 = *(int *)((R13 + (0x2B4 + R14)));
    R0 = (t370);
    if ((t370 != 1)) goto L_C085C92;
    t373 = *(signed char *)((R12 + 0x16));
    R4 = (t373);
    if (((unsigned char)t373 == 0)) goto L_C085C32;
    if (((int)(*(int *)((((0x2B4 + R14) + R13) + 0x0))) <= (int)(unsigned char)R4)) goto L_C085C32;
    *(unsigned int *)(((int)stk + 28)) = ((unsigned char)(*(signed char *)((R12 + 0x17))) + (*(int *)((R14 + 0x2E8))));
    R0 = (0x2E8);
    L_C085C40:;
    t381 = *(int *)(((int)stk + 28));
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = (((int)t381 >= 0) ? (R9 << (t381 & 31)) : ((-(int)t381 & 31) ? ((int)R9 >> (-(int)t381 & 31)) : ((int)R9 >> 31)));
    if (((R8 & R9) != 0)) goto L_C085C5A;
    *(unsigned int *)((R14 + 0x2F4)) = (*(int *)((R12 + 0xC)));
    R0 = (0x2F4);
    L_C085C5A:;
    if ((R8 != 0)) goto L_C085C6C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    L_C085C6C:;
    t389 = ((int (*)(int, int, int, int))(FUN_0c086638))(R11, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    t392 = ((int (*)(int, int, int, float))(FUN_0c0866c4))(((*(int *)((R12 + 0x18))) + 0x6C), R11, (*(int *)(((int)stk + 12))), F15);
    *(unsigned int *)((((0x2DC + R14) + R13) + 0x0)) = R10;
    R3 = (0x2D4);
    goto L_C085C8A;
    L_C085C32:;
    *(unsigned int *)(((int)stk + 28)) = ((unsigned char)(*(signed char *)((R12 + 0x15))) + (*(int *)((R14 + 0x2E8))));
    R0 = (0x2E8);
    goto L_C085C40;
    L_C085C92:;
    if (((R4 & (*(int *)((R12 + 0x8)))) == 0)) goto L_C085D18;
    R0 = (0x2E4);
    if (((*(int *)((R14 + 0x2E4))) == 0)) goto L_C085CE8;
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = ((*(int *)((((0x2B4 + R14) + R13) + 0x0))) + (*(int *)((R14 + R0))));
    R0 = (0x14);
    F4 = (F15);
    if (((int)(*(int *)((((0x2B4 + R14) + R13) + 0x0))) < (int)(unsigned char)(*(signed char *)((R12 + 0x14))))) goto L_C085CD0;
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = ((unsigned char)(*(signed char *)((R12 + R0))) - 1);
    L_C085CD0:;
    R0 = ((((int (*)(int, int, int, int, float))(FUN_0c0866c4))((((*(int *)((((0x2B4 + R14) + R13) + 0x0))) * 0x6C) + (*(int *)((R12 + 0x18)))), R11, (*(int *)(((int)stk + 12))), R7, F4)));
    L_C085CE8:;
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = R9;
    if ((R8 != 0)) goto L_C085D44;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    L_C085D44:;
    t419 = ((int (*)(int, int, int, int))(FUN_0c086638))(R11, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    t423 = ((int (*)(int, int, int, float))(FUN_0c0866c4))((((*(int *)((((0x2B4 + R14) + R13) + 0x0))) * 0x6C) + (*(int *)((R12 + 0x18)))), R11, (*(int *)(((int)stk + 12))), F15);
    goto L_C085D66;
    L_C085D18:;
    t424 = *(int *)(((int)stk + 28));
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = (((int)t424 >= 0) ? (R9 << (t424 & 31)) : ((-(int)t424 & 31) ? ((int)R9 >> (-(int)t424 & 31)) : ((int)R9 >> 31)));
    if (((R8 & R9) != 0)) goto L_C085D32;
    *(unsigned int *)((R14 + 0x2F4)) = (*(int *)((R12 + 0xC)));
    R0 = (0x2F4);
    L_C085D32:;
    if ((R8 != 0)) goto L_C085D44;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    goto L_C085D44;
    L_C0859FE:;
    if ((R8 != 0)) goto L_C085A06;
    L_C085B34:;
    if (((*(int *)((((0x2D4 + R14) + R13) + 0x0))) == 0)) goto L_C085B56;
    *(unsigned int *)((((0x2DC + R14) + R13) + 0x0)) = (*(int *)((((0x2D4 + R14) + R13) + 0x0)));
    R3 = (0x2D4);
    L_C085B58:;
    *(unsigned int *)((((R3 + R14) + R13) + 0x0)) = R10;
    if (((int)(*(int *)((((0x2C4 + R14) + R13) + 0x0))) > (int)0x27)) goto L_C085B86;
    R0 = ((((unsigned short)(*(short *)((R12 + 0x12))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    L_C085B9E:;
    *(unsigned int *)(((int)stk + 28)) = R0;
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((R12 + 0x8)));
    *(unsigned int *)((((0x2B4 + R14) + R13) + 0x0)) = R10;
    t442 = *(int *)(((int)stk + 28));
    *(unsigned int *)((((0x2AC + R14) + R13) + 0x0)) = (((int)t442 >= 0) ? (R9 << (t442 & 31)) : ((-(int)t442 & 31) ? ((int)R9 >> (-(int)t442 & 31)) : ((int)R9 >> 31)));
    if ((R8 != 0)) goto L_C085BCC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 16))) + 0x60)) = *(struct mv3 *)((R11 + 0x60)); }
    L_C085BCC:;
    t447 = ((int (*)(int, int, int, int))(FUN_0c086638))(R11, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    goto L_C085BD4;
    L_C085B86:;
    R0 = ((((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x10))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0)))));
    goto L_C085B9E;
    L_C085B56:;
    R3 = (0x2DC);
    goto L_C085B58;
    L_C085A06:;
    if (((*(int *)((R14 + 0x2C8))) == (*(int *)((R14 + 0x2BC))))) goto L_C085A16;
    goto L_C085B34;
    L_C085A16:;
    *(unsigned int *)(((int)stk + 32)) = (((((*(int *)((R14 + 0x2BC))) << 2) << 2) << 1) + 0xC1AAE7C);
    *(unsigned int *)(((0x2C4 + R14) + 0x4)) = (*(int *)(((0x2C4 + R14) + 0x0)));
    if (((*(int *)((R14 + 0x2B4))) != 0)) goto L_C085AB4;
    *(unsigned int *)(((0x2DC + R14) + 0x4)) = (*(int *)(((0x2DC + R14) + 0x0)));
    *(unsigned int *)((R14 + 0x2D8)) = R10;
    if (((int)(*(int *)((R14 + 0x2C8))) > (int)0x27)) goto L_C085A64;
    R0 = ((((unsigned short)(*(short *)((R12 + 0x12))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)(((0x2E0 + R14) + 0x0)))));
    L_C085A7A:;
    *(unsigned int *)(((int)stk + 28)) = R0;
    *(unsigned int *)((R14 + 0x2D0)) = R4;
    *(unsigned int *)((R14 + 0x2B8)) = R10;
    *(unsigned int *)(((0x2AC + R14) + 0x4)) = (*(int *)(((0x2AC + R14) + 0x0)));
    R4 = ((0x2AC + R14));
    if (((*(int *)((R14 + 0x2B0))) != 0)) goto L_C085A98;
    *(unsigned int *)((R14 + 0x2B0)) = R9;
    L_C085A98:;
    *(unsigned int *)(((int)stk + 24)) = (((((*(int *)((R14 + 0x2C8))) << 2) << 2) << 1) + 0xC1AAE7C);
    t476 = ((int (*)(int, int, int, int))(FUN_0c086638))((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    goto L_C085BD4;
    L_C085A64:;
    R0 = ((((unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x10))) + (*(int *)(((0x2E8 + R14) + 0x0)))) + (*(int *)(((0x2E0 + R14) + 0x0)))));
    goto L_C085A7A;
    L_C085AB4:;
    if (((int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 32))) + 0x16))) < (int)(*(int *)((R14 + 0x2B4))))) goto L_C085AF0;
    R1 = (((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 32))) + 0x15))) + (*(int *)((R14 + 0x2E8)))));
    L_C085AFE:;
    *(unsigned int *)(((int)stk + 28)) = R1;
    *(unsigned int *)((R14 + 0x2D0)) = R4;
    *(unsigned int *)(((0x2B4 + R14) + 0x4)) = ((*(int *)(((0x2B4 + R14) + 0x0))) + 0x1);
    *(unsigned int *)(((0x2AC + R14) + 0x4)) = (*(int *)(((0x2AC + R14) + 0x0)));
    R4 = ((0x2AC + R14));
    if (((*(int *)((R14 + 0x2B0))) != 0)) goto L_C085B22;
    *(unsigned int *)((R14 + 0x2B0)) = R9;
    L_C085B22:;
    t498 = ((int (*)(int, int, int, int))(FUN_0c086638))((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), R7);
    R4 = ((*(int *)(((int)stk + 32))));
    R5 = (R11);
    R6 = ((*(int *)(((int)stk + 12))));
    F4 = (F15);
    goto L_C085BDC;
    L_C085AF0:;
    R1 = (((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 32))) + 0x17))) + (*(int *)((R14 + 0x2E8)))));
    goto L_C085AFE;
    L_C085802:;
    *(unsigned int *)(((int)stk + 28)) = (((unsigned char)(*(signed char *)((R12 + 0x15))) + (*(int *)((R14 + 0x2E8)))) + (*(int *)((((0x2DC + R14) + R13) + 0x0))));
    R0 = (0x2E8);
    goto L_C08581A;
}

int FUN_0c052754(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t21;
    float u33;
    float u60;
    float u73;
    int t78;
    float u97;
    int t124;
    float u129;
    float u132;
    float u144;
    float u147;
    float u157;
    float u160;
    int t184;
    float u185;
    int t186;
    float u187;
    float u205;
    int t206;
    int t207;
    int t208;
    int t209;
    float u213;
    int t215;
    int t219;
    int t226;
    int t230;
    int t231;
    float u239;
    float u245;
    int t253;
    float u261;
    float u266;
    float u273;
    int t281;
    int t289;
    int t308;
    float u318;
    float u322;
    float u338;
    float u341;
    int t345;
    int t353;
    int t356;
    float u387;
    float u394;
    int t400;
    int t410;
    int t416;
    int t420;
    float u435;
    int t436;
    int t437;
    int t438;
    float u439;
    float u440;
    int t445;
    float u447;
    float u457;
    int t464;
    int t491;
    float u472;
    float u482;
    float u511;
    float u512;
    int t514;
    float u519;
    float u529;
    int t548;
    float u561;
    float u571;
    int t588;
    float u592;
    float u602;
    int t657;
    float u666;
    float u695;
    float u708;
    int t713;
    float u732;
    int t759;
    float u764;
    float u767;
    float u779;
    float u782;
    float u792;
    float u795;
    int t819;
    float u820;
    int t821;
    float u822;
    float u840;
    int t841;
    int t842;
    int t843;
    int t844;
    float u848;
    int t850;
    int t854;
    int t861;
    int t865;
    int t866;
    float u874;
    float u880;
    int t888;
    float u896;
    float u901;
    float u908;
    int t916;
    int t924;
    int t943;
    float u953;
    float u957;
    float u973;
    float u976;
    int t980;
    int t988;
    int t991;
    float u1022;
    float u1029;
    int t1035;
    int t1045;
    int t1051;
    int t1055;
    float u1070;
    int t1071;
    int t1072;
    int t1073;
    float u1074;
    float u1075;
    int t1080;
    float u1082;
    float u1092;
    int t1099;
    int t1126;
    float u1107;
    float u1117;
    float u1146;
    float u1147;
    int t1149;
    float u1154;
    float u1164;
    int t1183;
    float u1196;
    float u1206;
    int t1223;
    float u1227;
    float u1237;
    int t1292;
    int t27;
    int t67;
    float u258;
    int t330;
    int t629;
    float u349;
    int t372;
    int t373;
    int t611;
    int t613;
    int t614;
    float u615;
    float u616;
    int t580;
    int t582;
    int t583;
    float u584;
    float u585;
    int t538;
    int t540;
    int t541;
    float u542;
    float u543;
    int t500;
    int t502;
    int t503;
    float u504;
    float u505;
    int t493;
    int t494;
    float u495;
    float u496;
    int t554;
    float u556;
    float u557;
    int t634;
    int t635;
    int t642;
    int t643;
    int t650;
    int t651;
    int t702;
    float u893;
    int t965;
    int t1264;
    float u984;
    int t1007;
    int t1008;
    int t1246;
    int t1248;
    int t1249;
    float u1250;
    float u1251;
    int t1215;
    int t1217;
    int t1218;
    float u1219;
    float u1220;
    int t1173;
    int t1175;
    int t1176;
    float u1177;
    float u1178;
    int t1135;
    int t1137;
    int t1138;
    float u1139;
    float u1140;
    int t1128;
    int t1129;
    float u1130;
    float u1131;
    int t1189;
    float u1191;
    float u1192;
    int t1269;
    int t1270;
    int t1277;
    int t1278;
    int t1285;
    int t1286;
    int stk[52];

    t1 = *(int *)(((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0) + 0x0));
    if (t1 == 0) {
        return 0xC052890;
    }
    t2 = *(int *)(((0xBC + t1) + 0x0));
    *(float *)(((((int)stk + 8) + 0x24) + 0x0)) = ((float)(*(int *)(((t2 << 2) + 0xC247594))) / (float)(*(int *)(((t2 << 2) + 0xC24759C))));
    *(float *)(((int)stk + 24)) = (*(float *)0xC2475B8);
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        if ((int)(*(int *)(((((*(int *)((a4 + 0x30))) << 2) + 0xC247030) + 0x0))) <= (int)0x1) {
            FUN_0c0e19f2((t2 << 2), a5, a6, a7);
        }
        t21 = *(int *)(((((*(int *)((a4 + 0x30))) << 2) + 0xC247030) + 0x0));
        if ((int)t21 >= (int)0x6) {
            return t21;
        }
        if (((int)(*(int *)0xC23ED9C) >= (int)0xB) && (t27 = *(int *)0xC23ED9C, (int)t27 <= (int)0xE)) {
            return t27;
        }
        if ((*(float *)(((int)stk + 24))) == 1.0f) {
            return 0x10;
        }
        if (!((*(float *)((a4 + 0x3C))) > (*(float *)(((int)stk + 44))))) {
            u33 = *(float *)((a4 + 0x3C));
            *(float *)((a4 + 0x3C)) = (u33 + 0.00399999972f);
            if ((u33 + 0.00399999972f) > (*(float *)(((int)stk + 44)))) {
                *(float *)((a4 + 0x3C)) = (*(float *)(((int)stk + 44)));
            }
        } else {
            *(float *)((a4 + 0x3C)) = (*(float *)(((int)stk + 44)));
        }
        if ((*(float *)((a4 + 0x38))) > (*(float *)((a4 + 0x3C)))) {
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.00399999972f);
        }
        if ((*(float *)((a4 + 0x3C))) > (*(float *)((a4 + 0x38)))) {
            *(float *)((a4 + 0x38)) = (*(float *)((a4 + 0x3C)));
        }
        if (((*(int *)0xC23A1A8) & 0x800) != 0) {
            u60 = *(float *)(((int)stk + 44));
            *(float *)((a4 + 0x3C)) = u60;
            *(float *)((a4 + 0x38)) = u60;
        }
        if ((*(int *)0xC204998) != 0) {
            if (((*(int *)0xC1FF89C) == 0) && (t67 = *(int *)0xC1FF8A0, t67 == 0)) {
            } else {
                FUN_0c0dc5a0();
                FUN_0c0dcc70(((*(float *)0xC0F874C) + 0.00119999994f), ((*(float *)0xC0F8750) + -0.00129999989f), (*(float *)0xC0F8754));
                u73 = *(float *)((a4 + 0x34));
                *(float *)(((int)stk + 104)) = (u73 * 0.5f);
                nlScale((u73 * 0.5f), (u73 * 0.5f), (u73 * 0.5f));
                FUN_0c0de000((*(float *)((a4 + 0x34))));
                t78 = 0x1481;
                if ((*(int *)0xC1FF89C) != 0) {
                    t78 = 0x1488;
                }
                FUN_0c0c473c(t78);
                nlPopMatrix(0x1);
            }
            if ((*(int *)0xC1FF898) != 0) {
                FUN_0c0dc5a0();
                FUN_0c0dcc70(((*(float *)0xC0F874C) + -0.00079999998f), ((*(float *)0xC0F8750) + -0.00129999989f), (*(float *)0xC0F8754));
                u97 = *(float *)((a4 + 0x34));
                *(float *)(((int)stk + 100)) = (u97 * 0.5f);
                nlScale((u97 * 0.5f), (u97 * 0.5f), (u97 * 0.5f));
                FUN_0c0de000((*(float *)((a4 + 0x34))));
                FUN_0c0c473c(0x1489);
                nlPopMatrix(0x1);
            }
        }
        FUN_0c0dc5a0();
        t124 = *(int *)((t1 + 0xBC));
        u129 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x4)));
        u129 = u129 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0xC)));
        FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x0))), u129, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x8))));
        u132 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 80)) = u132;
        nlScale(u132, u132, u132);
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        FUN_0c0c473c((unsigned short)(*(short *)(((((*(int *)((t1 + 0xC0))) >> 1) << 1) + 0xC0F885C))));
        nlUnitMatrix();
        u144 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x14)));
        u144 = u144 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x1C)));
        FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x10))), u144, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x18))));
        u147 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 84)) = u147;
        nlScale(u147, u147, u147);
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        FUN_0c0c473c(0x3D);
        nlUnitMatrix();
        u157 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x24)));
        u157 = u157 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x2C)));
        FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x20))), u157, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x28))));
        u160 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 76)) = u160;
        nlScale(u160, u160, u160);
        nlPushMatrix(0x0);
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        FUN_0c08498e(1.0f, 0.0f, 0.0f);
        FUN_0c05265c((*(float *)((a4 + 0x38))));
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        FUN_0c08498e(1.0f, 1.0f, 1.0f);
        FUN_0c05265c((*(float *)((a4 + 0x3C))));
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        if (((*(int *)0xC23A1A8) & 0x800) != 0) {
            *(float *)((a4 + 0x7C)) = (*(float *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC24758C)));
        }
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
        t184 = *(int *)(((0xBC + t1) + 0x0));
        u185 = *(float *)(((t184 << 2) + 0xC24758C));
        t186 = *(int *)(((t184 << 2) + 0xC24759C));
        u187 = *(float *)(((0x7C + a4) + 0x0));
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        if ((*(int *)((t1 + 0x32C))) != 0) {
            if (((*(int *)0xC23A258) & 1) != 0) {
                *(unsigned int *)(((int)stk + 12)) = 0x3;
            }
        } else {
            *(unsigned int *)(((int)stk + 12)) = ((unsigned int)((*(int *)0xC23A258) & 0xC) >> 2);
            if (((*(int *)0xC23A258) & 16) != 0) {
                *(unsigned int *)(((int)stk + 12)) = (0x3 - (*(int *)(((int)stk + 12))));
            }
        }
        u205 = (*(float *)((a4 + 0x7C)));
        u205 = u205 + 0.099999994f * ((u185 / (float)t186) - u187);
        t206 = *(int *)0xC2475C4;
        t207 = *(int *)0xC2475C8;
        *(float *)((a4 + 0x7C)) = u205;
        t208 = t206;
        t209 = t207;
        for (;;) {
            t209 = (t209 - 0x1);
            *(float *)(((*(int *)((t208 + 0x0))) + 0x18)) = ((*(float *)((t208 + 0x1C))) + ((-u205) + 1.0f));
            u213 = ((-u205) + 1.0f);
            u213 = u213 + 0.5f * (*(float *)((t208 + 0x20)));
            *(float *)(((*(int *)((t208 + 0x0))) + 0x1C)) = u213;
            t215 = *(int *)((t208 + 0x0));
            *(unsigned int *)(((t215 + 0x1C) + 0x0)) = ((*(int *)(((t215 + 0x1C) + 0x0))) | 0x1);
            t208 = (t208 + 0x24);
            if (t209 == 0) {
                break;
            }
        }
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        t219 = *(int *)(((int)stk + 12));
        *(float *)(((int)stk + 88)) = (1.0f - ((float)t219 / 10.0f));
        FUN_0c08498e((1.0f - ((float)t219 / 10.0f)), (1.0f - ((float)t219 / 10.0f)), (1.0f - ((float)t219 / 10.0f)));
        FUN_0c0c465c(0x28);
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        nlPopMatrix(0x1);
        if ((int)(*(int *)((t1 + 0x340))) <= (int)0x3) {
            FUN_0c08498e(1.0f, 1.0f, 1.0f);
        } else {
            t226 = *(int *)((t1 + 0x340));
            *(unsigned int *)(((int)stk + 16)) = t226;
            *(float *)(((int)stk + 64)) = ((*(float *)((a4 + 0x34))) * (*(float *)(((((t226 << 2) << 1) + 0xC0F87AC) + 0x4))));
            *(unsigned int *)(((int)stk + 36)) = (*(int *)(((((t226 << 2) << 1) + 0xC0F87AC) + 0x0)));
            t230 = *(int *)((t1 + 0x330));
            t231 = 0x350;
            if ((t230 != 2) && (t230 != 3)) {
                t231 = 0x34C;
            }
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)((t1 + t231))) << 2) + 0xC2475D4)));
            nlUnitMatrix();
            u239 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x78)));
            u239 = u239 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x80)));
            FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x74))), u239, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x7C))));
            nlRotateAY(((*(int *)0xC2475C0) + 0x3FFF));
            nlRotateAZ(0xE38);
            u245 = *(float *)(((int)stk + 64));
            nlScale(u245, u245, u245);
            FUN_0c0de000((*(float *)(((int)stk + 64))));
            FUN_0c0c473c((*(int *)(((*(int *)(((int)stk + 8))) + 0x240))));
            t253 = *(int *)(((*(int *)(((int)stk + 8))) + 0x21C));
            *(unsigned int *)(((int)stk + 12)) = t253;
            if (t253 != 0) {
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if ((int)(*(int *)(((int)stk + 12))) > (int)0x32) {
                    *(unsigned int *)(((int)stk + 12)) = 0x32;
                }
                if ((*(int *)(((int)stk + 16))) == 5) {
                    *(float *)(((int)stk + 120)) = 4.0f;
                    u258 = 8.0f;
                } else {
                    *(float *)(((int)stk + 120)) = 6.0f;
                    u258 = 10.0f;
                }
                *(float *)(((int)stk + 112)) = u258;
                *(float *)(((int)stk + 20)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                u261 = *(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x84));
                *(float *)(((int)stk + 108)) = u261;
                *(float *)(((int)stk + 68)) = u261;
                *(float *)(((int)stk + 56)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x88)));
                *(float *)(((int)stk + 32)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x8C)));
                *(unsigned int *)(((int)stk + 16)) = 0x0;
                if ((int)(*(int *)(((int)stk + 12))) > 0) {
                    for (;;) {
                        nlUnitMatrix();
                        u266 = *(float *)(((int)stk + 32));
                        FUN_0c0dcc70((-(((((*(float *)(((int)stk + 68))) + -320.0f) * u266)) * 0.00265445886f)), (-(((((240.0f - (*(float *)0xC2475BC)) - (*(float *)(((int)stk + 56)))) * u266)) * 0.00265445909f)), u266);
                        u273 = *(float *)(((int)stk + 20));
                        nlScale(u273, u273, u273);
                        FUN_0c0de000((*(float *)(((int)stk + 20))));
                        FUN_0c0c473c((*(int *)(((int)stk + 36))));
                        *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + (*(float *)(((int)stk + 120))));
                        t281 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t281 + 0x1);
                        if ((t281 + 0x1) == 10) {
                            *(unsigned int *)(((int)stk + 8)) = 0x0;
                            *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 108)));
                            *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + (*(float *)(((int)stk + 112))));
                        }
                        t289 = *(int *)(((int)stk + 16));
                        *(unsigned int *)(((int)stk + 16)) = (t289 + 0x1);
                        if ((int)(t289 + 0x1) >= (int)(*(int *)(((int)stk + 12)))) {
                            break;
                        }
                    }
                }
            }
            FUN_0c08498e(0.5f, 0.5f, 0.5f);
        }
        t308 = *(int *)((((*(int *)((t1 + 0x358))) << 2) + 0xC2475D4));
        *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x34))) * 1.0999999f);
        *(unsigned int *)(((int)stk + 8)) = (*(int *)((t308 + 0x21C)));
        *(unsigned int *)(((int)stk + 12)) = (unsigned short)(*(short *)((((*(int *)((t1 + 0xBC))) * 0xE) + 0xC24799A)));
        nlUnitMatrix();
        u318 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x34)));
        u318 = u318 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x3C)));
        FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x30))), u318, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x38))));
        nlRotateAY(0x3FFF);
        u322 = *(float *)(((int)stk + 48));
        nlScale(u322, u322, u322);
        FUN_0c0de000((*(float *)(((int)stk + 48))));
        FUN_0c0c465c(0x1251);
        if ((int)(*(int *)(((int)stk + 8))) > (int)0xA) {
            *(unsigned int *)(((int)stk + 8)) = 0xA;
        }
        if (((*(int *)(((int)stk + 8))) == 0) && (t330 = *(int *)(((int)stk + 12)), t330 == 0)) {
            nlUnitMatrix();
            u338 = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x68)));
            u338 = u338 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x70)));
            FUN_0c0dcc70((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x64))), u338, (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x6C))));
            u341 = *(float *)((a4 + 0x34));
            *(float *)(((int)stk + 92)) = u341;
            nlScale(u341, u341, u341);
            FUN_0c0de000((*(float *)((a4 + 0x34))));
            t345 = *(int *)0xC23A258;
            *(float *)(((int)stk + 116)) = (float)(t345 & 0x1);
            if (0.0f > (float)(t345 & 0x1)) {
                u349 = ((*(float *)(((int)stk + 116))) + 4.2949673e+09f);
            } else {
                u349 = (*(float *)(((int)stk + 116)));
            }
            *(float *)(((int)stk + 140)) = u349;
            FUN_0c08498e(1.0f, u349, u349);
            FUN_0c0c465c(0x31);
        } else {
            t353 = *(int *)((a4 + 0x44));
            if (t353 != 0) {
                if (t353 != 1) {
                } else {
                    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x48)));
                    if (((*(int *)0xC23A258) & 1) != 0) {
                        t356 = *(int *)((a4 + 0x48));
                        *(unsigned int *)((a4 + 0x48)) = (t356 + 0x1);
                        if ((int)(t356 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                            *(unsigned int *)((a4 + 0x44)) = 0x0;
                        }
                    }
                }
            } else {
                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 8)));
                if (((int)(*(int *)((a4 + 0x40))) <= (int)(*(int *)(((int)stk + 8)))) && (t372 = *(int *)(((int)stk + 8)), t373 = *(int *)((a4 + 0x40)), (int)t373 < (int)t372)) {
                    *(unsigned int *)((a4 + 0x44)) = 0x1;
                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                }
            }
            *(unsigned int *)((a4 + 0x40)) = (*(int *)(((int)stk + 8)));
            *(float *)(((int)stk + 52)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x40)));
            *(float *)(((int)stk + 96)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x44)));
            *(float *)(((int)stk + 28)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x48)));
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)(*(int *)(((int)stk + 16))) > 0) {
                for (;;) {
                    nlUnitMatrix();
                    u387 = *(float *)(((int)stk + 28));
                    FUN_0c0dcc70((-(((((*(float *)(((int)stk + 52))) + -320.0f) * u387)) * 0.00265445886f)), (-(((((240.0f - (*(float *)0xC2475BC)) - (*(float *)(((int)stk + 96)))) * u387)) * 0.00265445909f)), u387);
                    u394 = *(float *)((a4 + 0x34));
                    *(float *)(((int)stk + 60)) = u394;
                    nlScale(u394, u394, u394);
                    FUN_0c0de000((*(float *)((a4 + 0x34))));
                    FUN_0c0c465c(0x12);
                    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) + 6.0f);
                    t400 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t400 + 0x1);
                    if ((int)(t400 + 0x1) >= (int)(*(int *)(((int)stk + 16)))) {
                        break;
                    }
                }
            }
            t410 = *(int *)0xC1FF6D4;
            if ((int)(*(int *)(((int)stk + 12))) > (int)t410) {
                *(unsigned int *)(((int)stk + 12)) = t410;
            }
            if ((int)(*(int *)((a4 + 0x4C))) < (int)(*(int *)(((int)stk + 12)))) {
                t416 = *(int *)(((int)stk + 12));
                *(unsigned int *)((((a4 + 0x54) + ((t416 - 1) << 2)) + 0x0)) = 0x2;
                *(unsigned int *)(((((t416 - 1) << 2) + (a4 + 0x68)) + 0x0)) = 0x28;
                *(unsigned int *)((a4 + 0x50)) = (*(int *)(((int)stk + 12)));
            } else {
                if ((int)(*(int *)((a4 + 0x4C))) > (int)(*(int *)(((int)stk + 12)))) {
                    t420 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((a4 + 0x54) + (t420 << 2)) + 0x0)) = 0x3;
                    *(unsigned int *)((((a4 + 0x68) + (t420 << 2)) + 0x0)) = 0x1E;
                    *(unsigned int *)((((t420 << 2) + (a4 + 0x54)) + 0x4)) = 0x0;
                }
            }
            *(unsigned int *)((a4 + 0x4C)) = (*(int *)(((int)stk + 12)));
            *(unsigned int *)(((int)stk + 148)) = (*(int *)((a4 + 0x50)));
            *(float *)(((int)stk + 124)) = ((*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x58))) + -4.0f);
            *(float *)(((int)stk + 144)) = (*(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x5C)));
            u435 = *(float *)((((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C) + 0x60));
            *(float *)(((int)stk + 72)) = u435;
            *(unsigned int *)(((int)stk + 36)) = 0x0;
            *(unsigned int *)(((int)stk + 16)) = (a4 + 0x54);
            *(unsigned int *)(((int)stk + 136)) = (a4 + 0x68);
            *(unsigned int *)(((int)stk + 8)) = (a4 + 0x54);
            t436 = (a4 + 0x68);
            t437 = (a4 + 0x54);
            t438 = ((((((t124 << 2) << 1) + t124) << 2) << 2) + 0xC0F868C);
            u439 = u435;
            u440 = -4.0f;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 36))) < (int)(*(int *)(((int)stk + 148)))) {
                    t437 = 0xFFFFB8E4;
                    *(float *)(((int)stk + 132)) = 1.0f;
                    u440 = (*(float *)((a4 + 0x34)));
                    *(float *)(((int)stk + 40)) = u440;
                    *(unsigned int *)(((int)stk + 128)) = t437;
                    t437 = 0x1259;
                    *(unsigned int *)(((int)stk + 152)) = 0x0;
                    *(unsigned int *)(((int)stk + 156)) = t437;
                    t438 = (*(int *)(((int)stk + 36)));
                    t438 = (t438 << 2);
                    t445 = *(int *)((t438 + (a4 + 0x54)));
                    if (t445 != 0) {
                        if (t445 != 1) {
                            if (t445 != 2) {
                                if (t445 != 3) {
                                    t436 = 0xC0DCCC0;
                                    nlUnitMatrix();
                                    t436 = 0xC2475BC;
                                    u447 = *(float *)(((int)stk + 72));
                                    u439 = 240.0f;
                                    u440 = (*(float *)((t436 + 0x0)));
                                    u439 = (u439 - u440);
                                    u440 = (*(float *)(((int)stk + 124)));
                                    u439 = (u439 - (*(float *)(((int)stk + 144))));
                                    u440 = (u440 + -320.0f);
                                    u439 = (u439 * u447);
                                    u440 = (u440 * u447);
                                    u439 = (u439 * 0.00265445909f);
                                    u440 = (u440 * 0.00265445886f);
                                    FUN_0c0dcc70((-u440), (-u439), u447);
                                    t436 = 0xC0DC890;
                                    t437 = (*(int *)(((int)stk + 128)));
                                    nlRotateAY(t437);
                                    t438 = 0xC0DC6E0;
                                    t437 = (*(int *)(((int)stk + 152)));
                                    nlRotateAX(t437);
                                    t436 = 0xC0DC950;
                                    t437 = 0xFFFFC38F;
                                    nlRotateAZ(t437);
                                    u457 = *(float *)(((int)stk + 40));
                                    nlScale(u457, u457, u457);
                                    FUN_0c0de000((*(float *)(((int)stk + 40))));
                                    t438 = 0xC0C475C;
                                    t437 = (*(int *)(((int)stk + 156)));
                                    FUN_0c0c475c(t437, (*(float *)(((int)stk + 132))));
                                    t500 = 0xC0C475C;
                                } else {
                                    t464 = *(int *)(((int)stk + 136));
                                    t436 = (*(int *)((t464 + 0x0)));
                                    t436 = (t436 - 1);
                                    *(unsigned int *)((t464 + 0x0)) = t436;
                                    if ((int)t436 < 0) {
                                        t436 = (*(int *)(((int)stk + 16)));
                                        *(unsigned int *)((t436 + 0x0)) = 0x0;
                                        t436 = (*(int *)(((int)stk + 12)));
                                        *(unsigned int *)((a4 + 0x50)) = t436;
                                    }
                                    t491 = t438;
                                    if (((*(int *)0xC23A258) & 4) == 0) {
                                        t436 = 0xC0DCCC0;
                                        nlUnitMatrix();
                                        t436 = 0xC2475BC;
                                        u472 = *(float *)(((int)stk + 72));
                                        u439 = 240.0f;
                                        u440 = (*(float *)((t436 + 0x0)));
                                        u439 = (u439 - u440);
                                        u440 = (*(float *)(((int)stk + 124)));
                                        u439 = (u439 - (*(float *)(((int)stk + 144))));
                                        u440 = (u440 + -320.0f);
                                        u439 = (u439 * u472);
                                        u440 = (u440 * u472);
                                        u439 = (u439 * 0.00265445909f);
                                        u440 = (u440 * 0.00265445886f);
                                        FUN_0c0dcc70((-u440), (-u439), u472);
                                        t436 = 0xC0DC890;
                                        t437 = (*(int *)(((int)stk + 128)));
                                        nlRotateAY(t437);
                                        t438 = 0xC0DC6E0;
                                        t437 = (*(int *)(((int)stk + 152)));
                                        nlRotateAX(t437);
                                        t436 = 0xC0DC950;
                                        t437 = 0xFFFFC38F;
                                        nlRotateAZ(t437);
                                        u482 = *(float *)(((int)stk + 40));
                                        nlScale(u482, u482, u482);
                                        FUN_0c0de000((*(float *)(((int)stk + 40))));
                                        t438 = 0xC0C475C;
                                        t437 = (*(int *)(((int)stk + 156)));
                                        FUN_0c0c475c(t437, (*(float *)(((int)stk + 132))));
                                        t491 = 0xC0C475C;
                                    } else {
                                        t493 = t436;
                                        t494 = t437;
                                        u495 = u439;
                                        u496 = u440;
                                    }
                                    t500 = t491;
                                    t502 = t493;
                                    t503 = t494;
                                    u504 = u495;
                                    u505 = u496;
                                }
                                t538 = t500;
                                t540 = t502;
                                t541 = t503;
                                u542 = u504;
                                u543 = u505;
                            } else {
                                t437 = a4;
                                t437 = (t437 + 0x68);
                                t437 = (t437 + t438);
                                t436 = (*(int *)(((int)stk + 128)));
                                t436 = (t436 + ((*(int *)((t437 + 0x0))) * 0x2666));
                                *(unsigned int *)(((int)stk + 128)) = t436;
                                *(unsigned int *)(((int)stk + 152)) = 0xFFFFF778;
                                u439 = (*(float *)(((int)stk + 40)));
                                u440 = (float)(*(int *)((t437 + 0x0)));
                                u511 = u440;
                                u440 = 1.0f;
                                u512 = u440;
                                u512 = u512 + 0.125f * u511;
                                u440 = u512;
                                u439 = (u439 * u440);
                                *(float *)(((int)stk + 40)) = u439;
                                u440 = (*(float *)(((int)stk + 132)));
                                u440 = (u440 - (u511 * 0.0174999982f));
                                *(float *)(((int)stk + 132)) = u440;
                                t514 = *(int *)((t437 + 0x0));
                                *(unsigned int *)((t437 + 0x0)) = (t514 - 1);
                                if ((int)(t514 - 1) < 0) {
                                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
                                }
                                t436 = 0xC0DCCC0;
                                nlUnitMatrix();
                                t436 = 0xC2475BC;
                                u519 = *(float *)(((int)stk + 72));
                                u439 = 240.0f;
                                u440 = (*(float *)((t436 + 0x0)));
                                u439 = (u439 - u440);
                                u440 = (*(float *)(((int)stk + 124)));
                                u439 = (u439 - (*(float *)(((int)stk + 144))));
                                u440 = (u440 + -320.0f);
                                u439 = (u439 * u519);
                                u440 = (u440 * u519);
                                u439 = (u439 * 0.00265445909f);
                                u440 = (u440 * 0.00265445886f);
                                FUN_0c0dcc70((-u440), (-u439), u519);
                                t436 = 0xC0DC890;
                                t437 = (*(int *)(((int)stk + 128)));
                                nlRotateAY(t437);
                                t438 = 0xC0DC6E0;
                                t437 = (*(int *)(((int)stk + 152)));
                                nlRotateAX(t437);
                                t436 = 0xC0DC950;
                                t437 = 0xFFFFC38F;
                                nlRotateAZ(t437);
                                u529 = *(float *)(((int)stk + 40));
                                nlScale(u529, u529, u529);
                                FUN_0c0de000((*(float *)(((int)stk + 40))));
                                t438 = 0xC0C475C;
                                t437 = (*(int *)(((int)stk + 156)));
                                FUN_0c0c475c(t437, (*(float *)(((int)stk + 132))));
                                t538 = 0xC0C475C;
                            }
                            t580 = t538;
                            t582 = t540;
                            t583 = t541;
                            u584 = u542;
                            u585 = u543;
                        } else {
                            t437 = a4;
                            t437 = (t437 + 0x68);
                            t437 = (t437 + t438);
                            *(unsigned int *)(((int)stk + 156)) = ((*(int *)((t437 + 0x0))) + 0x1255);
                            t436 = (*(int *)((t437 + 0x0)));
                            t436 = (t436 + 0x1);
                            *(unsigned int *)((t437 + 0x0)) = t436;
                            if ((int)t436 > (int)0x4) {
                                t436 = a4;
                                *(unsigned int *)((((a4 + 0x54) + t438) + 0x0)) = 0x0;
                                t436 = (t436 + 0x68);
                                t436 = (t436 + t438);
                                t548 = t436;
                                *(int *)((int)stk + 4) = t548;
                                *(unsigned int *)((t548 + 0x0)) = ((((FUN_0c0da2e0()) & 0x3F) + 0x30) << 2);
                            } else {
                                t554 = t437;
                                u556 = u439;
                                u557 = u440;
                            }
                            u439 = u556;
                            u440 = u557;
                            t436 = 0xC0DCCC0;
                            t437 = t554;
                            nlUnitMatrix();
                            t436 = 0xC2475BC;
                            u561 = *(float *)(((int)stk + 72));
                            u439 = 240.0f;
                            u440 = (*(float *)((t436 + 0x0)));
                            u439 = (u439 - u440);
                            u440 = (*(float *)(((int)stk + 124)));
                            u439 = (u439 - (*(float *)(((int)stk + 144))));
                            u440 = (u440 + -320.0f);
                            u439 = (u439 * u561);
                            u440 = (u440 * u561);
                            u439 = (u439 * 0.00265445909f);
                            u440 = (u440 * 0.00265445886f);
                            FUN_0c0dcc70((-u440), (-u439), u561);
                            t436 = 0xC0DC890;
                            t437 = (*(int *)(((int)stk + 128)));
                            nlRotateAY(t437);
                            t438 = 0xC0DC6E0;
                            t437 = (*(int *)(((int)stk + 152)));
                            nlRotateAX(t437);
                            t436 = 0xC0DC950;
                            t437 = 0xFFFFC38F;
                            nlRotateAZ(t437);
                            u571 = *(float *)(((int)stk + 40));
                            nlScale(u571, u571, u571);
                            FUN_0c0de000((*(float *)(((int)stk + 40))));
                            t438 = 0xC0C475C;
                            t437 = (*(int *)(((int)stk + 156)));
                            FUN_0c0c475c(t437, (*(float *)(((int)stk + 132))));
                            t580 = 0xC0C475C;
                        }
                        t611 = t580;
                        t613 = t582;
                        t614 = t583;
                        u615 = u584;
                        u616 = u585;
                    } else {
                        t436 = a4;
                        t436 = (t436 + 0x68);
                        t436 = (t436 + t438);
                        t588 = *(int *)((t436 + 0x0));
                        *(unsigned int *)((t436 + 0x0)) = (t588 - 1);
                        if ((int)(t588 - 1) <= 0) {
                            t436 = 0x1;
                            *(unsigned int *)((((a4 + 0x54) + t438) + 0x0)) = t436;
                            *(unsigned int *)((((a4 + 0x68) + t438) + 0x0)) = 0x0;
                        }
                        t436 = 0xC0DCCC0;
                        nlUnitMatrix();
                        t436 = 0xC2475BC;
                        u592 = *(float *)(((int)stk + 72));
                        u439 = 240.0f;
                        u440 = (*(float *)((t436 + 0x0)));
                        u439 = (u439 - u440);
                        u440 = (*(float *)(((int)stk + 124)));
                        u439 = (u439 - (*(float *)(((int)stk + 144))));
                        u440 = (u440 + -320.0f);
                        u439 = (u439 * u592);
                        u440 = (u440 * u592);
                        u439 = (u439 * 0.00265445909f);
                        u440 = (u440 * 0.00265445886f);
                        FUN_0c0dcc70((-u440), (-u439), u592);
                        t436 = 0xC0DC890;
                        t437 = (*(int *)(((int)stk + 128)));
                        nlRotateAY(t437);
                        t438 = 0xC0DC6E0;
                        t437 = (*(int *)(((int)stk + 152)));
                        nlRotateAX(t437);
                        t436 = 0xC0DC950;
                        t437 = 0xFFFFC38F;
                        nlRotateAZ(t437);
                        u602 = *(float *)(((int)stk + 40));
                        nlScale(u602, u602, u602);
                        FUN_0c0de000((*(float *)(((int)stk + 40))));
                        t438 = 0xC0C475C;
                        t437 = (*(int *)(((int)stk + 156)));
                        FUN_0c0c475c(t437, (*(float *)(((int)stk + 132))));
                        t611 = 0xC0C475C;
                    }
                    u439 = u615;
                    u440 = u616;
                    t438 = t611;
                    t436 = t613;
                    t437 = t614;
                    u440 = 10.0f;
                    u439 = (*(float *)(((int)stk + 124)));
                    u439 = (u439 + u440);
                    *(float *)(((int)stk + 124)) = u439;
                    t436 = (*(int *)(((int)stk + 36)));
                    t436 = (t436 + 0x1);
                    *(unsigned int *)(((int)stk + 36)) = t436;
                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
                    *(unsigned int *)(((int)stk + 136)) = ((*(int *)(((int)stk + 136))) + 0x4);
                    t436 = (*(int *)(((int)stk + 8)));
                    t436 = (t436 + 0x4);
                    *(unsigned int *)(((int)stk + 8)) = t436;
                    continue;
                }
                break;
            }
            t629 = t437;
        }
        FUN_0c0849da(t629, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        if ((((*(int *)((t1 + 0x20C))) & 0x40000) != 0) && ((t634 = *(int *)((t1 + 0xCC)), (int)t634 >= (int)0x4) && (t635 = *(int *)((t1 + 0xCC)), (int)t635 < (int)0xC))) {
            FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xCC))));
        }
        if ((((*(int *)((t1 + 0x20C))) & 0x80000) != 0) && ((t642 = *(int *)((t1 + 0xD0)), (int)t642 >= (int)0x4) && (t643 = *(int *)((t1 + 0xD0)), (int)t643 < (int)0xC))) {
            FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xD0))));
        }
        if (((*(int *)((t1 + 0xD8))) != 0) && ((t650 = *(int *)((t1 + 0xE4)), (int)t650 >= (int)0x4) && (t651 = *(int *)((t1 + 0xE4)), (int)t651 < (int)0xC))) {
            FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xE4))));
        }
        t657 = *(short *)((t1 + 0xE8));
        if (((int)t657 >= (int)0x4) && ((int)t657 < (int)0xC)) {
            FUN_0c0c7aa4(t1, (*(short *)((t1 + 0xE8))));
        }
        return nlPopMatrix(0x1);
    }
    if (!((*(float *)((a4 + 0x3C))) > (*(float *)(((int)stk + 44))))) {
        u666 = *(float *)((a4 + 0x3C));
        *(float *)((a4 + 0x3C)) = (u666 + 0.00399999972f);
        if ((u666 + 0.00399999972f) > (*(float *)(((int)stk + 44)))) {
            *(float *)((a4 + 0x3C)) = (*(float *)(((int)stk + 44)));
        }
    } else {
        *(float *)((a4 + 0x3C)) = (*(float *)(((int)stk + 44)));
    }
    if ((*(float *)((a4 + 0x38))) > (*(float *)((a4 + 0x3C)))) {
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 0.00399999972f);
    }
    if ((*(float *)((a4 + 0x3C))) > (*(float *)((a4 + 0x38)))) {
        *(float *)((a4 + 0x38)) = (*(float *)((a4 + 0x3C)));
    }
    if (((*(int *)0xC23A1A8) & 0x800) != 0) {
        u695 = *(float *)(((int)stk + 44));
        *(float *)((a4 + 0x3C)) = u695;
        *(float *)((a4 + 0x38)) = u695;
    }
    if ((*(int *)0xC204998) != 0) {
        if (((*(int *)0xC1FF89C) == 0) && (t702 = *(int *)0xC1FF8A0, t702 == 0)) {
        } else {
            FUN_0c0dc5a0();
            FUN_0c0dcc70(((*(float *)0xC0F874C) + 0.00119999994f), ((*(float *)0xC0F8750) + -0.00129999989f), (*(float *)0xC0F8754));
            u708 = *(float *)((a4 + 0x34));
            *(float *)(((int)stk + 104)) = (u708 * 0.5f);
            nlScale((u708 * 0.5f), (u708 * 0.5f), (u708 * 0.5f));
            FUN_0c0de000((*(float *)((a4 + 0x34))));
            t713 = 0x1481;
            if ((*(int *)0xC1FF89C) != 0) {
                t713 = 0x1488;
            }
            FUN_0c0c473c(t713);
            nlPopMatrix(0x1);
        }
        if ((*(int *)0xC1FF898) != 0) {
            FUN_0c0dc5a0();
            FUN_0c0dcc70(((*(float *)0xC0F874C) + -0.00079999998f), ((*(float *)0xC0F8750) + -0.00129999989f), (*(float *)0xC0F8754));
            u732 = *(float *)((a4 + 0x34));
            *(float *)(((int)stk + 100)) = (u732 * 0.5f);
            nlScale((u732 * 0.5f), (u732 * 0.5f), (u732 * 0.5f));
            FUN_0c0de000((*(float *)((a4 + 0x34))));
            FUN_0c0c473c(0x1489);
            nlPopMatrix(0x1);
        }
    }
    FUN_0c0dc5a0();
    t759 = *(int *)((t1 + 0xBC));
    u764 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x4)));
    u764 = u764 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0xC)));
    FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x0))), u764, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x8))));
    u767 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 80)) = u767;
    nlScale(u767, u767, u767);
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c0c473c((unsigned short)(*(short *)(((((*(int *)((t1 + 0xC0))) >> 1) << 1) + 0xC0F885C))));
    nlUnitMatrix();
    u779 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x14)));
    u779 = u779 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x1C)));
    FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x10))), u779, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x18))));
    u782 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 84)) = u782;
    nlScale(u782, u782, u782);
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c0c473c(0x3D);
    nlUnitMatrix();
    u792 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x24)));
    u792 = u792 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x2C)));
    FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x20))), u792, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x28))));
    u795 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 76)) = u795;
    nlScale(u795, u795, u795);
    nlPushMatrix(0x0);
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c08498e(1.0f, 0.0f, 0.0f);
    FUN_0c05265c((*(float *)((a4 + 0x38))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c05265c((*(float *)((a4 + 0x3C))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    if (((*(int *)0xC23A1A8) & 0x800) != 0) {
        *(float *)((a4 + 0x7C)) = (*(float *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC24758C)));
    }
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
    t819 = *(int *)(((0xBC + t1) + 0x0));
    u820 = *(float *)(((t819 << 2) + 0xC24758C));
    t821 = *(int *)(((t819 << 2) + 0xC24759C));
    u822 = *(float *)(((0x7C + a4) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if ((*(int *)((t1 + 0x32C))) != 0) {
        if (((*(int *)0xC23A258) & 1) != 0) {
            *(unsigned int *)(((int)stk + 12)) = 0x3;
        }
    } else {
        *(unsigned int *)(((int)stk + 12)) = ((unsigned int)((*(int *)0xC23A258) & 0xC) >> 2);
        if (((*(int *)0xC23A258) & 16) != 0) {
            *(unsigned int *)(((int)stk + 12)) = (0x3 - (*(int *)(((int)stk + 12))));
        }
    }
    u840 = (*(float *)((a4 + 0x7C)));
    u840 = u840 + 0.099999994f * ((u820 / (float)t821) - u822);
    t841 = *(int *)0xC2475C4;
    t842 = *(int *)0xC2475C8;
    *(float *)((a4 + 0x7C)) = u840;
    t843 = t841;
    t844 = t842;
    for (;;) {
        t844 = (t844 - 0x1);
        *(float *)(((*(int *)((t843 + 0x0))) + 0x18)) = ((*(float *)((t843 + 0x1C))) + ((-u840) + 1.0f));
        u848 = ((-u840) + 1.0f);
        u848 = u848 + 0.5f * (*(float *)((t843 + 0x20)));
        *(float *)(((*(int *)((t843 + 0x0))) + 0x1C)) = u848;
        t850 = *(int *)((t843 + 0x0));
        *(unsigned int *)(((t850 + 0x1C) + 0x0)) = ((*(int *)(((t850 + 0x1C) + 0x0))) | 0x1);
        t843 = (t843 + 0x24);
        if (t844 == 0) {
            break;
        }
    }
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    t854 = *(int *)(((int)stk + 12));
    *(float *)(((int)stk + 88)) = (1.0f - ((float)t854 / 10.0f));
    FUN_0c08498e((1.0f - ((float)t854 / 10.0f)), (1.0f - ((float)t854 / 10.0f)), (1.0f - ((float)t854 / 10.0f)));
    FUN_0c0c465c(0x28);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    nlPopMatrix(0x1);
    if ((int)(*(int *)((t1 + 0x340))) <= (int)0x3) {
        FUN_0c08498e(1.0f, 1.0f, 1.0f);
    } else {
        t861 = *(int *)((t1 + 0x340));
        *(unsigned int *)(((int)stk + 16)) = t861;
        *(float *)(((int)stk + 64)) = ((*(float *)((a4 + 0x34))) * (*(float *)(((((t861 << 2) << 1) + 0xC0F87AC) + 0x4))));
        *(unsigned int *)(((int)stk + 36)) = (*(int *)(((((t861 << 2) << 1) + 0xC0F87AC) + 0x0)));
        t865 = *(int *)((t1 + 0x330));
        t866 = 0x350;
        if ((t865 != 2) && (t865 != 3)) {
            t866 = 0x34C;
        }
        *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)((t1 + t866))) << 2) + 0xC2475D4)));
        nlUnitMatrix();
        u874 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x78)));
        u874 = u874 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x80)));
        FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x74))), u874, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x7C))));
        nlRotateAY(((*(int *)0xC2475C0) + 0x3FFF));
        nlRotateAZ(0xE38);
        u880 = *(float *)(((int)stk + 64));
        nlScale(u880, u880, u880);
        FUN_0c0de000((*(float *)(((int)stk + 64))));
        FUN_0c0c473c((*(int *)(((*(int *)(((int)stk + 8))) + 0x240))));
        t888 = *(int *)(((*(int *)(((int)stk + 8))) + 0x21C));
        *(unsigned int *)(((int)stk + 12)) = t888;
        if (t888 != 0) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)(*(int *)(((int)stk + 12))) > (int)0x32) {
                *(unsigned int *)(((int)stk + 12)) = 0x32;
            }
            if ((*(int *)(((int)stk + 16))) == 5) {
                *(float *)(((int)stk + 120)) = 4.0f;
                u893 = 8.0f;
            } else {
                *(float *)(((int)stk + 120)) = 6.0f;
                u893 = 10.0f;
            }
            *(float *)(((int)stk + 112)) = u893;
            *(float *)(((int)stk + 20)) = ((*(float *)((a4 + 0x34))) * 0.5f);
            u896 = *(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x84));
            *(float *)(((int)stk + 108)) = u896;
            *(float *)(((int)stk + 68)) = u896;
            *(float *)(((int)stk + 56)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x88)));
            *(float *)(((int)stk + 32)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x8C)));
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            if ((int)(*(int *)(((int)stk + 12))) > 0) {
                for (;;) {
                    nlUnitMatrix();
                    u901 = *(float *)(((int)stk + 32));
                    FUN_0c0dcc70((-(((((*(float *)(((int)stk + 68))) + -320.0f) * u901)) * 0.00265445886f)), (-(((((240.0f - (*(float *)0xC2475BC)) - (*(float *)(((int)stk + 56)))) * u901)) * 0.00265445909f)), u901);
                    u908 = *(float *)(((int)stk + 20));
                    nlScale(u908, u908, u908);
                    FUN_0c0de000((*(float *)(((int)stk + 20))));
                    FUN_0c0c473c((*(int *)(((int)stk + 36))));
                    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + (*(float *)(((int)stk + 120))));
                    t916 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t916 + 0x1);
                    if ((t916 + 0x1) == 10) {
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 108)));
                        *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + (*(float *)(((int)stk + 112))));
                    }
                    t924 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 16)) = (t924 + 0x1);
                    if ((int)(t924 + 0x1) >= (int)(*(int *)(((int)stk + 12)))) {
                        break;
                    }
                }
            }
        }
        FUN_0c08498e(0.5f, 0.5f, 0.5f);
    }
    t943 = *(int *)((((*(int *)((t1 + 0x358))) << 2) + 0xC2475D4));
    *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x34))) * 1.0999999f);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((t943 + 0x21C)));
    *(unsigned int *)(((int)stk + 12)) = (unsigned short)(*(short *)((((*(int *)((t1 + 0xBC))) * 0xE) + 0xC24799A)));
    nlUnitMatrix();
    u953 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x34)));
    u953 = u953 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x3C)));
    FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x30))), u953, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x38))));
    nlRotateAY(0x3FFF);
    u957 = *(float *)(((int)stk + 48));
    nlScale(u957, u957, u957);
    FUN_0c0de000((*(float *)(((int)stk + 48))));
    FUN_0c0c465c(0x1251);
    if ((int)(*(int *)(((int)stk + 8))) > (int)0xA) {
        *(unsigned int *)(((int)stk + 8)) = 0xA;
    }
    if (((*(int *)(((int)stk + 8))) == 0) && (t965 = *(int *)(((int)stk + 12)), t965 == 0)) {
        nlUnitMatrix();
        u973 = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x68)));
        u973 = u973 + (*(float *)(((int)stk + 24))) * (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x70)));
        FUN_0c0dcc70((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x64))), u973, (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x6C))));
        u976 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 92)) = u976;
        nlScale(u976, u976, u976);
        FUN_0c0de000((*(float *)((a4 + 0x34))));
        t980 = *(int *)0xC23A258;
        *(float *)(((int)stk + 116)) = (float)(t980 & 0x1);
        if (0.0f > (float)(t980 & 0x1)) {
            u984 = ((*(float *)(((int)stk + 116))) + 4.2949673e+09f);
        } else {
            u984 = (*(float *)(((int)stk + 116)));
        }
        *(float *)(((int)stk + 140)) = u984;
        FUN_0c08498e(1.0f, u984, u984);
        FUN_0c0c465c(0x31);
    } else {
        t988 = *(int *)((a4 + 0x44));
        if (t988 != 0) {
            if (t988 != 1) {
            } else {
                *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x48)));
                if (((*(int *)0xC23A258) & 1) != 0) {
                    t991 = *(int *)((a4 + 0x48));
                    *(unsigned int *)((a4 + 0x48)) = (t991 + 0x1);
                    if ((int)(t991 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                        *(unsigned int *)((a4 + 0x44)) = 0x0;
                    }
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 8)));
            if (((int)(*(int *)((a4 + 0x40))) <= (int)(*(int *)(((int)stk + 8)))) && (t1007 = *(int *)(((int)stk + 8)), t1008 = *(int *)((a4 + 0x40)), (int)t1008 < (int)t1007)) {
                *(unsigned int *)((a4 + 0x44)) = 0x1;
                *(unsigned int *)((a4 + 0x48)) = 0x0;
            }
        }
        *(unsigned int *)((a4 + 0x40)) = (*(int *)(((int)stk + 8)));
        *(float *)(((int)stk + 52)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x40)));
        *(float *)(((int)stk + 96)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x44)));
        *(float *)(((int)stk + 28)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x48)));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        if ((int)(*(int *)(((int)stk + 16))) > 0) {
            for (;;) {
                nlUnitMatrix();
                u1022 = *(float *)(((int)stk + 28));
                FUN_0c0dcc70((-(((((*(float *)(((int)stk + 52))) + -320.0f) * u1022)) * 0.00265445886f)), (-(((((240.0f - (*(float *)0xC2475BC)) - (*(float *)(((int)stk + 96)))) * u1022)) * 0.00265445909f)), u1022);
                u1029 = *(float *)((a4 + 0x34));
                *(float *)(((int)stk + 60)) = u1029;
                nlScale(u1029, u1029, u1029);
                FUN_0c0de000((*(float *)((a4 + 0x34))));
                FUN_0c0c465c(0x12);
                *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) + 6.0f);
                t1035 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t1035 + 0x1);
                if ((int)(t1035 + 0x1) >= (int)(*(int *)(((int)stk + 16)))) {
                    break;
                }
            }
        }
        t1045 = *(int *)0xC1FF6D4;
        if ((int)(*(int *)(((int)stk + 12))) > (int)t1045) {
            *(unsigned int *)(((int)stk + 12)) = t1045;
        }
        if ((int)(*(int *)((a4 + 0x4C))) < (int)(*(int *)(((int)stk + 12)))) {
            t1051 = *(int *)(((int)stk + 12));
            *(unsigned int *)((((a4 + 0x54) + ((t1051 - 1) << 2)) + 0x0)) = 0x2;
            *(unsigned int *)(((((t1051 - 1) << 2) + (a4 + 0x68)) + 0x0)) = 0x28;
            *(unsigned int *)((a4 + 0x50)) = (*(int *)(((int)stk + 12)));
        } else {
            if ((int)(*(int *)((a4 + 0x4C))) > (int)(*(int *)(((int)stk + 12)))) {
                t1055 = *(int *)(((int)stk + 12));
                *(unsigned int *)((((a4 + 0x54) + (t1055 << 2)) + 0x0)) = 0x3;
                *(unsigned int *)((((a4 + 0x68) + (t1055 << 2)) + 0x0)) = 0x1E;
                *(unsigned int *)((((t1055 << 2) + (a4 + 0x54)) + 0x4)) = 0x0;
            }
        }
        *(unsigned int *)((a4 + 0x4C)) = (*(int *)(((int)stk + 12)));
        *(unsigned int *)(((int)stk + 148)) = (*(int *)((a4 + 0x50)));
        *(float *)(((int)stk + 124)) = ((*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x58))) + -4.0f);
        *(float *)(((int)stk + 144)) = (*(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x5C)));
        u1070 = *(float *)((((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C) + 0x60));
        *(float *)(((int)stk + 72)) = u1070;
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x54);
        *(unsigned int *)(((int)stk + 136)) = (a4 + 0x68);
        *(unsigned int *)(((int)stk + 8)) = (a4 + 0x54);
        t1071 = (a4 + 0x68);
        t1072 = (a4 + 0x54);
        t1073 = ((((((t759 << 2) << 1) + t759) << 2) << 2) + 0xC0F868C);
        u1074 = u1070;
        u1075 = -4.0f;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 36))) < (int)(*(int *)(((int)stk + 148)))) {
                t1072 = 0xFFFFB8E4;
                *(float *)(((int)stk + 132)) = 1.0f;
                u1075 = (*(float *)((a4 + 0x34)));
                *(float *)(((int)stk + 40)) = u1075;
                *(unsigned int *)(((int)stk + 128)) = t1072;
                t1072 = 0x1259;
                *(unsigned int *)(((int)stk + 152)) = 0x0;
                *(unsigned int *)(((int)stk + 156)) = t1072;
                t1073 = (*(int *)(((int)stk + 36)));
                t1073 = (t1073 << 2);
                t1080 = *(int *)((t1073 + (a4 + 0x54)));
                if (t1080 != 0) {
                    if (t1080 != 1) {
                        if (t1080 != 2) {
                            if (t1080 != 3) {
                                t1071 = 0xC0DCCC0;
                                nlUnitMatrix();
                                t1071 = 0xC2475BC;
                                u1082 = *(float *)(((int)stk + 72));
                                u1074 = 240.0f;
                                u1075 = (*(float *)((t1071 + 0x0)));
                                u1074 = (u1074 - u1075);
                                u1075 = (*(float *)(((int)stk + 124)));
                                u1074 = (u1074 - (*(float *)(((int)stk + 144))));
                                u1075 = (u1075 + -320.0f);
                                u1074 = (u1074 * u1082);
                                u1075 = (u1075 * u1082);
                                u1074 = (u1074 * 0.00265445909f);
                                u1075 = (u1075 * 0.00265445886f);
                                FUN_0c0dcc70((-u1075), (-u1074), u1082);
                                t1071 = 0xC0DC890;
                                t1072 = (*(int *)(((int)stk + 128)));
                                nlRotateAY(t1072);
                                t1073 = 0xC0DC6E0;
                                t1072 = (*(int *)(((int)stk + 152)));
                                nlRotateAX(t1072);
                                t1071 = 0xC0DC950;
                                t1072 = 0xFFFFC38F;
                                nlRotateAZ(t1072);
                                u1092 = *(float *)(((int)stk + 40));
                                nlScale(u1092, u1092, u1092);
                                FUN_0c0de000((*(float *)(((int)stk + 40))));
                                t1073 = 0xC0C475C;
                                t1072 = (*(int *)(((int)stk + 156)));
                                FUN_0c0c475c(t1072, (*(float *)(((int)stk + 132))));
                                t1135 = 0xC0C475C;
                            } else {
                                t1099 = *(int *)(((int)stk + 136));
                                t1071 = (*(int *)((t1099 + 0x0)));
                                t1071 = (t1071 - 1);
                                *(unsigned int *)((t1099 + 0x0)) = t1071;
                                if ((int)t1071 < 0) {
                                    t1071 = (*(int *)(((int)stk + 16)));
                                    *(unsigned int *)((t1071 + 0x0)) = 0x0;
                                    t1071 = (*(int *)(((int)stk + 12)));
                                    *(unsigned int *)((a4 + 0x50)) = t1071;
                                }
                                t1126 = t1073;
                                if (((*(int *)0xC23A258) & 4) == 0) {
                                    t1071 = 0xC0DCCC0;
                                    nlUnitMatrix();
                                    t1071 = 0xC2475BC;
                                    u1107 = *(float *)(((int)stk + 72));
                                    u1074 = 240.0f;
                                    u1075 = (*(float *)((t1071 + 0x0)));
                                    u1074 = (u1074 - u1075);
                                    u1075 = (*(float *)(((int)stk + 124)));
                                    u1074 = (u1074 - (*(float *)(((int)stk + 144))));
                                    u1075 = (u1075 + -320.0f);
                                    u1074 = (u1074 * u1107);
                                    u1075 = (u1075 * u1107);
                                    u1074 = (u1074 * 0.00265445909f);
                                    u1075 = (u1075 * 0.00265445886f);
                                    FUN_0c0dcc70((-u1075), (-u1074), u1107);
                                    t1071 = 0xC0DC890;
                                    t1072 = (*(int *)(((int)stk + 128)));
                                    nlRotateAY(t1072);
                                    t1073 = 0xC0DC6E0;
                                    t1072 = (*(int *)(((int)stk + 152)));
                                    nlRotateAX(t1072);
                                    t1071 = 0xC0DC950;
                                    t1072 = 0xFFFFC38F;
                                    nlRotateAZ(t1072);
                                    u1117 = *(float *)(((int)stk + 40));
                                    nlScale(u1117, u1117, u1117);
                                    FUN_0c0de000((*(float *)(((int)stk + 40))));
                                    t1073 = 0xC0C475C;
                                    t1072 = (*(int *)(((int)stk + 156)));
                                    FUN_0c0c475c(t1072, (*(float *)(((int)stk + 132))));
                                    t1126 = 0xC0C475C;
                                } else {
                                    t1128 = t1071;
                                    t1129 = t1072;
                                    u1130 = u1074;
                                    u1131 = u1075;
                                }
                                t1135 = t1126;
                                t1137 = t1128;
                                t1138 = t1129;
                                u1139 = u1130;
                                u1140 = u1131;
                            }
                            t1173 = t1135;
                            t1175 = t1137;
                            t1176 = t1138;
                            u1177 = u1139;
                            u1178 = u1140;
                        } else {
                            t1072 = a4;
                            t1072 = (t1072 + 0x68);
                            t1072 = (t1072 + t1073);
                            t1071 = (*(int *)(((int)stk + 128)));
                            t1071 = (t1071 + ((*(int *)((t1072 + 0x0))) * 0x2666));
                            *(unsigned int *)(((int)stk + 128)) = t1071;
                            *(unsigned int *)(((int)stk + 152)) = 0xFFFFF778;
                            u1074 = (*(float *)(((int)stk + 40)));
                            u1075 = (float)(*(int *)((t1072 + 0x0)));
                            u1146 = u1075;
                            u1075 = 1.0f;
                            u1147 = u1075;
                            u1147 = u1147 + 0.125f * u1146;
                            u1075 = u1147;
                            u1074 = (u1074 * u1075);
                            *(float *)(((int)stk + 40)) = u1074;
                            u1075 = (*(float *)(((int)stk + 132)));
                            u1075 = (u1075 - (u1146 * 0.0174999982f));
                            *(float *)(((int)stk + 132)) = u1075;
                            t1149 = *(int *)((t1072 + 0x0));
                            *(unsigned int *)((t1072 + 0x0)) = (t1149 - 1);
                            if ((int)(t1149 - 1) < 0) {
                                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
                            }
                            t1071 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t1071 = 0xC2475BC;
                            u1154 = *(float *)(((int)stk + 72));
                            u1074 = 240.0f;
                            u1075 = (*(float *)((t1071 + 0x0)));
                            u1074 = (u1074 - u1075);
                            u1075 = (*(float *)(((int)stk + 124)));
                            u1074 = (u1074 - (*(float *)(((int)stk + 144))));
                            u1075 = (u1075 + -320.0f);
                            u1074 = (u1074 * u1154);
                            u1075 = (u1075 * u1154);
                            u1074 = (u1074 * 0.00265445909f);
                            u1075 = (u1075 * 0.00265445886f);
                            FUN_0c0dcc70((-u1075), (-u1074), u1154);
                            t1071 = 0xC0DC890;
                            t1072 = (*(int *)(((int)stk + 128)));
                            nlRotateAY(t1072);
                            t1073 = 0xC0DC6E0;
                            t1072 = (*(int *)(((int)stk + 152)));
                            nlRotateAX(t1072);
                            t1071 = 0xC0DC950;
                            t1072 = 0xFFFFC38F;
                            nlRotateAZ(t1072);
                            u1164 = *(float *)(((int)stk + 40));
                            nlScale(u1164, u1164, u1164);
                            FUN_0c0de000((*(float *)(((int)stk + 40))));
                            t1073 = 0xC0C475C;
                            t1072 = (*(int *)(((int)stk + 156)));
                            FUN_0c0c475c(t1072, (*(float *)(((int)stk + 132))));
                            t1173 = 0xC0C475C;
                        }
                        t1215 = t1173;
                        t1217 = t1175;
                        t1218 = t1176;
                        u1219 = u1177;
                        u1220 = u1178;
                    } else {
                        t1072 = a4;
                        t1072 = (t1072 + 0x68);
                        t1072 = (t1072 + t1073);
                        *(unsigned int *)(((int)stk + 156)) = ((*(int *)((t1072 + 0x0))) + 0x1255);
                        t1071 = (*(int *)((t1072 + 0x0)));
                        t1071 = (t1071 + 0x1);
                        *(unsigned int *)((t1072 + 0x0)) = t1071;
                        if ((int)t1071 > (int)0x4) {
                            t1071 = a4;
                            *(unsigned int *)((((a4 + 0x54) + t1073) + 0x0)) = 0x0;
                            t1071 = (t1071 + 0x68);
                            t1071 = (t1071 + t1073);
                            t1183 = t1071;
                            *(int *)((int)stk + 4) = t1183;
                            *(unsigned int *)((t1183 + 0x0)) = ((((FUN_0c0da2e0()) & 0x3F) + 0x30) << 2);
                        } else {
                            t1189 = t1072;
                            u1191 = u1074;
                            u1192 = u1075;
                        }
                        u1074 = u1191;
                        u1075 = u1192;
                        t1071 = 0xC0DCCC0;
                        t1072 = t1189;
                        nlUnitMatrix();
                        t1071 = 0xC2475BC;
                        u1196 = *(float *)(((int)stk + 72));
                        u1074 = 240.0f;
                        u1075 = (*(float *)((t1071 + 0x0)));
                        u1074 = (u1074 - u1075);
                        u1075 = (*(float *)(((int)stk + 124)));
                        u1074 = (u1074 - (*(float *)(((int)stk + 144))));
                        u1075 = (u1075 + -320.0f);
                        u1074 = (u1074 * u1196);
                        u1075 = (u1075 * u1196);
                        u1074 = (u1074 * 0.00265445909f);
                        u1075 = (u1075 * 0.00265445886f);
                        FUN_0c0dcc70((-u1075), (-u1074), u1196);
                        t1071 = 0xC0DC890;
                        t1072 = (*(int *)(((int)stk + 128)));
                        nlRotateAY(t1072);
                        t1073 = 0xC0DC6E0;
                        t1072 = (*(int *)(((int)stk + 152)));
                        nlRotateAX(t1072);
                        t1071 = 0xC0DC950;
                        t1072 = 0xFFFFC38F;
                        nlRotateAZ(t1072);
                        u1206 = *(float *)(((int)stk + 40));
                        nlScale(u1206, u1206, u1206);
                        FUN_0c0de000((*(float *)(((int)stk + 40))));
                        t1073 = 0xC0C475C;
                        t1072 = (*(int *)(((int)stk + 156)));
                        FUN_0c0c475c(t1072, (*(float *)(((int)stk + 132))));
                        t1215 = 0xC0C475C;
                    }
                    t1246 = t1215;
                    t1248 = t1217;
                    t1249 = t1218;
                    u1250 = u1219;
                    u1251 = u1220;
                } else {
                    t1071 = a4;
                    t1071 = (t1071 + 0x68);
                    t1071 = (t1071 + t1073);
                    t1223 = *(int *)((t1071 + 0x0));
                    *(unsigned int *)((t1071 + 0x0)) = (t1223 - 1);
                    if ((int)(t1223 - 1) <= 0) {
                        t1071 = 0x1;
                        *(unsigned int *)((((a4 + 0x54) + t1073) + 0x0)) = t1071;
                        *(unsigned int *)((((a4 + 0x68) + t1073) + 0x0)) = 0x0;
                    }
                    t1071 = 0xC0DCCC0;
                    nlUnitMatrix();
                    t1071 = 0xC2475BC;
                    u1227 = *(float *)(((int)stk + 72));
                    u1074 = 240.0f;
                    u1075 = (*(float *)((t1071 + 0x0)));
                    u1074 = (u1074 - u1075);
                    u1075 = (*(float *)(((int)stk + 124)));
                    u1074 = (u1074 - (*(float *)(((int)stk + 144))));
                    u1075 = (u1075 + -320.0f);
                    u1074 = (u1074 * u1227);
                    u1075 = (u1075 * u1227);
                    u1074 = (u1074 * 0.00265445909f);
                    u1075 = (u1075 * 0.00265445886f);
                    FUN_0c0dcc70((-u1075), (-u1074), u1227);
                    t1071 = 0xC0DC890;
                    t1072 = (*(int *)(((int)stk + 128)));
                    nlRotateAY(t1072);
                    t1073 = 0xC0DC6E0;
                    t1072 = (*(int *)(((int)stk + 152)));
                    nlRotateAX(t1072);
                    t1071 = 0xC0DC950;
                    t1072 = 0xFFFFC38F;
                    nlRotateAZ(t1072);
                    u1237 = *(float *)(((int)stk + 40));
                    nlScale(u1237, u1237, u1237);
                    FUN_0c0de000((*(float *)(((int)stk + 40))));
                    t1073 = 0xC0C475C;
                    t1072 = (*(int *)(((int)stk + 156)));
                    FUN_0c0c475c(t1072, (*(float *)(((int)stk + 132))));
                    t1246 = 0xC0C475C;
                }
                u1074 = u1250;
                u1075 = u1251;
                t1073 = t1246;
                t1071 = t1248;
                t1072 = t1249;
                u1075 = 10.0f;
                u1074 = (*(float *)(((int)stk + 124)));
                u1074 = (u1074 + u1075);
                *(float *)(((int)stk + 124)) = u1074;
                t1071 = (*(int *)(((int)stk + 36)));
                t1071 = (t1071 + 0x1);
                *(unsigned int *)(((int)stk + 36)) = t1071;
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
                *(unsigned int *)(((int)stk + 136)) = ((*(int *)(((int)stk + 136))) + 0x4);
                t1071 = (*(int *)(((int)stk + 8)));
                t1071 = (t1071 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = t1071;
                continue;
            }
            break;
        }
        t1264 = t1072;
    }
    FUN_0c0849da(t1264, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    if ((((*(int *)((t1 + 0x20C))) & 0x40000) != 0) && ((t1269 = *(int *)((t1 + 0xCC)), (int)t1269 >= (int)0x4) && (t1270 = *(int *)((t1 + 0xCC)), (int)t1270 < (int)0xC))) {
        FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xCC))));
    }
    if ((((*(int *)((t1 + 0x20C))) & 0x80000) != 0) && ((t1277 = *(int *)((t1 + 0xD0)), (int)t1277 >= (int)0x4) && (t1278 = *(int *)((t1 + 0xD0)), (int)t1278 < (int)0xC))) {
        FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xD0))));
    }
    if (((*(int *)((t1 + 0xD8))) != 0) && ((t1285 = *(int *)((t1 + 0xE4)), (int)t1285 >= (int)0x4) && (t1286 = *(int *)((t1 + 0xE4)), (int)t1286 < (int)0xC))) {
        FUN_0c0c7aa4(t1, (*(int *)((t1 + 0xE4))));
    }
    t1292 = *(short *)((t1 + 0xE8));
    if (((int)t1292 >= (int)0x4) && ((int)t1292 < (int)0xC)) {
        FUN_0c0c7aa4(t1, (*(short *)((t1 + 0xE8))));
    }
    return nlPopMatrix(0x1);
}
