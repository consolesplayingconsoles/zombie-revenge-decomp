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
int FUN_0c0438ac(int);
int FUN_0c043b7c(int);
int FUN_0c062a74(int);
int FUN_0c062d04(void);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086b70(void);
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c0b25d0(void);
int FUN_0c0b2a28(int);
int FUN_0c0b70a0(int);
int FUN_0c0b72d6(int);
int FUN_0c0bffc4(void);
int FUN_0c0c0340(int);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c5d32(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc6ac(void);
int FUN_0c0cc6dc(void);
int FUN_0c0cf908(void);
int FUN_0c0d9000(int, int, int, int, int);
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
int FUN_0c0e19f2(void);
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
int get_fat(int, int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFatalErrorEntry(int);
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
int vmsfs_fclose(int a4, int a5);
int FUN_0c05f07c(int a4);
int FUN_0c0b2b18(void);
int vmsfs_xcreate(int a4, int a5, int a6, int a7);
int FUN_0c016728(void);
int FUN_0c0453ac(int a4);
int FUN_0c0da9a0(int a4, int a5, int a6, int a7);
int FUN_0c218514(int a4, int a5, int a6, int a7);
int FUN_0c0e1310(int, int, float, float, float);
int FUN_0c043d88(int a4);
struct o18_float { char p[0x18]; float v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o27C_short { char p[0x27C]; short v; };
struct o27C_ushort { char p[0x27C]; unsigned short v; };
struct o27E_short { char p[0x27E]; short v; };
struct o27E_ushort { char p[0x27E]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o584_int { char p[0x584]; int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A4_int { char p[0x5A4]; int v; };
struct o5A8_int { char p[0x5A8]; int v; };
struct o5B8_uint { char p[0x5B8]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o82_short { char p[0x82]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };





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

    FUN_0c038ce0(a4, a5);
    if ((int)((((struct o57C_int *)(a4))->v)) < (int)0x3) {
        (((struct o57C_uint *)(a4))->v) = 0x3;
    }
    if (((((struct o1BC_int *)(a4))->v)) == 11) {
        t6 = (((struct o4F0_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct o5A0_int *)(a4))->v)) << 1) + (0x11A + (*(int *)((((((t6 << 2) + t6) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
        (((struct o4C4_uint *)(a4))->v) = 0x3;
        t39 = 0x4C4;
        t42 = 0x7;
    } else {
        if ((((((struct o5A8_int *)(a4))->v)) == 1) && (t11 = (((struct o580_int *)(a4))->v), t11 == 0)) {
            t12 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)((((struct o82_short *)((*(int *)(((0xC1F8E3C + (((t12 << 2) + t12) << 2)) + 0x10)))))->v));
            (((struct o4C4_uint *)(a4))->v) = 0x4;
            (((struct o4C8_uint *)(a4))->v) = 0x6;
            t39 = 0x4C8;
            t42 = 0x1;
        } else {
            t15 = (((struct o4F0_int *)(a4))->v);
            t16 = (((struct o584_int *)(a4))->v);
            t18 = (((struct o5A4_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + (((*(int *)((((((t15 << 2) + t15) << 2) + 0xC1F8E3C) + 0x10))) + ((((t16 << 1) + t16) << 2) << 2)) + (((t18 << 1) + t18) << 2)))));
            if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
                t22 = (((struct o4F0_int *)(a4))->v);
                t23 = (((struct o584_int *)(a4))->v);
                t25 = (((struct o5A4_int *)(a4))->v);
                (((struct o5B8_uint *)(a4))->v) = (unsigned short)(*(short *)((((((t25 << 1) + t25) << 2) + (((((t23 << 1) + t23) << 2) << 2) + (*(int *)(((0xC1F8E3C + (((t22 << 2) + t22) << 2)) + 0x10))))) + 0xA)));
            }
            (((struct o4C4_uint *)(a4))->v) = 0x3;
            t39 = 0x4C4;
            t42 = 0x7;
        }
    }
    *(unsigned int *)((a4 + (t39 + 0x4))) = t42;
    (((struct o20C_uint *)(a4))->v) = 0x800;
    (((struct o210_uint *)(a4))->v) = 0xB;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    t46 = (((struct o578_int *)(a4))->v);
    if (t46 == 9) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t51 = (((struct oC8_int *)(a4))->v);
            if ((t51 & 4) != 0) {
                return FUN_0c039e96(a4);
            }
            return t51;
        }
        return 0x304;
    }
    return t46;
}


void FUN_0c062d4a(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t1;
    int t18;

    t1 = FUN_0c0e19aa(0xC062C74, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((*(int *)0xC247B84) == 0) {
        FUN_0c062d04();
    }
    FUN_0c0cbafc(0x298, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3EC, 0x2, 0x7000, 0x2000);
    FUN_0c0cbafc(0x3ED, 0x2, 0x7000, 0x2000);
    t18 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t18 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t1))->v) = t18;
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o23C_uint *)(t1))->v) = (int)((float)((((struct o3AC_int *)(a4))->v)) * ((((struct o0_float *)0xC062F2C)->v)));
    (((struct o240_uint *)(t1))->v) = (int)((float)((((struct o3AC_int *)(a4))->v)) * ((((struct o4_float *)0xC062F2C)->v)));
    (((struct o244_uint *)(t1))->v) = a10;
    (((struct o22C_uint *)(t1))->v) = ((((struct o240_int *)(t1))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + t1)) = *(struct mv3 *)(a6); }
    (((struct oF0_uint *)(t1))->v) = a7;
    (((struct oF4_uint *)(t1))->v) = a8;
    (((struct oF8_uint *)(t1))->v) = 0x0;
    (((struct o220_uint *)(t1))->v) = a9;
    FUN_0c062a74(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
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
    int stk[12];
    int R1008;

    R1008 = *(int *)((int)stk + 8);

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
            t99 = t53;
            if ((int)t53 < (int)(*(int *)((a4 + 0x1C)))) {
                t58 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24));
                t59 = *(int *)((a4 + 0x28));
                t60 = t59;
                if ((int)t59 < 0) {
                    t60 = (t59 + 0x7FF);
                }
                R1008 = (*(int *)((a4 + 0x30)));
                t65 = gdFsTell((*(int *)((a4 + 0x8))));
                t66 = R1008;
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
                        t99 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t99 = 0x1;
                    }
                } else {
                    t99 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                }
            }
        } else {
            t99 = (FUN_0c22a934());
        }
    }
    return t99;
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

