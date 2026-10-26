/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int FUN_0c0164d6(void);
int FUN_0c016530(void);
int FUN_0c016576(void);
int FUN_0c0165bc(void);
int FUN_0c016602(void);
int FUN_0c0166c4(void);
int FUN_0c0168b0(void);
int FUN_0c033c8c(int, int, int, float);
int FUN_0c038ce0(int, int);
int FUN_0c039e96(int);
int FUN_0c043200(int);
int FUN_0c0432e2(int);
int FUN_0c043510(int);
int FUN_0c04356c(int);
int FUN_0c043724(int);
int FUN_0c0438ac(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c043b7c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c062a74(int);
int FUN_0c062d04(void);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086b70(void);
int FUN_0c08d834(int, Stk3);
int FUN_0c08d840(int, float);
int FUN_0c0b25d0(void);
int FUN_0c0b2a28(int);
int FUN_0c0b70a0(int);
int FUN_0c0b72d6(int);
int FUN_0c0bffc4(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c5d32(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6ac(void);
int FUN_0c0cc6dc(void);
int FUN_0c0cf908(void);
int FUN_0c0d9000(int, int, int, int, int, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1138(int, float, float, float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c22a934(void);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int gdFsTell(int);
int get_fat(int, int, int, int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFatalErrorEntry(int, int, int, int);
int kmiWaitForFinishDMA(int);
extern int kmiWriteRegister();
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int set_vmstime(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
void FUN_0c0c5f5e(int a4);
int FUN_0c0b0eba(int a4, int a5, int a6, int a7);
int FUN_0c03aaa2(int a4, int a5);
int kmLoadYUVTexture(int a4, int a5, int a6, int a7, int a8, int a9);
void FUN_0c062d4a(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void syChainDeleteHandler(int a4);
int adxstmf_stat_exec(int a4, int a5);
int FUN_0c02eaee(int a4);
int FUN_0c065eb2(void);
void vmsfs_fclose(int a4, int a5);
int FUN_0c05f07c(int a4);
int FUN_0c0b2b18(int a4, int a5, int a6, int a7);
void vmsfs_xcreate(int a4, int a5, int a6, int a7);
int FUN_0c016728(int a4, int a5, int a6, int a7);
int FUN_0c0453ac(int a4);
int FUN_0c0da9a0(int a4, int a5, int a6, int a7);
int FUN_0c218514(int a4, int a5, int a6, int a7);
int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int FUN_0c043d88(int a4);

void FUN_0c0c5f5e(int a4)
{
    int t3;
    int t9;
    int t10;
    float u15;
    float u25;
    int t36;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    L_C0C5F5E:;
    R14 = (R4);
    if (((*(short *)((R4 + 0x27E))) != 0)) goto L_C0C5F7A;
    goto L_C0C5F76;
    L_C0C5F76:;
    goto L_C0C609A;
    L_C0C609A:;
    t3 = *(short *)((R14 + 0x27C));
    *(unsigned short *)((R14 + 0x27C)) = (t3 - 1);
    R0 = (0x27C);
    if (((int)(short)(t3 - 1) > 0)) goto L_C0C60C0;
    goto L_C0C60A8;
    L_C0C60A8:;
    *(unsigned short *)(((0x27C + R14) + 0x0)) = (((FUN_0c0da2e0()) & 0x1F) + 0x12C);
    *(unsigned short *)((R14 + 0x27E)) = 0x1;
    R0 = (0x27E);
    goto L_C0C60C0;
    L_C0C60C0:;
    return;
    L_C0C5F7A:;
    t9 = *(int *)((((*(int *)((R14 + 0x220))) << 2) + 0xC1E9790));
    t10 = *(short *)((R14 + 0x27C));
    *(unsigned short *)((R14 + 0x27C)) = (t10 - 1);
    R13 = (t9);
    if (((int)(short)(t10 - 1) > 0)) goto L_C0C5FAA;
    goto L_C0C5F92;
    L_C0C5F92:;
    *(unsigned short *)(((0x27C + R14) + 0x0)) = (((FUN_0c0da2e0()) & 0x1F) + 0xB4);
    *(unsigned short *)((R14 + 0x27E)) = 0x0;
    goto L_C0C5FAA;
    L_C0C5FAA:;
    FUN_0c0db470((R14 + 0x30), ((int)stk + 4));
    u15 = *(float *)(((int)stk + 12));
    R0 = (0xC0C603C);
    F15 = (u15);
    if ((u15 > -100.0f)) goto L_C0C5FC4;
    goto L_C0C5FC0;
    L_C0C5FC0:;
    goto L_C0C60C0;
    L_C0C5FC4:;
    R0 = (0xC0C6040);
    if ((!(5.0f > F15))) goto L_C0C60C0;
    goto L_C0C5FCC;
    L_C0C5FCC:;
    if ((((*(int *)0xC23A258) & 1) == 0)) goto L_C0C608E;
    goto L_C0C5FD4;
    L_C0C5FD4:;
    u25 = 298.399994f;
    u25 = u25 + 320.0f * ((*(float *)(((int)stk + 4))) / ((*(float *)0xC247D0C) * F15));
    *(float *)0xC31FCC0 = u25;
    *(float *)0xC31FCC4 = ((-(((((*(float *)(((int)stk + 8))) + 5.0f) / ((*(float *)0xC247D10) * (*(float *)(((int)stk + 12)))))) * 240.0f)) + 240.0f);
    *(float *)0xC31FCC8 = (-(*(float *)(((int)stk + 12))));
    R11 = (0xC0C0340);
    R12 = (0xC1E8760);
    R14 = (0xC31FCBC);
    F15 = (7.19999933f);
    F4 = (240.0f);
    goto L_C0C6086;
    L_C0C6086:;
    t36 = *(signed char *)((R13 + 0x0));
    R13 = ((R13 + 0x1));
    R4 = (t36);
    if (((signed char)t36 != 0)) goto L_C0C606C;
    goto L_C0C608E;
    L_C0C608E:;
    *(volatile float *)0xC0C616C;
    R0 = ((FUN_0c0c5d32(((int)stk + 4))));
    goto L_C0C60C0;
    L_C0C606C:;
    if (((signed char)R4 == 32)) goto L_C0C607E;
    goto L_C0C6072;
    L_C0C6072:;
    *(unsigned int *)((R14 + 0x0)) = (*(short *)((R12 + ((signed char)R4 << 1))));
    FUN_0c0c0340(0xC31FCBC, F4);
    goto L_C0C607E;
    L_C0C607E:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    goto L_C0C6086;
}

int FUN_0c0b0eba(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t15;
    int t24;
    int t54;
    int t56;
    int t97;
    int t134;
    int t136;
    int t139;
    int t124;
    int t87;
    int t59;
    int t44;
    float u10;
    float u39;
    int t68;
    float u77;
    int t103;
    float u114;

    t0 = *(int *)0xC247CAC;
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 != 4) {
                        t15 = t1;
                        if (t1 != 5) {
                        } else {
                            if ((0x1 & (*(int *)0xC23ED88)) != 0) {
                                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFE);
                                FUN_0c0e19f2(0xC23ED88, 0x1, 0xFFFFFFFE, a7);
                            } else {
                                u10 = 0.049999997f;
                            }
                            FUN_0c0d9000(0x0, 0x0, ((-(*(int *)((a4 + 0x98)))) + 0x13), 0xE, 0x5, u10);
                            *(float *)((t0 + 0x29C)) = (-(*(float *)((a4 + 0x90))));
                            t15 = 0x29C;
                        }
                        t44 = t15;
                    } else {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 1);
                        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 0.049999997f);
                        t24 = *(int *)((a4 + 0xA4));
                        *(unsigned int *)((a4 + 0xA4)) = (t24 - 1);
                        if ((int)(t24 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        }
                        if ((0x1 & (*(int *)0xC23ED88)) != 0) {
                            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFE);
                            FUN_0c0e19f2(0xC23ED88, 0x1, 0xFFFFFFFE, a7);
                        } else {
                            u39 = 0.049999997f;
                        }
                        FUN_0c0d9000(0x0, 0x0, ((-(*(int *)((a4 + 0x98)))) + 0x13), 0xE, 0x5, u39);
                        *(float *)((t0 + 0x29C)) = (-(*(float *)((a4 + 0x90))));
                        t44 = 0x29C;
                    }
                    t59 = t44;
                } else {
                    FUN_0c0d9000(0x0, 0x0, ((-(*(int *)((a4 + 0x98)))) + 0x13), 0xE, 0x5, 0.049999997f);
                    *(float *)((t0 + 0x29C)) = (-(*(float *)((a4 + 0x90))));
                    t54 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t54 - 1);
                    t56 = 0xA0;
                    if ((int)(t54 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        t56 = 0x80;
                    }
                    t59 = t56;
                }
                t87 = t59;
            } else {
                if (((0x1 & (*(int *)0xC23ED88)) == 0) && (t68 = *(int *)0xC23ED5C, (t68 & 2) == 0)) {
                    u77 = 0.049999997f;
                } else {
                    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFE);
                    FUN_0c0e19f2(0xC23ED88, 0x1, 0xFFFFFFFE, a7);
                }
                if ((*(int *)((a4 + 0x88))) == 0) {
                    FUN_0c0d9000((*(int *)((a4 + 0x98))), 0x0, 0x13, 0xE, 0x5, u77);
                    *(float *)((t0 + 0x29C)) = (*(float *)((a4 + 0x90)));
                } else {
                    FUN_0c0d9000(0x0, 0x0, ((-(*(int *)((a4 + 0x98)))) + 0x13), 0xE, 0x5, u77);
                    *(float *)((t0 + 0x29C)) = (-(*(float *)((a4 + 0x90))));
                }
                t87 = 0x29C;
            }
            t124 = t87;
        } else {
            *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.049999997f);
            t97 = *(int *)((a4 + 0xA4));
            *(unsigned int *)((a4 + 0xA4)) = (t97 - 1);
            if ((int)(t97 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
            if (((0x1 & (*(int *)0xC23ED88)) == 0) && (t103 = *(int *)0xC23ED5C, (t103 & 2) == 0)) {
                u114 = 0.049999997f;
            } else {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFE);
                FUN_0c0e19f2(0xC23ED88, 0x1, 0xFFFFFFFE, a7);
            }
            if ((*(int *)((a4 + 0x88))) == 0) {
                FUN_0c0d9000((*(int *)((a4 + 0x98))), 0x0, 0x13, 0xE, 0x5, u114);
                *(float *)((t0 + 0x29C)) = (*(float *)((a4 + 0x90)));
            } else {
                FUN_0c0d9000(0x0, 0x0, ((-(*(int *)((a4 + 0x98)))) + 0x13), 0xE, 0x5, u114);
                *(float *)((t0 + 0x29C)) = (-(*(float *)((a4 + 0x90))));
            }
            t124 = 0x29C;
        }
        t139 = t124;
    } else {
        FUN_0c0d9000(0x0, 0x0, 0x13, 0xE, 0x5, 0.049999997f);
        *(float *)((t0 + 0x29C)) = (*(float *)((a4 + 0x90)));
        t134 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t134 - 1);
        t136 = 0xA0;
        if ((int)(t134 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            t136 = 0x80;
        }
        t139 = t136;
    }
    return t139;
}

