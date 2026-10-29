/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int FUN_0c01d636(int, int, int);
int FUN_0c022aa6(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c03217c(int, int, int);
int FUN_0c032ae6(int);
int FUN_0c032b70(int);
int FUN_0c034d0c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c046134(int);
int FUN_0c046294(int, int, int, Stk3);
int FUN_0c04685c(int, int, float, float);
int FUN_0c06a978(void);
int FUN_0c06ccb8(int);
int FUN_0c06cdc2(int, int, int);
int FUN_0c06ce0a(int);
int FUN_0c06cee2(int, int, int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a4548(int, int, float);
int FUN_0c0a46f4(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c0c26dc(int);
int FUN_0c0c2718(int);
int FUN_0c0c2764(int);
int FUN_0c0c27a0(int);
int FUN_0c0c3d90(int, int, int, int);
int FUN_0c0c3ef8(int);
int FUN_0c0c4654(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c99a0(int, int);
int FUN_0c0ca844(int, int, int, int, int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int, Stk4);
int FUN_0c0e4226(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0c2868(int a4);
int FUN_0c06993c(int a4, int a5, int a6, int a7);
int FUN_0c046cf8(int a4);
int FUN_0c0cb05c(int a4);
int FUN_0c06cf2a(int a4, int a5, int a6, int a7);
int FUN_0c0a4830(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0c2868(int a4)
{
    int t33;
    float u35;
    int t40;
    int t49;
    int t60;
    int t77;
    int t150;
    int t162;
    int t166;
    int t168;
    int t170;
    float u182;
    float u184;
    float u186;
    float u188;
    float u190;
    float u192;
    float u194;
    int t195;
    float u197;
    int t198;
    float u200;
    int t201;
    int t207;
    int t209;
    float u211;
    float u213;
    float u220;
    float u222;
    float u225;
    float u227;
    float u229;
    float u231;
    float u233;
    float u235;
    float u241;
    float u243;
    float u245;
    int t247;
    int t249;
    int t251;
    int t258;
    int t259;
    int t261;
    int t264;
    int t270;
    int t271;
    int t293;
    int t308;
    int t311;
    int t348;
    int t386;
    int t416;
    int t434;
    int t460;
    int t477;
    int t499;
    float u503;
    int t506;
    float u509;
    float u514;
    float u519;
    float u523;
    float u527;
    int t530;
    int t557;
    int t562;
    int t604;
    int t609;
    int stk[38];

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
    R10 = (0x0);
    R11 = (0x20);
    R12 = (0xC2497E0);
    R13 = (0xC249830);
    R14 = (R4);
    R4 = (0x90);
    R8 = (0x10);
    R9 = (0xC11989C);
    if ((((*(int *)0xC2497E0) & 0x90) != 0)) goto L_C0C28AA;
    if ((((*(int *)((R12 + 0x8))) & R4) == 0)) goto L_C0C298C;
    if (((unsigned int)(*(int *)((R12 + 0x28))) <= (unsigned int)0x14)) goto L_C0C298C;
    L_C0C28AA:;
    if ((((*(int *)((R12 + 0x8))) & R8) == 0)) goto L_C0C28DA;
    if ((((*(int *)((R12 + 0x8))) & 2) == 0)) goto L_C0C28D0;
    *(unsigned int *)(((0x44 + R14) + 0x0)) = ((*(int *)(((0x44 + R14) + 0x0))) + ((*(short *)((((*(int *)((R14 + 0x3C))) << 1) + 0xC1E3FE0))) - (*(int *)((R14 + 0x40)))));
    L_C0C28E2:;
    R0 = (0x44);
    if (((int)(*(int *)((R14 + 0x44))) < (int)(*(int *)0xC204750))) goto L_C0C28F0;
    *(unsigned int *)((R14 + R0)) = R10;
    L_C0C28F0:;
    FUN_0c0c4654();
    if (((unsigned short)(*(short *)((((((*(int *)((R14 + 0x44))) << 2) << 2) + R9) + 0xC))) != (*(int *)((R14 + 0x3C))))) goto L_C0C2910;
    L_C0C2A54:;
    if (((*(int *)((R13 + 0x8))) == 0)) goto L_C0C2AA0;
    t33 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t33 + 0x1);
    if (((int)(t33 + 0x1) <= (int)0xA)) goto L_C0C2AAA;
    *(unsigned int *)((R14 + 0x34)) = R10;
    u35 = *(float *)((R14 + 0x38));
    *(float *)((R14 + 0x38)) = (u35 * 1.29999995f);
    R0 = (0x38);
    F4 = (5.0f);
    if ((!((u35 * 1.29999995f) > 5.0f))) goto L_C0C2AAA;
    *(float *)((R14 + R0)) = F4;
    L_C0C2AAA:;
    t40 = *(int *)((R14 + 0x30));
    R0 = (t40);
    R4 = (0x80000);
    F12 = (0.0f);
    F13 = (0.00999999978f);
    F14 = ((*(float *)((R14 + 0x38))));
    F15 = (1.0f);
    if ((t40 == 0)) goto L_C0C2AD2;
    if ((R0 != 1)) goto L_C0C2AC6;
    t49 = *(int *)((R12 + 0x8));
    R5 = (t49);
    if (((0x200 & t49) == 0)) goto L_C0C2CF6;
    if (((0x2 & R5) == 0)) goto L_C0C2CF6;
    if ((((*(int *)((R13 + 0x0))) & 2) == 0)) goto L_C0C2CF6;
    *(unsigned int *)((R14 + 0xB0)) = ((*(int *)((R14 + 0xB0))) ^ 0x1);
    L_C0C2CF6:;
    if (((*(int *)((R14 + 0xB0))) != 0)) goto L_C0C2D02;
    L_C0C2EEE:;
    if ((((*(int *)((R13 + 0x8))) & 2) == 0)) goto L_C0C2F62;
    t60 = *(int *)((R13 + 0x8));
    R0 = (t60);
    if (((t60 & 128) == 0)) goto L_C0C2F1A;
    *(float *)((R14 + 0xAC)) = ((*(float *)((R14 + 0xAC))) + F13);
    R0 = (0xAC);
    if ((!((*(float *)((R14 + 0xAC))) > F15))) goto L_C0C2F30;
    *(float *)((R14 + R0)) = F15;
    L_C0C2F30:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2F48;
    *(float *)((R14 + 0xA8)) = ((*(float *)((R14 + 0xA8))) + F13);
    R0 = (0xA8);
    if ((!((*(float *)((R14 + 0xA8))) > F15))) goto L_C0C2FB4;
    *(float *)((R14 + R0)) = F15;
    L_C0C2FB4:;
    if (((R4 & (*(int *)0xC2497B8)) != 0)) goto L_C0C2FC0;
    L_C0C30CC:;
    if ((((*(int *)0xC2497B8) & 8) == 0)) goto L_C0C30E0;
    t77 = *(int *)((R14 + 0x30));
    *(unsigned int *)((R14 + 0x30)) = (t77 + 0x1);
    if (((t77 + 0x1) != 3)) goto L_C0C30E0;
    *(unsigned int *)((R14 + 0x30)) = R10;
    L_C0C30E0:;
    FUN_0c0c27a0(R14);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((R14 + 0x48))), (*(float *)((R14 + 0x4C))), (*(float *)((R14 + 0x50))));
    nlRotateAY((*(int *)((R14 + 0x64))));
    nlRotateAX((*(int *)((R14 + 0x60))));
    nlRotateAZ((*(int *)((R14 + 0x68))));
    R12 = (0xC0DC6E0);
    R13 = (0xC0DC890);
    if (((*(int *)((R14 + 0x30))) != 2)) goto L_C0C3174;
    nlPushMatrix(0x0);
    FUN_0c0c4654();
    FUN_0c0c475c(0x9E, 0.5f);
    nlRotateAY(0x4000);
    FUN_0c0c475c(0x9E, 0.5f);
    nlRotateAY(0x4000);
    FUN_0c0c475c(0x9E, 0.5f);
    nlRotateAY(0x4000);
    FUN_0c0c475c(0x9E, 0.5f);
    nlRotateAX(0x4000);
    FUN_0c0c475c(0x9E, 0.5f);
    nlRotateAX(0x8000);
    FUN_0c0c475c(0x9E, 0.5f);
    nlPopMatrix(0x1);
    L_C0C3174:;
    FUN_0c0dcc70((*(float *)((R14 + 0x78))), (*(float *)((R14 + 0x7C))), (*(float *)((R14 + 0x80))));
    nlRotateAY((*(int *)((R14 + 0x94))));
    nlRotateAX((*(int *)((R14 + 0x90))));
    nlRotateAZ((*(int *)((R14 + 0x98))));
    FUN_0c084800((*(float *)((R14 + 0xD4))), (*(float *)((R14 + 0xD8))), (*(float *)((R14 + 0xDC))));
    nlScale((*(float *)((R14 + 0x54))), (*(float *)((R14 + 0x58))), (*(float *)((R14 + 0x5C))));
    FUN_0c0de000((((*(float *)((R14 + 0x54))) + (*(float *)((R14 + 0x58)))) + (*(float *)((R14 + 0x5C)))));
    FUN_0c0c465c((unsigned short)(*(short *)((((*(int *)((R14 + 0x44))) << 1) + 0xC1127D8))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 96), *(int *)((int)stk + 96 + 4), *(int *)((int)stk + 96 + 8), *(int *)((int)stk + 96 + 12));
    R4 = (0x1);
    nlPopMatrix(R4);
    *(unsigned int *)(((int)stk + 96)) = 0xC1E3FE0;
    R12 = (0x5D);
    R13 = (0xC1E3FE0);
    R4 = (R10);
    R5 = (0xC1E3FE0);
    R6 = (R10);
    R7 = (R10);
    L_C0C3250:;
    if ((R7 != 0)) goto L_C0C326C;
    R0 = (0x44);
    if (((int)(*(int *)((R14 + 0x44))) >= (int)((*(short *)((R13 + 0x0))) + R4))) goto L_C0C326C;
    *(unsigned int *)((R14 + 0x40)) = ((*(int *)((R14 + R0))) - R4);
    R7 = ((R7 + 0x1));
    L_C0C3270:;
    t150 = (unsigned int)(R6 + 0x1) < (unsigned int)R12;
    R13 = ((R13 + 0x2));
    R5 = ((R5 + 0x2));
    R6 = ((R6 + 0x1));
    if (t150) goto L_C0C3250;
    R12 = (0xC0DB0A0);
    R13 = (0xC0DB0E0);
    R8 = (R10);
    L_C0C3280:;
    FUN_0c0db0a0(0x2, (R11 - R8));
    if (((int)(((*(int *)((R14 + 0x3C))) + R8) - 4) < 0)) goto L_C0C32A8;
    t162 = (*(int *)((((((*(int *)((R14 + 0x3C))) + R8) - 4) << 2) + 0xC1E3E4C)));
    *(int *)((int)stk + 92) = t162;
    *(int *)((int)stk + 88) = 0xC1E409C;
    nlPrintf(0xC1E409C, t162);
    L_C0C32A8:;
    if ((R8 != 4)) goto L_C0C32C6;
    t166 = (*(int *)((R14 + 0x44)));
    *(int *)((int)stk + 92) = t166;
    t168 = (*(int *)((R14 + 0x40)));
    *(int *)((int)stk + 88) = t168;
    *(int *)((int)stk + 84) = 0xC1E40A4;
    nlPrintf(0xC1E40A4, t168, t166);
    L_C0C32CE:;
    t170 = (int)(R8 + 0x1) < (int)0xB;
    R8 = ((R8 + 0x1));
    if (t170) goto L_C0C3280;
    FUN_0c0db0a0(0x2, 0x24);
    R11 = (((*(int *)((R14 + 0x44))) - 6));
    L_C0C332E:;
    R0 = (0x44);
    if (((int)R11 <= (int)((*(int *)((R14 + 0x44))) + 0x6))) goto L_C0C32E4;
    FUN_0c0db0a0(0x2, 0x32);
    if (((*(int *)((R14 + 0x30))) != 0)) goto L_C0C3378;
    *(int *)((int)stk + 92) = 0x2A;
    *(unsigned int *)(((int)stk + 92)) = 0x2A;
    L_C0C337C:;
    *(int *)((int)stk + 88) = 0xC1E40DC;
    nlPrintf(0xC1E40DC, *(int *)((int)stk + 92));
    u182 = *(float *)((R14 + 0x48));
    *(float *)(((int)stk + 84)) = u182;
    *(int *)((int)stk + 80) = 0xC1E40E8;
    nlPrintf(0xC1E40E8, u182);
    u184 = *(float *)((R14 + 0x4C));
    *(float *)(((int)stk + 76)) = u184;
    *(int *)((int)stk + 72) = 0xC1E40F4;
    nlPrintf(0xC1E40F4, u184);
    u186 = *(float *)((R14 + 0x50));
    *(float *)(((int)stk + 68)) = u186;
    *(int *)((int)stk + 64) = 0xC1E4100;
    nlPrintf(0xC1E4100, u186);
    u188 = *(float *)((R14 + 0x54));
    *(float *)(((int)stk + 60)) = u188;
    *(int *)((int)stk + 56) = 0xC1E410C;
    nlPrintf(0xC1E410C, u188);
    u190 = *(float *)((R14 + 0x58));
    *(float *)(((int)stk + 52)) = u190;
    *(int *)((int)stk + 48) = 0xC1E4118;
    nlPrintf(0xC1E4118, u190);
    u192 = *(float *)((R14 + 0x5C));
    *(float *)(((int)stk + 44)) = u192;
    *(int *)((int)stk + 40) = 0xC1E4124;
    nlPrintf(0xC1E4124, u192);
    u194 = *(float *)((R14 + 0xD4));
    *(float *)(((int)stk + 36)) = u194;
    t195 = *(short *)((R14 + 0x60));
    *(int *)((int)stk + 32) = (unsigned short)t195;
    *(int *)((int)stk + 28) = 0xC1E4130;
    nlPrintf(0xC1E4130, (unsigned short)t195, u194);
    u197 = *(float *)((R14 + 0xD8));
    *(float *)(((int)stk + 24)) = u197;
    t198 = *(short *)((R14 + 0x64));
    *(int *)((int)stk + 20) = (unsigned short)t198;
    *(int *)((int)stk + 16) = 0xC1E4140;
    nlPrintf(0xC1E4140, (unsigned short)t198, u197);
    u200 = *(float *)((R14 + 0xDC));
    *(float *)(((int)stk + 12)) = u200;
    t201 = *(short *)((R14 + 0x68));
    *(int *)((int)stk + 8) = (unsigned short)t201;
    *(int *)((int)stk + 4) = 0xC1E4150;
    nlPrintf(0xC1E4150, (unsigned short)t201, u200);
    FUN_0c0db0a0(0x14, 0x32);
    if (((*(int *)((R14 + 0x30))) != 1)) goto L_C0C341C;
    *(int *)((int)stk + 92) = 0x2A;
    *(unsigned int *)(((int)stk + 92)) = 0x2A;
    L_C0C3420:;
    *(int *)((int)stk + 88) = 0xC1E4160;
    nlPrintf(0xC1E4160, *(int *)((int)stk + 92));
    t207 = *(short *)((R14 + 0x9C));
    *(int *)((int)stk + 84) = (unsigned short)t207;
    *(int *)((int)stk + 80) = 0xC1E416C;
    nlPrintf(0xC1E416C, (unsigned short)t207);
    t209 = *(short *)((R14 + 0xA0));
    *(int *)((int)stk + 76) = (unsigned short)t209;
    *(int *)((int)stk + 72) = 0xC1E4178;
    nlPrintf(0xC1E4178, (unsigned short)t209);
    u211 = *(float *)((R14 + 0xA8));
    *(float *)(((int)stk + 68)) = u211;
    *(int *)((int)stk + 64) = 0xC1E4184;
    nlPrintf(0xC1E4184, u211);
    u213 = *(float *)((R14 + 0xAC));
    *(float *)(((int)stk + 60)) = u213;
    *(int *)((int)stk + 56) = 0xC1E4190;
    nlPrintf(0xC1E4190, u213);
    if (((*(int *)((R14 + 0xB0))) == 0)) goto L_C0C34BC;
    *(int *)((int)stk + 92) = 0xC1E41A8;
    *(unsigned int *)(((int)stk + 92)) = 0xC1E41A8;
    L_C0C34C0:;
    *(int *)((int)stk + 88) = 0xC1E419C;
    nlPrintf(0xC1E419C, *(int *)((int)stk + 92));
    if (((*(int *)((R14 + 0xB0))) == 0)) goto L_C0C3538;
    u220 = *(float *)((R14 + 0xB4));
    *(float *)(((int)stk + 92)) = u220;
    *(int *)((int)stk + 88) = 0xC1E41B0;
    nlPrintf(0xC1E41B0, u220);
    u222 = *(float *)((R14 + 0xB8));
    *(float *)(((int)stk + 84)) = u222;
    *(int *)((int)stk + 80) = 0xC1E41BC;
    nlPrintf(0xC1E41BC, u222);
    FUN_0c0db0a0(0x21, 0x33);
    u225 = *(float *)((R14 + 0xBC));
    *(float *)(((int)stk + 76)) = u225;
    *(int *)((int)stk + 72) = 0xC1E41C8;
    nlPrintf(0xC1E41C8, u225);
    u227 = *(float *)((R14 + 0xC0));
    *(float *)(((int)stk + 68)) = u227;
    *(int *)((int)stk + 64) = 0xC1E41D4;
    nlPrintf(0xC1E41D4, u227);
    u229 = *(float *)((R14 + 0xC4));
    *(float *)(((int)stk + 60)) = u229;
    *(int *)((int)stk + 56) = 0xC1E41E0;
    nlPrintf(0xC1E41E0, u229);
    u231 = *(float *)((R14 + 0xC8));
    *(float *)(((int)stk + 52)) = u231;
    *(int *)((int)stk + 48) = 0xC1E41EC;
    nlPrintf(0xC1E41EC, u231);
    u233 = *(float *)((R14 + 0xCC));
    *(float *)(((int)stk + 44)) = u233;
    *(int *)((int)stk + 40) = 0xC1E41F8;
    nlPrintf(0xC1E41F8, u233);
    u235 = *(float *)((R14 + 0xD0));
    *(float *)(((int)stk + 36)) = u235;
    *(int *)((int)stk + 32) = 0xC1E4204;
    nlPrintf(0xC1E4204, u235);
    L_C0C3538:;
    FUN_0c0db0a0(0x2E, 0x32);
    if (((*(int *)((R14 + 0x30))) != 2)) goto L_C0C354C;
    *(int *)((int)stk + 92) = 0x2A;
    *(unsigned int *)(((int)stk + 92)) = 0x2A;
    L_C0C3550:;
    *(int *)((int)stk + 88) = 0xC1E4210;
    nlPrintf(0xC1E4210, *(int *)((int)stk + 92));
    u241 = *(float *)((R14 + 0x78));
    *(float *)(((int)stk + 84)) = u241;
    *(int *)((int)stk + 80) = 0xC1E40E8;
    nlPrintf(0xC1E40E8, u241);
    u243 = *(float *)((R14 + 0x7C));
    *(float *)(((int)stk + 76)) = u243;
    *(int *)((int)stk + 72) = 0xC1E40F4;
    nlPrintf(0xC1E40F4, u243);
    u245 = *(float *)((R14 + 0x80));
    *(float *)(((int)stk + 68)) = u245;
    *(int *)((int)stk + 64) = 0xC1E4100;
    nlPrintf(0xC1E4100, u245);
    t247 = *(short *)((R14 + 0x90));
    *(int *)((int)stk + 60) = (unsigned short)t247;
    *(int *)((int)stk + 56) = 0xC1E416C;
    nlPrintf(0xC1E416C, (unsigned short)t247);
    t249 = *(short *)((R14 + 0x94));
    *(int *)((int)stk + 52) = (unsigned short)t249;
    *(int *)((int)stk + 48) = 0xC1E4178;
    nlPrintf(0xC1E4178, (unsigned short)t249);
    t251 = *(short *)((R14 + 0x98));
    *(int *)((int)stk + 44) = (unsigned short)t251;
    *(int *)((int)stk + 40) = 0xC1E421C;
    nlPrintf(0xC1E421C, (unsigned short)t251);
    return FUN_0c0d8c40(0xFF101010, 0xFF101010, 0xFF101010);
    L_C0C354C:;
    *(int *)((int)stk + 92) = 0x20;
    *(unsigned int *)(((int)stk + 92)) = 0x20;
    goto L_C0C3550;
    L_C0C34BC:;
    *(int *)((int)stk + 92) = 0xC1E41AC;
    *(unsigned int *)(((int)stk + 92)) = 0xC1E41AC;
    goto L_C0C34C0;
    L_C0C341C:;
    *(int *)((int)stk + 92) = 0x20;
    *(unsigned int *)(((int)stk + 92)) = 0x20;
    goto L_C0C3420;
    L_C0C3378:;
    *(int *)((int)stk + 92) = 0x20;
    *(unsigned int *)(((int)stk + 92)) = 0x20;
    goto L_C0C337C;
    L_C0C32E4:;
    R8 = (R9);
    if ((R11 != (*(int *)((R14 + R0))))) goto L_C0C32FE;
    t258 = (*(int *)(((R8 + (((*(int *)((R14 + R0))) << 2) << 2)) + 0x0)));
    *(int *)((int)stk + 92) = t258;
    t259 = R11;
    *(int *)((int)stk + 88) = t259;
    *(unsigned int *)(((int)stk + 92)) = t258;
    *(unsigned int *)(((int)stk + 88)) = t259;
    R2 = (0xC1E40B8);
    L_C0C3326:;
    t261 = R2;
    *(int *)((int)stk + 84) = t261;
    nlPrintf(t261, *(int *)((int)stk + 88), *(int *)((int)stk + 92));
    R11 = ((R11 + 0x1));
    goto L_C0C332E;
    L_C0C32FE:;
    t264 = *(int *)0xC204750;
    R10 = (R11);
    R4 = (t264);
    if (((int)R11 < (int)t264)) goto L_C0C330E;
    R10 = ((R11 - R4));
    L_C0C3316:;
    t270 = (*(int *)(((((R10 << 2) << 2) + R8) + 0x0)));
    *(int *)((int)stk + 92) = t270;
    t271 = R10;
    *(int *)((int)stk + 88) = t271;
    *(unsigned int *)(((int)stk + 92)) = t270;
    *(unsigned int *)(((int)stk + 88)) = t271;
    R2 = (0xC1E40CC);
    goto L_C0C3326;
    L_C0C330E:;
    if (((int)R10 >= 0)) goto L_C0C3316;
    R10 = ((R4 + R11));
    goto L_C0C3316;
    L_C0C32C6:;
    *(int *)((int)stk + 92) = 0xC1E40B4;
    nlPrintf(0xC1E40B4);
    goto L_C0C32CE;
    L_C0C326C:;
    R4 = ((R4 + (*(short *)((R5 + 0x0)))));
    goto L_C0C3270;
    L_C0C2FC0:;
    FUN_0c0c2764(R14);
    goto L_C0C30CC;
    L_C0C2F48:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2FB4;
    *(float *)((R14 + 0xA8)) = ((*(float *)((R14 + 0xA8))) - F13);
    R0 = (0xA8);
    if ((!(0.0f > (*(float *)((R14 + 0xA8)))))) goto L_C0C2FB4;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2FB4;
    L_C0C2F1A:;
    if (((R0 & 64) == 0)) goto L_C0C2F30;
    *(float *)((R14 + 0xAC)) = ((*(float *)((R14 + 0xAC))) - F13);
    R0 = (0xAC);
    if ((!(0.0f > (*(float *)((R14 + 0xAC)))))) goto L_C0C2F30;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2F30;
    L_C0C2F62:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2F78;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) - 0x100);
    L_C0C2F8C:;
    t293 = *(int *)((R13 + 0x8));
    R0 = (t293);
    if (((t293 & 128) == 0)) goto L_C0C2FA2;
    *(unsigned int *)((R14 + 0xA0)) = ((*(int *)((R14 + 0xA0))) + 0x100);
    goto L_C0C2FB4;
    L_C0C2FA2:;
    if (((R0 & 64) == 0)) goto L_C0C2FB4;
    *(unsigned int *)((R14 + 0xA0)) = ((*(int *)((R14 + 0xA0))) - 0x100);
    goto L_C0C2FB4;
    L_C0C2F78:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2F8C;
    *(unsigned int *)((R14 + 0x9C)) = ((*(int *)((R14 + 0x9C))) + 0x100);
    goto L_C0C2F8C;
    L_C0C2D02:;
    if ((((*(int *)((R12 + 0x8))) & 0x200) != 0)) goto L_C0C2D1C;
    if ((((*(int *)((R12 + 0x8))) & 2) != 0)) goto L_C0C2D1C;
    if ((((*(int *)((R12 + 0x8))) & 0x400) != 0)) goto L_C0C2D1C;
    goto L_C0C2EEE;
    L_C0C2D1C:;
    t308 = *(int *)((R12 + 0x8));
    R0 = (t308);
    if (((t308 & 0x200) == 0)) goto L_C0C2DCC;
    t311 = *(int *)((R13 + 0x8));
    R0 = (t311);
    if (((t311 & 128) == 0)) goto L_C0C2D44;
    *(float *)((R14 + 0xBC)) = ((*(float *)((R14 + 0xBC))) + F13);
    R0 = (0xBC);
    if ((!((*(float *)((R14 + 0xBC))) > F15))) goto L_C0C2D5A;
    *(float *)((R14 + R0)) = F15;
    L_C0C2D5A:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2D72;
    *(float *)((R14 + 0xC0)) = ((*(float *)((R14 + 0xC0))) + F13);
    R0 = (0xC0);
    if ((!((*(float *)((R14 + 0xC0))) > F15))) goto L_C0C2D8A;
    *(float *)((R14 + R0)) = F15;
    L_C0C2D8A:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2DA8;
    *(float *)((R14 + 0xC4)) = ((*(float *)((R14 + 0xC4))) + F13);
    R0 = (0xC4);
    if (((*(float *)((R14 + 0xC4))) > F15)) goto L_C0C2DA4;
    goto L_C0C2FB4;
    L_C0C2DA4:;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C2FB4;
    L_C0C2DA8:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2DB4;
    goto L_C0C2FB4;
    L_C0C2DB4:;
    *(float *)((R14 + 0xC4)) = ((*(float *)((R14 + 0xC4))) - F13);
    R0 = (0xC4);
    if ((0.0f > (*(float *)((R14 + 0xC4))))) goto L_C0C2DC8;
    goto L_C0C2FB4;
    L_C0C2DC8:;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2FB4;
    L_C0C2D72:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2D8A;
    *(float *)((R14 + 0xC0)) = ((*(float *)((R14 + 0xC0))) - F13);
    R0 = (0xC0);
    if ((!(0.0f > (*(float *)((R14 + 0xC0)))))) goto L_C0C2D8A;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2D8A;
    L_C0C2D44:;
    if (((R0 & 64) == 0)) goto L_C0C2D5A;
    *(float *)((R14 + 0xBC)) = ((*(float *)((R14 + 0xBC))) - F13);
    R0 = (0xBC);
    if ((!(0.0f > (*(float *)((R14 + 0xBC)))))) goto L_C0C2D5A;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2D5A;
    L_C0C2DCC:;
    if (((R0 & 2) == 0)) goto L_C0C2E7E;
    t348 = *(int *)((R13 + 0x8));
    R0 = (t348);
    if (((t348 & 128) == 0)) goto L_C0C2DE8;
    *(float *)((R14 + 0xC8)) = ((*(float *)((R14 + 0xC8))) + F13);
    R0 = (0xC8);
    if ((!((*(float *)((R14 + 0xC8))) > F15))) goto L_C0C2DFE;
    *(float *)((R14 + R0)) = F15;
    L_C0C2DFE:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2E24;
    *(float *)((R14 + 0xCC)) = ((*(float *)((R14 + 0xCC))) + F13);
    R0 = (0xCC);
    if ((!((*(float *)((R14 + 0xCC))) > F15))) goto L_C0C2E3C;
    *(float *)((R14 + R0)) = F15;
    L_C0C2E3C:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2E5A;
    *(float *)((R14 + 0xD0)) = ((*(float *)((R14 + 0xD0))) + F13);
    R0 = (0xD0);
    if (((*(float *)((R14 + 0xD0))) > F15)) goto L_C0C2E56;
    goto L_C0C2FB4;
    L_C0C2E56:;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C2FB4;
    L_C0C2E5A:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2E66;
    goto L_C0C2FB4;
    L_C0C2E66:;
    *(float *)((R14 + 0xD0)) = ((*(float *)((R14 + 0xD0))) - F13);
    R0 = (0xD0);
    if ((0.0f > (*(float *)((R14 + 0xD0))))) goto L_C0C2E7A;
    goto L_C0C2FB4;
    L_C0C2E7A:;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2FB4;
    L_C0C2E24:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2E3C;
    *(float *)((R14 + 0xCC)) = ((*(float *)((R14 + 0xCC))) - F13);
    R0 = (0xCC);
    if ((!(0.0f > (*(float *)((R14 + 0xCC)))))) goto L_C0C2E3C;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2E3C;
    L_C0C2DE8:;
    if (((R0 & 64) == 0)) goto L_C0C2DFE;
    *(float *)((R14 + 0xC8)) = ((*(float *)((R14 + 0xC8))) - F13);
    R0 = (0xC8);
    if ((!(0.0f > (*(float *)((R14 + 0xC8)))))) goto L_C0C2DFE;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2DFE;
    L_C0C2E7E:;
    if ((((*(int *)((R12 + 0x8))) & 0x400) != 0)) goto L_C0C2E8A;
    goto L_C0C2FB4;
    L_C0C2E8A:;
    t386 = *(int *)((R13 + 0x8));
    R0 = (t386);
    if (((t386 & 128) == 0)) goto L_C0C2EA2;
    *(float *)((R14 + 0xB4)) = ((*(float *)((R14 + 0xB4))) + F13);
    R0 = (0xB4);
    if ((!((*(float *)((R14 + 0xB4))) > F15))) goto L_C0C2EB8;
    *(float *)((R14 + R0)) = F15;
    L_C0C2EB8:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2ED2;
    *(float *)((R14 + 0xB8)) = ((*(float *)((R14 + 0xB8))) + F13);
    R0 = (0xB8);
    if ((!((*(float *)((R14 + 0xB8))) > F15))) goto L_C0C2FB4;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C2FB4;
    L_C0C2ED2:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) == 0)) goto L_C0C2FB4;
    *(float *)((R14 + 0xB8)) = ((*(float *)((R14 + 0xB8))) - F13);
    R0 = (0xB8);
    if ((!(0.0f > (*(float *)((R14 + 0xB8)))))) goto L_C0C2FB4;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2FB4;
    L_C0C2EA2:;
    if (((R0 & 64) == 0)) goto L_C0C2EB8;
    *(float *)((R14 + 0xB4)) = ((*(float *)((R14 + 0xB4))) - F13);
    R0 = (0xB4);
    if ((!(0.0f > (*(float *)((R14 + 0xB4)))))) goto L_C0C2EB8;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C2EB8;
    L_C0C2AC6:;
    if ((R0 != 2)) goto L_C0C2ACE;
    if ((((*(int *)((R12 + 0x8))) & 0x200) == 0)) goto L_C0C3058;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2FF4;
    *(unsigned int *)((R14 + 0x90)) = ((*(int *)((R14 + 0x90))) - 0x100);
    L_C0C3006:;
    t416 = *(int *)((R13 + 0x8));
    R0 = (t416);
    if (((t416 & 128) == 0)) goto L_C0C301A;
    *(unsigned int *)((R14 + 0x94)) = ((*(int *)((R14 + 0x94))) + 0x100);
    L_C0C302A:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C3042;
    *(unsigned int *)((R14 + 0x98)) = ((*(int *)((R14 + 0x98))) + 0x100);
    L_C0C30C0:;
    if (((R4 & (*(int *)0xC2497B8)) == 0)) goto L_C0C30CC;
    FUN_0c0c2718(R14);
    goto L_C0C30CC;
    L_C0C3042:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) == 0)) goto L_C0C30C0;
    *(unsigned int *)((R14 + 0x98)) = ((*(int *)((R14 + 0x98))) - 0x100);
    goto L_C0C30C0;
    L_C0C301A:;
    if (((R0 & 64) == 0)) goto L_C0C302A;
    *(unsigned int *)((R14 + 0x94)) = ((*(int *)((R14 + 0x94))) - 0x100);
    goto L_C0C302A;
    L_C0C2FF4:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C3006;
    *(unsigned int *)((R14 + 0x90)) = ((*(int *)((R14 + 0x90))) + 0x100);
    goto L_C0C3006;
    L_C0C3058:;
    t434 = *(int *)((R13 + 0x8));
    R0 = (t434);
    if (((t434 & 128) == 0)) goto L_C0C3068;
    *(float *)((R14 + 0x78)) = ((*(float *)((R14 + 0x78))) + F14);
    L_C0C3074:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C3084;
    *(float *)((R14 + 0x7C)) = ((*(float *)((R14 + 0x7C))) + F14);
    L_C0C3092:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C30B0;
    *(float *)((R14 + 0x80)) = ((*(float *)((R14 + 0x80))) - F14);
    goto L_C0C30C0;
    L_C0C30B0:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) == 0)) goto L_C0C30C0;
    *(float *)((R14 + 0x80)) = ((*(float *)((R14 + 0x80))) + F14);
    goto L_C0C30C0;
    L_C0C3084:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C3092;
    *(float *)((R14 + 0x7C)) = ((*(float *)((R14 + 0x7C))) - F14);
    goto L_C0C3092;
    L_C0C3068:;
    if (((R0 & 64) == 0)) goto L_C0C3074;
    *(float *)((R14 + 0x78)) = ((*(float *)((R14 + 0x78))) - F14);
    goto L_C0C3074;
    L_C0C2ACE:;
    goto L_C0C30CC;
    L_C0C2AD2:;
    if (((R4 & (*(int *)0xC2497B8)) == 0)) goto L_C0C2ADE;
    FUN_0c0c26dc(R14);
    L_C0C2ADE:;
    if ((((*(int *)((R13 + 0x8))) & 2) == 0)) goto L_C0C2B54;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2AF6;
    *(unsigned int *)((R14 + 0x60)) = ((*(int *)((R14 + 0x60))) - 0x100);
    L_C0C2B06:;
    t460 = *(int *)((R13 + 0x8));
    R0 = (t460);
    if (((t460 & 128) == 0)) goto L_C0C2B18;
    *(unsigned int *)((R14 + 0x64)) = ((*(int *)((R14 + 0x64))) + 0x100);
    L_C0C2B26:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2B3C;
    *(unsigned int *)((R14 + 0x68)) = ((*(int *)((R14 + 0x68))) + 0x100);
    goto L_C0C30CC;
    L_C0C2B3C:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2B48;
    goto L_C0C30CC;
    L_C0C2B48:;
    *(unsigned int *)((R14 + 0x68)) = ((*(int *)((R14 + 0x68))) - 0x100);
    goto L_C0C30CC;
    L_C0C2B18:;
    if (((R0 & 64) == 0)) goto L_C0C2B26;
    *(unsigned int *)((R14 + 0x64)) = ((*(int *)((R14 + 0x64))) - 0x100);
    goto L_C0C2B26;
    L_C0C2AF6:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2B06;
    *(unsigned int *)((R14 + 0x60)) = ((*(int *)((R14 + 0x60))) + 0x100);
    goto L_C0C2B06;
    L_C0C2B54:;
    if ((((*(int *)((R12 + 0x8))) & 0x200) == 0)) goto L_C0C2BD0;
    t477 = *(int *)((R13 + 0x8));
    R0 = (t477);
    F14 = ((F14 * F13));
    if (((t477 & 128) == 0)) goto L_C0C2B84;
    *(float *)((R14 + 0x54)) = ((*(float *)((R14 + 0x54))) + F14);
    L_C0C2B90:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2BA0;
    *(float *)((R14 + 0x58)) = ((*(float *)((R14 + 0x58))) + F14);
    L_C0C2BAE:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2BBA;
    R0 = (0x5C);
    L_C0C2CBA:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) - F14);
    goto L_C0C30CC;
    L_C0C2BBA:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2BC6;
    goto L_C0C30CC;
    L_C0C2BC6:;
    *(float *)((R14 + 0x5C)) = ((*(float *)((R14 + 0x5C))) + F14);
    goto L_C0C30CC;
    L_C0C2BA0:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2BAE;
    *(float *)((R14 + 0x58)) = ((*(float *)((R14 + 0x58))) - F14);
    goto L_C0C2BAE;
    L_C0C2B84:;
    if (((R0 & 64) == 0)) goto L_C0C2B90;
    *(float *)((R14 + 0x54)) = ((*(float *)((R14 + 0x54))) - F14);
    goto L_C0C2B90;
    L_C0C2BD0:;
    if ((((*(int *)((R12 + 0x8))) & 0x400) == 0)) goto L_C0C2C76;
    t499 = *(int *)((R13 + 0x8));
    R2 = (t499);
    F14 = ((F14 * F13));
    if (((R8 & t499) == 0)) goto L_C0C2BF2;
    u503 = *(float *)((R14 + 0xD4));
    *(float *)((R14 + 0xD4)) = (u503 - F14);
    R0 = (0xD4);
    if ((!(0.0f > (u503 - F14)))) goto L_C0C2C04;
    *(float *)((R14 + R0)) = F12;
    L_C0C2C04:;
    t506 = *(int *)((R13 + 0x8));
    R0 = (t506);
    if (((t506 & 64) == 0)) goto L_C0C2C1C;
    u509 = *(float *)((R14 + 0xD8));
    *(float *)((R14 + 0xD8)) = (u509 - F14);
    R0 = (0xD8);
    if ((!(0.0f > (u509 - F14)))) goto L_C0C2C2E;
    *(float *)((R14 + R0)) = F12;
    L_C0C2C2E:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2C4C;
    u514 = *(float *)((R14 + 0xDC));
    *(float *)((R14 + 0xDC)) = (u514 - F14);
    R0 = (0xDC);
    if ((0.0f > (u514 - F14))) goto L_C0C2C48;
    goto L_C0C30CC;
    L_C0C2C48:;
    *(float *)((R14 + R0)) = F12;
    goto L_C0C30CC;
    L_C0C2C4C:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2C58;
    goto L_C0C30CC;
    L_C0C2C58:;
    u519 = *(float *)((R14 + 0xDC));
    *(float *)((R14 + 0xDC)) = (u519 + F14);
    R0 = (0xDC);
    if (((u519 + F14) > F15)) goto L_C0C2C68;
    goto L_C0C30CC;
    L_C0C2C68:;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C30CC;
    L_C0C2C1C:;
    if (((R0 & 128) == 0)) goto L_C0C2C2E;
    u523 = *(float *)((R14 + 0xD8));
    *(float *)((R14 + 0xD8)) = (u523 + F14);
    R0 = (0xD8);
    if ((!((u523 + F14) > F15))) goto L_C0C2C2E;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C2C2E;
    L_C0C2BF2:;
    if (((R2 & R11) == 0)) goto L_C0C2C04;
    u527 = *(float *)((R14 + 0xD4));
    *(float *)((R14 + 0xD4)) = (u527 + F14);
    R0 = (0xD4);
    if ((!((u527 + F14) > F15))) goto L_C0C2C04;
    *(float *)((R14 + R0)) = F15;
    goto L_C0C2C04;
    L_C0C2C76:;
    t530 = *(int *)((R13 + 0x8));
    R0 = (t530);
    if (((t530 & 128) == 0)) goto L_C0C2C86;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + F14);
    L_C0C2C92:;
    if (((R8 & (*(int *)((R13 + 0x8)))) == 0)) goto L_C0C2CA2;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + F14);
    L_C0C2CB0:;
    if ((((*(int *)((R13 + 0x8))) & 0x200) == 0)) goto L_C0C2CC2;
    R0 = (0x50);
    goto L_C0C2CBA;
    L_C0C2CC2:;
    if ((((*(int *)((R13 + 0x8))) & 0x400) != 0)) goto L_C0C2CCE;
    goto L_C0C30CC;
    L_C0C2CCE:;
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + F14);
    goto L_C0C30CC;
    L_C0C2CA2:;
    if ((((*(int *)((R13 + 0x8))) & R11) == 0)) goto L_C0C2CB0;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) - F14);
    goto L_C0C2CB0;
    L_C0C2C86:;
    if (((R0 & 64) == 0)) goto L_C0C2C92;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) - F14);
    goto L_C0C2C92;
    L_C0C2AA0:;
    *(unsigned int *)((R14 + 0x34)) = R10;
    *(float *)((R14 + 0x38)) = 0.099999994f;
    goto L_C0C2AAA;
    L_C0C2910:;
    R0 = (0xC209AE8);
    if (((*(int *)((((*(int *)((R14 + 0x3C))) << 2) + 0xC209AE8))) == 0)) goto L_C0C2928;
    FUN_0c0c3ef8((*(int *)(((*(int *)((((*(int *)((R14 + 0x3C))) << 2) + R0))) + 0x0))));
    L_C0C2928:;
    t557 = *(short *)((((((*(int *)((R14 + 0x44))) << 2) << 2) + R9) + 0xC));
    *(unsigned int *)((R14 + 0x3C)) = (unsigned short)t557;
    *(unsigned int *)(((int)stk + 96)) = ((unsigned short)t557 << 2);
    R0 = (0xC209AE8);
    R3 = (((unsigned short)t557 << 2));
    if (((*(int *)((((unsigned short)t557 << 2) + 0xC209AE8))) != 0)) goto L_C0C294C;
    goto L_C0C2A54;
    L_C0C294C:;
    t562 = *(int *)((R3 + R0));
    *(unsigned int *)(((int)stk + 100)) = t562;
    FUN_0c0c3d90((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 100))) + 0x4))), (unsigned short)(*(short *)((t562 + 0x6))), 0x0);
    goto L_C0C2A54;
    L_C0C28D0:;
    *(unsigned int *)((R14 + 0x44)) = ((*(int *)((R14 + 0x44))) + 0xA);
    goto L_C0C28E2;
    L_C0C28DA:;
    *(unsigned int *)((R14 + 0x44)) = ((*(int *)((R14 + 0x44))) + 0x1);
    goto L_C0C28E2;
    L_C0C298C:;
    R4 = (0x60);
    if ((((*(int *)((R12 + 0x0))) & 0x60) != 0)) goto L_C0C29A2;
    if ((((*(int *)((R12 + 0x8))) & R4) == 0)) goto L_C0C2A54;
    if (((unsigned int)(*(int *)((R12 + 0x28))) <= (unsigned int)0x14)) goto L_C0C2A54;
    L_C0C29A2:;
    if ((((*(int *)((R12 + 0x8))) & R11) == 0)) goto L_C0C29CA;
    if ((((*(int *)((R12 + 0x8))) & 2) == 0)) goto L_C0C29C0;
    R0 = (0x44);
    R2 = (((*(int *)((R14 + 0x44))) - ((*(int *)(((0x40 + R14) + 0x0))) + 0x1)));
    L_C0C29C6:;
    *(unsigned int *)((R14 + R0)) = R2;
    L_C0C29D2:;
    R0 = (0x44);
    if (((int)(*(int *)((R14 + 0x44))) >= 0)) goto L_C0C29E2;
    *(unsigned int *)((R14 + R0)) = ((*(int *)0xC204750) - 1);
    L_C0C29E2:;
    FUN_0c0c4654();
    if (((unsigned short)(*(short *)((((((*(int *)((R14 + 0x44))) << 2) << 2) + R9) + 0xC))) == (*(int *)((R14 + 0x3C))))) goto L_C0C2A54;
    *(unsigned int *)(((int)stk + 96)) = 0xC209AE8;
    R0 = (0xC209AE8);
    if (((*(int *)((((*(int *)((R14 + 0x3C))) << 2) + 0xC209AE8))) == 0)) goto L_C0C2A1C;
    FUN_0c0c3ef8((*(int *)(((*(int *)((((*(int *)((R14 + 0x3C))) << 2) + R0))) + 0x0))));
    L_C0C2A1C:;
    t604 = *(short *)((((((*(int *)((R14 + 0x44))) << 2) << 2) + R9) + 0xC));
    *(unsigned int *)((R14 + 0x3C)) = (unsigned short)t604;
    *(unsigned int *)(((int)stk + 96)) = ((unsigned short)t604 << 2);
    R0 = (0xC209AE8);
    R3 = (((unsigned short)t604 << 2));
    if (((*(int *)((((unsigned short)t604 << 2) + 0xC209AE8))) == 0)) goto L_C0C2A54;
    t609 = *(int *)((R3 + R0));
    *(unsigned int *)(((int)stk + 100)) = t609;
    FUN_0c0c3d90((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 100))) + 0x4))), (unsigned short)(*(short *)((t609 + 0x6))), 0x0);
    goto L_C0C2A54;
    L_C0C29C0:;
    R0 = (0x44);
    R2 = (((*(int *)((R14 + 0x44))) - 10));
    goto L_C0C29C6;
    L_C0C29CA:;
    *(unsigned int *)((R14 + 0x44)) = ((*(int *)((R14 + 0x44))) - 1);
    goto L_C0C29D2;
}

