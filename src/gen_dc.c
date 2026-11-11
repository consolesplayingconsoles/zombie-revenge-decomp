/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01a320(int, int);
int FUN_0c01a5b8(int);
int FUN_0c01a632(int);
int FUN_0c0745a0(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b72d6(int);
int FUN_0c0ba130(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
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
int _modls(int);
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
int FUN_0c0747d6(int);
int FUN_0c0e44b0(int a4, int a5, int a6);
int FUN_0c0a5fdc(void);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2180a0(void);
int kmiInitPAL(void);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };







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
    int R1016;
    int R1020;

    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    stk[24] = a8;
    R1016 = a6;
    R1020 = a7;
    t0 = (((struct o4_int *)0xC237784)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = ((((struct o0_int *)0xC237784)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = (((struct oC_int *)0xC237784)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = ((((struct o8_int *)0xC237784)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    (((struct o0_uint *)0xC952940)->v) = 0x1;
    t5 = a5;
    if (((*(int *)0xC952300) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    (((struct o0_uint *)0xC9528EC)->v) = a4;
    (((struct o4_uint *)0xC9528EC)->v) = t5;
    (((struct o8_uint *)0xC9528EC)->v) = (R1016);
    (((struct oC_uint *)0xC9528EC)->v) = (R1020);
    (((struct o10_uint *)0xC9528EC)->v) = a8;
    if (((((struct o0_int *)0xC239C6C)->v)) != 0x80000000) {
        t10 = (((struct o0_int *)0xC239C6C)->v);
        (((struct o0_uint *)0xC239C6C)->v) = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC239C6C)->v) = 0x80000000;
            t21 = (kmiAllocSysConfig(((((struct o0_int *)0xC952940)->v))));
        }
        t124 = t21;
    } else {
        *(unsigned int *)(((int)stk + 24)) = (kmiChkActiveListType(t5, (R1016), (R1020), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o10_int *)0xC952754)->v));
        (((struct o4_uint *)0xC239C6C)->v) = 0x0;
        t27 = 0xC9529D4;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC9529E4) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = R1016;
        t30 = kmiGetPackOBPParam(t5, t28, (R1020), a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 28)) = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = R1020;
        *(volatile int *)(((int)stk + 24));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (R1020);
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
        R1016 = (((int)stk + 16) + 0x20);
        (((struct o4_uint *)0xC9528EC)->v) = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        (((struct o8_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x20) + 0x8);
        (((struct oC_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        (((struct o10_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        R1016 = (*(int *)(((R1016) + 0x0)));
        R1020 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        t56 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 96)) = t56;
        t58 = 0x2;
        if ((*(int *)0xC952640) == 1) {
            t58 = 0x1;
        }
        t64 = kmiGetVertexBasePointer((R1016), (R1020), (*(int *)(((int)stk + 24))), t56, 0x0);
        t115 = t64;
        if (t64 == 0) {
            kmiGetDisplayData(0xFF, ((((struct o18_int *)0xC9528EC)->v)), ((((struct o24_int *)0xC9528EC)->v)));
            t68 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t68 = 0x10000;
            }
            (((struct o4_uint *)0xC952940)->v) = ((t68 << 2) + ((((struct o10_int *)0xC952940)->v)));
            t71 = (((struct oC_int *)0xC952940)->v);
            if ((unsigned int)((((struct o4_int *)0xC952940)->v)) > (unsigned int)((-t71) + 0x200000)) {
                (((struct o4_uint *)0xC952940)->v) = ((-t71) + 0x200000);
            }
            t75 = kmiTAallocEx(((((struct o4_int *)0xC952940)->v)), 0xC9529CC, 0xC9529D0);
            if (t75 == 0) {
                (((struct o0_uint *)0xC952754)->v) = ((((struct o4_int *)0xC952940)->v));
                t83 = kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC952368)->v)) >> 7), ((~((((struct o18_int *)0xC9528EC)->v))) & (*(int *)(((int)stk + 28)))));
                (((struct o20_uint *)0xC952980)->v) = ((((struct o38_int *)0xC952940)->v));
                (((struct o24_uint *)0xC952980)->v) = ((((struct o3C_int *)0xC952940)->v));
                t86 = (((struct o0_int *)0xC952980)->v);
                (((struct o28_uint *)0xC952980)->v) = t86;
                (((struct o2C_uint *)0xC952980)->v) = ((((struct o4_int *)0xC952980)->v));
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
                (((struct o14_uint *)0xC952940)->v) = 0x0;
                (((struct o18_uint *)0xC952940)->v) = 0x0;
                (((struct o1C_uint *)0xC952940)->v) = 0x0;
                (((struct o20_uint *)0xC952940)->v) = 0x0;
                (((struct o24_uint *)0xC952940)->v) = 0xC952978;
                (((struct o28_uint *)0xC952940)->v) = 0xC9529A0;
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
                    t101 = ((((struct o28_int *)0xC952940)->v));
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
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    L_C2180A0:;
    *(unsigned int *)0xA05F6900 = 0x8;
    (((struct o0_uint *)0xC9525AC)->v) = (((((struct o0_int *)0xC9525AC)->v)) | 0x2);
    (((struct o0_uint *)0xC95266C)->v) = (((((struct o0_int *)0xC95266C)->v)) + 0x1);
    R5 = (0xC95285C);
    if (((((((struct o0_int *)0xC952300)->v)) & 2) == 0)) goto L_C2180E0;
    goto L_C2180D2;
    L_C2180D2:;
    R0 = (((unsigned int)((unsigned int)((*(int *)0xA05F810C) & 0x400) >> 8) >> 2));
    goto L_C2180EC;
    L_C2180EC:;
    *(unsigned int *)((R5 + 0x0)) = R0;
    R12 = (0x1);
    R14 = (0x0);
    R9 = (0xC952800);
    if (((((((struct o1C_int *)0xC952300)->v)) & 0x4) != 4)) goto L_C21810A;
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
    R1036 = R14;
    if ((((((struct oC_int *)0xC95266C)->v)) == 0)) goto L_C2181A6;
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
    (((struct o4_uint *)0xC95266C)->v) = R14;
    goto L_C2183E8;
    L_C2181A6:;
    R13 = (0xC952804);
    if ((((((struct o8_int *)0xC95266C)->v)) == 0)) goto L_C2181EA;
    goto L_C2181B0;
    L_C2181B0:;
    t29 = *(int *)((R13 + 0x18));
    *(unsigned int *)((R13 + 0x18)) = (t29 + 0x1);
    if (((unsigned int)(t29 + 0x1) <= (unsigned int)0x10)) goto L_C2181E6;
    goto L_C2181C0;
    L_C2181C0:;
    (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC9525AC)->v));
    (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC9525AC)->v));
    (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC9525AC)->v));
    (((struct o24_uint *)0xA05F8048)->v) = ((((struct o8_int *)0xC9525AC)->v));
    (((struct o28_uint *)0xC9524DC)->v) = R14;
    *(unsigned int *)((R13 + 0x18)) = R14;
    goto L_C2181E6;
    L_C2181E6:;
    R4 = (R12);
    goto L_C2183CC;
    L_C2181EA:;
    R1020 = R14;
    R1032 = R14;
    R1024 = R14;
    R1028 = R14;
    R11 = (0xA05F8008);
    R8 = (0xA05F8044);
    goto L_C2183B4;
    L_C2183B4:;
    if (((int)(R1020) >= (int)0x4)) goto L_C2183C0;
    goto L_C2183BC;
    L_C2183BC:;
    goto L_C2181FA;
    L_C2181FA:;
    t40 = R1020;
    R0 = (0xC952648);
    R10 = ((t40 << 2));
    if (((int)(*(int *)(((t40 << 2) + 0xC952648))) >= 0)) goto L_C21820A;
    goto L_C218206;
    L_C218206:;
    goto L_C21839C;
    L_C21839C:;
    R1020 = ((R1020) + 0x1);
    R1032 = ((R1032) + 0x4);
    R1024 = ((R1024) + 0x4);
    R1028 = ((R1028) + 0x4);
    goto L_C2183B4;
    L_C21820A:;
    if ((((*(int *)((R10 + R0))) & R12) == 0)) goto L_C218214;
    goto L_C218210;
    L_C218210:;
    goto L_C21839C;
    L_C218214:;
    if ((((((struct o0_int *)0xC952520)->v)) != 0)) goto L_C2182E0;
    goto L_C21821C;
    L_C21821C:;
    if (((*(int *)((R10 + R0))) != 4)) goto L_C218242;
    goto L_C218222;
    L_C218222:;
    *(unsigned int *)((R10 + 0xC952648)) = 0x5;
    if ((((((struct o28_int *)0xC9524DC)->v)) == 0)) goto L_C218236;
    goto L_C218230;
    L_C218230:;
    *(unsigned int *)((R13 + 0x8)) = ((*(int *)((R13 + 0x8))) + 0x1);
    goto L_C218236;
    L_C218236:;
    (((struct o28_uint *)0xC9524DC)->v) = R14;
    *(unsigned int *)((R11 + 0x0)) = 0x2;
    *(unsigned int *)((R11 + 0x0)) = R14;
    goto L_C21839C;
    L_C218242:;
    *(unsigned int *)((R9 + 0x0)) = R12;
    R1036 = R12;
    if (((*(int *)((R10 + 0xC952648))) == 2)) goto L_C218252;
    goto L_C21824E;
    L_C21824E:;
    goto L_C21839C;
    L_C218252:;
    *(unsigned int *)((R13 + 0x4)) = ((*(int *)((R13 + 0x4))) + 0x1);
    if (((unsigned int)(*(int *)((R13 + 0x4))) > (unsigned int)((((struct o4_int *)0xC952520)->v)))) goto L_C218266;
    goto L_C218262;
    L_C218262:;
    goto L_C21839C;
    L_C218266:;
    *(unsigned int *)((R13 + 0xC)) = ((*(int *)((R13 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)((R10 + 0xC952648)) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC9524DC)->v) = R14;
    *(unsigned int *)((R13 + 0x4)) = R14;
    goto L_C21839C;
    L_C2182E0:;
    *(unsigned int *)((R9 + 0x0)) = R12;
    R1036 = R12;
    if (((*(int *)((R10 + 0xC952648))) != 4)) goto L_C21836A;
    goto L_C2182EC;
    L_C2182EC:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) + 0x1);
    if (((unsigned int)(*(int *)((R13 + 0x0))) <= (unsigned int)((((struct o0_int *)0xC952520)->v)))) goto L_C21836A;
    goto L_C2182FC;
    L_C2182FC:;
    *(unsigned int *)((R13 + 0x8)) = ((*(int *)((R13 + 0x8))) + 0x1);
    *(unsigned int *)((R8 + 0x0)) = (((((struct o18_int *)0xC9525AC)->v)) & 0xFFFFFFFE);
    *(unsigned int *)((R11 + 0x0)) = 0x6;
    *(unsigned int *)((R11 + 0x0)) = R14;
    *(unsigned int *)((R8 + 0x0)) = ((((struct o18_int *)0xC9525AC)->v));
    t75 = *(int *)0xC952364;
    t79 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(kmiCreateRegionArray))(((((struct o0_int *)0xC952758)->v)), ((((struct o4_int *)0xC952758)->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), R1020, R1024, R1028, R1032, R1036, *(int *)((int)stk + 12 + 28));
    t83 = ((int (*)(int, int, int, int, int, int, int, int))(kmiCreateRegionArray))(((((struct o0_int *)0xC952758)->v)), ((((struct o4_int *)0xC952758)->v)), 0x0, 0x1, 0x1, ((~(*(int *)0xC952364)) & R12), (R14), ((~t75) & R12));
    *(unsigned int *)(((R1028) + 0xC952648)) = 0x5;
    (((struct o28_uint *)0xC9524DC)->v) = R14;
    *(unsigned int *)0xC952854 = ((*(int *)0xC952854) + 0x1);
    *(unsigned int *)((R13 + 0x0)) = R14;
    goto L_C21836A;
    L_C21836A:;
    if (((*(int *)(((R1024) + 0xC952648))) != 2)) goto L_C21839C;
    goto L_C218374;
    L_C218374:;
    t89 = *(int *)((R13 + 0x4));
    *(unsigned int *)((R13 + 0x4)) = (t89 + 0x1);
    if (((unsigned int)(t89 + 0x1) <= (unsigned int)((((struct o4_int *)0xC952520)->v)))) goto L_C21839C;
    goto L_C218384;
    L_C218384:;
    *(unsigned int *)((R13 + 0xC)) = ((*(int *)((R13 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)(((R1032) + 0xC952648)) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC9524DC)->v) = R14;
    *(unsigned int *)((R13 + 0x4)) = R14;
    goto L_C21839C;
    L_C2183C0:;
    t95 = (((struct o28_int *)0xC9524DC)->v);
    t96 = R1036;
    R1036 = (t96 | t95);
    R4 = ((t96 | t95));
    goto L_C2183CC;
    L_C21810A:;
    (((struct o0_uint *)0xC9524DC)->v) = (((((struct o0_int *)0xC9524DC)->v)) - 1);
    if (((int)((((struct o0_int *)0xC9524DC)->v)) < 0)) goto L_C218184;
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
    (((struct o0_uint *)0xC9524DC)->v) = ((((struct o4_int *)0xC9524DC)->v));
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
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC9522FC)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x14)) = 0x138;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x42) == 66) {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t12 = (((struct o20_int *)0xC9522FC)->v), (t12 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    } else {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC9522FC)->v), (t21 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x134;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x74)) = 0x136;
        }
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x78)) = 0x15;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t33 = (((struct o20_int *)0xC9522FC)->v), (t33 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x16A;
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0x1F;
        t36 = 0x5;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x20)) = 0x31F;
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x24)) = 0xF;
        t36 = 0x3;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x1C)) = t36;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t39 = (((struct o20_int *)0xC9522FC)->v), (t39 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x30)) = 0x0;
    }
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x3C)) = 0x0;
    *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x40)) = 0x0;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x0;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x44)) = 0x2;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
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
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0x70)) = 0x3F;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 16) != 0) {
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
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x42) == 66) {
        t64 = (((struct o4_int *)0xC237834)->v);
        *(unsigned int *)((((int)stk + 256) + 0x0)) = ((((struct o0_int *)0xC237834)->v));
        *(unsigned int *)((((int)stk + 256) + 0x4)) = t64;
        t66 = (((struct oC_int *)0xC237834)->v);
        *(unsigned int *)((((int)stk + 256) + 0x8)) = ((((struct o8_int *)0xC237834)->v));
        *(unsigned int *)((((int)stk + 256) + 0xC)) = t66;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = ((((struct o10_int *)0xC237834)->v));
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = (*(int *)((((int)stk + 256) + (((((struct o30_int *)0xC9522FC)->v)) << 2))));
        t70 = *(int *)(((((int)stk + 256) + 0x14) + 0xF4));
        t75 = t70;
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t72 = (((struct o20_int *)0xC9522FC)->v), (t72 & 44) != 0) && (0x1 != 0))) {
            t75 = (t70 - 1);
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = t75;
        t77 = *(int *)(((((((struct o30_int *)0xC9522FC)->v)) << 2) + 0xC9527D4));
        (((struct o8_uint *)0xC952614)->v) = (((int)((unsigned int)((int)((unsigned int)t77 + (unsigned int)0x0)) + ((((int)0x0 > (int)t77)) ? 1u : 0u))) >> 1);
    } else {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t82 = (((struct o20_int *)0xC9522FC)->v), (t82 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2D;
        } else {
            *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF0)) = 0x2E;
        }
        *(unsigned int *)(((((int)stk + 256) + 0x14) + 0xF4)) = 0x2E;
        (((struct o8_uint *)0xC952614)->v) = 0xF0;
    }
    t91 = *(int *)(((((int)stk + 256) + 0x14) + 0xC));
    (((struct o0_uint *)0xC952614)->v) = ((((int)((unsigned int)((int)((unsigned int)t91 + (unsigned int)0x0)) + ((((int)0x0 > (int)t91)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC952614)->v)));
    (((struct o4_uint *)0xC952614)->v) = (*(int *)(((((int)stk + 256) + 0x14) + 0xC)));
    FUN_0c0e6118();
    return (FUN_0c220360());
}