int FUN_0c03aaa2(int a4, int a5)
{
    int t6;
    int t12;
    int t15;
    int t16;
    int t18;
    int t22;
    int t23;
    int t25;
    int t46;
    int t51;
    int t39;
    int t42;
    int t11;
    int t33;
    int t36;

    FUN_0c038ce0(a4, a5);
    if ((int)(*(int *)((a4 + 0x57C))) < (int)0x3) {
        *(unsigned int *)((a4 + 0x57C)) = 0x3;
    }
    if ((*(int *)((a4 + 0x1BC))) == 11) {
        t6 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((((*(int *)(((0x5A0 + a4) + 0x0))) << 1) + (0x11A + (*(int *)((((((t6 << 2) + t6) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
        *(unsigned int *)((a4 + 0x4C4)) = 0x3;
        t39 = 0x4C4;
        t42 = 0x7;
    } else {
        if (((*(int *)((a4 + 0x5A8))) == 1) && (t11 = *(int *)((a4 + 0x580)), t11 == 0)) {
            t12 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t12 << 2) + t12) << 2)) + 0x10))) + 0x82)));
            *(unsigned int *)((a4 + 0x4C4)) = 0x4;
            *(unsigned int *)((a4 + 0x4C8)) = 0x6;
            t33 = 0x4C8;
            t36 = 0x1;
        } else {
            t15 = *(int *)((a4 + 0x4F0));
            t16 = *(int *)(((0x584 + a4) + 0x0));
            t18 = *(int *)(((0x5A4 + a4) + 0x0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + (((*(int *)((((((t15 << 2) + t15) << 2) + 0xC1F8E3C) + 0x10))) + ((((t16 << 1) + t16) << 2) << 2)) + (((t18 << 1) + t18) << 2)))));
            if ((int)(*(int *)((a4 + 0x304))) <= 0) {
                t22 = *(int *)((a4 + 0x4F0));
                t23 = *(int *)((a4 + 0x584));
                t25 = *(int *)((a4 + 0x5A4));
                *(unsigned int *)(((0x5B8 + a4) + 0x0)) = (unsigned short)(*(short *)((((((t25 << 1) + t25) << 2) + (((((t23 << 1) + t23) << 2) << 2) + (*(int *)(((0xC1F8E3C + (((t22 << 2) + t22) << 2)) + 0x10))))) + 0xA)));
            }
            *(unsigned int *)((a4 + 0x4C4)) = 0x3;
            t33 = 0x4C4;
            t36 = 0x7;
        }
        t39 = t33;
        t42 = t36;
    }
    *(unsigned int *)((a4 + (t39 + 0x4))) = t42;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    t46 = *(int *)((a4 + 0x578));
    if (t46 == 9) {
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t51 = *(int *)((a4 + 0xC8));
            if ((t51 & 4) != 0) {
                return FUN_0c039e96(a4);
            }
            return t51;
        }
        return 0x304;
    }
    return t46;
}

int kmLoadYUVTexture(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t4;
    int t30;
    int t35;
    int t37;
    int t41;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C21AE92:;
    R12 = (R5);
    R13 = (R4);
    if (((0x1F & R5) == 0)) goto L_C21AEAE;
    goto L_C21AEAA;
    L_C21AEAA:;
    R0 = (0x7);
    goto L_C21AFEE;
    L_C21AFEE:;
    return R0;
    L_C21AEAE:;
    t4 = *(int *)((R13 + 0x18));
    R4 = (0x1);
    R5 = (t4);
    if (((t4 & 0x1) != 0)) goto L_C21AEFC;
    goto L_C21AEB8;
    L_C21AEB8:;
    if (((0x4 & R5) != 0)) goto L_C21AEFC;
    goto L_C21AEBE;
    L_C21AEBE:;
    if (((0x8 & R5) != 0)) goto L_C21AEFC;
    goto L_C21AEC4;
    L_C21AEC4:;
    if (((0x20 & R5) != 0)) goto L_C21AEFC;
    goto L_C21AECA;
    L_C21AECA:;
    if ((((*(int *)((R13 + 0x8))) & 0x18000000) == 0)) goto L_C21AEFC;
    goto L_C21AED2;
    L_C21AED2:;
    R0 = (a8);
    R5 = (0x0);
    if ((a8 == 6)) goto L_C21AEE2;
    goto L_C21AEDA;
    L_C21AEDA:;
    if ((R0 == 3)) goto L_C21AEE6;
    goto L_C21AEDE;
    L_C21AEDE:;
    goto L_C21AEFC;
    L_C21AEFC:;
    R0 = (0x4);
    goto L_C21AFEE;
    L_C21AEE6:;
    R10 = (R4);
    goto L_C21AEE8;
    L_C21AEE8:;
    if (((int)R6 < (int)R4)) goto L_C21AEFC;
    goto L_C21AEEC;
    L_C21AEEC:;
    if (((int)R6 > (int)0x40)) goto L_C21AEFC;
    goto L_C21AEF2;
    L_C21AEF2:;
    if (((int)R7 < (int)R4)) goto L_C21AEFC;
    goto L_C21AEF6;
    L_C21AEF6:;
    if (((int)R7 <= (int)0x40)) goto L_C21AF00;
    goto L_C21AEFC;
    L_C21AF00:;
    R0 = ((R6 * R7));
    if (((int)(R6 * R7) < (int)0x2)) goto L_C21AF40;
    goto L_C21AF0A;
    L_C21AF0A:;
    R11 = (R7);
    R5 = (R4);
    R6 = ((R6 - 1));
    goto L_C21AF4E;
    L_C21AF4E:;
    t30 = ((R6 + 0x1) * ((R11 - 1) + 0x1));
    R11 = ((R11 - 1));
    R7 = t30;
    if ((R10 != 0)) goto L_C21AF7C;
    goto L_C21AF60;
    L_C21AF60:;
    if ((R5 != 0)) goto L_C21AF6A;
    goto L_C21AF64;
    L_C21AF64:;
    R14 = (R7);
    R3 = (R7);
    goto L_C21AF6E;
    L_C21AF6E:;
    R14 = (((((((R14 << 1) + R3) << 2) << 2) << 2) << 1));
    goto L_C21AF8A;
    L_C21AF8A:;
    t35 = ((int (*)(int, int, int, int))(kmiWriteRegister))(0x14C, ((((((R10 & R4) << 16) << 8) | ((R5 & R4) << 16)) | ((R11 & 0x3F) << 8)) | (R6 & 0x3F)), (R6 & 0x3F), 0x3F);
    t37 = ((int (*)(int, int))(kmiWriteRegister))(0x148, ((*(int *)((R13 + 0x1C))) & 0xFFFFF8));
    R10 = (0xC216CC0);
    R11 = (0x10800000);
    R13 = (0x100);
    goto L_C21AFBE;
    L_C21AFBE:;
    t41 = kmiDMAtoTARequest(R11, R12, R14, 0x18, ((int)stk + 8));
    R4 = ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
    R5 = (t41);
    if ((t41 == R13)) goto L_C21AFBE;
    goto L_C21AFD8;
    L_C21AFD8:;
    if ((R5 == 0)) goto L_C21AFE0;
    goto L_C21AFDC;
    L_C21AFDC:;
    R0 = (0x8);
    goto L_C21AFEE;
    L_C21AFE0:;
    if ((a9 != 1)) goto L_C21AFEC;
    goto L_C21AFE6;
    L_C21AFE6:;
    kmiWaitForFinishDMA(R4);
    goto L_C21AFEC;
    L_C21AFEC:;
    R0 = (0x0);
    goto L_C21AFEE;
    L_C21AF6A:;
    R14 = (R0);
    R3 = (R0);
    goto L_C21AF6E;
    L_C21AF7C:;
    if ((R5 != 0)) goto L_C21AF84;
    goto L_C21AF80;
    L_C21AF80:;
    R14 = (R7);
    goto L_C21AF86;
    L_C21AF86:;
    R14 = (((R14 << 8) << 1));
    goto L_C21AF8A;
    L_C21AF84:;
    R14 = (R0);
    goto L_C21AF86;
    L_C21AF40:;
    R11 = (((unsigned int)((unsigned int)(*(int *)((R13 + 0x10))) >> 2) >> 2));
    R6 = ((((unsigned int)((unsigned int)(*(int *)((R13 + 0xC))) >> 2) >> 2) - 1));
    goto L_C21AF4E;
    L_C21AEE2:;
    R10 = (R5);
    goto L_C21AEE8;
}

