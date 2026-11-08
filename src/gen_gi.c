/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int FUN_0c01cdc2(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035458(int, int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int, Stk3);
int FUN_0c04685c(int, int, float, float);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c090a1c(int, int);
int FUN_0c090f70(int);
int FUN_0c09c42c(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0bdec2(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de310(float, float, float);
int FUN_0c0de3a0(float, float, float);
int FUN_0c0de3b0(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e262a(int);
int FUN_0c0e5f1c(int);
int FUN_0c230334(void);
int FUN_0c231fb4(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxf_ChkPrmGfr(int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int get_fat(int, int, int, int);
int kdGetDevice(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdSetBlockRead(Stk4);
int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTextureParameter(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int search_fat_dir(int, int);
int set_fat(int, int, int);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int vmsfb_sleep(void);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_fat(int);
int write_sys(int);
int FUN_0c01d3ee(int a4, int a5, int a6, int a7);
int FUN_0c0480ec(int a4);
int FUN_0c0451c0(void);
int kmiStartRenderTextureEntry(int a4);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c064740(int a4, int a5, int a6);
int vmsio_block_read(int a4, int a5, int a6);
int FUN_0c090dec(int a4);
int FUN_0c0981d0(int a4, int a5);
int write_dir_all(int a4, int a5, int a6, int a7);
int FUN_0c062180(int a4, int a5);
int FUN_0c062034(int a4);
int FUN_0c0cbafc(int a4, int a5, int a6, int a7);
int FUN_0c045acc(int a4, int a5, int a6);
int FUN_0c09eec4(int a4, int a5, int a6);
int FUN_0c0827c8(int a4, int a5);
int FUN_0c0355f8(int a4);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int FUN_0c0a2952(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0848d6(float f4, float f5, float f6);
int FUN_0c0dfa36(int a4);
struct o1C4_int { char p[0x1C4]; int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o338_float { char p[0x338]; float v; };
struct o33C_float { char p[0x33C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o340_float { char p[0x340]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o554_int { char p[0x554]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o4D8_int { char p[0x4D8]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };




int FUN_0c01d3ee(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u19;
    float u20;
    int t43;
    int t1;
    int t2;
    int t9;
    int stk[13];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    if (a5 == 0) {
    } else {
        R1004 = 0x0;
        R1008 = 0xC245F94;
        R1012 = 0xC23FF94;
        t0 = 0xC01D48C;
        t3 = 0xC23FF94;
        t4 = a5;
        t5 = a6;
        t6 = a7;
        t7 = a5;
        t8 = 0x0;
        for (;;) {
            if ((*(int *)((t7 + 0x4))) != 0) {
                t3 = 0xAC;
                t0 = (FUN_0c0e262a(t3));
                t9 = t0;
                t0 = 0xC;
                *(float *)((t9 + t0)) = 9999.0f;
                t0 = 0x98;
                *(unsigned int *)((t9 + 0x8)) = (*(int *)0xC245F98);
                *(unsigned int *)((t9 + 0x0)) = 0x0;
                t2 = (*(int *)((t7 + 0x0)));
                *(unsigned int *)((t9 + t0)) = t2;
                t0 = (t0 - 8);
                *(unsigned int *)((t9 + t0)) = (*(int *)((t7 + 0x4)));
                t0 = (t0 + 0x4);
                *(unsigned int *)((t9 + t0)) = a4;
                if ((R1004) != 0) {
                    t0 = 0xA8;
                    *(unsigned int *)((t8 + t0)) = t9;
                } else {
                    t0 = 0x84;
                    *(unsigned int *)((a4 + t0)) = t9;
                }
                t0 = 0xA8;
                *(unsigned int *)((t9 + t0)) = 0x0;
                t3 = 0x0;
                t0 = (nlPushMatrix(t3));
                t2 = 0xC0DCCC0;
                t0 = (nlUnitMatrix());
                t0 = 0x38;
                u19 = *(float *)((a4 + t0));
                t0 = 0x34;
                u20 = *(float *)((a4 + t0));
                t0 = 0x30;
                t0 = (FUN_0c0dcc70((*(float *)((a4 + t0))), u20, u19));
                t0 = 0x70;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAZ(t3));
                t0 = 0x6E;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAY(t3));
                t0 = 0x6C;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAX(t3));
                t2 = 0xC0DB640;
                t3 = t9;
                t3 = (t3 + 0x10);
                t0 = (nlGetMatrix(t3));
                t3 = 0x0;
                t0 = (nlInvertMatrix(t3));
                t3 = t9;
                t3 = (t3 + 0x50);
                t0 = (nlGetMatrix(t3));
                t3 = 0x1;
                t0 = (nlPopMatrix(t3));
                t0 = 0x9C;
                t2 = (*(int *)0xC245F98);
                t3 = 0x6000;
                *(unsigned int *)((t9 + t0)) = t2;
                t0 = (t0 + 0x4);
                t2 = 0x800;
                *(unsigned int *)0xC245F98 = ((*(int *)0xC245F98) + 0x1);
                *(unsigned int *)((t9 + t0)) = t2;
                t0 = (FUN_0c0e262a(t3));
                t1 = 0xA4;
                t1 = (t1 + t9);
                *(unsigned int *)((t1 + 0x0)) = t0;
                t0 = 0xA4;
                t6 = (R1012);
                t3 = (*(int *)((t9 + t0)));
                for (;;) {
                    t5 = t6;
                    t8 = 0x0;
                    for (;;) {
                        t4 = t5;
                        t8 = (t8 + 0x1);
                        *(unsigned int *)((t3 + 0x8)) = t9;
                        *(unsigned int *)((t3 + 0x4)) = t5;
                        *(unsigned int *)((t3 + 0x0)) = (*(int *)((t4 + 0x0)));
                        t2 = (*(int *)((t4 + 0x0)));
                        *(unsigned int *)((t2 + 0x4)) = t3;
                        *(unsigned int *)((t4 + 0x0)) = t3;
                        t3 = (t3 + 0xC);
                        t5 = (t5 + 0xC);
                        if ((int)t8 >= (int)0x40) {
                            break;
                        }
                    }
                    t1 = 0x300;
                    t6 = (t6 + t1);
                    if ((unsigned int)t6 >= (unsigned int)(R1008)) {
                        break;
                    }
                }
                t7 = (t7 + 0x8);
                t8 = t9;
                R1004 = ((R1004) + 0x1);
                continue;
            }
            break;
        }
        t43 = t0;
    }
    return t43;
}


int FUN_0c0451c0(void)
{
    int t51;
    int t2;
    int t3;
    int t6;
    int t8;
    int t11;
    int t13;
    int t16;
    int t18;
    int t21;
    int t23;
    int t26;
    int t27;
    int t30;
    int t35;
    int t45;
    int t47;
    int t49;
    int stk[15];
    int R1016;
    int R1020;
    int R1024;

    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    t51 = 0xC246DB4;
    if ((*(int *)0xC246DB4) == 0) {
    } else {
        FUN_0c0db0a0(0x1, 0x2F);
        t2 = 0x0;
        for (;;) {
            t3 = t2;
            R1020 = t3;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, t3);
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x30);
        t6 = 0x0;
        for (;;) {
            t8 = (*(int *)(((0xC246074 + t6) + 0x0)));
            R1020 = t8;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, t8);
            t6 = (t6 + 0x20);
            if ((unsigned int)t6 >= (unsigned int)0x80) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x31);
        t11 = 0x0;
        for (;;) {
            t13 = (*(int *)(((0xC246074 + t11) + 0x8)));
            R1020 = t13;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, t13);
            t11 = (t11 + 0x20);
            if ((unsigned int)t11 >= (unsigned int)0x80) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x32);
        t16 = 0x0;
        for (;;) {
            t18 = (*(int *)(((0xC246074 + t16) + 0xC)));
            R1020 = t18;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, t18);
            t16 = (t16 + 0x20);
            if ((unsigned int)t16 >= (unsigned int)0x80) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x33);
        t21 = 0x0;
        for (;;) {
            t23 = (*(int *)(((0xC246074 + t21) + 0x1C)));
            R1020 = t23;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, t23);
            t21 = (t21 + 0x20);
            if ((unsigned int)t21 >= (unsigned int)0x80) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x34);
        t26 = 0x0;
        for (;;) {
            t27 = *(short *)(((0xC2460F4 + t26) + 0x4));
            R1020 = (unsigned short)t27;
            R1016 = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, (unsigned short)t27);
            t26 = (t26 + 0x10);
            if ((unsigned int)t26 >= (unsigned int)0x200) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x35);
        R1024 = 0x0;
        t30 = 0x0;
        for (;;) {
            if ((*(int *)(((0xC2460F4 + t30) + 0x0))) != 0) {
                t35 = (*(int *)(((*(int *)(((0xC2460F4 + (R1024)) + 0x0))) + 0xBC)));
                R1020 = t35;
                R1016 = 0xC0F5CE8;
                nlPrintf(0xC0F5CE8, t35);
            } else {
                R1020 = 0xC0F5CF0;
                nlPrintf(0xC0F5CF0);
            }
            t30 = (t30 + 0x10);
            R1024 = ((R1024) + 0x10);
            if ((unsigned int)t30 >= (unsigned int)0x200) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x36);
        R1020 = ((*(int *)0xC2462F4));
        t45 = ((((struct o4_int *)0xC247070)->v));
        R1016 = t45;
        t47 = ((((struct o0_int *)0xC247070)->v));
        *(int *)((int)stk + 12) = t47;
        t49 = (*(int *)0xC23ED68);
        *(int *)((int)stk + 8) = t49;
        *(int *)((int)stk + 4) = 0xC0F5CF4;
        t51 = (nlPrintf(0xC0F5CF4, t49, t47, t45));
    }
    return t51;
}

int kmiStartRenderTextureEntry(int a4)
{
    int t0;
    int t48;
    int t27;

    (((struct o0_uint *)0xC952504)->v) = 0x1;
    t0 = (((struct o0_int *)0xC952660)->v);
    if (((*(int *)0xC952300) & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    kmiWriteRegister(0x2C, (*(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC95276C))));
    kmiWriteRegister(0x20, (*(int *)(((0xC952768 + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18))));
    kmiWriteRegister(0x60, (*(int *)((a4 + 0x8))));
    kmiWriteRegister(0x48, (*(int *)((a4 + 0x0))));
    kmiWriteRegister(0x4C, (*(int *)((a4 + 0x4))));
    kmiWriteRegister(0x68, (*(int *)((a4 + 0xC))));
    kmiWriteRegister(0x6C, (*(int *)((a4 + 0x10))));
    (((struct oC_uint *)0xC952660)->v) = 0x0;
    t48 = 0x0;
    if (((((struct o4_int *)0xC952504)->v)) != 0) {
        for (;;) {
            t27 = ((int (*)(int))(((((struct o0_int *)0xC952564)->v))))(((((struct o4_int *)0xC952564)->v)));
            if ((unsigned int)((((struct oC_int *)0xC952660)->v)) > (unsigned int)((((struct o20_int *)0xC952504)->v))) {
                break;
            }
            if (((((struct o4_int *)0xC952504)->v)) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, ((((struct o18_int *)0xC9525B0)->v)));
                    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC9525B0)->v)));
                    kmiWriteRegister(0x68, ((((struct o0_int *)0xC9525B0)->v)));
                    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC9525B0)->v)));
                    (((struct o4_uint *)0xC952504)->v) = 0x0;
                    (((struct o14_uint *)0xC952660)->v) = 0x0;
                    return kmiFlipVertexBuffer((*(int *)0xC239A9C));
                }
                kmiWriteRegister(0x8C, ((((struct o4_int *)0xC9524AC)->v)));
                kmiWriteRegister(0x88, (((((struct o0_int *)0xC9524AC)->v)) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t48 = 0x1;
    }
    if (t48 != 0) {
        kmiWriteRegister(0x48, ((((struct o18_int *)0xC9525B0)->v)));
        kmiWriteRegister(0x4C, ((((struct o10_int *)0xC9525B0)->v)));
        kmiWriteRegister(0x68, ((((struct o0_int *)0xC9525B0)->v)));
        kmiWriteRegister(0x6C, ((((struct o4_int *)0xC9525B0)->v)));
        (((struct o4_uint *)0xC952504)->v) = 0x0;
        (((struct o14_uint *)0xC952660)->v) = 0x0;
        return kmiFlipVertexBuffer((*(int *)0xC239A9C));
    }
    kmiWriteRegister(0x8C, ((((struct o4_int *)0xC9524AC)->v)));
    kmiWriteRegister(0x88, (((((struct o0_int *)0xC9524AC)->v)) & 0xFFFFFFF0));
    return (kmiWriteRegister(0x14, 0xFFFFFFFF));
}

int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8)
{
    int t6;
    int t11;
    int t22;
    int t23;
    int t28;
    int t46;
    int t58;
    int t59;
    int stk[19];

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
    int R1004;
    int R1008;
    int R1012;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    R1004 = R4;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 36)) = R6;
    R1008 = 0x0;
    R0 = (0x48);
    R10 = (0x1);
    R12 = (R7);
    R4 = (a8);
    R8 = (0x1);
    R9 = (0x0);
    L_C221712:;
    t6 = *(signed char *)((R4 + 0x0));
    R3 = (t6);
    R4 = ((R4 + 0x1));
    T_ = (((t6 == 0)));
    if ((t6 != 0)) goto L_C22170C;
    *(unsigned int *)(((int)stk + 40)) = R8;
    *(unsigned int *)(((int)stk + 24)) = R9;
    t11 = R1004;
    R1012 = (t11 + 0x800);
    *(unsigned int *)(((int)stk + 28)) = R9;
    R11 = (R8);
    R12 = ((R12 + 0x1));
    R14 = ((t11 + 0x800));
    L_C22172A:;
    R13 = (R14);
    if (((unsigned int)R14 >= (unsigned int)(R1012))) goto L_C221748;
    if (((unsigned int)((((unsigned char)(*(signed char *)((R13 + 0x0))) + ((unsigned char)(*(signed char *)((R13 + 0x0))) & 0x1)) + 0x8) + R14) < (unsigned int)(R1012))) goto L_C221772;
    L_C221748:;
    t22 = R1004;
    t23 = R1004;
    gdFsMemcpy(R14, (t23 - ((t22 - R14) + 0x800)), ((t22 - R14) + 0x800));
    t28 = (gdFsReadWG((*(int *)(((int)stk + 20))), 0x1, (R1004))) != 0;
    R13 = ((t23 - ((t22 - R14) + 0x800)));
    R14 = (0xC20F234);
    if (t28) goto L_C221816;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    R14 = (R13);
    L_C221772:;
    gdFsMemcpy((R13 + 0x6), (((int)stk + 4) + 0xC), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 16))) != (*(int *)(((int)stk + 40))))) goto L_C2217FA;
    if ((R11 == 1)) goto L_C2217F8;
    if ((R10 != 1)) goto L_C22179E;
    *(unsigned int *)(((int)stk + 32)) = (R1008);
    R5 = (a8);
    L_C2217A4:;
    if (((unsigned char)(*(signed char *)((R13 + 0x0))) != (*(int *)(((int)stk + 32))))) goto L_C2217FA;
    t46 = (gdFsStrncmpi((R13 + 0x8), R5, (*(int *)(((int)stk + 32))))) == 0;
    if (t46) goto L_C2217FA;
    if ((R10 != 0)) goto L_C2217C2;
    R12 = ((R12 + (*(int *)(((int)stk + 28)))));
    L_C2217C2:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_C2217D4;
    R0 = ((gdFsGetLE4((R13 + 0x2))));
    R14 = (0xC20EF5C);
    L_C221818:;
    return R0;
    L_C2217D4:;
    if ((R10 != 1)) goto L_C2217E8;
    R10 = (R9);
    L_C2217F0:;
    *(unsigned int *)(((int)stk + 28)) = (gdFsGetTokenSize(R12, 0xC237A98, R6));
    L_C2217F8:;
    *(unsigned int *)(((int)stk + 40)) = R11;
    L_C2217FA:;
    t58 = *(signed char *)((R13 + 0x0));
    t59 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 24)) = (t59 + ((((unsigned char)t58 & R8) + (unsigned char)t58) + 0x8));
    R11 = ((R11 + 0x1));
    R14 = ((R14 + ((((unsigned char)t58 & R8) + (unsigned char)t58) + 0x8)));
    R4 = (((((unsigned char)t58 & R8) + (unsigned char)t58) + 0x8));
    if (((int)(t59 + ((((unsigned char)t58 & R8) + (unsigned char)t58) + 0x8)) < (int)(*(int *)(((int)stk + 36))))) goto L_C22172A;
    L_C221816:;
    R0 = (0x0);
    goto L_C221818;
    L_C2217E8:;
    if ((R11 == 1)) goto L_C2217F0;
    R12 = ((R12 + 0x1));
    goto L_C2217F0;
    L_C22179E:;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 28)));
    R5 = (R12);
    goto L_C2217A4;
    L_C22170C:;
    R2 = ((R1008));
    R1008 = (R2 + 0x1);
    goto L_C221712;
}

