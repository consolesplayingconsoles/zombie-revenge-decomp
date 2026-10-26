/* Straight-line functions with calls and guards (batch gen_eq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c016dfe(int, int);
int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c01fd30(int);
int FUN_0c02d6a8(int);
int FUN_0c03542e(int);
int FUN_0c049c0a(int);
int FUN_0c051a48(int);
int FUN_0c082ce0(int);
int FUN_0c08696c(int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0bd788(int, int, int, int);
int FUN_0c0bd958(int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int, Stk3);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int nlGetMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
void FUN_0c04ed20(int a4, int a5);
float FUN_0c06f3f6(int a4, int a5);
void FUN_0c07f06c(int a4, int a5, int a6, int a7);
int FUN_0c02d710(int a4);
void syIntInit(int a4, int a5);
float FUN_0c0bdd2c(int a4, int a5, int a6);
int FUN_0c020ea6(int a4, int a5);
int FUN_0c090a38(int a4);
int FUN_0c020c80(int a4, int a5);
void FUN_0c0500ee(int a4, int a5, int a6, int a7, float f4);

void FUN_0c04ed20(int a4, int a5)
{
    int t8;
    int t11;
    int t17;
    int t35;
    int t39;
    int t54;
    int t61;
    int t72;
    int t76;
    int t80;
    int t96;
    int t100;
    int t115;
    int t118;
    int t128;
    int t131;
    int t137;
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
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04ED20:;
    R10 = (0x0);
    R14 = (R4);
    R8 = (0x0);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C04ED46;
    goto L_C04ED42;
    L_C04ED42:;
    goto L_C04F128;
    L_C04F128:;
    return;
    L_C04ED46:;
    R0 = (0x394);
    if (((*(int *)((R14 + 0x394))) == 0)) goto L_C04ED52;
    goto L_C04ED4E;
    L_C04ED4E:;
    goto L_C04F128;
    L_C04ED52:;
    t8 = *(int *)((R5 + 0x0));
    R0 = (t8);
    if (((t8 & 0x602) != 0)) goto L_C04ED5E;
    goto L_C04ED5A;
    L_C04ED5A:;
    goto L_C04F128;
    L_C04ED5E:;
    t11 = *(int *)((R14 + 0x20C));
    R0 = (0x20C);
    R4 = (t11);
    if (((0x5 & t11) != 0)) goto L_C04ED6C;
    goto L_C04ED68;
    L_C04ED68:;
    goto L_C04F128;
    L_C04ED6C:;
    if (((0xC9800 & R4) == 0)) goto L_C04ED76;
    goto L_C04ED72;
    L_C04ED72:;
    goto L_C04F128;
    L_C04ED76:;
    t17 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    R0 = (t17);
    R11 = (0xC23ED5C);
    R13 = (0x1);
    R4 = (0x50);
    if ((t17 == 3)) goto L_C04ED8E;
    goto L_C04ED86;
    L_C04ED86:;
    if ((R0 == 2)) goto L_C04EDF4;
    goto L_C04ED8A;
    L_C04ED8A:;
    goto L_C04EE28;
    L_C04EE28:;
    R0 = (R10);
    R4 = (0x100000);
    R5 = (0xC246FF0);
    R6 = (0xFFFFFBFF);
    R7 = (0xC1FE210);
    R9 = (0xFFFFFFFF);
    if ((R10 == 1)) goto L_C04EE4A;
    goto L_C04EE3A;
    L_C04EE3A:;
    if ((R0 == 2)) goto L_C04EF24;
    goto L_C04EE3E;
    L_C04EE3E:;
    if ((R0 != 3)) goto L_C04EE46;
    goto L_C04EE42;
    L_C04EE42:;
    goto L_C04EFD4;
    L_C04EFD4:;
    *(unsigned int *)((R14 + 0x20C)) = R4;
    *(unsigned int *)((R14 + 0x210)) = 0x67;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x40);
    t35 = *(int *)(((R5 + 0x40) + ((((*(int *)((R14 + 0xBC))) + 0x1) & 0x1) << 2)));
    R0 = (t35);
    if ((t35 != 4)) goto L_C04F060;
    goto L_C04EFF8;
    L_C04EFF8:;
    t39 = *(int *)(((((0x1 & ((*(int *)((R14 + 0xBC))) + 0x1)) << 2) + R5) + 0x0));
    *(unsigned int *)((t39 + 0x1B0)) = R9;
    *(unsigned int *)((t39 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + t39) + 0x0))) << 1) + ((((*(int *)((t39 + 0xC0))) >> 1) * 0x2C) + R7))));
    *(unsigned int *)((t39 + 0x2CC)) = 0x1;
    *(unsigned int *)((t39 + 0x0)) = 0xC04F558;
    R0 = (0x20C);
    R4 = (t39);
    if ((((*(int *)((t39 + 0x20C))) & 0x40000) == 0)) goto L_C04F060;
    goto L_C04F040;
    L_C04F040:;
    *(unsigned int *)(((*(int *)(((((*(int *)((R4 + 0xCC))) << 2) + R5) + 0x0))) + 0xD0)) = R9;
    *(unsigned int *)((R4 + 0x39C)) = ((*(int *)((R4 + 0x39C))) & R6);
    *(unsigned int *)((R4 + 0x20C)) = R13;
    R0 = ((FUN_0c051a48(R4)));
    goto L_C04F060;
    L_C04F060:;
    if ((R10 == 0)) goto L_C04F128;
    goto L_C04F064;
    L_C04F064:;
    *(unsigned int *)(((((*(int *)(((int)stk + 4))) << 2) << 1) + 0xC23EE14)) = R13;
    t54 = *(int *)((R12 + 0x4C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + R14)) = *(struct mv3 *)(t54); }
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (*(short *)((t54 + 0xC)));
    *(unsigned int *)0xC23ED94 = (*(short *)((t54 + 0xE)));
    *(unsigned int *)0xC23ED8C = (*(short *)((t54 + 0x10)));
    *(unsigned int *)0xC23ED90 = (*(short *)((t54 + 0x12)));
    *(unsigned int *)((R14 + 0x3CC)) = (*(int *)((t54 + 0x14)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x60)) = *(struct mv3 *)((t54 + 0x18)); }
    *(unsigned int *)((R14 + 0x3D0)) = (*(int *)(((t54 + 0x18) + 0x14)));
    t61 = *(int *)((R12 + 0x28));
    *(unsigned int *)((R14 + 0x3B4)) = t61;
    *(unsigned int *)((R14 + 0x3B0)) = t61;
    *(unsigned short *)((R14 + 0x6E)) = (*(int *)((R12 + 0xC)));
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x394)) = R13;
    *(unsigned int *)((R14 + 0x1B0)) = R9;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) & 0xFFFFFFF5);
    FUN_0c08696c(R14);
    *(unsigned int *)((R14 + 0x3AC)) = R8;
    *(float *)((R14 + 0x258)) = (((*(float *)((R12 + 0x1C))) - (*(float *)((R14 + 0x30)))) / (float)(*(int *)((R14 + 0x3B4))));
    *(float *)((R14 + 0x260)) = (((*(float *)((R12 + 0x24))) - (*(float *)((R14 + 0x38)))) / (float)(*(int *)((R14 + 0x3B4))));
    *(unsigned int *)((0xC2475A4 + ((*(int *)((R14 + 0xBC))) << 2))) = R13;
    t72 = *(int *)((R14 + 0xBC));
    *(unsigned int *)((0xC2475A4 + (((t72 + 0x1) & R13) << 2))) = R8;
    R0 = ((((t72 + 0x1) & R13) << 2));
    goto L_C04F128;
    L_C04EE46:;
    goto L_C04F060;
    L_C04EF24:;
    *(unsigned int *)((R14 + 0x20C)) = R4;
    *(unsigned int *)((R14 + 0x210)) = 0x65;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x40);
    t76 = *(int *)(((R5 + 0x40) + ((((*(int *)((R14 + 0xBC))) + 0x1) & 0x1) << 2)));
    R0 = (t76);
    if ((t76 == 4)) goto L_C04EF4C;
    goto L_C04EF48;
    L_C04EF48:;
    goto L_C04F060;
    L_C04EF4C:;
    t80 = *(int *)(((((0x1 & ((*(int *)((R14 + 0xBC))) + 0x1)) << 2) + R5) + 0x0));
    *(unsigned int *)((t80 + 0x1B0)) = R9;
    *(unsigned int *)((t80 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + t80) + 0x0))) << 1) + ((((*(int *)((t80 + 0xC0))) >> 1) * 0x2C) + R7))));
    *(unsigned int *)((t80 + 0x2CC)) = 0x1;
    *(unsigned int *)((t80 + 0x0)) = 0xC04F74C;
    R0 = (0x20C);
    R4 = (t80);
    if ((((*(int *)((t80 + 0x20C))) & 0x40000) == 0)) goto L_C04F060;
    goto L_C04EF94;
    L_C04EF94:;
    *(unsigned int *)(((*(int *)(((((*(int *)((R4 + 0xCC))) << 2) + R5) + 0x0))) + 0xD0)) = R9;
    *(unsigned int *)((R4 + 0x39C)) = ((*(int *)((R4 + 0x39C))) & R6);
    *(unsigned int *)((R4 + 0x20C)) = R13;
    R0 = ((FUN_0c051a48(R4)));
    goto L_C04F060;
    L_C04EE4A:;
    *(unsigned int *)((R14 + 0x20C)) = R4;
    *(unsigned int *)((R14 + 0x210)) = 0x85;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x10);
    *(unsigned int *)0xC247D04 = R13;
    *(unsigned short *)0xC247CBC = (*(short *)((R14 + 0xBC)));
    t96 = *(int *)(((R5 + 0x40) + ((((*(int *)((R14 + 0xBC))) + 0x1) & R13) << 2)));
    R0 = (t96);
    if ((t96 == 4)) goto L_C04EE7C;
    goto L_C04EE78;
    L_C04EE78:;
    goto L_C04F060;
    L_C04EE7C:;
    t100 = *(int *)(((((0x1 & ((*(int *)((R14 + 0xBC))) + 0x1)) << 2) + R5) + 0x0));
    *(unsigned int *)((t100 + 0x1B0)) = R9;
    *(unsigned int *)(((0x2C4 + t100) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + t100) + 0x0))) << 1) + ((((*(int *)((t100 + 0xC0))) >> 1) * 0x2C) + R7))));
    *(unsigned int *)((t100 + 0x2CC)) = 0x1;
    R0 = (0x20C);
    R4 = (t100);
    if ((((*(int *)((t100 + 0x20C))) & 0x40000) != 0)) goto L_C04EEC6;
    goto L_C04EEC2;
    L_C04EEC2:;
    goto L_C04F060;
    L_C04EEC6:;
    *(unsigned int *)(((*(int *)(((((*(int *)((R4 + 0xCC))) << 2) + R5) + 0x0))) + 0xD0)) = R9;
    *(unsigned int *)((R4 + 0x39C)) = ((*(int *)((R4 + 0x39C))) & R6);
    *(unsigned int *)((R4 + 0x20C)) = R13;
    R0 = ((FUN_0c051a48(R4)));
    goto L_C04F060;
    L_C04EDF4:;
    if (((R4 & (*(int *)((R11 + 0x0)))) != 0)) goto L_C04EE28;
    goto L_C04EDFA;
    L_C04EDFA:;
    t115 = FUN_0c016dfe(R14, ((int)stk + 4));
    R12 = (t115);
    if ((t115 == 0)) goto L_C04EE28;
    goto L_C04EE08;
    L_C04EE08:;
    t118 = *(int *)((R12 + 0x18));
    R0 = ((t118 & 0xFFFFFF7F));
    if (((t118 & 0xFFFFFF7F) == 0)) goto L_C04EE22;
    goto L_C04EE12;
    L_C04EE12:;
    if ((R0 == 1)) goto L_C04EE22;
    goto L_C04EE16;
    L_C04EE16:;
    if ((R0 == 4)) goto L_C04EE26;
    goto L_C04EE1A;
    L_C04EE1A:;
    if ((R0 == 5)) goto L_C04EE26;
    goto L_C04EE1E;
    L_C04EE1E:;
    goto L_C04EE28;
    L_C04EE26:;
    R10 = (0x3);
    goto L_C04EE28;
    L_C04EE22:;
    R10 = (R13);
    goto L_C04EE28;
    L_C04ED8E:;
    if (((R4 & (*(int *)((R11 + 0x0)))) != 0)) goto L_C04EE28;
    goto L_C04ED94;
    L_C04ED94:;
    t128 = FUN_0c016dfe(R14, ((int)stk + 4));
    R12 = (t128);
    if ((t128 == 0)) goto L_C04EE28;
    goto L_C04EDA2;
    L_C04EDA2:;
    t131 = *(int *)((R12 + 0x18));
    R0 = ((t131 & 0xFFFFFF7F));
    if (((t131 & 0xFFFFFF7F) == 2)) goto L_C04EDBC;
    goto L_C04EDAC;
    L_C04EDAC:;
    if ((R0 == 3)) goto L_C04EDBC;
    goto L_C04EDB0;
    L_C04EDB0:;
    if ((R0 == 0)) goto L_C04EDC0;
    goto L_C04EDB4;
    L_C04EDB4:;
    if ((R0 == 1)) goto L_C04EDC0;
    goto L_C04EDB8;
    L_C04EDB8:;
    goto L_C04EE28;
    L_C04EDC0:;
    t137 = *(int *)((R11 + 0x0));
    R4 = (t137);
    if (((0x400 & t137) == 0)) goto L_C04EE28;
    goto L_C04EDC8;
    L_C04EDC8:;
    if (((0x800 & R4) == 0)) goto L_C04EE28;
    goto L_C04EDCE;
    L_C04EDCE:;
    R10 = (R13);
    goto L_C04EE28;
    L_C04EDBC:;
    R10 = (0x2);
    goto L_C04EE28;
}

float FUN_0c06f3f6(int a4, int a5)
{
    int t1;
    int t2;
    float u11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u17;
    int t21;
    int t41;
    float t45;
    float u16;
    int stk[10];

    t1 = *(int *)0xC247C64;
    t2 = *(int *)((((0xFFFFF22A + (*(short *)((a5 + 0x12)))) << 2) + 0xC2003E0));
    FUN_0c0e19d0(a4);
    *(unsigned int *)((a4 + 0x21C)) = a5;
    *(unsigned short *)((a4 + 0x222)) = (*(short *)((t2 + 0x68)));
    *(float *)((a4 + 0x228)) = (*(float *)((t2 + 0x0)));
    *(float *)((a4 + 0x23C)) = (*(float *)((t1 + 0x40)));
    *(float *)((a4 + 0x240)) = (*(float *)((t1 + 0x44)));
    *(float *)((a4 + 0x2A8)) = (*(float *)((t1 + 0x48)));
    *(float *)((a4 + 0x2AC)) = (*(float *)((t1 + 0x4C)));
    *(float *)((a4 + 0x2B0)) = (*(float *)((t1 + 0x50)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x244 + a4)) = *(struct mv3 *)((t2 + 0x4)); }
    u11 = *(float *)((t2 + 0x10));
    *(float *)((a4 + 0x250)) = u11;
    *(unsigned int *)((a4 + 0x224)) = 0x4;
    t12 = (0x244 + a4);
    t13 = (t2 + 0x4);
    t14 = 0x0;
    t15 = a5;
    u17 = u11;
    for (;;) {
        if ((int)t14 >= (int)(*(int *)((a4 + 0x224)))) {
            break;
        }
        t15 = t14;
        t12 = 0x254;
        t15 = (t15 << 2);
        t13 = t2;
        t15 = (t15 + t14);
        t13 = (t13 + 0x14);
        t15 = (t15 << 2);
        t12 = (t12 + a4);
        t13 = (t13 + t15);
        t12 = (t12 + t15);
        { struct mv5 { int w[5]; }; *(struct mv5 *)(t12) = *(struct mv5 *)(t13); }
        t12 = 0x228;
        t13 = t2;
        t13 = (t13 + 0x14);
        t12 = (t12 + a4);
        u17 = (*(float *)((t12 + 0x0)));
        t12 = 0x10;
        t15 = (t15 + t13);
        t12 = (t12 + t15);
        u16 = (*(float *)((t12 + 0x0)));
        u16 = (u16 * u17);
        t21 = ((t14 << 2) + (0x22C + a4));
        t14 = (t14 + 0x1);
        *(float *)((t21 + 0x0)) = u16;
    }
    *(float *)((a4 + 0x2A4)) = (*(float *)((t2 + 0x64)));
    *(float *)((a4 + 0x2B4)) = -0.163333312f;
    if ((*(short *)((a5 + 0x34))) != 0) {
        *(float *)((a4 + 0x2B4)) = ((*(float *)((a4 + 0x2B4))) * 0.25f);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x2F8 + a4)) = *(struct mv3 *)((a5 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x308 + a4)) = *(struct mv3 *)((a5 + 0x20)); }
    *(unsigned int *)((a4 + 0x3D4)) = (*(int *)((a5 + 0x30)));
    *(unsigned int *)((a4 + 0xBC)) = 0x10;
    FUN_0c0dc5a0();
    FUN_0c0dcca0(a5);
    nlRotateAZ((*(short *)((a5 + 0x10))));
    nlRotateAY((*(short *)((a5 + 0xE))));
    nlRotateAX((*(short *)((a5 + 0xC))));
    nlGetMatrix((0x2B8 + a4));
    FUN_0c0db470((0x244 + a4), (0x318 + a4));
    t41 = 0x0;
    for (;;) {
        if ((int)t41 >= (int)(*(int *)((a4 + 0x224)))) {
            break;
        }
        FUN_0c0db470(((((t41 << 2) + t41) << 2) + (0x254 + a4)), ((((t41 << 1) + t41) << 2) + (0x324 + a4)));
        t41 = (t41 + 0x1);
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x318 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t45 = FUN_0c01f1b8(a5, ((int)stk + 4));
    *(float *)((a4 + 0xB4)) = t45;
    *(unsigned int *)((a4 + 0xC0)) = 0xB4;
    if (((*(short *)((a5 + 0x34))) & 1) == 0) {
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | 0xF);
    }
    if (((*(short *)((a5 + 0x34))) & 2) == 0) {
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | 0xFF0);
    }
    if (((*(short *)((a5 + 0x34))) & 4) == 0) {
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | 0xFF000);
    }
    if ((*(short *)((a5 + 0x36))) != 0) {
        *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFFFB0;
        if ((*(float *)((a4 + 0xB4))) > -100.0f) {
            *(float *)((a4 + 0x2A4)) = ((*(float *)((a4 + 0x2A4))) + (*(float *)(((0xB4 + a4) + 0x0))));
        }
    } else {
        *(unsigned int *)((a4 + 0x3DC)) = 0x0;
    }
    return t45;
}

void FUN_0c07f06c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t12;
    int t24;
    int t44;
    int t45;
    int t100;
    int t192;

    t0 = *(int *)0xC247D04;
    if (t0 == 0) {
    } else {
        if ((0xFFFF0000 & t0) != 0) {
            if ((t0 & 0x20000) != 0) {
                t1 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t1);
                *(unsigned int *)((t1 + 0x30)) = 0x14;
                *(float *)((t1 + 0x34)) = 1.0f;
                *(unsigned int *)((t1 + 0x3C)) = 0x3FFF;
                *(unsigned int *)((t1 + 0x40)) = 0x3FFF;
                *(unsigned int *)((t1 + 0x44)) = 0x333;
                *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) & 0xFFFDFFFF);
            }
            if (((*(int *)0xC247D04) & 0x10000) != 0) {
                t12 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t12);
                *(unsigned int *)((t12 + 0x30)) = 0x14;
                *(float *)((t12 + 0x34)) = 3.0f;
                *(unsigned int *)((t12 + 0x3C)) = 0x471C;
                *(unsigned int *)((t12 + 0x40)) = 0x3FFF;
                *(unsigned int *)((t12 + 0x44)) = 0x333;
                *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) & 0xFFFEFFFF);
            }
            if (((*(int *)0xC247D04) & 0x40000) != 0) {
                t24 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t24);
                *(unsigned int *)((t24 + 0x30)) = 0x23;
                *(float *)((t24 + 0x34)) = 6.0f;
                *(unsigned int *)((t24 + 0x3C)) = 0x4B4B;
                *(unsigned int *)((t24 + 0x40)) = 0x3FFF;
                *(unsigned int *)((t24 + 0x44)) = 0x1D4;
                *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) & 0xFFFBFFFF);
            }
        }
        t44 = *(int *)0xC247D04;
        t45 = *(int *)0xC247CFC;
        if (t44 != 1) {
            if (t44 != 2) {
                if (t44 != 3) {
                    if (t44 == 4) {
                        if ((int)t45 < (int)0xA) {
                            *(unsigned int *)0xC247CFC = 0xD;
                            FUN_0c082ce0(0xC102904);
                        }
                    } else {
                        if (t44 == 5) {
                            if ((int)t45 < (int)0xA) {
                                *(unsigned int *)0xC247CFC = 0xD;
                                FUN_0c082ce0(0xC102914);
                            }
                        } else {
                            if (t44 == 6) {
                                *(unsigned int *)0xC247CFC = 0xC;
                                FUN_0c082ce0(0xC102940);
                            } else {
                                if (t44 == 7) {
                                    if ((int)t45 < (int)0xA) {
                                        *(unsigned int *)0xC247CFC = 0xD;
                                        FUN_0c082ce0((*(int *)0xC247CD0));
                                    }
                                } else {
                                    if (t44 == 8) {
                                        *(unsigned int *)0xC247CFC = 0xC;
                                        FUN_0c082ce0((*(int *)0xC247CD0));
                                    } else {
                                        if (t44 != 9) {
                                            if (t44 == 10) {
                                                if (t45 != 13) {
                                                    if (t45 == 12) {
                                                        *(unsigned int *)0xC247DAC = 0xFFFF;
                                                    }
                                                } else {
                                                    *(unsigned int *)0xC247DAC = 0xFFFF;
                                                }
                                            }
                                        } else {
                                            *(unsigned int *)0xC247CFC = (unsigned char)(*(signed char *)0xC247CBB);
                                            t100 = *(short *)0xC247CBC;
                                            if ((t100 != 1) && (t100 != 2)) {
                                                if (t100 != 3) {
                                                } else {
                                                    *(unsigned int *)0xC247D70 = ((*(int *)0xC247D70) + 0x20);
                                                }
                                            } else {
                                                *(unsigned int *)((a4 + 0x3F4)) = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 24) != 0) {
                        if (t45 != 8) {
                            *(unsigned int *)0xC247CFC = 0x8;
                            *(unsigned int *)((a4 + 0x3BC)) = (unsigned char)(*(signed char *)0xC247CB8);
                            *(unsigned int *)((a4 + 0x3C0)) = (*(int *)(((*(int *)((((*(int *)((a4 + 0x3BC))) << 2) + 0xC246FF0))) + 0xCC)));
                            *(unsigned int *)(((0x3C4 + a4) + 0x0)) = (*(short *)0xC247CBC);
                        }
                    }
                }
            } else {
                *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x20);
                if (((*(int *)((a4 + 0x250))) & 64) != 0) {
                } else {
                    t192 = FUN_0c0e1830(0xC082176, 0x38);
                    FUN_0c0e19d0(t192);
                    *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x40);
                }
            }
        } else {
            if (t45 == 11) {
            } else {
                *(unsigned int *)0xC247CFC = 0xB;
                *(unsigned int *)(((0x3B4 + a4) + 0x0)) = (*(short *)0xC247CBC);
                *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFD556;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC247CD4) = *(struct mv3 *)((0x254 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC247CE0) = *(struct mv3 *)((0x278 + a4)); }
        *(float *)0xC247CEC = (*(float *)((a4 + 0x29C)));
        *(unsigned int *)0xC247CF4 = (*(int *)((a4 + 0x3D8)));
        *(unsigned int *)0xC247CF0 = (*(int *)((a4 + 0x3D4)));
        *(unsigned int *)0xC247D04 = 0x0;
    }
}

int FUN_0c02d710(int a4)
{
    int t74;
    int t75;
    int t76;
    int t103;
    int t78;
    int t79;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        return 0x474;
    }
    if (((*(int *)((a4 + 0x534))) & 0x2) != 0) {
        return 0x534;
    }
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)((a4 + 0x60)); }
    *(float *)((a4 + 0x60)) = ((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x3C))));
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x34))) - (*(float *)((a4 + 0x40))));
    *(float *)((a4 + 0x68)) = ((*(float *)((a4 + 0x38))) - (*(float *)((a4 + 0x44))));
    if ((*(int *)((a4 + 0x4C4))) == 2) {
        if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 0.199999988f))) {
            *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0x4C4))) != 2) {
        if ((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 0.199999988f)) {
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
        }
    }
    if (0.0f > (*(float *)((a4 + 0x58)))) {
        if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 0.199999988f))) {
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * 0.599999964f);
            *(float *)((a4 + 0x4C)) = (-((*(float *)((a4 + 0x58))) * 0.25f));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * 0.599999964f);
        } else {
            if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 0.199999988f))) {
                *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * 0.599999964f);
                *(float *)((a4 + 0x4C)) = (*(float *)((a4 + 0x64)));
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * 0.599999964f);
            } else {
                *(float *)((a4 + 0x48)) = (*(float *)((a4 + 0x60)));
                *(float *)((a4 + 0x4C)) = (*(float *)((a4 + 0x64)));
                *(float *)((a4 + 0x50)) = (*(float *)((a4 + 0x68)));
            }
        }
    } else {
        if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 0.199999988f))) {
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * 0.599999964f);
            *(float *)((a4 + 0x4C)) = (*(float *)((a4 + 0x64)));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * 0.599999964f);
        } else {
            *(float *)((a4 + 0x48)) = (*(float *)((a4 + 0x60)));
            *(float *)((a4 + 0x4C)) = (*(float *)((a4 + 0x64)));
            *(float *)((a4 + 0x50)) = (*(float *)((a4 + 0x68)));
        }
    }
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x4B0 + a4) + 0x0))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x4B4 + a4) + 0x0))));
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x4B8 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - -0.5f);
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    *(float *)((a4 + 0x54)) = 0.0f;
    *(float *)((a4 + 0x58)) = 0.0f;
    *(float *)((a4 + 0x5C)) = 0.0f;
    t74 = *(int *)((a4 + 0x488));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t74 + 0x3C)) = *(struct mv3 *)((t74 + 0x30)); }
    t75 = *(int *)((t74 + 0xBC));
    t76 = *(int *)((t74 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t74 + 0x30)) = *(struct mv3 *)((((((((t75 << 1) + t75) << 2) << 2) << 2) + 0xC23F268) + (((t76 << 1) + t76) << 2))); }
    if (((*(int *)((a4 + 0x4C8))) != 2) && ((t78 = *(int *)((a4 + 0x49C)), t78 == 1) && (t79 = *(int *)((a4 + 0x4D0)), t79 == 0))) {
        if ((*(int *)((t74 + 0x248))) != 0) {
            FUN_0c02d6a8(a4);
            *(unsigned int *)((t74 + 0x22C)) = 0x0;
            *(unsigned int *)((t74 + 0x248)) = 0x0;
        }
        if ((*(int *)((t74 + 0xD8))) != 0) {
            if ((*(int *)((t74 + 0xD8))) == 2) {
                FUN_0c090f70(t74);
            } else {
                FUN_0c0909fc(t74);
            }
            *(unsigned int *)((t74 + 0xD8)) = 0x0;
            *(unsigned int *)((t74 + 0x22C)) = 0x78;
            return 0x22C;
        }
        if ((int)(*(int *)((t74 + 0x22C))) > 0) {
            t103 = *(int *)((t74 + 0x22C));
            *(unsigned int *)((t74 + 0x22C)) = (t103 - 1);
            if ((int)(t103 - 1) <= 0) {
                return FUN_0c02d6a8(a4);
            }
            return 0x22C;
        }
        return FUN_0c01cdc2(t74);
    }
    *(unsigned int *)((t74 + 0x248)) = 0x1;
    return 0x248;
}

void syIntInit(int a4, int a5)
{
    int t0;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t18;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t27;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t43;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xFF00001C = ((*(int *)0xFF00001C) | 0x800);
    if (a4 == 0x80000000) {
        *(unsigned int *)0xC22FC24 = 0xC22FE20;
        *(unsigned int *)0xC22FC80 = 0xC22FE20;
        *(unsigned int *)0xC22FFCC = 0x0;
        *(unsigned int *)0xC22FFC4 = a5;
    } else {
        *(unsigned int *)0xC22FC24 = 0xC22FCB4;
        *(unsigned int *)0xC22FC80 = 0xC22FCB4;
        *(unsigned int *)0xC22FFCC = 0x0;
        *(unsigned int *)0xC22FFC4 = 0x0;
    }
    t5 = 0xC22FFCC;
    t6 = 0xC22FC84;
    t7 = ((int)_builtin_get_vbr());
    for (;;) {
        if ((unsigned int)t6 > (unsigned int)0xC22FCB4) {
            break;
        }
        t5 = (*(int *)((t6 + 0x0)));
        t6 = (t6 + 0x4);
        *(unsigned int *)((t7 + 0x0)) = t5;
        t7 = (t7 + 0x4);
    }
    t9 = (int)_builtin_get_vbr();
    t11 = ((int)_builtin_get_vbr());
    t12 = (((unsigned int)((unsigned int)((unsigned int)(t7 - t9) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t11);
        t12 = (t12 - 0x1);
        t11 = (t11 + 0x20);
        if (t12 == 0) {
            break;
        }
    }
    t14 = t5;
    t15 = 0xC22FBF0;
    t16 = (((int)_builtin_get_vbr()) + 0x100);
    for (;;) {
        if ((unsigned int)t15 > (unsigned int)0xC22FC28) {
            break;
        }
        t14 = (*(int *)((t15 + 0x0)));
        t15 = (t15 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t14;
        t16 = (t16 + 0x4);
    }
    t18 = (int)_builtin_get_vbr();
    t20 = (((int)_builtin_get_vbr()) + 0x400);
    t21 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t16 - t18)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t20);
        t21 = (t21 - 0x1);
        t20 = (t20 + 0x20);
        if (t21 == 0) {
            break;
        }
    }
    t23 = t14;
    t24 = 0xC22FBF0;
    t25 = (((int)_builtin_get_vbr()) + 0x400);
    for (;;) {
        if ((unsigned int)t24 > (unsigned int)0xC22FC28) {
            break;
        }
        t23 = (*(int *)((t24 + 0x0)));
        t24 = (t24 + 0x4);
        *(unsigned int *)((t25 + 0x0)) = t23;
        t25 = (t25 + 0x4);
    }
    t27 = (int)_builtin_get_vbr();
    t29 = (((int)_builtin_get_vbr()) + 0x1000);
    t30 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t25 - t27)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t29);
        t30 = (t30 - 0x1);
        t29 = (t29 + 0x20);
        if (t30 == 0) {
            break;
        }
    }
    t32 = t23;
    t33 = 0xC22FC28;
    t34 = (((int)_builtin_get_vbr()) + 0x600);
    for (;;) {
        if ((unsigned int)t33 > (unsigned int)0xC22FC84) {
            break;
        }
        t32 = (*(int *)((t33 + 0x0)));
        t33 = (t33 + 0x4);
        *(unsigned int *)((t34 + 0x0)) = t32;
        t34 = (t34 + 0x4);
    }
    t36 = (int)_builtin_get_vbr();
    t38 = (((int)_builtin_get_vbr()) + 0x1800);
    t39 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t34 - t36)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t38);
        t39 = (t39 - 0x1);
        t38 = (t38 + 0x20);
        if (t39 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t40 = 0xFFFFFE40;
    for (;;) {
        t43 = (((int)_builtin_get_vbr()) + (((t40 >> 1) >> 1) >> 1));
        t40 = (t40 + 0x20);
        *(unsigned int *)(((t43 + 0x200) + 0x0)) = 0xC22FAF8;
        if ((int)t40 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}

float FUN_0c0bdd2c(int a4, int a5, int a6)
{
    int t1;
    int t8;
    int t15;
    int t16;
    int t23;
    int t25;
    int t35;
    int t39;
    int t44;
    int t51;
    int t56;
    int t57;
    int t62;
    int t66;
    int t72;
    int t80;
    int stk[28];

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
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0BDD2C:;
    *(unsigned int *)(((int)stk + 20)) = R4;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned short *)((R6 + 0xE)) = ((*(short *)((R6 + 0xE))) + 0x1);
    t1 = *(short *)((R6 + 0xC));
    R0 = (t1);
    R14 = (R5);
    R8 = (R6);
    if ((t1 == 0)) goto L_C0BDD5C;
    goto L_C0BDD58;
    L_C0BDD58:;
    goto L_C0BDEAC;
    L_C0BDEAC:;
    return F0;
    L_C0BDD5C:;
    *(unsigned int *)(((int)stk + 8)) = (((R14 << 1) + R14) << 2);
    t8 = *(int *)((((((unsigned int)(*(int *)((((((R14 << 1) + R14) << 2) + 0xC24FB50) + 0x4))) >> 2) - 1) << 2) + (*(int *)((0xC2623A0 + (((R14 << 1) + R14) << 2))))));
    *(unsigned int *)(((int)stk + 24)) = (FUN_0c0e262a(((((t8 << 1) + t8) << 2) << 2)));
    FUN_0c0bd958(R14, (((int)stk + 4) + 0x3C));
    *(unsigned short *)((R8 + 0x8)) = R14;
    R12 = ((((int)stk + 4) + 0x3C));
    R9 = (0xC0E2A4C);
    F15 = ((*(float *)0xC0BDF68));
    goto L_C0BDE1E;
    L_C0BDE1E:;
    t15 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (t15 + 0x2);
    t16 = *(short *)((((t15 + 0x2) - 2) + 0x0));
    R14 = (t16);
    if ((t16 != 0)) goto L_C0BDDA6;
    goto L_C0BDE2C;
    L_C0BDE2C:;
    FUN_0c0e2a4c((*(int *)(((int)stk + 24))), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    *(unsigned short *)((R8 + 0xC)) = (*(int *)(((int)stk + 4)));
    t23 = FUN_0c0e262a(((*(int *)(((int)stk + 4))) * 0x2C));
    *(unsigned int *)((R8 + 0x0)) = t23;
    t25 = FUN_0c0e262a(((*(int *)(((int)stk + 12))) << 2));
    R0 = (t25);
    R14 = (t23);
    R4 = ((*(int *)((R12 + 0x0))));
    R6 = (t25);
    R7 = ((*(int *)((R12 + 0x8))));
    goto L_C0BDE52;
    L_C0BDE52:;
    if (((*(int *)((R4 + 0x24))) == 0)) goto L_C0BDE94;
    goto L_C0BDE58;
    L_C0BDE58:;
    t35 = *(int *)((R4 + 0x2C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R14) = *(struct mv3 *)(R4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)((R4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x18)) = *(struct mv3 *)((R4 + 0x18)); }
    *(unsigned int *)((R14 + 0x24)) = (*(int *)((R4 + 0x28)));
    *(unsigned int *)((R14 + 0x28)) = R6;
    R5 = (t35);
    goto L_C0BDE86;
    L_C0BDE86:;
    *(unsigned int *)((R6 + 0x0)) = (*(int *)((R5 + 0x0)));
    t39 = *(int *)((R5 + 0x4));
    R5 = (t39);
    R6 = ((R6 + 0x4));
    if ((t39 != 0)) goto L_C0BDE86;
    goto L_C0BDE92;
    L_C0BDE92:;
    R14 = ((R14 + 0x2C));
    goto L_C0BDE94;
    L_C0BDE94:;
    t44 = (R7 - 0x1) != 0;
    R4 = ((R4 + 0x30));
    R7 = ((R7 - 0x1));
    if (t44) goto L_C0BDE52;
    goto L_C0BDE9A;
    L_C0BDE9A:;
    FUN_0c0e2a4c((*(int *)((R12 + 0x0))), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((R12 + 0x4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    t51 = *(short *)((R8 + 0xA));
    *(unsigned int *)((R8 + 0x4)) = (*(int *)((0xC1960B8 + (t51 << 2))));
    R0 = ((t51 << 2));
    goto L_C0BDEAC;
    L_C0BDDA6:;
    FUN_0c0bd788((short)R14, (((int)stk + 4) + 0x24), R6, R7);
    t56 = *(int *)(((((int)stk + 4) + 0x24) + 0x4));
    t57 = *(int *)(((((int)stk + 4) + 0x24) + 0x0));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 4) + 0x24) + 0x8)));
    R10 = (t57);
    R11 = (t56);
    R13 = ((((int)stk + 4) + 0x24));
    goto L_C0BDDB8;
    L_C0BDDB8:;
    t62 = *(int *)((R12 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((R12 + 0x8)));
    R14 = (t62);
    goto L_C0BDDBE;
    L_C0BDDBE:;
    FUN_0c0db470(R14, (((int)stk + 4) + 0x18));
    t66 = (nlLength((((int)stk + 4) + 0x18), R10)) > F15;
    if (t66) goto L_C0BDDFC;
    goto L_C0BDDD6;
    L_C0BDDD6:;
    if (((*(int *)((R14 + 0x24))) != 0)) goto L_C0BDE08;
    goto L_C0BDDDC;
    L_C0BDDDC:;
    *(unsigned int *)((R14 + 0x24)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)(R11); }
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)((R14 + 0x28))));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0BDE08;
    L_C0BDE08:;
    t72 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t72 - 1);
    R10 = ((R10 + 0xC));
    R11 = ((R11 + 0xC));
    if (((t72 - 1) != 0)) goto L_C0BDDB8;
    goto L_C0BDE16;
    L_C0BDE16:;
    FUN_0c0e2a4c((*(int *)((R13 + 0x0))), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((R13 + 0x4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    goto L_C0BDE1E;
    L_C0BDDFC:;
    t80 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t80 - 1);
    R14 = ((R14 + 0x30));
    if (((t80 - 1) != 0)) goto L_C0BDDBE;
    goto L_C0BDE08;
}

int FUN_0c020ea6(int a4, int a5)
{
    int t0;
    int t3;

    t0 = FUN_0c0e1830(0xC020540, 0x5EC);
    FUN_0c0e19d0(t0);
    t3 = 0xC1EFCA8;
    if ((*(int *)0xC23ED50) == 58) {
        t3 = 0xC1EFD00;
    }
    *(unsigned int *)((t0 + 0xBC)) = a4;
    *(unsigned int *)((t0 + 0x48C)) = 0x1E;
    *(unsigned int *)((t0 + 0x4BC)) = (*(int *)((t3 + 0x24)));
    *(unsigned int *)((t0 + 0x4C0)) = (*(int *)((t3 + 0x28)));
    *(unsigned int *)((t0 + 0xC8)) = (*(int *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x4)));
    *(unsigned int *)(((0x304 + t0) + 0x0)) = (unsigned short)(*(short *)((t3 + 0xE)));
    *(unsigned int *)(((0x308 + t0) + 0x0)) = (unsigned short)(*(short *)((t3 + 0xE)));
    *(float *)((t0 + 0x274)) = ((float)(unsigned short)(*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x278)) = ((float)(unsigned short)(*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x27C)) = ((float)(unsigned short)(*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t0 + 0x284)) = ((float)(unsigned short)(*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(unsigned int *)(((0x4F0 + t0) + 0x0)) = (unsigned short)(*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x8)));
    *(unsigned int *)((t0 + 0x47C)) = (*(int *)((t3 + 0x4)));
    *(unsigned int *)((t0 + 0x4A8)) = (*(int *)0xC23ED50);
    *(unsigned int *)((t0 + 0x4AC)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((a5 + 0x30)); }
    *(float *)((t0 + 0x34)) = ((*(float *)((t0 + 0x34))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
    *(unsigned short *)((t0 + 0x6E)) = (*(short *)((a5 + 0x6E)));
    *(unsigned int *)((t0 + 0xC0)) = (*(short *)((((((*(int *)((t3 + 0x0))) << 2) << 2) + 0xC1F958C) + 0x0)));
    *(unsigned int *)((t0 + 0xC4)) = 0x0;
    *(float *)(((0x45C + t0) + 0x8)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x4)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x0)) = 1.0f;
    *(unsigned int *)((t0 + 0x5C4)) = (*(int *)(((0xC1F958C + (((*(int *)((t3 + 0x0))) << 2) << 2)) + 0xC)));
    *(unsigned int *)((t0 + 0x4)) = 0xC01FDDC;
    FUN_0c03542e(t0);
    *(unsigned int *)(((0xC246FF0 + (a4 << 2)) + 0x0)) = t0;
    *(unsigned int *)((((a4 << 2) + 0xC246FF0) + 0x0)) = t0;
    FUN_0c01fd30(t0);
    return FUN_0c049c0a(t0);
}

int FUN_0c090a38(int a4)
{
    int t6;
    float u8;
    float u9;
    int t11;
    int t13;
    int t16;
    float u18;
    float u20;
    int t21;
    float u23;
    float u25;
    int t26;
    float u28;
    float u30;
    int stk[20];

    *(float *)(((((int)stk + 8) + 0xC) + 0x0)) = (((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x3C)))) * 0.0899999961f);
    *(float *)(((((int)stk + 8) + 0xC) + 0x4)) = (((*(float *)((a4 + 0x34))) - (*(float *)((a4 + 0x40)))) * 0.0899999961f);
    *(float *)(((((int)stk + 8) + 0xC) + 0x8)) = (((*(float *)((a4 + 0x38))) - (*(float *)((a4 + 0x44)))) * 0.0899999961f);
    t6 = *(int *)((a4 + 0x1C4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((((((t6 << 1) + t6) << 2) << 2) << 2) + 0xC23F274)); }
    u8 = *(float *)((a4 + 0x30));
    *(float *)((((int)stk + 8) + 0x0)) = ((u8 - u8) + (*(float *)((((int)stk + 8) + 0x0))));
    u9 = *(float *)((a4 + 0x38));
    *(float *)((((int)stk + 8) + 0x8)) = ((u9 - u9) + (*(float *)((((int)stk + 8) + 0x8))));
    t11 = 0x14;
    for (;;) {
        t13 = FUN_0c0e19aa(0xC0914A4, 0xB4, (*(int *)0xC23ECF0), *(Stk3 *)(((int)stk + 8)));
        FUN_0c0e19d0(t13);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x30)) = *(struct mv3 *)(((int)stk + 8)); }
        *(float *)((t13 + 0x74)) = 1.0f;
        *(unsigned int *)((t13 + 0x78)) = 0x293;
        *(unsigned int *)(((0xA0 + t13) + 0x0)) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        t16 = FUN_0c0da2e0();
        *(float *)(((int)stk + 4)) = (float)(t16 & 0xF);
        u18 = 0.149999991f;
        u18 = u18 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u20 = (u18 * (*(float *)(((((int)stk + 8) + 0xC) + 0x0))));
        u20 = u20 + 0.0399999991f * (float)(t16 & 0xF);
        *(float *)((t13 + 0x48)) = (u20 + -0.299999982f);
        t21 = FUN_0c0da2e0();
        *(float *)(((int)stk + 4)) = (float)(t21 & 0xF);
        u23 = 0.149999991f;
        u23 = u23 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u25 = (u23 * (*(float *)(((((int)stk + 8) + 0xC) + 0x4))));
        u25 = u25 + 0.0399999991f * (float)(t21 & 0xF);
        *(float *)((t13 + 0x4C)) = (u25 + -0.399999976f);
        t26 = FUN_0c0da2e0();
        *(float *)(((int)stk + 4)) = (float)(t26 & 0xF);
        t11 = (t11 - 0x1);
        u28 = 0.149999991f;
        u28 = u28 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u30 = (u28 * (*(float *)(((((int)stk + 8) + 0xC) + 0x8))));
        u30 = u30 + 0.0399999991f * (float)(t26 & 0xF);
        *(float *)((t13 + 0x50)) = (u30 + -0.299999982f);
        if (t11 == 0) {
            break;
        }
    }
    return 0x50;
}

int FUN_0c020c80(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)((a5 + 0xC0));
    t1 = FUN_0c0e1830(0xC020AA4, 0x5EC);
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = a4;
    *(unsigned int *)((t1 + 0x48C)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0)));
    *(unsigned int *)((t1 + 0x4BC)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x24)));
    *(unsigned int *)((t1 + 0x4C0)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x28)));
    *(unsigned int *)((t1 + 0xC8)) = (*(int *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x4)));
    *(unsigned int *)(((0x304 + t1) + 0x0)) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    *(unsigned int *)(((0x308 + t1) + 0x0)) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    *(float *)((t1 + 0x274)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x278)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x27C)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x284)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(unsigned int *)(((0x4F0 + t1) + 0x0)) = (unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x8)));
    *(unsigned int *)((t1 + 0x47C)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x4)));
    *(unsigned int *)((t1 + 0x4A8)) = (*(int *)0xC23ED50);
    *(unsigned int *)((t1 + 0x4AC)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a5 + 0x30)); }
    *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a5 + 0x6E)));
    *(unsigned int *)((t1 + 0xC0)) = (*(int *)((a5 + 0xC0)));
    *(unsigned int *)((t1 + 0xC4)) = (*(int *)((a5 + 0xC4)));
    *(unsigned int *)((t1 + 0x2A0)) = (*(int *)((a5 + 0x2A0)));
    *(float *)((t1 + 0x45C)) = (*(float *)((a5 + 0x45C)));
    *(float *)((t1 + 0x460)) = (*(float *)((a5 + 0x460)));
    *(float *)((t1 + 0x464)) = (*(float *)((a5 + 0x464)));
    *(unsigned int *)((t1 + 0x5C4)) = (*(int *)(((0xC1F958C + (((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2)) + 0xC)));
    *(unsigned int *)((t1 + 0x494)) = (*(int *)((a5 + 0xBC)));
    *(unsigned int *)((t1 + 0x4)) = 0xC01FDDC;
    FUN_0c03542e(t1);
    *(unsigned int *)(((0xC246FF0 + (a4 << 2)) + 0x0)) = t1;
    *(unsigned int *)((((a4 << 2) + 0xC246FF0) + 0x0)) = t1;
    FUN_0c01fd30(t1);
    return FUN_0c049c0a(t1);
}

void FUN_0c0500ee(int a4, int a5, int a6, int a7, float f4)
{
    int t2;
    int t3;
    int t9;
    int t12;
    float u23;
    float u24;
    int t36;
    float u25;
    float u26;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t78;
    int t72;
    float u34;
    float u61;
    float u62;
    float u63;
    int t76;
    int t74;

    if (((*(int *)0xC23A258) & 31) == 0) {
        t2 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        t3 = *(int *)0xC247070;
        if ((int)t3 > (int)0x1) {
            if ((*(int *)0xC247030) != 4) {
            } else {
                if ((*(int *)0xC247034) == 4) {
                    t9 = *(int *)0xC246FF0;
                    t12 = *(int *)0xC246FF4;
                    if (((*(float *)(((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1)) + 0x4))) - (*(float *)((t9 + 0x34)))) > 80.0f) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                    }
                    if (((*(float *)(((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1)) + 0x4))) - (*(float *)((t12 + 0x34)))) > 80.0f) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                    }
                    u23 = *(float *)((t9 + 0x30));
                    u24 = *(float *)((t12 + 0x30));
                    t36 = 0;
                    if (!(_builtin_fabsf((u23 - u24)) > 200.0f)) {
                        u25 = *(float *)((t9 + 0x38));
                        u26 = *(float *)((t12 + 0x38));
                        if (_builtin_fabsf((u25 - u26)) > 200.0f) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                        }
                        u34 = _builtin_fabsf((u25 - u26));
                        t36 = ((_builtin_fabsf((u25 - u26)) > 200.0f));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1))); }
                        u34 = _builtin_fabsf((u23 - u24));
                        t36 = (1);
                    }
                }
            }
        } else {
            t55 = t3;
            t56 = 0xC23ECFC;
            t57 = 0x1;
            t58 = 0x0;
            t59 = 0x0;
            t60 = 0x0;
            for (;;) {
                t78 = t57;
                if ((*(int *)((t58 + 0xC247030))) == 4) {
                    t59 = 0xC246FF0;
                    t59 = (t59 + t60);
                    t59 = (*(int *)((t59 + 0x0)));
                    u63 = (*(float *)((t59 + 0x34)));
                    u62 = (*(float *)(((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1)) + 0x4)));
                    u62 = (u62 - u63);
                    if (!(u62 > 80.0f)) {
                        u62 = (*(float *)(((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1)) + 0x0)));
                        u63 = (*(float *)((t59 + 0x30)));
                        u62 = (u62 - u63);
                        u63 = 200.0f;
                        u62 = _builtin_fabsf(u62);
                        if (!(u62 > u63)) {
                            u62 = (*(float *)((t59 + 0x38)));
                            u61 = (*(float *)(((0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1)) + 0x8)));
                            u61 = (u61 - u62);
                            u61 = _builtin_fabsf(u61);
                            t72 = t57;
                            if (u61 > u63) {
                                t57 = 0xC0E61D4;
                                t55 = t59;
                                t56 = (0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1));
                                t55 = (t55 + 0x30);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t55) = *(struct mv3 *)(t56); }
                                t72 = 0xC0E61D4;
                            }
                            t74 = t72;
                        } else {
                            t55 = t59;
                            t56 = (0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1));
                            t55 = (t55 + 0x30);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t55) = *(struct mv3 *)(t56); }
                            t74 = 0xC0E61D4;
                        }
                        t76 = t74;
                    } else {
                        t55 = t59;
                        t56 = (0xC205CB8 + ((((t2 << 1) + t2) << 2) << 1));
                        t55 = (t55 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t55) = *(struct mv3 *)(t56); }
                        t76 = 0xC0E61D4;
                    }
                    t78 = t76;
                }
                t57 = t78;
                t58 = (t58 + 0x4);
                t60 = (t60 + 0x4);
                if ((unsigned int)t58 >= (unsigned int)0x8) {
                    break;
                }
            }
        }
    }
}