void FUN_0c062d4a(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t1;
    int t18;

    t1 = FUN_0c0e19aa(0xC062C74, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((*(int *)0xC247B84) == 0) {
        FUN_0c062d04();
    }
    FUN_0c0cbafc(0x298, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3EC, 0x2, 0x7000, 0x2000);
    FUN_0c0cbafc(0x3ED, 0x2, 0x7000, 0x2000);
    t18 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t18 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t18;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)((t1 + 0x23C)) = (int)((float)(*(int *)((a4 + 0x3AC))) * (*(float *)0xC062F2C));
    *(unsigned int *)((t1 + 0x240)) = (int)((float)(*(int *)((a4 + 0x3AC))) * (*(float *)0xC062F30));
    *(unsigned int *)((t1 + 0x244)) = a10;
    *(unsigned int *)((t1 + 0x22C)) = (*(int *)((t1 + 0x240)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + t1)) = *(struct mv3 *)(a6); }
    *(unsigned int *)((t1 + 0xF0)) = a7;
    *(unsigned int *)((t1 + 0xF4)) = a8;
    *(unsigned int *)((t1 + 0xF8)) = 0x0;
    *(unsigned int *)((t1 + 0x220)) = a9;
    FUN_0c062a74(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
}

void syChainDeleteHandler(int a4)
{
    int t12;
    int t20;
    int t43;
    int stk[9];

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
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_C22246C:;
    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    R12 = (((R4 << 2) << 2));
    R13 = ((((R4 << 2) << 2) + 0xC9529E8));
    R4 = (0x100);
    R5 = (0x1);
    R6 = (0x1);
    R7 = (0xC9529E8);
    goto L_C2224A2;
    L_C2224A2:;
    R14 = ((((R6 << 2) << 2) + R7));
    if (((*(int *)(((((R6 << 2) << 2) + R7) + 0x4))) != R13)) goto L_C2224B8;
    goto L_C2224B0;
    L_C2224B0:;
    if ((((*(int *)((R14 + 0xC))) & 0x80000000) != 0)) goto L_C2224BE;
    goto L_C2224B8;
    L_C2224B8:;
    t12 = (unsigned int)(R6 + 0x1) < (unsigned int)R4;
    R6 = ((R6 + 0x1));
    if (t12) goto L_C2224A2;
    goto L_C2224BE;
    L_C2224BE:;
    R1 = (0x0);
    if ((R6 == R4)) goto L_C2224D6;
    goto L_C2224C4;
    L_C2224C4:;
    *(unsigned int *)(((((R6 << 2) << 2) + R7) + 0x4)) = (*(int *)(((R12 + R7) + 0x4)));
    *(unsigned int *)(((R12 + R7) + 0xC)) = R1;
    goto L_C2225B0;
    L_C2225B0:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
    return;
    L_C2224D6:;
    t20 = (R12 + R7);
    R10 = (0xA05F6920);
    R12 = (0xC0);
    R13 = t20;
    R14 = (R5);
    R4 = (0xC9539E8);
    R7 = (0x90);
    R8 = (0x200);
    R9 = (0xA05F6924);
    goto L_C2224E8;
    L_C2224E8:;
    if (((*(int *)((R4 + (R14 << 2)))) != R13)) goto L_C2225A8;
    goto L_C2224F2;
    L_C2224F2:;
    *(unsigned int *)((((R14 << 2) + R4) + 0x0)) = (*(int *)((R13 + 0x4)));
    *(unsigned int *)((R13 + 0xC)) = R1;
    if (((*(int *)((((R14 << 2) + R4) + 0x0))) != 0)) goto L_C2225AE;
    goto L_C222504;
    L_C222504:;
    if ((R14 != R7)) goto L_C222514;
    goto L_C222508;
    L_C222508:;
    kmSetVSyncCallback(0x0, 0x0);
    goto L_C2225AE;
    L_C2225AE:;
    goto L_C2225B0;
    L_C222514:;
    if ((R14 != 0x92)) goto L_C222526;
    goto L_C22251A;
    L_C22251A:;
    kmSetHSyncCallback(0x0, 0x0);
    goto L_C2225AE;
    L_C222526:;
    R0 = (((int)(short)((R14 << 2) << 2) >> 8));
    R13 = (((R14 << 2) << 2));
    R7 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((R14 << 2) << 2) >> 2) >> 2) >> 1));
    if ((((int)(short)((R14 << 2) << 2) >> 8) != 10)) goto L_C222552;
    goto L_C222542;
    L_C222542:;
    *(unsigned int *)((R10 + 0x0)) = ((*(int *)((R10 + 0x0))) & (~(((int)(R7 + 0xC) >= 0) ? (R5 << ((R7 + 0xC) & 31)) : ((-(int)(R7 + 0xC) & 31) ? ((int)R5 >> (-(int)(R7 + 0xC) & 31)) : ((int)R5 >> 31)))));
    goto L_C222562;
    L_C222562:;
    *(unsigned int *)((((((int)_builtin_get_vbr()) + ((unsigned int)((unsigned int)(R13 - 512) >> 2) >> 1)) + R8) + 0x0)) = 0xC22FAF8;
    goto L_C2225AE;
    L_C222552:;
    if ((R0 != 11)) goto L_C222562;
    goto L_C222556;
    L_C222556:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) & (~(((int)R7 >= 0) ? (R5 << (R7 & 31)) : ((-(int)R7 & 31) ? ((int)R5 >> (-(int)R7 & 31)) : ((int)R5 >> 31)))));
    goto L_C222562;
    L_C2225A8:;
    t43 = (unsigned int)(R14 + 0x1) < (unsigned int)R12;
    R14 = ((R14 + 0x1));
    if (t43) goto L_C2224E8;
    goto L_C2225AE;
}

