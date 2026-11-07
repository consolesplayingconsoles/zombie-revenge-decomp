/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01a320(int, int);
int FUN_0c01a5b8(int);
int FUN_0c01a632(int);
int FUN_0c0745a0(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b72d6(int);
int FUN_0c0ba130(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0e4428(int);
int FUN_0c0e5e74(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e6118(void);
int _quick_odd_mvn(int, int, int, int, float, float, float);
int FUN_0c217a50(void);
int FUN_0c217b80(void);
int FUN_0c217e2a(void);
int FUN_0c220360(void);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int);
extern int kmiCreateRegionArray();
int kmiDMAHazardReset(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int FUN_0c019f02(int a4, int a5, int a6, int a7);
int FUN_0c0747d6(int a4, float f4, float f5, float f6);
int FUN_0c0e44b0(int a4, int a5, int a6);
int FUN_0c0a5fdc(void);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2180a0(void);
int kmiInitPAL(void);

int FUN_0c019f02(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t20;
    int t30;
    int t40;
    int t71;
    int t121;
    int t148;
    int t185;
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
    int T_;
    R4 = a4;
    R7 = a7;
    L_C019F02:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    t0 = *(int *)0xC23ED9C;
    R0 = (t0);
    R10 = (0xC23F25C);
    R11 = (0xFFFFFFFF);
    R12 = (0xC23EDE0);
    R13 = (0xC23F1AC);
    R14 = (0xFFFFFFFF);
    R4 = (0xFFFFFFFF);
    R8 = (0xC5229BC);
    R9 = (0x0);
    if ((t0 == 25)) goto L_C019F32;
    goto L_C019F2E;
    L_C019F2E:;
    goto L_C01A2CC;
    L_C01A2CC:;
    return R0;
    L_C019F32:;
    t11 = *(int *)((R8 + 0x40));
    R0 = (t11);
    if ((t11 == 1)) goto L_C019FD2;
    goto L_C019F3A;
    L_C019F3A:;
    if (((*(int *)((R8 + 0x44))) != 0)) goto L_C019F80;
    goto L_C019F42;
    L_C019F42:;
    R4 = (R8);
    if (((int)(*(int *)((R13 + 0x80))) < (int)(*(int *)((R8 + 0x0))))) goto L_C019F5E;
    goto L_C019F4E;
    L_C019F4E:;
    t20 = *(int *)((R4 + 0x8));
    R0 = (t20);
    if ((t20 == 1)) goto L_C019FD2;
    goto L_C019F54;
    L_C019F54:;
    R0 = (0x88);
    if (((unsigned int)(*(int *)((R13 + 0x88))) >= (unsigned int)(*(int *)((R4 + 0x4))))) goto L_C019FD2;
    goto L_C019F5E;
    L_C019F5E:;
    *(unsigned int *)((R10 + 0x0)) = 0x383;
    goto L_C019FC0;
    L_C019FC0:;
    *(unsigned int *)((R10 + 0x4)) = 0x383;
    *(unsigned int *)((R13 + 0xA0)) = 0x50;
    *(unsigned int *)((R13 + 0x9C)) = 0x50;
    R0 = (0x9C);
    goto L_C019FD2;
    L_C019FD2:;
    if (((*(int *)((R12 + 0x0))) == 0)) goto L_C01A090;
    goto L_C019FD8;
    L_C019FD8:;
    t30 = *(int *)((R12 + 0x0));
    R0 = (t30);
    if ((t30 == 4)) goto L_C019FF6;
    goto L_C019FDE;
    L_C019FDE:;
    if ((R0 == 5)) goto L_C01A022;
    goto L_C019FE2;
    L_C019FE2:;
    if ((R0 == 6)) goto L_C01A038;
    goto L_C019FE6;
    L_C019FE6:;
    if ((R0 == 7)) goto L_C01A038;
    goto L_C019FEA;
    L_C019FEA:;
    if ((R0 == 1)) goto L_C01A074;
    goto L_C019FEE;
    L_C019FEE:;
    if ((R0 == 11)) goto L_C01A08C;
    goto L_C019FF2;
    L_C019FF2:;
    goto L_C01A090;
    L_C01A090:;
    if (((*(int *)((R12 + 0x4))) == 0)) goto L_C01A154;
    goto L_C01A096;
    L_C01A096:;
    t40 = *(int *)((R12 + 0x4));
    R0 = (t40);
    if ((t40 == 4)) goto L_C01A0B4;
    goto L_C01A09C;
    L_C01A09C:;
    if ((R0 == 5)) goto L_C01A0E0;
    goto L_C01A0A0;
    L_C01A0A0:;
    if ((R0 == 6)) goto L_C01A0FA;
    goto L_C01A0A4;
    L_C01A0A4:;
    if ((R0 == 7)) goto L_C01A0FA;
    goto L_C01A0A8;
    L_C01A0A8:;
    if ((R0 == 1)) goto L_C01A11A;
    goto L_C01A0AC;
    L_C01A0AC:;
    if ((R0 == 11)) goto L_C01A150;
    goto L_C01A0B0;
    L_C01A0B0:;
    goto L_C01A154;
    L_C01A154:;
    R4 = (0xC2497E0);
    R5 = (0x4);
    R6 = (0x5A);
    if (((int)R14 >= 0)) goto L_C01A1A0;
    goto L_C01A15E;
    L_C01A15E:;
    R4 = ((R4 + 0x50));
    if (((int)R11 >= 0)) goto L_C01A168;
    goto L_C01A164;
    L_C01A164:;
    goto L_C01A2CC;
    L_C01A168:;
    if (((R5 & (*(int *)((R4 + 0x0)))) == 0)) goto L_C01A192;
    goto L_C01A16E;
    L_C01A16E:;
    if (((int)R11 >= (int)0x2D0)) goto L_C01A192;
    goto L_C01A174;
    L_C01A174:;
    if (((int)(*(int *)0xC23EDE0) >= (int)0xA)) goto L_C01A186;
    goto L_C01A17E;
    L_C01A17E:;
    if (((*(int *)0xC23EDE0) != 0)) goto L_C01A192;
    goto L_C01A186;
    L_C01A186:;
    R11 = ((R11 - (FUN_0c0e5f1c(R4))));
    goto L_C01A194;
    L_C01A194:;
    if (((int)R11 >= 0)) goto L_C01A19A;
    goto L_C01A198;
    L_C01A198:;
    R11 = (R9);
    goto L_C01A19A;
    L_C01A19A:;
    *(unsigned int *)((R10 + 0x4)) = R11;
    R14 = (R11);
    goto L_C01A228;
    L_C01A228:;
    if ((R14 != 0)) goto L_C01A288;
    goto L_C01A22C;
    L_C01A22C:;
    if (((*(int *)((R12 + 0x0))) == 10)) goto L_C01A238;
    goto L_C01A232;
    L_C01A232:;
    if (((*(int *)((R12 + 0x4))) != 10)) goto L_C01A244;
    goto L_C01A238;
    L_C01A238:;
    *(unsigned int *)((R13 + 0x70)) = 0x3;
    *(unsigned int *)((R13 + 0x74)) = R9;
    goto L_C01A288;
    L_C01A288:;
    t71 = *(int *)((R13 + 0x9C));
    *(unsigned int *)((R13 + 0x9C)) = (t71 - 1);
    if (((int)(t71 - 1) > 0)) goto L_C01A2B6;
    goto L_C01A294;
    L_C01A294:;
    *(unsigned int *)((R13 + 0x9C)) = (*(int *)((R13 + 0xA0)));
    if (((int)(*(int *)((R13 + 0xA0))) <= (int)0x14)) goto L_C01A2AE;
    goto L_C01A2A6;
    L_C01A2A6:;
    *(unsigned int *)((R13 + 0xA0)) = ((*(int *)((R13 + 0xA0))) - 3);
    goto L_C01A2AE;
    L_C01A2AE:;
    FUN_0c0cc3f8(0x129A9, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_C01A2B6;
    L_C01A2B6:;
    return FUN_0c01a5b8(R14);
    L_C01A244:;
    if (((*(int *)((R12 + 0x0))) == 0)) goto L_C01A25A;
    goto L_C01A24A;
    L_C01A24A:;
    if (((*(int *)((R12 + 0x0))) == 0)) goto L_C01A256;
    goto L_C01A250;
    L_C01A250:;
    FUN_0c0b72d6(0x0);
    goto L_C01A256;
    L_C01A256:;
    *(unsigned int *)((R12 + 0x0)) = 0xB;
    goto L_C01A25A;
    L_C01A25A:;
    if (((*(int *)((R12 + 0x4))) == 0)) goto L_C01A270;
    goto L_C01A260;
    L_C01A260:;
    if (((*(int *)((R12 + 0x4))) == 0)) goto L_C01A26C;
    goto L_C01A266;
    L_C01A266:;
    FUN_0c0b72d6(0x1);
    goto L_C01A26C;
    L_C01A26C:;
    *(unsigned int *)((R12 + 0x4)) = 0xB;
    goto L_C01A270;
    L_C01A270:;
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x6);
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23ED48 = 0xD;
    R0 = (0xC23ED48);
    goto L_C01A2CC;
    L_C01A192:;
    R11 = ((R11 - 1));
    goto L_C01A194;
    L_C01A1A0:;
    if (((int)R11 >= 0)) goto L_C01A1D8;
    goto L_C01A1A4;
    L_C01A1A4:;
    if ((((*(int *)((R4 + 0x0))) & R5) == 0)) goto L_C01A1CE;
    goto L_C01A1AA;
    L_C01A1AA:;
    if (((int)R14 >= (int)0x2D0)) goto L_C01A1CE;
    goto L_C01A1B0;
    L_C01A1B0:;
    if (((int)(*(int *)0xC23EDE4) >= (int)0xA)) goto L_C01A1C2;
    goto L_C01A1BA;
    L_C01A1BA:;
    if (((*(int *)0xC23EDE4) != 0)) goto L_C01A1CE;
    goto L_C01A1C2;
    L_C01A1C2:;
    R14 = ((R14 - (FUN_0c0e5f1c(R4))));
    goto L_C01A1D0;
    L_C01A1D0:;
    if (((int)R14 >= 0)) goto L_C01A226;
    goto L_C01A1D4;
    L_C01A1D4:;
    R14 = (R9);
    goto L_C01A226;
    L_C01A226:;
    *(unsigned int *)((R10 + 0x0)) = R14;
    goto L_C01A228;
    L_C01A1CE:;
    R14 = ((R14 - 1));
    goto L_C01A1D0;
    L_C01A1D8:;
    R7 = (R4);
    if (((int)R14 > (int)R11)) goto L_C01A1E0;
    goto L_C01A1DE;
    L_C01A1DE:;
    R14 = (R11);
    goto L_C01A1E0;
    L_C01A1E0:;
    R4 = ((R4 + 0x50));
    if ((((*(int *)((R7 + 0x0))) & R5) != 0)) goto L_C01A1EE;
    goto L_C01A1E8;
    L_C01A1E8:;
    if ((((*(int *)((R4 + 0x0))) & R5) == 0)) goto L_C01A21C;
    goto L_C01A1EE;
    L_C01A1EE:;
    if (((int)(*(int *)0xC23F25C) >= (int)0x2D0)) goto L_C01A21C;
    goto L_C01A1F8;
    L_C01A1F8:;
    R14 = ((R14 - (FUN_0c0e5f1c(R4))));
    goto L_C01A21E;
    L_C01A21E:;
    if (((int)R14 >= 0)) goto L_C01A224;
    goto L_C01A222;
    L_C01A222:;
    R14 = (R9);
    goto L_C01A224;
    L_C01A224:;
    *(unsigned int *)((R10 + 0x4)) = R14;
    goto L_C01A226;
    L_C01A21C:;
    R14 = ((R14 - 1));
    goto L_C01A21E;
    L_C01A150:;
    R0 = ((FUN_0c01a632(0x1)));
    goto L_C01A154;
    L_C01A11A:;
    t121 = FUN_0c0ba130(0x1);
    *(unsigned int *)((R12 + 0x4)) = 0x3;
    *(unsigned int *)0xC23EDF4 = 0x1E0;
    *(unsigned int *)((R10 + 0x0)) = 0x383;
    R0 = (t121);
    goto L_C01A2CC;
    L_C01A0FA:;
    if (((unsigned int)(*(int *)((R8 + 0x0))) > (unsigned int)0x0)) goto L_C01A112;
    goto L_C01A102;
    L_C01A102:;
    R0 = (0xC23EDE0);
    if (((int)(*(int *)0xC23EDE0) <= 0)) goto L_C01A116;
    goto L_C01A10A;
    L_C01A10A:;
    if (((int)(*(int *)((R0 + 0x0))) >= (int)0x5)) goto L_C01A116;
    goto L_C01A112;
    L_C01A112:;
    R11 = ((*(int *)((R10 + 0x4))));
    goto L_C01A154;
    L_C01A116:;
    R11 = (R9);
    goto L_C01A154;
    L_C01A0E0:;
    if (((*(int *)((R12 + 0x0))) != 6)) goto L_C01A0EE;
    goto L_C01A0E6;
    L_C01A0E6:;
    *(unsigned int *)((R13 + 0x70)) = 0x1;
    goto L_C01A0F2;
    L_C01A0F2:;
    R3 = (0x2);
    goto L_C01A0F4;
    L_C01A0F4:;
    *(unsigned int *)((R13 + 0x74)) = R3;
    R0 = (0x74);
    goto L_C01A2CC;
    L_C01A0EE:;
    *(unsigned int *)((R13 + 0x70)) = R9;
    goto L_C01A0F2;
    L_C01A0B4:;
    FUN_0c01a320(0x1, 0x0);
    *(unsigned int *)((R12 + 0x4)) = 0x5;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x38)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    goto L_C01A0E6;
    L_C01A08C:;
    R0 = ((FUN_0c01a632(0x0)));
    goto L_C01A090;
    L_C01A074:;
    t148 = FUN_0c0ba130(0x0);
    *(unsigned int *)((R12 + 0x0)) = 0x3;
    *(unsigned int *)0xC23EDF0 = 0x1E0;
    *(unsigned int *)((R10 + 0x4)) = 0x383;
    R0 = (t148);
    goto L_C01A2CC;
    L_C01A038:;
    if (((unsigned int)(*(int *)((R8 + 0x0))) > (unsigned int)0x0)) goto L_C01A050;
    goto L_C01A040;
    L_C01A040:;
    R0 = (0xC23EDE4);
    if (((int)(*(int *)0xC23EDE4) <= 0)) goto L_C01A070;
    goto L_C01A048;
    L_C01A048:;
    if (((int)(*(int *)((R0 + 0x0))) >= (int)0x5)) goto L_C01A070;
    goto L_C01A050;
    L_C01A050:;
    R14 = ((*(int *)((R10 + 0x0))));
    goto L_C01A090;
    L_C01A070:;
    R14 = (R9);
    goto L_C01A090;
    L_C01A022:;
    if (((*(int *)((R12 + 0x4))) != 6)) goto L_C01A030;
    goto L_C01A028;
    L_C01A028:;
    *(unsigned int *)((R13 + 0x70)) = 0x1;
    goto L_C01A034;
    L_C01A034:;
    R3 = (0x1);
    goto L_C01A0F4;
    L_C01A030:;
    *(unsigned int *)((R13 + 0x70)) = R9;
    goto L_C01A034;
    L_C019FF6:;
    FUN_0c01a320(0x0, 0x0);
    *(unsigned int *)((R12 + 0x0)) = 0x5;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x38)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    goto L_C01A028;
    L_C019F80:;
    R4 = (R8);
    R6 = ((*(int *)((R8 + 0x10))));
    if (((int)(*(int *)((R13 + 0x80))) < (int)(*(int *)((R8 + 0x0))))) goto L_C019FA0;
    goto L_C019F90;
    L_C019F90:;
    if (((*(int *)((R4 + 0x8))) == 1)) goto L_C019FA4;
    goto L_C019F96;
    L_C019F96:;
    if (((unsigned int)(*(int *)((R13 + 0x88))) >= (unsigned int)(*(int *)((R4 + 0x4))))) goto L_C019FA4;
    goto L_C019FA0;
    L_C019FA0:;
    *(unsigned int *)((R10 + 0x0)) = 0x383;
    goto L_C019FA4;
    L_C019FA4:;
    if (((int)(*(int *)((R13 + 0x84))) < (int)R6)) goto L_C019FC0;
    goto L_C019FAC;
    L_C019FAC:;
    t185 = *(int *)0xC5229D4;
    R0 = (t185);
    if ((t185 == 1)) goto L_C019FD2;
    goto L_C019FB4;
    L_C019FB4:;
    R0 = (0x8C);
    if (((unsigned int)(*(int *)((R13 + 0x8C))) >= (unsigned int)(*(int *)0xC5229D0))) goto L_C019FD2;
    goto L_C019FC0;
}




int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;
    int t5;
    int t10;
    int t21;
    int t27;
    int t28;
    int t30;
    int t32;
    int t35;
    int t37;
    int t36;
    int t39;
    int t40;
    int t41;
    int t58;
    int t64;
    int t115;
    int t68;
    int t71;
    int t75;
    int t83;
    int t86;
    int t88;
    int t89;
    int t90;
    int t92;
    int t93;
    int t94;
    int t99;
    int t103;
    int t124;
    int t56;
    int t100;
    int t101;
    int t102;
    int stk[33];

    stk[24] = a8;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(int *)0xC237788;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (*(int *)0xC237784);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = *(int *)0xC237790;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = (*(int *)0xC23778C);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    *(unsigned int *)0xC952940 = 0x1;
    t5 = a5;
    if (((*(int *)0xC952300) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    *(unsigned int *)0xC9528EC = a4;
    *(unsigned int *)0xC9528F0 = t5;
    *(unsigned int *)0xC9528F4 = (*(int *)(((int)stk + 16)));
    *(unsigned int *)0xC9528F8 = (*(int *)(((int)stk + 20)));
    *(unsigned int *)0xC9528FC = a8;
    if ((*(int *)0xC239C6C) != 0x80000000) {
        t10 = *(int *)0xC239C6C;
        *(unsigned int *)0xC239C6C = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            *(unsigned int *)0xC239C6C = 0x80000000;
            t21 = (kmiAllocSysConfig((*(int *)0xC952940)));
        }
        t124 = t21;
    } else {
        *(unsigned int *)(((int)stk + 24)) = (kmiChkActiveListType(t5, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC952764);
        *(unsigned int *)0xC239C70 = 0x0;
        t27 = 0xC9529D4;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC9529E4) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = *(int *)(((int)stk + 16));
        t30 = kmiGetPackOBPParam(t5, t28, (*(int *)(((int)stk + 20))), a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 28)) = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = *(int *)(((int)stk + 20));
        *(volatile int *)(((int)stk + 24));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (*(int *)(((int)stk + 20)));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0xC)) = a8;
        t35 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        t37 = t35;
        if (t35 != 0) {
            t36 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = (t36 - 16);
            t37 = (t36 - 16);
        }
        t39 = t37;
        t40 = ((((int)stk + 16) + 0x20) + 0x4);
        t41 = ((((int)stk + 16) + 0x20) + 0x4);
        for (;;) {
            if ((unsigned int)t40 >= (unsigned int)((((int)stk + 16) + 0x20) + 0x10)) {
                break;
            }
            t39 = (*(int *)((t40 + 0x0)));
            if (t39 != 0) {
                t39 = (*(int *)((t41 + 0x0)));
                t39 = (t39 - 16);
                *(unsigned int *)((t41 + 0x0)) = t39;
            }
            t40 = (t40 + 0x4);
            t41 = (t41 + 0x4);
        }
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x20);
        *(unsigned int *)0xC9528F0 = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        *(unsigned int *)0xC9528F4 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x20) + 0x8);
        *(unsigned int *)0xC9528F8 = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        *(unsigned int *)0xC9528FC = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        t56 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 96)) = t56;
        t58 = 0x2;
        if ((*(int *)0xC952640) == 1) {
            t58 = 0x1;
        }
        t64 = kmiGetVertexBasePointer((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), t56, 0x0);
        t115 = t64;
        if (t64 == 0) {
            kmiGetDisplayData(0xFF, (*(int *)0xC952904), (*(int *)0xC952910));
            t68 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t68 = 0x10000;
            }
            *(unsigned int *)0xC952944 = ((t68 << 2) + (*(int *)0xC952950));
            t71 = *(int *)0xC95294C;
            if ((unsigned int)(*(int *)0xC952944) > (unsigned int)((-t71) + 0x200000)) {
                *(unsigned int *)0xC952944 = ((-t71) + 0x200000);
            }
            t75 = kmiTAallocEx((*(int *)0xC952944), 0xC9529CC, 0xC9529D0);
            if (t75 == 0) {
                *(unsigned int *)0xC952754 = (*(int *)0xC952944);
                t83 = kmiSetTAEnvironment(((unsigned int)(*(int *)0xC952368) >> 7), ((unsigned int)(*(int *)0xC95236C) >> 7), ((unsigned int)(*(int *)0xC952370) >> 7), ((unsigned int)(*(int *)0xC952374) >> 7), ((~(*(int *)0xC952904)) & (*(int *)(((int)stk + 28)))));
                *(unsigned int *)0xC9529A0 = (*(int *)0xC952978);
                *(unsigned int *)0xC9529A4 = (*(int *)0xC95297C);
                t86 = *(int *)0xC952980;
                *(unsigned int *)0xC9529A8 = t86;
                *(unsigned int *)0xC9529AC = (*(int *)0xC952984);
                t88 = t83;
                t89 = t86;
                t90 = 0x0;
                for (;;) {
                    if ((unsigned int)t90 >= (unsigned int)0x10) {
                        break;
                    }
                    t88 = t90;
                    t89 = (*(int *)((0xC9529A0 + t88)));
                    t90 = (t90 + 0x4);
                    *(unsigned int *)((0xC9529B4 + t88)) = t89;
                }
                *(unsigned int *)0xC952954 = 0x0;
                *(unsigned int *)0xC952958 = 0x0;
                *(unsigned int *)0xC95295C = 0x0;
                *(unsigned int *)0xC952960 = 0x0;
                *(unsigned int *)0xC952964 = 0xC952978;
                *(unsigned int *)0xC952968 = 0xC9529A0;
                if ((unsigned int)0x0 < (unsigned int)t58) {
                    t92 = 0xC952978;
                    t93 = 0xC952970;
                    t94 = 0x0;
                    for (;;) {
                        t94 = (t94 + 0x1);
                        *(unsigned int *)((t93 + 0x0)) = t92;
                        t92 = (t92 + 0x14);
                        t93 = (t93 + 0x4);
                        if ((unsigned int)t94 >= (unsigned int)t58) {
                            break;
                        }
                    }
                }
                t99 = (kmiCopyDummyGlobalData(t58));
                t103 = 0x0;
                for (;;) {
                    if ((unsigned int)t103 >= (unsigned int)0x10) {
                        break;
                    }
                    t99 = 0xC9529D4;
                    t101 = (*(int *)0xC952968);
                    t102 = (*(int *)((t103 + t99)));
                    t101 = (t101 + t103);
                    t100 = (*(int *)((t101 + 0x0)));
                    t102 = (t102 << 2);
                    t103 = (t103 + 0x4);
                    t100 = (t100 + t102);
                    *(unsigned int *)((t101 + 0x0)) = t100;
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC9529A0;
                *(unsigned int *)((a4 + 0x4)) = 0xC239B2C;
                *(unsigned int *)((a4 + 0x8)) = 0xC952954;
                *(unsigned int *)((a4 + 0xC)) = 0xC952970;
            }
            t115 = t75;
        }
        t124 = t115;
    }
    return t124;
}

