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

    if (a5 == 0) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0xC245F94;
        *(unsigned int *)(((int)stk + 12)) = 0xC23FF94;
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
                if ((*(int *)(((int)stk + 4))) != 0) {
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
                t6 = (*(int *)(((int)stk + 12)));
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
                    if ((unsigned int)t6 >= (unsigned int)(*(int *)(((int)stk + 8)))) {
                        break;
                    }
                }
                t7 = (t7 + 0x8);
                t8 = t9;
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                continue;
            }
            break;
        }
        t43 = t0;
    }
    return t43;
}

int FUN_0c0480ec(int a4)
{
    int t1;
    int t18;
    int t25;
    int t30;
    int stk[7];

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
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    FUN_0c034fbc(R4, 0x80, 0x1, 0x0);
    t1 = *(int *)((R4 + 0x3A0));
    R0 = (t1);
    R13 = (0x1);
    R14 = (R4);
    R4 = (0xC);
    if ((t1 == 0)) goto L_C04812A;
    if ((R0 == 1)) goto L_C048130;
    if ((R0 == 2)) goto L_C048184;
    if ((R0 == 3)) goto L_C048198;
    if ((R0 == 4)) goto L_C0481BC;
    if ((R0 != 5)) goto L_C048126;
    if (((R4 & (*(int *)((R14 + 0x2EC)))) == 0)) goto L_C048242;
    *(unsigned int *)((R14 + 0x398)) = 0x384;
    *(unsigned int *)((R14 + 0x534)) = 0x0;
    *(unsigned int *)((R14 + 0x1B0)) = 0x0;
    FUN_0c02a19a(R14, R5, R6, R7);
    L_C048242:;
    return (FUN_0c04685c(R14, 0xA, 0.0f, 0.00999999978f));
    L_C048126:;
    goto L_C048242;
    L_C0481BC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F6750); }
    *(float *)(((int)stk + 8)) = 20.0f;
    FUN_0c046294(R14, ((int)stk + 4), 0x1, *(Stk3 *)(((int)stk + 4)));
    FUN_0c046170(R14, 0.0249999985f);
    t18 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t18 - 1);
    R0 = (0x3AC);
    if (((int)(t18 - 1) >= 0)) goto L_C048208;
    FUN_0c09c42c(R14);
    *(unsigned int *)((R14 + 0x2C4)) = 0x5A6;
    L_C0481FA:;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    L_C0481FE:;
    *(unsigned int *)((R14 + 0x3A0)) = ((*(int *)((R14 + 0x3A0))) + 0x1);
    goto L_C048242;
    L_C048208:;
    *(volatile int *)((R14 + R0));
    t25 = (FUN_0c0e5f1c(R4)) != 0;
    if (t25) goto L_C048242;
    FUN_0c0cc3f8(0x324A9, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_C048242;
    L_C048198:;
    if (((R4 & (*(int *)((R14 + 0x2EC)))) == 0)) goto L_C048242;
    *(unsigned int *)((R14 + 0x2C4)) = 0x5A5;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = 0xB4;
    FUN_0c0cc3f8(0x324A9, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_C0481FE;
    L_C048184:;
    t30 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t30 - 1);
    if (((int)(t30 - 1) >= 0)) goto L_C048242;
    R3 = (0x5A4);
    L_C048192:;
    *(unsigned int *)((R14 + 0x2C4)) = R3;
    goto L_C0481FA;
    L_C048130:;
    if (((R4 & (*(int *)((R14 + 0x2EC)))) != 0)) goto L_C04813C;
    goto L_C048242;
    L_C04813C:;
    *(unsigned int *)((R14 + 0x2C4)) = 0x5A3;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = 0x3C;
    goto L_C0481FE;
    L_C04812A:;
    R3 = (0x5A2);
    goto L_C048192;
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

    t51 = 0xC246DB4;
    if ((*(int *)0xC246DB4) == 0) {
    } else {
        FUN_0c0db0a0(0x1, 0x2F);
        t2 = 0x0;
        for (;;) {
            t3 = t2;
            *(int *)((int)stk + 20) = t3;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
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
            *(int *)((int)stk + 20) = t8;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
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
            *(int *)((int)stk + 20) = t13;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
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
            *(int *)((int)stk + 20) = t18;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
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
            *(int *)((int)stk + 20) = t23;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
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
            *(int *)((int)stk + 20) = (unsigned short)t27;
            *(int *)((int)stk + 16) = 0xC0F5CE8;
            nlPrintf(0xC0F5CE8, (unsigned short)t27);
            t26 = (t26 + 0x10);
            if ((unsigned int)t26 >= (unsigned int)0x200) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x35);
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        t30 = 0x0;
        for (;;) {
            if ((*(int *)(((0xC2460F4 + t30) + 0x0))) != 0) {
                t35 = (*(int *)(((*(int *)(((0xC2460F4 + (*(int *)(((int)stk + 24)))) + 0x0))) + 0xBC)));
                *(int *)((int)stk + 20) = t35;
                *(int *)((int)stk + 16) = 0xC0F5CE8;
                nlPrintf(0xC0F5CE8, t35);
            } else {
                *(int *)((int)stk + 20) = 0xC0F5CF0;
                nlPrintf(0xC0F5CF0);
            }
            t30 = (t30 + 0x10);
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x10);
            if ((unsigned int)t30 >= (unsigned int)0x200) {
                break;
            }
        }
        FUN_0c0db0a0(0x1, 0x36);
        *(int *)((int)stk + 20) = ((*(int *)0xC2462F4));
        t45 = (*(int *)0xC247074);
        *(int *)((int)stk + 16) = t45;
        t47 = (*(int *)0xC247070);
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

    *(unsigned int *)0xC952504 = 0x1;
    t0 = *(int *)0xC952660;
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
    *(unsigned int *)0xC95266C = 0x0;
    t48 = 0x0;
    if ((*(int *)0xC952508) != 0) {
        for (;;) {
            t27 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
            if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952524)) {
                break;
            }
            if ((*(int *)0xC952508) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, (*(int *)0xC9525C8));
                    kmiWriteRegister(0x4C, (*(int *)0xC9525C0));
                    kmiWriteRegister(0x68, (*(int *)0xC9525B0));
                    kmiWriteRegister(0x6C, (*(int *)0xC9525B4));
                    *(unsigned int *)0xC952508 = 0x0;
                    *(unsigned int *)0xC952674 = 0x0;
                    return kmiFlipVertexBuffer((*(int *)0xC239A9C));
                }
                kmiWriteRegister(0x8C, (*(int *)0xC9524B0));
                kmiWriteRegister(0x88, ((*(int *)0xC9524AC) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t48 = 0x1;
    }
    if (t48 != 0) {
        kmiWriteRegister(0x48, (*(int *)0xC9525C8));
        kmiWriteRegister(0x4C, (*(int *)0xC9525C0));
        kmiWriteRegister(0x68, (*(int *)0xC9525B0));
        kmiWriteRegister(0x6C, (*(int *)0xC9525B4));
        *(unsigned int *)0xC952508 = 0x0;
        *(unsigned int *)0xC952674 = 0x0;
        return kmiFlipVertexBuffer((*(int *)0xC239A9C));
    }
    kmiWriteRegister(0x8C, (*(int *)0xC9524B0));
    kmiWriteRegister(0x88, ((*(int *)0xC9524AC) & 0xFFFFFFF0));
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
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 4)) = R4;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 36)) = R6;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
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
    t11 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t11 + 0x800);
    *(unsigned int *)(((int)stk + 28)) = R9;
    R11 = (R8);
    R12 = ((R12 + 0x1));
    R14 = ((t11 + 0x800));
    L_C22172A:;
    R13 = (R14);
    if (((unsigned int)R14 >= (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C221748;
    if (((unsigned int)((((unsigned char)(*(signed char *)((R13 + 0x0))) + ((unsigned char)(*(signed char *)((R13 + 0x0))) & 0x1)) + 0x8) + R14) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C221772;
    L_C221748:;
    t22 = *(int *)(((int)stk + 4));
    t23 = *(int *)(((int)stk + 4));
    gdFsMemcpy(R14, (t23 - ((t22 - R14) + 0x800)), ((t22 - R14) + 0x800));
    t28 = (gdFsReadWG((*(int *)(((int)stk + 20))), 0x1, (*(int *)(((int)stk + 4))))) != 0;
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
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 8)));
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
    R2 = ((*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 8)) = (R2 + 0x1);
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

int FUN_0c064740(int a4, int a5, int a6)
{
    int t1;
    int t4;
    int t33;
    int t20;
    int t21;
    int t53;
    int t48;
    int stk[5];

    t1 = *(int *)((a4 + 0x1C));
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        t4 = *(int *)(((0x1C4 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | (((int)t4 >= 0) ? (0x1 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x1 >> (-(int)t4 & 31)) : ((int)0x1 >> 31))));
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c054c8a(a4);
            FUN_0c090a1c(a4, t1);
        } else {
            if ((*(int *)((a4 + 0xD8))) == 4) {
                FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            } else {
                t33 = 0;
                if ((*(int *)((a4 + 0xD8))) == 2) {
                    t20 = *(short *)(((*(int *)((a4 + 0x1C))) + 0x6E));
                    t21 = *(short *)(((*(int *)((((*(int *)((a4 + 0x1C4))) << 2) + 0xC246FF0))) + 0x6E));
                    if (16384.0f > _builtin_fabsf((float)(short)(t21 - t20))) {
                        FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), (short)(t21 - t20), (t21 - t20), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c090a1c(a4, t1);
                    } else {
                        FUN_0c090f70(a4);
                    }
                    t33 = ((16384.0f > _builtin_fabsf((float)(short)(t21 - t20))));
                } else {
                    t33 = (0);
                }
            }
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t48 = a4;
    }
    if ((*(int *)((a4 + 0x1EC))) != -1) {
        if ((int)(*(int *)((a4 + 0x22C))) > 0) {
            t53 = *(int *)((a4 + 0x22C));
            *(unsigned int *)((a4 + 0x22C)) = (t53 - 1);
            if ((int)(t53 - 1) <= 0) {
                FUN_0c0e19f2(t48);
            }
        }
    } else {
        FUN_0c0e19f2(t48);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((t1 + 0x30)); }
    return FUN_0c01cdc2(a4);
}

int vmsio_block_read(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t8;
    int t9;
    int t11;
    int t16;
    int t19;
    int t26;
    int t27;
    int t38;
    int t10;
    int stk[13];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = vmsio_ismount(a4);
    if (t0 == 0) {
        vmsfb_sleep();
        t38 = 0xFFFFFF01;
    } else {
        t2 = *(int *)(((a4 << 2) + 0xC2382DC));
        kdGetDevice(t2);
        t4 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x3C)))) {
                return 0x0;
            }
            t8 = t4;
            t9 = 0x0;
            for (;;) {
                t11 = kdIsChanged(t2);
                if (t11 == 0) {
                    t10 = 0xC223B48;
                    *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 16))));
                    t10 = (kdSetBlockRead(*(Stk4 *)((int)stk + 4)));
                    if ((int)t10 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    for (;;) {
                        t16 = kdGetStatus(t2);
                        if (t16 == 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        break;
                    }
                    *(unsigned int *)(((int)stk + 12)) = (kdGetDevice(t2));
                    t19 = kdIsChanged(t2);
                    if (t19 != 0) {
                        break;
                    }
                    t26 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x4));
                    t27 = *(int *)(((*(int *)(((int)stk + 12))) + 0x8));
                    if ((unsigned char)t26 != 8) {
                        if ((unsigned char)t26 != 0xFC) {
                            if ((unsigned char)t26 == 0xFB) {
                                return 0xFFFF0000;
                            }
                            return 0xFFFFFF01;
                        }
                        continue;
                    }
                    FUN_0c231fb4(t8, (t27 + 0xC), (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x44))));
                    t9 = (t9 + 0x1);
                    t8 = (t8 + (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x44))));
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
                    if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x3C)))) {
                        return 0x0;
                    }
                    continue;
                }
                break;
            }
            break;
        }
        t38 = 0xFFFFFF30;
    }
    return t38;
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

    t0 = *(int *)((a4 + 0x1C4));
    *(unsigned int *)(((int)stk + 12)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    *(unsigned int *)(((int)stk + 16)) = 0x8;
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    nlPushMatrix(0x0);
    for (;;) {
        t8 = FUN_0c0e19aa(0xC0919FC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        *(unsigned int *)((t8 + 0x60)) = 0x291;
        *(unsigned int *)(((0x64 + t8) + 0x0)) = (((FUN_0c0da2e0()) & 0xF) + 0x14);
        u13 = 2.5f;
        u13 = u13 + 9.15555283e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t8 + 0x54)) = u13;
        u15 = 1.0f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t8 + 0x44)) = u15;
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
    *(float *)((R5 + 0x4)) = (*(float *)(((*(int *)((R4 + 0x14))) + 0x4)));
    *(float *)((R5 + 0x8)) = (*(float *)(((*(int *)((R4 + 0x14))) + 0x8)));
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