int adxstmf_stat_exec(int a4, int a5)
{
    int t1;
    int t3;
    int t4;
    int t8;
    int t11;
    int t13;
    int t18;
    int t23;
    int t24;
    int t26;
    int t48;
    int t99;
    int t53;
    int t87;
    int t58;
    int t59;
    int t60;
    int t65;
    int t66;
    int t67;
    int t68;
    int t70;
    int t74;
    int t15;
    int t50;
    int t94;
    int t84;
    int t78;
    int stk[12];

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = gdFsGetStat((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x4));
            t8 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 8) + 0xC));
            t11 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 8) + 0x4));
            t13 = gdFsTell((*(int *)((a4 + 0x8))));
            if ((t13 == (*(int *)((a4 + 0x30)))) && (t15 = *(int *)((a4 + 0x38)), t15 != 0)) {
                t18 = ((int (*)(int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t23 = gdFsTell((*(int *)((a4 + 0x8))));
            t24 = *(int *)((a4 + 0x14));
            t26 = (t24 + 0x7FF);
            if ((int)(t24 + 0x7FF) < 0) {
                t26 = ((t24 + 0x7FF) + 0x7FF);
            }
            if ((int)t23 >= (int)((int)t26 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                ADXERR_CallErrFunc(0xC237DCC);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t48 = *(signed char *)((a4 + 0x2));
    t99 = t48;
    if (t48 == 0) {
        if ((t1 != 0) && (t50 = *(int *)((t1 + 0x0)), t50 != 0)) {
            t53 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
            t87 = t53;
            if ((int)t53 < (int)(*(int *)((a4 + 0x1C)))) {
                t58 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24));
                t59 = *(int *)((a4 + 0x28));
                t60 = t59;
                if ((int)t59 < 0) {
                    t60 = (t59 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x30)));
                t65 = gdFsTell((*(int *)((a4 + 0x8))));
                t66 = *(int *)(((int)stk + 8));
                t67 = *(int *)((a4 + 0x2C));
                t68 = (t66 - t65);
                if ((int)((int)t60 >> 11) < (int)(t66 - t65)) {
                    t68 = ((int)t60 >> 11);
                }
                t70 = t67;
                if ((int)t68 < (int)t67) {
                    t70 = t68;
                }
                if (t70 != 0) {
                    t74 = gdFsReqRd32((*(int *)((a4 + 0x8))), t70, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t74;
                    if ((int)t74 <= 0) {
                        t78 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t78 = 0x1;
                    }
                    t84 = t78;
                } else {
                    t84 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                }
                t87 = t84;
            }
            t94 = t87;
        } else {
            t94 = (FUN_0c22a934());
        }
        t99 = t94;
    }
    return t99;
}

int FUN_0c02eaee(int a4)
{
    int t16;
    int stk[31];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F10;
    float F14;
    int T_;
    R4 = a4;
    L_C02EAEE:;
    if (((*(int *)((R4 + 0x5DC))) == 0)) goto L_C02EB04;
    goto L_C02EB00;
    L_C02EB00:;
    goto L_C02EC3E;
    L_C02EC3E:;
    R0 = (0xFFFFFFFF);
    goto L_C02EC4A;
    L_C02EC4A:;
    return R0;
    L_C02EB04:;
    R6 = (0xC2475D4);
    if (((*(int *)0xC247994) != 0)) goto L_C02EB12;
    goto L_C02EB0E;
    L_C02EB0E:;
    goto L_C02EC3E;
    L_C02EB12:;
    R11 = (0xC);
    R12 = (0xB);
    R13 = ((((int)stk + 4) + 0x34));
    R14 = (0x0);
    R5 = (0x0);
    R7 = (((int)stk + 4));
    goto L_C02EBAA;
    L_C02EBAA:;
    if (((int)R5 < (int)R11)) goto L_C02EB60;
    goto L_C02EBAE;
    L_C02EBAE:;
    *(unsigned int *)((R13 + (R14 << 2))) = 0xFFFFFFFF;
    *(float *)((R7 + (R14 << 2))) = 999.998962f;
    R5 = (R14);
    R6 = (0xFFFFFFFF);
    goto L_C02EBD8;
    L_C02EBD8:;
    t16 = (int)(*(int *)((R13 + ((R6 + 0x1) << 2)))) >= 0;
    R0 = (((R6 + 0x1) << 2));
    R6 = ((R6 + 0x1));
    if (t16) goto L_C02EBC8;
    goto L_C02EBE6;
    L_C02EBE6:;
    R6 = (0xC246FF0);
    if (((*(int *)0xC247030) != 4)) goto L_C02EC14;
    goto L_C02EBF4;
    L_C02EBF4:;
    if ((!((*(float *)(((((((*(int *)((R4 + 0xBC))) << 2) << 2) << 2) + (0x94 + R6)) + 0x0))) > (*(float *)((((R5 << 2) + ((int)stk + 4)) + 0x0)))))) goto L_C02EC3E;
    goto L_C02EC14;
    L_C02EC14:;
    if (((*(int *)((R6 + 0x44))) != 4)) goto L_C02EC42;
    goto L_C02EC1C;
    L_C02EC1C:;
    if (((*(float *)(((((((*(int *)((R4 + 0xBC))) << 2) << 2) << 2) + (0x94 + R6)) + 0x4))) > (*(float *)((((R5 << 2) + ((int)stk + 4)) + 0x0))))) goto L_C02EC42;
    goto L_C02EC3E;
    L_C02EC42:;
    R0 = ((*(int *)((R13 + (R5 << 2)))));
    goto L_C02EC4A;
    L_C02EBC8:;
    if (((*(float *)((R7 + R0))) > (*(float *)((R7 + (R5 << 2)))))) goto L_C02EBD8;
    goto L_C02EBD6;
    L_C02EBD6:;
    R5 = (R6);
    goto L_C02EBD8;
    L_C02EB60:;
    if (((int)(*(int *)((((R5 << 2) + (R6 + 0x30)) + 0x0))) < (int)R12)) goto L_C02EBA8;
    goto L_C02EB70;
    L_C02EB70:;
    if (((*(int *)(((R6 + 0x60) + (R5 << 2)))) != 13)) goto L_C02EBA8;
    goto L_C02EB80;
    L_C02EB80:;
    *(unsigned int *)((R13 + (R14 << 2))) = R5;
    *(float *)((R7 + (R14 << 2))) = (*(float *)(((((((R5 << 2) << 2) << 2) + (0xC0 + R6)) + ((*(int *)(((0xBC + R4) + 0x0))) << 2)) + 0x0)));
    R14 = ((R14 + 0x1));
    goto L_C02EBA8;
    L_C02EBA8:;
    R5 = ((R5 + 0x1));
    goto L_C02EBAA;
}

int FUN_0c065eb2(void)
{
    int t0;
    int t1;
    int t23;
    int t39;
    int t40;
    int t41;

    t0 = *(int *)0xC2497B8;
    t1 = *(int *)0xC23A190;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                if ((t0 & 0x4) != 0) {
                    *(unsigned int *)0xC247588 = (((FUN_0c0da2e0()) & 0xFFF) + 0x2710);
                    FUN_0c0b72d6(0x1);
                    *(unsigned int *)0xC23A190 = 0x1;
                }
            }
        } else {
            if ((t0 & 0x4) != 0) {
                *(unsigned int *)0xC247584 = (((FUN_0c0da2e0()) & 0xFFF) + 0x2710);
                FUN_0c0b72d6(0x0);
                *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
            }
        }
    } else {
        t23 = FUN_0c0e262a(0x9C);
        *(unsigned int *)0xC247BE0 = t23;
        *(unsigned int *)((t23 + 0x10)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x20)) = 0x0;
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
        FUN_0c0b70a0(0x0);
        FUN_0c0b70a0(0x1);
    }
    FUN_0c0db0a0(0xA, 0x9);
    nlPrintf(0xC0FA0CC);
    t39 = 0xC24FAB4;
    t40 = 0x1;
    t41 = 0xA;
    for (;;) {
        FUN_0c0db0a0(0xA, t41);
        nlPrintf(0xC0FA0E4, (t40), ((*(int *)((t39 + 0x0)))), (unsigned short)(*(short *)((t39 + 0x8))));
        t41 = (t41 + 0x1);
        t39 = (t39 + 0xC);
        t40 = (t40 + 0x1);
        if ((int)t41 >= (int)0x14) {
            break;
        }
    }
    FUN_0c0db0a0(0xA, 0x14);
    nlPrintf(0xC0FA0FC, ((unsigned short)(*(short *)0xC24FB2E) + 0x1));
    FUN_0c0db0a0(0xA, 0x15);
    return (nlPrintf(0xC0FA118, ((unsigned short)(*(short *)0xC24FB32) + 0x1)));
}