int FUN_0c2180a0(void)
{
    int t23;
    int t29;
    int t40;
    int t75;
    int t79;
    int t83;
    int t89;
    int t95;
    int t96;
    int t108;
    int stk[18];

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
    L_C2180A0:;
    *(unsigned int *)0xA05F6900 = 0x8;
    *(unsigned int *)0xC9525AC = ((*(int *)0xC9525AC) | 0x2);
    *(unsigned int *)0xC95266C = ((*(int *)0xC95266C) + 0x1);
    R5 = (0xC95285C);
    if ((((*(int *)0xC952300) & 2) == 0)) goto L_C2180E0;
    goto L_C2180D2;
    L_C2180D2:;
    R0 = (((unsigned int)((unsigned int)((*(int *)0xA05F810C) & 0x400) >> 8) >> 2));
    goto L_C2180EC;
    L_C2180EC:;
    *(unsigned int *)((R5 + 0x0)) = R0;
    R12 = (0x1);
    R14 = (0x0);
    R9 = (0xC952800);
    if ((((*(int *)0xC95231C) & 0x4) != 4)) goto L_C21810A;
    goto L_C2180FE;
    L_C2180FE:;
    if (((*(int *)((R5 + 0x0))) != 1)) goto L_C21810A;
    goto L_C218104;
    L_C218104:;
    R4 = (R12);
    goto L_C218190;
    L_C218190:;
    if ((R4 == 0)) goto L_C218198;
    goto L_C218194;
    L_C218194:;
    goto L_C2183E8;
    L_C2183E8:;
    R0 = (0x0);
    goto L_C2183EA;
    L_C2183EA:;
    return R0;
    L_C218198:;
    *(unsigned int *)(((int)stk + 36)) = R14;
    if (((*(int *)0xC952678) == 0)) goto L_C2181A6;
    goto L_C2181A2;
    L_C2181A2:;
    R4 = (R12);
    goto L_C2183CC;
    L_C2183CC:;
    if ((R4 != 0)) goto L_C2183E8;
    goto L_C2183D0;
    L_C2183D0:;
    FUN_0c217a50();
    t23 = (FUN_0c217b80()) != 0;
    if (t23) goto L_C2183E0;
    goto L_C2183DC;
    L_C2183DC:;
    R0 = (0x1);
    goto L_C2183EA;
    L_C2183E0:;
    FUN_0c217e2a();
    *(unsigned int *)0xC952670 = R14;
    goto L_C2183E8;
    L_C2181A6:;
    R13 = (0xC952804);
    if (((*(int *)0xC952674) == 0)) goto L_C2181EA;
    goto L_C2181B0;
    L_C2181B0:;
    t29 = *(int *)((R13 + 0x18));
    *(unsigned int *)((R13 + 0x18)) = (t29 + 0x1);
    if (((unsigned int)(t29 + 0x1) <= (unsigned int)0x10)) goto L_C2181E6;
    goto L_C2181C0;
    L_C2181C0:;
    *(unsigned int *)0xA05F8048 = (*(int *)0xC9525C8);
    *(unsigned int *)0xA05F804C = (*(int *)0xC9525C0);
    *(unsigned int *)0xA05F8068 = (*(int *)0xC9525B0);
    *(unsigned int *)0xA05F806C = (*(int *)0xC9525B4);
    *(unsigned int *)0xC952504 = R14;
    *(unsigned int *)((R13 + 0x18)) = R14;
    goto L_C2181E6;
    L_C2181E6:;
    R4 = (R12);
    goto L_C2183CC;
    L_C2181EA:;
    *(unsigned int *)(((int)stk + 20)) = R14;
    *(unsigned int *)(((int)stk + 32)) = R14;
    *(unsigned int *)(((int)stk + 24)) = R14;
    *(unsigned int *)(((int)stk + 28)) = R14;
    R11 = (0xA05F8008);
    R8 = (0xA05F8044);
    goto L_C2183B4;
    L_C2183B4:;
    if (((int)(*(int *)(((int)stk + 20))) >= (int)0x4)) goto L_C2183C0;
    goto L_C2183BC;
    L_C2183BC:;
    goto L_C2181FA;
    L_C2181FA:;
    t40 = *(int *)(((int)stk + 20));
    R0 = (0xC952648);
    R10 = ((t40 << 2));
    if (((int)(*(int *)(((t40 << 2) + 0xC952648))) >= 0)) goto L_C21820A;
    goto L_C218206;
    L_C218206:;
    goto L_C21839C;
    L_C21839C:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x4);
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
    goto L_C2183B4;
    L_C21820A:;
    if ((((*(int *)((R10 + R0))) & R12) == 0)) goto L_C218214;
    goto L_C218210;
    L_C218210:;
    goto L_C21839C;
    L_C218214:;
    if (((*(int *)0xC952520) != 0)) goto L_C2182E0;
    goto L_C21821C;
    L_C21821C:;
    if (((*(int *)((R10 + R0))) != 4)) goto L_C218242;
    goto L_C218222;
    L_C218222:;
    *(unsigned int *)((R10 + 0xC952648)) = 0x5;
    if (((*(int *)0xC952504) == 0)) goto L_C218236;
    goto L_C218230;
    L_C218230:;
    *(unsigned int *)((R13 + 0x8)) = ((*(int *)((R13 + 0x8))) + 0x1);
    goto L_C218236;
    L_C218236:;
    *(unsigned int *)0xC952504 = R14;
    *(unsigned int *)((R11 + 0x0)) = 0x2;
    *(unsigned int *)((R11 + 0x0)) = R14;
    goto L_C21839C;
    L_C218242:;
    *(unsigned int *)((R9 + 0x0)) = R12;
    *(unsigned int *)(((int)stk + 36)) = R12;
    if (((*(int *)((R10 + 0xC952648))) == 2)) goto L_C218252;
    goto L_C21824E;
    L_C21824E:;
    goto L_C21839C;
    L_C218252:;
    *(unsigned int *)((R13 + 0x4)) = ((*(int *)((R13 + 0x4))) + 0x1);
    if (((unsigned int)(*(int *)((R13 + 0x4))) > (unsigned int)(*(int *)0xC952524))) goto L_C218266;
    goto L_C218262;
    L_C218262:;
    goto L_C21839C;
    L_C218266:;
    *(unsigned int *)((R13 + 0xC)) = ((*(int *)((R13 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)((R10 + 0xC952648)) = 0xFFFFFFFF;
    *(unsigned int *)0xC952508 = R14;
    *(unsigned int *)((R13 + 0x4)) = R14;
    goto L_C21839C;
    L_C2182E0:;
    *(unsigned int *)((R9 + 0x0)) = R12;
    *(unsigned int *)(((int)stk + 36)) = R12;
    if (((*(int *)((R10 + 0xC952648))) != 4)) goto L_C21836A;
    goto L_C2182EC;
    L_C2182EC:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) + 0x1);
    if (((unsigned int)(*(int *)((R13 + 0x0))) <= (unsigned int)(*(int *)0xC952520))) goto L_C21836A;
    goto L_C2182FC;
    L_C2182FC:;
    *(unsigned int *)((R13 + 0x8)) = ((*(int *)((R13 + 0x8))) + 0x1);
    *(unsigned int *)((R8 + 0x0)) = ((*(int *)0xC9525C4) & 0xFFFFFFFE);
    *(unsigned int *)((R11 + 0x0)) = 0x6;
    *(unsigned int *)((R11 + 0x0)) = R14;
    *(unsigned int *)((R8 + 0x0)) = (*(int *)0xC9525C4);
    t75 = *(int *)0xC952364;
    t79 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(kmiCreateRegionArray))((*(int *)0xC952758), (*(int *)0xC95275C), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    t83 = ((int (*)(int, int, int, int, int, int, int, int))(kmiCreateRegionArray))((*(int *)0xC952758), (*(int *)0xC95275C), 0x0, 0x1, 0x1, ((~(*(int *)0xC952364)) & R12), (R14), ((~t75) & R12));
    *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0xC952648)) = 0x5;
    *(unsigned int *)0xC952504 = R14;
    *(unsigned int *)0xC952854 = ((*(int *)0xC952854) + 0x1);
    *(unsigned int *)((R13 + 0x0)) = R14;
    goto L_C21836A;
    L_C21836A:;
    if (((*(int *)(((*(int *)(((int)stk + 24))) + 0xC952648))) != 2)) goto L_C21839C;
    goto L_C218374;
    L_C218374:;
    t89 = *(int *)((R13 + 0x4));
    *(unsigned int *)((R13 + 0x4)) = (t89 + 0x1);
    if (((unsigned int)(t89 + 0x1) <= (unsigned int)(*(int *)0xC952524))) goto L_C21839C;
    goto L_C218384;
    L_C218384:;
    *(unsigned int *)((R13 + 0xC)) = ((*(int *)((R13 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0xC952648)) = 0xFFFFFFFF;
    *(unsigned int *)0xC952508 = R14;
    *(unsigned int *)((R13 + 0x4)) = R14;
    goto L_C21839C;
    L_C2183C0:;
    t95 = *(int *)0xC952504;
    t96 = *(int *)(((int)stk + 36));
    *(unsigned int *)(((int)stk + 36)) = (t96 | t95);
    R4 = ((t96 | t95));
    goto L_C2183CC;
    L_C21810A:;
    *(unsigned int *)0xC9524DC = ((*(int *)0xC9524DC) - 1);
    if (((int)(*(int *)0xC9524DC) < 0)) goto L_C218184;
    goto L_C21811A;
    L_C21811A:;
    if (((*(int *)((R9 + 0x0))) == 0)) goto L_C218180;
    goto L_C218120;
    L_C218120:;
    *(unsigned int *)((R9 + 0x0)) = R14;
    R5 = (R14);
    goto L_C21818E;
    L_C21818E:;
    R4 = (R5);
    goto L_C218190;
    L_C218180:;
    R5 = (R12);
    goto L_C21818E;
    L_C218184:;
    *(unsigned int *)0xC9524DC = (*(int *)0xC9524E0);
    R5 = (R14);
    goto L_C21818E;
    L_C2180E0:;
    t108 = *(int *)0xC239A90;
    *(unsigned int *)0xC239A90 = ((t108 + 0x1) & 0x1);
    R0 = (((t108 + 0x1) & 0x1));
    goto L_C2180EC;
}

int kmiInitPAL(void)
{
    int t64;
    int t66;
    int t70;
    int t75;
    int t77;
    int t91;
    int t1;
    int t12;
    int t21;
    int t33;
    int t36;
    int t39;
    int t72;
    int t82;
    int stk[134];

    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x8)) = 0x35F;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x0)) = 0x8D;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x4)) = 0x34B;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x18)) = 0x3F;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t1 = *(int *)0xC95231C, (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x138;
    }
    if (((*(int *)0xC95231C) & 0x42) == 66) {
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t12 = *(int *)0xC95231C, (t12 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        if (((*(int *)0xC95231C) & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    } else {
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t21 = *(int *)0xC95231C, (t21 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        if (((*(int *)0xC95231C) & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x78)) = 0x15;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t33 = *(int *)0xC95231C, (t33 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x16A;
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0x1F;
        t36 = 0x5;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x31F;
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0xF;
        t36 = 0x3;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x1C)) = t36;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t39 = *(int *)0xC95231C, (t39 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x0;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x3C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x40)) = 0x0;
    if (((*(int *)0xC95231C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
        }
    } else {
        if (((*(int *)0xC95231C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
            } else {
                *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
            }
        }
    }
    if ((*(int *)0xC9522FC) == 6) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x3F;
    }
    if (((*(int *)0xC95231C) & 16) != 0) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x6C)) = 0x0;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x6C)) = 0x1;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x28)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x2C)) = 0x1;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x48)) = 0x1;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x4C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x50)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x54)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x58)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x5C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x68)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x60)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x64)) = 0xF0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF8)) = 0xAE;
    if (((*(int *)0xC95231C) & 0x42) == 66) {
        t64 = *(int *)0xC237838;
        *(unsigned int *)((((int)stk + 256) + 0x0)) = (*(int *)0xC237834);
        *(unsigned int *)((((int)stk + 256) + 0x4)) = t64;
        t66 = *(int *)0xC237840;
        *(unsigned int *)((((int)stk + 256) + 0x8)) = (*(int *)0xC23783C);
        *(unsigned int *)((((int)stk + 256) + 0xC)) = t66;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = (*(int *)0xC237844);
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = (*(int *)((((int)stk + 256) + ((*(int *)0xC95232C) << 2))));
        t70 = *(int *)(((((int)stk + 256) + 0x14) + 0xF4));
        t75 = t70;
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t72 = *(int *)0xC95231C, (t72 & 44) != 0) && (0x1 != 0))) {
            t75 = (t70 - 1);
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = t75;
        t77 = *(int *)((((*(int *)0xC95232C) << 2) + 0xC9527D4));
        *(unsigned int *)0xC95261C = (((int)((unsigned int)((int)((unsigned int)t77 + (unsigned int)0x0)) + ((((int)0x0 > (int)t77)) ? 1u : 0u))) >> 1);
    } else {
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t82 = *(int *)0xC95231C, (t82 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2D;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2E;
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = 0x2E;
        *(unsigned int *)0xC95261C = 0xF0;
    }
    t91 = *(int *)(((((int)stk + 256) + 0x14) + 0xC));
    *(unsigned int *)0xC952614 = ((((int)((unsigned int)((int)((unsigned int)t91 + (unsigned int)0x0)) + ((((int)0x0 > (int)t91)) ? 1u : 0u))) >> 1) + (*(int *)0xC95261C));
    *(unsigned int *)0xC952618 = (*(int *)(((((int)stk + 256) + 0x14) + 0xC)));
    FUN_0c0e6118();
    return (FUN_0c220360());
}
