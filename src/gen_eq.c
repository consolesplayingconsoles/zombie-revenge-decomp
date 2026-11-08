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
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbp)
struct o10_float { char p[0x10]; float v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o222_ushort { char p[0x222]; unsigned short v; };
struct o224_int { char p[0x224]; int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_float { char p[0x23C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o240_float { char p[0x240]; float v; };
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o250_float { char p[0x250]; float v; };
struct o250_int { char p[0x250]; int v; };
struct o250_uint { char p[0x250]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o29C_float { char p[0x29C]; float v; };
struct o2A4_float { char p[0x2A4]; float v; };
struct o2A8_float { char p[0x2A8]; float v; };
struct o2AC_float { char p[0x2AC]; float v; };
struct o2B0_float { char p[0x2B0]; float v; };
struct o2B4_float { char p[0x2B4]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o340_int { char p[0x340]; int v; };
struct o36_short { char p[0x36]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3BC_int { char p[0x3BC]; int v; };
struct o3BC_uint { char p[0x3BC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C0_uint { char p[0x3C0]; unsigned int v; };
struct o3C4_uint { char p[0x3C4]; unsigned int v; };
struct o3CC_uint { char p[0x3CC]; unsigned int v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3DC_uint { char p[0x3DC]; unsigned int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o474_uint { char p[0x474]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o488_int { char p[0x488]; int v; };
struct o49C_int { char p[0x49C]; int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o534_int { char p[0x534]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o68_short { char p[0x68]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_short { char p[0xBC]; short v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


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
void FUN_0c0500ee(void);

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
    if ((((((struct o394_int *)(R14))->v)) == 0)) goto L_C04ED52;
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
    t11 = (((struct o20C_int *)(R14))->v);
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
    (((struct o20C_uint *)(R14))->v) = R4;
    (((struct o210_uint *)(R14))->v) = 0x67;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x40);
    t35 = *(int *)(((R5 + 0x40) + (((((((struct oBC_int *)(R14))->v)) + 0x1) & 0x1) << 2)));
    R0 = (t35);
    if ((t35 != 4)) goto L_C04F060;
    goto L_C04EFF8;
    L_C04EFF8:;
    t39 = *(int *)(((((0x1 & (((((struct oBC_int *)(R14))->v)) + 0x1)) << 2) + R5) + 0x0));
    (((struct o1B0_uint *)(t39))->v) = R9;
    (((struct o2C4_uint *)(t39))->v) = (unsigned short)(*(short *)(((((((struct o340_int *)(t39))->v)) << 1) + (((((((struct oC0_int *)(t39))->v)) >> 1) * 0x2C) + R7))));
    (((struct o2CC_uint *)(t39))->v) = 0x1;
    *(unsigned int *)((t39 + 0x0)) = 0xC04F558;
    R0 = (0x20C);
    R4 = (t39);
    if (((((((struct o20C_int *)(t39))->v)) & 0x40000) == 0)) goto L_C04F060;
    goto L_C04F040;
    L_C04F040:;
    (((struct oD0_uint *)((*(int *)((((((((struct oCC_int *)(R4))->v)) << 2) + R5) + 0x0)))))->v) = R9;
    (((struct o39C_uint *)(R4))->v) = (((((struct o39C_int *)(R4))->v)) & R6);
    (((struct o20C_uint *)(R4))->v) = R13;
    R0 = ((FUN_0c051a48(R4)));
    goto L_C04F060;
    L_C04F060:;
    if ((R10 == 0)) goto L_C04F128;
    goto L_C04F064;
    L_C04F064:;
    *(unsigned int *)(((((*(int *)(((int)stk + 4))) << 2) << 1) + 0xC23EE14)) = R13;
    t54 = (((struct o4C_int *)(R12))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + R14)) = *(struct mv3 *)(t54); }
    (((struct o2C4_uint *)(R14))->v) = (*(short *)((t54 + 0xC)));
    (((struct o8_uint *)0xC23ED8C)->v) = (*(short *)((t54 + 0xE)));
    (((struct o0_uint *)0xC23ED8C)->v) = (*(short *)((t54 + 0x10)));
    (((struct o4_uint *)0xC23ED8C)->v) = (*(short *)((t54 + 0x12)));
    (((struct o3CC_uint *)(R14))->v) = (*(int *)((t54 + 0x14)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x60)) = *(struct mv3 *)((t54 + 0x18)); }
    (((struct o3D0_uint *)(R14))->v) = (*(int *)(((t54 + 0x18) + 0x14)));
    t61 = *(int *)((R12 + 0x28));
    (((struct o3B4_uint *)(R14))->v) = t61;
    (((struct o3B0_uint *)(R14))->v) = t61;
    (((struct o6E_ushort *)(R14))->v) = (*(int *)((R12 + 0xC)));
    (((struct o2CC_uint *)(R14))->v) = R13;
    (((struct o394_uint *)(R14))->v) = R13;
    (((struct o1B0_uint *)(R14))->v) = R9;
    (((struct oA4_uint *)(R14))->v) = (((((struct oA4_int *)(R14))->v)) & 0xFFFFFFF5);
    FUN_0c08696c(R14);
    (((struct o3AC_uint *)(R14))->v) = R8;
    (((struct o258_float *)(R14))->v) = ((((((struct o1C_float *)(R12))->v)) - ((((struct o30_float *)(R14))->v))) / (float)((((struct o3B4_int *)(R14))->v)));
    (((struct o260_float *)(R14))->v) = ((((((struct o24_float *)(R12))->v)) - ((((struct o38_float *)(R14))->v))) / (float)((((struct o3B4_int *)(R14))->v)));
    *(unsigned int *)((0xC2475A4 + (((((struct oBC_int *)(R14))->v)) << 2))) = R13;
    t72 = (((struct oBC_int *)(R14))->v);
    *(unsigned int *)((0xC2475A4 + (((t72 + 0x1) & R13) << 2))) = R8;
    R0 = ((((t72 + 0x1) & R13) << 2));
    goto L_C04F128;
    L_C04EE46:;
    goto L_C04F060;
    L_C04EF24:;
    (((struct o20C_uint *)(R14))->v) = R4;
    (((struct o210_uint *)(R14))->v) = 0x65;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x40);
    t76 = *(int *)(((R5 + 0x40) + (((((((struct oBC_int *)(R14))->v)) + 0x1) & 0x1) << 2)));
    R0 = (t76);
    if ((t76 == 4)) goto L_C04EF4C;
    goto L_C04EF48;
    L_C04EF48:;
    goto L_C04F060;
    L_C04EF4C:;
    t80 = *(int *)(((((0x1 & (((((struct oBC_int *)(R14))->v)) + 0x1)) << 2) + R5) + 0x0));
    (((struct o1B0_uint *)(t80))->v) = R9;
    (((struct o2C4_uint *)(t80))->v) = (unsigned short)(*(short *)(((((((struct o340_int *)(t80))->v)) << 1) + (((((((struct oC0_int *)(t80))->v)) >> 1) * 0x2C) + R7))));
    (((struct o2CC_uint *)(t80))->v) = 0x1;
    *(unsigned int *)((t80 + 0x0)) = 0xC04F74C;
    R0 = (0x20C);
    R4 = (t80);
    if (((((((struct o20C_int *)(t80))->v)) & 0x40000) == 0)) goto L_C04F060;
    goto L_C04EF94;
    L_C04EF94:;
    (((struct oD0_uint *)((*(int *)((((((((struct oCC_int *)(R4))->v)) << 2) + R5) + 0x0)))))->v) = R9;
    (((struct o39C_uint *)(R4))->v) = (((((struct o39C_int *)(R4))->v)) & R6);
    (((struct o20C_uint *)(R4))->v) = R13;
    R0 = ((FUN_0c051a48(R4)));
    goto L_C04F060;
    L_C04EE4A:;
    (((struct o20C_uint *)(R14))->v) = R4;
    (((struct o210_uint *)(R14))->v) = 0x85;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) | 0x10);
    *(unsigned int *)0xC247D04 = R13;
    *(unsigned short *)0xC247CBC = ((((struct oBC_short *)(R14))->v));
    t96 = *(int *)(((R5 + 0x40) + (((((((struct oBC_int *)(R14))->v)) + 0x1) & R13) << 2)));
    R0 = (t96);
    if ((t96 == 4)) goto L_C04EE7C;
    goto L_C04EE78;
    L_C04EE78:;
    goto L_C04F060;
    L_C04EE7C:;
    t100 = *(int *)(((((0x1 & (((((struct oBC_int *)(R14))->v)) + 0x1)) << 2) + R5) + 0x0));
    (((struct o1B0_uint *)(t100))->v) = R9;
    (((struct o2C4_uint *)(t100))->v) = (unsigned short)(*(short *)(((((((struct o340_int *)(t100))->v)) << 1) + (((((((struct oC0_int *)(t100))->v)) >> 1) * 0x2C) + R7))));
    (((struct o2CC_uint *)(t100))->v) = 0x1;
    R0 = (0x20C);
    R4 = (t100);
    if (((((((struct o20C_int *)(t100))->v)) & 0x40000) != 0)) goto L_C04EEC6;
    goto L_C04EEC2;
    L_C04EEC2:;
    goto L_C04F060;
    L_C04EEC6:;
    (((struct oD0_uint *)((*(int *)((((((((struct oCC_int *)(R4))->v)) << 2) + R5) + 0x0)))))->v) = R9;
    (((struct o39C_uint *)(R4))->v) = (((((struct o39C_int *)(R4))->v)) & R6);
    (((struct o20C_uint *)(R4))->v) = R13;
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
    (((struct o21C_uint *)(a4))->v) = a5;
    (((struct o222_ushort *)(a4))->v) = ((((struct o68_short *)(t2))->v));
    (((struct o228_float *)(a4))->v) = (*(float *)((t2 + 0x0)));
    (((struct o23C_float *)(a4))->v) = ((((struct o40_float *)(t1))->v));
    (((struct o240_float *)(a4))->v) = ((((struct o44_float *)(t1))->v));
    (((struct o2A8_float *)(a4))->v) = ((((struct o48_float *)(t1))->v));
    (((struct o2AC_float *)(a4))->v) = ((((struct o4C_float *)(t1))->v));
    (((struct o2B0_float *)(a4))->v) = ((((struct o50_float *)(t1))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x244 + a4)) = *(struct mv3 *)((t2 + 0x4)); }
    u11 = (((struct o10_float *)(t2))->v);
    (((struct o250_float *)(a4))->v) = u11;
    (((struct o224_uint *)(a4))->v) = 0x4;
    t12 = (0x244 + a4);
    t13 = (t2 + 0x4);
    t14 = 0x0;
    t15 = a5;
    u17 = u11;
    for (;;) {
        if ((int)t14 >= (int)((((struct o224_int *)(a4))->v))) {
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
    (((struct o2A4_float *)(a4))->v) = ((((struct o64_float *)(t2))->v));
    (((struct o2B4_float *)(a4))->v) = -0.163333312f;
    if (((((struct o34_short *)(a5))->v)) != 0) {
        (((struct o2B4_float *)(a4))->v) = (((((struct o2B4_float *)(a4))->v)) * 0.25f);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x2F8 + a4)) = *(struct mv3 *)((a5 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x308 + a4)) = *(struct mv3 *)((a5 + 0x20)); }
    (((struct o3D4_uint *)(a4))->v) = (*(int *)((a5 + 0x30)));
    (((struct oBC_uint *)(a4))->v) = 0x10;
    FUN_0c0dc5a0();
    FUN_0c0dcca0(a5);
    nlRotateAZ((*(short *)((a5 + 0x10))));
    nlRotateAY((*(short *)((a5 + 0xE))));
    nlRotateAX((*(short *)((a5 + 0xC))));
    nlGetMatrix((0x2B8 + a4));
    FUN_0c0db470((0x244 + a4), (0x318 + a4));
    t41 = 0x0;
    for (;;) {
        if ((int)t41 >= (int)((((struct o224_int *)(a4))->v))) {
            break;
        }
        FUN_0c0db470(((((t41 << 2) + t41) << 2) + (0x254 + a4)), ((((t41 << 1) + t41) << 2) + (0x324 + a4)));
        t41 = (t41 + 0x1);
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x318 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t45 = FUN_0c01f1b8(a5, ((int)stk + 4));
    (((struct oB4_float *)(a4))->v) = t45;
    (((struct oC0_uint *)(a4))->v) = 0xB4;
    if ((((((struct o34_short *)(a5))->v)) & 1) == 0) {
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | 0xF);
    }
    if ((((((struct o34_short *)(a5))->v)) & 2) == 0) {
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | 0xFF0);
    }
    if ((((((struct o34_short *)(a5))->v)) & 4) == 0) {
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | 0xFF000);
    }
    if (((((struct o36_short *)(a5))->v)) != 0) {
        (((struct o3DC_uint *)(a4))->v) = 0xFFFFFFB0;
        if (((((struct oB4_float *)(a4))->v)) > -100.0f) {
            (((struct o2A4_float *)(a4))->v) = (((((struct o2A4_float *)(a4))->v)) + ((((struct oB4_float *)(a4))->v)));
        }
    } else {
        (((struct o3DC_uint *)(a4))->v) = 0x0;
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

    t0 = (((struct o18_int *)0xC247CEC)->v);
    if (t0 == 0) {
    } else {
        if ((0xFFFF0000 & t0) != 0) {
            if ((t0 & 0x20000) != 0) {
                t1 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t1);
                *(unsigned int *)((t1 + 0x30)) = 0x14;
                (((struct o34_float *)(t1))->v) = 1.0f;
                *(unsigned int *)((t1 + 0x3C)) = 0x3FFF;
                (((struct o40_uint *)(t1))->v) = 0x3FFF;
                (((struct o44_uint *)(t1))->v) = 0x333;
                (((struct o18_uint *)0xC247CEC)->v) = (((((struct o18_int *)0xC247CEC)->v)) & 0xFFFDFFFF);
            }
            if ((((((struct o18_int *)0xC247CEC)->v)) & 0x10000) != 0) {
                t12 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t12);
                *(unsigned int *)((t12 + 0x30)) = 0x14;
                (((struct o34_float *)(t12))->v) = 3.0f;
                *(unsigned int *)((t12 + 0x3C)) = 0x471C;
                (((struct o40_uint *)(t12))->v) = 0x3FFF;
                (((struct o44_uint *)(t12))->v) = 0x333;
                (((struct o18_uint *)0xC247CEC)->v) = (((((struct o18_int *)0xC247CEC)->v)) & 0xFFFEFFFF);
            }
            if ((((((struct o18_int *)0xC247CEC)->v)) & 0x40000) != 0) {
                t24 = FUN_0c0e1830(0xC082078, 0x48);
                FUN_0c0e19d0(t24);
                *(unsigned int *)((t24 + 0x30)) = 0x23;
                (((struct o34_float *)(t24))->v) = 6.0f;
                *(unsigned int *)((t24 + 0x3C)) = 0x4B4B;
                (((struct o40_uint *)(t24))->v) = 0x3FFF;
                (((struct o44_uint *)(t24))->v) = 0x1D4;
                (((struct o18_uint *)0xC247CEC)->v) = (((((struct o18_int *)0xC247CEC)->v)) & 0xFFFBFFFF);
            }
        }
        t44 = (((struct o18_int *)0xC247CEC)->v);
        t45 = (((struct o10_int *)0xC247CEC)->v);
        if (t44 != 1) {
            if (t44 != 2) {
                if (t44 != 3) {
                    if (t44 == 4) {
                        if ((int)t45 < (int)0xA) {
                            (((struct o10_uint *)0xC247CEC)->v) = 0xD;
                            FUN_0c082ce0(0xC102904);
                        }
                    } else {
                        if (t44 == 5) {
                            if ((int)t45 < (int)0xA) {
                                (((struct o10_uint *)0xC247CEC)->v) = 0xD;
                                FUN_0c082ce0(0xC102914);
                            }
                        } else {
                            if (t44 == 6) {
                                (((struct o10_uint *)0xC247CEC)->v) = 0xC;
                                FUN_0c082ce0(0xC102940);
                            } else {
                                if (t44 == 7) {
                                    if ((int)t45 < (int)0xA) {
                                        (((struct o10_uint *)0xC247CEC)->v) = 0xD;
                                        FUN_0c082ce0(((((struct o2C_int *)0xC247CA4)->v)));
                                    }
                                } else {
                                    if (t44 == 8) {
                                        (((struct o10_uint *)0xC247CEC)->v) = 0xC;
                                        FUN_0c082ce0(((((struct o2C_int *)0xC247CA4)->v)));
                                    } else {
                                        if (t44 != 9) {
                                            if (t44 == 10) {
                                                if (t45 != 13) {
                                                    if (t45 == 12) {
                                                        (((struct o3C_uint *)0xC247D70)->v) = 0xFFFF;
                                                    }
                                                } else {
                                                    (((struct o3C_uint *)0xC247D70)->v) = 0xFFFF;
                                                }
                                            }
                                        } else {
                                            (((struct o10_uint *)0xC247CEC)->v) = (unsigned char)(*(signed char *)0xC247CBB);
                                            t100 = (((struct o18_short *)0xC247CA4)->v);
                                            if ((t100 != 1) && (t100 != 2)) {
                                                if (t100 != 3) {
                                                } else {
                                                    (((struct o0_uint *)0xC247D70)->v) = (((((struct o0_int *)0xC247D70)->v)) + 0x20);
                                                }
                                            } else {
                                                (((struct o3F4_uint *)(a4))->v) = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((*(short *)((((((struct o0_int *)0xC247CA4)->v)) + 0x2))) & 24) != 0) {
                        if (t45 != 8) {
                            (((struct o10_uint *)0xC247CEC)->v) = 0x8;
                            (((struct o3BC_uint *)(a4))->v) = (unsigned char)(*(signed char *)0xC247CB8);
                            (((struct o3C0_uint *)(a4))->v) = ((((struct oCC_int *)((*(int *)(((((((struct o3BC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v));
                            (((struct o3C4_uint *)(a4))->v) = ((((struct o18_short *)0xC247CA4)->v));
                        }
                    }
                }
            } else {
                (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x20);
                if ((((((struct o250_int *)(a4))->v)) & 64) != 0) {
                } else {
                    t192 = FUN_0c0e1830(0xC082176, 0x38);
                    FUN_0c0e19d0(t192);
                    (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x40);
                }
            }
        } else {
            if (t45 == 11) {
            } else {
                (((struct o10_uint *)0xC247CEC)->v) = 0xB;
                (((struct o3B4_uint *)(a4))->v) = ((((struct o18_short *)0xC247CA4)->v));
                (((struct o3DC_uint *)(a4))->v) = 0xFFFFD556;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC247CD4) = *(struct mv3 *)((0x254 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC247CE0) = *(struct mv3 *)((0x278 + a4)); }
        (((struct o0_float *)0xC247CEC)->v) = ((((struct o29C_float *)(a4))->v));
        (((struct o8_uint *)0xC247CEC)->v) = ((((struct o3D8_int *)(a4))->v));
        (((struct o4_uint *)0xC247CEC)->v) = ((((struct o3D4_int *)(a4))->v));
        (((struct o18_uint *)0xC247CEC)->v) = 0x0;
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

    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o474_uint *)(a4))->v) = 0x0;
        return 0x474;
    }
    if ((((((struct o534_int *)(a4))->v)) & 0x2) != 0) {
        return 0x534;
    }
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)((a4 + 0x60)); }
    (((struct o60_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v)));
    (((struct o64_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v)));
    (((struct o68_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - ((((struct o44_float *)(a4))->v)));
    if (((((struct o4C4_int *)(a4))->v)) == 2) {
        if (!(((((struct o34_float *)(a4))->v)) > (((((struct o390_float *)(a4))->v)) + 0.199999988f))) {
            (((struct o4C4_uint *)(a4))->v) = 0x0;
        }
    }
    if (((((struct o4C4_int *)(a4))->v)) != 2) {
        if (((((struct o34_float *)(a4))->v)) > (((((struct o390_float *)(a4))->v)) + 0.199999988f)) {
            (((struct o4C4_uint *)(a4))->v) = 0x2;
        }
    }
    if (0.0f > ((((struct o58_float *)(a4))->v))) {
        if (!(((((struct o34_float *)(a4))->v)) > (((((struct o390_float *)(a4))->v)) + 0.199999988f))) {
            (((struct o4C4_uint *)(a4))->v) = 0x2;
            (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * 0.599999964f);
            (((struct o4C_float *)(a4))->v) = (-(((((struct o58_float *)(a4))->v)) * 0.25f));
            (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * 0.599999964f);
        } else {
            if (!(((((struct o34_float *)(a4))->v)) > (((((struct o390_float *)(a4))->v)) + 0.199999988f))) {
                (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * 0.599999964f);
                (((struct o4C_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
                (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * 0.599999964f);
            } else {
                (((struct o48_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                (((struct o4C_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
                (((struct o50_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
            }
        }
    } else {
        if (!(((((struct o34_float *)(a4))->v)) > (((((struct o390_float *)(a4))->v)) + 0.199999988f))) {
            (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * 0.599999964f);
            (((struct o4C_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
            (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * 0.599999964f);
        } else {
            (((struct o48_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o4C_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
            (((struct o50_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
        }
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o4B0_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o4B4_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o4B8_float *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - -0.5f);
    (((struct o4B0_float *)(a4))->v) = 0.0f;
    (((struct o4B4_float *)(a4))->v) = 0.0f;
    (((struct o4B8_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    t74 = (((struct o488_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t74 + 0x3C)) = *(struct mv3 *)((t74 + 0x30)); }
    t75 = (((struct oBC_int *)(t74))->v);
    t76 = (((struct o1E8_int *)(t74))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t74 + 0x30)) = *(struct mv3 *)((((((((t75 << 1) + t75) << 2) << 2) << 2) + 0xC23F268) + (((t76 << 1) + t76) << 2))); }
    if ((((((struct o4C8_int *)(a4))->v)) != 2) && ((t78 = (((struct o49C_int *)(a4))->v), t78 == 1) && (t79 = (((struct o4D0_int *)(a4))->v), t79 == 0))) {
        if (((((struct o248_int *)(t74))->v)) != 0) {
            FUN_0c02d6a8(a4);
            (((struct o22C_uint *)(t74))->v) = 0x0;
            (((struct o248_uint *)(t74))->v) = 0x0;
        }
        if (((((struct oD8_int *)(t74))->v)) != 0) {
            if (((((struct oD8_int *)(t74))->v)) == 2) {
                FUN_0c090f70(t74);
            } else {
                FUN_0c0909fc(t74);
            }
            (((struct oD8_uint *)(t74))->v) = 0x0;
            (((struct o22C_uint *)(t74))->v) = 0x78;
            return 0x22C;
        }
        if ((int)((((struct o22C_int *)(t74))->v)) > 0) {
            t103 = (((struct o22C_int *)(t74))->v);
            (((struct o22C_uint *)(t74))->v) = (t103 - 1);
            if ((int)(t103 - 1) <= 0) {
                return FUN_0c02d6a8(a4);
            }
            return 0x22C;
        }
        return FUN_0c01cdc2(t74);
    }
    (((struct o248_uint *)(t74))->v) = 0x1;
    return 0x248;
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0BDD2C:;
    R1020 = R4;
    R1004 = 0x0;
    R1012 = 0x0;
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
    R1008 = (((R14 << 1) + R14) << 2);
    t8 = *(int *)((((((unsigned int)(*(int *)((((((R14 << 1) + R14) << 2) + 0xC24FB50) + 0x4))) >> 2) - 1) << 2) + (*(int *)((0xC2623A0 + (((R14 << 1) + R14) << 2))))));
    R1024 = (FUN_0c0e262a(((((t8 << 1) + t8) << 2) << 2)));
    FUN_0c0bd958(R14, (((int)stk + 4) + 0x3C));
    *(unsigned short *)((R8 + 0x8)) = R14;
    R12 = ((((int)stk + 4) + 0x3C));
    R9 = (0xC0E2A4C);
    F15 = ((*(float *)0xC0BDF68));
    goto L_C0BDE1E;
    L_C0BDE1E:;
    t15 = R1020;
    R1020 = (t15 + 0x2);
    t16 = *(short *)((((t15 + 0x2) - 2) + 0x0));
    R14 = (t16);
    if ((t16 != 0)) goto L_C0BDDA6;
    goto L_C0BDE2C;
    L_C0BDE2C:;
    FUN_0c0e2a4c((R1024));
    *(unsigned short *)((R8 + 0xC)) = (R1004);
    t23 = FUN_0c0e262a(((R1004) * 0x2C));
    *(unsigned int *)((R8 + 0x0)) = t23;
    t25 = FUN_0c0e262a(((R1012) << 2));
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
    FUN_0c0e2a4c((*(int *)((R12 + 0x0))));
    FUN_0c0e2a4c((*(int *)((R12 + 0x4))));
    t51 = *(short *)((R8 + 0xA));
    *(unsigned int *)((R8 + 0x4)) = (*(int *)((0xC1960B8 + (t51 << 2))));
    R0 = ((t51 << 2));
    goto L_C0BDEAC;
    L_C0BDDA6:;
    FUN_0c0bd788((short)R14, (((int)stk + 4) + 0x24), R6, R7);
    t56 = *(int *)(((((int)stk + 4) + 0x24) + 0x4));
    t57 = *(int *)(((((int)stk + 4) + 0x24) + 0x0));
    R1016 = (*(int *)(((((int)stk + 4) + 0x24) + 0x8)));
    R10 = (t57);
    R11 = (t56);
    R13 = ((((int)stk + 4) + 0x24));
    goto L_C0BDDB8;
    L_C0BDDB8:;
    t62 = *(int *)((R12 + 0x0));
    R1008 = (*(int *)((R12 + 0x8)));
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
    R1012 = ((R1012) + (*(int *)((R14 + 0x28))));
    R1004 = ((R1004) + 0x1);
    goto L_C0BDE08;
    L_C0BDE08:;
    t72 = R1016;
    R1016 = (t72 - 1);
    R10 = ((R10 + 0xC));
    R11 = ((R11 + 0xC));
    if (((t72 - 1) != 0)) goto L_C0BDDB8;
    goto L_C0BDE16;
    L_C0BDE16:;
    FUN_0c0e2a4c((*(int *)((R13 + 0x0))));
    FUN_0c0e2a4c((*(int *)((R13 + 0x4))));
    goto L_C0BDE1E;
    L_C0BDDFC:;
    t80 = R1008;
    R1008 = (t80 - 1);
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