int write_dir_all(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t15;
    int t26;
    int t29;
    int t30;
    int t33;
    int t38;
    int t52;
    int t65;
    int t70;
    int t84;
    int t97;
    int stk[13];

    t0 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
    *(unsigned short *)(((int)stk + 8)) = (*(short *)((t0 + 0x14)));
    t2 = *(short *)(((int)stk + 8));
    t3 = *(int *)((t0 + 0x18));
    if ((int)t3 > 0) {
        t4 = 0x0;
        t5 = t2;
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = (unsigned short)t5;
            t7 = *(int *)(((int)stk + 4));
            t5 = (get_fat(a4, (unsigned short)t5, a6, a7));
            set_fat(a4, t7, 0xFFFC);
            if (((unsigned short)t5 != 0xFFFA) && (((unsigned short)t5 != 0xFFFC) && (t4 = (t4 + 0x1), (int)t4 < (int)t3))) continue;
            break;
        }
    }
    t15 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (t3 - 1);
    for (;;) {
        if ((int)0x0 >= (int)t3) {
            if ((unsigned short)(*(short *)(((int)stk + 8))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x14)))) {
                t26 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
                write_fat(a4);
                write_sys(a4);
                return 0x0;
            }
            return 0x0;
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t29 = 0x0;
        t30 = t15;
        for (;;) {
            t33 = vmsfs_write_retry(a4, (unsigned short)t30, ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x28))) + (*(int *)(((int)stk + 4)))));
            if (t33 != 0) {
                if (t33 == 0xFFFFFF01) {
                    break;
                }
                set_fat(a4, (unsigned short)t30, 0xFFFF);
                t30 = (search_fat_dir(a4, 0xFFFC));
                continue;
            }
            if (t29 == 0) {
                *(unsigned short *)(((int)stk + 8)) = t30;
                *(unsigned int *)(((int)stk + 16)) = (unsigned short)t30;
                set_fat(a4, (unsigned short)t30, 0xFFFA);
                if (t29 != (*(int *)(((int)stk + 12)))) {
                    t38 = search_fat_dir(a4, 0xFFFC);
                    *(unsigned short *)(((int)stk + 4)) = t38;
                    set_fat(a4, (*(int *)(((int)stk + 16))), t38);
                    t30 = (*(short *)(((int)stk + 4)));
                    t29 = (t29 + 0x1);
                    if ((int)t29 >= (int)t3) {
                        if ((unsigned short)(*(short *)(((int)stk + 8))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x14)))) {
                            t52 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
                            write_fat(a4);
                            write_sys(a4);
                            return 0x0;
                        }
                        return 0x0;
                    }
                    *(unsigned int *)(((int)stk + 4)) = ((t29 << 8) << 1);
                    continue;
                }
                t29 = (t29 + 0x1);
                if ((int)t29 >= (int)t3) {
                    if ((unsigned short)(*(short *)(((int)stk + 8))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x14)))) {
                        t65 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
                        write_fat(a4);
                        write_sys(a4);
                        return 0x0;
                    }
                    return 0x0;
                }
                *(unsigned int *)(((int)stk + 4)) = ((t29 << 8) << 1);
                continue;
            }
            *(unsigned int *)(((int)stk + 16)) = (unsigned short)t30;
            set_fat(a4, (unsigned short)t30, 0xFFFA);
            if (t29 != (*(int *)(((int)stk + 12)))) {
                t70 = search_fat_dir(a4, 0xFFFC);
                *(unsigned short *)(((int)stk + 4)) = t70;
                set_fat(a4, (*(int *)(((int)stk + 16))), t70);
                t30 = (*(short *)(((int)stk + 4)));
                t29 = (t29 + 0x1);
                if ((int)t29 >= (int)t3) {
                    if ((unsigned short)(*(short *)(((int)stk + 8))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x14)))) {
                        t84 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
                        write_fat(a4);
                        write_sys(a4);
                        return 0x0;
                    }
                    return 0x0;
                }
                *(unsigned int *)(((int)stk + 4)) = ((t29 << 8) << 1);
                continue;
            }
            t29 = (t29 + 0x1);
            if ((int)t29 >= (int)t3) {
                if ((unsigned short)(*(short *)(((int)stk + 8))) != (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x14)))) {
                    t97 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
                    write_fat(a4);
                    write_sys(a4);
                    return 0x0;
                }
                return 0x0;
            }
            *(unsigned int *)(((int)stk + 4)) = ((t29 << 8) << 1);
        }
        break;
    }
    return t33;
}