int FUN_0c06993c(int a4, int a5, int a6, int a7)
{
    int t2;
    int t43;
    int t45;
    int t9;
    int t13;
    int t20;
    int t34;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t173;
    int t174;
    float u67;
    int t75;
    int t82;
    int t83;
    float u84;
    float u86;
    int t91;
    int t98;
    int t99;
    int t103;
    int t104;
    float u105;
    float u107;
    int t109;
    int t110;
    int t123;
    int t127;
    int t131;
    int t135;
    float u137;
    int t154;
    int t167;
    int t168;
    int t161;
    int t39;
    int t41;
    int t47;
    int t175;
    int t177;
    int t178;
    int t64;
    int t119;
    int t116;
    int t169;
    int t171;
    int t172;
    int t160;
    int t162;
    int t164;
    int t165;
    int stk[14];

    *(unsigned int *)(((int)stk + 20)) = (*(int *)0xC23EE54);
    *(unsigned int *)(((int)stk + 16)) = (0xC0FAED0 + ((((*(int *)0xC23ED50) - 42) << 2) << 2));
    *(unsigned int *)0xC31FD38 = 0x0;
    *(unsigned int *)0xC20A28C = 0x0;
    t2 = *(int *)0xC23ED50;
    t43 = 0xC;
    t45 = 0xC23EE54;
    if ((unsigned int)(t2 - 43) < (unsigned int)0xC) {
        switch (((t2 - 43) << 1)) {
            case 0:
            {
                *(unsigned int *)0xC31FD38 = 0x1;
                t39 = ((t2 - 43) << 1);
                t41 = 0x1;
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC31FD38 = 0x1;
                *(unsigned int *)0xC20A28C = 0x1;
                FUN_0c0cc3f8(0x421A9, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            }
                break;
            case 4:
            {
                FUN_0c0845f0(0x0);
                *(unsigned int *)0xC31FD38 = 0x0;
                *(unsigned int *)0xC20A28C = 0x0;
                FUN_0c0e4226(0x0, 0xA5, 0x1);
                FUN_0c0e4226(0x0, 0xA6, 0x20);
                FUN_0c0e4226(0x0, 0x30A5, 0xFFFFFFE8);
            }
                break;
            case 6:
            {
                t9 = 0x0;
                for (;;) {
                    if ((int)t9 >= (int)0x10) {
                        break;
                    }
                    FUN_0c0845f8(t9, 0x0);
                    t9 = (t9 + 0x1);
                }
                t39 = ((t2 - 43) << 1);
                t41 = 0xC23EE54;
            }
                break;
            case 8:
            {
                FUN_0c0cc3f8(0x221A9, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                t13 = 0x0;
                for (;;) {
                    if ((int)t13 >= (int)0x10) {
                        break;
                    }
                    FUN_0c0845f8(t13, 0x0);
                    t13 = (t13 + 0x1);
                }
                t41 = 0x10;
            }
                break;
            case 10:
            case 12:
            {
                FUN_0c0845f0(0x0);
                *(unsigned int *)0xC31FD38 = 0x0;
                *(unsigned int *)0xC20A28C = 0x0;
                FUN_0c0e4226(0x0, 0xA5, 0x0);
                FUN_0c0e4226(0x0, 0xA6, 0x40);
                FUN_0c0e4226(0x0, 0x30A5, 0xFFFFFFFE);
            }
                break;
            case 14:
            {
                t20 = 0x0;
                for (;;) {
                    if ((int)t20 >= (int)0x10) {
                        break;
                    }
                    FUN_0c0845f8(t20, 0x0);
                    t20 = (t20 + 0x1);
                }
                FUN_0c0845f0(0x0);
                *(float *)0xC20A270 = 2527.0f;
                *(float *)0xC20A274 = 71.0f;
                *(float *)0xC20A278 = 192.0f;
                *(unsigned int *)0xC20A27C = 0x0;
                *(unsigned int *)0xC20A280 = 0x3FFF;
                *(unsigned int *)0xC20A284 = 0x0;
                FUN_0c0cc3f8(0x421A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            }
                break;
            case 16:
            {
                FUN_0c0e4226(0x0, 0xA5, 0x1);
                FUN_0c0e4226(0x0, 0xA6, 0x40);
                FUN_0c0e4226(0x0, 0x30A5, 0xFFFFFFFE);
            }
                break;
            case 18:
            {
                FUN_0c0e4226(0x0, 0xA5, 0x1);
                FUN_0c0e4226(0x0, 0xA6, 0x40);
                FUN_0c0e4226(0x0, 0x30A5, 0x20);
            }
                break;
            case 20:
            {
                FUN_0c0e4226(0x0, 0xA5, 0x1);
                FUN_0c0e4226(0x0, 0xA6, 0x40);
                FUN_0c0e4226(0x0, 0x30A5, 0xFFFFFFF8);
                FUN_0c06a978();
            }
                break;
            default:
            {
                t34 = FUN_0c0e1830(0xC0697B4, 0x7E50);
                FUN_0c0e19d0(t34);
                FUN_0c0c99a0(0x3F2, 0x292);
                FUN_0c0cbafc(0x292, 0x2, 0xFC000000, 0x84000000);
                *(unsigned int *)0xC247C38 = t34;
                FUN_0c0cc3f8(0x421A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            }
                break;
        }
        t43 = t39;
        t45 = t41;
    }
    t48 = t43;
    t49 = t45;
    t50 = a4;
    t51 = a5;
    t52 = 0xA5;
    t53 = 0xC31FD38;
    t54 = 0xC20A270;
    t55 = 0xC0845F8;
    t56 = 0x0;
    for (;;) {
        if ((int)t56 < (int)0x10) {
            t47 = (*(int *)(((int)stk + 16)));
            t173 = t48;
            t174 = t54;
            if ((*(signed char *)((t56 + t47))) == 0) {
                t175 = t49;
                t177 = t50;
                t178 = t51;
            } else {
                t49 = 0xC23ECE4;
                t50 = 0xC06A448;
                t55 = 0x504;
                t54 = 0xC0E19AA;
                t51 = t55;
                t47 = (FUN_0c0e19aa(t50, t51, (*(int *)((t49 + 0x0)))));
                t54 = t47;
                t50 = t47;
                t47 = (FUN_0c0e19d0(t50));
                t49 = (*(int *)(((int)stk + 20)));
                t49 = (t49 + 0x68);
                *(unsigned int *)((((t56 << 2) + t49) + 0x0)) = t54;
                t47 = (*(int *)0xC23ED50);
                t55 = t54;
                if (t47 == 54) {
                    t47 = 0x500;
                    t48 = 0x1;
                    *(unsigned int *)((t54 + t47)) = t48;
                    t64 = t48;
                }
                t47 = 0xBC;
                t48 = t64;
                t50 = 0x8;
                *(unsigned int *)((t55 + t47)) = t56;
                t47 = 0x30;
                *(float *)((t55 + t47)) = 0.0f;
                t47 = 0x34;
                *(float *)((t55 + t47)) = (1.0f + 1.0f);
                t47 = 0xC069C68;
                u67 = *(float *)((t47 + 0x0));
                if ((int)t56 > (int)t50) {
                    t51 = t50;
                    t50 = (*(int *)(((int)stk + 16)));
                    t50 = (t50 + 0x8);
                    if ((int)t51 < (int)t56) {
                        for (;;) {
                            t49 = (*(signed char *)((t50 + 0x0)));
                            t50 = (t50 + 0x1);
                            t48 = 0x4;
                            t47 = 0x38;
                            t75 = t49;
                            t49 = (t49 << 1);
                            t49 = (t49 + t75);
                            t49 = (t49 << 2);
                            t49 = (t49 << 1);
                            t49 = (t49 + 0xC0FAC78);
                            t48 = (t48 + t49);
                            t51 = (t51 + 0x1);
                            *(float *)((t55 + t47)) = ((*(float *)((t55 + t47))) + (*(float *)((t48 + 0x0))));
                            if ((int)t51 >= (int)t56) {
                                break;
                            }
                        }
                    }
                    t47 = (*(int *)(((int)stk + 16)));
                    t82 = *(signed char *)((t56 + t47));
                    t49 = t82;
                    t83 = ((((t82 << 1) + t49) << 2) << 1);
                    t49 = 0x4;
                    t49 = (t49 + (t83 + 0xC0FAC78));
                    u84 = *(float *)((t49 + 0x0));
                    t49 = 0x38;
                    t49 = (t49 + t55);
                    u86 = (*(float *)(((0x38 + t55) + 0x0)));
                    u86 = u86 + u67 * u84;
                    *(float *)((t49 + 0x0)) = u86;
                    t119 = t51;
                } else {
                    t50 = 0x7;
                    if ((int)t56 < (int)t50) {
                        t51 = t50;
                        t50 = (*(int *)(((int)stk + 16)));
                        t50 = (t50 + 0x7);
                        if ((int)t51 > (int)t56) {
                            for (;;) {
                                t49 = (*(signed char *)((t50 + 0x0)));
                                t48 = 0x4;
                                t47 = 0x38;
                                t91 = t49;
                                t49 = (t49 << 1);
                                t49 = (t49 + t91);
                                t49 = (t49 << 2);
                                t49 = (t49 << 1);
                                t49 = (t49 + 0xC0FAC78);
                                t48 = (t48 + t49);
                                t51 = (t51 - 1);
                                *(float *)((t55 + t47)) = ((*(float *)((t55 + t47))) - (*(float *)((t48 + 0x0))));
                                t50 = (t50 - 1);
                                if ((int)t51 <= (int)t56) {
                                    break;
                                }
                            }
                        }
                        t47 = (*(int *)(((int)stk + 16)));
                        t98 = *(signed char *)((t56 + t47));
                        t49 = t98;
                        t99 = ((((t98 << 1) + t49) << 2) << 1);
                        t49 = 0x4;
                        t49 = (t49 + (t99 + 0xC0FAC78));
                        *(float *)(((0x38 + t55) + 0x0)) = ((*(float *)(((0x38 + t55) + 0x0))) - ((*(float *)((t49 + 0x0))) * u67));
                        t116 = t51;
                    } else {
                        t47 = t56;
                        if (t47 == 8) {
                            t47 = (*(int *)(((int)stk + 16)));
                            t103 = *(signed char *)((t56 + t47));
                            t49 = t103;
                            t104 = ((((t103 << 1) + t49) << 2) << 1);
                            t49 = 0x4;
                            t49 = (t49 + (t104 + 0xC0FAC78));
                            u105 = *(float *)((t49 + 0x0));
                            t49 = 0x38;
                            t49 = (t49 + t55);
                            u107 = (*(float *)(((0x38 + t55) + 0x0)));
                            u107 = u107 + u67 * u105;
                            *(float *)((t49 + 0x0)) = u107;
                        } else {
                            t47 = (*(int *)(((int)stk + 16)));
                            t109 = *(signed char *)((t56 + t47));
                            t49 = t109;
                            t110 = ((((t109 << 1) + t49) << 2) << 1);
                            t49 = 0x4;
                            t49 = (t49 + (t110 + 0xC0FAC78));
                            *(float *)(((0x38 + t55) + 0x0)) = ((*(float *)(((0x38 + t55) + 0x0))) - ((*(float *)((t49 + 0x0))) * u67));
                        }
                    }
                    t119 = t116;
                }
                t49 = (*(int *)(((int)stk + 16)));
                t51 = t119;
                t47 = 0x228;
                t49 = (t49 + t56);
                *(unsigned int *)(((int)stk + 12)) = t49;
                t123 = *(signed char *)((t49 + 0x0));
                t48 = t123;
                t49 = (*(int *)(((((((t123 << 1) + t48) << 2) << 1) + 0xC0FAC78) + 0x8)));
                *(unsigned int *)((t55 + t47)) = t49;
                t47 = 0x4C4;
                t49 = (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t127 = t49;
                t49 = (t49 << 1);
                t49 = (t49 + t127);
                t49 = (t49 << 2);
                t49 = (t49 << 1);
                t49 = (t49 + 0xC0FAC78);
                t48 = (*(int *)((t49 + 0xC)));
                *(unsigned int *)((t54 + t47)) = t48;
                t49 = (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t131 = t49;
                t49 = (t49 << 1);
                t49 = (t49 + t131);
                t49 = (t49 << 2);
                t49 = (t49 << 1);
                t49 = (t49 + 0xC0FAC78);
                t48 = (*(int *)((t49 + 0x10)));
                t47 = 0x3BC;
                *(unsigned int *)((t54 + t47)) = t48;
                t47 = 0x3C0;
                t49 = (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0)));
                t135 = t49;
                t49 = (t49 << 1);
                t49 = (t49 + t135);
                t49 = (t49 << 2);
                t49 = (t49 << 1);
                t49 = (t49 + 0xC0FAC78);
                t48 = (*(int *)((t49 + 0x14)));
                *(unsigned int *)((t54 + t47)) = t48;
                t47 = 0x34;
                u137 = *(float *)((t55 + t47));
                t47 = 0x64;
                *(float *)((t55 + t47)) = u137;
                t47 = (FUN_0c0da2e0());
                t48 = 0x22C;
                t47 = (unsigned short)t47;
                t48 = (t48 + t55);
                *(unsigned int *)((t48 + 0x0)) = t47;
                t47 = (FUN_0c0da2e0());
                t48 = 0x230;
                t47 = (unsigned short)t47;
                t48 = (t48 + t55);
                *(unsigned int *)((t48 + 0x0)) = t47;
                t47 = (FUN_0c0da2e0());
                t49 = 0x3FF;
                t48 = 0x234;
                t47 = (t47 & t49);
                t48 = (t48 + t55);
                t47 = (t47 + 0x200);
                *(unsigned int *)((t48 + 0x0)) = t47;
                t48 = (*(int *)(((int)stk + 12)));
                t48 = (*(signed char *)((t48 + 0x0)));
                t47 = t48;
                t48 = (t48 << 1);
                t48 = (t48 + t47);
                t47 = 0x24C;
                t48 = (t48 << 2);
                t48 = (t48 << 1);
                t48 = (t48 + 0xC0FAC78);
                t48 = (*(int *)((t48 + 0x0)));
                *(unsigned int *)((t54 + t47)) = t48;
                *(unsigned int *)(((int)stk + 12)) = 0x0;
                for (;;) {
                    t50 = 0x3;
                    if ((int)(*(int *)(((int)stk + 12))) >= (int)t50) {
                        break;
                    }
                    t47 = (*(int *)(((int)stk + 12)));
                    if (t47 != 0) {
                        if (t47 != 1) {
                            if (t47 != 2) {
                            } else {
                                t47 = 0x3BC;
                                t52 = 0x3E4;
                                t53 = (*(int *)((t54 + t47)));
                                t52 = (t52 + t54);
                            }
                        } else {
                            t52 = 0x4C8;
                            t47 = 0x4C4;
                            t53 = (*(int *)((t54 + t47)));
                            t52 = (t52 + t54);
                        }
                    } else {
                        t52 = 0x250;
                        t47 = 0x228;
                        t53 = (*(int *)((t55 + t47)));
                        t52 = (t52 + t54);
                    }
                    if (t53 != 0) {
                        for (;;) {
                            if ((int)(*(short *)((t53 + 0x0))) < 0) {
                                break;
                            }
                            t49 = 0xC0CA844;
                            *(int *)((int)stk + 8) = 0x95;
                            *(int *)((int)stk + 4) = 0x0;
                            t154 = *(short *)((t53 + 0x0));
                            t53 = (t53 + 0x2);
                            t51 = t154;
                            t50 = t52;
                            t47 = (FUN_0c0ca844(t50, t51, 0x0, 0x3F6, 0x0));
                            *(unsigned int *)((t52 + 0x8)) = 0x0;
                            t52 = (t52 + 0x1C);
                        }
                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                        continue;
                    }
                    break;
                }
                t50 = 0x6;
                t167 = t48;
                t168 = t54;
                if (((int)t56 >= (int)t50) && (t49 = 0x8, (int)t56 <= (int)t49)) {
                    t51 = t56;
                    t50 = 0xC0FAFA0;
                    t51 = (t51 - 6);
                    t47 = (*(int *)0xC23ED50);
                    t51 = (t51 << 2);
                    t47 = (t47 - 42);
                    t49 = t47;
                    t47 = (t47 << 1);
                    t47 = (t47 + t49);
                    t47 = (t47 << 2);
                    t47 = (t47 + t50);
                    t51 = (*(int *)((t51 + t47)));
                    t161 = t54;
                    if (t51 != 0) {
                        t54 = 0xC01D636;
                        t50 = t55;
                        t47 = (FUN_0c01d636(t50, t51, 0x1));
                        t47 = 0xA4;
                        *(unsigned int *)((t55 + t47)) = 0x1;
                        t161 = 0xC01D636;
                    } else {
                        t160 = t48;
                        t162 = t49;
                        t164 = t50;
                        t165 = t51;
                    }
                    t167 = t160;
                    t168 = t161;
                    t169 = t162;
                    t171 = t164;
                    t172 = t165;
                } else {
                    t169 = t49;
                    t171 = t50;
                }
                t173 = t167;
                t174 = t168;
                t175 = t169;
                t177 = t171;
                t178 = t172;
            }
            t48 = t173;
            t54 = t174;
            t56 = (t56 + 0x1);
            t49 = t175;
            t50 = t177;
            t51 = t178;
            continue;
        }
        break;
    }
    return t47;
}

int FUN_0c046cf8(int a4)
{
    int t0;
    int t7;
    int t23;
    int t34;
    int t45;
    int t64;
    int t70;
    int t78;
    int t79;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F5;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    *(unsigned int *)((R4 + 0x4C8)) = 0x2;
    *(unsigned int *)((R4 + 0xD8)) = 0x0;
    *(unsigned int *)((R4 + 0x3AC)) = 0x0;
    *(unsigned int *)((R4 + 0x3B0)) = 0x0;
    *(unsigned int *)((R4 + 0x3B4)) = 0x0;
    *(unsigned int *)((R4 + 0x3B8)) = 0x0;
    *(unsigned int *)((R4 + 0x3A0)) = 0x0;
    *(unsigned int *)((R4 + 0x3A4)) = 0x0;
    t0 = *(int *)((R4 + 0x4F0));
    *(unsigned int *)((R4 + 0x55C)) = (*(int *)((((*(int *)(((((*(int *)(((0x54C + R4) + 0x0))) - 1) << 2) + (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0xC)))))) + (((*(int *)((R4 + 0x544))) << 2) << 2)) + 0x4)));
    *(unsigned int *)(((0x4D4 + R4) + 0x0)) = (FUN_0c046134(R4));
    *(unsigned int *)((R4 + 0x20C)) = 0x80;
    *(unsigned int *)((R4 + 0x534)) = 0x0;
    *(unsigned int *)((R4 + 0x1EC)) = 0xFFC;
    t7 = *(int *)((R4 + 0x544));
    R0 = (t7);
    R10 = (0x12C);
    R11 = (0xC1F8E3C);
    R12 = (0x1);
    R13 = (0x0);
    R14 = (R4);
    R4 = (0xC1F8E3C);
    R9 = (0x4);
    F14 = (0.00999999978f);
    F15 = (0.0f);
    if ((t7 == 0)) goto L_C046DD0;
    if ((R0 == 1)) goto L_C046DD0;
    if ((R0 == 2)) goto L_C046DE0;
    if ((R0 == 3)) goto L_C046E20;
    if ((R0 != 4)) goto L_C046DA4;
    t23 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((R4 + (((t23 << 2) + t23) << 2)) + 0x8))) + 0x2)));
    R4 = ((R4 + (((t23 << 2) + t23) << 2)));
    if (((*(int *)((R14 + 0x2C4))) == (*(int *)((R14 + 0x2BC))))) goto L_C046F22;
    *(unsigned int *)((R14 + 0x2D4)) = R9;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    L_C046F22:;
    *(unsigned int *)((R14 + 0x3AC)) = R10;
    FUN_0c04685c(R14, 0xA, F15, F14);
    L_C0470B4:;
    *(unsigned int *)((R14 + 0x564)) = R13;
    *(unsigned int *)((R14 + 0x56C)) = R13;
    *(unsigned int *)((R14 + 0x4F8)) = ((*(int *)((R14 + 0x4F8))) + 0x1);
    R0 = (0x4F8);
    L_C0470C4:;
    return R0;
    L_C046DA4:;
    if ((R0 != 5)) goto L_C046DAC;
    t34 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((R4 + (((t34 << 2) + t34) << 2)) + 0x8))) + 0x2)));
    R4 = ((R4 + (((t34 << 2) + t34) << 2)));
    if (((*(int *)((R14 + 0x2C4))) == (*(int *)((R14 + 0x2BC))))) goto L_C046F22;
    *(unsigned int *)((R14 + 0x2D4)) = R9;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    goto L_C046F22;
    L_C046DAC:;
    if ((R0 != 6)) goto L_C046DB4;
    *(unsigned int *)((R14 + 0x2C4)) = 0x59C;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F66F4); }
    FUN_0c046294(R14, ((int)stk + 4), 0x0, *(Stk3 *)(((int)stk + 4)));
    goto L_C0470B4;
    L_C046DB4:;
    if ((R0 != 7)) goto L_C046DBC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F6700); }
    FUN_0c046294(R14, ((int)stk + 4), 0x1, *(Stk3 *)(((int)stk + 4)));
    *(unsigned int *)((R14 + 0x3AC)) = R10;
    t45 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t45 << 2) + t45) << 2)) + 0x8))) + 0x0)));
    if (((*(int *)((R14 + 0x2C4))) != (*(int *)((R14 + 0x2BC))))) goto L_C047052;
    goto L_C0470B4;
    L_C047052:;
    *(unsigned int *)((R14 + 0x2D4)) = R9;
    L_C047070:;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    goto L_C0470B4;
    L_C046DBC:;
    if ((R0 != 8)) goto L_C046DC4;
    FUN_0c03217c(R14, (*(int *)((R14 + 0x54C))), (*(int *)((R14 + 0x544))));
    goto L_C0470B4;
    L_C046DC4:;
    if ((R0 != 9)) goto L_C046DCC;
    if (((int)(*(int *)((R14 + 0x398))) <= 0)) goto L_C047058;
    if ((((*(int *)0xC23A258) & R12) == 0)) goto L_C047012;
    *(unsigned int *)((R14 + 0x544)) = 0x8;
    FUN_0c03217c(R14, (*(int *)((R14 + 0x54C))), (*(int *)((R14 + 0x544))));
    *(unsigned int *)((R14 + 0x1B0)) = 0xFFFFFFFF;
    goto L_C0470B4;
    L_C047012:;
    *(unsigned int *)((R14 + 0x544)) = 0x7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F670C); }
    FUN_0c046294(R14, ((int)stk + 4), 0x1, *(Stk3 *)(((int)stk + 4)));
    *(unsigned int *)((R14 + 0x3AC)) = R10;
    t64 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t64 << 2) + t64) << 2)) + 0x8))) + 0x0)));
    if (((*(int *)((R14 + 0x2C4))) == (*(int *)((R14 + 0x2BC))))) goto L_C0470B4;
    goto L_C047052;
    L_C047058:;
    t70 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R4 + (((t70 << 2) + t70) << 2)) + 0x8))) + 0x0)));
    goto L_C047070;
    L_C046DCC:;
    *(unsigned int *)((R14 + 0x534)) = R13;
    L_C04707A:;
    R0 = ((FUN_0c02a19a(R14, R5, R6, R7)));
    goto L_C0470C4;
    L_C046E20:;
    if (((int)(*(int *)0xC23EDA4) < (int)0xA)) goto L_C046E9C;
    t78 = (FUN_0c034d0c(R14, R5)) != 0;
    if (t78) goto L_C046E3C;
    *(unsigned int *)((R14 + 0x4C8)) = 0x3;
    goto L_C04707A;
    L_C046E3C:;
    *(unsigned int *)((R14 + 0x524)) = R12;
    t79 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((R11 + (((t79 << 2) + t79) << 2)) + 0x8))) + 0x4)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x534)) = 0x9;
    *(unsigned int *)((R14 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((R14 + 0x310)) = R13;
    *(unsigned int *)((R14 + 0x564)) = R13;
    *(unsigned int *)((R14 + 0x56C)) = R13;
    FUN_0c032ae6(R14);
    FUN_0c022aa6(R14);
    *(unsigned int *)0xC247D04 = 0x7;
    *(unsigned int *)0xC247CD0 = 0xC102924;
    *(unsigned char *)0xC247CB8 = (*(signed char *)((R14 + 0xBC)));
    *(unsigned char *)0xC247CB9 = (*(signed char *)((R14 + 0x510)));
    goto L_C0470B4;
    L_C046E9C:;
    *(unsigned int *)((R14 + 0x544)) = R13;
    FUN_0c034fbc(R14, 0x200, 0x1, 0x0);
    FUN_0c032b70(R14);
    L_C046EE6:;
    FUN_0c04685c(R14, 0xA, F15, F14);
    goto L_C0470B4;
    L_C046DE0:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x5B6;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x534)) = 0x9;
    goto L_C046EE6;
    L_C046DD0:;
    FUN_0c034fbc(R14, 0x200, 0x1, 0x0);
    goto L_C046EE6;
}