void vmsfs_fclose(int a4, int a5)
{
    int t13;
    int t19;
    int t24;
    int t31;
    int t37;
    int t44;
    int t48;
    int t52;
    int t63;
    int stk[8];

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
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C226292:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    R14 = (R4);
    if ((R4 != 0)) goto L_C2262AE;
    goto L_C2262A8;
    L_C2262A8:;
    R0 = (0xFFFFFF00);
    goto L_C2263EA;
    L_C2263EA:;
    return;
    L_C2262AE:;
    R10 = (0xC956768);
    R11 = (0x148);
    R13 = (0x0);
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * 0x148) + 0xC956768) + 0x2))) != 0)) goto L_C2262C6;
    goto L_C2262C2;
    L_C2262C2:;
    goto L_C2263E2;
    L_C2263E2:;
    close_file_handle(R14);
    R0 = (R13);
    goto L_C2263EA;
    L_C2262C6:;
    t13 = (vmsio_ismount((*(int *)((R14 + 0x28))))) != 0;
    if (t13) goto L_C2262D4;
    goto L_C2262D0;
    L_C2262D0:;
    goto L_C2263E2;
    L_C2262D4:;
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * R11) + R10) + 0x8))) != 0)) goto L_C2262E6;
    goto L_C2262E2;
    L_C2262E2:;
    goto L_C2263E2;
    L_C2262E6:;
    t19 = (vmsio_isready((*(int *)((R14 + 0x28))))) != 0;
    if (t19) goto L_C2262F8;
    goto L_C2262F0;
    L_C2262F0:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_C2263E2;
    L_C2262F8:;
    t24 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) < 0;
    if (t24) goto L_C2263E2;
    goto L_C226302;
    L_C226302:;
    R12 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x4))) == 0)) goto L_C2263E0;
    goto L_C22630A;
    L_C22630A:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C22632C;
    goto L_C226310;
    L_C226310:;
    *(unsigned int *)((((R12 * R11) + R10) + 0x30)) = 0x1;
    t31 = *(int *)((((R12 * R11) + R10) + 0x4));
    *(unsigned int *)((((R12 * R11) + R10) + 0x34)) = (*(int *)((((((t31 << 2) + t31) << 2) << 2) + 0xC239D20)));
    R4 = (((R12 * R11) + R10));
    goto L_C22632C;
    L_C22632C:;
    t37 = (*(int *)((R14 + 0x8))) != 1;
    R13 = ((direntry(R12, (*(int *)((R14 + 0x2C))))));
    if (t37) goto L_C226368;
    goto L_C22633C;
    L_C22633C:;
    R4 = (0xCC);
    goto L_C22636A;
    L_C22636A:;
    *(unsigned char *)((R13 + 0x0)) = R4;
    *(unsigned char *)((R13 + 0x1)) = (*(signed char *)((R14 + 0x1)));
    t44 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(R13, 0x2, (*(int *)((R14 + 0x38))), R7);
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(R13, 0x18, (*(int *)((R14 + 0x30))));
    t52 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(R13, 0x1A, (*(short *)((R14 + 0x2))));
    R11 = ((R13 + 0x10));
    R4 = ((R13 + 0x4));
    R5 = ((R14 + 0x10));
    goto L_C2263AC;
    L_C2263AC:;
    if (((unsigned int)R4 < (unsigned int)R11)) goto L_C2263A6;
    goto L_C2263B0;
    L_C2263B0:;
    R4 = (R11);
    R5 = ((R14 + 0x20));
    R6 = ((R13 + 0x18));
    goto L_C2263C2;
    L_C2263C2:;
    if (((unsigned int)R4 < (unsigned int)R6)) goto L_C2263BC;
    goto L_C2263C6;
    L_C2263C6:;
    direntry_dirty(R12, (*(int *)((R14 + 0x2C))));
    t63 = write_dir(R12);
    R13 = (t63);
    if (((int)t63 < 0)) goto L_C2263E2;
    goto L_C2263DA;
    L_C2263DA:;
    write_fat(R12);
    goto L_C2263E0;
    L_C2263E0:;
    R13 = (0x0);
    goto L_C2263E2;
    L_C2263BC:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_C2263C2;
    L_C2263A6:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_C2263AC;
    L_C226368:;
    R4 = (0x33);
    goto L_C22636A;
}

int FUN_0c05f07c(int a4)
{
    int t1;
    float u7;
    int t8;
    int t9;
    float u11;
    float u18;
    int t26;
    float u33;
    int t34;
    int t35;
    float u37;
    float u44;
    int t56;
    int t52;
    int stk[9];

    if ((*(int *)((a4 + 0x244))) == 0) {
        t1 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x244)) = 0x1;
            *(unsigned int *)((a4 + 0x248)) = (*(int *)((a4 + 0x22C)));
        }
        nlPushMatrix(0x0);
        u7 = *(float *)0xC05F244;
        t8 = *(int *)((a4 + 0x240));
        t9 = *(int *)(((0x23C + a4) + 0x0));
        *(unsigned int *)((a4 + 0x240)) = (t8 + t9);
        u11 = u7;
        u11 = u11 + u7 * (FUN_0c0da410((t8 + t9)));
        *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) + 0x20);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        u18 = *(float *)0xC05F258;
        nlScale(u18, u18, u18);
        FUN_0c0de000(u18);
        FUN_0c084800(1.0f, u11, u11);
        FUN_0c0c465c((*(int *)((a4 + 0x220))));
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t56 = (nlPopMatrix(0x1));
    } else {
        t26 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t26 - 1);
        if ((int)(t26 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x220)) = 0x344;
            *(float *)((a4 + 0x1E4)) = 30.0f;
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 1.0f);
            *(unsigned int *)((a4 + 0x23C)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (1.0f + 1.0f));
            FUN_0c08d834(((int)stk + 4), *(Stk3 *)(((int)stk + 4)));
            FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
            t52 = (FUN_0c08d840((a4 + 0x30), 35.0f));
        } else {
            nlPushMatrix(0x0);
            u33 = *(float *)0xC05F244;
            t34 = *(int *)((a4 + 0x240));
            t35 = *(int *)(((0x23C + a4) + 0x0));
            *(unsigned int *)((a4 + 0x240)) = (t34 + t35);
            u37 = u33;
            u37 = u37 + u33 * (FUN_0c0da410((t34 + t35)));
            *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) + 0x20);
            FUN_0c0dcca0((a4 + 0x30));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            u44 = *(float *)0xC05F258;
            nlScale(u44, u44, u44);
            FUN_0c0de000(u44);
            FUN_0c084800(1.0f, u37, u37);
            FUN_0c0c465c((*(int *)((a4 + 0x220))));
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            t52 = (nlPopMatrix(0x1));
        }
        t56 = t52;
    }
    return t56;
}