int FUN_0c062180(int a4, int a5)
{
    int t0;
    int t9;
    int t15;
    int t22;
    int t27;
    int stk[11];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC247B84;
    if (t0 != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAZ((*(short *)((a5 + 0x4))));
        nlRotateAY((*(short *)((a5 + 0x2))));
        nlRotateAX((*(short *)((a5 + 0x0))));
        t9 = *(int *)((t0 + 0x30));
        *(unsigned int *)((t0 + 0x30)) = (t9 + 0x1);
        if ((int)(*(int *)((t0 + 0x30))) >= (int)0x100) {
            *(unsigned int *)((t0 + 0x30)) = 0x0;
        }
        *(unsigned int *)(((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x1C)) = 0x114;
        *(unsigned int *)(((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x20)) = 0x2;
        *(unsigned int *)(((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x18)) = 0x64;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34))) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        nlPushMatrix(0x0);
        t15 = FUN_0c0da2e0();
        nlRotateAZ((t15 << 1));
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = 0.0299999993f;
        *(float *)(((int)stk + 28)) = ((-((float)((FUN_0c0da2e0()) & 0xFFF) * 2.44200219e-05f)) + -2.0f);
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        *(float *)((((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0xC) + 0x0)) = (*(float *)(((int)stk + 8)));
        *(float *)((((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x10) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x14) + 0x0)) = (*(float *)(((int)stk + 16)));
        t22 = FUN_0c0da2e0();
        FUN_0c0dce80((((int)stk + 4) + 0x10), ((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0xC), ((float)(t22 & 0xFFF) * 0.00024420023f));
        nlAddVector((((((((t9 + 0x1) - 1) << 2) + ((t9 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)), (((int)stk + 4) + 0x10));
        nlPopMatrix(0x1);
        t27 = (nlPopMatrix(0x1));
    }
    return t27;
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
        nlRotateAZ((*(short *)((a4 + 0x70))));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
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
            *(float *)(((int)stk + 20)) = (-((*(float *)((a4 + 0x50))) * u17));
            *(float *)(((int)stk + 24)) = 0.0f;
            FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
            *(float *)((((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0xC) + 0x0)) = (*(float *)(((int)stk + 4)));
            *(float *)((((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x10) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)((((((((((t10 + 0x1) - 1) << 2) + ((t10 + 0x1) - 1)) << 2) << 1) + (t0 + 0x34)) + 0x14) + 0x0)) = (*(float *)(((int)stk + 12)));
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

int FUN_0c09eec4(int a4, int a5, int a6)
{
    int t1;
    float u13;
    float u23;

    t1 = *(int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x14));
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + ((((*(int *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x0))) << 2) << 2) << 2)));
    if ((0x20 & t1) != 0) {
        FUN_0c0dcc70(0.0f, ((*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x8))) * (*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x4)))), 0.0f);
        if ((0x40 & t1) != 0) {
            u13 = (((((float)a6 * 1.32999992f) / (*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x8))))) * 32768.0f);
        } else {
            u13 = ((-(((((float)a6 * 1.32999992f) / (*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x8))))) * 32768.0f)) + 32768.0f);
        }
        nlRotateAZ((int)u13);
        return nlRotateAY(0x4000);
    }
    if ((0x40 & t1) != 0) {
        u23 = ((((*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x8))) - ((float)a6 * 1.32999992f))) * (*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x4))));
    } else {
        u23 = ((((float)a6 * 1.32999992f)) * (*(float *)(((((((a5 << 1) + a5) << 2) << 1) + 0xC10C7A8) + 0x4))));
    }
    FUN_0c0dcc70(0.0f, u23, 0.0f);
    if ((t1 & 0x10) != 0) {
        return nlRotateAY(0xC000);
    }
    return nlRotateAY(0x4000);
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
        if ((*(int *)((t2 + 0x3F4))) == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t2)) = *(struct mv3 *)(a4); }
            *(unsigned int *)((t2 + 0x3F4)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + t2)) = *(struct mv3 *)((t6 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x404 + t2)) = *(struct mv3 *)(a5); }
        }
        u11 = *(float *)((t2 + 0x338));
        u13 = u11;
        u13 = u13 + 0.199999988f * ((*(float *)((t6 + 0x30))) - u11);
        *(float *)((t2 + 0x338)) = u13;
        u14 = *(float *)((t2 + 0x33C));
        u16 = u14;
        u16 = u16 + 0.199999988f * (((*(float *)((t6 + 0x34))) - u14) + 15.0f);
        *(float *)((t2 + 0x33C)) = u16;
        u17 = *(float *)((t2 + 0x340));
        u19 = u17;
        u19 = u19 + 0.199999988f * ((*(float *)((t6 + 0x38))) - u17);
        *(float *)((t2 + 0x340)) = u19;
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((t2 + 0x254))) - (*(float *)((t2 + 0x338)))), ((*(float *)((t2 + 0x258))) - (*(float *)((t2 + 0x33C)))), ((*(float *)((t2 + 0x25C))) - (*(float *)((t2 + 0x340)))));
        *(unsigned short *)((t2 + 0x3CC)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((t2 + 0x3CE)) = (*(int *)(((int)stk + 8)));
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

    t0 = *(int *)((a4 + 0x554));
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
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 36)));
        *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 40)));
        *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 44)));
        nlPopMatrix(0x1);
        FUN_0c0a7714((((int)stk + 4) + 0x10), ((int)stk + 4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))));
        *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0x4D8 + a4) + 0x0))));
        t24 = 0x6E;
    }
    return t24;
}

