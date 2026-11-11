/* Straight-line functions with calls and guards (batch gen_fa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[29]; } Stk29;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10B0_uint { char p[0x10B0]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_int { char p[0x10B8]; int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o220_short { char p[0x220]; short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_short { char p[0x40]; short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oFAC_int { char p[0xFAC]; int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int ADXERR_CallErrFunc(Stk4);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_GetFad(int, int);
int ADXSTM_SetEos(int, int);
int FUN_0c0208fc(int);
int FUN_0c0555ca(int, int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c0d9dc0(int, int, int, int, float, float);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0f2fa8(int, ...);
int FUN_0c0f34e0(int, int, int, int, int, int, int, int, int);
int FUN_0c229e76(void);
int FUN_0c22a06c(int);
int FUN_0c22a080(int, int);
int FUN_0c22a51e(int, int, int);
int FUN_0c22a528(int, int);
int FUN_0c22a530(int, int);
int FUN_0c22a53c(int, int);
int FUN_0c22a548(int);
int FUN_0c22a554(int);
int FUN_0c22a560(int);
int FUN_0c22a56c(int);
int FUN_0c22a578(int);
int FUN_0c22a590(int);
int FUN_0c22a5a8(int);
int FUN_0c22a5d8(int);
int FUN_0c22a5e4(int);
int FUN_0c22a5f0(int);
int FUN_0c22baec(int, int, int, int, int);
int FUN_0c22bbe0(int, int, int, int);
extern int _builtin_tas(char *);
int _ltd(int, ...);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int);
int adxt_set_outpan(int);
int frame_make(void);
int kmiWriteFBRegister(Stk29);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_v2p(int);
int nlInitTextureSurface(int, int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int thunk_FUN_0c22bece(int, int);
int thunk_FUN_0c22c7fe(int, int);
int thunk_FUN_0c22c884(int, int);
int thunk_FUN_0c22c8bc(int, int);
int thunk_FUN_0c22c8cc(int, int);
int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c22c05a(int a4, int a5, int a6, int a7);
int mpdrv_frame_send(int a4, int a5, int a6);
int FUN_0c0df040(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c22ad80(int a4);
int FUN_0c05a5f0(int a4, int a5, int a6, int a7, int a8, float f4);
int ADXF_LoadPartition(int a4, int a5, int a6, int a7);
int FUN_0c0f2894(int a4, Stk3 s);
int FUN_0c0dab20(int a4, int a5, int a6);
int FUN_0c0dabd0(int a4, int a5);
int FUN_0c0d7fc0(int a4, int a5, int a6);
int FUN_0c0e65a0(int a4, int a5);
int FUN_0c0e66a0(int a4, int a5);

int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[78];
    register int t93;

    register int R3;
    int R6;
    int R7;
    int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = a4;
    v0_1 = a5;
    R6 = a6;
    R7 = a7;
    v0_2 = (((struct o4_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0x0)) = ((((struct o0_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0x4)) = v0_2;
    v0_2 = (((struct oC_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0x8)) = ((((struct o8_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0xC)) = v0_2;
    v0_2 = (((struct o14_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0x10)) = ((((struct o10_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x38) + 0x14)) = v0_2;
    v0_2 = (((struct o1C_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x24) + 0x0)) = ((((struct o18_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x24) + 0x4)) = v0_2;
    v0_2 = (((struct o24_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x24) + 0x8)) = ((((struct o20_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x24) + 0xC)) = v0_2;
    *(unsigned int *)(((((int)stk + 116) + 0x24) + 0x10)) = ((((struct o28_int *)0xC2377F4)->v));
    v0_2 = (((struct o30_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x10) + 0x0)) = ((((struct o2C_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x10) + 0x4)) = v0_2;
    v0_2 = (((struct o38_int *)0xC2377F4)->v);
    *(unsigned int *)(((((int)stk + 116) + 0x10) + 0x8)) = ((((struct o34_int *)0xC2377F4)->v));
    *(unsigned int *)(((((int)stk + 116) + 0x10) + 0xC)) = v0_2;
    *(unsigned int *)(((((int)stk + 116) + 0x10) + 0x10)) = ((((struct o3C_int *)0xC2377F4)->v));
    v0_2 = *(int *)((((R6 << 2) + (((int)stk + 116) + 0x38)) + 0x0));
    (((struct o28_uint *)0xC95231C)->v) = v0_0;
    (((struct o2C_uint *)0xC95231C)->v) = v0_1;
    v0_7 = ((((int)stk + 116) + 0x24));
    v0_4 = (v0_2);
    R12 = (0x1);
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x1) == 1)) goto L_C21FE02;
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x2C) != 32)) goto L_C21FE02;
    if ((R12 == 0)) goto L_C21FE02;
    (((struct o2C_uint *)0xC95231C)->v) = ((unsigned int)((((struct o2C_int *)0xC95231C)->v)) >> 1);
    L_C21FE02:;
    if ((a9 == 0)) goto L_C21FE18;
    if (((((((struct o0_int *)0xC95231C)->v)) & 32) != 0)) goto L_C21FE18;
    *(unsigned int *)(((int)stk + 124)) = 0x2;
    L_C21FE1A:;
    *(unsigned int *)(((((int)stk + 116) + 0x50) + 0x20)) = R12;
    *(unsigned int *)(((((int)stk + 116) + 0x50) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 116) + 0x50) + 0x34)) = 0x0;
    (((struct o40_uint *)((((int)stk + 116) + 0x50)))->v) = 0x0;
    (((struct o70_uint *)((((int)stk + 116) + 0x50)))->v) = 0x0;
    (((struct o68_uint *)((((int)stk + 116) + 0x50)))->v) = 0x0;
    (((struct o64_uint *)((((int)stk + 116) + 0x50)))->v) = 0x0;
    v0_2 = (0x0);
    v0_3 = ((((int)stk + 116) + 0x50));
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) == 0)) goto L_C21FE80;
    (((struct o6C_uint *)(v0_3))->v) = R12;
    v0_6 = (R12);
    L_C21FE8C:;
    *(unsigned int *)(((int)stk + 128)) = v0_2;
    L_C21FE94:;
    v0_8 = (v0_4);
    if ((v0_4 == 16)) goto L_C21FEA6;
    if ((v0_8 == 24)) goto L_C21FED4;
    if (!((v0_8 == 32))) goto L_C21FEE8;
    *(unsigned int *)((v0_3 + 0x30)) = 0x6;
    *(unsigned int *)((v0_3 + 0x3C)) = 0x3;
    goto L_C21FEE6;
    L_C21FEE8:;
    *(unsigned int *)((v0_3 + 0x28)) = v0_2;
    *(unsigned int *)((v0_3 + 0x24)) = R7;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_2;
    *(unsigned int *)(((int)stk + 120)) = (v0_0 * v0_4);
    v0_8 = ((v0_0 * v0_4));
    if (((int)(v0_0 * v0_4) >= 0)) goto L_C21FEFA;
    v0_8 = ((v0_8 + 0x3F));
    L_C21FEFA:;
    (((struct o44_uint *)(v0_3))->v) = ((int)v0_8 >> 6);
    *(unsigned int *)((v0_3 + 0x0)) = (((int)((int)(*(int *)(((int)stk + 120))) / (int)0x20)) - 1);
    v0_8 = (v0_4);
    R6 = (0x20);
    v0_5 = ((((int)((unsigned int)((int)((unsigned int)v0_1 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_1)) ? 1u : 0u))) >> 1));
    if (((int)v0_4 >= 0)) goto L_C21FF22;
    v0_8 = ((v0_8 + 0x7));
    L_C21FF22:;
    *(unsigned int *)(((int)stk + 116)) = ((((v0_8 >> 1) >> 1) >> 1) * v0_0);
    v0_8 = (R7);
    if ((R7 != 1)) goto L_C21FF90;
    if (((((((struct o0_int *)0xC95231C)->v)) & R6) == 0)) goto L_C21FF80;
    *(unsigned int *)((v0_3 + 0x4)) = v0_5;
    *(unsigned int *)((v0_3 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 120))) / (int)R6)) + 0x1);
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = (*(int *)(((int)stk + 116)));
    L_C22000E:;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    R7 = (0x42);
    if ((a9 != 0)) goto L_C220022;
    *(unsigned int *)((v0_3 + 0xC)) = v0_2;
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) != 1)) goto L_C220134;
    if ((v0_2 == 0)) goto L_C2201A0;
    L_C22014A:;
    v0_7 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_7 & R7));
    if (((v0_7 & R7) != 66)) goto L_C220164;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((((((struct o10_int *)0xC95231C)->v)) << 2) + (((int)stk + 116) + 0x10))));
    v0_8 = ((((int)stk + 116) + 0x10));
    L_C220168:;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    L_C220224:;
    *(unsigned int *)(((int)stk + 116)) = R12;
    L_C220226:;
    *(unsigned int *)((v0_3 + 0x14)) = 0x40;
    *(unsigned int *)((v0_3 + 0x18)) = 0x80;
    (((struct o0_uint *)0xC952758)->v) = (((int)((int)v0_0 / (int)R6)) * (*(int *)(((int)stk + 116))));
    v0_7 = *(int *)(((int)stk + 128));
    (((struct o4_uint *)0xC952758)->v) = (((int)((int)((v0_1 * v0_6) * (*(int *)(((int)stk + 124)))) / (int)R6)) + v0_7);
    v0_6 = (v0_7);
    v0_8 = (0x9);
    R6 = (0xF);
    if (((unsigned int)((((struct o4_int *)0xC952758)->v)) <= (unsigned int)0xF)) goto L_C220268;
    (((struct o4_uint *)0xC952758)->v) = R6;
    L_C220268:;
    (((struct o4C_uint *)(v0_3))->v) = v0_8;
    (((struct o48_uint *)(v0_3))->v) = 0x6;
    if ((v0_4 != 16)) goto L_C220280;
    (((struct o50_uint *)(v0_3))->v) = 0x8;
    L_C220286:;
    (((struct o58_uint *)(v0_3))->v) = v0_2;
    (((struct o54_uint *)(v0_3))->v) = (v0_0 - 1);
    (((struct o60_uint *)(v0_3))->v) = v0_2;
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) != 1)) goto L_C2202A6;
    if ((v0_2 == 0)) goto L_C2202EC;
    L_C2202E4:;
    (((struct o5C_uint *)(v0_3))->v) = (v0_5 - 1);
    L_C2202F2:;
    v0_0 = v0_3;
    v0_1 = ((int)stk + 0);
    for (;;) { t93 = *(int *)v0_0; v0_0 = (v0_0 + 4); if ((unsigned int)((v0_3 + 116)) < (unsigned int)v0_0) break; *(unsigned int *)v0_1 = t93; v0_1 = (v0_1 + 4); }
    kmiWriteFBRegister(*(Stk29 *)((int)stk + 0));
    (((struct o1C_uint *)0xC95231C)->v) = v0_2;
    (((struct o18_uint *)0xC95231C)->v) = v0_2;
    return v0_2;
    L_C2202EC:;
    (((struct o5C_uint *)(v0_3))->v) = (v0_1 - 1);
    goto L_C2202F2;
    L_C2202A6:;
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x2C) != 32)) goto L_C2202E0;
    if ((R12 == 0)) goto L_C2202EC;
    goto L_C2202E4;
    L_C2202E0:;
    if ((v0_2 == 0)) goto L_C2202EC;
    goto L_C2202E4;
    L_C220280:;
    (((struct o50_uint *)(v0_3))->v) = 0xB;
    v0_6 = (0xB);
    goto L_C220286;
    L_C220164:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x800;
    goto L_C220168;
    L_C2201A0:;
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) == 0)) goto L_C2201AE;
    *(unsigned int *)((v0_3 + 0x10)) = 0x400;
    v0_8 = (0x400);
    goto L_C220224;
    L_C2201AE:;
    if (((((((struct o0_int *)0xC95231C)->v)) & R6) == 0)) goto L_C2201D8;
    v0_9 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C2201CC;
    v0_8 = (((struct o10_int *)0xC95231C)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (v0_8 << 2))));
    v0_8 = ((v0_8 << 2));
    L_C2201D0:;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    goto L_C220224;
    L_C2201CC:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    goto L_C2201D0;
    L_C2201D8:;
    v0_9 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C220220;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (((((struct o10_int *)0xC95231C)->v)) << 2))));
    v0_7 = *(int *)((v0_3 + 0x4));
    *(unsigned int *)((v0_3 + 0x4)) = (v0_7 - 1);
    v0_8 = ((v0_7 - 1));
    goto L_C220224;
    L_C220220:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x400;
    goto L_C220224;
    L_C220134:;
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x2C) != 32)) goto L_C220146;
    if ((R12 == 0)) goto L_C2201A0;
    goto L_C22014A;
    L_C220146:;
    if ((v0_2 == 0)) goto L_C2201A0;
    goto L_C22014A;
    L_C220022:;
    *(unsigned int *)0xC952364 = ((*(int *)0xC952364) | R12);
    *(unsigned int *)((v0_3 + 0xC)) = R12;
    *(unsigned int *)(((int)stk + 116)) = 0x2;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) == 0)) goto L_C220044;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    v0_8 = (0x401);
    goto L_C220226;
    L_C220044:;
    v0_9 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_9 & 0xFFFFFFEC));
    if (((v0_9 & 0xFFFFFFEC) == 100)) goto L_C2200A0;
    if ((v0_8 == 104)) goto L_C2200A0;
    if ((v0_8 == 36)) goto L_C2200A0;
    if ((v0_8 == 40)) goto L_C2200A0;
    if ((v0_8 == 96)) goto L_C2200C8;
    if ((v0_8 == 64)) goto L_C2200C8;
    if ((v0_8 == 68)) goto L_C2200C8;
    if ((v0_8 == 32)) goto L_C2200C8;
    if ((v0_8 == 0)) goto L_C2200C8;
    if ((v0_8 == 4)) goto L_C2200C8;
    goto L_C220226;
    L_C2200C8:;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = v0_2;
    v0_7 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_7 & R7));
    if (((v0_7 & R7) != 66)) goto L_C2200EA;
    v0_7 = (((struct o10_int *)0xC95231C)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((((int)stk + 116) + 0x10) + (v0_7 << 2))));
    v0_8 = ((v0_7 << 2));
    L_C2200EE:;
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C220226;
    L_C2200EA:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x800;
    goto L_C2200EE;
    L_C2200A0:;
    v0_9 = (((struct o0_int *)0xC95231C)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C2200B6;
    v0_8 = (((struct o10_int *)0xC95231C)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (v0_8 << 2))));
    v0_8 = ((v0_8 << 2));
    L_C2200BA:;
    v0_7 = (int)((int)(*(int *)(((int)stk + 120))) / (int)R6);
    *(unsigned int *)((v0_3 + 0x8)) = (v0_7 + 0x1);
    v0_8 = ((v0_7 + 0x1));
    goto L_C220226;
    L_C2200B6:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    goto L_C2200BA;
    L_C21FF80:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = (*(int *)(((int)stk + 116)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C22000E;
    L_C21FF90:;
    if (((((((struct o0_int *)0xC95231C)->v)) & R12) == 0)) goto L_C21FFA8;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = (*(int *)(((int)stk + 116)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C22000E;
    L_C21FFA8:;
    v0_8 = (0xC95231C);
    if (((((((struct o0_int *)0xC95231C)->v)) & R6) == 0)) goto L_C220000;
    *(unsigned int *)((v0_3 + 0x4)) = v0_5;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = (*(int *)(((int)stk + 116)));
    *(unsigned int *)((v0_3 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 120))) / (int)R6)) + 0x1);
    goto L_C22000E;
    L_C220000:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC952514)->v) = v0_2;
    (((struct o4_uint *)0xC952514)->v) = (*(int *)(((int)stk + 116)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C22000E;
    L_C21FEE6:;
    *(unsigned int *)((v0_3 + 0x2C)) = v0_2;
    goto L_C21FEE8;
    L_C21FED4:;
    *(unsigned int *)((v0_3 + 0x30)) = 0x4;
    *(unsigned int *)((v0_3 + 0x3C)) = 0x2;
    goto L_C21FEE6;
    L_C21FEA6:;
    if ((R6 != 3)) goto L_C21FEB2;
    *(unsigned int *)((v0_3 + 0x30)) = 0x3;
    L_C21FEC4:;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_2;
    L_C21FECC:;
    *(unsigned int *)((v0_3 + 0x2C)) = a8;
    goto L_C21FEE8;
    L_C21FEB2:;
    if ((R6 != 0)) goto L_C21FEBC;
    *(unsigned int *)((v0_3 + 0x30)) = R12;
    *(unsigned int *)((v0_3 + 0x3C)) = R12;
    goto L_C21FECC;
    L_C21FEBC:;
    if ((R6 != 1)) goto L_C21FEC8;
    *(unsigned int *)((v0_3 + 0x30)) = v0_2;
    goto L_C21FEC4;
    L_C21FEC8:;
    *(unsigned int *)((v0_3 + 0x30)) = R12;
    *(unsigned int *)((v0_3 + 0x3C)) = R12;
    goto L_C21FECC;
    L_C21FE80:;
    (((struct o6C_uint *)(v0_3))->v) = v0_2;
    if ((R7 != 1)) goto L_C21FE90;
    v0_6 = (0x2);
    goto L_C21FE8C;
    L_C21FE90:;
    *(unsigned int *)(((int)stk + 128)) = R12;
    v0_6 = (R12);
    goto L_C21FE94;
    L_C21FE18:;
    *(unsigned int *)(((int)stk + 124)) = R12;
    goto L_C21FE1A;
}

int FUN_0c22c05a(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t1;
    register int t5;
    register int t7;
    register int t16;
    register int t20;
    register int t29;
    register int t31;
    register int t33;
    register int t34;
    register int t35;
    register int t39;
    register int t40;
    register int t41;
    register int t47;
    register int t48;
    register int t49;
    register int t57;
    register int t60;
    register int t66;
    register int t67;
    register int t68;
    register int t6;
    register int t23;
    register int t26;
    register int t83;
    int t65;

    t1 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t5 = (int)((int)((*(int *)((a4 + 0x30))) - (*(int *)((a4 + 0x3C)))) / (int)((t1 << 2) << 1));
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t6 = t7;
        t6 = (t6 << 2);
        t6 = (t6 + (a4 + 0x10));
        t6 = (*(int *)((t6 + 0x0)));
        t16 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t6 + 0x0))) + 0x18)))))(t6, 0x1, ((int)((int)((t5 * ((t1 << 2) << 1)) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((t7 << 2) << 1) + (a4 + 0x18)), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t7 = (t7 + 0x1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x3))) == 1) {
        t23 = (*(int *)((a4 + 0x1C)));
        t26 = a7;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x18);
        t26 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((a4 + 0x18) + 0x8);
        t20 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t23 = t20;
        if ((int)t26 < (int)t20) {
            t23 = t26;
        }
    }
    t29 = (int)((int)t23 / (int)(*(int *)((a4 + 0x8))));
    t31 = ((t29 << 2) << 1);
    if ((int)((t29 << 2) << 1) >= (int)(t5 * ((t1 << 2) << 1))) {
        t31 = (t5 * ((t1 << 2) << 1));
    }
    t33 = *(int *)((a4 + 0x30));
    t34 = *(int *)((a4 + 0x34));
    t35 = t31;
    if ((int)t31 >= (int)(t33 - t34)) {
        t35 = (t33 - t34);
    }
    t39 = (int)((int)((((int)((int)t35 / (int)((t1 << 2) << 1))) * ((t1 << 2) << 1)) * (*(int *)((a4 + 0x8)))) / (int)0x8);
    if ((int)t39 <= 0) {
        t40 = 0x0;
        t41 = 0x0;
        for (;;) {
            if ((int)t41 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t40 = t41;
            t40 = (t40 << 2);
            t40 = (t40 + (a4 + 0x10));
            t40 = (*(int *)((t40 + 0x0)));
            t47 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t40 + 0x0))) + 0x1C)))))(t40, 0x1, (((t41 << 2) << 1) + (a4 + 0x18)), t26, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t41 = (t41 + 0x1);
        }
        t83 = 0x0;
    } else {
        t48 = 0xC960DD0;
        t49 = 0x0;
        for (;;) {
            if ((int)t49 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((t49 << 2) << 1) + (a4 + 0x18)) + 0x0)));
            *(unsigned int *)(((int)stk + 8)) = (((int)((int)((*(int *)((a4 + 0x34))) * (*(int *)((a4 + 0x8)))) / (int)0x8)) + (*(int *)((((t49 << 2) + (a4 + 0x28)) + 0x0))));
            (((struct o0_uint *)0xC960DD0)->v) = 0x0;
            t57 = t39;
            *(int *)((int)stk + 0) = t57;
            t48 = a4;
            t60 = FUN_0c22baec(t48, t49, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), t57);
            t49 = (t49 + 0x1);
            (((struct o4_uint *)0xC960DD0)->v) = 0x0;
            t48 = t60;
        }
        (((struct o44_uint *)(a4))->v) = ((((int)((int)t48 / (int)(*(int *)((a4 + 0x8))))) << 2) << 1);
        if (((*(int *)((a4 + 0x34))) == 0) && (t65 = (((struct o44_int *)(a4))->v), (int)t65 > 0)) {
            t66 = t39;
            t67 = 0x0;
            t68 = 0x0;
            for (;;) {
                if ((int)t67 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                    break;
                }
                t66 = t67;
                t66 = (t66 << 2);
                t68 = t67;
                t66 = (t66 << 1);
                t66 = (t66 + (a4 + 0x18));
                t66 = (*(int *)((t66 + 0x0)));
                t68 = (t68 << 2);
                t68 = (t68 + (a4 + 0x28));
                t68 = (*(int *)((t68 + 0x0)));
                t68 = (t68 + ((int)((int)((*(int *)((a4 + 0x30))) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
                FUN_0c22bbe0(a4, t67, t66, t68);
                t67 = (t67 + 0x1);
            }
        }
        t83 = ((((struct o44_int *)(a4))->v));
    }
    return t83;
}

int mpdrv_frame_send(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xFFFFFFFD;
    if (((((struct oFC0_int *)((*(int *)0xC98E18C)))->v)) != 1) {
    } else {
        t1 = 0xFFFFFFFF;
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
                mpdrv_dpf(0xC238258);
                t2 = 0xFFFFFFFE;
            } else {
                t3 = *(int *)0xC98E18C;
                if (((((struct oFB0_int *)(t3))->v)) != ((((struct oFAC_int *)(t3))->v))) {
                    t3 = *(int *)0xC98E18C;
                    (((struct oFB0_uint *)(t3))->v) = ((((struct oFAC_int *)(t3))->v));
                    if (((((struct oFAC_int *)((*(int *)0xC98E18C)))->v)) != 0) {
                        (((struct o10C0_uint *)((*(int *)0xC98E18C)))->v) = (((int)((int)((*(int *)0xC237B80) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        (((struct o10C0_uint *)((*(int *)0xC98E18C)))->v) = 0xC3500000;
                    }
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x14)) = 0x0;
                    t3 = *(int *)0xC98E18C;
                    (((struct o80_uint *)(((((struct o10F4_int *)(t3))->v))))->v) = (((((struct o10C0_int *)(t3))->v)) | ((((struct o10D0_int *)(t3))->v)));
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x14)) = 0x1;
                }
                frame_make();
                t3 = *(int *)0xC98E18C;
                (((struct o10B0_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC98E18C;
                *(unsigned int *)(((((((struct o10F4_int *)(t3))->v)) + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)))));
                *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x18)) = 0x1;
                (((struct oFD8_uint *)((*(int *)0xC98E18C)))->v) = 0x0;
                t3 = *(int *)0xC98E18C;
                (((struct o10B8_uint *)(t3))->v) = (((((struct o10B8_int *)(t3))->v)) ^ 0x1);
                t3 = *(int *)0xC98E18C;
                (((struct oFCC_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC98E18C;
                t4 = (((struct o10B4_int *)(t3))->v);
                (((struct o10B4_uint *)(t3))->v) = (t4 ^ 0x1);
                t3 = *(int *)0xC98E18C;
                (((struct oFDC_uint *)(t3))->v) = 0x0;
                t5 = 0xFDC;
                t6 = (t4 ^ 0x1);
                t4 = t3;
                t3 = ((*(int *)0xC98E18C) + 0x28);
                t7 = 0x0;
                for (;;) {
                    if ((int)t7 >= (int)0x18) {
                        break;
                    }
                    t4 = 0xF90;
                    t5 = (*(int *)0xC98E18C);
                    t4 = (t4 + t5);
                    t4 = (t4 + t7);
                    t6 = (*(signed char *)((t4 + 0x0)));
                    t7 = (t7 + 0x1);
                    if (t6 != 0) {
                        t5 = (*(signed char *)((t3 + 0x6)));
                        *(unsigned char *)((t3 + 0x7)) = t5;
                        t5 = 0x0;
                        *(unsigned char *)((t3 + 0x6)) = t5;
                        t4 = (*(int *)((t3 + 0x18)));
                        *(unsigned int *)((t3 + 0x1C)) = t4;
                        *(unsigned int *)((t3 + 0x18)) = t5;
                    }
                    t3 = (t3 + 0x2C);
                }
                (((struct oFC0_uint *)((*(int *)0xC98E18C)))->v) = 0x0;
                *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0df040(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;

    if (a12 == 0) {
        (((struct o54_uint *)((a4 + 0x18)))->v) = a13;
        (((struct o50_uchar *)((a4 + 0x18)))->v) = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) | 0x10);
        t0 = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xF7);
    } else {
        (((struct o54_uint *)((a4 + 0x18)))->v) = ((int)((int)a13 / (int)0x3));
        (((struct o50_uchar *)((a4 + 0x18)))->v) = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xEF);
        t0 = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) | 0x8);
    }
    (((struct o50_uchar *)((a4 + 0x18)))->v) = t0;
    t0 = (int)((int)(((a13 << 2) << 2) << 1) / (int)0x4);
    *(unsigned int *)((((t0 << 2) + ((a4 + 0x18) + 0x58)) + 0x0)) = 0x0;
    *(unsigned int *)(((((a4 + 0x18) + 0x58) + (t0 << 2)) + 0x4)) = a13;
    (((struct o4C_uint *)((a4 + 0x18)))->v) = ((((a13 << 2) << 2) << 1) + 0x8);
    (((struct o50_uint *)((a4 + 0x18)))->v) = ((((((struct o50_int *)((a4 + 0x18)))->v)) & 0xFFFFFFBF) | ((unsigned int)((int)((unsigned int)a6 & 0x1)) << 6));
    (((struct o50_uint *)((a4 + 0x18)))->v) = ((((((struct o50_int *)((a4 + 0x18)))->v)) & 0xFFFFFFFC) | ((unsigned int)((int)((unsigned int)a5 & 0x3)) << 0));
    (((struct o28_float *)((a4 + 0x18)))->v) = f4;
    *(unsigned int *)(((a4 + 0x18) + 0x24)) = a7;
    (((struct o2C_float *)((a4 + 0x18)))->v) = f5;
    (((struct o30_float *)((a4 + 0x18)))->v) = f6;
    (((struct o34_float *)((a4 + 0x18)))->v) = f7;
    (((struct o38_float *)((a4 + 0x18)))->v) = f8;
    (((struct o40_float *)((a4 + 0x18)))->v) = f9;
    (((struct o44_float *)((a4 + 0x18)))->v) = f10;
    (((struct o48_float *)((a4 + 0x18)))->v) = f11;
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((((*(int *)(((a4 + 0x18) + 0x8))) & 0x1FFFFFFF) | 0x20000000) & 0xE3FFFFFF);
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = ((*(int *)(((a4 + 0x18) + 0x0))) & 0xF8FFFFFF);
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFEFFFFF) | 0x80000);
    if ((1.0f > f5) || (a8 != 0)) {
        *(unsigned int *)(((a4 + 0x18) + 0x0)) = ((*(int *)(((a4 + 0x18) + 0x0))) | 0x2000000);
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (((((*(int *)(((a4 + 0x18) + 0x8))) & 0x1FFFFFFF) | 0x80000000) | 0x14000000) | 0xC0);
    }
    if (1.0f > f5) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x100000);
    }
    if (a8 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFF7FFFF);
    }
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFFF9FFF);
    if (a11 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x2000);
    }
    t0 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t0 & 0xFFF9FFFF);
    if (a9 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x40000);
    }
    t1 = (t0 & 0xFFF9FFFF);
    if (a10 != 0) {
        t0 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t0 | 0x20000);
        t1 = (t0 | 0x20000);
    }
    return t1;
}

int FUN_0c22ad80(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x4));
    t1 = FUN_0c22a06c(t0);
    t2 = t1;
    if (t1 != 2) {
    } else {
        t1 = FUN_0c22a554(t0);
        t3 = FUN_0c22a5a8(t0);
        if ((int)t3 > 0) {
            t4 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
            t5 = ((t4 << 1) + t4);
        } else {
            t4 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
            t5 = (((int)((unsigned int)((int)((unsigned int)((t4 << 1) + t4) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t4 << 1) + t4))) ? 1u : 0u))) >> 1);
        }
        (((struct o48_uint *)(a4))->v) = t5;
        t1 = FUN_0c22a578(t0);
        (((struct o48_uint *)(a4))->v) = (((int)((int)(((((struct o48_int *)(a4))->v)) + (t1 << 1)) / (int)(t1 << 1))) * (t1 << 1));
        FUN_0c22a080(t0, ((((struct o48_int *)(a4))->v)));
        if ((int)t3 > 0) {
            if ((*(signed char *)((a4 + 0x2))) == 2) {
                (((struct o50_uint *)(a4))->v) = 0x0;
            } else {
                t1 = FUN_0c22a5e4(t0);
                (((struct o50_uint *)(a4))->v) = (0x800 - ((int)((int)t1 % (int)0x800)));
                (((struct o50_uint *)(a4))->v) = ((int)((int)((((struct o50_int *)(a4))->v)) % (int)0x800));
                ADXSTM_SetEos((*(int *)((a4 + 0x8))), ((int)((int)((0x800 + t1) - 1) / (int)0x800)));
                ADXSTM_EntryEosFunc((*(int *)((a4 + 0x8))), 0xC22ACB0, a4);
            }
            t1 = FUN_0c22a5d8(t0);
            FUN_0c22a528(t0, t1);
            FUN_0c22a53c(t0, 0x0);
            FUN_0c22a530(t0, 0x0);
            FUN_0c22a51e(t0, 0xC22ABE4, a4);
        } else {
            if ((*(int *)((a4 + 0x8))) != 0) {
                ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
            }
        }
        t1 = FUN_0c22a554(t0);
        t3 = FUN_0c22a560(t0);
        FUN_0c22a590(t0);
        t4 = FUN_0c22a56c(t0);
        thunk_FUN_0c22c884((*(int *)((a4 + 0xC))), t4);
        thunk_FUN_0c22c8bc((*(int *)((a4 + 0xC))), t1);
        thunk_FUN_0c22c7fe((*(int *)((a4 + 0xC))), t3);
        *(volatile int *)((a4 + 0xC));
        FUN_0c229e76();
        thunk_FUN_0c22c8cc((*(int *)((a4 + 0xC))), ((((struct o40_short *)(a4))->v)));
        adxt_set_outpan(a4);
        t1 = FUN_0c22a548(t0);
        if (t1 == 2) {
            t1 = FUN_0c22a5f0(t0);
            ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t1);
        }
        thunk_FUN_0c22bece((*(int *)((a4 + 0xC))), 0x1);
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        t2 = 0x2;
    }
    return t2;
}

int FUN_0c05a5f0(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[14];
    register int t2;
    register int t7;
    register int t20;
    register int t48;
    register int t35;
    register int t36;
    register int t67;
    int t61;
    register int t66;
    int t0;
    register int t9;
    register int t10;
    register int t76;
    register int t45;

    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 8)) = f4;
    if (((a8 & 0x80000000) != 0) && (t0 = (((struct o1C4_int *)(a4))->v), (int)t0 < (int)0xC)) {
        t2 = *(int *)(((((((struct o1C4_int *)(a4))->v)) << 2) + 0xC246FF0));
        t7 = FUN_0c0d9dc0(a4, a5, a6, a7, (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o38_float *)(t2))->v)) - ((((struct o38_float *)(a4))->v))));
        t9 = t7;
        t10 = (short)t7;
    } else {
        t9 = 0x58;
        t10 = (((((struct o6E_short *)(a4))->v)) + (unsigned short)((short)(a8 >> 0)));
    }
    if ((0x8000 & a5) == 0) {
        t36 = t10;
        if ((int)a6 > (int)0x1) {
            t20 = (((struct oF0_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 4)) = ((int)((int)t20 / (int)a6));
            t36 = (t10 - (((int)((unsigned int)((int)((unsigned int)t20 + (unsigned int)0x0)) + ((((int)0x0 > (int)t20)) ? 1u : 0u))) >> 1));
        }
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 8)));
        *(float *)(((int)stk + 44)) = ((((struct o30_float *)(a4))->v));
        *(float *)(((int)stk + 48)) = (((((struct o34_float *)(a4))->v)) + 1.0f);
        *(float *)(((int)stk + 52)) = ((((struct o38_float *)(a4))->v));
        t48 = 0x34;
        if ((int)a6 > 0) {
            t35 = 0x0;
            for (;;) {
                FUN_0c0dc5a0();
                nlRotateAY(t36);
                nlRotateAX((*(int *)(((int)stk + 0))));
                FUN_0c0db4d0((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
                nlPopMatrix(0x1);
                if ((int)a5 < (int)0x16) {
                    t45 = (FUN_0c05561a(a4, a5, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x14)));
                } else {
                    t45 = (FUN_0c0555ca(a4, a5, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x14)));
                }
                t35 = (t35 + 0x1);
                t36 = (t36 + (*(int *)(((int)stk + 4))));
                if ((int)t35 >= (int)a6) {
                    break;
                }
            }
            t48 = t45;
        }
        t76 = t48;
    } else {
        t67 = t9;
        if ((int)a6 > 0) {
            t61 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 12)) = (unsigned short)(*(short *)((((((a5 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x0)));
                *(unsigned int *)(((int)stk + 16)) = (*(int *)((((((a5 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x4)));
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                *(unsigned short *)(((int)stk + 24)) = 0x0;
                *(unsigned short *)(((int)stk + 26)) = (*(short *)((((((a5 & 0xFFFF7FFF) << 2) << 1) + 0xC0F8E9C) + 0x2)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((a4 + 0x30)); }
                *(unsigned int *)(((int)stk + 40)) = t10;
                *(unsigned short *)(((int)stk + 44)) = ((((struct o220_short *)(a4))->v));
                *(unsigned short *)(((int)stk + 46)) = 0x0;
                *(unsigned int *)(((int)stk + 48)) = 0x1;
                t66 = FUN_0c0208fc((((int)stk + 0) + 0xC));
                if (((int)t66 >= 0) && (t61 = (t61 + 0x1), (int)t61 < (int)a6)) continue;
                break;
            }
            t67 = t66;
        }
        t76 = t67;
    }
    return t76;
}

int ADXF_LoadPartition(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_7 = a5;
    v0_5 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    v0_3 = adxf_ChkPrmPt((*(int *)(((int)stk + 4))), v0_5);
    v0_2 = (v0_3);
    v0_0 = (v0_5);
    v0_4 = (v0_7);
    if (((int)v0_3 >= 0)) goto L_C214040;
    L_C2141A4:;
    v0_1 = (v0_2);
    L_C2141A6:;
    return v0_1;
    L_C214040:;
    v0_2 = (int)(ADXSTM_GetFad(v0_4, (((int)stk + 0) + 0x8))) >= 0;
    if (!(v0_2)) goto L_C214066;
    v0_2 = ADXF_Open(v0_4, (((int)stk + 0) + 0x18));
    *(unsigned int *)(((int)stk + 16)) = v0_2;
    if ((v0_2 != 0)) goto L_C214070;
    goto L_C214066;
    L_C214066:;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
    v0_1 = (0xFFFFFFFF);
    goto L_C2141A6;
    L_C214070:;
    memset(v0_0, 0x0, 0x18);
    *(unsigned int *)((((*(int *)(((int)stk + 4))) << 2) + 0xC95E288)) = v0_0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)((v0_0 + 0x8)) = (*(int *)(((int)stk + 8)));
    (((struct o12_uchar *)(v0_0))->v) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (v0_0 + 0x14);
    *(unsigned int *)(((int)stk + 32)) = ((v0_0 + 0x14) + 0x2);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)((v0_0 + 0xC)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC94DFE4;
    *(unsigned int *)(((int)stk + 28)) = 0xC94DFE8;
    v0_5 = (0x0);
    v0_2 = (0xFFFFFFFF);
    v0_3 = (0x0);
    v0_4 = (0xC94DFE0);
    L_C21417E:;
    v0_7 = (0x3);
    if (((int)v0_5 < (int)0x3)) goto L_C2140B6;
    if ((v0_5 != 3)) goto L_C214192;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
    L_C214192:;
    if ((v0_2 != -4)) goto L_C2141A0;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 0));
    L_C2141A0:;
    ADXF_Close((*(int *)(((int)stk + 16))));
    goto L_C2141A4;
    L_C2140B6:;
    v0_6 = (int)(adxf_LoadData((*(int *)(((int)stk + 16))), 0x1, v0_4)) <= 0;
    if (v0_6) goto L_C21417C;
    v0_5 = (0x800);
    if (((*(int *)((v0_0 + 0xC))) != 0)) goto L_C214138;
    v0_6 = (0x10000);
    if (((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) <= (int)0x10000)) goto L_C214100;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_6;
    v0_2 = (0xFFFFFFFC);
    v0_6 = (0xFFFFFFFC);
    goto L_C214192;
    L_C214100:;
    v0_1 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_6 = (v0_1);
    if (((int)(*(int *)(((int)stk + 20))) >= (int)v0_1)) goto L_C21410E;
    v0_1 = ((*(int *)(((int)stk + 20))));
    L_C214110:;
    *(unsigned short *)((v0_0 + 0x10)) = v0_1;
    *(unsigned int *)((v0_0 + 0xC)) = (unsigned short)v0_1;
    *(unsigned int *)((v0_0 + 0x4)) = (((unsigned int)((((unsigned short)v0_1 + 0x1) << 1) + 0x16) >> 2) << 2);
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((int)((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) / (int)v0_5));
    v0_6 = (v0_7);
    L_C21413C:;
    v0_7 = (((v0_6 << 2) + v0_4));
    v0_1 = (0x200);
    if (((int)v0_6 >= (int)0x200)) goto L_C214178;
    L_C214148:;
    v0_8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_8 + 0x1);
    *(unsigned short *)((((((v0_8 + 0x1) - 1) << 1) + (*(int *)(((int)stk + 32)))) + 0x0)) = ((int)((int)((*(int *)((v0_7 + 0x0))) + 0x7FF) / (int)v0_5));
    if (((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)((v0_0 + 0xC))))) goto L_C214170;
    v0_2 = (v0_3);
    goto L_C214192;
    L_C214170:;
    v0_8 = (int)(v0_6 + 0x2) < (int)v0_1;
    v0_6 = ((v0_6 + 0x2));
    v0_7 = ((v0_7 + 0x8));
    if (v0_8) goto L_C214148;
    L_C214178:;
    v0_5 = (v0_3);
    goto L_C21417E;
    L_C21410E:;
    v0_1 = (v0_6);
    goto L_C214110;
    L_C214138:;
    v0_6 = (0x1);
    goto L_C21413C;
    L_C21417C:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C21417E;
}

int FUN_0c0f2894(int a4, Stk3 s)
{
    int stk[19];
    register int t0;
    register int t10;
    register int t17;
    register int t35;
    register int t37;
    register int t40;
    register int t42;
    register int t43;
    register int t50;
    register int t30;
    register int t31;
    register int t32;

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    *(int *)((int)stk + 20) = s.w[2];
    *(int *)((int)stk + 16) = s.w[1];
    t0 = FUN_0c0f2fa8(s.w[1], s.w[2]);
    if (t0 != 0) {
        if (t0 == 1) {
            *(unsigned int *)0xC94D960 = 0x4B8;
        }
        if (t0 == 2) {
            *(unsigned int *)0xC94D960 = 0x44C;
        }
        *(unsigned int *)(((((int)stk + 24) + 0x10) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((((int)stk + 24) + 0x10) + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((((int)stk + 24) + 0x10) + 0x0)));
        t50 = *(int *)(((((int)stk + 24) + 0x10) + 0x4));
        *(unsigned int *)((s.w[0] + 0x4)) = t50;
    } else {
        t10 = *(short *)(((((int)stk + 24) + 0x10) + 0x6));
        if ((int)((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023) < 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            t30 = ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023);
        } else {
            *(unsigned int *)((a4 + 0x0)) = (*(int *)(((((int)stk + 24) + 0x10) + 0x0)));
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((((int)stk + 24) + 0x10) + 0x4)));
            t30 = ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023);
            if ((int)((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023) < (int)0x34) {
                if ((int)((int)((int)(0x34 - ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023)) / (int)0x20)) > 0) {
                    *(unsigned int *)(((((int)stk + 24) + 0x10) + 0x0)) = 0x0;
                }
                t17 = (int)((int)(0x34 - ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023)) % (int)0x20);
                *(unsigned int *)(((((int)stk + 24) + 0x10) + 0x4)) = ((*(int *)(((((int)stk + 24) + 0x10) + 0x4))) & ((unsigned int)0xFFFFFFFF << (int)t17));
                t30 = ((unsigned int)0xFFFFFFFF << (int)t17);
                t31 = (0x34 - ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1023));
            }
            t32 = 0x34;
        }
        *(int *)((int)stk + 20) = s.w[2];
        *(int *)((int)stk + 16) = s.w[1];
        t35 = (*(int *)((a4 + 0x4)));
        *(int *)((int)stk + 12) = t35;
        t37 = (*(int *)((a4 + 0x0)));
        *(int *)((int)stk + 8) = t37;
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x20);
        FUN_0c0f34e0(t30, t31, t32, 0x0, (((int)stk + 8) + 0x20), t37, t35, s.w[1], s.w[2]);
        t40 = (*(int *)((a4 + 0x4)));
        *(int *)((int)stk + 20) = t40;
        t42 = (*(int *)((a4 + 0x0)));
        *(int *)((int)stk + 16) = t42;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t43 = _ltd(0x0, 0x0, t42, t40);
        if (t43 != 0) {
            *(unsigned char *)(((((int)stk + 24) + 0x10) + 0x7)) = ((*(signed char *)(((((int)stk + 24) + 0x10) + 0x7))) | 0x80);
        }
        *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((((int)stk + 24) + 0x10) + 0x0)));
        t50 = *(int *)(((((int)stk + 24) + 0x10) + 0x4));
        *(unsigned int *)((s.w[0] + 0x4)) = t50;
    }
    return t50;
}

int FUN_0c0dab20(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t27;
    register int t28;
    register int t29;
    register int t30;

    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x20)) = *(struct mv2 *)(0xC1EA7C0); }
    t0 = *(signed char *)0xC9441C3;
    t19 = t0;
    t20 = 0xC1EA7C0;
    if ((t0 & 8) == 0) {
        t2 = *(signed char *)0xC9441C3;
        t19 = t2;
        if ((t2 & 16) != 0) {
            (((struct o4_uint *)0xC9441C8)->v) = ((((struct o0_int *)0xC9441C8)->v));
            t4 = *(signed char *)0xC9441C3;
            t19 = t4;
            if ((t4 & 32) != 0) {
                t5 = (((struct o4_int *)0xC9441C8)->v);
                (((struct o4_uint *)0xC9441C8)->v) = (t5 - 2);
                t19 = (t5 - 2);
            }
        }
        t20 = (((struct o4_int *)0xC9441C8)->v);
        if ((int)t20 < (int)0x1) {
            (((struct o4_uint *)0xC9441C8)->v) = 0x1;
        }
    }
    t18 = *(int *)((((a6 << 2) + (((int)stk + 0) + 0x20)) + 0x0));
    t21 = (((int)stk + 0) + 0x20);
    t22 = a4;
    t23 = 0x0;
    for (;;) {
        if (t22 == 0) {
            break;
        }
        t20 = 0xC0E5F1C;
        t21 = t23;
        t21 = (t21 + ((int)stk + 0));
        t19 = 0x10;
        t19 = ((int)((int)t22 % (int)t19));
        t20 = (*(signed char *)((t18 + t19)));
        t19 = 0x10;
        *(unsigned char *)((t21 + 0x0)) = t20;
        t21 = 0xC0E5DC0;
        t19 = ((int)((int)t22 / (int)t19));
        t23 = (t23 + 0x1);
        t22 = t19;
    }
    t27 = t19;
    t28 = t21;
    t29 = a5;
    t30 = t23;
    for (;;) {
        if (t30 == 0) {
            break;
        }
        t27 = t30;
        t27 = (t27 - 1);
        t28 = (*(signed char *)((((int)stk + 0) + t27)));
        t30 = (t30 - 1);
        *(unsigned char *)((t29 + 0x0)) = t28;
        t29 = (t29 + 0x1);
    }
    return t23;
}

int FUN_0c0dabd0(int a4, int a5)
{
    int stk[8];
    register int t3;
    register int t4;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t3 = a4;
    t4 = 0x0;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t8 = t4;
        t8 = (t8 + ((int)stk + 0));
        t7 = 0xA;
        t7 = ((int)((int)t3 % (int)t7));
        t7 = (t7 + 0x30);
        *(unsigned char *)((t8 + 0x0)) = t7;
        t7 = 0xA;
        t8 = 0xC0E5DC0;
        t7 = ((int)((int)t3 / (int)t7));
        t4 = (t4 + 0x1);
        t3 = t7;
    }
    t9 = a5;
    t10 = t4;
    for (;;) {
        if (t10 == 0) {
            break;
        }
        t7 = t10;
        t7 = (t7 - 1);
        t8 = (*(signed char *)((((int)stk + 0) + t7)));
        t10 = (t10 - 1);
        *(unsigned char *)((t9 + 0x0)) = t8;
        t9 = (t9 + 0x1);
    }
    return t4;
}

int FUN_0c0d7fc0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    nlInitTextureSurface(a4, (a5 + 0x1));
    (((struct o0_uint *)0xC943D78)->v) = ((((a5 + 0x1) * 0x3C) + a4) + 0x8);
    (((struct o4_uint *)0xC943D78)->v) = ((((a6 + 0x1) << 2) << 1) + ((((a5 + 0x1) * 0x3C) + a4) + 0x8));
    (((struct o4_uint *)0xC20CC48)->v) = ((int)((int)((a6 + 0x1) + 0x1F) / (int)0x20));
    (((struct o0_uint *)0xC20CC48)->v) = ((a6 + 0x1) - 1);
    t0 = 0xFFFFFFF8;
    t1 = 0xFFFFFFFF;
    for (;;) {
        if ((int)t1 >= (int)((((struct o0_int *)0xC20CC48)->v))) {
            break;
        }
        t1 = (t1 + 0x1);
        *(unsigned int *)(((((((struct o0_int *)0xC943D78)->v)) + t0) + 0x0)) = 0x0;
        t2 = ((((struct o0_int *)0xC943D78)->v));
        t2 = (t2 + t0);
        t0 = (t0 + 0x8);
        *(unsigned int *)((t2 + 0x4)) = 0xFFFFFFFF;
    }
    t0 = 0xC20CC48;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct o4_int *)0xC20CC48)->v))) {
            break;
        }
        t0 = ((((struct o4_int *)0xC943D78)->v));
        t2 = (t2 + 0x1);
        *(unsigned int *)((t1 + t0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    *(unsigned int *)0xC948270 = 0x0;
    return t0;
}

int FUN_0c0e65a0(int a4, int a5)
{
    *(unsigned int *)(((0xC0001C0 + ((int)((int)(*(short *)((((a4 - 4) << 1) + 0xC20D060))) / (int)0x8))) + 0x0)) = a5;
    return 0x1;
}

int FUN_0c0e66a0(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((0xC0001C0 + ((int)((int)(*(short *)((((a4 - 4) << 1) + 0xC20D060))) / (int)0x8)))));
    return 0x1;
}