int FUN_0c0cb05c(int a4)
{
    int t2;
    int t154;
    int t7;
    int t14;
    int t15;
    int t34;
    float u36;
    float u55;
    float u70;
    float u77;
    float u78;
    float u80;
    float u79;
    float u83;
    float u82;
    float u92;
    int t122;
    int t124;
    int t125;
    int t130;
    float u131;
    int t133;
    float u135;
    int t137;
    float u139;
    float t143;
    float u16;
    float u71;
    float u72;
    int stk[21];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 12)) = 0xC247ED8;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t2 = *(int *)0xC23ED50;
    t154 = t2;
    if (t2 == 64) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((*(int *)(((int)stk + 32))) + 0x2EC));
        t7 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
        nlRotateAX((((int)((unsigned int)((int)((unsigned int)(-t7) + (unsigned int)0x0)) + ((((int)0x0 > (int)(-t7))) ? 1u : 0u))) >> 1));
        FUN_0c0caf6a((((int)stk + 12) + 0x4), (((int)stk + 12) + 0x8), (((int)stk + 12) + 0xC), 0.00299999979f);
        nlPopMatrix(0x1);
        t14 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t15 = (t14 + 0x34);
        for (;;) {
            if ((*(int *)((t15 + 0xC))) != 0) {
                u16 = ((-((float)(*(int *)((t15 + 0xC))) * 0.0625f)) + 1.0f);
                u16 = (u16 * 4.0f);
                nlPushMatrix(0x0);
                FUN_0c0dcca0(t15);
                nlScale(u16, u16, u16);
                FUN_0c084800(0.109999999f, 0.099999994f, 0.129999995f);
                FUN_0c0de000(u16);
                FUN_0c0c465c(0x3F3);
                nlPopMatrix(0x1);
                *(unsigned int *)((t15 + 0xC)) = ((*(int *)((t15 + 0xC))) - 1);
            } else {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)(((int)stk + 16))), 0.5f, (*(float *)(((int)stk + 20))));
                nlRotateAY((*(int *)(((int)stk + 24))));
                t34 = FUN_0c0da2e0();
                *(float *)(((int)stk + 8)) = ((float)(t34 & 0xFFF) * 0.024420023f);
                u36 = -105.0f;
                u36 = u36 + 0.0512820482f * (float)((FUN_0c0da2e0()) & 0xFFF);
                FUN_0c0dcc70(u36, 0.00299999979f, ((float)(t34 & 0xFFF) * 0.024420023f));
                FUN_0c0db840(t15);
                *(unsigned int *)((t15 + 0xC)) = 0x10;
                if ((int)(*(int *)0xC23ED50) > (int)0x44) {
                    u55 = *(float *)((t15 + 0x8));
                    if ((u55 > 176.0f) && (271.0f > u55)) {
                        *(float *)((t15 + 0x4)) = -35.2299995f;
                    } else {
                        u70 = *(float *)((t15 + 0x0));
                        if ((u70 > 525.0f) && ((573.0f > u70) && ((u71 = *(float *)((t15 + 0x8)), u71 > 329.0f) && (u72 = *(float *)((t15 + 0x8)), 374.0f > u72)))) {
                            u77 = *(float *)((t15 + 0x0));
                            u78 = *(float *)((t15 + 0x8));
                            u80 = (u77 + -549.0f);
                            if (0.0f > (u77 + -549.0f)) {
                                u79 = (u77 + -549.0f);
                                u79 = -u79;
                                u80 = u79;
                            }
                            u83 = (u78 + -396.5f);
                            if (0.0f > (u78 + -396.5f)) {
                                u82 = (u78 + -396.5f);
                                u82 = -u82;
                                u83 = u82;
                            }
                            if (46.0f > (u80 + u83)) {
                                *(float *)((t15 + 0x4)) = 3.56999993f;
                            }
                        } else {
                            if (97.0f > (*(float *)((t15 + 0x8)))) {
                                u92 = -50.0f;
                                if ((*(float *)((t15 + 0x8))) > 76.0f) {
                                    u92 = 25.5499992f;
                                }
                                *(float *)((t15 + 0x4)) = u92;
                            }
                        }
                    }
                }
                nlPopMatrix(0x1);
            }
            t122 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t122 + 0x1);
            t15 = (t15 + 0x10);
            if ((int)(t122 + 0x1) < (int)0x60) continue;
            break;
        }
        nlPushMatrix(0x0);
        t124 = 0xC0CB3E4;
        t125 = 0x0;
        for (;;) {
            if ((int)t125 >= (int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x30)))) {
                break;
            }
            t124 = (nlUnitMatrix());
            t124 = (FUN_0c0da2e0());
            t124 = (t124 & 0xFFF);
            t130 = t124;
            t124 = 0xC0CB3EC;
            u131 = *(float *)((t124 + 0x0));
            *(float *)(((int)stk + 8)) = ((-((float)t130 * u131)) + (-1.0f));
            t124 = (FUN_0c0da2e0());
            t124 = (t124 & 0xFFF);
            t133 = t124;
            t124 = 0xC0CB3F0;
            u135 = -1.5f;
            u135 = u135 + (*(float *)((t124 + 0x0))) * (float)t133;
            *(float *)(((int)stk + 4)) = u135;
            t124 = (FUN_0c0da2e0());
            t124 = (t124 & 0xFFF);
            t137 = t124;
            t124 = 0xC0CB3F0;
            u139 = -1.5f;
            u139 = u139 + (*(float *)((t124 + 0x0))) * (float)t137;
            t124 = (FUN_0c0dcc70(u139, u135, ((-((float)t130 * u131)) + (-1.0f))));
            t124 = 0x3CE;
            t143 = FUN_0c0da410((*(short *)(((*(int *)(((int)stk + 32))) + t124))));
            t124 = 0xC0CB3F8;
            t124 = (nlRotateAZ((int)(t143 * (*(float *)((t124 + 0x0))))));
            t124 = 0xC0CB400;
            t124 = (nlScale((*(float *)((t124 + 0x0))), 25.0f, 1.0f));
            t124 = (FUN_0c0de000(25.0f));
            t124 = 0xC0CB408;
            t124 = (FUN_0c084800(0.049999997f, 0.049999997f, (*(float *)((t124 + 0x0)))));
            t124 = (FUN_0c0c465c(0x14F));
            t125 = (t125 + 0x1);
        }
        nlPopMatrix(0x1);
        t154 = (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12)));
    }
    return t154;
}