int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t25;
    int t26;
    int t15;

    t0 = adxf_ChkPrmGfr(a4);
    if ((int)t0 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC95E288));
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t4 = *(short *)(((t1 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t5 = (0x0 + ((t1 + 0x14) + 0x2));
                    t6 = 0x0;
                    t7 = (unsigned short)t4;
                    for (;;) {
                        t8 = *(short *)((t5 + 0x0));
                        t5 = (t5 + 0x2);
                        t6 = (t6 + 0x1);
                        t7 = (t7 + (unsigned short)t8);
                        if ((int)t6 >= (int)a5) {
                            break;
                        }
                    }
                    *(unsigned int *)((a6 + 0x0)) = (t7 + (*(int *)((t1 + 0x8))));
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((((t1 + 0x14) + 0x2) + (a5 << 1))));
                    return t0;
                }
                *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t4 + (*(int *)((t1 + 0x8))));
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((((t1 + 0x14) + 0x2) + (a5 << 1))));
                return t0;
            }
            t13 = (t1 + 0x14);
            t14 = t2;
            t16 = t1;
            t17 = a5;
            t18 = 0x0;
            for (;;) {
                if ((int)t18 >= (int)(unsigned short)(*(short *)((t16 + 0x10)))) {
                    t16 = (*(int *)((t16 + 0x0)));
                    t14 = (*(int *)((t16 + 0x0)));
                    if (t14 == 0) {
                        t17 = t16;
                        t17 = (t17 + 0x14);
                        t18 = (*(short *)((t17 + 0x0)));
                        t13 = t17;
                        t17 = 0x0;
                        t18 = (unsigned short)t18;
                        t13 = (t13 + 0x2);
                        if ((int)a5 > 0) {
                            t25 = (0x0 + t13);
                            for (;;) {
                                t26 = *(short *)((t25 + 0x0));
                                t25 = (t25 + 0x2);
                                t15 = t26;
                                t17 = (t17 + 0x1);
                                t15 = (unsigned short)t15;
                                t18 = (t18 + t15);
                                if ((int)t17 >= (int)a5) {
                                    break;
                                }
                            }
                            t15 = (*(int *)((t16 + 0x8)));
                            t18 = (t18 + t15);
                            *(unsigned int *)((a6 + 0x0)) = t18;
                            t15 = (*(short *)((t13 + (a5 << 1))));
                            t15 = (unsigned short)t15;
                            *(unsigned int *)((a7 + 0x0)) = t15;
                            return t0;
                        }
                        t15 = (*(int *)((t16 + 0x8)));
                        t18 = (t18 + t15);
                        *(unsigned int *)((a6 + 0x0)) = t18;
                        t15 = (*(short *)((t13 + (a5 << 1))));
                        t15 = (unsigned short)t15;
                        *(unsigned int *)((a7 + 0x0)) = t15;
                        return t0;
                    }
                    t13 = t16;
                    t13 = (t13 + 0x14);
                    t18 = 0x0;
                    continue;
                }
                t17 = t18;
                t17 = (t17 << 2);
                t17 = (t17 << 1);
                t17 = (t17 + t13);
                t15 = (*(short *)((t17 + 0x0)));
                t15 = (unsigned short)t15;
                if (t15 == a5) {
                    break;
                }
                t18 = (t18 + 0x1);
            }
            break;
        }
        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((t16 + 0x8))) + (*(int *)((t17 + 0x4))));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((t17 + 0x2)));
    }
    return t0;
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

    stk[28] = a8;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    nlUnitMatrix();
    FUN_0c0dcca0(a4);
    nlRotateAY((*(int *)((a4 + 0x1C))));
    nlRotateAX((*(int *)((a4 + 0x18))));
    nlGetMatrix((((int)stk + 4) + 0xC));
    t7 = (a8 + 0x2);
    *(unsigned int *)(((int)stk + 112)) = t7;
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
        t20 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t20 + 0xC);
        FUN_0c0dcca0(((t20 + 0xC) - 12));
        t22 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t22 + 0x10);
        FUN_0c0bdec2(((t22 + 0x10) - 16));
        nlPopMatrix(0x1);
        nlGetMatrix((((int)stk + 4) + 0xC));
        t7 = (t7 + 0x2);
        *(unsigned int *)(((int)stk + 112)) = t7;
        t27 = FUN_0c0c47ae((*(short *)((((t7 + 0x2) - 2) + 0x0))));
        t28 = *(int *)(((int)stk + 12));
        t10 = (t10 + 0x20);
        *(unsigned int *)(((int)stk + 12)) = (t28 - 1);
        if ((t28 - 1) == 0) {
            break;
        }
    }
    return t27;
}