int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t9;
    int t7;
    int t15;
    int t13;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t35;
    int t36;
    int t37;
    int t48;
    int t49;
    int t50;
    int t51;
    int t5;
    int t11;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if ((*(int *)((0xD4 + (*(int *)0xC239F3C)))) == 1) {
        *(unsigned int *)(((int)stk + 8)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t7 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t5 = 0xFFFFFFFF;
            }
            t7 = t5;
        }
        t9 = t7;
    }
    t15 = 0x0;
    if (a9 != 0) {
        t13 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        t15 = t13;
    }
    syG2DmaSuspendAll();
    FUN_0c230334();
    t19 = *(int *)(((int)stk + 4));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                if ((int)a7 > 0) {
                    t20 = a5;
                    t21 = a4;
                    t22 = 0x0;
                    for (;;) {
                        t23 = *(int *)((t21 + 0x0));
                        t22 = (t22 + 0x1);
                        t21 = (t21 + (t9 << 2));
                        *(unsigned int *)((t20 + 0x0)) = t23;
                        t20 = (t20 + (t15 << 2));
                        if ((int)t22 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            if ((int)a7 > 0) {
                t34 = a5;
                t35 = 0x0;
                t36 = a4;
                for (;;) {
                    t37 = *(short *)((t36 + 0x0));
                    t35 = (t35 + 0x1);
                    t36 = (t36 + (t9 << 1));
                    *(unsigned short *)((t34 + 0x0)) = t37;
                    t34 = (t34 + (t15 << 1));
                    if ((int)t35 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        if ((int)a7 > 0) {
            t48 = 0x0;
            t49 = a4;
            t50 = a5;
            for (;;) {
                t51 = *(signed char *)((t49 + 0x0));
                t48 = (t48 + 0x1);
                t49 = (t49 + t9);
                *(unsigned char *)((t50 + 0x0)) = t51;
                t50 = (t50 + t15);
                if ((int)t48 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if ((*(int *)((0xD4 + (*(int *)0xC239F3C)))) == 1) {
        _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}



int FUN_0c090dec(int a4)
{
    int t0;
    int t8;
    float u13;
    float u15;
    int t17;
    int t20;
    int t24;
    int stk[20];

    t0 = (((struct o1C4_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 12)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    *(unsigned int *)(((int)stk + 16)) = 0x8;
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    nlPushMatrix(0x0);
    for (;;) {
        t8 = FUN_0c0e19aa(0xC0919FC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        (((struct o60_uint *)(t8))->v) = 0x291;
        (((struct o64_uint *)(t8))->v) = (((FUN_0c0da2e0()) & 0xF) + 0x14);
        u13 = 2.5f;
        u13 = u13 + 9.15555283e-05f * (float)(FUN_0c0da2e0());
        (((struct o54_float *)(t8))->v) = u13;
        u15 = 1.0f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        (((struct o44_float *)(t8))->v) = u15;
        nlUnitMatrix();
        t17 = FUN_0c0da2e0();
        nlRotateAY((((t17 & 0x7FFF) + (*(int *)(((int)stk + 8)))) - 16384));
        t20 = FUN_0c0da2e0();
        nlRotateAX((((*(int *)(((int)stk + 4))) - (t20 & 0xFFF)) - 4096));
        FUN_0c0db470((t8 + 0x3C), (t8 + 0x3C));
        t24 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t24 - 1);
        if ((t24 - 1) == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0981d0(int a4, int a5)
{
    int t0;
    int t30;
    int t31;
    int t38;
    int t42;
    int t43;
    int stk[1];

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
    float F3;
    float F5;
    float F11;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C0981D0:;
    t0 = *(int *)((R4 + 0xC));
    R0 = (t0);
    R6 = (0x1);
    if ((t0 == 0)) goto L_C098228;
    if ((R0 == 1)) goto L_C09829C;
    if ((R0 != 2)) goto L_C0981E4;
    L_C0982E2:;
    if (((*(int *)((R4 + 0x10))) != 0)) goto L_C0982A6;
    L_C0982E8:;
    *(unsigned int *)((R4 + 0x4)) = (*(int *)((R4 + 0x14)));
    R6 = (0x0);
    L_C0982EE:;
    *(unsigned int *)((R4 + 0xC)) = R6;
    goto L_C0981D0;
    L_C0982A6:;
    if ((((*(int *)(((*(int *)((R4 + 0x14))) + 0x0))) & R6) != 0)) goto L_C0982BC;
    *(unsigned int *)((R4 + 0x14)) = ((*(int *)((R4 + 0x14))) + 0x8);
    *(unsigned int *)((R4 + 0x10)) = ((*(int *)((R4 + 0x10))) - 1);
    goto L_C0982E2;
    L_C0982BC:;
    *(float *)((R5 + 0x0)) = (*(float *)(((*(int *)((R4 + 0x14))) + 0x0)));
    (((struct o4_float *)(R5))->v) = ((((struct o4_float *)((*(int *)((R4 + 0x14)))))->v));
    (((struct o8_float *)(R5))->v) = ((((struct o8_float *)((*(int *)((R4 + 0x14)))))->v));
    *(unsigned int *)((R4 + 0x14)) = ((*(int *)((R4 + 0x14))) + 0x20);
    *(unsigned int *)((R4 + 0x10)) = ((*(int *)((R4 + 0x10))) - 1);
    return 0x1;
    L_C0981E4:;
    goto L_C0981D0;
    L_C09829C:;
    if (((*(int *)((R4 + 0x10))) != 0)) goto L_C098288;
    goto L_C0982E8;
    L_C098288:;
    if ((((*(int *)(((*(int *)((R4 + 0x14))) + 0x0))) & R6) != 0)) goto L_C0982BC;
    *(unsigned int *)((R4 + 0x14)) = ((*(int *)((R4 + 0x14))) + 0x8);
    *(unsigned int *)((R4 + 0x10)) = ((*(int *)((R4 + 0x10))) - 1);
    goto L_C09829C;
    L_C098228:;
    t30 = *(int *)((R4 + 0x4));
    *(unsigned int *)((R4 + 0x4)) = (t30 + 0x4);
    t31 = *(int *)((((t30 + 0x4) - 4) + 0x0));
    R7 = (t31);
    if ((t31 == 0)) goto L_C098284;
    if (((R7 & 0x80000000) == 0)) goto L_C09824A;
    *(unsigned int *)((R4 + 0x4)) = (((*(int *)((R4 + 0x4))) - 4) + 0x50);
    goto L_C0981D0;
    L_C09824A:;
    R0 = (0x10);
    if (((R7 & 0x10) == 0)) goto L_C098264;
    t38 = *(int *)((R4 + 0x4));
    *(unsigned int *)((R4 + 0x4)) = (t38 + 0x4);
    *(unsigned int *)((R4 + 0x10)) = (*(int *)((((t38 + 0x4) - 4) + 0x0)));
    *(unsigned int *)((R4 + 0x14)) = (*(int *)((R4 + 0x4)));
    goto L_C0982EE;
    L_C098264:;
    if (((R7 & 0x8) == 0)) goto L_C098284;
    t42 = *(int *)((R4 + 0x4));
    *(unsigned int *)((R4 + 0x4)) = (t42 + 0x4);
    t43 = *(int *)((((t42 + 0x4) - 4) + 0x0));
    *(unsigned int *)((R4 + 0x10)) = ((t43 << 1) + t43);
    *(unsigned int *)((R4 + 0x14)) = (*(int *)((R4 + 0x4)));
    R6 = (0x2);
    goto L_C0982EE;
    L_C098284:;
    return 0x0;
}



int FUN_0c062034(int a4)
{
    int t0;
    int t9;
    int t10;
    int t14;
    float u17;
    int t25;
    int stk[18];

    t0 = *(int *)0xC247B84;
    if (t0 != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAZ(((((struct o70_short *)(a4))->v)));
        nlRotateAY(((((struct o6E_short *)(a4))->v)));
        nlRotateAX(((((struct o6C_short *)(a4))->v)));
        t9 = 0xA;
        for (;;) {
            t10 = *(int *)((t0 + 0x30));
            *(unsigned int *)((t0 + 0x30)) = (t10 + 0x1);
            if ((int)(*(int *)((t0 + 0x30))) >= (int)0x100) {
                *(unsigned int *)((t0 + 0x30)) = 0x0;
            }
            *(unsigned int *)(((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x20)) = 0x4;
            *(unsigned int *)(((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x18)) = 0x14;
            *(unsigned int *)(((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x1C)) = 0x114;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34))) = *(struct mv3 *)((a4 + 0x30)); }
            nlPushMatrix(0x0);
            t14 = FUN_0c0da2e0();
            nlRotateAZ((t14 << 1));
            *(float *)(((int)stk + 16)) = 0.0f;
            u17 = 0.00999999978f;
            u17 = u17 + 2.44200219e-05f * (float)((FUN_0c0da2e0()) & 0xFFF);
            *(float *)(((int)stk + 20)) = (-(((((struct o50_float *)(a4))->v)) * u17));
            *(float *)(((int)stk + 24)) = 0.0f;
            FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
            (((struct oC_float *)((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34))))->v) = (*(float *)(((int)stk + 4)));
            (((struct o10_float *)((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34))))->v) = (*(float *)(((int)stk + 8)));
            (((struct o14_float *)((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34))))->v) = (*(float *)(((int)stk + 12)));
            nlPopMatrix(0x1);
            t9 = (t9 - 0x1);
            if (t9 == 0) {
                break;
            }
        }
        t25 = (nlPopMatrix(0x1));
    }
    return t25;
}

int FUN_0c0cbafc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;
    int t13;
    int t14;
    int t18;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        if (t0 != 0) {
            t1 = (t0 + 0x18);
            t2 = a4;
            t3 = a6;
            for (;;) {
                t4 = *(int *)((t1 + 0x0));
                t1 = (t1 + 0x4);
                if (t4 == 0) {
                    return t1;
                }
                if ((t4 & 0x80000000) != 0) {
                    t2 = ((*(int *)(((((a5 - 1) << 2) + t1) + 0x0))) & (~a6));
                    t2 = (t2 | a7);
                    *(unsigned int *)(((((a5 - 1) << 2) + t1) + 0x0)) = t2;
                    t1 = (t1 - 4);
                    t1 = (t1 + 0x50);
                } else {
                    t3 = 0x10;
                    if ((t4 & t3) != 0) {
                        t9 = *(int *)((t1 + 0x0));
                        t1 = (t1 + 0x4);
                        t3 = t9;
                        t10 = t1;
                        for (;;) {
                            t2 = (*(int *)((t10 + 0x0)));
                            if ((t2 & 0x1) == 0) {
                                t10 = (t10 + 0x8);
                            } else {
                                t10 = (t10 + 0x20);
                            }
                            t3 = (t3 - 0x1);
                            if (t3 == 0) {
                                break;
                            }
                        }
                        t18 = t10;
                    } else {
                        t3 = 0x8;
                        if ((t4 & t3) == 0) {
                            break;
                        }
                        t13 = *(int *)((t1 + 0x0));
                        t1 = (t1 + 0x4);
                        t3 = t13;
                        t2 = t3;
                        t3 = (t3 << 1);
                        t3 = (t3 + t2);
                        t14 = t1;
                        for (;;) {
                            if (((*(int *)((t14 + 0x0))) & 0x1) == 0) {
                                t14 = (t14 + 0x8);
                            } else {
                                t14 = (t14 + 0x20);
                            }
                            t3 = (t3 - 0x1);
                            if (t3 == 0) {
                                break;
                            }
                        }
                        t18 = t14;
                    }
                    t1 = t18;
                }
            }
            for (;;) {
            }
        }
        return 0xC2623A0;
    }
    return 0xC2623A0;
}

int FUN_0c045acc(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t11;
    int t15;
    int t27;
    int t0;

    t1 = a5;
    t2 = a6;
    t3 = a5;
    for (;;) {
        t5 = *(int *)((t3 + 0x8));
        t7 = *(int *)((t3 + 0x4));
        *(unsigned int *)((((a4 + 0x4C) + (t2 << 2)) + 0x4)) = (((*(int *)((((a4 + 0x4C) + (t2 << 2)) + 0x0))) + (*(int *)((t3 + 0x0)))) + 0x2);
        *(unsigned int *)((((a4 + 0x38) + (t2 << 2)) + 0x0)) = 0x0;
        for (;;) {
            t8 = *(int *)((((a4 + 0x38) + (t2 << 2)) + 0x0));
            if ((*(int *)((((((t8 << 1) + t8) << 2) + t7) + 0x0))) == 0) {
                break;
            }
            t1 = a4;
            t1 = (t1 + 0x38);
            t1 = (t1 + (t2 << 2));
            t0 = 0x60;
            t11 = *(int *)((t1 + 0x0));
            t1 = (*(int *)((a4 + t0)));
            t1 = (t1 + t11);
            t1 = (t1 + 0x1);
            t0 = (FUN_0c0db0a0(((*(int *)((((a4 + 0x4C) + (t2 << 2)) + 0x0))) + 0x1), t1));
            t15 = *(int *)((((a4 + 0x38) + (t2 << 2)) + 0x0));
            t0 = (nlPrintf(0xC0F5E18, ((*(int *)((((((t15 << 1) + t15) << 2) + t7) + 0x0))))));
            *(unsigned int *)((((a4 + 0x38) + (t2 << 2)) + 0x0)) = ((*(int *)((((a4 + 0x38) + (t2 << 2)) + 0x0))) + 0x1);
        }
        if ((int)(*(int *)((a4 + 0x34))) > (int)t2) {
            t0 = 0x60;
            t1 = (*(int *)((a4 + t0)));
            t1 = (t1 + (*(int *)((t5 + 0x0))));
            t1 = (t1 + 0x1);
            t0 = (FUN_0c0db0a0((*(int *)((((a4 + 0x4C) + (t2 << 2)) + 0x0))), t1));
            t0 = (nlPrintf(0xC0F5E1C));
            t1 = (*(int *)((t5 + 0x0)));
            t27 = t1;
            t1 = (t1 << 1);
            t1 = (t1 + t27);
            t1 = (t1 << 2);
            t1 = (t1 + t7);
            t1 = (*(int *)((t1 + 0x4)));
            t3 = t1;
            t2 = (t2 + 0x1);
            continue;
        }
        break;
    }
    *(unsigned int *)((a4 + 0x68)) = t3;
    return 0x68;
}


int FUN_0c0827c8(int a4, int a5)
{
    int t2;
    int t30;
    int t6;
    float u11;
    float u13;
    float u14;
    float u16;
    float u17;
    float u19;
    int stk[5];

    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t30 = 0xC247CAC;
    if ((*(int *)0xC247030) != 0) {
        t6 = *(int *)0xC246FF0;
        if (((((struct o3F4_int *)(t2))->v)) == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t2)) = *(struct mv3 *)(a4); }
            (((struct o3F4_uint *)(t2))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + t2)) = *(struct mv3 *)((t6 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x404 + t2)) = *(struct mv3 *)(a5); }
        }
        u11 = (((struct o338_float *)(t2))->v);
        u13 = u11;
        u13 = u13 + 0.199999988f * (((((struct o30_float *)(t6))->v)) - u11);
        (((struct o338_float *)(t2))->v) = u13;
        u14 = (((struct o33C_float *)(t2))->v);
        u16 = u14;
        u16 = u16 + 0.199999988f * ((((((struct o34_float *)(t6))->v)) - u14) + 15.0f);
        (((struct o33C_float *)(t2))->v) = u16;
        u17 = (((struct o340_float *)(t2))->v);
        u19 = u17;
        u19 = u19 + 0.199999988f * (((((struct o38_float *)(t6))->v)) - u17);
        (((struct o340_float *)(t2))->v) = u19;
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o254_float *)(t2))->v)) - ((((struct o338_float *)(t2))->v))), (((((struct o258_float *)(t2))->v)) - ((((struct o33C_float *)(t2))->v))), (((((struct o25C_float *)(t2))->v)) - ((((struct o340_float *)(t2))->v))));
        (((struct o3CC_ushort *)(t2))->v) = (*(int *)(((int)stk + 4)));
        (((struct o3CE_ushort *)(t2))->v) = (*(int *)(((int)stk + 8)));
        t30 = (nlAddVector((0x254 + t2), (0x404 + t2)));
    }
    return t30;
}