int FUN_0c0b2b18(int a4, int a5, int a6, int a7)
{
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t26;
    int t48;
    int t6;
    int t42;
    int t43;
    int t44;
    int t45;

    FUN_0c0cc6dc();
    t2 = FUN_0c0e19aa(0xC0B2CDA, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0xBC)) = 0x3;
    *(unsigned int *)((t2 + 0xC0)) = 0x35;
    FUN_0c0b2a28(t2);
    FUN_0c0bffc4();
    t7 = 0x0;
    t8 = 0x0;
    t9 = a7;
    t10 = 0x0;
    for (;;) {
        if ((*(int *)((t7 + 0xC247030))) != 0) {
            t6 = 0x1;
            t9 = (*(int *)((t8 + 0xC246FF0)));
            t13 = *(int *)((t9 + 0xC0));
            t6 = (((int)t13 >= 0) ? (t6 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)t6 >> (-(int)t13 & 31)) : ((int)t6 >> 31)));
            t10 = (t10 | t6);
        }
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        if ((unsigned int)t7 >= (unsigned int)0x8) {
            break;
        }
    }
    t17 = t7;
    t18 = t8;
    t19 = 0x8;
    t20 = t9;
    t21 = 0x0;
    t22 = t10;
    t23 = t2;
    for (;;) {
        if ((*(int *)(((t21 << 2) + 0xC247030))) == 0) {
            t17 = 0xC0B2C7E;
            t18 = 0x474;
            t19 = (*(int *)0xC23ECE4);
            t26 = FUN_0c0e19aa(t17, t18, t19);
            t23 = t26;
            t17 = t26;
            FUN_0c0e19d0(t17);
            *(unsigned int *)((t23 + 0xBC)) = t21;
            if ((t22 & 0x1) != 0) {
                *(unsigned int *)((t23 + 0xC0)) = 0x4;
                t22 = (t22 | 0x10);
            } else {
                if ((0x10 & t22) != 0) {
                    *(unsigned int *)((t23 + 0xC0)) = 0x2;
                    t22 = (t22 | 0x4);
                } else {
                    t22 = (t22 | 0x1);
                    *(unsigned int *)((t23 + 0xC0)) = 0x0;
                }
            }
            t19 = 0x0;
            t18 = (*(int *)((t23 + 0xC0)));
            t17 = (*(int *)0xC23ED50);
            FUN_0c0c4464(t17, t18, t19);
            t17 = t23;
            FUN_0c0b2a28(t17);
            *(unsigned int *)((t23 + 0x288)) = 0x0;
        } else {
            t42 = t17;
            t43 = t18;
            t44 = t19;
            t45 = t20;
        }
        t17 = t42;
        t18 = t43;
        t19 = t44;
        t20 = t45;
        t21 = (t21 + 0x1);
        if ((int)t21 >= (int)0x2) {
            break;
        }
    }
    t48 = FUN_0c0e19aa(0xC0B2C7E, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t48);
    *(unsigned int *)((t48 + 0xBC)) = 0x2;
    if ((0x1 & t22) == 0) {
        *(unsigned int *)((t48 + 0xC0)) = 0x0;
    } else {
        if ((t22 & 0x10) == 0) {
            *(unsigned int *)((t48 + 0xC0)) = 0x4;
        } else {
            *(unsigned int *)((t48 + 0xC0)) = 0x2;
        }
    }
    FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)((t48 + 0xC0))), 0x0);
    FUN_0c0b2a28(t48);
    *(unsigned int *)((t48 + 0x288)) = 0x0;
    return 0x288;
}

void vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int t8;
    int t12;
    int t17;
    int t24;
    int t26;
    int t29;
    int t32;
    int t33;
    int t38;
    int stk[22];

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
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C225F2A:;
    *(unsigned int *)(((int)stk + 12)) = R6;
    *(unsigned int *)(((int)stk + 8)) = R7;
    *(unsigned int *)(((int)stk + 16)) = (R4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((R4 * 0x148) + 0xC956768);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
    R11 = (0x0);
    R12 = (R5);
    R14 = (R4);
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2))) == 0)) goto L_C225F84;
    goto L_C225F5C;
    L_C225F5C:;
    t8 = (vmsio_isready(R14)) != 0;
    if (t8) goto L_C225F6E;
    goto L_C225F66;
    L_C225F66:;
    vmsfs_unmount(R14);
    goto L_C225F84;
    L_C225F84:;
    R0 = (0xFFFFFF01);
    goto L_C22607E;
    L_C22607E:;
    return;
    L_C225F6E:;
    t12 = (vmsio_ismount(R14)) == 0;
    if (t12) goto L_C225F84;
    goto L_C225F78;
    L_C225F78:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) + 0xC956768) + 0x8))) != 0)) goto L_C225F8A;
    goto L_C225F84;
    L_C225F8A:;
    t17 = (int)(buIsFormat(R14)) >= 0;
    if (t17) goto L_C225F9A;
    goto L_C225F94;
    L_C225F94:;
    R0 = (0xFFFFFF03);
    goto L_C22607E;
    L_C225F9A:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x38))) == 0)) goto L_C226020;
    goto L_C225FA4;
    L_C225FA4:;
    t24 = (int)(check_isopen()) < 0;
    if (t24) goto L_C226020;
    goto L_C225FB0;
    L_C225FB0:;
    t26 = (int)(search_dir(R14, R12, (((int)stk + 4) + 0x10))) < 0;
    if (t26) goto L_C225FF0;
    goto L_C225FC0;
    L_C225FC0:;
    R0 = (0xFFFFFF06);
    goto L_C22607E;
    L_C225FF0:;
    t29 = (int)(search_exec_file(R14, (((int)stk + 4) + 0x10))) < 0;
    if (t29) goto L_C226004;
    goto L_C225FFE;
    L_C225FFE:;
    R0 = (0xFFFFFF09);
    goto L_C22607E;
    L_C226004:;
    t32 = (unsigned short)(get_fat(R14, 0x0, R6, R7)) != 0xFFFC;
    if (t32) goto L_C226020;
    goto L_C226014;
    L_C226014:;
    t33 = search_free_dir(R14);
    R10 = (t33);
    if (((int)t33 >= 0)) goto L_C226026;
    goto L_C226020;
    L_C226020:;
    R0 = (0xFFFFFF08);
    goto L_C22607E;
    L_C226026:;
    direntry(R14, R10);
    t38 = open_file_handle();
    R13 = (t38);
    if ((t38 != 0)) goto L_C226040;
    goto L_C22603A;
    L_C22603A:;
    R0 = (0xFFFFFF07);
    goto L_C22607E;
    L_C226040:;
    *(unsigned int *)((R13 + 0x8)) = 0x1;
    *(unsigned int *)((R13 + 0x4)) = 0x2;
    *(unsigned int *)((R13 + 0x2C)) = R10;
    *(unsigned int *)((R13 + 0x38)) = 0xFFFF;
    *(unsigned int *)((R13 + 0x30)) = R11;
    *(unsigned int *)((R13 + 0x28)) = R14;
    *(unsigned short *)((R13 + 0x2)) = 0x1;
    *(unsigned char *)((R13 + 0x1)) = R11;
    R4 = ((R13 + 0x10));
    goto L_C226066;
    L_C226066:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_C226060;
    goto L_C22606C;
    L_C22606C:;
    *(unsigned char *)((R4 + 0x0)) = R11;
    set_vmstime((R13 + 0x20), (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = R13;
    R0 = (0x0);
    goto L_C22607E;
    L_C226060:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R12 + 0x0)));
    R12 = ((R12 + 0x1));
    R4 = ((R4 + 0x1));
    goto L_C226066;
}

int FUN_0c016728(int a4, int a5, int a6, int a7)
{
    int t7;
    int t8;
    int t14;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C016728:;
    if ((((*(int *)0xC23A1A8) & 1) == 0)) goto L_C01673E;
    goto L_C016736;
    L_C016736:;
    *(volatile int *)0xC2497E0;
    goto L_C01673E;
    L_C01673E:;
    R14 = (0xC23ECFC);
    if (((*(int *)0xC23ED44) != 0)) goto L_C01674C;
    goto L_C016748;
    L_C016748:;
    goto L_C016878;
    L_C016878:;
    t7 = *(int *)(((*(int *)((R14 + 0x0))) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = t7;
    t8 = ((int (*)(int, int, int, int))(t7))(R4, R5, R6, R7);
    return FUN_0c0168b0();
    L_C01674C:;
    FUN_0c0cc6ac();
    FUN_0c086b70();
    FUN_0c0b25d0();
    *(unsigned int *)0xC23ED58 = (*(int *)0xC23ED50);
    *(unsigned int *)0xC23A184 = 0x1;
    *(unsigned int *)0xC23ED60 = 0x0;
    *(unsigned int *)0xC23A19C = ((*(int *)0xC23A19C) & 0xFFFF0000);
    t14 = *(int *)0xC23ED48;
    R0 = (t14);
    R4 = (0xC23ED50);
    R5 = (0x0);
    R6 = (0xC23ED54);
    R7 = ((*(int *)0xC23ED54));
    if ((t14 == 7)) goto L_C0167B4;
    goto L_C016788;
    L_C016788:;
    if ((R0 == 8)) goto L_C0167BA;
    goto L_C01678C;
    L_C01678C:;
    if ((R0 == 5)) goto L_C0167CA;
    goto L_C016790;
    L_C016790:;
    if ((R0 == 6)) goto L_C0167CA;
    goto L_C016794;
    L_C016794:;
    if ((R0 == 9)) goto L_C0167D4;
    goto L_C016798;
    L_C016798:;
    if ((R0 == 10)) goto L_C0167D4;
    goto L_C01679C;
    L_C01679C:;
    if ((R0 == 14)) goto L_C016824;
    goto L_C0167A0;
    L_C0167A0:;
    if ((R0 == 13)) goto L_C016834;
    goto L_C0167A4;
    L_C0167A4:;
    if ((R0 == 11)) goto L_C016840;
    goto L_C0167A8;
    L_C0167A8:;
    if ((R0 == 12)) goto L_C016850;
    goto L_C0167AC;
    L_C0167AC:;
    if ((R0 == 31)) goto L_C016866;
    goto L_C0167B0;
    L_C0167B0:;
    goto L_C01685A;
    L_C01685A:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)((0x4 + (*(int *)((R14 + 0x0))))));
    goto L_C01686A;
    L_C01686A:;
    FUN_0c0164d6();
    goto L_C01686E;
    L_C01686E:;
    return FUN_0c0cf908();
    L_C016866:;
    *(unsigned int *)((R4 + 0x0)) = R7;
    *(unsigned int *)((R6 + 0x0)) = R5;
    goto L_C01686A;
    L_C016850:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)(((*(int *)((R14 + 0x0))) + 0x4)));
    goto L_C01686A;
    L_C016840:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)(((*(int *)((R14 + 0x0))) + 0x4)));
    *(unsigned int *)((R6 + 0x0)) = R5;
    FUN_0c0166c4();
    goto L_C01686E;
    L_C016834:;
    *(unsigned int *)0xC23ED98 = R5;
    *(unsigned int *)((R4 + 0x0)) = R5;
    *(unsigned int *)0xC23A190 = R5;
    goto L_C01686E;
    L_C016824:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)(((*(int *)((R14 + 0x0))) + 0x4)));
    *(unsigned int *)((R6 + 0x0)) = R5;
    FUN_0c016602();
    goto L_C01686E;
    L_C0167D4:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)(((*(int *)((R14 + 0x0))) + 0x4)));
    *(unsigned int *)((R6 + 0x0)) = R5;
    FUN_0c0165bc();
    goto L_C01686E;
    L_C0167CA:;
    *(unsigned int *)((R4 + 0x0)) = R7;
    *(unsigned int *)((R6 + 0x0)) = R5;
    FUN_0c016530();
    goto L_C01686E;
    L_C0167BA:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(short *)(((*(int *)((R14 + 0x0))) + 0x4)));
    goto L_C0167C2;
    L_C0167C2:;
    FUN_0c016576();
    goto L_C01686E;
    L_C0167B4:;
    *(unsigned int *)((R4 + 0x0)) = R7;
    *(unsigned int *)((R6 + 0x0)) = R5;
    goto L_C0167C2;
}

