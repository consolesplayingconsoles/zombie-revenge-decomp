/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c010b04(int, float, float, float, float);
int FUN_0c010c0c(void);
int FUN_0c010c14(void);
int FUN_0c010c40(int);
int FUN_0c010c84(void);
int FUN_0c010cb6(void);
int FUN_0c010e92(void);
int FUN_0c010f0a(void);
int FUN_0c0110c6(int, int);
int FUN_0c011114(void);
int FUN_0c0112b0(int);
int FUN_0c014fae(int, float);
int FUN_0c015018(int);
extern int FUN_0c015436();
int FUN_0c0154a4(void);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c015d04(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4e78(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cec9a(int, int, int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0e2d00(Stk4, float, float, float, float, float, float, float, float);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c22fa7e(int, int, int);
extern void _builtin_prefetch(void *);
int buFindExecFile(int, int);
int buGetDiskFree(int, int);
int buStat(int);
int kmQueryFinishFlushVertexBuffer(void);
extern int kmiFatalErrorEntry();
int kmiFlipVertexBuffer(int);
int kmiSetOpaqueDummy(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int syCfgSetSoundMode(int, int, int);
float FUN_0c0e2d6c(int a4, float f4, float f5, float f6, float f7);
int FUN_0c012e36(int a4, int a5, int a6, int a7);
int kmRender(void);
int FUN_0c013c38(void);

float FUN_0c0e2d6c(int a4, float f4, float f5, float f6, float f7)
{
    int t8;
    int t10;
    int t15;
    int t19;
    int t23;
    int t27;
    int t31;
    int t35;
    int t37;
    float u39;
    float u40;
    float u42;
    float u43;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    float u49;
    float u60;
    float u61;
    int t62;
    float u63;
    float u75;
    float u76;
    float u82;
    float u83;
    float t95;
    float u99;
    float u100;
    float u101;
    float u102;
    float u103;
    float u104;
    float u108;
    float u109;
    int t123;
    float u127;
    float u128;
    float u129;
    float u130;
    float u131;
    float u141;
    float u142;
    float u143;
    float u144;
    float u145;
    float u155;
    float u156;
    float t168;
    float u172;
    float u173;
    float u174;
    float u175;
    float u176;
    float u177;
    float u181;
    float u182;
    float u189;
    float u190;
    float u191;
    float u192;
    float u193;
    float u203;
    float u204;
    float u205;
    float u206;
    float u207;
    float u217;
    float u218;
    float u220;
    float u221;
    float t232;
    float u236;
    float u237;
    float u238;
    float u239;
    float u240;
    float u241;
    float u245;
    float u246;
    float u253;
    float u254;
    float u255;
    float u256;
    float u257;
    float u267;
    float u268;
    float u269;
    float u270;
    float u271;
    float t287;
    float u291;
    float u292;
    float u293;
    float u294;
    float u295;
    float u296;
    float u300;
    float u301;
    float u308;
    float u309;
    float u310;
    float u311;
    float u312;
    float u322;
    float u323;
    float u324;
    float u325;
    float u326;
    float u336;
    float u337;
    float u343;
    float u344;
    float u350;
    float u351;
    float u357;
    float u358;
    float u360;
    float u364;
    float u365;
    float u371;
    float u372;
    float u379;
    float u380;
    float u382;
    float u383;
    float u388;
    float u389;
    float u391;
    int stk[40];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
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
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    *(unsigned int *)0xC94C6E4 = 0x0;
    *(float *)(((int)stk + 92)) = (F4 + F7);
    *(float *)(((int)stk + 76)) = (F4 - F7);
    *(float *)(((int)stk + 88)) = (F5 + F7);
    *(float *)(((int)stk + 96)) = (F5 - F7);
    *(float *)(((int)stk + 84)) = (F6 + F7);
    *(float *)(((int)stk + 100)) = (F6 - F7);
    *(unsigned int *)(((int)stk + 80)) = (*(int *)((R4 + 0x0)));
    R8 = ((R4 + 0x4));
    R9 = (0x0);
    F1 = ((F6 - F7));
    F12 = ((F7 * F7));
    F13 = (F5);
    F14 = (F6);
    F15 = (F4);
    L_C0E34F8:;
    t8 = *(int *)(((int)stk + 80));
    *(unsigned int *)(((int)stk + 80)) = (t8 - 1);
    if (((int)(t8 - 1) < 0)) goto L_C0E350A;
    t10 = *(int *)((R8 + 0x0));
    *(unsigned int *)(((int)stk + 104)) = t10;
    *(unsigned int *)(((int)stk + 108)) = t10;
    R13 = (((R8 + 0x4) + 0x4));
    if ((!((*(float *)(((int)stk + 76))) > (*(float *)(((R8 + 0x4) + 0x0)))))) goto L_C0E2DEC;
    L_C0E34E4:;
    t15 = *(int *)(((int)stk + 104));
    R8 = ((R8 + ((((((t15 << 2) << 1) + t15) << 1) + 0x7) << 2)));
    goto L_C0E34F8;
    L_C0E2DEC:;
    t19 = !((*(float *)(((int)stk + 96))) > (*(float *)((R13 + 0x0))));
    R13 = ((R13 + 0x4));
    if (t19) goto L_C0E2DFA;
    goto L_C0E34E4;
    L_C0E2DFA:;
    t23 = !((*(float *)(((int)stk + 100))) > (*(float *)((R13 + 0x0))));
    R13 = ((R13 + 0x4));
    if (t23) goto L_C0E2E08;
    goto L_C0E34E4;
    L_C0E2E08:;
    t27 = !((*(float *)((R13 + 0x0))) > (*(float *)(((int)stk + 92))));
    R13 = ((R13 + 0x4));
    if (t27) goto L_C0E2E16;
    goto L_C0E34E4;
    L_C0E2E16:;
    t31 = !((*(float *)((R13 + 0x0))) > (*(float *)(((int)stk + 88))));
    R13 = ((R13 + 0x4));
    if (t31) goto L_C0E2E24;
    goto L_C0E34E4;
    L_C0E2E24:;
    t35 = !((*(float *)((R13 + 0x0))) > (*(float *)(((int)stk + 84))));
    R13 = ((R13 + 0x4));
    if (t35) goto L_C0E2E32;
    goto L_C0E34E4;
    L_C0E2E32:;
    L_C0E34D2:;
    t37 = *(int *)(((int)stk + 108));
    *(unsigned int *)(((int)stk + 108)) = (t37 - 1);
    if (((int)(t37 - 1) < 0)) goto L_C0E34E4;
    u39 = *(float *)((R13 + 0x4));
    u40 = *(float *)((R13 + 0x8));
    u42 = *(float *)((R13 + 0x0));
    *(float *)(((int)stk + 20)) = (*(float *)((R13 + 0xC)));
    u43 = *(float *)(((int)stk + 20));
    u44 = (F13 * u39);
    u44 = u44 + u42 * F15;
    u45 = u44;
    u45 = u45 + u40 * F14;
    u46 = (u39 * u39);
    u46 = u46 + u42 * u42;
    u47 = u46;
    u47 = u47 + u40 * u40;
    *(float *)(((int)stk + 16)) = (u45 + u43);
    u48 = (u45 + u43);
    u48 = -u48;
    u49 = *(float *)(((int)stk + 16));
    R14 = (R13);
    F0 = (u40);
    F1 = (((u48 / u47) * u49));
    F10 = ((-((u48 / u47) * u49)));
    F5 = ((u48 / u47));
    F7 = (u40);
    F8 = (u42);
    F9 = (u39);
    if ((!((-((u48 / u47) * u49)) > F12))) goto L_C0E2E82;
    L_C0E34D0:;
    R13 = ((R13 + 0x48));
    goto L_C0E34D2;
    L_C0E2E82:;
    u60 = F14;
    u60 = u60 + F5 * F7;
    u61 = F15;
    u61 = u61 + F5 * F8;
    t62 = *(int *)((R14 + 0x10));
    u63 = F13;
    u63 = u63 + F5 * F9;
    R0 = (t62);
    R10 = (0xC94C7FC);
    R11 = (0xC94C800);
    R12 = (0xC94C804);
    F0 = (F5);
    F4 = (u63);
    F5 = (u60);
    F6 = (u61);
    if ((t62 == 0)) goto L_C0E2EAE;
    if ((R0 == 1)) goto L_C0E2F8C;
    if ((R0 != 2)) goto L_C0E2EAA;
    u75 = *(float *)((R14 + 0x14));
    u76 = *(float *)((R14 + 0x18));
    *(float *)(((int)stk + 56)) = u76;
    R0 = (0x20);
    if ((0.0f > (F7 * ((((u75 - F6) * ((*(float *)((R14 + 0x24))) - u76)) - ((u76 - F4) * ((*(float *)((R14 + 0x20))) - u75))))))) goto L_C0E3118;
    u82 = *(float *)((R14 + R0));
    u83 = *(float *)((R14 + 0x24));
    *(float *)(((int)stk + 64)) = u83;
    R0 = (0x2C);
    if ((!(0.0f > (F7 * ((((u82 - F6) * ((*(float *)((R14 + 0x30))) - u83)) - ((u83 - F4) * ((*(float *)((R14 + 0x2C))) - u82)))))))) goto L_C0E30B0;
    L_C0E31F8:;
    *(float *)(((int)stk + 12)) = F14;
    t95 = FUN_0c0e2d00(*(Stk4 *)((int)stk + 12), (*(float *)((R14 + 0x20))), (*(float *)((R14 + 0x24))), (*(float *)((R14 + 0x28))), (*(float *)((R14 + 0x2C))), (*(float *)((R14 + 0x30))), (*(float *)((R14 + 0x34))), F15, F13);
    F0 = (t95);
    F7 = (t95);
    if ((!(t95 > F12))) goto L_C0E3224;
    goto L_C0E34D0;
    L_C0E3224:;
    u99 = *(float *)((R12 + 0x0));
    u100 = *(float *)((R14 + 0x28));
    u101 = *(float *)((R10 + 0x0));
    u102 = *(float *)((R11 + 0x0));
    *(float *)(((int)stk + 12)) = (u99 - u100);
    u103 = *(float *)((R14 + 0x34));
    *(float *)(((int)stk + 8)) = (u99 - u103);
    u104 = *(float *)((R14 + 0x20));
    *(float *)(((int)stk + 4)) = (u101 - u104);
    u108 = ((u102 - (*(float *)((R14 + 0x24)))) * (u102 - (*(float *)((R14 + 0x30)))));
    u108 = u108 + (u101 - (*(float *)((R14 + 0x2C)))) * (u101 - u104);
    u109 = u108;
    u109 = u109 + (u99 - u103) * (u99 - u100);
    F0 = ((u99 - u103));
    F1 = (u109);
    F4 = (u102);
    F5 = (u99);
    F6 = (u101);
    if ((!(0.0f > u109))) goto L_C0E3278;
    L_C0E3428:;
    F10 = (F7);
    F7 = ((F14 - F5));
    F8 = ((F15 - F6));
    F9 = ((F13 - F4));
    L_C0E348C:;
    if ((R9 == 0)) goto L_C0E3498;
    if ((!((*(float *)(((int)stk + 24))) > F10))) goto L_C0E34D0;
    L_C0E3498:;
    *(float *)(((int)stk + 24)) = F10;
    t123 = *(int *)((R14 + 0x44));
    *(float *)0xC94C6E0 = F10;
    *(float *)0xC94C7F8 = (*(float *)(((int)stk + 16)));
    *(float *)0xC94C6C4 = F6;
    *(float *)0xC94C6C8 = F4;
    *(float *)0xC94C6CC = F5;
    *(float *)0xC94C6D0 = F8;
    *(float *)0xC94C6D4 = F9;
    *(float *)0xC94C6D8 = F7;
    *(float *)0xC94C6DC = (*(float *)(((int)stk + 20)));
    *(unsigned int *)0xC94C6E4 = R13;
    R9 = (t123);
    goto L_C0E34D0;
    L_C0E3278:;
    u127 = *(float *)((R14 + 0x20));
    u128 = *(float *)((R14 + 0x24));
    u129 = *(float *)((R14 + 0x28));
    u130 = ((F13 - u128) * (F13 - u128));
    u130 = u130 + (F15 - u127) * (F15 - u127);
    u131 = u130;
    u131 = u131 + (F14 - u129) * (F14 - u129);
    F0 = ((F14 - u129));
    F10 = (u131);
    F4 = (u128);
    F5 = (u129);
    F6 = (u127);
    F7 = ((F14 - u129));
    F8 = ((F15 - u127));
    F9 = ((F13 - u128));
    if ((!(F12 > u131))) goto L_C0E32A6;
    goto L_C0E348C;
    L_C0E32A6:;
    u141 = *(float *)((R14 + 0x2C));
    u142 = *(float *)((R14 + 0x30));
    u143 = *(float *)((R14 + 0x34));
    u144 = ((F13 - u142) * (F13 - u142));
    u144 = u144 + (F15 - u141) * (F15 - u141);
    u145 = u144;
    u145 = u145 + (F14 - u143) * (F14 - u143);
    F0 = ((F14 - u143));
    F10 = (u145);
    F4 = (u142);
    F5 = (u143);
    F6 = (u141);
    F7 = ((F14 - u143));
    F8 = ((F15 - u141));
    F9 = ((F13 - u142));
    if ((!(F12 > u145))) goto L_C0E32D4;
    goto L_C0E348C;
    L_C0E32D4:;
    goto L_C0E34D0;
    L_C0E30B0:;
    u155 = *(float *)((R14 + R0));
    u156 = *(float *)((R14 + 0x30));
    *(float *)(((int)stk + 68)) = u156;
    R0 = (0x38);
    if ((!(0.0f > (F7 * ((((u155 - F6) * ((*(float *)((R14 + 0x3C))) - u156)) - ((u156 - F4) * ((*(float *)((R14 + 0x38))) - u155)))))))) goto L_C0E30E0;
    L_C0E32D8:;
    *(float *)(((int)stk + 12)) = F14;
    t168 = FUN_0c0e2d00(*(Stk4 *)((int)stk + 12), (*(float *)((R14 + 0x2C))), (*(float *)((R14 + 0x30))), (*(float *)((R14 + 0x34))), (*(float *)((R14 + 0x38))), (*(float *)((R14 + 0x3C))), (*(float *)((R14 + 0x40))), F15, F13);
    F0 = (t168);
    F7 = (t168);
    if ((!(t168 > F12))) goto L_C0E3304;
    goto L_C0E34D0;
    L_C0E3304:;
    u172 = *(float *)((R12 + 0x0));
    u173 = *(float *)((R14 + 0x34));
    u174 = *(float *)((R10 + 0x0));
    u175 = *(float *)((R11 + 0x0));
    *(float *)(((int)stk + 12)) = (u172 - u173);
    u176 = *(float *)((R14 + 0x40));
    *(float *)(((int)stk + 8)) = (u172 - u176);
    u177 = *(float *)((R14 + 0x2C));
    *(float *)(((int)stk + 4)) = (u174 - u177);
    u181 = ((u175 - (*(float *)((R14 + 0x30)))) * (u175 - (*(float *)((R14 + 0x3C)))));
    u181 = u181 + (u174 - (*(float *)((R14 + 0x38)))) * (u174 - u177);
    u182 = u181;
    u182 = u182 + (u172 - u176) * (u172 - u173);
    F0 = ((u172 - u176));
    F1 = (u182);
    F4 = (u175);
    F5 = (u172);
    F6 = (u174);
    if ((0.0f > u182)) goto L_C0E3428;
    u189 = *(float *)((R14 + 0x2C));
    u190 = *(float *)((R14 + 0x30));
    u191 = *(float *)((R14 + 0x34));
    u192 = ((F13 - u190) * (F13 - u190));
    u192 = u192 + (F15 - u189) * (F15 - u189);
    u193 = u192;
    u193 = u193 + (F14 - u191) * (F14 - u191);
    F0 = ((F14 - u191));
    F10 = (u193);
    F4 = (u190);
    F5 = (u191);
    F6 = (u189);
    F7 = ((F14 - u191));
    F8 = ((F15 - u189));
    F9 = ((F13 - u190));
    if ((!(F12 > u193))) goto L_C0E3382;
    goto L_C0E348C;
    L_C0E3382:;
    u203 = *(float *)((R14 + 0x38));
    u204 = *(float *)((R14 + 0x3C));
    u205 = *(float *)((R14 + 0x40));
    u206 = ((F13 - u204) * (F13 - u204));
    u206 = u206 + (F15 - u203) * (F15 - u203);
    u207 = u206;
    u207 = u207 + (F14 - u205) * (F14 - u205);
    F0 = ((F14 - u205));
    F10 = (u207);
    F4 = (u204);
    F5 = (u205);
    F6 = (u203);
    F7 = ((F14 - u205));
    F8 = ((F15 - u203));
    F9 = ((F13 - u204));
    if ((F12 > u207)) goto L_C0E348C;
    goto L_C0E34D0;
    L_C0E30E0:;
    u217 = *(float *)((R14 + R0));
    *(float *)(((int)stk + 72)) = u217;
    u218 = *(float *)((R14 + 0x3C));
    u220 = *(float *)(((int)stk + 72));
    u221 = *(float *)((R14 + 0x14));
    F0 = ((u221 - u220));
    F1 = (u220);
    if ((!(0.0f > (F7 * ((((u217 - F6) * ((*(float *)((R14 + 0x18))) - u218)) - ((u218 - F4) * (u221 - u220)))))))) goto L_C0E3114;
    L_C0E33B0:;
    *(float *)(((int)stk + 12)) = F14;
    t232 = FUN_0c0e2d00(*(Stk4 *)((int)stk + 12), (*(float *)((R14 + 0x38))), (*(float *)((R14 + 0x3C))), (*(float *)((R14 + 0x40))), (*(float *)((R14 + 0x14))), (*(float *)((R14 + 0x18))), (*(float *)((R14 + 0x1C))), F15, F13);
    F0 = (t232);
    F7 = (t232);
    if ((t232 > F12)) goto L_C0E34D0;
    u236 = *(float *)((R12 + 0x0));
    u237 = *(float *)((R14 + 0x40));
    u238 = *(float *)((R10 + 0x0));
    u239 = *(float *)((R11 + 0x0));
    *(float *)(((int)stk + 12)) = (u236 - u237);
    u240 = *(float *)((R14 + 0x1C));
    *(float *)(((int)stk + 8)) = (u236 - u240);
    u241 = *(float *)((R14 + 0x38));
    *(float *)(((int)stk + 4)) = (u238 - u241);
    u245 = ((u239 - (*(float *)((R14 + 0x3C)))) * (u239 - (*(float *)((R14 + 0x18)))));
    u245 = u245 + (u238 - (*(float *)((R14 + 0x14)))) * (u238 - u241);
    u246 = u245;
    u246 = u246 + (u236 - u240) * (u236 - u237);
    F0 = ((u236 - u240));
    F1 = (u246);
    F4 = (u239);
    F5 = (u236);
    F6 = (u238);
    if ((!(0.0f > u246))) goto L_C0E3438;
    goto L_C0E3428;
    L_C0E3438:;
    u253 = *(float *)((R14 + 0x38));
    u254 = *(float *)((R14 + 0x3C));
    u255 = *(float *)((R14 + 0x40));
    u256 = ((F13 - u254) * (F13 - u254));
    u256 = u256 + (F15 - u253) * (F15 - u253);
    u257 = u256;
    u257 = u257 + (F14 - u255) * (F14 - u255);
    F0 = ((F14 - u255));
    F10 = (u257);
    F4 = (u254);
    F5 = (u255);
    F6 = (u253);
    F7 = ((F14 - u255));
    F8 = ((F15 - u253));
    F9 = ((F13 - u254));
    if ((F12 > u257)) goto L_C0E348C;
    u267 = *(float *)((R14 + 0x14));
    u268 = *(float *)((R14 + 0x18));
    u269 = *(float *)((R14 + 0x1C));
    u270 = ((F13 - u268) * (F13 - u268));
    u270 = u270 + (F15 - u267) * (F15 - u267);
    u271 = u270;
    u271 = u271 + (F14 - u269) * (F14 - u269);
    F0 = ((F14 - u269));
    F10 = (u271);
    F4 = (u268);
    F5 = (u269);
    F6 = (u267);
    F7 = ((F14 - u269));
    F8 = ((F15 - u267));
    F9 = ((F13 - u268));
    if ((!(F12 > u271))) goto L_C0E34D0;
    goto L_C0E348C;
    L_C0E3114:;
    goto L_C0E348C;
    L_C0E3118:;
    *(float *)(((int)stk + 12)) = F14;
    t287 = FUN_0c0e2d00(*(Stk4 *)((int)stk + 12), (*(float *)((R14 + 0x14))), (*(float *)((R14 + 0x18))), (*(float *)((R14 + 0x1C))), (*(float *)((R14 + 0x20))), (*(float *)((R14 + 0x24))), (*(float *)((R14 + 0x28))), F15, F13);
    F0 = (t287);
    F7 = (t287);
    if ((!(t287 > F12))) goto L_C0E3144;
    goto L_C0E34D0;
    L_C0E3144:;
    u291 = *(float *)((R12 + 0x0));
    u292 = *(float *)((R14 + 0x1C));
    u293 = *(float *)((R10 + 0x0));
    u294 = *(float *)((R11 + 0x0));
    *(float *)(((int)stk + 12)) = (u291 - u292);
    u295 = *(float *)((R14 + 0x28));
    *(float *)(((int)stk + 8)) = (u291 - u295);
    u296 = *(float *)((R14 + 0x14));
    *(float *)(((int)stk + 4)) = (u293 - u296);
    u300 = ((u294 - (*(float *)((R14 + 0x18)))) * (u294 - (*(float *)((R14 + 0x24)))));
    u300 = u300 + (u293 - (*(float *)((R14 + 0x20)))) * (u293 - u296);
    u301 = u300;
    u301 = u301 + (u291 - u295) * (u291 - u292);
    F0 = ((u291 - u295));
    F1 = (u301);
    F4 = (u294);
    F5 = (u291);
    F6 = (u293);
    if ((!(0.0f > u301))) goto L_C0E3198;
    goto L_C0E3428;
    L_C0E3198:;
    u308 = *(float *)((R14 + 0x14));
    u309 = *(float *)((R14 + 0x18));
    u310 = *(float *)((R14 + 0x1C));
    u311 = ((F13 - u309) * (F13 - u309));
    u311 = u311 + (F15 - u308) * (F15 - u308);
    u312 = u311;
    u312 = u312 + (F14 - u310) * (F14 - u310);
    F0 = ((F14 - u310));
    F10 = (u312);
    F4 = (u309);
    F5 = (u310);
    F6 = (u308);
    F7 = ((F14 - u310));
    F8 = ((F15 - u308));
    F9 = ((F13 - u309));
    if ((!(F12 > u312))) goto L_C0E31C6;
    goto L_C0E348C;
    L_C0E31C6:;
    u322 = *(float *)((R14 + 0x20));
    u323 = *(float *)((R14 + 0x24));
    u324 = *(float *)((R14 + 0x28));
    u325 = ((F13 - u323) * (F13 - u323));
    u325 = u325 + (F15 - u322) * (F15 - u322);
    u326 = u325;
    u326 = u326 + (F14 - u324) * (F14 - u324);
    F0 = ((F14 - u324));
    F10 = (u326);
    F4 = (u323);
    F5 = (u324);
    F6 = (u322);
    F7 = ((F14 - u324));
    F8 = ((F15 - u322));
    F9 = ((F13 - u323));
    if ((!(F12 > u326))) goto L_C0E31F4;
    goto L_C0E348C;
    L_C0E31F4:;
    goto L_C0E34D0;
    L_C0E2EAA:;
    goto L_C0E3118;
    L_C0E2F8C:;
    u336 = *(float *)((R14 + 0x1C));
    u337 = *(float *)((R14 + 0x14));
    *(float *)(((int)stk + 36)) = u337;
    R0 = (0x28);
    if ((!(0.0f > (F9 * ((((u336 - F5) * ((*(float *)((R14 + 0x20))) - u337)) - ((u337 - F6) * ((*(float *)((R14 + 0x28))) - u336)))))))) goto L_C0E2FBE;
    goto L_C0E3118;
    L_C0E2FBE:;
    u343 = *(float *)((R14 + R0));
    u344 = *(float *)((R14 + 0x20));
    *(float *)(((int)stk + 44)) = u344;
    R0 = (0x34);
    if ((!(0.0f > (F9 * ((((u343 - F5) * ((*(float *)((R14 + 0x2C))) - u344)) - ((u344 - F6) * ((*(float *)((R14 + 0x34))) - u343)))))))) goto L_C0E2FEE;
    goto L_C0E31F8;
    L_C0E2FEE:;
    u350 = *(float *)((R14 + R0));
    u351 = *(float *)((R14 + 0x2C));
    *(float *)(((int)stk + 48)) = u351;
    R0 = (0x40);
    if ((!(0.0f > (F9 * ((((u350 - F5) * ((*(float *)((R14 + 0x38))) - u351)) - ((u351 - F6) * ((*(float *)((R14 + 0x40))) - u350)))))))) goto L_C0E301E;
    goto L_C0E32D8;
    L_C0E301E:;
    u357 = *(float *)((R14 + R0));
    u358 = *(float *)((R14 + 0x38));
    *(float *)(((int)stk + 52)) = u358;
    u360 = *(float *)((R14 + 0x1C));
    F1 = ((u360 - u357));
    if ((!(0.0f > (F9 * ((((u357 - F5) * ((*(float *)((R14 + 0x14))) - u358)) - ((u358 - F6) * (u360 - u357)))))))) goto L_C0E304E;
    goto L_C0E33B0;
    L_C0E304E:;
    goto L_C0E348C;
    L_C0E2EAE:;
    u364 = *(float *)((R14 + 0x18));
    u365 = *(float *)((R14 + 0x1C));
    *(float *)(((int)stk + 60)) = u365;
    R0 = (0x24);
    if ((!(0.0f > (F8 * ((((u364 - F4) * ((*(float *)((R14 + 0x28))) - u365)) - ((u365 - F5) * ((*(float *)((R14 + 0x24))) - u364)))))))) goto L_C0E2EE0;
    goto L_C0E3118;
    L_C0E2EE0:;
    u371 = *(float *)((R14 + R0));
    *(float *)(((int)stk + 40)) = u371;
    u372 = *(float *)((R14 + 0x28));
    R0 = (0x30);
    if ((!(0.0f > (F8 * ((((u371 - F4) * ((*(float *)((R14 + 0x34))) - u372)) - ((u372 - F5) * ((*(float *)((R14 + 0x30))) - (*(float *)(((int)stk + 40))))))))))) goto L_C0E2F14;
    goto L_C0E31F8;
    L_C0E2F14:;
    u379 = *(float *)((R14 + R0));
    *(float *)(((int)stk + 28)) = u379;
    u380 = *(float *)((R14 + 0x34));
    u382 = *(float *)(((int)stk + 28));
    u383 = *(float *)((R14 + 0x3C));
    R0 = (0x3C);
    F0 = ((u383 - u382));
    if ((!(0.0f > (F8 * ((((u379 - F4) * ((*(float *)((R14 + 0x40))) - u380)) - ((u380 - F5) * (u383 - u382)))))))) goto L_C0E2F48;
    goto L_C0E32D8;
    L_C0E2F48:;
    u388 = *(float *)((R14 + R0));
    u389 = *(float *)((R14 + 0x40));
    *(float *)(((int)stk + 32)) = u389;
    u391 = *(float *)((R14 + 0x18));
    F1 = ((u391 - u388));
    if ((!(0.0f > (F8 * ((((u388 - F4) * ((*(float *)((R14 + 0x1C))) - u389)) - ((u389 - F5) * (u391 - u388)))))))) goto L_C0E2F78;
    goto L_C0E33B0;
    L_C0E2F78:;
    goto L_C0E348C;
    L_C0E350A:;
    return F0;
}

int FUN_0c012e36(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t5;
    int t12;
    int t13;
    int t35;
    int t37;
    int t38;
    int t62;
    int t84;
    int t92;
    int t95;
    int t101;
    int t119;
    int t126;
    int t156;
    int t181;
    int t182;
    int t184;
    int t185;
    int t186;
    int t196;
    int t233;
    int t270;
    int t300;
    int t302;
    int t303;
    int t327;
    int t349;
    int t357;
    int t360;
    int t366;
    int t384;
    int t391;
    int t421;
    int t446;
    int t447;
    int t449;
    int t450;
    int t451;
    int t461;
    int t498;
    int t535;
    int t579;
    int t581;
    int t582;
    int t606;
    int t628;
    int t636;
    int t639;
    int t645;
    int t663;
    int t670;
    int t700;
    int t725;
    int t726;
    int t728;
    int t729;
    int t730;
    int t740;
    int t777;
    int t814;
    int t844;
    int t846;
    int t847;
    int t871;
    int t893;
    int t901;
    int t904;
    int t910;
    int t928;
    int t935;
    int t965;
    int t990;
    int t991;
    int t993;
    int t994;
    int t995;
    int t1005;
    int t1042;
    int t1079;
    int t1121;
    int t1123;
    int t1124;
    int t1148;
    int t1170;
    int t1178;
    int t1181;
    int t1187;
    int t1205;
    int t1212;
    int t1242;
    int t1267;
    int t1268;
    int t1270;
    int t1271;
    int t1272;
    int t1282;
    int t1319;
    int t1356;
    int t1386;
    int t1388;
    int t1389;
    int t1413;
    int t1435;
    int t1443;
    int t1446;
    int t1452;
    int t1470;
    int t1477;
    int t1507;
    int t1532;
    int t1533;
    int t1535;
    int t1536;
    int t1537;
    int t1547;
    int t1584;
    int t1621;
    int t1662;
    int t1664;
    int t1665;
    int t1689;
    int t1711;
    int t1719;
    int t1722;
    int t1728;
    int t1746;
    int t1753;
    int t1783;
    int t1808;
    int t1809;
    int t1811;
    int t1812;
    int t1813;
    int t1823;
    int t1860;
    int t1897;
    int t1927;
    int t1929;
    int t1930;
    int t1954;
    int t1976;
    int t1984;
    int t1987;
    int t1993;
    int t2011;
    int t2018;
    int t2048;
    int t2073;
    int t2074;
    int t2076;
    int t2077;
    int t2078;
    int t2088;
    int t2125;
    int t2162;
    int t2203;
    int t2204;
    int t2222;
    int t2224;
    int t2225;
    int t2249;
    int t2271;
    int t2279;
    int t2282;
    int t2288;
    int t2306;
    int t2313;
    int t2343;
    int t2368;
    int t2369;
    int t2371;
    int t2372;
    int t2373;
    int t2383;
    int t2420;
    int t2457;
    int t2487;
    int t2489;
    int t2490;
    int t2514;
    int t2536;
    int t2544;
    int t2547;
    int t2553;
    int t2571;
    int t2578;
    int t2608;
    int t2633;
    int t2634;
    int t2636;
    int t2637;
    int t2638;
    int t2648;
    int t2685;
    int t2722;
    int t2781;
    int t2782;
    int t2783;
    int t2784;
    int t2828;
    int t2840;
    int t2849;
    int t2857;
    int t2860;
    int t2863;
    int t2887;
    int t2896;
    int t2913;
    int t2926;
    int t2928;
    int t2929;
    int t2930;
    int t2931;
    int t2941;
    int t2944;
    int t2942;
    int t2959;
    int t183;
    int t191;
    int t448;
    int t456;
    int t727;
    int t735;
    int t992;
    int t1000;
    int t1269;
    int t1277;
    int t1534;
    int t1542;
    int t1810;
    int t1818;
    int t2075;
    int t2083;
    int t2370;
    int t2378;
    int t2635;
    int t2643;
    int t2927;
    int t2936;
    int stk[15];

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    t3 = 0x0;
    t4 = 0xC0F42C0;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)0x5) {
            break;
        }
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        FUN_0c0c465c(t5);
        t3 = (t3 + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, -5.0f);
    FUN_0c0c465c(0x145F);
    FUN_0c0c465c(0x1460);
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
    t12 = *(int *)0xC1EF574;
    if ((int)(t12 + 0x1) < (int)0x3) {
        t13 = (t12 + 0x1);
        for (;;) {
            if ((*(signed char *)((0xC1EF2DC + t13))) != 0) {
                break;
            }
            t13 = (t13 + 0x1);
            if ((int)t13 >= (int)0x3) {
                t13 = (*(int *)0xC1EF574);
                t13 = (t13 - 1);
                if ((int)t13 >= 0) {
                    for (;;) {
                        if ((*(signed char *)((0xC1EF2DC + t13))) != 0) {
                            break;
                        }
                        t13 = (t13 - 1);
                        if ((int)t13 < 0) {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0xC0F4328;
                            FUN_0c0dcca0(t13);
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (*(int *)((t13 + 0xC0F4288)));
                            FUN_0c0c465c(t13);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x1463;
                            FUN_0c0c465c(t13);
                            if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
                                t13 = 0xC0F4334;
                                FUN_0c0dcca0(t13);
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (*(int *)((t13 + 0xC0F4298)));
                                FUN_0c0c465c(t13);
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t35 = *(int *)0xC23EAEC;
                                t13 = (*(int *)0xC23EB20);
                                t37 = *(int *)0xC23EB38;
                                t38 = *(int *)0xC2498F4;
                                if ((unsigned int)t35 >= (unsigned int)0xD) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                switch ((t35 << 1)) {
                                    case 0:
                                    {
                                        if ((0xC0C0 & t38) != 0) {
                                            if ((t38 & 0x8080) != 0) {
                                                if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((0xC & t38) != 0) {
                                            *(unsigned int *)0xC23EAF4 = 0x0;
                                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((t38 & 0x2) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 2:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146A;
                                        FUN_0c0c465c(t13);
                                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t62 = *(int *)(((int)stk + 4));
                                        if (t62 != 0) {
                                            if (t62 != 1) {
                                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                                    *(unsigned int *)0xC23EAEC = 0x0;
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                        t13 = (*(int *)0xC1EF574);
                                        t13 = (t13 << 2);
                                        t13 = (t13 + (((int)stk + 4) + 0x8));
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                        t13 = 0xC23EB48;
                                        FUN_0c015018(t13);
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 4:
                                    {
                                        *(unsigned int *)0xC23EB20 = t37;
                                        t13 = (FUN_0c011114());
                                        if (t13 == 0) {
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                                        *(unsigned int *)0xC52314C = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 6:
                                    {
                                        t84 = buStat(t13);
                                        if (t84 == 0) {
                                            *(unsigned int *)0xC23EB1C = 0x0;
                                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                            if ((*(int *)0xC52314C) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 8:
                                    {
                                        t92 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t37);
                                        if ((int)(*(int *)0xC23EB24) < 0) {
                                            t13 = (*(int *)0xC23EB20);
                                            t95 = buFindExecFile(t13, 0xC23EB4E);
                                            *(unsigned int *)0xC23EB24 = t95;
                                            if (t95 == 0) {
                                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = (*(int *)0xC23EB20);
                                            t101 = buGetDiskFree(t13, 0x0);
                                            *(unsigned int *)0xC23EB24 = t101;
                                            if ((int)t101 >= (int)0x6E) {
                                                *(unsigned int *)0xC23EAEC = 0x8;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                            *(unsigned int *)0xC23EAEC = 0xC;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x7;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 10:
                                    {
                                        FUN_0c010f0a();
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 12:
                                    {
                                        FUN_0c0159a2(t13, 0xC23EB4E);
                                        if ((*(int *)0xC23EB1C) != 9) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = (*(int *)0xC23EB20);
                                        t119 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                        *(unsigned int *)0xC23EAEC = 0x8;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 14:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146B;
                                        FUN_0c0c465c(t13);
                                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t126 = *(int *)(((int)stk + 4));
                                        if (t126 != 0) {
                                            if (t126 != 1) {
                                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                                    *(unsigned int *)0xC23EAEC = 0x0;
                                                    if ((*(int *)0xC52314C) == 0) {
                                                        t13 = 0x1;
                                                        return (nlPopMatrix(t13));
                                                    }
                                                    *(unsigned int *)0xC23EAEC = 0x2;
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC23EB4E;
                                        FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                        *(unsigned int *)0xC23EAEC = 0x6;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 16:
                                    {
                                        t13 = 0xC23EB48;
                                        FUN_0c015018(t13);
                                        t13 = 0x10;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 18:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146C;
                                        FUN_0c0c465c(t13);
                                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t156 = *(int *)(((int)stk + 4));
                                        if (t156 != 0) {
                                            if (t156 != 1) {
                                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                                    *(unsigned int *)0xC23EAEC = 0x0;
                                                    if ((*(int *)0xC52314C) == 0) {
                                                        t13 = 0x1;
                                                        return (nlPopMatrix(t13));
                                                    }
                                                    *(unsigned int *)0xC23EAEC = 0x2;
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0xA;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 20:
                                    {
                                        t13 = (*(int *)0xC1EF574);
                                        FUN_0c0112b0(t13);
                                        t13 = (*(int *)0xC23EB0C);
                                        t13 = (t13 + 0xD880);
                                        t181 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                        t13 = 0x0;
                                        t182 = t181;
                                        t184 = a6;
                                        t185 = a7;
                                        t186 = 0xC0C465C;
                                        for (;;) {
                                            if ((int)t13 >= (int)0x6) {
                                                break;
                                            }
                                            t182 = 0xC23EB48;
                                            t185 = (*(signed char *)((t13 + t182)));
                                            t184 = (*(int *)0xC23EB0C);
                                            t185 = (unsigned char)t185;
                                            t183 = 0xC0E5DC0;
                                            t184 = (t184 + t13);
                                            t184 = (t184 + 0xD8B0);
                                            t182 = 0xF;
                                            t182 = (FUN_0c0e5dc0());
                                            t183 = 0xC0E5F1C;
                                            t185 = a7;
                                            t186 = t182;
                                            t182 = a5;
                                            t182 = (FUN_0c0e5f1c());
                                            t186 = (t186 << 2);
                                            t185 = t182;
                                            t186 = (t186 << 1);
                                            t183 = t186;
                                            t186 = (t186 << 2);
                                            t186 = (t186 << 2);
                                            t186 = (t186 - t183);
                                            t186 = (t186 + 0xC0F4664);
                                            t185 = (t185 + t186);
                                            t186 = 0x8;
                                            for (;;) {
                                                if (t186 == 0) {
                                                    break;
                                                }
                                                t191 = (*(signed char *)((t185 + 0x0)));
                                                t186 = (t186 - 1);
                                                t185 = (t185 + 0xF);
                                                *(unsigned char *)((a6 + 0x0)) = t191;
                                                t184 = a6;
                                                t184 = (t184 + 0x6);
                                            }
                                            t13 = (a4 + 0x1);
                                        }
                                        FUN_0c010c0c();
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 22:
                                    {
                                        if ((int)t13 < 0) {
                                            *(unsigned int *)0xC23EB20 = t37;
                                            t196 = *(int *)0xC23EB1C;
                                            if (t196 != 3) {
                                                if (t196 != 10) {
                                                    t13 = 0xC0F42E0;
                                                    FUN_0c0dcca0(t13);
                                                    FUN_0c010c14();
                                                    t13 = (*(int *)0xC23EB20);
                                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                                    if ((*(int *)0xC23EB1C) == 9) {
                                                        t13 = (*(int *)0xC23EB08);
                                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                        FUN_0c0154a4();
                                                        t13 = 0x5;
                                                        FUN_0c010c40(t13);
                                                        t13 = 0x1;
                                                        return (nlPopMatrix(t13));
                                                    }
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0xC0F4304;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010c14();
                                                t13 = (*(int *)0xC23EB20);
                                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                                if ((*(int *)0xC23EB1C) == 9) {
                                                    t13 = (*(int *)0xC23EB08);
                                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0xC0F4340;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t233 = *(int *)0xC23EB1C;
                                        if (t233 != 3) {
                                            if (t233 != 10) {
                                                t13 = 0xC0F42E0;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010c14();
                                                t13 = (*(int *)0xC23EB20);
                                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                                if ((*(int *)0xC23EB1C) == 9) {
                                                    t13 = (*(int *)0xC23EB08);
                                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0xC0F4304;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4340;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    default:
                                    {
                                        t270 = *(int *)0xC23EB24;
                                        if (t270 != 0xFFFFFF09) {
                                            if (t270 != 0xFFFFFF04) {
                                                t13 = 0xC0F42EC;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010e92();
                                                if ((*(int *)0xC2498F4) != 0) {
                                                    *(unsigned int *)0xC23EAEC = 0x0;
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0xC1EEFC0;
                                            t13 = (*(int *)((t13 + 0x0)));
                                            FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                            t13 = 0xC0F42F8;
                                            FUN_0c0dcca0(t13);
                                            t13 = 0x1402;
                                            FUN_0c0c465c(t13);
                                            if (((*(int *)0xC2498F4) & 8) != 0) {
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                if ((*(int *)0xC2498F4) != 0) {
                                                    *(unsigned int *)0xC23EAEC = 0x0;
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC2498F4) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        FUN_0c010f0a();
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                }
                            }
                            t13 = 0xC0F4310;
                            FUN_0c0dcca0(t13);
                            t13 = 0xC23EB48;
                            FUN_0c014fae(t13, 0.239999995f);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t300 = *(int *)0xC23EAEC;
                            t13 = (*(int *)0xC23EB20);
                            t302 = *(int *)0xC23EB38;
                            t303 = *(int *)0xC2498F4;
                            if ((unsigned int)t300 >= (unsigned int)0xD) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            switch ((t300 << 1)) {
                                case 0:
                                {
                                    if ((0xC0C0 & t303) != 0) {
                                        if ((t303 & 0x8080) != 0) {
                                            if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((0xC & t303) != 0) {
                                        *(unsigned int *)0xC23EAF4 = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((t303 & 0x2) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 2:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146A;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t327 = *(int *)(((int)stk + 4));
                                    if (t327 != 0) {
                                        if (t327 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                    t13 = (*(int *)0xC1EF574);
                                    t13 = (t13 << 2);
                                    t13 = (t13 + (((int)stk + 4) + 0x8));
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 4:
                                {
                                    *(unsigned int *)0xC23EB20 = t302;
                                    t13 = (FUN_0c011114());
                                    if (t13 == 0) {
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                                    *(unsigned int *)0xC52314C = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 6:
                                {
                                    t349 = buStat(t13);
                                    if (t349 == 0) {
                                        *(unsigned int *)0xC23EB1C = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        if ((*(int *)0xC52314C) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 8:
                                {
                                    t357 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t302);
                                    if ((int)(*(int *)0xC23EB24) < 0) {
                                        t13 = (*(int *)0xC23EB20);
                                        t360 = buFindExecFile(t13, 0xC23EB4E);
                                        *(unsigned int *)0xC23EB24 = t360;
                                        if (t360 == 0) {
                                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = (*(int *)0xC23EB20);
                                        t366 = buGetDiskFree(t13, 0x0);
                                        *(unsigned int *)0xC23EB24 = t366;
                                        if ((int)t366 >= (int)0x6E) {
                                            *(unsigned int *)0xC23EAEC = 0x8;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                        *(unsigned int *)0xC23EAEC = 0xC;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x7;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 10:
                                {
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 12:
                                {
                                    FUN_0c0159a2(t13, 0xC23EB4E);
                                    if ((*(int *)0xC23EB1C) != 9) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    t384 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                    *(unsigned int *)0xC23EAEC = 0x8;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 14:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146B;
                                    FUN_0c0c465c(t13);
                                    FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t391 = *(int *)(((int)stk + 4));
                                    if (t391 != 0) {
                                        if (t391 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC23EB4E;
                                    FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                    *(unsigned int *)0xC23EAEC = 0x6;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 16:
                                {
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    t13 = 0x10;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 18:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146C;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t421 = *(int *)(((int)stk + 4));
                                    if (t421 != 0) {
                                        if (t421 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0xA;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 20:
                                {
                                    t13 = (*(int *)0xC1EF574);
                                    FUN_0c0112b0(t13);
                                    t13 = (*(int *)0xC23EB0C);
                                    t13 = (t13 + 0xD880);
                                    t446 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                    t13 = 0x0;
                                    t447 = t446;
                                    t449 = a6;
                                    t450 = a7;
                                    t451 = 0xC0C465C;
                                    for (;;) {
                                        if ((int)t13 >= (int)0x6) {
                                            break;
                                        }
                                        t447 = 0xC23EB48;
                                        t450 = (*(signed char *)((t13 + t447)));
                                        t449 = (*(int *)0xC23EB0C);
                                        t450 = (unsigned char)t450;
                                        t448 = 0xC0E5DC0;
                                        t449 = (t449 + t13);
                                        t449 = (t449 + 0xD8B0);
                                        t447 = 0xF;
                                        t447 = (FUN_0c0e5dc0());
                                        t448 = 0xC0E5F1C;
                                        t450 = a7;
                                        t451 = t447;
                                        t447 = a5;
                                        t447 = (FUN_0c0e5f1c());
                                        t451 = (t451 << 2);
                                        t450 = t447;
                                        t451 = (t451 << 1);
                                        t448 = t451;
                                        t451 = (t451 << 2);
                                        t451 = (t451 << 2);
                                        t451 = (t451 - t448);
                                        t451 = (t451 + 0xC0F4664);
                                        t450 = (t450 + t451);
                                        t451 = 0x8;
                                        for (;;) {
                                            if (t451 == 0) {
                                                break;
                                            }
                                            t456 = (*(signed char *)((t450 + 0x0)));
                                            t451 = (t451 - 1);
                                            t450 = (t450 + 0xF);
                                            *(unsigned char *)((a6 + 0x0)) = t456;
                                            t449 = a6;
                                            t449 = (t449 + 0x6);
                                        }
                                        t13 = (a4 + 0x1);
                                    }
                                    FUN_0c010c0c();
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 22:
                                {
                                    if ((int)t13 < 0) {
                                        *(unsigned int *)0xC23EB20 = t302;
                                        t461 = *(int *)0xC23EB1C;
                                        if (t461 != 3) {
                                            if (t461 != 10) {
                                                t13 = 0xC0F42E0;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010c14();
                                                t13 = (*(int *)0xC23EB20);
                                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                                if ((*(int *)0xC23EB1C) == 9) {
                                                    t13 = (*(int *)0xC23EB08);
                                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0xC0F4304;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4340;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t498 = *(int *)0xC23EB1C;
                                    if (t498 != 3) {
                                        if (t498 != 10) {
                                            t13 = 0xC0F42E0;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4304;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4340;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                default:
                                {
                                    t535 = *(int *)0xC23EB24;
                                    if (t535 != 0xFFFFFF09) {
                                        if (t535 != 0xFFFFFF04) {
                                            t13 = 0xC0F42EC;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010e92();
                                            if ((*(int *)0xC2498F4) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC1EEFC0;
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                        t13 = 0xC0F42F8;
                                        FUN_0c0dcca0(t13);
                                        t13 = 0x1402;
                                        FUN_0c0c465c(t13);
                                        if (((*(int *)0xC2498F4) & 8) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            if ((*(int *)0xC2498F4) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                            }
                        }
                    }
                    *(unsigned int *)(((int)stk + 8)) = t13;
                    if (((*(int *)0xC523158) & 0x20) != 0) {
                        t13 = 0x1470;
                        FUN_0c0c465c(t13);
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0xC0F4328;
                        FUN_0c0dcca0(t13);
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (*(int *)((t13 + 0xC0F4288)));
                        FUN_0c0c465c(t13);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x1463;
                        FUN_0c0c465c(t13);
                        if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
                            t13 = 0xC0F4334;
                            FUN_0c0dcca0(t13);
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (*(int *)((t13 + 0xC0F4298)));
                            FUN_0c0c465c(t13);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t579 = *(int *)0xC23EAEC;
                            t13 = (*(int *)0xC23EB20);
                            t581 = *(int *)0xC23EB38;
                            t582 = *(int *)0xC2498F4;
                            if ((unsigned int)t579 >= (unsigned int)0xD) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            switch ((t579 << 1)) {
                                case 0:
                                {
                                    if ((0xC0C0 & t582) != 0) {
                                        if ((t582 & 0x8080) != 0) {
                                            if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((0xC & t582) != 0) {
                                        *(unsigned int *)0xC23EAF4 = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((t582 & 0x2) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 2:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146A;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t606 = *(int *)(((int)stk + 4));
                                    if (t606 != 0) {
                                        if (t606 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                    t13 = (*(int *)0xC1EF574);
                                    t13 = (t13 << 2);
                                    t13 = (t13 + (((int)stk + 4) + 0x8));
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 4:
                                {
                                    *(unsigned int *)0xC23EB20 = t581;
                                    t13 = (FUN_0c011114());
                                    if (t13 == 0) {
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                                    *(unsigned int *)0xC52314C = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 6:
                                {
                                    t628 = buStat(t13);
                                    if (t628 == 0) {
                                        *(unsigned int *)0xC23EB1C = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        if ((*(int *)0xC52314C) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 8:
                                {
                                    t636 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t581);
                                    if ((int)(*(int *)0xC23EB24) < 0) {
                                        t13 = (*(int *)0xC23EB20);
                                        t639 = buFindExecFile(t13, 0xC23EB4E);
                                        *(unsigned int *)0xC23EB24 = t639;
                                        if (t639 == 0) {
                                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = (*(int *)0xC23EB20);
                                        t645 = buGetDiskFree(t13, 0x0);
                                        *(unsigned int *)0xC23EB24 = t645;
                                        if ((int)t645 >= (int)0x6E) {
                                            *(unsigned int *)0xC23EAEC = 0x8;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                        *(unsigned int *)0xC23EAEC = 0xC;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x7;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 10:
                                {
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 12:
                                {
                                    FUN_0c0159a2(t13, 0xC23EB4E);
                                    if ((*(int *)0xC23EB1C) != 9) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    t663 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                    *(unsigned int *)0xC23EAEC = 0x8;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 14:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146B;
                                    FUN_0c0c465c(t13);
                                    FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t670 = *(int *)(((int)stk + 4));
                                    if (t670 != 0) {
                                        if (t670 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC23EB4E;
                                    FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                    *(unsigned int *)0xC23EAEC = 0x6;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 16:
                                {
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    t13 = 0x10;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 18:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146C;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t700 = *(int *)(((int)stk + 4));
                                    if (t700 != 0) {
                                        if (t700 != 1) {
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                if ((*(int *)0xC52314C) == 0) {
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                *(unsigned int *)0xC23EAEC = 0x2;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0xA;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 20:
                                {
                                    t13 = (*(int *)0xC1EF574);
                                    FUN_0c0112b0(t13);
                                    t13 = (*(int *)0xC23EB0C);
                                    t13 = (t13 + 0xD880);
                                    t725 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                    t13 = 0x0;
                                    t726 = t725;
                                    t728 = a6;
                                    t729 = a7;
                                    t730 = 0xC0C465C;
                                    for (;;) {
                                        if ((int)t13 >= (int)0x6) {
                                            break;
                                        }
                                        t726 = 0xC23EB48;
                                        t729 = (*(signed char *)((t13 + t726)));
                                        t728 = (*(int *)0xC23EB0C);
                                        t729 = (unsigned char)t729;
                                        t727 = 0xC0E5DC0;
                                        t728 = (t728 + t13);
                                        t728 = (t728 + 0xD8B0);
                                        t726 = 0xF;
                                        t726 = (FUN_0c0e5dc0());
                                        t727 = 0xC0E5F1C;
                                        t729 = a7;
                                        t730 = t726;
                                        t726 = a5;
                                        t726 = (FUN_0c0e5f1c());
                                        t730 = (t730 << 2);
                                        t729 = t726;
                                        t730 = (t730 << 1);
                                        t727 = t730;
                                        t730 = (t730 << 2);
                                        t730 = (t730 << 2);
                                        t730 = (t730 - t727);
                                        t730 = (t730 + 0xC0F4664);
                                        t729 = (t729 + t730);
                                        t730 = 0x8;
                                        for (;;) {
                                            if (t730 == 0) {
                                                break;
                                            }
                                            t735 = (*(signed char *)((t729 + 0x0)));
                                            t730 = (t730 - 1);
                                            t729 = (t729 + 0xF);
                                            *(unsigned char *)((a6 + 0x0)) = t735;
                                            t728 = a6;
                                            t728 = (t728 + 0x6);
                                        }
                                        t13 = (a4 + 0x1);
                                    }
                                    FUN_0c010c0c();
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 22:
                                {
                                    if ((int)t13 < 0) {
                                        *(unsigned int *)0xC23EB20 = t581;
                                        t740 = *(int *)0xC23EB1C;
                                        if (t740 != 3) {
                                            if (t740 != 10) {
                                                t13 = 0xC0F42E0;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010c14();
                                                t13 = (*(int *)0xC23EB20);
                                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                                if ((*(int *)0xC23EB1C) == 9) {
                                                    t13 = (*(int *)0xC23EB08);
                                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                    t13 = 0x1;
                                                    return (nlPopMatrix(t13));
                                                }
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0xC0F4304;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4340;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t777 = *(int *)0xC23EB1C;
                                    if (t777 != 3) {
                                        if (t777 != 10) {
                                            t13 = 0xC0F42E0;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4304;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4340;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                default:
                                {
                                    t814 = *(int *)0xC23EB24;
                                    if (t814 != 0xFFFFFF09) {
                                        if (t814 != 0xFFFFFF04) {
                                            t13 = 0xC0F42EC;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010e92();
                                            if ((*(int *)0xC2498F4) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC1EEFC0;
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                        t13 = 0xC0F42F8;
                                        FUN_0c0dcca0(t13);
                                        t13 = 0x1402;
                                        FUN_0c0c465c(t13);
                                        if (((*(int *)0xC2498F4) & 8) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            if ((*(int *)0xC2498F4) != 0) {
                                                *(unsigned int *)0xC23EAEC = 0x0;
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                            }
                        }
                        t13 = 0xC0F4310;
                        FUN_0c0dcca0(t13);
                        t13 = 0xC23EB48;
                        FUN_0c014fae(t13, 0.239999995f);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t844 = *(int *)0xC23EAEC;
                        t13 = (*(int *)0xC23EB20);
                        t846 = *(int *)0xC23EB38;
                        t847 = *(int *)0xC2498F4;
                        if ((unsigned int)t844 >= (unsigned int)0xD) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        switch ((t844 << 1)) {
                            case 0:
                            {
                                if ((0xC0C0 & t847) != 0) {
                                    if ((t847 & 0x8080) != 0) {
                                        if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((0xC & t847) != 0) {
                                    *(unsigned int *)0xC23EAF4 = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((t847 & 0x2) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 2:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146A;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t871 = *(int *)(((int)stk + 4));
                                if (t871 != 0) {
                                    if (t871 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (t13 + (((int)stk + 4) + 0x8));
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 4:
                            {
                                *(unsigned int *)0xC23EB20 = t846;
                                t13 = (FUN_0c011114());
                                if (t13 == 0) {
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                                *(unsigned int *)0xC52314C = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 6:
                            {
                                t893 = buStat(t13);
                                if (t893 == 0) {
                                    *(unsigned int *)0xC23EB1C = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if ((*(int *)0xC52314C) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 8:
                            {
                                t901 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t846);
                                if ((int)(*(int *)0xC23EB24) < 0) {
                                    t13 = (*(int *)0xC23EB20);
                                    t904 = buFindExecFile(t13, 0xC23EB4E);
                                    *(unsigned int *)0xC23EB24 = t904;
                                    if (t904 == 0) {
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    t910 = buGetDiskFree(t13, 0x0);
                                    *(unsigned int *)0xC23EB24 = t910;
                                    if ((int)t910 >= (int)0x6E) {
                                        *(unsigned int *)0xC23EAEC = 0x8;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                    *(unsigned int *)0xC23EAEC = 0xC;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x7;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 10:
                            {
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 12:
                            {
                                FUN_0c0159a2(t13, 0xC23EB4E);
                                if ((*(int *)0xC23EB1C) != 9) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                t928 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                *(unsigned int *)0xC23EAEC = 0x8;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 14:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146B;
                                FUN_0c0c465c(t13);
                                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t935 = *(int *)(((int)stk + 4));
                                if (t935 != 0) {
                                    if (t935 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC23EB4E;
                                FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                *(unsigned int *)0xC23EAEC = 0x6;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 16:
                            {
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                t13 = 0x10;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 18:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146C;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t965 = *(int *)(((int)stk + 4));
                                if (t965 != 0) {
                                    if (t965 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0xA;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 20:
                            {
                                t13 = (*(int *)0xC1EF574);
                                FUN_0c0112b0(t13);
                                t13 = (*(int *)0xC23EB0C);
                                t13 = (t13 + 0xD880);
                                t990 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                t13 = 0x0;
                                t991 = t990;
                                t993 = a6;
                                t994 = a7;
                                t995 = 0xC0C465C;
                                for (;;) {
                                    if ((int)t13 >= (int)0x6) {
                                        break;
                                    }
                                    t991 = 0xC23EB48;
                                    t994 = (*(signed char *)((t13 + t991)));
                                    t993 = (*(int *)0xC23EB0C);
                                    t994 = (unsigned char)t994;
                                    t992 = 0xC0E5DC0;
                                    t993 = (t993 + t13);
                                    t993 = (t993 + 0xD8B0);
                                    t991 = 0xF;
                                    t991 = (FUN_0c0e5dc0());
                                    t992 = 0xC0E5F1C;
                                    t994 = a7;
                                    t995 = t991;
                                    t991 = a5;
                                    t991 = (FUN_0c0e5f1c());
                                    t995 = (t995 << 2);
                                    t994 = t991;
                                    t995 = (t995 << 1);
                                    t992 = t995;
                                    t995 = (t995 << 2);
                                    t995 = (t995 << 2);
                                    t995 = (t995 - t992);
                                    t995 = (t995 + 0xC0F4664);
                                    t994 = (t994 + t995);
                                    t995 = 0x8;
                                    for (;;) {
                                        if (t995 == 0) {
                                            break;
                                        }
                                        t1000 = (*(signed char *)((t994 + 0x0)));
                                        t995 = (t995 - 1);
                                        t994 = (t994 + 0xF);
                                        *(unsigned char *)((a6 + 0x0)) = t1000;
                                        t993 = a6;
                                        t993 = (t993 + 0x6);
                                    }
                                    t13 = (a4 + 0x1);
                                }
                                FUN_0c010c0c();
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 22:
                            {
                                if ((int)t13 < 0) {
                                    *(unsigned int *)0xC23EB20 = t846;
                                    t1005 = *(int *)0xC23EB1C;
                                    if (t1005 != 3) {
                                        if (t1005 != 10) {
                                            t13 = 0xC0F42E0;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4304;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4340;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t1042 = *(int *)0xC23EB1C;
                                if (t1042 != 3) {
                                    if (t1042 != 10) {
                                        t13 = 0xC0F42E0;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4304;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4340;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            default:
                            {
                                t1079 = *(int *)0xC23EB24;
                                if (t1079 != 0xFFFFFF09) {
                                    if (t1079 != 0xFFFFFF04) {
                                        t13 = 0xC0F42EC;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010e92();
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC1EEFC0;
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                    t13 = 0xC0F42F8;
                                    FUN_0c0dcca0(t13);
                                    t13 = 0x1402;
                                    FUN_0c0c465c(t13);
                                    if (((*(int *)0xC2498F4) & 8) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                        }
                    }
                    t13 = 0x0;
                    nlPushMatrix(t13);
                    t13 = 0xC0F4328;
                    FUN_0c0dcca0(t13);
                    t13 = (*(int *)0xC1EF574);
                    t13 = (t13 << 2);
                    t13 = (*(int *)((t13 + 0xC0F4288)));
                    FUN_0c0c465c(t13);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t13 = 0x0;
                    nlPushMatrix(t13);
                    t13 = 0x1463;
                    FUN_0c0c465c(t13);
                    if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
                        t13 = 0xC0F4334;
                        FUN_0c0dcca0(t13);
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (*(int *)((t13 + 0xC0F4298)));
                        FUN_0c0c465c(t13);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t1121 = *(int *)0xC23EAEC;
                        t13 = (*(int *)0xC23EB20);
                        t1123 = *(int *)0xC23EB38;
                        t1124 = *(int *)0xC2498F4;
                        if ((unsigned int)t1121 >= (unsigned int)0xD) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        switch ((t1121 << 1)) {
                            case 0:
                            {
                                if ((0xC0C0 & t1124) != 0) {
                                    if ((t1124 & 0x8080) != 0) {
                                        if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((0xC & t1124) != 0) {
                                    *(unsigned int *)0xC23EAF4 = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((t1124 & 0x2) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 2:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146A;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1148 = *(int *)(((int)stk + 4));
                                if (t1148 != 0) {
                                    if (t1148 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (t13 + (((int)stk + 4) + 0x8));
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 4:
                            {
                                *(unsigned int *)0xC23EB20 = t1123;
                                t13 = (FUN_0c011114());
                                if (t13 == 0) {
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                                *(unsigned int *)0xC52314C = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 6:
                            {
                                t1170 = buStat(t13);
                                if (t1170 == 0) {
                                    *(unsigned int *)0xC23EB1C = 0x0;
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if ((*(int *)0xC52314C) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 8:
                            {
                                t1178 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1123);
                                if ((int)(*(int *)0xC23EB24) < 0) {
                                    t13 = (*(int *)0xC23EB20);
                                    t1181 = buFindExecFile(t13, 0xC23EB4E);
                                    *(unsigned int *)0xC23EB24 = t1181;
                                    if (t1181 == 0) {
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = (*(int *)0xC23EB20);
                                    t1187 = buGetDiskFree(t13, 0x0);
                                    *(unsigned int *)0xC23EB24 = t1187;
                                    if ((int)t1187 >= (int)0x6E) {
                                        *(unsigned int *)0xC23EAEC = 0x8;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                    *(unsigned int *)0xC23EAEC = 0xC;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x7;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 10:
                            {
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 12:
                            {
                                FUN_0c0159a2(t13, 0xC23EB4E);
                                if ((*(int *)0xC23EB1C) != 9) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                t1205 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                *(unsigned int *)0xC23EAEC = 0x8;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 14:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146B;
                                FUN_0c0c465c(t13);
                                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1212 = *(int *)(((int)stk + 4));
                                if (t1212 != 0) {
                                    if (t1212 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC23EB4E;
                                FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                *(unsigned int *)0xC23EAEC = 0x6;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 16:
                            {
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                t13 = 0x10;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 18:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146C;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1242 = *(int *)(((int)stk + 4));
                                if (t1242 != 0) {
                                    if (t1242 != 1) {
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            if ((*(int *)0xC52314C) == 0) {
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            *(unsigned int *)0xC23EAEC = 0x2;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0xA;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 20:
                            {
                                t13 = (*(int *)0xC1EF574);
                                FUN_0c0112b0(t13);
                                t13 = (*(int *)0xC23EB0C);
                                t13 = (t13 + 0xD880);
                                t1267 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                t13 = 0x0;
                                t1268 = t1267;
                                t1270 = a6;
                                t1271 = a7;
                                t1272 = 0xC0C465C;
                                for (;;) {
                                    if ((int)t13 >= (int)0x6) {
                                        break;
                                    }
                                    t1268 = 0xC23EB48;
                                    t1271 = (*(signed char *)((t13 + t1268)));
                                    t1270 = (*(int *)0xC23EB0C);
                                    t1271 = (unsigned char)t1271;
                                    t1269 = 0xC0E5DC0;
                                    t1270 = (t1270 + t13);
                                    t1270 = (t1270 + 0xD8B0);
                                    t1268 = 0xF;
                                    t1268 = (FUN_0c0e5dc0());
                                    t1269 = 0xC0E5F1C;
                                    t1271 = a7;
                                    t1272 = t1268;
                                    t1268 = a5;
                                    t1268 = (FUN_0c0e5f1c());
                                    t1272 = (t1272 << 2);
                                    t1271 = t1268;
                                    t1272 = (t1272 << 1);
                                    t1269 = t1272;
                                    t1272 = (t1272 << 2);
                                    t1272 = (t1272 << 2);
                                    t1272 = (t1272 - t1269);
                                    t1272 = (t1272 + 0xC0F4664);
                                    t1271 = (t1271 + t1272);
                                    t1272 = 0x8;
                                    for (;;) {
                                        if (t1272 == 0) {
                                            break;
                                        }
                                        t1277 = (*(signed char *)((t1271 + 0x0)));
                                        t1272 = (t1272 - 1);
                                        t1271 = (t1271 + 0xF);
                                        *(unsigned char *)((a6 + 0x0)) = t1277;
                                        t1270 = a6;
                                        t1270 = (t1270 + 0x6);
                                    }
                                    t13 = (a4 + 0x1);
                                }
                                FUN_0c010c0c();
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 22:
                            {
                                if ((int)t13 < 0) {
                                    *(unsigned int *)0xC23EB20 = t1123;
                                    t1282 = *(int *)0xC23EB1C;
                                    if (t1282 != 3) {
                                        if (t1282 != 10) {
                                            t13 = 0xC0F42E0;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010c14();
                                            t13 = (*(int *)0xC23EB20);
                                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                            if ((*(int *)0xC23EB1C) == 9) {
                                                t13 = (*(int *)0xC23EB08);
                                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                                t13 = 0x1;
                                                return (nlPopMatrix(t13));
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0xC0F4304;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4340;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t1319 = *(int *)0xC23EB1C;
                                if (t1319 != 3) {
                                    if (t1319 != 10) {
                                        t13 = 0xC0F42E0;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4304;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4340;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            default:
                            {
                                t1356 = *(int *)0xC23EB24;
                                if (t1356 != 0xFFFFFF09) {
                                    if (t1356 != 0xFFFFFF04) {
                                        t13 = 0xC0F42EC;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010e92();
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC1EEFC0;
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                    t13 = 0xC0F42F8;
                                    FUN_0c0dcca0(t13);
                                    t13 = 0x1402;
                                    FUN_0c0c465c(t13);
                                    if (((*(int *)0xC2498F4) & 8) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        if ((*(int *)0xC2498F4) != 0) {
                                            *(unsigned int *)0xC23EAEC = 0x0;
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                        }
                    }
                    t13 = 0xC0F4310;
                    FUN_0c0dcca0(t13);
                    t13 = 0xC23EB48;
                    FUN_0c014fae(t13, 0.239999995f);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t1386 = *(int *)0xC23EAEC;
                    t13 = (*(int *)0xC23EB20);
                    t1388 = *(int *)0xC23EB38;
                    t1389 = *(int *)0xC2498F4;
                    if ((unsigned int)t1386 >= (unsigned int)0xD) {
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    switch ((t1386 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t1389) != 0) {
                                if ((t1389 & 0x8080) != 0) {
                                    if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((0xC & t1389) != 0) {
                                *(unsigned int *)0xC23EAF4 = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((t1389 & 0x2) != 0) {
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 2:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146A;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1413 = *(int *)(((int)stk + 4));
                            if (t1413 != 0) {
                                if (t1413 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (t13 + (((int)stk + 4) + 0x8));
                            t13 = (*(int *)((t13 + 0x0)));
                            FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 4:
                        {
                            *(unsigned int *)0xC23EB20 = t1388;
                            t13 = (FUN_0c011114());
                            if (t13 == 0) {
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                            *(unsigned int *)0xC52314C = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 6:
                        {
                            t1435 = buStat(t13);
                            if (t1435 == 0) {
                                *(unsigned int *)0xC23EB1C = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if ((*(int *)0xC52314C) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 8:
                        {
                            t1443 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1388);
                            if ((int)(*(int *)0xC23EB24) < 0) {
                                t13 = (*(int *)0xC23EB20);
                                t1446 = buFindExecFile(t13, 0xC23EB4E);
                                *(unsigned int *)0xC23EB24 = t1446;
                                if (t1446 == 0) {
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                t1452 = buGetDiskFree(t13, 0x0);
                                *(unsigned int *)0xC23EB24 = t1452;
                                if ((int)t1452 >= (int)0x6E) {
                                    *(unsigned int *)0xC23EAEC = 0x8;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                *(unsigned int *)0xC23EAEC = 0xC;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x7;
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t13, 0xC23EB4E);
                            if ((*(int *)0xC23EB1C) != 9) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = (*(int *)0xC23EB20);
                            t1470 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                            *(unsigned int *)0xC23EAEC = 0x8;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 14:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146B;
                            FUN_0c0c465c(t13);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1477 = *(int *)(((int)stk + 4));
                            if (t1477 != 0) {
                                if (t1477 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC23EB4E;
                            FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                            *(unsigned int *)0xC23EAEC = 0x6;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 16:
                        {
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            t13 = 0x10;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 18:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146C;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1507 = *(int *)(((int)stk + 4));
                            if (t1507 != 0) {
                                if (t1507 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0xA;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 20:
                        {
                            t13 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t13);
                            t13 = (*(int *)0xC23EB0C);
                            t13 = (t13 + 0xD880);
                            t1532 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                            t13 = 0x0;
                            t1533 = t1532;
                            t1535 = a6;
                            t1536 = a7;
                            t1537 = 0xC0C465C;
                            for (;;) {
                                if ((int)t13 >= (int)0x6) {
                                    break;
                                }
                                t1533 = 0xC23EB48;
                                t1536 = (*(signed char *)((t13 + t1533)));
                                t1535 = (*(int *)0xC23EB0C);
                                t1536 = (unsigned char)t1536;
                                t1534 = 0xC0E5DC0;
                                t1535 = (t1535 + t13);
                                t1535 = (t1535 + 0xD8B0);
                                t1533 = 0xF;
                                t1533 = (FUN_0c0e5dc0());
                                t1534 = 0xC0E5F1C;
                                t1536 = a7;
                                t1537 = t1533;
                                t1533 = a5;
                                t1533 = (FUN_0c0e5f1c());
                                t1537 = (t1537 << 2);
                                t1536 = t1533;
                                t1537 = (t1537 << 1);
                                t1534 = t1537;
                                t1537 = (t1537 << 2);
                                t1537 = (t1537 << 2);
                                t1537 = (t1537 - t1534);
                                t1537 = (t1537 + 0xC0F4664);
                                t1536 = (t1536 + t1537);
                                t1537 = 0x8;
                                for (;;) {
                                    if (t1537 == 0) {
                                        break;
                                    }
                                    t1542 = (*(signed char *)((t1536 + 0x0)));
                                    t1537 = (t1537 - 1);
                                    t1536 = (t1536 + 0xF);
                                    *(unsigned char *)((a6 + 0x0)) = t1542;
                                    t1535 = a6;
                                    t1535 = (t1535 + 0x6);
                                }
                                t13 = (a4 + 0x1);
                            }
                            FUN_0c010c0c();
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 22:
                        {
                            if ((int)t13 < 0) {
                                *(unsigned int *)0xC23EB20 = t1388;
                                t1547 = *(int *)0xC23EB1C;
                                if (t1547 != 3) {
                                    if (t1547 != 10) {
                                        t13 = 0xC0F42E0;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4304;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4340;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t1584 = *(int *)0xC23EB1C;
                            if (t1584 != 3) {
                                if (t1584 != 10) {
                                    t13 = 0xC0F42E0;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4304;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC0F4340;
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t13 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        default:
                        {
                            t1621 = *(int *)0xC23EB24;
                            if (t1621 != 0xFFFFFF09) {
                                if (t1621 != 0xFFFFFF04) {
                                    t13 = 0xC0F42EC;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010e92();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC1EEFC0;
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                t13 = 0xC0F42F8;
                                FUN_0c0dcca0(t13);
                                t13 = 0x1402;
                                FUN_0c0c465c(t13);
                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                    }
                }
                t13 = 0x0;
                nlPushMatrix(t13);
                t13 = 0xC0F4328;
                FUN_0c0dcca0(t13);
                t13 = (*(int *)0xC1EF574);
                t13 = (t13 << 2);
                t13 = (*(int *)((t13 + 0xC0F4288)));
                FUN_0c0c465c(t13);
                t13 = 0x1;
                nlPopMatrix(t13);
                t13 = 0x0;
                nlPushMatrix(t13);
                t13 = 0x1463;
                FUN_0c0c465c(t13);
                if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
                    t13 = 0xC0F4334;
                    FUN_0c0dcca0(t13);
                    t13 = (*(int *)0xC1EF574);
                    t13 = (t13 << 2);
                    t13 = (*(int *)((t13 + 0xC0F4298)));
                    FUN_0c0c465c(t13);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t1662 = *(int *)0xC23EAEC;
                    t13 = (*(int *)0xC23EB20);
                    t1664 = *(int *)0xC23EB38;
                    t1665 = *(int *)0xC2498F4;
                    if ((unsigned int)t1662 >= (unsigned int)0xD) {
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    switch ((t1662 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t1665) != 0) {
                                if ((t1665 & 0x8080) != 0) {
                                    if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((0xC & t1665) != 0) {
                                *(unsigned int *)0xC23EAF4 = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((t1665 & 0x2) != 0) {
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 2:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146A;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1689 = *(int *)(((int)stk + 4));
                            if (t1689 != 0) {
                                if (t1689 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (t13 + (((int)stk + 4) + 0x8));
                            t13 = (*(int *)((t13 + 0x0)));
                            FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 4:
                        {
                            *(unsigned int *)0xC23EB20 = t1664;
                            t13 = (FUN_0c011114());
                            if (t13 == 0) {
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                            *(unsigned int *)0xC52314C = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 6:
                        {
                            t1711 = buStat(t13);
                            if (t1711 == 0) {
                                *(unsigned int *)0xC23EB1C = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if ((*(int *)0xC52314C) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 8:
                        {
                            t1719 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1664);
                            if ((int)(*(int *)0xC23EB24) < 0) {
                                t13 = (*(int *)0xC23EB20);
                                t1722 = buFindExecFile(t13, 0xC23EB4E);
                                *(unsigned int *)0xC23EB24 = t1722;
                                if (t1722 == 0) {
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = (*(int *)0xC23EB20);
                                t1728 = buGetDiskFree(t13, 0x0);
                                *(unsigned int *)0xC23EB24 = t1728;
                                if ((int)t1728 >= (int)0x6E) {
                                    *(unsigned int *)0xC23EAEC = 0x8;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                *(unsigned int *)0xC23EAEC = 0xC;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x7;
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t13, 0xC23EB4E);
                            if ((*(int *)0xC23EB1C) != 9) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = (*(int *)0xC23EB20);
                            t1746 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                            *(unsigned int *)0xC23EAEC = 0x8;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 14:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146B;
                            FUN_0c0c465c(t13);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1753 = *(int *)(((int)stk + 4));
                            if (t1753 != 0) {
                                if (t1753 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC23EB4E;
                            FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                            *(unsigned int *)0xC23EAEC = 0x6;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 16:
                        {
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            t13 = 0x10;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 18:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146C;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1783 = *(int *)(((int)stk + 4));
                            if (t1783 != 0) {
                                if (t1783 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0xA;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 20:
                        {
                            t13 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t13);
                            t13 = (*(int *)0xC23EB0C);
                            t13 = (t13 + 0xD880);
                            t1808 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                            t13 = 0x0;
                            t1809 = t1808;
                            t1811 = a6;
                            t1812 = a7;
                            t1813 = 0xC0C465C;
                            for (;;) {
                                if ((int)t13 >= (int)0x6) {
                                    break;
                                }
                                t1809 = 0xC23EB48;
                                t1812 = (*(signed char *)((t13 + t1809)));
                                t1811 = (*(int *)0xC23EB0C);
                                t1812 = (unsigned char)t1812;
                                t1810 = 0xC0E5DC0;
                                t1811 = (t1811 + t13);
                                t1811 = (t1811 + 0xD8B0);
                                t1809 = 0xF;
                                t1809 = (FUN_0c0e5dc0());
                                t1810 = 0xC0E5F1C;
                                t1812 = a7;
                                t1813 = t1809;
                                t1809 = a5;
                                t1809 = (FUN_0c0e5f1c());
                                t1813 = (t1813 << 2);
                                t1812 = t1809;
                                t1813 = (t1813 << 1);
                                t1810 = t1813;
                                t1813 = (t1813 << 2);
                                t1813 = (t1813 << 2);
                                t1813 = (t1813 - t1810);
                                t1813 = (t1813 + 0xC0F4664);
                                t1812 = (t1812 + t1813);
                                t1813 = 0x8;
                                for (;;) {
                                    if (t1813 == 0) {
                                        break;
                                    }
                                    t1818 = (*(signed char *)((t1812 + 0x0)));
                                    t1813 = (t1813 - 1);
                                    t1812 = (t1812 + 0xF);
                                    *(unsigned char *)((a6 + 0x0)) = t1818;
                                    t1811 = a6;
                                    t1811 = (t1811 + 0x6);
                                }
                                t13 = (a4 + 0x1);
                            }
                            FUN_0c010c0c();
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 22:
                        {
                            if ((int)t13 < 0) {
                                *(unsigned int *)0xC23EB20 = t1664;
                                t1823 = *(int *)0xC23EB1C;
                                if (t1823 != 3) {
                                    if (t1823 != 10) {
                                        t13 = 0xC0F42E0;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t13 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0xC0F4304;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4340;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t1860 = *(int *)0xC23EB1C;
                            if (t1860 != 3) {
                                if (t1860 != 10) {
                                    t13 = 0xC0F42E0;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4304;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC0F4340;
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t13 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        default:
                        {
                            t1897 = *(int *)0xC23EB24;
                            if (t1897 != 0xFFFFFF09) {
                                if (t1897 != 0xFFFFFF04) {
                                    t13 = 0xC0F42EC;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010e92();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC1EEFC0;
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                t13 = 0xC0F42F8;
                                FUN_0c0dcca0(t13);
                                t13 = 0x1402;
                                FUN_0c0c465c(t13);
                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                    }
                }
                t13 = 0xC0F4310;
                FUN_0c0dcca0(t13);
                t13 = 0xC23EB48;
                FUN_0c014fae(t13, 0.239999995f);
                t13 = 0x1;
                nlPopMatrix(t13);
                t1927 = *(int *)0xC23EAEC;
                t13 = (*(int *)0xC23EB20);
                t1929 = *(int *)0xC23EB38;
                t1930 = *(int *)0xC2498F4;
                if ((unsigned int)t1927 >= (unsigned int)0xD) {
                    t13 = 0x1;
                    return (nlPopMatrix(t13));
                }
                switch ((t1927 << 1)) {
                    case 0:
                    {
                        if ((0xC0C0 & t1930) != 0) {
                            if ((t1930 & 0x8080) != 0) {
                                if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        if ((0xC & t1930) != 0) {
                            *(unsigned int *)0xC23EAF4 = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        if ((t1930 & 0x2) != 0) {
                            FUN_0c0154a4();
                            t13 = 0x5;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 2:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146A;
                        FUN_0c0c465c(t13);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t1954 = *(int *)(((int)stk + 4));
                        if (t1954 != 0) {
                            if (t1954 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (t13 + (((int)stk + 4) + 0x8));
                        t13 = (*(int *)((t13 + 0x0)));
                        FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        t13 = 0xC23EB48;
                        FUN_0c015018(t13);
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 4:
                    {
                        *(unsigned int *)0xC23EB20 = t1929;
                        t13 = (FUN_0c011114());
                        if (t13 == 0) {
                            t13 = 0x5;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = (*(int *)0xC23EB20);
                        FUN_0c0cec9a(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                        *(unsigned int *)0xC52314C = 0x0;
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 6:
                    {
                        t1976 = buStat(t13);
                        if (t1976 == 0) {
                            *(unsigned int *)0xC23EB1C = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        if ((*(int *)0xC52314C) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 8:
                    {
                        t1984 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1929);
                        if ((int)(*(int *)0xC23EB24) < 0) {
                            t13 = (*(int *)0xC23EB20);
                            t1987 = buFindExecFile(t13, 0xC23EB4E);
                            *(unsigned int *)0xC23EB24 = t1987;
                            if (t1987 == 0) {
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = (*(int *)0xC23EB20);
                            t1993 = buGetDiskFree(t13, 0x0);
                            *(unsigned int *)0xC23EB24 = t1993;
                            if ((int)t1993 >= (int)0x6E) {
                                *(unsigned int *)0xC23EAEC = 0x8;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                            *(unsigned int *)0xC23EAEC = 0xC;
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        *(unsigned int *)0xC23EAEC = 0x7;
                        if ((*(int *)0xC52314C) == 0) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 10:
                    {
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 12:
                    {
                        FUN_0c0159a2(t13, 0xC23EB4E);
                        if ((*(int *)0xC23EB1C) != 9) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = (*(int *)0xC23EB20);
                        t2011 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                        *(unsigned int *)0xC23EAEC = 0x8;
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 14:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146B;
                        FUN_0c0c465c(t13);
                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t2018 = *(int *)(((int)stk + 4));
                        if (t2018 != 0) {
                            if (t2018 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0xC23EB4E;
                        FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                        *(unsigned int *)0xC23EAEC = 0x6;
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        if ((*(int *)0xC52314C) == 0) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 16:
                    {
                        t13 = 0xC23EB48;
                        FUN_0c015018(t13);
                        t13 = 0x10;
                        FUN_0c010c40(t13);
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 18:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146C;
                        FUN_0c0c465c(t13);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t2048 = *(int *)(((int)stk + 4));
                        if (t2048 != 0) {
                            if (t2048 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        *(unsigned int *)0xC23EAEC = 0xA;
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if ((*(int *)0xC52314C) == 0) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        if ((*(int *)0xC52314C) == 0) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 20:
                    {
                        t13 = (*(int *)0xC1EF574);
                        FUN_0c0112b0(t13);
                        t13 = (*(int *)0xC23EB0C);
                        t13 = (t13 + 0xD880);
                        t2073 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                        t13 = 0x0;
                        t2074 = t2073;
                        t2076 = a6;
                        t2077 = a7;
                        t2078 = 0xC0C465C;
                        for (;;) {
                            if ((int)t13 >= (int)0x6) {
                                break;
                            }
                            t2074 = 0xC23EB48;
                            t2077 = (*(signed char *)((t13 + t2074)));
                            t2076 = (*(int *)0xC23EB0C);
                            t2077 = (unsigned char)t2077;
                            t2075 = 0xC0E5DC0;
                            t2076 = (t2076 + t13);
                            t2076 = (t2076 + 0xD8B0);
                            t2074 = 0xF;
                            t2074 = (FUN_0c0e5dc0());
                            t2075 = 0xC0E5F1C;
                            t2077 = a7;
                            t2078 = t2074;
                            t2074 = a5;
                            t2074 = (FUN_0c0e5f1c());
                            t2078 = (t2078 << 2);
                            t2077 = t2074;
                            t2078 = (t2078 << 1);
                            t2075 = t2078;
                            t2078 = (t2078 << 2);
                            t2078 = (t2078 << 2);
                            t2078 = (t2078 - t2075);
                            t2078 = (t2078 + 0xC0F4664);
                            t2077 = (t2077 + t2078);
                            t2078 = 0x8;
                            for (;;) {
                                if (t2078 == 0) {
                                    break;
                                }
                                t2083 = (*(signed char *)((t2077 + 0x0)));
                                t2078 = (t2078 - 1);
                                t2077 = (t2077 + 0xF);
                                *(unsigned char *)((a6 + 0x0)) = t2083;
                                t2076 = a6;
                                t2076 = (t2076 + 0x6);
                            }
                            t13 = (a4 + 0x1);
                        }
                        FUN_0c010c0c();
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 22:
                    {
                        if ((int)t13 < 0) {
                            *(unsigned int *)0xC23EB20 = t1929;
                            t2088 = *(int *)0xC23EB1C;
                            if (t2088 != 3) {
                                if (t2088 != 10) {
                                    t13 = 0xC0F42E0;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t13 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0xC0F4304;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC0F4340;
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t13 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t2125 = *(int *)0xC23EB1C;
                        if (t2125 != 3) {
                            if (t2125 != 10) {
                                t13 = 0xC0F42E0;
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t13 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC0F4304;
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t13 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0xC0F4340;
                        FUN_0c0dcca0(t13);
                        FUN_0c010c14();
                        t13 = (*(int *)0xC23EB20);
                        FUN_0c0156ea(t13, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                        if ((*(int *)0xC23EB1C) == 9) {
                            t13 = (*(int *)0xC23EB08);
                            FUN_0c0e2a4c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                            FUN_0c0154a4();
                            t13 = 0x5;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    default:
                    {
                        t2162 = *(int *)0xC23EB24;
                        if (t2162 != 0xFFFFFF09) {
                            if (t2162 != 0xFFFFFF04) {
                                t13 = 0xC0F42EC;
                                FUN_0c0dcca0(t13);
                                FUN_0c010e92();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0xC1EEFC0;
                            t13 = (*(int *)((t13 + 0x0)));
                            FUN_0c010b04(t13, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                            t13 = 0xC0F42F8;
                            FUN_0c0dcca0(t13);
                            t13 = 0x1402;
                            FUN_0c0c465c(t13);
                            if (((*(int *)0xC2498F4) & 8) != 0) {
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = t13;
        if (((*(int *)0xC523158) & 0x20) != 0) {
            FUN_0c0c465c(0x1471);
        }
    }
    t2203 = *(int *)0xC1EF574;
    if ((int)(t2203 - 1) >= 0) {
        t2204 = (t2203 - 1);
        for (;;) {
            if ((*(signed char *)((0xC1EF2DC + t2204))) != 0) {
                break;
            }
            t2204 = (t2204 - 1);
            if ((int)t2204 < 0) {
                t2204 = 0x0;
                nlPushMatrix(t2204);
                t2204 = 0xC0F4328;
                FUN_0c0dcca0(t2204);
                t2204 = (*(int *)0xC1EF574);
                t2204 = (t2204 << 2);
                t2204 = (*(int *)((t2204 + 0xC0F4288)));
                FUN_0c0c465c(t2204);
                t2204 = 0x1;
                nlPopMatrix(t2204);
                t2204 = 0x0;
                nlPushMatrix(t2204);
                t2204 = 0x1463;
                FUN_0c0c465c(t2204);
                if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
                    t2204 = 0xC0F4334;
                    FUN_0c0dcca0(t2204);
                    t2204 = (*(int *)0xC1EF574);
                    t2204 = (t2204 << 2);
                    t2204 = (*(int *)((t2204 + 0xC0F4298)));
                    FUN_0c0c465c(t2204);
                    t2204 = 0x1;
                    nlPopMatrix(t2204);
                    t2222 = *(int *)0xC23EAEC;
                    t2204 = (*(int *)0xC23EB20);
                    t2224 = *(int *)0xC23EB38;
                    t2225 = *(int *)0xC2498F4;
                    if ((unsigned int)t2222 >= (unsigned int)0xD) {
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    switch ((t2222 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t2225) != 0) {
                                if ((t2225 & 0x8080) != 0) {
                                    if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((0xC & t2225) != 0) {
                                *(unsigned int *)0xC23EAF4 = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((t2225 & 0x2) != 0) {
                                FUN_0c0154a4();
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 2:
                        {
                            t2204 = 0x0;
                            nlPushMatrix(t2204);
                            t2204 = 0x146A;
                            FUN_0c0c465c(t2204);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t2204 = 0x1;
                            nlPopMatrix(t2204);
                            t2249 = *(int *)(((int)stk + 4));
                            if (t2249 != 0) {
                                if (t2249 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t2204 = (*(int *)0xC1EF574);
                            t2204 = (t2204 << 2);
                            t2204 = (t2204 + (((int)stk + 4) + 0x8));
                            t2204 = (*(int *)((t2204 + 0x0)));
                            FUN_0c0cc3f8(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t2204 = 0xC23EB48;
                            FUN_0c015018(t2204);
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 4:
                        {
                            *(unsigned int *)0xC23EB20 = t2224;
                            t2204 = (FUN_0c011114());
                            if (t2204 == 0) {
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = (*(int *)0xC23EB20);
                            FUN_0c0cec9a(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                            *(unsigned int *)0xC52314C = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 6:
                        {
                            t2271 = buStat(t2204);
                            if (t2271 == 0) {
                                *(unsigned int *)0xC23EB1C = 0x0;
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if ((*(int *)0xC52314C) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 8:
                        {
                            t2279 = ((int (*)(int, int, int))(FUN_0c015436))(t2204, 0x0, t2224);
                            if ((int)(*(int *)0xC23EB24) < 0) {
                                t2204 = (*(int *)0xC23EB20);
                                t2282 = buFindExecFile(t2204, 0xC23EB4E);
                                *(unsigned int *)0xC23EB24 = t2282;
                                if (t2282 == 0) {
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = (*(int *)0xC23EB20);
                                t2288 = buGetDiskFree(t2204, 0x0);
                                *(unsigned int *)0xC23EB24 = t2288;
                                if ((int)t2288 >= (int)0x6E) {
                                    *(unsigned int *)0xC23EAEC = 0x8;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                                *(unsigned int *)0xC23EAEC = 0xC;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x7;
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t2204, 0xC23EB4E);
                            if ((*(int *)0xC23EB1C) != 9) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = (*(int *)0xC23EB20);
                            t2306 = ((int (*)(int, int))(FUN_0c015436))(t2204, 0x0);
                            *(unsigned int *)0xC23EAEC = 0x8;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 14:
                        {
                            t2204 = 0x0;
                            nlPushMatrix(t2204);
                            t2204 = 0x146B;
                            FUN_0c0c465c(t2204);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t2204 = 0x1;
                            nlPopMatrix(t2204);
                            t2313 = *(int *)(((int)stk + 4));
                            if (t2313 != 0) {
                                if (t2313 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t2204 = 0x1;
                                            return (nlPopMatrix(t2204));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0xC23EB4E;
                            FUN_0c0e631c(t2204, 0xC1EF454, 0xD);
                            *(unsigned int *)0xC23EAEC = 0x6;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 16:
                        {
                            t2204 = 0xC23EB48;
                            FUN_0c015018(t2204);
                            t2204 = 0x10;
                            FUN_0c010c40(t2204);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 18:
                        {
                            t2204 = 0x0;
                            nlPushMatrix(t2204);
                            t2204 = 0x146C;
                            FUN_0c0c465c(t2204);
                            *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                            t2204 = 0x1;
                            nlPopMatrix(t2204);
                            t2343 = *(int *)(((int)stk + 4));
                            if (t2343 != 0) {
                                if (t2343 != 1) {
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        if ((*(int *)0xC52314C) == 0) {
                                            t2204 = 0x1;
                                            return (nlPopMatrix(t2204));
                                        }
                                        *(unsigned int *)0xC23EAEC = 0x2;
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0xA;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 20:
                        {
                            t2204 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t2204);
                            t2204 = (*(int *)0xC23EB0C);
                            t2204 = (t2204 + 0xD880);
                            t2368 = FUN_0c0e631c(t2204, 0xC23EB48, 0x6);
                            t2204 = 0x0;
                            t2369 = t2368;
                            t2371 = a6;
                            t2372 = a7;
                            t2373 = 0xC0C465C;
                            for (;;) {
                                if ((int)t2204 >= (int)0x6) {
                                    break;
                                }
                                t2369 = 0xC23EB48;
                                t2372 = (*(signed char *)((t2204 + t2369)));
                                t2371 = (*(int *)0xC23EB0C);
                                t2372 = (unsigned char)t2372;
                                t2370 = 0xC0E5DC0;
                                t2371 = (t2371 + t2204);
                                t2371 = (t2371 + 0xD8B0);
                                t2369 = 0xF;
                                t2369 = (FUN_0c0e5dc0());
                                t2370 = 0xC0E5F1C;
                                t2372 = a7;
                                t2373 = t2369;
                                t2369 = a5;
                                t2369 = (FUN_0c0e5f1c());
                                t2373 = (t2373 << 2);
                                t2372 = t2369;
                                t2373 = (t2373 << 1);
                                t2370 = t2373;
                                t2373 = (t2373 << 2);
                                t2373 = (t2373 << 2);
                                t2373 = (t2373 - t2370);
                                t2373 = (t2373 + 0xC0F4664);
                                t2372 = (t2372 + t2373);
                                t2373 = 0x8;
                                for (;;) {
                                    if (t2373 == 0) {
                                        break;
                                    }
                                    t2378 = (*(signed char *)((t2372 + 0x0)));
                                    t2373 = (t2373 - 1);
                                    t2372 = (t2372 + 0xF);
                                    *(unsigned char *)((a6 + 0x0)) = t2378;
                                    t2371 = a6;
                                    t2371 = (t2371 + 0x6);
                                }
                                t2204 = (a4 + 0x1);
                            }
                            FUN_0c010c0c();
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        case 22:
                        {
                            if ((int)t2204 < 0) {
                                *(unsigned int *)0xC23EB20 = t2224;
                                t2383 = *(int *)0xC23EB1C;
                                if (t2383 != 3) {
                                    if (t2383 != 10) {
                                        t2204 = 0xC0F42E0;
                                        FUN_0c0dcca0(t2204);
                                        FUN_0c010c14();
                                        t2204 = (*(int *)0xC23EB20);
                                        FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                        if ((*(int *)0xC23EB1C) == 9) {
                                            t2204 = (*(int *)0xC23EB08);
                                            FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                            FUN_0c0154a4();
                                            t2204 = 0x5;
                                            FUN_0c010c40(t2204);
                                            t2204 = 0x1;
                                            return (nlPopMatrix(t2204));
                                        }
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0xC0F4304;
                                    FUN_0c0dcca0(t2204);
                                    FUN_0c010c14();
                                    t2204 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t2204 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t2204 = 0x5;
                                        FUN_0c010c40(t2204);
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0xC0F4340;
                                FUN_0c0dcca0(t2204);
                                FUN_0c010c14();
                                t2204 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t2204 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t2204 = 0x5;
                                    FUN_0c010c40(t2204);
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2420 = *(int *)0xC23EB1C;
                            if (t2420 != 3) {
                                if (t2420 != 10) {
                                    t2204 = 0xC0F42E0;
                                    FUN_0c0dcca0(t2204);
                                    FUN_0c010c14();
                                    t2204 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t2204 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t2204 = 0x5;
                                        FUN_0c010c40(t2204);
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0xC0F4304;
                                FUN_0c0dcca0(t2204);
                                FUN_0c010c14();
                                t2204 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t2204 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t2204 = 0x5;
                                    FUN_0c010c40(t2204);
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0xC0F4340;
                            FUN_0c0dcca0(t2204);
                            FUN_0c010c14();
                            t2204 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t2204 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        default:
                        {
                            t2457 = *(int *)0xC23EB24;
                            if (t2457 != 0xFFFFFF09) {
                                if (t2457 != 0xFFFFFF04) {
                                    t2204 = 0xC0F42EC;
                                    FUN_0c0dcca0(t2204);
                                    FUN_0c010e92();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0xC1EEFC0;
                                t2204 = (*(int *)((t2204 + 0x0)));
                                FUN_0c010b04(t2204, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                                t2204 = 0xC0F42F8;
                                FUN_0c0dcca0(t2204);
                                t2204 = 0x1402;
                                FUN_0c0c465c(t2204);
                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                    FUN_0c0154a4();
                                    t2204 = 0x5;
                                    FUN_0c010c40(t2204);
                                    if ((*(int *)0xC2498F4) != 0) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                    }
                }
                t2204 = 0xC0F4310;
                FUN_0c0dcca0(t2204);
                t2204 = 0xC23EB48;
                FUN_0c014fae(t2204, 0.239999995f);
                t2204 = 0x1;
                nlPopMatrix(t2204);
                t2487 = *(int *)0xC23EAEC;
                t2204 = (*(int *)0xC23EB20);
                t2489 = *(int *)0xC23EB38;
                t2490 = *(int *)0xC2498F4;
                if ((unsigned int)t2487 >= (unsigned int)0xD) {
                    t2204 = 0x1;
                    return (nlPopMatrix(t2204));
                }
                switch ((t2487 << 1)) {
                    case 0:
                    {
                        if ((0xC0C0 & t2490) != 0) {
                            if ((t2490 & 0x8080) != 0) {
                                if ((int)(*(int *)(((int)stk + 4))) < 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((int)(*(int *)(((int)stk + 8))) < 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        if ((0xC & t2490) != 0) {
                            *(unsigned int *)0xC23EAF4 = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        if ((t2490 & 0x2) != 0) {
                            FUN_0c0154a4();
                            t2204 = 0x5;
                            FUN_0c010c40(t2204);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 2:
                    {
                        t2204 = 0x0;
                        nlPushMatrix(t2204);
                        t2204 = 0x146A;
                        FUN_0c0c465c(t2204);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t2204 = 0x1;
                        nlPopMatrix(t2204);
                        t2514 = *(int *)(((int)stk + 4));
                        if (t2514 != 0) {
                            if (t2514 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                        t2204 = (*(int *)0xC1EF574);
                        t2204 = (t2204 << 2);
                        t2204 = (t2204 + (((int)stk + 4) + 0x8));
                        t2204 = (*(int *)((t2204 + 0x0)));
                        FUN_0c0cc3f8(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        t2204 = 0xC23EB48;
                        FUN_0c015018(t2204);
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 4:
                    {
                        *(unsigned int *)0xC23EB20 = t2489;
                        t2204 = (FUN_0c011114());
                        if (t2204 == 0) {
                            t2204 = 0x5;
                            FUN_0c010c40(t2204);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = (*(int *)0xC23EB20);
                        FUN_0c0cec9a(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                        *(unsigned int *)0xC52314C = 0x0;
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 6:
                    {
                        t2536 = buStat(t2204);
                        if (t2536 == 0) {
                            *(unsigned int *)0xC23EB1C = 0x0;
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        if ((*(int *)0xC52314C) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 8:
                    {
                        t2544 = ((int (*)(int, int, int))(FUN_0c015436))(t2204, 0x0, t2489);
                        if ((int)(*(int *)0xC23EB24) < 0) {
                            t2204 = (*(int *)0xC23EB20);
                            t2547 = buFindExecFile(t2204, 0xC23EB4E);
                            *(unsigned int *)0xC23EB24 = t2547;
                            if (t2547 == 0) {
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = (*(int *)0xC23EB20);
                            t2553 = buGetDiskFree(t2204, 0x0);
                            *(unsigned int *)0xC23EB24 = t2553;
                            if ((int)t2553 >= (int)0x6E) {
                                *(unsigned int *)0xC23EAEC = 0x8;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                            *(unsigned int *)0xC23EAEC = 0xC;
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        *(unsigned int *)0xC23EAEC = 0x7;
                        if ((*(int *)0xC52314C) == 0) {
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 10:
                    {
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 12:
                    {
                        FUN_0c0159a2(t2204, 0xC23EB4E);
                        if ((*(int *)0xC23EB1C) != 9) {
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = (*(int *)0xC23EB20);
                        t2571 = ((int (*)(int, int))(FUN_0c015436))(t2204, 0x0);
                        *(unsigned int *)0xC23EAEC = 0x8;
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 14:
                    {
                        t2204 = 0x0;
                        nlPushMatrix(t2204);
                        t2204 = 0x146B;
                        FUN_0c0c465c(t2204);
                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t2204 = 0x1;
                        nlPopMatrix(t2204);
                        t2578 = *(int *)(((int)stk + 4));
                        if (t2578 != 0) {
                            if (t2578 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0xC23EB4E;
                        FUN_0c0e631c(t2204, 0xC1EF454, 0xD);
                        *(unsigned int *)0xC23EAEC = 0x6;
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        if ((*(int *)0xC52314C) == 0) {
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 16:
                    {
                        t2204 = 0xC23EB48;
                        FUN_0c015018(t2204);
                        t2204 = 0x10;
                        FUN_0c010c40(t2204);
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 18:
                    {
                        t2204 = 0x0;
                        nlPushMatrix(t2204);
                        t2204 = 0x146C;
                        FUN_0c0c465c(t2204);
                        *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                        t2204 = 0x1;
                        nlPopMatrix(t2204);
                        t2608 = *(int *)(((int)stk + 4));
                        if (t2608 != 0) {
                            if (t2608 != 1) {
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    if ((*(int *)0xC52314C) == 0) {
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    *(unsigned int *)0xC23EAEC = 0x2;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                if ((*(int *)0xC52314C) == 0) {
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                *(unsigned int *)0xC23EAEC = 0x2;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        *(unsigned int *)0xC23EAEC = 0xA;
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            if ((*(int *)0xC52314C) == 0) {
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            *(unsigned int *)0xC23EAEC = 0x2;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        if ((*(int *)0xC52314C) == 0) {
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        *(unsigned int *)0xC23EAEC = 0x2;
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 20:
                    {
                        t2204 = (*(int *)0xC1EF574);
                        FUN_0c0112b0(t2204);
                        t2204 = (*(int *)0xC23EB0C);
                        t2204 = (t2204 + 0xD880);
                        t2633 = FUN_0c0e631c(t2204, 0xC23EB48, 0x6);
                        t2204 = 0x0;
                        t2634 = t2633;
                        t2636 = a6;
                        t2637 = a7;
                        t2638 = 0xC0C465C;
                        for (;;) {
                            if ((int)t2204 >= (int)0x6) {
                                break;
                            }
                            t2634 = 0xC23EB48;
                            t2637 = (*(signed char *)((t2204 + t2634)));
                            t2636 = (*(int *)0xC23EB0C);
                            t2637 = (unsigned char)t2637;
                            t2635 = 0xC0E5DC0;
                            t2636 = (t2636 + t2204);
                            t2636 = (t2636 + 0xD8B0);
                            t2634 = 0xF;
                            t2634 = (FUN_0c0e5dc0());
                            t2635 = 0xC0E5F1C;
                            t2637 = a7;
                            t2638 = t2634;
                            t2634 = a5;
                            t2634 = (FUN_0c0e5f1c());
                            t2638 = (t2638 << 2);
                            t2637 = t2634;
                            t2638 = (t2638 << 1);
                            t2635 = t2638;
                            t2638 = (t2638 << 2);
                            t2638 = (t2638 << 2);
                            t2638 = (t2638 - t2635);
                            t2638 = (t2638 + 0xC0F4664);
                            t2637 = (t2637 + t2638);
                            t2638 = 0x8;
                            for (;;) {
                                if (t2638 == 0) {
                                    break;
                                }
                                t2643 = (*(signed char *)((t2637 + 0x0)));
                                t2638 = (t2638 - 1);
                                t2637 = (t2637 + 0xF);
                                *(unsigned char *)((a6 + 0x0)) = t2643;
                                t2636 = a6;
                                t2636 = (t2636 + 0x6);
                            }
                            t2204 = (a4 + 0x1);
                        }
                        FUN_0c010c0c();
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    case 22:
                    {
                        if ((int)t2204 < 0) {
                            *(unsigned int *)0xC23EB20 = t2489;
                            t2648 = *(int *)0xC23EB1C;
                            if (t2648 != 3) {
                                if (t2648 != 10) {
                                    t2204 = 0xC0F42E0;
                                    FUN_0c0dcca0(t2204);
                                    FUN_0c010c14();
                                    t2204 = (*(int *)0xC23EB20);
                                    FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        t2204 = (*(int *)0xC23EB08);
                                        FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                        FUN_0c0154a4();
                                        t2204 = 0x5;
                                        FUN_0c010c40(t2204);
                                        t2204 = 0x1;
                                        return (nlPopMatrix(t2204));
                                    }
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0xC0F4304;
                                FUN_0c0dcca0(t2204);
                                FUN_0c010c14();
                                t2204 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t2204 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t2204 = 0x5;
                                    FUN_0c010c40(t2204);
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0xC0F4340;
                            FUN_0c0dcca0(t2204);
                            FUN_0c010c14();
                            t2204 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t2204 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2685 = *(int *)0xC23EB1C;
                        if (t2685 != 3) {
                            if (t2685 != 10) {
                                t2204 = 0xC0F42E0;
                                FUN_0c0dcca0(t2204);
                                FUN_0c010c14();
                                t2204 = (*(int *)0xC23EB20);
                                FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    t2204 = (*(int *)0xC23EB08);
                                    FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                    FUN_0c0154a4();
                                    t2204 = 0x5;
                                    FUN_0c010c40(t2204);
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0xC0F4304;
                            FUN_0c0dcca0(t2204);
                            FUN_0c010c14();
                            t2204 = (*(int *)0xC23EB20);
                            FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                t2204 = (*(int *)0xC23EB08);
                                FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                FUN_0c0154a4();
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0xC0F4340;
                        FUN_0c0dcca0(t2204);
                        FUN_0c010c14();
                        t2204 = (*(int *)0xC23EB20);
                        FUN_0c0156ea(t2204, (*(int *)0xC23EB0C), 0xDC00, 0x0);
                        if ((*(int *)0xC23EB1C) == 9) {
                            t2204 = (*(int *)0xC23EB08);
                            FUN_0c0e2a4c(t2204, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                            FUN_0c0154a4();
                            t2204 = 0x5;
                            FUN_0c010c40(t2204);
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                    default:
                    {
                        t2722 = *(int *)0xC23EB24;
                        if (t2722 != 0xFFFFFF09) {
                            if (t2722 != 0xFFFFFF04) {
                                t2204 = 0xC0F42EC;
                                FUN_0c0dcca0(t2204);
                                FUN_0c010e92();
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0xC1EEFC0;
                            t2204 = (*(int *)((t2204 + 0x0)));
                            FUN_0c010b04(t2204, (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                            t2204 = 0xC0F42F8;
                            FUN_0c0dcca0(t2204);
                            t2204 = 0x1402;
                            FUN_0c0c465c(t2204);
                            if (((*(int *)0xC2498F4) & 8) != 0) {
                                FUN_0c0154a4();
                                t2204 = 0x5;
                                FUN_0c010c40(t2204);
                                if ((*(int *)0xC2498F4) != 0) {
                                    *(unsigned int *)0xC23EAEC = 0x0;
                                    t2204 = 0x1;
                                    return (nlPopMatrix(t2204));
                                }
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            if ((*(int *)0xC2498F4) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                                t2204 = 0x1;
                                return (nlPopMatrix(t2204));
                            }
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            *(unsigned int *)0xC23EAEC = 0x0;
                            t2204 = 0x1;
                            return (nlPopMatrix(t2204));
                        }
                        t2204 = 0x1;
                        return (nlPopMatrix(t2204));
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 8)) = t2204;
        if (((*(int *)0xC523158) & 0x20) != 0) {
            FUN_0c0c465c(0x1470);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4328);
    FUN_0c0c465c((*(int *)((((*(int *)0xC1EF574) << 2) + 0xC0F4288))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0c465c(0x1463);
    if ((int)(*(int *)0xC23EAEC) < (int)0x5) {
        FUN_0c0dcca0(0xC0F4334);
        FUN_0c0c465c((*(int *)((((*(int *)0xC1EF574) << 2) + 0xC0F4298))));
    } else {
        FUN_0c0dcca0(0xC0F4310);
        FUN_0c014fae(0xC23EB48, 0.239999995f);
    }
    nlPopMatrix(0x1);
    t2781 = *(int *)0xC23EAEC;
    t2782 = *(int *)0xC23EB20;
    t2783 = *(int *)0xC23EB38;
    t2784 = *(int *)0xC2498F4;
    if ((unsigned int)t2781 >= (unsigned int)0xD) {
    } else {
        switch ((t2781 << 1)) {
            case 0:
            {
                if ((0xC0C0 & t2784) != 0) {
                    if ((t2784 & 0x8080) != 0) {
                        if ((int)(*(int *)(((int)stk + 4))) < 0) {
                        } else {
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                        }
                    } else {
                        if ((int)(*(int *)(((int)stk + 8))) < 0) {
                        } else {
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 8)));
                        }
                    }
                } else {
                    if ((0xC & t2784) != 0) {
                        *(unsigned int *)0xC23EAF4 = 0x0;
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                    } else {
                        if ((t2784 & 0x2) != 0) {
                            FUN_0c0154a4();
                            FUN_0c010c40(0x5);
                        }
                    }
                }
            }
                break;
            case 2:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146A);
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2828 = *(int *)(((int)stk + 4));
                if (t2828 != 0) {
                    if (t2828 != 1) {
                    } else {
                        *(unsigned int *)0xC23EAEC = 0x0;
                    }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                    FUN_0c0cc3f8((*(int *)(((((*(int *)0xC1EF574) << 2) + (((int)stk + 4) + 0x8)) + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    FUN_0c015018(0xC23EB48);
                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x0;
                }
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC23EB20 = t2783;
                t2840 = FUN_0c011114();
                if (t2840 == 0) {
                    FUN_0c010c40(0x5);
                } else {
                    FUN_0c0cec9a((*(int *)0xC23EB20), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                    *(unsigned int *)0xC52314C = 0x0;
                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                }
            }
                break;
            case 6:
            {
                t2849 = buStat(t2782);
                if (t2849 == 0) {
                    *(unsigned int *)0xC23EB1C = 0x0;
                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                }
                if ((*(int *)0xC52314C) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x2;
                }
            }
                break;
            case 8:
            {
                t2857 = ((int (*)(int, int, int))(FUN_0c015436))(t2782, 0x0, t2783);
                if ((int)(*(int *)0xC23EB24) < 0) {
                    t2860 = buFindExecFile((*(int *)0xC23EB20), 0xC23EB4E);
                    *(unsigned int *)0xC23EB24 = t2860;
                    if (t2860 == 0) {
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                    } else {
                        t2863 = buGetDiskFree((*(int *)0xC23EB20), 0x0);
                        *(unsigned int *)0xC23EB24 = t2863;
                        if ((int)t2863 >= (int)0x6E) {
                            *(unsigned int *)0xC23EAEC = 0x8;
                        } else {
                            *(unsigned int *)0xC23EB24 = 0xFFFFFF04;
                            *(unsigned int *)0xC23EAEC = 0xC;
                        }
                    }
                } else {
                    *(unsigned int *)0xC23EAEC = 0x7;
                }
                if ((*(int *)0xC52314C) == 0) {
                } else {
                    *(unsigned int *)0xC23EAEC = 0x2;
                }
            }
                break;
            case 10:
            {
                FUN_0c010f0a();
                if ((*(int *)0xC2498F4) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x0;
                }
            }
                break;
            case 12:
            {
                FUN_0c0159a2(t2782, 0xC23EB4E);
                if ((*(int *)0xC23EB1C) != 9) {
                } else {
                    t2887 = ((int (*)(int, int))(FUN_0c015436))((*(int *)0xC23EB20), 0x0);
                    *(unsigned int *)0xC23EAEC = 0x8;
                }
            }
                break;
            case 14:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146B);
                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2896 = *(int *)(((int)stk + 4));
                if (t2896 != 0) {
                    if (t2896 != 1) {
                    } else {
                        *(unsigned int *)0xC23EAEC = 0x0;
                    }
                } else {
                    FUN_0c0e631c(0xC23EB4E, 0xC1EF454, 0xD);
                    *(unsigned int *)0xC23EAEC = 0x6;
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x0;
                }
                if ((*(int *)0xC52314C) == 0) {
                } else {
                    *(unsigned int *)0xC23EAEC = 0x2;
                }
            }
                break;
            case 16:
            {
                FUN_0c015018(0xC23EB48);
                FUN_0c010c40(0x10);
            }
                break;
            case 18:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146C);
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2913 = *(int *)(((int)stk + 4));
                if (t2913 != 0) {
                    if (t2913 != 1) {
                    } else {
                        *(unsigned int *)0xC23EAEC = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC23EAEC = 0xA;
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x0;
                }
                if ((*(int *)0xC52314C) == 0) {
                } else {
                    *(unsigned int *)0xC23EAEC = 0x2;
                }
            }
                break;
            case 20:
            {
                FUN_0c0112b0((*(int *)0xC1EF574));
                t2926 = (FUN_0c0e631c(((*(int *)0xC23EB0C) + 0xD880), 0xC23EB48, 0x6));
                t2928 = 0x0;
                t2929 = a6;
                t2930 = a7;
                t2931 = 0xC0C465C;
                for (;;) {
                    if ((int)t2928 >= (int)0x6) {
                        break;
                    }
                    t2926 = 0xC23EB48;
                    t2930 = (*(signed char *)((t2928 + t2926)));
                    t2929 = (*(int *)0xC23EB0C);
                    t2930 = (unsigned char)t2930;
                    t2927 = 0xC0E5DC0;
                    t2929 = (t2929 + t2928);
                    t2929 = (t2929 + 0xD8B0);
                    t2926 = 0xF;
                    t2926 = (FUN_0c0e5dc0());
                    t2927 = 0xC0E5F1C;
                    t2930 = a7;
                    t2931 = t2926;
                    t2926 = a5;
                    t2926 = (FUN_0c0e5f1c());
                    t2931 = (t2931 << 2);
                    t2930 = t2926;
                    t2931 = (t2931 << 1);
                    t2927 = t2931;
                    t2931 = (t2931 << 2);
                    t2931 = (t2931 << 2);
                    t2931 = (t2931 - t2927);
                    t2931 = (t2931 + 0xC0F4664);
                    t2930 = (t2930 + t2931);
                    t2931 = 0x8;
                    for (;;) {
                        if (t2931 == 0) {
                            break;
                        }
                        t2936 = (*(signed char *)((t2930 + 0x0)));
                        t2931 = (t2931 - 1);
                        t2930 = (t2930 + 0xF);
                        *(unsigned char *)((a6 + 0x0)) = t2936;
                        t2929 = a6;
                        t2929 = (t2929 + 0x6);
                    }
                    t2928 = (a4 + 0x1);
                }
                FUN_0c010c0c();
                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
            }
                break;
            case 22:
            {
                if ((int)t2782 < 0) {
                    *(unsigned int *)0xC23EB20 = t2783;
                }
                t2941 = *(int *)0xC23EB1C;
                t2944 = 0xC0F4340;
                if (t2941 != 3) {
                    t2942 = 0xC0F4304;
                    if (t2941 != 10) {
                        t2942 = 0xC0F42E0;
                    }
                    t2944 = t2942;
                }
                FUN_0c0dcca0(t2944);
                FUN_0c010c14();
                FUN_0c0156ea((*(int *)0xC23EB20), (*(int *)0xC23EB0C), 0xDC00, 0x0);
                if ((*(int *)0xC23EB1C) == 9) {
                    FUN_0c0e2a4c((*(int *)0xC23EB08), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    FUN_0c0154a4();
                    FUN_0c010c40(0x5);
                }
            }
                break;
            default:
            {
                t2959 = *(int *)0xC23EB24;
                if (t2959 != 0xFFFFFF09) {
                    if (t2959 != 0xFFFFFF04) {
                        FUN_0c0dcca0(0xC0F42EC);
                        FUN_0c010e92();
                    } else {
                        FUN_0c010b04((*(int *)0xC1EEFC0), (*(float *)0xC01353C), (*(float *)0xC013538), (*(float *)0xC013534), (*(float *)0xC013530));
                        FUN_0c0dcca0(0xC0F42F8);
                        FUN_0c0c465c(0x1402);
                        if (((*(int *)0xC2498F4) & 8) != 0) {
                            FUN_0c0154a4();
                            FUN_0c010c40(0x5);
                        }
                    }
                } else {
                    FUN_0c010f0a();
                }
                if ((*(int *)0xC2498F4) != 0) {
                    *(unsigned int *)0xC23EAEC = 0x0;
                }
            }
                break;
        }
    }
    return (nlPopMatrix(0x1));
}

int kmRender(void)
{
    int t1;
    int t2;
    int t4;
    int t6;
    int t17;
    int t50;
    int t52;
    int t54;
    int t64;
    int t65;
    int t67;
    int t72;
    int t81;
    int t94;
    int t96;
    int t106;
    int t108;
    int t109;
    int t112;
    int t117;
    int t130;
    int t132;
    int t140;
    int t142;
    int t151;
    int t152;
    int t161;
    int t164;
    int t175;
    int t186;
    int t188;
    int t191;
    int t197;
    int t200;
    int t209;
    int t210;
    int t212;
    int t218;
    int t237;
    int t248;
    int t250;
    int stk[31];

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
    int T_;
    t1 = *(int *)0xC237534;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(int *)0xC237530);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t1;
    t2 = *(int *)0xC23753C;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = (*(int *)0xC237538);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = t2;
    t4 = *(int *)0xC237544;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x10)) = (*(int *)0xC237540);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x14)) = t4;
    t6 = *(int *)0xC23754C;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x18)) = (*(int *)0xC237548);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x1C)) = t6;
    if ((((*(int *)0xC952300) & 64) == 0)) goto L_C2198FC;
    if (((*(int *)0xC9527AC) == 0)) goto L_C2198FC;
    if (((*(int *)0xC9527B4) == 0)) goto L_C2198FC;
    if (((*(int *)0xC9524C0) == 0)) goto L_C2198FC;
    kmiSetOpaqueDummy();
    L_C2198FC:;
    t17 = *(int *)0xC952658;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x44);
    *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = (0xC95267C + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = (0xC95268C + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x4C) + 0x0)) = (0xC95269C + (t17 << 2));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x50);
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = (0xC9526AC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x0)) = (0xC9526BC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (0xC9526CC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (0xC9526DC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = (0xC9526EC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = (0xC9526FC + (t17 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x10)) = ((t17 << 2) + 0xC95270C);
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC952964) + 0x0)));
    *(unsigned int *)(((*(int *)(((((int)stk + 4) + 0x48) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC952964) + 0x4)));
    *(unsigned int *)(((*(int *)(((((int)stk + 4) + 0x4C) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC952964) + 0x8)));
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC952964) + 0xC)));
    *(unsigned int *)(((*(int *)(((((int)stk + 4) + 0x54) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC952964) + 0x10)));
    R10 = (0x1);
    R11 = (0x5);
    R12 = (0xC22FA7E);
    R13 = (0x0);
    R14 = ((((int)stk + 4) + 0x30));
    R4 = (0xC952964);
    R6 = ((((int)stk + 4) + 0x48));
    R7 = ((((int)stk + 4) + 0x54));
    R8 = (0xF0FFFFFF);
    R9 = (0xC952968);
    if (((*(int *)0xC952640) == 0)) goto L_C2199A0;
    if ((((*(int *)0xC95271C) & 32) != 0)) goto L_C219B4C;
    kmQueryFinishFlushVertexBuffer();
    *(unsigned int *)(((int)stk + 4)) = R13;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x10);
    L_C219D2E:;
    t50 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t50 << 2);
    t52 = *(int *)(((*(int *)((R9 + 0x0))) + (t50 << 2)));
    t54 = *(int *)(((*(int *)(((((int)stk + 4) + 0x44) + (t50 << 2)))) + 0x0));
    R1 = ((t52 - t54));
    R3 = ((*(int *)((R14 + (t50 << 2)))));
    if (((int)(t52 - t54) >= 0)) goto L_C219D4A;
    R1 = ((R1 + 0x3));
    L_C219D4A:;
    *(unsigned int *)((R3 + 0x0)) = (((R1 >> 1) >> 1) << 2);
    FUN_0c22fa7e((*(int *)(((*(int *)((R9 + 0x0))) + (*(int *)(((int)stk + 8)))))), 0xC237528, 0x4);
    t64 = *(int *)(((int)stk + 8));
    t65 = *(int *)((R9 + 0x0));
    *(unsigned int *)((t65 + t64)) = ((*(int *)((t65 + t64))) + 0x20);
    t67 = *(int *)(((int)stk + 4));
    R3 = (t67);
    if ((((((int)t67 >= 0) ? (R10 << (t67 & 31)) : ((-(int)t67 & 31) ? ((int)R10 >> (-(int)t67 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) != 0)) goto L_C219D7E;
    *(unsigned int *)(((*(int *)((R14 + (R3 << 2)))) + 0x0)) = R13;
    L_C219D7E:;
    t72 = *(int *)(((int)stk + 4));
    R3 = (t72);
    if ((((((int)t72 >= 0) ? (R10 << (t72 & 31)) : ((-(int)t72 & 31) ? ((int)R10 >> (-(int)t72 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219E28;
    *(unsigned int *)(((int)stk + 8)) = (R3 << 2);
    if (((unsigned int)(*(int *)(((*(int *)((R14 + (R3 << 2)))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 8))) + 0xC952830))))) goto L_C219DAC;
    t81 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t81 + 0xC952830)) = (*(int *)(((*(int *)((R14 + t81))) + 0x0)));
    L_C219DAC:;
    if (((unsigned int)(*(int *)(((*(int *)((R14 + (*(int *)(((int)stk + 8)))))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 8))) + 0xC9527C0))))) goto L_C219E28;
    R9 = (R13);
    L_C219DBE:;
    *(unsigned int *)(((int)stk + 4)) = (R9 << 2);
    R2 = ((R9 << 2));
    if ((((((int)R9 >= 0) ? (R10 << (R9 & 31)) : ((-(int)R9 & 31) ? ((int)R10 >> (-(int)R9 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219E12;
    t94 = *(int *)(((int)stk + 12));
    *(unsigned int *)((t94 + 0x0)) = (((*(int *)((t94 + 0x0))) & R8) | ((R9 << 16) << 8));
    t96 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t96 + (((int)stk + 4) + 0x44));
    FUN_0c22fa7e((*(int *)(((*(int *)(((t96 + (((int)stk + 4) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 4) + 0x10), 0x20);
    FUN_0c22fa7e(((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0))) + 0x20), 0xC237528, 0x4);
    *(unsigned int *)(((*(int *)((R14 + (*(int *)(((int)stk + 4)))))) + 0x0)) = 0x20;
    L_C219E18:;
    t106 = (int)(R9 + 0x1) < (int)R11;
    R9 = ((R9 + 0x1));
    if (t106) goto L_C219DBE;
    L_C219E1E:;
    t108 = ((int (*)(int, int, int, int))(kmiFatalErrorEntry))(0x2, R5, R6, R7);
    L_C219E36:;
    *(unsigned int *)0xC239AA0 = R13;
    t109 = *(int *)0xC239A9C;
    *(unsigned int *)0xC239A9C = ((t109 + 0x1) & 0x1);
    kmiFlipVertexBuffer(((t109 + 0x1) & 0x1));
    return 0x0;
    L_C219E12:;
    *(unsigned int *)(((*(int *)(((R2 + R14) + 0x0))) + 0x0)) = R13;
    goto L_C219E18;
    L_C219E28:;
    t112 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t112 + 0x1);
    if (((int)(t112 + 0x1) >= (int)R11)) goto L_C219E36;
    goto L_C219D2E;
    L_C219B4C:;
    *(unsigned int *)(((int)stk + 4)) = R13;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x10);
    L_C219B54:;
    if (((*(int *)(((int)stk + 4))) != (*(int *)0xC952720))) goto L_C219B62;
    L_C219C5E:;
    t117 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t117 + 0x1);
    if (((int)(t117 + 0x1) >= (int)R11)) goto L_C219C6C;
    goto L_C219B54;
    L_C219C6C:;
    if (((*(int *)((((*(int *)0xC952720) << 2) + (*(int *)((R9 + 0x0)))))) == (*(int *)(((*(int *)(((((*(int *)0xC952720) << 2) + (((int)stk + 4) + 0x44)) + 0x0))) + 0x0))))) goto L_C219C8E;
    goto L_C219E36;
    L_C219C8E:;
    *(unsigned int *)0xFF000038 = 0x10;
    *(unsigned int *)0xFF00003C = 0x10;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = ((R8 & (*(int *)(((((int)stk + 4) + 0x10) + 0x0)))) | ((((*(int *)0xC952720) & 0x7) << 16) << 8));
    t130 = *(int *)((((*(int *)0xC952720) << 2) + (*(int *)((R9 + 0x0)))));
    FUN_0c22fa7e(((t130 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x10), 0x20);
    _builtin_prefetch((void *)((t130 & 0x3FFFFFF) | 0xE0000000));
    goto L_C219E36;
    L_C219B62:;
    t132 = *(int *)(((int)stk + 4));
    R2 = (t132);
    if ((((((int)t132 >= 0) ? (R10 << (t132 & 31)) : ((-(int)t132 & 31) ? ((int)R10 >> (-(int)t132 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219C56;
    *(unsigned int *)(((int)stk + 12)) = (R2 << 2);
    *(unsigned int *)(((int)stk + 16)) = ((R2 << 2) + R14);
    t140 = *(int *)(((*(int *)((R9 + 0x0))) + (*(int *)(((int)stk + 12)))));
    t142 = *(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + (((int)stk + 4) + 0x44)))) + 0x0));
    R1 = ((*(int *)((((R2 << 2) + R14) + 0x0))));
    R2 = ((t140 - t142));
    if (((int)(t140 - t142) >= 0)) goto L_C219B92;
    R2 = ((R2 + 0x3));
    L_C219B92:;
    *(unsigned int *)((R1 + 0x0)) = (((R2 >> 1) >> 1) << 2);
    FUN_0c22fa7e((*(int *)(((*(int *)((R9 + 0x0))) + (*(int *)(((int)stk + 12)))))), 0xC237528, 0x4);
    t151 = *(int *)(((int)stk + 12));
    t152 = *(int *)((R9 + 0x0));
    *(unsigned int *)((t152 + t151)) = ((*(int *)((t152 + t151))) + 0x20);
    R0 = (0xC952830);
    if (((unsigned int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 12))) + 0xC952830))))) goto L_C219BD0;
    t161 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((R0 + (t161 << 2)) + 0x0)) = (*(int *)(((*(int *)((R14 + (t161 << 2)))) + 0x0)));
    L_C219BD0:;
    t164 = *(int *)(((int)stk + 4));
    R4 = ((t164 << 2));
    if (((unsigned int)(*(int *)(((*(int *)((R14 + (t164 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC9527C0 + (t164 << 2)))))) goto L_C219C5E;
    R10 = (R13);
    L_C219BE4:;
    if ((R10 == (*(int *)0xC952720))) goto L_C219C3E;
    if ((((((int)R10 >= 0) ? (0x1 << (R10 & 31)) : ((-(int)R10 & 31) ? ((int)0x1 >> (-(int)R10 & 31)) : ((int)0x1 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219C3E;
    t175 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t175 + 0x0)) = (((*(int *)((t175 + 0x0))) & R8) | ((R10 << 16) << 8));
    *(unsigned int *)(((int)stk + 4)) = (R10 << 2);
    *(unsigned int *)(((int)stk + 12)) = ((R10 << 2) + (((int)stk + 4) + 0x44));
    FUN_0c22fa7e((*(int *)(((*(int *)((((R10 << 2) + (((int)stk + 4) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 4) + 0x10), 0x20);
    FUN_0c22fa7e(((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0))) + 0x20), 0xC237528, 0x4);
    *(unsigned int *)(((*(int *)((R14 + (*(int *)(((int)stk + 4)))))) + 0x0)) = 0x20;
    L_C219C46:;
    t186 = (int)(R10 + 0x1) < (int)R11;
    R10 = ((R10 + 0x1));
    if (t186) goto L_C219BE4;
    t188 = ((int (*)(int, int, int, int))(kmiFatalErrorEntry))(0x2, R5, R6, R7);
    goto L_C219C6C;
    L_C219C3E:;
    *(unsigned int *)(((*(int *)((R14 + (R10 << 2)))) + 0x0)) = R13;
    goto L_C219C46;
    L_C219C56:;
    *(unsigned int *)(((*(int *)((R14 + (R2 << 2)))) + 0x0)) = R13;
    goto L_C219C5E;
    L_C2199A0:;
    *(unsigned int *)(((int)stk + 8)) = R13;
    L_C2199A2:;
    t191 = *(int *)(((int)stk + 8));
    R3 = (t191);
    if ((((((int)t191 >= 0) ? (R10 << (t191 & 31)) : ((-(int)t191 & 31) ? ((int)R10 >> (-(int)t191 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C2199EC;
    *(unsigned int *)(((int)stk + 4)) = (R3 << 2);
    t197 = *(int *)(((*(int *)((R9 + 0x0))) + (R3 << 2)));
    t200 = *(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + (((int)stk + 4) + 0x44)))) + 0x0));
    R1 = ((t197 - t200));
    R2 = ((*(int *)((R14 + (R3 << 2)))));
    if (((int)(t197 - t200) >= 0)) goto L_C2199CE;
    R1 = ((R1 + 0x3));
    L_C2199CE:;
    *(unsigned int *)((R2 + 0x0)) = (((R1 >> 1) >> 1) << 2);
    FUN_0c22fa7e((*(int *)(((*(int *)((R9 + 0x0))) + (*(int *)(((int)stk + 4)))))), 0xC237528, 0x4);
    t209 = *(int *)(((int)stk + 4));
    t210 = *(int *)((R9 + 0x0));
    *(unsigned int *)((t210 + t209)) = ((*(int *)((t210 + t209))) + 0x20);
    L_C2199EC:;
    t212 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t212 + 0x1);
    if (((int)(t212 + 0x1) < (int)R11)) goto L_C2199A2;
    R4 = (R13);
    L_C2199F8:;
    if ((((((int)R4 >= 0) ? (R10 << (R4 & 31)) : ((-(int)R4 & 31) ? ((int)R10 >> (-(int)R4 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) != 0)) goto L_C219A0C;
    *(unsigned int *)(((*(int *)((R14 + (R4 << 2)))) + 0x0)) = R13;
    L_C219A0C:;
    t218 = (int)(R4 + 0x1) < (int)R11;
    R4 = ((R4 + 0x1));
    if (t218) goto L_C2199F8;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x10);
    R4 = (R13);
    L_C219A1A:;
    if ((((((int)R4 >= 0) ? (R10 << (R4 & 31)) : ((-(int)R4 & 31) ? ((int)R10 >> (-(int)R4 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219AB4;
    if (((unsigned int)(*(int *)(((*(int *)((R14 + (R4 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC952830 + (R4 << 2)))))) goto L_C219A48;
    *(unsigned int *)(((0xC952830 + (R4 << 2)) + 0x0)) = (*(int *)(((*(int *)((R14 + (R4 << 2)))) + 0x0)));
    L_C219A48:;
    R5 = ((R4 << 2));
    if (((unsigned int)(*(int *)(((*(int *)((R14 + (R4 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC9527C0 + (R4 << 2)))))) goto L_C219AB4;
    R9 = (R13);
    L_C219A5C:;
    if ((((((int)R9 >= 0) ? (R10 << (R9 & 31)) : ((-(int)R9 & 31) ? ((int)R10 >> (-(int)R9 & 31)) : ((int)R10 >> 31))) & (*(int *)0xC952764)) == 0)) goto L_C219AAA;
    t237 = *(int *)(((int)stk + 4));
    *(unsigned int *)((t237 + 0x0)) = (((*(int *)((t237 + 0x0))) & R8) | ((R9 << 16) << 8));
    *(unsigned int *)(((int)stk + 12)) = (R9 << 2);
    *(unsigned int *)(((int)stk + 8)) = ((R9 << 2) + (((int)stk + 4) + 0x44));
    FUN_0c22fa7e((*(int *)(((*(int *)((((R9 << 2) + (((int)stk + 4) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 4) + 0x10), 0x20);
    FUN_0c22fa7e(((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0))) + 0x20), 0xC237528, 0x4);
    *(unsigned int *)(((*(int *)((R14 + (*(int *)(((int)stk + 12)))))) + 0x0)) = 0x20;
    L_C219AAA:;
    t248 = (int)(R9 + 0x1) < (int)R11;
    R9 = ((R9 + 0x1));
    if (t248) goto L_C219A5C;
    goto L_C219E1E;
    L_C219AB4:;
    t250 = (int)(R4 + 0x1) < (int)R11;
    R4 = ((R4 + 0x1));
    if (t250) goto L_C219A1A;
    goto L_C219E36;
}

int FUN_0c013c38(void)
{
    int t46;
    int t88;
    int t91;
    int t94;
    int t101;
    int t115;
    int t120;
    int t121;
    int t125;
    int t126;
    int t133;
    int t134;
    int t137;
    int t148;
    int t149;
    int t157;
    int t198;
    int t211;
    int t218;
    int stk[21];

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
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC522D6C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC522D70);
    *(unsigned int *)(((int)stk + 28)) = (*(int *)0xC522D74);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)0xC522D78);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC522D7C);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)0xC522D80);
    *(unsigned int *)0xC23A1A4 = (*(int *)0xC522D84);
    FUN_0c010c84();
    R10 = (0xC0C465C);
    R12 = (0xC23EACC);
    R13 = (0xC522A54);
    R14 = (0xC23EAC4);
    R8 = (0xC0DC510);
    R9 = (0xC2498F4);
    F12 = (-0.199999988f);
    F14 = (1.0f);
    F15 = (0.0f);
    if ((((*(int *)0xC2498F8) & 0xF0F0) == 0)) goto L_C013D2C;
    if ((((*(int *)((R9 + 0x0))) & 0x3030) != 0)) goto L_C013CA2;
    L_C013DB0:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    R11 = (0xC0F4420);
    L_C013E1E:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)0x3)) goto L_C013E14;
    R11 = (0x0);
    F13 = (0.25f);
    L_C013E58:;
    if (((unsigned int)R11 < (unsigned int)0xB)) goto L_C013E2E;
    FUN_0c0c465c((*(int *)((((*(int *)(((int)stk + 12))) << 2) + 0xC0F4458))));
    nlPushMatrix(0x0);
    if (((int)(*(int *)(((int)stk + 8))) >= (int)0x10)) goto L_C013E8A;
    FUN_0c0dcc70(F12, F15, F15);
    FUN_0c0110c6((*(int *)(((int)stk + 8))), 0x2);
    L_C013E90:;
    nlPopMatrix(0x1);
    FUN_0c0c465c((*(int *)((((*(int *)0xC23ECD8) << 2) + 0xC0F447C))));
    if (((int)(*(int *)((R12 + 0x0))) > 0)) goto L_C013EAC;
    *(unsigned int *)((R12 + 0x0)) = 0x1;
    L_C013EAC:;
    if (((int)(*(int *)((R12 + 0x0))) > (int)0x15)) goto L_C013EBE;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t46 = *(int *)((R12 + 0x0));
    *(unsigned int *)(((int)stk + 32)) = t46;
    R11 = (t46);
    L_C013F34:;
    if (((*(int *)((R14 + 0x0))) != 3)) goto L_C013F3E;
    F4 = (F14);
    L_C013F42:;
    FUN_0c0c475c((*(int *)((((*(int *)(((int)stk + 4))) << 2) + 0xC0F4484))), F4);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(-0.399999976f, -0.659999967f, F15);
    FUN_0c0110c6((*(int *)(((int)stk + 32))), 0x3);
    nlPopMatrix(0x1);
    FUN_0c0c465c((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0xC0F4474))));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(F12, -1.64999998f, F15);
    FUN_0c0110c6((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0xC1EF594))), 0x2);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(-0.399999976f, -1.9799999f, F15);
    FUN_0c0110c6((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0xC20BE68))), 0x3);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(F15, -0.98999995f, F15);
    FUN_0c0c465c((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0xC0F4474))));
    nlPopMatrix(0x1);
    if (((*(int *)((R13 + 0x334))) == 0)) goto L_C014000;
    nlPushMatrix(0x0);
    FUN_0c0c465c((*(int *)((((*(int *)0xC23A1A4) << 2) + 0xC0F446C))));
    nlPopMatrix(0x1);
    L_C014000:;
    nlPopMatrix(0x1);
    t88 = *(int *)((R9 + 0x0));
    R0 = (t88);
    if (((t88 & 4) == 0)) goto L_C014024;
    t91 = *(int *)((R14 + 0x0));
    R0 = (t91);
    if ((t91 == 3)) goto L_C014016;
    L_C0141AE:;
    return R0;
    L_C014016:;
    t94 = FUN_0c0cc3f8(R11, R5, R6, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)0xC23EAFC = 0x0;
    R0 = (t94);
    goto L_C0141AE;
    L_C014024:;
    if ((((*(int *)((R9 + 0x0))) & 0xC0C0) != 0)) goto L_C014030;
    goto L_C0141AE;
    L_C014030:;
    if ((((*(int *)((R9 + 0x0))) & 0x8080) == 0)) goto L_C014094;
    R4 = (0x1);
    L_C014096:;
    t101 = *(int *)((R14 + 0x0));
    R0 = (t101);
    if ((t101 == 0)) goto L_C0140C0;
    if ((R0 == 1)) goto L_C0140D4;
    if ((R0 == 2)) goto L_C0140F4;
    if ((R0 == 3)) goto L_C01412A;
    if ((R0 == 5)) goto L_C01413C;
    if ((R0 == 6)) goto L_C014164;
    if ((R0 == 7)) goto L_C014178;
    if ((R0 == 8)) goto L_C01418C;
    if ((R0 == 9)) goto L_C01419A;
    goto L_C0141AE;
    L_C01419A:;
    R0 = (0x334);
    if (((*(int *)((R13 + 0x334))) == 0)) goto L_C0141AE;
    t115 = *(int *)((R13 + 0x330));
    *(unsigned int *)(((0x330 + R13) + 0x0)) = (t115 ^ 0x1);
    R0 = ((t115 ^ 0x1));
    goto L_C0141AE;
    L_C01418C:;
    R0 = (((*(int *)((R13 + 0x32C))) ^ 0x1));
    R1 = (0x32C);
    L_C014194:;
    *(unsigned int *)(((R1 + R13) + 0x0)) = R0;
    goto L_C0141AE;
    L_C014178:;
    t120 = *(int *)(((int)stk + 16));
    t121 = (int)(R4 + t120) < 0;
    R4 = ((R4 + t120));
    if (t121) goto L_C0141AE;
    if (((int)R4 >= (int)0x5)) goto L_C0141AE;
    *(unsigned int *)((R13 + 0x328)) = R4;
    R0 = (0x328);
    goto L_C0141AE;
    L_C014164:;
    t125 = *(int *)(((int)stk + 20));
    t126 = (int)(R4 + t125) < 0;
    R4 = ((R4 + t125));
    if (t126) goto L_C0141AE;
    if (((unsigned int)R4 >= (unsigned int)0x3)) goto L_C0141AE;
    *(unsigned int *)((R13 + 0x324)) = R4;
    R0 = (0x324);
    goto L_C0141AE;
    L_C01413C:;
    R0 = (((*(int *)((R13 + 0x320))) ^ 0x1));
    R1 = (0x320);
    goto L_C014194;
    L_C01412A:;
    t133 = *(int *)((R12 + 0x0));
    t134 = (int)(R4 + t133) <= 0;
    R4 = ((R4 + t133));
    if (t134) goto L_C0141AE;
    if (((int)R4 > (int)0x149)) goto L_C0141AE;
    *(unsigned int *)((R12 + 0x0)) = R4;
    goto L_C0141AE;
    L_C0140F4:;
    t137 = *(int *)0xC23ECD8;
    *(unsigned int *)0xC23ECD8 = (t137 ^ 0x1);
    if (((t137 ^ 0x1) != 0)) goto L_C014106;
    L_C01410A:;
    return FUN_0c0e40ec(0x8, R5, R6);
    L_C014106:;
    goto L_C01410A;
    L_C0140D4:;
    R4 = ((R4 + (*(int *)(((int)stk + 8)))));
    if (((*(signed char *)0xC1EF2D5) != 0)) goto L_C0140E4;
    R5 = (0xF);
    L_C0140E6:;
    if (((int)R4 <= 0)) goto L_C0141AE;
    if (((int)R4 > (int)R5)) goto L_C0141AE;
    *(unsigned int *)((R13 + 0x31C)) = R4;
    R0 = (0x31C);
    goto L_C0141AE;
    L_C0140E4:;
    R5 = (0x10);
    goto L_C0140E6;
    L_C0140C0:;
    t148 = *(int *)(((int)stk + 12));
    t149 = (int)(R4 + t148) < 0;
    R4 = ((R4 + t148));
    if (t149) goto L_C0141AE;
    if (((unsigned int)R4 >= (unsigned int)0x5)) goto L_C0141AE;
    *(unsigned int *)((R13 + 0x318)) = R4;
    R0 = (0x318);
    goto L_C0141AE;
    L_C014094:;
    R4 = (0xFFFFFFFF);
    goto L_C014096;
    L_C013F3E:;
    F4 = (0.5f);
    goto L_C013F42;
    L_C013EBE:;
    if (((int)(*(int *)((R12 + 0x0))) > (int)0x12E)) goto L_C013ED4;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    t157 = *(int *)((R12 + 0x0));
    *(unsigned int *)(((int)stk + 32)) = (t157 - 21);
    R11 = (t157);
    goto L_C013F34;
    L_C013ED4:;
    if (((int)(*(int *)((R12 + 0x0))) > (int)0x13A)) goto L_C013F1C;
    *(unsigned int *)(((int)stk + 4)) = 0x2;
    R1 = (0x2CA9);
    R11 = ((((*(int *)((R12 + 0x0))) - 303) << 16));
    L_C013F2A:;
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)((R12 + 0x0))) - 302);
    R11 = ((R11 | R1));
    goto L_C013F34;
    L_C013F1C:;
    *(unsigned int *)(((int)stk + 4)) = 0x2;
    R1 = (0x2DA9);
    R11 = ((((*(int *)((R12 + 0x0))) - 315) << 16));
    goto L_C013F2A;
    L_C013E8A:;
    FUN_0c0c465c(0x13CD);
    goto L_C013E90;
    L_C013E2E:;
    if (((*(int *)((R14 + 0x0))) != R11)) goto L_C013E38;
    F4 = (F14);
    L_C013E3A:;
    if (((*(int *)((R13 + 0x334))) != 0)) goto L_C013E4A;
    if ((R11 == 9)) goto L_C013E56;
    L_C013E4A:;
    FUN_0c0c475c((*(int *)(((R11 << 2) + 0xC0F442C))), F4);
    L_C013E56:;
    R11 = ((R11 + 0x1));
    goto L_C013E58;
    L_C013E38:;
    F4 = (F13);
    goto L_C013E3A;
    L_C013E14:;
    FUN_0c0c465c((*(int *)((R11 + 0x0))));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    R11 = ((R11 + 0x4));
    goto L_C013E1E;
    L_C013CA2:;
    R4 = (0x2020);
    R5 = (0xA);
    L_C013CA6:;
    if ((((*(int *)((R9 + 0x0))) & R4) == 0)) goto L_C013D0C;
    if (((unsigned int)(*(int *)((R14 + 0x0))) >= (unsigned int)R5)) goto L_C013D18;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    L_C013D18:;
    if (((*(int *)((R13 + 0x334))) != 0)) goto L_C013DB0;
    if (((*(int *)0xC23EAC4) == 9)) goto L_C013CA6;
    goto L_C013DB0;
    L_C013D0C:;
    if (((int)(*(int *)((R14 + 0x0))) <= 0)) goto L_C013D18;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) - 1);
    goto L_C013D18;
    L_C013D2C:;
    t198 = *(int *)((R9 + 0x0));
    R0 = (t198);
    if (((t198 & 12) == 0)) goto L_C013DA6;
    if (((*(int *)((R14 + 0x0))) == 10)) goto L_C013D40;
    if ((((*(int *)0xC2498F4) & 8) == 0)) goto L_C013D96;
    L_C013D40:;
    if (((*(int *)0xC23ECD8) != 0)) goto L_C013D4C;
    R4 = (0x0);
    L_C013D4E:;
    syCfgSetSoundMode(R4, R5, R6);
    FUN_0c0c4e78((*(int *)0xC23A1A4));
    t211 = *(int *)0xC23EB38;
    R4 = (t211);
    if (((int)t211 < 0)) goto L_C013D90;
    *(unsigned int *)0xC23EB20 = R4;
    FUN_0c0cec9a(R4, R5, R6, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    *(unsigned int *)0xC23EB34 = 0x0;
    R11 = (0xC23EB20);
    L_C013D72:;
    t218 = (buStat((*(int *)((R11 + 0x0))))) != 0;
    if (t218) goto L_C013D72;
    L_C013D7C:;
    FUN_0c015d04(R4, R5, R6);
    if (((*(int *)0xC23EB34) != 9)) goto L_C013D7C;
    FUN_0c0154a4();
    L_C013D90:;
    *(unsigned int *)0xC23A260 = 0x3;
    L_C013D96:;
    if (((*(int *)((R14 + 0x0))) != 4)) goto L_C013DB0;
    FUN_0c010c40(0xB);
    goto L_C013DB0;
    L_C013D4C:;
    R4 = (0x1);
    goto L_C013D4E;
    L_C013DA6:;
    if (((R0 & 2) == 0)) goto L_C013DB0;
    FUN_0c0cc6dc();
    goto L_C013DB0;
}