int FUN_0c0355f8(int a4)
{
    int t0;
    int t24;
    int t5;
    int stk[19];

    t0 = (((struct o554_int *)(a4))->v);
    t24 = t0;
    if (t0 != 2) {
        *(unsigned short *)(((int)stk + 24)) = (FUN_0c035458(a4, 0x0));
        *(unsigned short *)(((int)stk + 32)) = (FUN_0c035458(a4, 0x9));
        nlPushMatrix(0x0);
        nlUnitMatrix();
        t5 = *(short *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 28)) = (unsigned short)t5;
        nlRotateAY((unsigned short)t5);
        FUN_0c0dcc70(0.0f, 0.0f, 10.0f);
        nlRotateAY(((unsigned short)(*(short *)(((int)stk + 32))) - (*(int *)(((int)stk + 28)))));
        FUN_0c0dcc70(0.0f, 0.0f, 10.0f);
        *(float *)(((int)stk + 48)) = 0.0f;
        *(float *)(((int)stk + 52)) = 0.0f;
        *(float *)(((int)stk + 56)) = 0.0f;
        FUN_0c0db470((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
        (((struct oC_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
        (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 40)));
        (((struct o4_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 44)));
        nlPopMatrix(0x1);
        FUN_0c0a7714((((int)stk + 4) + 0x10), ((int)stk + 4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))));
        (((struct o6E_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + ((((struct o4D8_int *)(a4))->v)));
        t24 = 0x6E;
    }
    return t24;
}


int FUN_0c0a2952(int a4, int a5, int a6, int a7, int a8)
{
    int t10;
    int t20;
    int t22;
    int t27;
    int t28;
    int t7;
    int stk[37];
    int R1004;
    int R1008;
    int R1012;
    int R1112;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1112 = *(int *)((int)stk + 112);

    R1112 = a8;
    R1008 = a5;
    R1012 = a6;
    R1004 = a7;
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x1C))));
    nlRotateAX((*(int *)((a4 + 0x18))));
    nlGetMatrix((((int)stk + 4) + 0xC));
    t7 = (a8 + 0x2);
    R1112 = t7;
    FUN_0c0c47ae((*(short *)((((a8 + 0x2) - 2) + 0x0))));
    t10 = (a4 + 0x20);
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0(t10);
        nlRotateAY((*(int *)((t10 + 0x1C))));
        nlRotateAX((*(int *)((t10 + 0x18))));
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        nlMultiMatrix((((int)stk + 4) + 0xC));
        t20 = R1008;
        R1008 = (t20 + 0xC);
        FUN_0c0dcca0(((t20 + 0xC) - 12));
        t22 = R1004;
        R1004 = (t22 + 0x10);
        FUN_0c0bdec2(((t22 + 0x10) - 16));
        nlPopMatrix(0x1);
        nlGetMatrix((((int)stk + 4) + 0xC));
        t7 = (t7 + 0x2);
        R1112 = t7;
        t27 = FUN_0c0c47ae((*(short *)((((t7 + 0x2) - 2) + 0x0))));
        t28 = R1012;
        t10 = (t10 + 0x20);
        R1012 = (t28 - 1);
        if ((t28 - 1) == 0) {
            break;
        }
    }
    return t27;
}