int FUN_0c0453ac(int a4)
{
    int stk[25];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + 5.0f);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + 5.0f), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlScale((*(float *)((a4 + 0x274))), (*(float *)((a4 + 0x278))), (*(float *)((a4 + 0x27C))));
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -10.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -9.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = (-1.0f);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -9.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    FUN_0c033c8c((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), 0x0, 0.299999982f);
    FUN_0c033c8c((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x30), 0x0, 0.299999982f);
    return (FUN_0c033c8c((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 0x0, 0.299999982f));
}

int FUN_0c0da9a0(int a4, int a5, int a6, int a7)
{
    int t0;
    float u1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0xC9441B4;
    u1 = *(float *)0xC0DABF8;
    t2 = *(int *)0xC9441B8;
    if ((*(int *)0xC20CDC8) == 0) {
        t4 = *(short *)(((((signed char)a6 << 1) + 0xC944244) + 0x2));
        t5 = *(short *)(((((signed char)a6 << 1) + 0xC944244) + 0x0));
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)a4 + (float)t0);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a5 + (float)t2);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)a4;
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a5 + (float)t2);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t5;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = (t5 | 0x3F800000);
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t4 | 0x3F800000);
    } else {
        t6 = *(short *)0xC94827C;
        t7 = *(short *)(((((signed char)a6 << 1) + 0xC944244) + 0x2));
        t8 = *(short *)(((((signed char)a6 << 1) + 0xC944244) + 0x0));
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a4 + (float)t0);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t7;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = t8;
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t8 | 0x3F800000);
    }
    _builtin_prefetch((void *)(a7 + 0x20));
    return ((a7 + 0x20) + 0x20);
}