int FUN_0c0848d6(float f4, float f5, float f6)
{
    if ((*(int *)0xC247F0C) != 0) {
        FUN_0c0de3a0((((f4 * (*(float *)0xC247EF4))) * (*(float *)0xC247EE8)), (((f5 * (*(float *)0xC247EF8))) * (*(float *)0xC247EEC)), (((f6 * (*(float *)0xC247EFC))) * (*(float *)0xC247EF0)));
        return FUN_0c0de3b0((((f4 * (*(float *)0xC247F00))) * (*(float *)0xC247EE8)), (((f5 * (*(float *)0xC247F04))) * (*(float *)0xC247EEC)), (((f6 * (*(float *)0xC247F08))) * (*(float *)0xC247EF0)));
    }
    return FUN_0c0de310((f4 * (*(float *)0xC247EE8)), (f5 * (*(float *)0xC247EEC)), (f6 * (*(float *)0xC247EF0)));
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

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 24)) = t0;
    t1 = *(int *)0xC948270;
    *(unsigned int *)(((int)stk + 8)) = t1;
    t2 = 0xC948270;
    t3 = t1;
    t4 = t0;
    t5 = a4;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) == -1) {
            break;
        }
        t4 = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 12)) = t4;
        t3 = (*(int *)(((int)stk + 12)));
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t2 = 0xC943D78;
        t4 = (*(int *)((t2 + 0x0)));
        t3 = (t3 + t4);
        if ((*(int *)((t3 + 0x0))) == 0) {
            *(unsigned int *)(((int)stk + 16)) = 0xFFFFFFFF;
            t29 = t5;
        } else {
            t4 = (*(int *)(((int)stk + 12)));
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            *(unsigned int *)(((int)stk + 12)) = (*(int *)((t4 + 0x4)));
            t4 = (*(int *)(((int)stk + 8)));
            t4 = (t4 << 1);
            t3 = 0xC94C69C;
            t4 = (*(short *)((t4 + (*(int *)((t3 + 0x0))))));
            t4 = (short)t4;
            *(unsigned int *)(((int)stk + 4)) = t4;
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = (*(int *)0xC94C6A8);
            t4 = (t4 + t2);
            t2 = 0x7E00000;
            t4 = (*(int *)((t4 + 0xC)));
            t4 = (t4 & t2);
            *(unsigned int *)(((int)stk + 20)) = t4;
            t5 = (*(int *)(((int)stk + 4)));
            t5 = (t5 << 2);
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t2 = 0xC94C6A8;
            t4 = (*(int *)((t2 + 0x0)));
            t5 = (t5 + t4);
            t4 = 0xFFFF8936;
            nlSetTextureParameter(t5, (*(int *)(((int)stk + 12))));
            t4 = (*(int *)(((int)stk + 4)));
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 1);
            t2 = 0xC94C6A8;
            t3 = (*(int *)((t2 + 0x0)));
            t4 = (t4 + t3);
            t3 = (*(int *)(((int)stk + 20)));
            *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) | t3);
        }
        t4 = (*(int *)(((int)stk + 24)));
        t5 = t29;
        t4 = (t4 + 0x10);
        *(unsigned int *)(((int)stk + 24)) = t4;
        t3 = (*(int *)(((int)stk + 8)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t3;
    }
    return (*(int *)(((int)stk + 16)));
}