int FUN_0c0848d6(float f4, float f5, float f6)
{
    if (((((struct o24_int *)0xC247EE8)->v)) != 0) {
        FUN_0c0de3a0((((f4 * ((((struct oC_float *)0xC247EE8)->v)))) * ((((struct o0_float *)0xC247EE8)->v))), (((f5 * ((((struct o10_float *)0xC247EE8)->v)))) * ((((struct o4_float *)0xC247EE8)->v))), (((f6 * ((((struct o14_float *)0xC247EE8)->v)))) * ((((struct o8_float *)0xC247EE8)->v))));
        return FUN_0c0de3b0((((f4 * ((((struct o18_float *)0xC247EE8)->v)))) * ((((struct o0_float *)0xC247EE8)->v))), (((f5 * ((((struct o1C_float *)0xC247EE8)->v)))) * ((((struct o4_float *)0xC247EE8)->v))), (((f6 * ((((struct o20_float *)0xC247EE8)->v)))) * ((((struct o8_float *)0xC247EE8)->v))));
    }
    return FUN_0c0de310((f4 * ((((struct o0_float *)0xC247EE8)->v))), (f5 * ((((struct o4_float *)0xC247EE8)->v))), (f6 * ((((struct o8_float *)0xC247EE8)->v))));
}








int FUN_0c0dfa36(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t29;
    int stk[9];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    R1028 = a4;
    R1016 = 0x0;
    t0 = R1028;
    R1024 = t0;
    t1 = *(int *)0xC948270;
    R1008 = t1;
    t2 = 0xC948270;
    t3 = t1;
    t4 = t0;
    t5 = a4;
    for (;;) {
        if ((*(int *)(((R1024) + 0x4))) == -1) {
            break;
        }
        t4 = (R1008);
        R1012 = t4;
        t3 = (R1012);
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t2 = 0xC943D78;
        t4 = (*(int *)((t2 + 0x0)));
        t3 = (t3 + t4);
        if ((*(int *)((t3 + 0x0))) == 0) {
            R1016 = 0xFFFFFFFF;
            t29 = t5;
        } else {
            t4 = (R1012);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            R1012 = (*(int *)((t4 + 0x4)));
            t4 = (R1008);
            t4 = (t4 << 1);
            t3 = 0xC94C69C;
            t4 = (*(short *)((t4 + (*(int *)((t3 + 0x0))))));
            t4 = (short)t4;
            R1004 = t4;
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = (*(int *)0xC94C6A8);
            t4 = (t4 + t2);
            t2 = 0x7E00000;
            t4 = (*(int *)((t4 + 0xC)));
            t4 = (t4 & t2);
            R1020 = t4;
            t5 = (R1004);
            t5 = (t5 << 2);
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t2 = 0xC94C6A8;
            t4 = (*(int *)((t2 + 0x0)));
            t5 = (t5 + t4);
            t4 = 0xFFFF8936;
            nlSetTextureParameter(t5, (R1012));
            t4 = (R1004);
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = 0xC94C6A8;
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            t3 = (R1020);
            *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) | t3);
        }
        t4 = (R1024);
        t5 = t29;
        t4 = (t4 + 0x10);
        R1024 = t4;
        t3 = (R1008);
        t3 = (t3 + 0x1);
        R1008 = t3;
    }
    return (R1016);
}