int FUN_0c218514(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t31;
    int t42;
    int t43;
    int t44;
    int t41;
    int t59;
    int t62;
    int t53;
    int t56;
    int stk[10];

    if (a4 != 0) {
        if (a4 == 1) {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t0 = 0x0;
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)(((int)stk + 4));
                if ((unsigned int)((*(int *)(((((t3 << 2) << 2) << 1) + 0xC952778))) - 2048) > (unsigned int)((*(int *)(((((t3 << 2) << 2) << 1) + 0xC952780))) + 0x140)) {
                    if ((unsigned int)(*(int *)(((0xC952828 + t0) + 0x0))) < (unsigned int)((*(int *)((t1 + 0xC952778))) - 2048)) {
                        *(unsigned int *)((t2 + 0xC952778)) = ((*(int *)((t2 + 0xC952778))) - 0x800);
                        *(unsigned int *)(((0xC952784 + t2) + 0x0)) = ((*(int *)((t2 + 0xC952778))) - 192);
                    }
                    *(unsigned int *)0xC952814 = 0x0;
                } else {
                    if ((unsigned int)(*(int *)0xC952814) > (unsigned int)0xA) {
                        kmiFatalErrorEntry(0x3, a5, a6, a7);
                    }
                }
                t31 = *(int *)(((int)stk + 4));
                t1 = (t1 + 0x20);
                *(unsigned int *)(((int)stk + 4)) = (t31 + 0x1);
                t2 = (t2 + 0x20);
                t0 = (t0 + 0x4);
                if ((int)(t31 + 0x1) >= (int)0x2) {
                    break;
                }
            }
        }
    } else {
        t42 = a4;
        t43 = 0x0;
        t44 = 0x0;
        for (;;) {
            if ((unsigned int)((*(int *)((t44 + 0xC952784))) + 0x2000) < (unsigned int)((*(int *)((t44 + 0xC952774))) - 192)) {
                *(unsigned int *)((t43 + 0xC952784)) = ((*(int *)((t43 + 0xC952784))) + 0x2000);
                t41 = (*(int *)((t43 + 0xC952784)));
                t41 = (t41 + 0xC0);
                *(unsigned int *)((t43 + 0xC952778)) = t41;
                *(unsigned int *)0xC952818 = 0x0;
                t59 = t41;
                t62 = t42;
            } else {
                if ((unsigned int)(*(int *)0xC952818) > (unsigned int)0x0) {
                    t42 = 0x3;
                    kmiFatalErrorEntry(t42, a5, a6, a7);
                } else {
                    t53 = t41;
                    t56 = t42;
                }
                t59 = t53;
                t62 = t56;
            }
            t41 = t59;
            t44 = (t44 + 0x20);
            t42 = t62;
            t43 = (t43 + 0x20);
            if ((unsigned int)t44 >= (unsigned int)0x40) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    float u0;
    float u1;
    float u4;
    float u5;
    float u6;
    float u7;
    float u11;
    float u12;
    float u16;
    float u17;
    float u21;
    float u22;
    float u30;
    float u31;
    float u32;
    float u33;
    float u37;
    float u38;
    float u42;
    float u43;
    float u47;
    float u48;

    u0 = *(float *)((a5 + 0x4));
    u1 = *(float *)((a5 + 0x0));
    if (!(u0 > 0.0f)) {
        if ((*(int *)0xC20D140) == 0) {
            if (a4 == 0) {
                *(unsigned int *)0xC94C6C0 = 0x0;
                *(unsigned int *)0xC94C6E4 = 0x0;
                return 0x0;
            }
            return FUN_0c0e1138(a4, f4, f5, f6, u0, f8);
        }
        if (u0 == 0.0f) {
            if (a4 == 0) {
                *(unsigned int *)0xC94C6C0 = 0x0;
                *(unsigned int *)0xC94C6E4 = 0x0;
                return 0x0;
            }
            return FUN_0c0e1138(a4, f4, f5, f6, u0, f8);
        }
        u4 = *(float *)((a5 + 0x8));
        u5 = *(float *)((a5 + 0xC));
        if (((((-(f4 * u1)) - (f6 * u4)) - u5) / u0) > f5) {
            if (a4 == 0) {
                *(unsigned int *)0xC94C6C0 = 0x0;
                *(unsigned int *)0xC94C6E4 = 0x0;
                return 0x0;
            }
            return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0));
        }
        u6 = *(float *)((a5 + 0x1C));
        u7 = *(float *)((a5 + 0x14));
        if (!(0.0f > (u0 * ((((u6 - f6) * ((*(float *)((a5 + 0x20))) - u7)) - ((u7 - f4) * ((*(float *)((a5 + 0x28))) - u6))))))) {
            u11 = *(float *)((a5 + 0x28));
            u12 = *(float *)((a5 + 0x20));
            if (!(0.0f > (u0 * ((((u11 - f6) * ((*(float *)((a5 + 0x2C))) - u12)) - ((u12 - f4) * ((*(float *)((a5 + 0x34))) - u11))))))) {
                u16 = *(float *)((a5 + 0x34));
                u17 = *(float *)((a5 + 0x2C));
                if (!(0.0f > (u0 * ((((u16 - f6) * ((*(float *)((a5 + 0x38))) - u17)) - ((u17 - f4) * ((*(float *)((a5 + 0x40))) - u16))))))) {
                    u21 = *(float *)((a5 + 0x40));
                    u22 = *(float *)((a5 + 0x38));
                    if (!(0.0f > (u0 * ((((u21 - f6) * ((*(float *)((a5 + 0x14))) - u22)) - ((u22 - f4) * ((*(float *)((a5 + 0x1C))) - u21))))))) {
                        *(unsigned int *)0xC94C6C0 = (*(int *)((a5 + 0x44)));
                        *(float *)0xC94C6E0 = (((f5 - ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0))) * ((f5 - ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0))));
                        *(float *)0xC94C6C4 = f4;
                        *(float *)0xC94C6C8 = ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0);
                        *(float *)0xC94C6CC = f6;
                        *(float *)0xC94C6D0 = u1;
                        *(float *)0xC94C6D4 = u0;
                        *(float *)0xC94C6D8 = u4;
                        *(float *)0xC94C6DC = u5;
                        *(unsigned int *)0xC94C6E4 = a5;
                        return (*(int *)0xC94C6C0);
                    }
                    if (a4 == 0) {
                        *(unsigned int *)0xC94C6C0 = 0x0;
                        *(unsigned int *)0xC94C6E4 = 0x0;
                        return 0x0;
                    }
                    return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0));
                }
                if (a4 == 0) {
                    *(unsigned int *)0xC94C6C0 = 0x0;
                    *(unsigned int *)0xC94C6E4 = 0x0;
                    return 0x0;
                }
                return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0));
            }
            if (a4 == 0) {
                *(unsigned int *)0xC94C6C0 = 0x0;
                *(unsigned int *)0xC94C6E4 = 0x0;
                return 0x0;
            }
            return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0));
        }
        if (a4 == 0) {
            *(unsigned int *)0xC94C6C0 = 0x0;
            *(unsigned int *)0xC94C6E4 = 0x0;
            return 0x0;
        }
        return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u4)) - u5) / u0));
    }
    u30 = *(float *)((a5 + 0x8));
    u31 = *(float *)((a5 + 0xC));
    if (((((-(f4 * u1)) - (f6 * u30)) - u31) / u0) > f5) {
        if (a4 == 0) {
            *(unsigned int *)0xC94C6C0 = 0x0;
            *(unsigned int *)0xC94C6E4 = 0x0;
            return 0x0;
        }
        return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0));
    }
    u32 = *(float *)((a5 + 0x1C));
    u33 = *(float *)((a5 + 0x14));
    if (!(0.0f > (u0 * ((((u32 - f6) * ((*(float *)((a5 + 0x20))) - u33)) - ((u33 - f4) * ((*(float *)((a5 + 0x28))) - u32))))))) {
        u37 = *(float *)((a5 + 0x28));
        u38 = *(float *)((a5 + 0x20));
        if (!(0.0f > (u0 * ((((u37 - f6) * ((*(float *)((a5 + 0x2C))) - u38)) - ((u38 - f4) * ((*(float *)((a5 + 0x34))) - u37))))))) {
            u42 = *(float *)((a5 + 0x34));
            u43 = *(float *)((a5 + 0x2C));
            if (!(0.0f > (u0 * ((((u42 - f6) * ((*(float *)((a5 + 0x38))) - u43)) - ((u43 - f4) * ((*(float *)((a5 + 0x40))) - u42))))))) {
                u47 = *(float *)((a5 + 0x40));
                u48 = *(float *)((a5 + 0x38));
                if (!(0.0f > (u0 * ((((u47 - f6) * ((*(float *)((a5 + 0x14))) - u48)) - ((u48 - f4) * ((*(float *)((a5 + 0x1C))) - u47))))))) {
                    *(unsigned int *)0xC94C6C0 = (*(int *)((a5 + 0x44)));
                    *(float *)0xC94C6E0 = (((f5 - ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0))) * ((f5 - ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0))));
                    *(float *)0xC94C6C4 = f4;
                    *(float *)0xC94C6C8 = ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0);
                    *(float *)0xC94C6CC = f6;
                    *(float *)0xC94C6D0 = u1;
                    *(float *)0xC94C6D4 = u0;
                    *(float *)0xC94C6D8 = u30;
                    *(float *)0xC94C6DC = u31;
                    *(unsigned int *)0xC94C6E4 = a5;
                    return (*(int *)0xC94C6C0);
                }
                if (a4 == 0) {
                    *(unsigned int *)0xC94C6C0 = 0x0;
                    *(unsigned int *)0xC94C6E4 = 0x0;
                    return 0x0;
                }
                return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0));
            }
            if (a4 == 0) {
                *(unsigned int *)0xC94C6C0 = 0x0;
                *(unsigned int *)0xC94C6E4 = 0x0;
                return 0x0;
            }
            return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0));
        }
        if (a4 == 0) {
            *(unsigned int *)0xC94C6C0 = 0x0;
            *(unsigned int *)0xC94C6E4 = 0x0;
            return 0x0;
        }
        return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0));
    }
    if (a4 == 0) {
        *(unsigned int *)0xC94C6C0 = 0x0;
        *(unsigned int *)0xC94C6E4 = 0x0;
        return 0x0;
    }
    return FUN_0c0e1138(a4, f4, f5, f6, u0, ((((-(f4 * u1)) - (f6 * u30)) - u31) / u0));
}

int FUN_0c043d88(int a4)
{
    int t0;
    int t25;
    int t46;
    int t4;
    int t14;
    int stk[7];

    t0 = *(int *)((a4 + 0x4C4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        *(unsigned int *)((a4 + 0x508)) = 0x1;
                        FUN_0c0432e2(a4);
                        if ((((*(int *)0xC246304) & 0x1) != 0) && (t4 = *(int *)0xC246310, (t4 & 16) == 0)) {
                            FUN_0c043b7c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        } else {
                            *(unsigned int *)((a4 + 0x4C4)) = 0x1;
                            *(unsigned int *)0xC246304 = ((*(int *)0xC246304) & 0xFFFFFFFE);
                            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFEF);
                            FUN_0c043510(a4);
                        }
                    }
                } else {
                    *(unsigned int *)((a4 + 0x508)) = 0x0;
                    FUN_0c043200(a4);
                    if (((0x2 & (*(int *)0xC246304)) != 0) && (t14 = *(int *)0xC246310, (t14 & 4) == 0)) {
                        FUN_0c0438ac(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    } else {
                        *(unsigned int *)((a4 + 0x4C4)) = 0x1;
                        *(unsigned int *)0xC246304 = ((*(int *)0xC246304) & 0xFFFFFFFD);
                        *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFF9);
                        FUN_0c043510(a4);
                    }
                }
            } else {
                *(unsigned int *)((a4 + 0x508)) = 0x0;
                FUN_0c043724(a4);
            }
        } else {
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            t25 = *(int *)0xC246304;
            if ((0x1 & t25) != 0) {
                *(unsigned int *)((a4 + 0x4C4)) = 0x4;
                FUN_0c043510(a4);
            } else {
                if ((t25 & 0x2) != 0) {
                    *(unsigned int *)((a4 + 0x4C4)) = 0x3;
                    FUN_0c043510(a4);
                } else {
                    if ((*(int *)0xC247074) == 0) {
                        *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                        FUN_0c043510(a4);
                    } else {
                        FUN_0c04356c(a4);
                    }
                }
            }
        }
    } else {
        if ((*(int *)((a4 + 0x1BC))) != 0) {
            *(unsigned int *)((a4 + 0x3AC)) = 0x1;
            *(unsigned int *)((a4 + 0x3B0)) = 0x1E;
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        }
        if ((*(int *)((a4 + 0x3AC))) != 0) {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x222);
            t46 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t46 - 1);
            if ((int)(t46 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x3AC)) = 0x0;
            }
        }
    }
    return ((int (*)(int))(0xC042F3C))(a4);
}