int FUN_0c06cf2a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t8;
    int t29;
    int t34;
    int t57;
    int t62;
    int t87;
    int stk[12];

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
    float F2;
    float F3;
    int T_;
    R4 = a4;
    t0 = *(int *)0xC23ED9C;
    R10 = (0xC246FF0);
    R14 = (R4);
    R4 = (t0);
    if (((int)t0 < (int)0xC)) goto L_C06CF54;
    R0 = (0xE);
    if (((int)R4 > (int)0xE)) goto L_C06CF54;
    L_C06D24E:;
    return R0;
    L_C06CF54:;
    t8 = *(short *)((R14 + 0x34));
    R0 = (t8);
    R12 = (0x0);
    R5 = (((*(int *)0xC23ED5C) & 0x6));
    R6 = (0x9);
    if ((t8 == 0)) goto L_C06CF78;
    if ((R0 == 1)) goto L_C06CFEA;
    if ((R0 != 2)) goto L_C06CF74;
    FUN_0c0e15d4((*(int *)((R14 + 0x30))), R5, R6, a7);
    R0 = ((((int (*)(void))(FUN_0c0e19f2))()));
    goto L_C06D24E;
    L_C06CF74:;
    goto L_C06D24E;
    L_C06CFEA:;
    if (((int)R4 > (int)R6)) goto L_C06CFFC;
    if ((R5 == 0)) goto L_C06CFFC;
    L_C06CFF2:;
    *(unsigned short *)((R14 + 0x34)) = ((*(short *)((R14 + 0x34))) + 0x1);
    R0 = (0x34);
    goto L_C06D24E;
    L_C06CFFC:;
    R11 = (((int)stk + 4));
    R8 = (R12);
    R9 = (0xC0);
    L_C06D0FC:;
    if (((int)(*(short *)((((R8 << 1) + (R14 + 0x36)) + 0x0))) < 0)) goto L_C06D110;
    t29 = *(short *)((((R8 << 1) + (R14 + 0x36)) + 0x0));
    R5 = (t29);
    if (((int)(*(int *)((((t29 << 2) + (R10 + 0x40)) + 0x0))) >= (int)0x2)) goto L_C06D02C;
    FUN_0c06cdc2(R14, R8, R6);
    goto L_C06D0FC;
    L_C06D02C:;
    t34 = *(short *)((((R5 << 1) + (R14 + 0x52)) + 0x0));
    *(unsigned short *)((((R5 << 1) + (R14 + 0x52)) + 0x0)) = (t34 - 1);
    R4 = (R12);
    if (((int)(short)(t34 - 1) >= 0)) goto L_C06D050;
    *(unsigned short *)((((R5 << 1) + (R14 + 0x52)) + 0x0)) = R12;
    L_C06D050:;
    R13 = ((((((R5 << 1) + R5) << 2) << 2) << 2));
    L_C06D0F6:;
    if (((unsigned int)R4 < (unsigned int)R9)) goto L_C06D06C;
    R8 = ((R8 + 0x1));
    goto L_C06D0FC;
    L_C06D06C:;
    *(float *)((R11 + 0x0)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x0)));
    *(float *)((R11 + 0x4)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x4)));
    *(float *)((R11 + 0x8)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R14 + 0x6C) + R13) + R4)) = *(struct mv3 *)(((0xC23F268 + R13) + R4)); }
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x0)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x0))) - (*(float *)((R11 + 0x0))));
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x4)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x4))) - (*(float *)((R11 + 0x4))));
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x8)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x8))) - (*(float *)((R11 + 0x8))));
    R4 = ((R4 + 0xC));
    goto L_C06D0F6;
    L_C06D110:;
    if (((int)R8 >= (int)(*(int *)((R10 + 0x80))))) goto L_C06D11C;
    FUN_0c06ccb8(R14);
    L_C06D11C:;
    R11 = (((int)stk + 4));
    R8 = (R12);
    L_C06D218:;
    if (((int)(*(short *)((((R8 << 1) + (R14 + 0x40)) + 0x0))) < 0)) goto L_C06D22C;
    t57 = *(short *)((((R8 << 1) + (R14 + 0x40)) + 0x0));
    R5 = (t57);
    if (((int)(*(int *)((((t57 << 2) + (R10 + 0x40)) + 0x0))) >= (int)0x2)) goto L_C06D14A;
    FUN_0c06cee2(R14, R8, R6);
    goto L_C06D218;
    L_C06D14A:;
    t62 = *(short *)((((R14 + 0x52) + (R5 << 1)) + 0x0));
    *(unsigned short *)((((R14 + 0x52) + (R5 << 1)) + 0x0)) = (t62 - 1);
    R4 = ((R5 << 1));
    if (((int)(short)(t62 - 1) >= 0)) goto L_C06D168;
    *(unsigned short *)(((R4 + (R14 + 0x52)) + 0x0)) = R12;
    L_C06D168:;
    R13 = ((((((R5 << 1) + R5) << 2) << 2) << 2));
    R4 = (R12);
    L_C06D212:;
    if (((unsigned int)R4 < (unsigned int)R9)) goto L_C06D188;
    R8 = ((R8 + 0x1));
    goto L_C06D218;
    L_C06D188:;
    *(float *)((R11 + 0x0)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x0)));
    *(float *)((R11 + 0x4)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x4)));
    *(float *)((R11 + 0x8)) = (*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R14 + 0x6C) + R13) + R4)) = *(struct mv3 *)(((0xC23F268 + R13) + R4)); }
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x0)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x0))) - (*(float *)((R11 + 0x0))));
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x4)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x4))) - (*(float *)((R11 + 0x4))));
    *(float *)(((((0x96C + R14) + R13) + R4) + 0x8)) = ((*(float *)(((((R14 + 0x6C) + R13) + R4) + 0x8))) - (*(float *)((R11 + 0x8))));
    R4 = ((R4 + 0xC));
    goto L_C06D212;
    L_C06D22C:;
    if (((int)R8 >= (int)(*(int *)((R10 + 0x84))))) goto L_C06D238;
    FUN_0c06ce0a(R14);
    L_C06D238:;
    R0 = ((FUN_0c0e16c0((*(int *)((R14 + 0x30))))));
    goto L_C06D24E;
    L_C06CF78:;
    if (((int)R4 > (int)R6)) goto L_C06CF86;
    if ((R5 == 0)) goto L_C06CF86;
    t87 = ((int (*)(int, int, int))(FUN_0c0e19f2))(R4, R5, R6);
    L_C06CF86:;
    R4 = ((R14 + 0x52));
    L_C06CFA8:;
    if (((unsigned int)R4 <= (unsigned int)(R14 + 0x6A))) goto L_C06CFA4;
    R13 = (0xFFFFFFFF);
    R4 = ((R14 + 0x36));
    L_C06CFBC:;
    if (((unsigned int)R4 <= (unsigned int)(R14 + 0x3E))) goto L_C06CFB8;
    FUN_0c06ccb8(R14);
    R4 = ((R14 + 0x40));
    L_C06CFD2:;
    if (((unsigned int)R4 <= (unsigned int)(R14 + 0x50))) goto L_C06CFCE;
    FUN_0c06ce0a(R14);
    *(unsigned int *)((R14 + 0x30)) = (FUN_0c0e14c4(0xC06CC48));
    goto L_C06CFF2;
    L_C06CFCE:;
    *(unsigned short *)((R4 + 0x0)) = R13;
    R4 = ((R4 + 0x2));
    goto L_C06CFD2;
    L_C06CFB8:;
    *(unsigned short *)((R4 + 0x0)) = R13;
    R4 = ((R4 + 0x2));
    goto L_C06CFBC;
    L_C06CFA4:;
    *(unsigned short *)((R4 + 0x0)) = R12;
    R4 = ((R4 + 0x2));
    goto L_C06CFA8;
}