int vmsfs_fclose(int a4, int a5)
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
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    R5 = a5;
    L_C226292:;
    R1004 = R5;
    R14 = (R4);
    if ((R4 != 0)) goto L_C2262AE;
    goto L_C2262A8;
    L_C2262A8:;
    R0 = (0xFFFFFF00);
    goto L_C2263EA;
    L_C2263EA:;
    return R0;
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
    if (((R1004) == 0)) goto L_C22632C;
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





int FUN_0c0453ac(int a4)
{
    int stk[25];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + 5.0f);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (((((struct o34_float *)(a4))->v)) + 5.0f), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlScale(((((struct o274_float *)(a4))->v)), ((((struct o278_float *)(a4))->v)), ((((struct o27C_float *)(a4))->v)));
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -10.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o34_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o38_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -9.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o24_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o28_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 16)) = (-1.0f);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -9.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o18_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o1C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o20_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 12)));
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

    t0 = (((struct o0_int *)0xC9441B4)->v);
    u1 = *(float *)0xC0DABF8;
    t2 = (((struct o4_int *)0xC9441B4)->v);
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



int FUN_0c043d88(int a4)
{
    int t0;
    int t25;
    int t46;
    int t4;
    int t14;
    int stk[7];

    t0 = (((struct o4C4_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        (((struct o508_uint *)(a4))->v) = 0x1;
                        FUN_0c0432e2(a4);
                        if (((((((struct o0_int *)0xC246304)->v)) & 0x1) != 0) && (t4 = (((struct oC_int *)0xC246304)->v), (t4 & 16) == 0)) {
                            FUN_0c043b7c(a4);
                        } else {
                            (((struct o4C4_uint *)(a4))->v) = 0x1;
                            (((struct o0_uint *)0xC246304)->v) = (((((struct o0_int *)0xC246304)->v)) & 0xFFFFFFFE);
                            (((struct oC_uint *)0xC246304)->v) = (((((struct oC_int *)0xC246304)->v)) & 0xFFFFFFEF);
                            FUN_0c043510(a4);
                        }
                    }
                } else {
                    (((struct o508_uint *)(a4))->v) = 0x0;
                    FUN_0c043200(a4);
                    if (((0x2 & ((((struct o0_int *)0xC246304)->v))) != 0) && (t14 = (((struct oC_int *)0xC246304)->v), (t14 & 4) == 0)) {
                        FUN_0c0438ac(a4);
                    } else {
                        (((struct o4C4_uint *)(a4))->v) = 0x1;
                        (((struct o0_uint *)0xC246304)->v) = (((((struct o0_int *)0xC246304)->v)) & 0xFFFFFFFD);
                        (((struct oC_uint *)0xC246304)->v) = (((((struct oC_int *)0xC246304)->v)) & 0xFFFFFFF9);
                        FUN_0c043510(a4);
                    }
                }
            } else {
                (((struct o508_uint *)(a4))->v) = 0x0;
                FUN_0c043724(a4);
            }
        } else {
            (((struct o508_uint *)(a4))->v) = 0x0;
            t25 = (((struct o0_int *)0xC246304)->v);
            if ((0x1 & t25) != 0) {
                (((struct o4C4_uint *)(a4))->v) = 0x4;
                FUN_0c043510(a4);
            } else {
                if ((t25 & 0x2) != 0) {
                    (((struct o4C4_uint *)(a4))->v) = 0x3;
                    FUN_0c043510(a4);
                } else {
                    if ((*(int *)0xC247074) == 0) {
                        (((struct o4C4_uint *)(a4))->v) = 0x2;
                        FUN_0c043510(a4);
                    } else {
                        FUN_0c04356c(a4);
                    }
                }
            }
        }
    } else {
        if (((((struct o1BC_int *)(a4))->v)) != 0) {
            (((struct o3AC_uint *)(a4))->v) = 0x1;
            (((struct o3B0_uint *)(a4))->v) = 0x1E;
            (((struct o1BC_uint *)(a4))->v) = 0x0;
        }
        if (((((struct o3AC_int *)(a4))->v)) != 0) {
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x222);
            t46 = (((struct o3B0_int *)(a4))->v);
            (((struct o3B0_uint *)(a4))->v) = (t46 - 1);
            if ((int)(t46 - 1) <= 0) {
                (((struct o3AC_uint *)(a4))->v) = 0x0;
            }
        }
    }
    return ((int (*)(int))(0xC042F3C))(a4);
}