int FUN_0c0a4830(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t199;
    int t26;
    int t27;
    int t28;
    int t168;
    int t53;
    float u54;
    int t61;
    float u62;
    int t87;
    float u88;
    int t100;
    float u101;
    int t183;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u60;
    int t124;
    float u128;
    int stk[28];

    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 4) + 0x10)) = *(struct mv12 *)(0xC10D0A8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0xC10D0D8); }
    t199 = 0xC0A4948;
    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
    } else {
        if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
            t183 = (FUN_0c0e19f2(0xC246FF0, a5, a6, a7, *(Stk4 *)(((int)stk + 4))));
        } else {
            t26 = *(int *)((a4 + 0x88));
            t27 = *(int *)(((t26 << 2) + 0xC247030));
            t28 = *(int *)(((0xC246FF0 + (t26 << 2)) + 0x0));
            t168 = t27;
            if (t27 == 8) {
            } else {
                if ((((*(int *)((t28 + 0x4D0))) != 0) && (((t37 = *(int *)((a4 + 0x80)), (int)t37 > 0) || ((t38 = *(int *)((a4 + 0x80)), t38 == 0) && (t39 = *(int *)((a4 + 0x78)), t39 == 1))) && (t40 = *(int *)((t28 + 0x4DC)), t40 == 0))) || ((t41 = *(int *)((t28 + 0x304)), (int)t41 <= 0) && (t42 = *(int *)((t28 + 0x4DC)), t42 == 0))) {
                    *(unsigned int *)((a4 + 0x80)) = 0xFFFFFFEC;
                    if ((*(int *)((a4 + 0x84))) != 0) {
                        *(unsigned int *)((a4 + 0xA0)) = 0xFFFFFFEC;
                    }
                }
                if ((int)(*(int *)((a4 + 0x80))) > 0) {
                    t53 = *(int *)(((0x80 + a4) + 0x0));
                    u54 = *(float *)((a4 + 0x90));
                    *(float *)((a4 + 0x90)) = (u54 + (30.0f / (float)t53));
                    if ((u54 + (30.0f / (float)t53)) > 30.0f) {
                        *(float *)((a4 + 0x90)) = 30.0f;
                    }
                    if ((*(float *)((a4 + 0x90))) == 30.0f) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(unsigned int *)((a4 + 0x78)) = 0x1;
                    }
                } else {
                    if (((int)(*(int *)((a4 + 0x80))) < 0) && (u60 = *(float *)((a4 + 0x74)), 0.432999998f > u60)) {
                        t61 = *(int *)(((0x80 + a4) + 0x0));
                        u62 = *(float *)((a4 + 0x90));
                        *(float *)((a4 + 0x90)) = (u62 + (30.0f / (float)t61));
                        if (0.0f > (u62 + (30.0f / (float)t61))) {
                            *(float *)((a4 + 0x90)) = 0.0f;
                        }
                        if ((*(float *)((a4 + 0x90))) == 0.0f) {
                            *(unsigned int *)((a4 + 0x80)) = 0x0;
                            *(unsigned int *)((a4 + 0x84)) = 0x0;
                            *(unsigned int *)((a4 + 0x78)) = 0x0;
                        }
                    }
                }
                if ((*(int *)((a4 + 0x84))) != 0) {
                    if ((int)(*(int *)((a4 + 0xA0))) > 0) {
                        if (!(15.0f > (*(float *)((a4 + 0x90))))) {
                            t87 = *(int *)(((0xA0 + a4) + 0x0));
                            u88 = *(float *)((a4 + 0x74));
                            *(float *)((a4 + 0x74)) = (u88 + (1.0f / (float)t87));
                            if ((u88 + (1.0f / (float)t87)) > 1.0f) {
                                *(float *)((a4 + 0x74)) = 1.0f;
                            }
                            if ((*(float *)((a4 + 0x74))) == 1.0f) {
                                *(unsigned int *)((a4 + 0xA4)) = 0x0;
                                *(unsigned int *)((a4 + 0x7C)) = 0x1;
                            }
                        }
                    } else {
                        if ((int)(*(int *)((a4 + 0xA0))) < 0) {
                            t100 = *(int *)(((0xA0 + a4) + 0x0));
                            u101 = *(float *)((a4 + 0x74));
                            *(float *)((a4 + 0x74)) = (u101 + (1.0f / (float)t100));
                            if (0.0f > (u101 + (1.0f / (float)t100))) {
                                *(float *)((a4 + 0x74)) = 0.0f;
                            }
                            if ((*(float *)((a4 + 0x74))) == 0.0f) {
                                *(unsigned int *)((a4 + 0xA0)) = 0x0;
                                *(unsigned int *)((a4 + 0x7C)) = 0x0;
                            }
                        }
                    }
                    FUN_0c0a46f4((((int)stk + 4) + 0x10), ((int)stk + 4), (a4 + 0x54), (0x94 + a4), (*(float *)((a4 + 0x74))), f5, f6, f7, f8, f9, f10, f11);
                } else {
                    t124 = 0x1;
                    u128 = 0.0f;
                }
                FUN_0c0a4548(a4, t124, u128);
                nlPushMatrix(0x0);
                FUN_0c0dbda0((*(int *)((t28 + 0x3E4))));
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC1011F4);
                nlRotateAX((int)((30.0f - (*(float *)((a4 + 0x90)))) * 182.044434f));
                FUN_0c0de000(1.0f);
                FUN_0c0c47ae(0x77F);
                nlPopMatrix(0x1);
                if ((*(int *)((a4 + 0x84))) != 0) {
                    nlPushMatrix(0x0);
                    FUN_0c0dcca0((a4 + 0x54));
                    nlRotateAX((int)((*(float *)((a4 + 0x94))) * 182.044434f));
                    FUN_0c0de000(((*(float *)((t28 + 0x284))) * 1.0f));
                    FUN_0c0c47ae(0x78E);
                    nlPopMatrix(0x1);
                }
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC101200);
                nlRotateAZ((*(short *)0xC101216));
                nlRotateAY(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)0xC101214)));
                nlRotateAX(((*(short *)0xC101212) + (*(short *)((a4 + 0x60)))));
                FUN_0c0de000(((*(float *)((t28 + 0x284))) * 1.0f));
                FUN_0c0c47ae(0x789);
                nlPopMatrix(0x1);
                t168 = (nlPopMatrix(0x1));
            }
            t183 = t168;
        }
        t199 = t183;
    }
    return t199;
}
