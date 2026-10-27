/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
float FUN_0c01f1b8(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c02bc00(int);
int FUN_0c02bc0e(int);
int FUN_0c02bc1c(int);
int FUN_0c02bc2a(int, int, int);
int FUN_0c031e3c(int);
int FUN_0c031e5e(int, int, int);
int FUN_0c031f48(int);
int FUN_0c034314(int, int, int);
int FUN_0c034f6c(int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c035e22(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c043338(int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c08477e(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0d6c52(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAY(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0dd0a0(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e4428(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
int FUN_0c22e160(int, int);
int FUN_0c22e38c(int, int, int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int check_fat_all(int, int, int);
int get_fat(int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateVertexBuffer(int, int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int mwPlaEntryErrFn(int, int);
int search_dir_by_startfat(int, int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int, int);
int thunk_FUN_0c0546fe(int, int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int FUN_0c22e202(int a4, int a5);
int FUN_0c0d68dc(int a4, int a5);
int FUN_0c031fbc(int a4, int a5, int a6);
int FUN_0c040e18(int a4);
int FUN_0c066870(int a4, int a5);
float FUN_0c0a81ac(int a4, int a5, int a6, int a7);
int FUN_0c02bda4(int a4);
int kmiWriteFBRegister(Stk29 s);
int kmiAllocSysConfig(int a4);
int vmsfs_xdefrag(int a4, int a5);
int FUN_0c031a4c(int a4);
void FUN_0c0d6ad4(void);
int FUN_0c0e3dc4(void);
int FUN_0c02b330(int a4);
int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c08512c(int a4);
int kmfGetInternalSystemMetrics(int a4);
int FUN_0c043724(int a4);

int FUN_0c22e202(int a4, int a5)
{
    int t8;
    int t23;
    int t30;
    int t36;
    int t39;
    int t42;
    int t46;
    int t50;
    int t51;
    int t53;
    int t57;
    int t61;
    int t64;
    int stk[11];

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
    int T_;
    R4 = a4;
    R5 = a5;
    L_C22E202:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    R0 = (R4);
    R11 = (R4);
    R9 = (0x0);
    if (((int)R4 < 0)) goto L_C22E260;
    goto L_C22E224;
    L_C22E224:;
    R0 = ((R0 & 0x1F));
    goto L_C22E26A;
    L_C22E26A:;
    R4 = (R0);
    if ((R0 == 0)) goto L_C22E276;
    goto L_C22E270;
    L_C22E270:;
    R11 = ((R11 + (0x20 - R4)));
    goto L_C22E276;
    L_C22E276:;
    t8 = *(int *)0xC239F00;
    R13 = (t8);
    if ((t8 != 0)) goto L_C22E282;
    goto L_C22E27E;
    L_C22E27E:;
    goto L_C22E368;
    L_C22E368:;
    if (((*(int *)(((int)stk + 8))) != 2)) goto L_C22E376;
    goto L_C22E36E;
    L_C22E36E:;
    if ((R9 == 0)) goto L_C22E376;
    goto L_C22E372;
    L_C22E372:;
    R0 = (R9);
    goto L_C22E378;
    L_C22E378:;
    return R0;
    L_C22E376:;
    R0 = (0xFFFFFFFF);
    goto L_C22E378;
    L_C22E282:;
    R10 = (0xC239EEC);
    R8 = (0x1);
    goto L_C22E286;
    L_C22E286:;
    if (((int)(*(int *)((R13 + 0x10))) < (int)R11)) goto L_C22E362;
    goto L_C22E28C;
    L_C22E28C:;
    t23 = *(int *)(((*(int *)(((int)stk + 4))) + 0x18));
    R14 = ((((*(int *)((R13 + 0xC))) + (*(int *)((R13 + 0x10)))) - R11));
    R4 = (t23);
    if (((t23 & R8) == 0)) goto L_C22E340;
    goto L_C22E29E;
    L_C22E29E:;
    if (((0x8 & R4) != 0)) goto L_C22E340;
    goto L_C22E2A4;
    L_C22E2A4:;
    if (((0x20 & R4) != 0)) goto L_C22E340;
    goto L_C22E2AA;
    L_C22E2AA:;
    *(volatile int *)(((int)stk + 4));
    t30 = FUN_0c22e160(R13, R11);
    R4 = (t30);
    if (((int)t30 < 0)) goto L_C22E2D6;
    goto L_C22E2B8;
    L_C22E2B8:;
    R12 = (R4);
    if (((int)R4 > (int)R14)) goto L_C22E2D6;
    goto L_C22E2BE;
    L_C22E2BE:;
    t36 = FUN_0c22e38c(0x1, ((*(int *)((R10 + 0x0))) + R12), R11);
    R4 = (t36);
    if ((t36 == 0)) goto L_C22E358;
    goto L_C22E2CE;
    L_C22E2CE:;
    t39 = (int)(R12 + 0x800) <= (int)R14;
    R12 = ((R12 + 0x800));
    if (t39) goto L_C22E2BE;
    goto L_C22E2D6;
    L_C22E2D6:;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    if ((R9 != 0)) goto L_C22E362;
    goto L_C22E2DE;
    L_C22E2DE:;
    t42 = *(int *)((R13 + 0xC));
    R12 = (t42);
    if (((int)t42 > (int)R14)) goto L_C22E362;
    goto L_C22E2E4;
    L_C22E2E4:;
    t46 = FUN_0c22e38c(0x1, ((*(int *)((R10 + 0x0))) + R12), R11);
    R4 = (t46);
    if ((t46 != 0)) goto L_C22E2F8;
    goto L_C22E2F4;
    L_C22E2F4:;
    t50 = R12;
    R12 = (R14);
    R9 = t50;
    goto L_C22E2F8;
    L_C22E2F8:;
    t51 = (int)(R12 + 0x20) <= (int)R14;
    R12 = ((R12 + 0x20));
    if (t51) goto L_C22E2E4;
    goto L_C22E2FE;
    L_C22E2FE:;
    goto L_C22E362;
    L_C22E362:;
    t53 = *(int *)((R13 + 0x8));
    R13 = (t53);
    if ((t53 != 0)) goto L_C22E286;
    goto L_C22E368;
    L_C22E358:;
    R0 = (R12);
    goto L_C22E378;
    L_C22E340:;
    *(unsigned int *)(((int)stk + 8)) = R8;
    t57 = *(int *)((R13 + 0xC));
    R12 = (t57);
    if (((int)t57 > (int)R14)) goto L_C22E362;
    goto L_C22E348;
    L_C22E348:;
    t61 = FUN_0c22e38c(0x1, ((*(int *)((R10 + 0x0))) + R12), R11);
    R4 = (t61);
    if ((t61 != 0)) goto L_C22E35C;
    goto L_C22E358;
    L_C22E35C:;
    t64 = (int)(R12 + 0x20) <= (int)R14;
    R12 = ((R12 + 0x20));
    if (t64) goto L_C22E348;
    goto L_C22E362;
    L_C22E260:;
    R0 = (((~(((~R0) + 0x1) & 0x1F)) + 0x1));
    goto L_C22E26A;
}

int FUN_0c0d68dc(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u10;
    int t24;
    int t55;
    int t58;
    int t59;
    int t62;
    int t63;
    int t66;
    int t67;
    int t11;
    int t12;
    int t51;

    t2 = *(int *)(((((*(int *)((a5 + 0x0))) << 2) + (0xC20CB64 + ((*(int *)((a4 + 0xC))) * 0x34))) + 0x0));
    for (;;) {
        t3 = *(int *)((a5 + 0xC));
        t4 = *(signed char *)(((((t3 << 2) << 1) + t2) + 0x0));
        t5 = FUN_0c0da2e0();
        t6 = ((~(((~t5) + 0x1) & 0x1)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x1);
        }
        u10 = (float)t6;
        u10 = u10 + 10.0f * (*(float *)((a5 + 0x8)));
        if (((int)((*(signed char *)(((((t3 << 2) << 1) + t2) + 0x6))) & 0xF) <= (int)(int)u10) && (((t11 = *(signed char *)(((((t3 << 2) << 1) + t2) + 0x6)), (t11 & 0x10) == 0) || (t12 = *(int *)((a5 + 0x20)), (int)t12 >= (int)0x2)) && (t4 != -1))) {
            if (t4 != 0) {
                if ((t4 == 1) || (t4 == 2)) {
                    if ((*(int *)((a5 + 0x1C))) != 0) {
                        t24 = *(int *)((a5 + 0x1C));
                        *(unsigned int *)((a5 + 0x1C)) = (t24 - 1);
                        if ((t24 - 1) != 0) {
                            *(unsigned int *)((a5 + 0xC)) = (*(int *)((a5 + 0x18)));
                        } else {
                            *(unsigned int *)((a5 + 0xC)) = ((*(int *)((a5 + 0xC))) + 0x1);
                        }
                    } else {
                        *(unsigned int *)((a5 + 0x18)) = (*(signed char *)(((((t3 << 2) << 1) + t2) + 0x1)));
                        if (t4 == 2) {
                            *(unsigned int *)((a5 + 0x18)) = ((*(int *)((a5 + 0x18))) + (*(int *)((a5 + 0xC))));
                        }
                        *(unsigned int *)((a5 + 0xC)) = (*(int *)((a5 + 0x18)));
                        *(unsigned int *)((a5 + 0x1C)) = (*(signed char *)(((((t3 << 2) << 1) + t2) + 0x2)));
                    }
                }
                continue;
            }
            *(unsigned int *)((a5 + 0x24)) = (*(signed char *)(((((t3 << 2) << 1) + t2) + 0x1)));
            *(unsigned int *)((a5 + 0x28)) = (*(signed char *)(((((t3 << 2) << 1) + t2) + 0x2)));
            *(unsigned int *)((a5 + 0x2C)) = (*(short *)(((((t3 << 2) << 1) + t2) + 0x4)));
            *(unsigned int *)((a5 + 0x14)) = 0xFFFFFFFF;
            if (((int)(*(int *)((a5 + 0x28))) >= 0) && (t51 = *(int *)((a5 + 0x2C)), (int)t51 >= 0)) {
                *(unsigned int *)((a5 + 0x14)) = ((*(int *)((a5 + 0x28))) + (*(int *)((a5 + 0x2C))));
                if ((int)(*(int *)((a5 + 0x28))) >= 0) {
                    t55 = *(int *)((a5 + 0x28));
                    if (((*(int *)((a5 + 0x24))) & 0x8) != 0) {
                        *(unsigned int *)((a4 + 0x54)) = (*(int *)((a4 + 0x98)));
                        *(unsigned int *)((a4 + 0x58)) = t55;
                        t58 = *(int *)((a5 + 0x24));
                        if ((t58 & 0x1) != 0) {
                            if ((t58 & 0x2) != 0) {
                                if ((t58 & 0x4) != 0) {
                                    *(unsigned int *)((a4 + 0x5C)) = 0x602;
                                    *(unsigned int *)((a4 + 0x64)) = t55;
                                    return 0x1;
                                }
                                *(unsigned int *)((a4 + 0x5C)) = 0x202;
                                *(unsigned int *)((a4 + 0x64)) = t55;
                                return 0x1;
                            }
                            if ((t58 & 0x4) != 0) {
                                *(unsigned int *)((a4 + 0x5C)) = 0x600;
                                *(unsigned int *)((a4 + 0x64)) = t55;
                                return 0x1;
                            }
                            *(unsigned int *)((a4 + 0x5C)) = 0x200;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        if ((t58 & 0x2) != 0) {
                            if ((t58 & 0x4) != 0) {
                                *(unsigned int *)((a4 + 0x5C)) = 0x402;
                                *(unsigned int *)((a4 + 0x64)) = t55;
                                return 0x1;
                            }
                            *(unsigned int *)((a4 + 0x5C)) = 0x2;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        if ((t58 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x400;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x0;
                        *(unsigned int *)((a4 + 0x64)) = t55;
                        return 0x1;
                    }
                    t59 = *(int *)((a5 + 0x24));
                    if ((t59 & 0x1) != 0) {
                        if ((t59 & 0x2) != 0) {
                            if ((t59 & 0x4) != 0) {
                                *(unsigned int *)((a4 + 0x5C)) = 0x602;
                                *(unsigned int *)((a4 + 0x64)) = t55;
                                return 0x1;
                            }
                            *(unsigned int *)((a4 + 0x5C)) = 0x202;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        if ((t59 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x600;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x200;
                        *(unsigned int *)((a4 + 0x64)) = t55;
                        return 0x1;
                    }
                    if ((t59 & 0x2) != 0) {
                        if ((t59 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x402;
                            *(unsigned int *)((a4 + 0x64)) = t55;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x2;
                        *(unsigned int *)((a4 + 0x64)) = t55;
                        return 0x1;
                    }
                    if ((t59 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x400;
                        *(unsigned int *)((a4 + 0x64)) = t55;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x64)) = t55;
                    return 0x1;
                }
                if (((*(int *)((a5 + 0x24))) & 0x8) != 0) {
                    *(unsigned int *)((a4 + 0x54)) = (*(int *)((a4 + 0x98)));
                    *(unsigned int *)((a4 + 0x58)) = 0xFFFFFFFF;
                    t62 = *(int *)((a5 + 0x24));
                    if ((t62 & 0x1) != 0) {
                        if ((t62 & 0x2) != 0) {
                            if ((t62 & 0x4) != 0) {
                                *(unsigned int *)((a4 + 0x5C)) = 0x602;
                                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                                return 0x1;
                            }
                            *(unsigned int *)((a4 + 0x5C)) = 0x202;
                            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                            return 0x1;
                        }
                        if ((t62 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x600;
                            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x200;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    if ((t62 & 0x2) != 0) {
                        if ((t62 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x402;
                            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x2;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    if ((t62 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x400;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                t63 = *(int *)((a5 + 0x24));
                if ((t63 & 0x1) != 0) {
                    if ((t63 & 0x2) != 0) {
                        if ((t63 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x602;
                            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x202;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    if ((t63 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x600;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x200;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                if ((t63 & 0x2) != 0) {
                    if ((t63 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x402;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x2;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                if ((t63 & 0x4) != 0) {
                    *(unsigned int *)((a4 + 0x5C)) = 0x400;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                return 0x1;
            }
            if (((*(int *)((a5 + 0x24))) & 0x8) != 0) {
                *(unsigned int *)((a4 + 0x54)) = (*(int *)((a4 + 0x98)));
                *(unsigned int *)((a4 + 0x58)) = 0xFFFFFFFF;
                t66 = *(int *)((a5 + 0x24));
                if ((t66 & 0x1) != 0) {
                    if ((t66 & 0x2) != 0) {
                        if ((t66 & 0x4) != 0) {
                            *(unsigned int *)((a4 + 0x5C)) = 0x602;
                            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x5C)) = 0x202;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    if ((t66 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x600;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x200;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                if ((t66 & 0x2) != 0) {
                    if ((t66 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x402;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x2;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                if ((t66 & 0x4) != 0) {
                    *(unsigned int *)((a4 + 0x5C)) = 0x400;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                return 0x1;
            }
            t67 = *(int *)((a5 + 0x24));
            if ((t67 & 0x1) != 0) {
                if ((t67 & 0x2) != 0) {
                    if ((t67 & 0x4) != 0) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x602;
                        *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x5C)) = 0x202;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                if ((t67 & 0x4) != 0) {
                    *(unsigned int *)((a4 + 0x5C)) = 0x600;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x5C)) = 0x200;
                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                return 0x1;
            }
            if ((t67 & 0x2) != 0) {
                if ((t67 & 0x4) != 0) {
                    *(unsigned int *)((a4 + 0x5C)) = 0x402;
                    *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x5C)) = 0x2;
                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                return 0x1;
            }
            if ((t67 & 0x4) != 0) {
                *(unsigned int *)((a4 + 0x5C)) = 0x400;
                *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
                return 0x1;
            }
            *(unsigned int *)((a4 + 0x5C)) = 0x0;
            *(unsigned int *)((a4 + 0x64)) = 0xFFFFFFFF;
            return 0x1;
        }
        break;
    }
    return 0x0;
}

int FUN_0c031fbc(int a4, int a5, int a6)
{
    int t8;
    int t19;
    int t38;
    int t57;
    int t58;
    int t5;
    int t62;
    int t60;

    *(unsigned int *)((a4 + 0x534)) = (*(int *)(((*(int *)((a4 + 0x540))) + 0x0)));
    if (((*(int *)((a4 + 0x534))) & 0x20) == 32) {
        t5 = ((*(int *)((a4 + 0x1EC))) & 0xFFFFF00F);
    } else {
        t5 = ((*(int *)((a4 + 0x1EC))) | 0xFF0);
    }
    *(unsigned int *)((a4 + 0x1EC)) = t5;
    t8 = *(int *)((a4 + 0x534));
    if ((t8 != 3) && ((t8 != 7) && (t8 != 11))) {
        if ((t8 != 19) && ((t8 != 23) && (t8 != 27))) {
            t19 = *(int *)((a4 + 0x534));
            if ((t19 & 0xC) != 0) {
                if ((t19 & 0xC) != 4) {
                    if ((t19 & 0xC) != 8) {
                    } else {
                        *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x4C4)) = 0x4;
                    *(unsigned int *)((a4 + 0x4CC)) = 0x1;
                }
            } else {
                *(unsigned int *)((a4 + 0x4C4)) = 0x0;
                *(unsigned int *)((a4 + 0x4CC)) = 0x0;
            }
            return FUN_0c031e3c(a4);
        }
        if ((0x40000 & (*(int *)((a4 + 0x20C)))) == 0) {
            FUN_0c031e5e(a4, a5, a6);
        } else {
            FUN_0c031f48(a4);
        }
        *(unsigned int *)(((*(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0))) + 0xD0)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x20C)) = 0x80;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x4C4)) = 0x6;
        t38 = *(int *)((a4 + 0x534));
        if ((t38 & 0xC) != 0) {
            if ((t38 & 0xC) != 4) {
                if ((t38 & 0xC) != 8) {
                } else {
                    *(unsigned int *)((a4 + 0x4CC)) = 0x0;
                }
            } else {
                *(unsigned int *)((a4 + 0x4CC)) = 0x1;
            }
        } else {
            *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        }
        if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + (*(float *)0xC032178));
        }
        return 0x34;
    }
    if ((0x40000 & (*(int *)((a4 + 0x20C)))) == 0) {
        FUN_0c031e5e(a4, a5, a6);
    } else {
        FUN_0c031f48(a4);
    }
    *(unsigned int *)((a4 + 0x4C4)) = 0x6;
    t57 = *(int *)((a4 + 0x534));
    if ((t57 & 0xC) != 0) {
        if ((t57 & 0xC) != 4) {
            t58 = (t57 & 0xC);
            if ((t57 & 0xC) != 8) {
            } else {
                *(unsigned int *)((a4 + 0x4CC)) = 0x0;
                t58 = 0x4CC;
            }
            t60 = t58;
        } else {
            *(unsigned int *)((a4 + 0x4CC)) = 0x1;
            t60 = 0x4CC;
        }
        t62 = t60;
    } else {
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        t62 = 0x4CC;
    }
    return t62;
}

int FUN_0c040e18(int a4)
{
    int t0;
    int t2;
    float t5;
    int t26;
    int t28;
    int t51;
    int t59;
    float t52;
    int t67;
    int t42;
    int t35;
    int stk[15];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 == 2) {
                t2 = (FUN_0c041f2a(a4));
            }
            t42 = t2;
        } else {
            t5 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
            if ((*(float *)((a4 + 0x26C))) > (-1.0f)) {
                *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
            }
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x26C + a4) + 0x0))));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
            if ((t5 + (*(float *)((a4 + 0x3BC)))) > (*(float *)((a4 + 0x34)))) {
                *(float *)((a4 + 0x258)) = 0.0f;
                *(float *)((a4 + 0x25C)) = 0.0f;
                *(float *)((a4 + 0x260)) = 0.0f;
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - (*(float *)(((0x3BC + a4) + 0x0))));
                *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                t35 = (FUN_0c041dd0(a4));
            } else {
                t26 = *(int *)((a4 + 0x2EC));
                t28 = t26;
                if ((t26 & 12) != 0) {
                    t28 = (FUN_0c041dd0(a4));
                }
                t35 = t28;
            }
            t42 = t35;
        }
        t67 = t42;
    } else {
        FUN_0c041f2a(a4);
        t51 = *(int *)((a4 + 0x4E0));
        t59 = t51;
        if (t51 != 1) {
        } else {
            t52 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = 0.0f;
            *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = 0.25f;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 4) + 0x4)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
            *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x0;
            FUN_0c0a6610((((int)stk + 4) + 0xC), ((int)stk + 4), (0x258 + a4));
            *(float *)((a4 + 0x26C)) = 0.0f;
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x3E8 + a4) + 0x0))) - t52));
            *(float *)((a4 + 0x3BC)) = ((*(float *)((a4 + 0x3E8))) - t52);
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            t59 = 0x4EC;
        }
        t67 = t59;
    }
    return t67;
}

int FUN_0c066870(int a4, int a5)
{
    FUN_0c0e19d0(a4);
    FUN_0c0dc5a0();
    FUN_0c0dcc70(0.0f, 50.0f, 0.0f);
    nlGetMatrix((0xA4 + a4));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x38)) = 10.0f;
    *(float *)((a4 + 0x4C)) = 0.599999964f;
    *(float *)((a4 + 0x50)) = 0.25f;
    *(volatile int *)((a5 + 0x38));
    *(unsigned short *)(((0x32 + a4) + 0x0)) = ((FUN_0c0e5f1c()) + 0x99);
    *(float *)((a4 + 0x54)) = 0.0f;
    *(float *)((a4 + 0x58)) = 0.0f;
    *(float *)((a4 + 0x5C)) = 0.0f;
    *(unsigned int *)((a4 + 0x34)) = 0x4;
    *(float *)((a4 + 0x60)) = 5.0f;
    *(float *)((a4 + 0x64)) = 0.0f;
    *(float *)((a4 + 0x68)) = 5.0f;
    *(float *)((a4 + 0x6C)) = 1.0f;
    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x38))) * 233.333328f);
    *(float *)((a4 + 0x70)) = -5.0f;
    *(float *)((a4 + 0x74)) = 0.0f;
    *(float *)((a4 + 0x78)) = 5.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x38))) * 233.333328f);
    *(float *)((a4 + 0x80)) = -5.0f;
    *(float *)((a4 + 0x84)) = 0.0f;
    *(float *)((a4 + 0x88)) = -5.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x38))) * 233.333328f);
    *(float *)((a4 + 0x90)) = 5.0f;
    *(float *)((a4 + 0x94)) = 0.0f;
    *(float *)((a4 + 0x98)) = -5.0f;
    *(float *)((a4 + 0x9C)) = 1.0f;
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x38))) * 233.333328f);
    FUN_0c0da2e0();
    *(float *)((a4 + 0xE4)) = (((float)((FUN_0c0e5f1c()) - 50) + 0.5f) * 0.00999999978f);
    FUN_0c0da2e0();
    *(float *)((a4 + 0xEC)) = (((float)((FUN_0c0e5f1c()) - 50) + 0.5f) * 0.00999999978f);
    FUN_0c0da2e0();
    *(float *)((a4 + 0xF4)) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    FUN_0c0da2e0();
    *(float *)((a4 + 0xF8)) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    FUN_0c0da2e0();
    *(float *)((a4 + 0xFC)) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    *(unsigned int *)((a4 + 0x180)) = 0x960;
    return 0x180;
}

float FUN_0c0a81ac(int a4, int a5, int a6, int a7)
{
    float u0;
    float u2;
    float u3;
    float u7;
    float u8;
    float u9;
    float u11;
    float u13;
    float u17;
    float u19;
    float u21;
    float u25;
    float u27;
    float u30;
    float u36;
    float u37;
    float u38;
    int t42;
    int t43;
    int t44;
    float u46;
    float u47;
    float u48;
    int t49;
    float u51;
    float u52;
    float u53;

    u0 = (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f));
    u2 = ((((1.0f - ((float)(unsigned short)a5 / 65536.0f)) * (1.0f - ((float)(unsigned short)a5 / 65536.0f)))) * (1.0f - ((float)(unsigned short)a5 / 65536.0f)));
    u3 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u7 = (((((float)(unsigned short)a5 / 65536.0f) + (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) - (u0 * ((float)(unsigned short)a5 / 65536.0f))) + 0.333333313f);
    u8 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u9 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x8))) * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u9 = u9 + (u2 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x8)));
    u11 = u9;
    u11 = u11 + (u7 * 0.5f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x8)));
    u13 = u11;
    u13 = u13 + (u8 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x8)));
    u17 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC))) * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u17 = u17 + (u2 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0xC)));
    u19 = u17;
    u19 = u19 + (u7 * 0.5f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0xC)));
    u21 = u19;
    u21 = u21 + (u8 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0xC)));
    u25 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x10))) * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u25 = u25 + (u2 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x10)));
    u27 = u25;
    u27 = u27 + (u7 * 0.5f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x10)));
    u30 = u27;
    u30 = u30 + (u8 * 0.166669995f) * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x10)));
    u36 = ((float)(*(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x0))) * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u36 = u36 + (u2 * 0.166669995f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x0)));
    u37 = u36;
    u37 = u37 + (u7 * 0.5f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x0)));
    u38 = u37;
    u38 = u38 + (u8 * 0.166669995f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x0)));
    t42 = *(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x4));
    t43 = *(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x4));
    t44 = *(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x4));
    u46 = ((float)(*(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x2))) * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u46 = u46 + (u2 * 0.166669995f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x2)));
    u47 = u46;
    u47 = u47 + (u7 * 0.5f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x2)));
    u48 = u47;
    u48 = u48 + (u8 * 0.166669995f) * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x2)));
    t49 = *(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x4));
    *(float *)((a6 + 0x0)) = u13;
    *(float *)((a6 + 0x4)) = u21;
    *(float *)((a6 + 0x8)) = u30;
    *(unsigned int *)((a7 + 0x0)) = (int)u38;
    u51 = ((float)t49 * ((((u3 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f)));
    u51 = u51 + (u2 * 0.166669995f) * (float)t44;
    u52 = u51;
    u52 = u52 + (u7 * 0.5f) * (float)t43;
    *(unsigned int *)((a7 + 0x4)) = (int)u48;
    u53 = u52;
    u53 = u53 + (u8 * 0.166669995f) * (float)t42;
    *(unsigned int *)((a7 + 0x8)) = (int)u53;
    return (u8 * 0.166669995f);
}

int FUN_0c02bda4(int a4)
{
    int t18;
    int t20;
    int t22;
    int t28;
    int t46;
    int t51;
    int t57;
    int stk[8];

    int R0;
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
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    L_C02BDA4:;
    R11 = (0xC246FF0);
    R14 = (R4);
    if (((*(int *)((0xC247030 + ((*(int *)((R4 + 0xBC))) << 2)))) != 4)) goto L_C02BE4C;
    goto L_C02BDC6;
    L_C02BDC6:;
    if (((*(int *)((R14 + 0x49C))) != 1)) goto L_C02BE4C;
    goto L_C02BDCE;
    L_C02BDCE:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C02BE4C;
    goto L_C02BDD6;
    L_C02BDD6:;
    if (((*(int *)((R14 + 0x4CC))) == 1)) goto L_C02BE4C;
    goto L_C02BDDE;
    L_C02BDDE:;
    if (((*(int *)((R14 + 0x4D0))) == 1)) goto L_C02BE4C;
    goto L_C02BDE6;
    L_C02BDE6:;
    if (((*(int *)((R14 + 0x4C8))) != 0)) goto L_C02BE4C;
    goto L_C02BDEE;
    L_C02BDEE:;
    if (((int)(*(int *)((R14 + 0x54C))) <= 0)) goto L_C02BE4C;
    goto L_C02BDF6;
    L_C02BDF6:;
    t18 = *(int *)(((((*(int *)((R14 + 0x510))) << 2) + R11) + 0x0));
    t20 = (FUN_0c034314(R14, t18, ((int)stk + 4))) == 0;
    R10 = (t18);
    if (t20) goto L_C02BE4C;
    goto L_C02BE10;
    L_C02BE10:;
    t22 = *(int *)((R14 + 0x490));
    R0 = (t22);
    if ((t22 == 1)) goto L_C02BE24;
    goto L_C02BE18;
    L_C02BE18:;
    if ((R0 == 2)) goto L_C02BE2C;
    goto L_C02BE1C;
    L_C02BE1C:;
    if ((R0 == 3)) goto L_C02BE34;
    goto L_C02BE20;
    L_C02BE20:;
    goto L_C02BE3C;
    L_C02BE3C:;
    *(unsigned int *)((R14 + 0x490)) = 0x0;
    t28 = (FUN_0c035e22(R14)) != 0;
    if (t28) goto L_C02BE74;
    goto L_C02BE4C;
    L_C02BE4C:;
    *(unsigned int *)((R14 + 0x494)) = 0xFFFFFFFF;
    goto L_C02BF0E;
    L_C02BF0E:;
    *(unsigned int *)((R14 + 0x490)) = 0x0;
    return 0x490;
    L_C02BE74:;
    *(unsigned int *)((R14 + 0x494)) = (*(int *)((R14 + 0x510)));
    R12 = (0x4);
    R4 = (0xC);
    R6 = (0x1);
    F4 = (5.0f);
    goto L_C02BE86;
    L_C02BE86:;
    if ((R12 == (*(int *)((R14 + 0xBC))))) goto L_C02BEE4;
    goto L_C02BE8E;
    L_C02BE8E:;
    R5 = ((R12 << 2));
    if (((*(int *)(((R12 << 2) + (R11 + 0x40)))) != 4)) goto L_C02BEE4;
    goto L_C02BE9E;
    L_C02BE9E:;
    R13 = ((*(int *)(((R11 + R5) + 0x0))));
    if ((R6 == 0)) goto L_C02BEE4;
    goto L_C02BEA8;
    L_C02BEA8:;
    if (((*(int *)((R13 + 0x494))) != (*(int *)((R14 + 0x510))))) goto L_C02BEE4;
    goto L_C02BEB4;
    L_C02BEB4:;
    t46 = *(int *)(((0x510 + R14) + 0x0));
    if ((!(_builtin_fabsf(((*(float *)(((t46 << 2) + (((((*(int *)((R14 + 0xBC))) << 2) << 2) << 2) + (0x94 + R11))))) - (*(float *)(((t46 << 2) + (((((*(int *)((R13 + 0xBC))) << 2) << 2) << 2) + (0x94 + R11))))))) > F4))) goto L_C02BEEA;
    goto L_C02BEE4;
    L_C02BEE4:;
    t51 = (int)(R12 + 0x1) < (int)R4;
    R12 = ((R12 + 0x1));
    if (t51) goto L_C02BE86;
    goto L_C02BEEA;
    L_C02BEEA:;
    if (((int)R12 >= (int)R4)) goto L_C02BF0E;
    goto L_C02BEEE;
    L_C02BEEE:;
    if (((*(int *)((R13 + 0x4D0))) != 0)) goto L_C02BF0E;
    goto L_C02BEF6;
    L_C02BEF6:;
    t57 = (FUN_0c02bc2a(R14, R13, R10)) == 0;
    if (t57) goto L_C02BF0E;
    goto L_C02BF02;
    L_C02BF02:;
    *(unsigned int *)((R14 + 0x494)) = R12;
    *(unsigned int *)((R13 + 0x494)) = (*(int *)((R14 + 0xBC)));
    goto L_C02BF0E;
    L_C02BE34:;
    FUN_0c02bc1c(R14);
    goto L_C02BF0E;
    L_C02BE2C:;
    FUN_0c02bc0e(R14);
    goto L_C02BF0E;
    L_C02BE24:;
    FUN_0c02bc00(R14);
    goto L_C02BF0E;
}

int kmiWriteFBRegister(Stk29 s)
{
    int t9;
    int t10;
    int t11;
    int stk[40];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    stk[7] = s.w[4];
    stk[8] = s.w[5];
    stk[9] = s.w[6];
    stk[10] = s.w[7];
    stk[11] = s.w[8];
    stk[12] = s.w[9];
    stk[13] = s.w[10];
    stk[14] = s.w[11];
    stk[15] = s.w[12];
    stk[16] = s.w[13];
    stk[17] = s.w[14];
    stk[18] = s.w[15];
    stk[19] = s.w[16];
    stk[20] = s.w[17];
    stk[21] = s.w[18];
    stk[22] = s.w[19];
    stk[23] = s.w[20];
    stk[24] = s.w[21];
    stk[25] = s.w[22];
    stk[26] = s.w[23];
    stk[27] = s.w[24];
    stk[28] = s.w[25];
    stk[29] = s.w[26];
    stk[30] = s.w[27];
    stk[31] = s.w[28];
    *(unsigned int *)0xC9525B0 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x58))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x54))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525B4 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x60))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x5C))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525B8 = ((((*(int *)(((((int)stk + 4) + 0x8) + 0x48))) & 0xF) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x4C))) & 0x1F) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x50))) & 0xF) << 8) << 1));
    *(unsigned int *)0xC95233C = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(unsigned int *)0xC952340 = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)(*(int *)0xC952350) > 0) {
        *(unsigned int *)0xC9525BC = (((t10 & 0x3FF) | ((((t11 - (*(int *)0xC952350)) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        *(unsigned int *)0xC9525BC = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    *(unsigned int *)0xC9525F8 = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    *(unsigned int *)0xC9525FC = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    *(unsigned int *)0xC9525C0 = ((*(int *)(((((int)stk + 4) + 0x8) + 0x44))) & 0x1FF);
    *(unsigned int *)0xC9525C8 = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    *(unsigned int *)0xC9525C4 = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & (*(int *)(((((int)stk + 4) + 0x8) + 0x40)))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & (*(int *)(((((int)stk + 4) + 0x8) + 0x68)))) << 16)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x64))) & 0x1) << 22)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x6C))) & 0x1) << 23));
    return 0x6C;
}


int vmsfs_xdefrag(int a4, int a5)
{
    int t6;
    int t10;
    int t15;
    int t20;
    int t24;
    int t26;
    int t29;
    int t32;
    int t35;
    int t38;
    int t42;
    int t45;
    int t48;
    int t54;
    int stk[13];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C22791C:;
    *(unsigned int *)(((int)stk + 4)) = (R4 * 0x148);
    R10 = (R5);
    R11 = (((R4 * 0x148) + 0xC956768));
    R14 = (R4);
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C227986;
    goto L_C227942;
    L_C227942:;
    t6 = (vmsio_isready(R14)) != 0;
    if (t6) goto L_C227970;
    goto L_C22794C;
    L_C22794C:;
    vmsfs_unmount(R14);
    goto L_C227986;
    L_C227986:;
    R0 = (0xFFFFFF01);
    goto L_C227A8A;
    L_C227A8A:;
    return R0;
    L_C227970:;
    t10 = (vmsio_ismount(R14)) == 0;
    if (t10) goto L_C227986;
    goto L_C22797A;
    L_C22797A:;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC956768) + 0x8))) != 0)) goto L_C22798C;
    goto L_C227986;
    L_C22798C:;
    t15 = (int)(buIsFormat(R14)) >= 0;
    if (t15) goto L_C22799C;
    goto L_C227996;
    L_C227996:;
    R0 = (0xFFFFFF03);
    goto L_C227A8A;
    L_C22799C:;
    if (((*(int *)(((*(int *)((R11 + 0x1C))) + 0x38))) == 0)) goto L_C2279BA;
    goto L_C2279A4;
    L_C2279A4:;
    t20 = vmsfs_xfind(R14, (((int)stk + 4) + 0x4));
    R4 = (t20);
    if ((t20 == 0)) goto L_C2279BA;
    goto L_C2279B2;
    L_C2279B2:;
    t24 = (int)(check_fat_all(R14, R5, R6)) >= 0;
    if (t24) goto L_C2279C0;
    goto L_C2279BA;
    L_C2279BA:;
    R0 = (0xFFFFFF0B);
    goto L_C227A8A;
    L_C2279C0:;
    t26 = search_fat_used(R14, R5, R6);
    R13 = (t26);
    if (((int)t26 < 0)) goto L_C227A60;
    goto L_C2279CA;
    L_C2279CA:;
    t29 = search_fat_free(R14, (R13 + 0x1), R6);
    R12 = (t29);
    if (((int)t29 < 0)) goto L_C227A60;
    goto L_C2279D8;
    L_C2279D8:;
    t32 = vmsfs_read_retry(R14, R13, R10);
    R4 = (t32);
    if (((int)t32 < 0)) goto L_C227A88;
    goto L_C2279E8;
    L_C2279E8:;
    t35 = vmsfs_write_retry(R14, R12, R10);
    R4 = (t35);
    if (((int)t35 < 0)) goto L_C227A88;
    goto L_C2279F8;
    L_C2279F8:;
    t38 = search_fat(R14, R13, R6);
    R5 = (t38);
    if (((int)t38 <= 0)) goto L_C227A0E;
    goto L_C227A04;
    L_C227A04:;
    set_fat(R14, R5, R12);
    goto L_C227A22;
    L_C227A22:;
    t42 = get_fat(R14, R13, R6);
    set_fat(R14, R12, t42);
    set_fat(R14, R13, 0xFFFC);
    goto L_C2279C0;
    L_C227A0E:;
    t45 = search_dir_by_startfat(R14, R13, R6);
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(t45, 0x2, R12);
    goto L_C227A22;
    L_C227A88:;
    R0 = (R4);
    goto L_C227A8A;
    L_C227A60:;
    R4 = ((R11 + 0x48));
    R5 = (0x100);
    R6 = (0x1);
    goto L_C227A6E;
    L_C227A6E:;
    if (((unsigned int)R4 < (unsigned int)((R11 + 0x48) + R5))) goto L_C227A6A;
    goto L_C227A78;
    L_C227A78:;
    t54 = write_dir(R14);
    R4 = (t54);
    if (((int)t54 < 0)) goto L_C227A88;
    goto L_C227A82;
    L_C227A82:;
    R4 = ((write_fat(R14)));
    goto L_C227A88;
    L_C227A6A:;
    *(unsigned char *)((R4 + 0x0)) = R6;
    R4 = ((R4 + 0x1));
    goto L_C227A6E;
}

int FUN_0c031a4c(int a4)
{
    int t1;
    int t4;
    float u5;
    float u6;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u37;
    float u40;
    float u43;
    float u46;
    int t49;
    int stk[23];

    t1 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0));
    thunk_FUN_0c0546fe(t1, (*(short *)((a4 + 0x6E))), 0x800, 0x1);
    t4 = *(int *)((a4 + 0x558));
    u5 = *(float *)(((((t4 << 2) << 1) + 0xC1EFDD8) + 0x4));
    u6 = *(float *)(((((t4 << 2) << 1) + 0xC1EFDD8) + 0x0));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((-(*(short *)((a4 + 0x6E)))));
    *(float *)(((int)stk + 16)) = (-u6);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-u5);
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = ((-(*(float *)((t1 + 0x30)))) + (*(float *)((a4 + 0x30))));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((-(*(float *)((t1 + 0x38)))) + (*(float *)((a4 + 0x38))));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    *(float *)(((((int)stk + 4) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x4))));
    *(float *)(((((int)stk + 4) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    u30 = *(float *)(((((int)stk + 4) + 0x24) + 0x8));
    u31 = *(float *)(((((int)stk + 4) + 0x30) + 0x8));
    u32 = *(float *)(((((int)stk + 4) + 0x30) + 0x0));
    u33 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
    u34 = ((u31 - u30) * (u31 - u30));
    u34 = u34 + (u32 - u33) * (u32 - u33);
    u37 = (*(float *)((t1 + 0x48)));
    u37 = u37 + 0.5f * (*(float *)(((((int)stk + 4) + 0x18) + 0x0)));
    *(float *)((t1 + 0x48)) = u37;
    u40 = (*(float *)((t1 + 0x50)));
    u40 = u40 + 0.5f * (*(float *)(((0x8 + (((int)stk + 4) + 0x18)) + 0x0)));
    *(float *)((t1 + 0x50)) = u40;
    if (1.0f > _builtin_sqrtf(u34)) {
        *(unsigned int *)((a4 + 0x210)) = 0x3E;
        u43 = (*(float *)((t1 + 0x48)));
        u43 = u43 + 0.5f * (*(float *)(((((int)stk + 4) + 0x18) + 0x0)));
        *(float *)((t1 + 0x48)) = u43;
        u46 = (*(float *)((t1 + 0x50)));
        u46 = u46 + 0.5f * (*(float *)(((0x8 + (((int)stk + 4) + 0x18)) + 0x0)));
        *(float *)((t1 + 0x50)) = u46;
        t49 = (thunk_FUN_0c0546fe(t1, (*(short *)((a4 + 0x6E))), 0x800, 0x0));
    } else {
        *(unsigned int *)((a4 + 0x2B4)) = 0x0;
        *(unsigned int *)((t1 + 0x2B4)) = 0x0;
        t49 = 0x2B4;
        _builtin_sqrtf(u34);
    }
    return t49;
}

void FUN_0c0d6ad4(void)
{
    int t20;
    int t35;
    int t46;
    int t57;
    int t71;
    float u74;
    float u77;
    int t78;
    int t81;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F14;
    float F15;
    int T_;
    L_C0D6AD4:;
    R10 = (0xC247594);
    R11 = (0xC943514);
    R12 = (0xC9436B4);
    R9 = (0xC943554);
    goto L_C0D6C2C;
    L_C0D6C2C:;
    R4 = (0x3A8);
    if (((unsigned int)R12 >= (unsigned int)((0x160 + R9) + 0x3A8))) goto L_C0D6C3C;
    goto L_C0D6C38;
    L_C0D6C38:;
    goto L_C0D6AF4;
    L_C0D6AF4:;
    R13 = (R12);
    R14 = ((0x170 + R12));
    if (((*(int *)((R12 + 0x0))) != 0)) goto L_C0D6B04;
    goto L_C0D6B00;
    L_C0D6B00:;
    goto L_C0D6C24;
    L_C0D6C24:;
    R10 = ((R10 + 0x4));
    R11 = ((R11 + 0x20));
    R12 = ((R12 + 0x1D4));
    goto L_C0D6C2C;
    L_C0D6B04:;
    if (((*(int *)((R10 + 0x0))) != 0)) goto L_C0D6B0E;
    goto L_C0D6B0A;
    L_C0D6B0A:;
    goto L_C0D6C24;
    L_C0D6B0E:;
    if (((*(int *)((R14 + 0x0))) != 0)) goto L_C0D6B18;
    goto L_C0D6B14;
    L_C0D6B14:;
    goto L_C0D6C24;
    L_C0D6B18:;
    if (((*(int *)((R14 + 0x14))) != 0)) goto L_C0D6B50;
    goto L_C0D6B1E;
    L_C0D6B1E:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    t20 = FUN_0c0d68dc(R13, R14);
    R0 = (t20);
    if ((t20 != 0)) goto L_C0D6C08;
    goto L_C0D6B2E;
    L_C0D6B2E:;
    R0 = ((FUN_0c0d6c52(R13)));
    goto L_C0D6C24;
    L_C0D6C08:;
    R4 = (0x8);
    if (((int)(*(int *)((R14 + 0x14))) <= 0)) goto L_C0D6C16;
    goto L_C0D6C10;
    L_C0D6C10:;
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) - 1);
    goto L_C0D6C16;
    L_C0D6C16:;
    if ((((*(int *)((R14 + 0x24))) & R4) == 0)) goto L_C0D6C24;
    goto L_C0D6C1C;
    L_C0D6C1C:;
    *(unsigned int *)((R13 + 0x54)) = (*(int *)((R13 + 0x98)));
    R0 = (0x54);
    goto L_C0D6C24;
    L_C0D6B50:;
    if (((int)(*(int *)((R14 + 0x14))) >= 0)) goto L_C0D6C08;
    goto L_C0D6B56;
    L_C0D6B56:;
    t35 = *(int *)((R14 + 0x14));
    R0 = (t35);
    if ((t35 != -1)) goto L_C0D6B62;
    goto L_C0D6B5C;
    L_C0D6B5C:;
    *(unsigned int *)((R14 + 0x14)) = 0xFFFFFFFE;
    goto L_C0D6C08;
    L_C0D6B62:;
    R4 = (0x0);
    R5 = (0xC);
    if (((*(int *)((R14 + 0x28))) != -1)) goto L_C0D6B8C;
    goto L_C0D6B6C;
    L_C0D6B6C:;
    R0 = (0x2EC);
    if (((R5 & (*(int *)(((*(int *)((R13 + 0x6C))) + 0x2EC)))) == 0)) goto L_C0D6C08;
    goto L_C0D6B78;
    L_C0D6B78:;
    *(unsigned int *)((R14 + 0x28)) = R4;
    t46 = *(int *)((R14 + 0x2C));
    R0 = (t46);
    if ((t46 != -1)) goto L_C0D6C04;
    goto L_C0D6B80;
    L_C0D6B80:;
    *(unsigned int *)((R13 + 0x58)) = R4;
    *(unsigned int *)((R13 + 0x64)) = R4;
    *(unsigned int *)((R14 + 0x28)) = R4;
    R0 = (0x64);
    goto L_C0D6C08;
    L_C0D6C04:;
    *(unsigned int *)((R14 + 0x14)) = (*(int *)((R14 + 0x2C)));
    goto L_C0D6C08;
    L_C0D6B8C:;
    if (((*(int *)((R14 + 0x2C))) != -1)) goto L_C0D6BA2;
    goto L_C0D6B92;
    L_C0D6B92:;
    R0 = (0x2EC);
    if (((R5 & (*(int *)(((*(int *)((R13 + 0x6C))) + 0x2EC)))) != 0)) goto L_C0D6BCC;
    goto L_C0D6B9E;
    L_C0D6B9E:;
    goto L_C0D6C08;
    L_C0D6BCC:;
    *(unsigned int *)((R14 + 0x14)) = R4;
    goto L_C0D6C08;
    L_C0D6BA2:;
    t57 = *(int *)((R14 + 0x28));
    R0 = (t57);
    if ((t57 != -2)) goto L_C0D6BBA;
    goto L_C0D6BA8;
    L_C0D6BA8:;
    R0 = (0x20C);
    if ((((*(int *)(((*(int *)((R13 + 0x6C))) + 0x20C))) & (*(int *)((R14 + 0x2C)))) == 0)) goto L_C0D6C08;
    goto L_C0D6BB6;
    L_C0D6BB6:;
    goto L_C0D6BCC;
    L_C0D6BBA:;
    if ((R0 != -3)) goto L_C0D6BD6;
    goto L_C0D6BBE;
    L_C0D6BBE:;
    R0 = (0x210);
    if (((*(int *)(((*(int *)((R13 + 0x6C))) + 0x210))) != (*(int *)((R14 + 0x2C))))) goto L_C0D6C08;
    goto L_C0D6BCC;
    L_C0D6BD6:;
    t71 = *(int *)((R14 + 0x28));
    R0 = (t71);
    if ((t71 != -4)) goto L_C0D6C08;
    goto L_C0D6BDC;
    L_C0D6BDC:;
    u74 = *(float *)0xC0D6D18;
    FUN_0c0da2e0();
    u77 = 1.0f;
    u77 = u77 + u74 * (*(float *)((R11 + 0x18)));
    t78 = FUN_0c0e5f1c();
    R0 = (t78);
    if ((t78 == 0)) goto L_C0D6C04;
    goto L_C0D6BFE;
    L_C0D6BFE:;
    t81 = *(int *)((R13 + 0x24));
    R0 = (t81);
    if (((t81 & 16) == 0)) goto L_C0D6C08;
    goto L_C0D6C04;
    L_C0D6C3C:;
}

int FUN_0c0e3dc4(void)
{
    int t0;
    int t9;
    int t11;
    int t12;
    int t14;
    int t17;
    int t20;
    int t22;
    int t23;
    int t25;
    int t41;

    t0 = *(signed char *)0xC94C828;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 == 5) {
                            if ((*(int *)0xA08000B4) != 0) {
                                return 0x1;
                            }
                            *(unsigned int *)0xA08000B0 = 0x0;
                            *(unsigned int *)0xC94C828 = 0x0;
                            return 0x0;
                        }
                        return (unsigned char)t0;
                    }
                    if (((*(int *)0xC94C828) & 0xFF00) == 0) {
                        t9 = 0x0;
                        for (;;) {
                            if ((int)t9 >= (int)(*(int *)0xC94C82C)) {
                                return 0x1;
                            }
                            t11 = *(int *)0xC94C83C;
                            *(unsigned int *)0xC94C83C = (t11 + 0x4);
                            t12 = *(int *)0xC94C838;
                            *(unsigned int *)0xC94C838 = (t12 + 0x4);
                            *(unsigned int *)((((t11 + 0x4) - 4) + 0x0)) = (*(int *)((((t12 + 0x4) - 4) + 0x0)));
                            t14 = *(int *)0xC94C830;
                            *(unsigned int *)0xC94C830 = (t14 - 4);
                            if ((t14 - 4) == 0) {
                                break;
                            }
                            t9 = (t9 + 0x1);
                        }
                        *(unsigned int *)0xA08000B0 = 0x1;
                        *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
                        return 0x1;
                    }
                    *(unsigned int *)0xA08000B0 = 0x1;
                    *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
                    return 0x1;
                }
                t17 = FUN_0c0e36ac();
                if (t17 != 0) {
                    return 0x1;
                }
                *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
                if (((*(int *)0xC94C828) & 0xFF00) == 0) {
                    t20 = 0x0;
                    for (;;) {
                        if ((int)t20 >= (int)(*(int *)0xC94C82C)) {
                            return 0x1;
                        }
                        t22 = *(int *)0xC94C83C;
                        *(unsigned int *)0xC94C83C = (t22 + 0x4);
                        t23 = *(int *)0xC94C838;
                        *(unsigned int *)0xC94C838 = (t23 + 0x4);
                        *(unsigned int *)((((t22 + 0x4) - 4) + 0x0)) = (*(int *)((((t23 + 0x4) - 4) + 0x0)));
                        t25 = *(int *)0xC94C830;
                        *(unsigned int *)0xC94C830 = (t25 - 4);
                        if ((t25 - 4) == 0) {
                            break;
                        }
                        t20 = (t20 + 0x1);
                    }
                    *(unsigned int *)0xA08000B0 = 0x1;
                    *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
                    return 0x1;
                }
                *(unsigned int *)0xA08000B0 = 0x1;
                *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
                return 0x1;
            }
            if ((*(int *)0xA08000B4) == 0) {
                return 0x1;
            }
            if ((*(int *)0xC94C834) != 0) {
                FUN_0c0e3630((*(int *)0xC94C83C), ((*(int *)0xC94C83C) + (*(int *)0xC94C830)), (*(int *)0xC94C834));
            }
            *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
            return 0x1;
        }
        for (;;) {
            t41 = FUN_0c0e4428(0x18A0);
            if (t41 != -1) {
                break;
            }
        }
        *(unsigned int *)0xC94C828 = ((*(int *)0xC94C828) + 0x1);
        return 0x1;
    }
    return 0xFFFFFFFF;
}

int FUN_0c02b330(int a4)
{
    int t1;
    int t5;
    int t8;
    int t9;
    int t15;
    int t16;
    int t17;
    int t22;
    int t30;
    int t37;
    int t38;
    int t44;
    int t61;
    int t81;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        t81 = 0x474;
    } else {
        t1 = FUN_0c02a416(a4);
        if (t1 != 0) {
            *(unsigned int *)((a4 + 0x538)) = 0xA;
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        } else {
            t5 = *(int *)((a4 + 0x4F8));
            if ((t5 != 12) && (t5 != 13)) {
                t8 = FUN_0c03593a(a4);
                if (t8 != 0) {
                    t9 = FUN_0c02a35a(a4);
                    if (t9 != 0) {
                        if (t9 != 1) {
                            if (t9 != 2) {
                                if (t9 != 3) {
                                    *(unsigned int *)((a4 + 0x538)) = 0x2;
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                } else {
                                    *(unsigned int *)((a4 + 0x538)) = 0x2;
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x538)) = 0x2;
                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                        }
                    } else {
                        t15 = FUN_0c035b26(a4);
                        if (t15 != 0) {
                            t16 = FUN_0c035ce4(a4);
                            if (t16 != 0) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                            } else {
                                t17 = *(int *)((a4 + 0x538));
                                if ((t17 != 8) && ((t17 != 6) && (t17 != 7))) {
                                    if (t17 == 4) {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            }
                        } else {
                            t22 = *(int *)((a4 + 0x538));
                            if ((t22 != 8) && ((t22 != 6) && (t22 != 7))) {
                                if (t22 == 4) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        }
                    }
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x1;
                    *(unsigned int *)((a4 + 0x50C)) = 0x0;
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    t30 = FUN_0c0236ce(a4);
                    if (t30 == 0) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    }
                }
            } else {
                if ((*(int *)((a4 + 0x54C))) == 0) {
                    *(unsigned int *)((a4 + 0x54C)) = 0x1;
                }
                t37 = FUN_0c035b26(a4);
                if (t37 != 0) {
                    t38 = FUN_0c035ce4(a4);
                    if (t38 == 0) {
                        if ((*(int *)((a4 + 0x538))) != 9) {
                            if ((*(int *)((a4 + 0x538))) == 1) {
                                *(unsigned int *)((a4 + 0x54C)) = 0x1;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                            } else {
                                t44 = *(int *)((a4 + 0x538));
                                if (t44 == 8) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                } else {
                                    if ((t44 != 6) && (t44 != 7)) {
                                        if (t44 == 4) {
                                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                        } else {
                                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    }
                } else {
                    if ((*(int *)((a4 + 0x538))) != 9) {
                        if ((*(int *)((a4 + 0x538))) == 1) {
                            *(unsigned int *)((a4 + 0x54C)) = 0x1;
                            *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        } else {
                            t61 = *(int *)((a4 + 0x538));
                            if (t61 == 8) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            } else {
                                if ((t61 != 6) && (t61 != 7)) {
                                    if (t61 == 4) {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            }
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    }
                }
            }
        }
        t81 = 0x4F8;
    }
    return t81;
}


int FUN_0c08512c(int a4)
{
    int t1;
    float u7;
    int t8;
    int t14;
    int t32;
    int t48;
    int t49;

    if ((*(int *)((a4 + 0x58))) == 0) {
        t1 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t1 - 1);
        if ((int)(t1 - 1) > 0) {
        } else {
            *(unsigned int *)((a4 + 0x58)) = ((*(int *)((a4 + 0x58))) + 0x1);
            *(unsigned int *)((a4 + 0x5C)) = (((*(int *)((a4 + 0x60))) >> 1) >> 1);
        }
        return 0x5C;
    }
    u7 = *(float *)(((0x4C + a4) + 0x0));
    t8 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t8 - (int)u7);
    if ((int)(t8 - (int)u7) < (int)0x80) {
        *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) - 1);
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + 0x7F);
    }
    t14 = *(int *)((a4 + 0x5C));
    *(unsigned int *)((a4 + 0x5C)) = (t14 - 1);
    if ((int)(t14 - 1) > 0) {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x3C + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x40 + a4) + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x44 + a4) + 0x0))));
    }
    FUN_0c084570((*(int *)((a4 + 0x48))), (*(int *)((a4 + 0x50))), (int)(*(float *)((a4 + 0x30))), (int)(*(float *)((a4 + 0x34))), (int)(*(float *)((a4 + 0x38))));
    t32 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t32 - 1);
    if ((int)(t32 - 1) < 0) {
        FUN_0c084570(0x80, 0x0, 0xFF, 0xFF, 0xFF);
        FUN_0c0d8c40(0xF0F0F0, 0xF0F0F0, 0xF0F0F0);
        if ((*(int *)((a4 + 0x64))) != 0) {
            FUN_0c08477e(0x0);
            mwPlaEntryErrFn(0xFFFFFFFF, 0x0);
        }
        return FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x64))) != 0) {
        *(volatile int *)((a4 + 0x64));
        *(volatile int *)((a4 + 0x60));
        t48 = FUN_0c0e5dc0();
        t49 = t48;
        if ((int)t48 > (int)0xFF) {
            t49 = 0xFF;
        }
        FUN_0c08477e(0x1);
        return mwPlaEntryErrFn(0xFFFFFFFF, (((t49 << 16) | (t49 << 8)) | t49));
    }
    return 0x64;
}

int kmfGetInternalSystemMetrics(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t33;
    int t34;
    int t38;
    int t40;

    t0 = 0x0;
    t1 = 0x4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x0)) = (*(int *)((t0 + 0xC952780)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x4)) = (*(int *)((t0 + 0xC952774)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x8)) = (*(int *)((t0 + 0xC95276C)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0xC)) = (*(int *)((t0 + 0xC952784)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x10)) = (*(int *)((t0 + 0xC952778)));
        *(unsigned int *)((((((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC952828 + t3) + 0x0)));
        t2 = (t2 + 0x1);
        t11 = *(int *)((t3 + 0xC952514));
        t3 = (t3 + 0x4);
        *(unsigned int *)((((a4 + 0x38) + t1) + 0x0)) = t11;
        t1 = (t1 - 4);
        t0 = (t0 + 0x20);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    if ((*(int *)0xC952640) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((*(int *)0xC952658) & 0x1) << 2) + 0xC952630)));
        *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((-((*(int *)0xC952658) & 0x1)) + 0x1) << 2) + 0xC952630)));
    } else {
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC952630 + (((*(int *)0xC952658) & 0x1) << 2))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((-((*(int *)0xC952658) & 0x1)) + 0x1) << 2) + 0xC952630)));
    }
    *(unsigned int *)((a4 + 0x40)) = (*(int *)0xC9525B0);
    *(unsigned int *)((a4 + 0x44)) = (*(int *)0xC9525B4);
    *(unsigned int *)((a4 + 0x48)) = (*(int *)0xC95280C);
    *(unsigned int *)((a4 + 0x4C)) = (*(int *)0xC952810);
    *(unsigned int *)((a4 + 0x50)) = (*(int *)0xC952820);
    *(unsigned int *)((a4 + 0x54)) = (*(int *)0xC952824);
    t33 = 0x0;
    t34 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x0)) = (*(int *)((t34 + 0xC95267C)));
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x14)) = (*(int *)((t34 + 0xC952680)));
        *(unsigned int *)((((0x80 + a4) + t33) + 0x0)) = (*(int *)((t33 + 0xC9527C0)));
        t38 = *(int *)(((0xC952830 + t33) + 0x0));
        t40 = ((0x94 + a4) + t33);
        t33 = (t33 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t38;
        t34 = (t34 + 0x10);
        if ((unsigned int)t33 >= (unsigned int)0x14) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xA8)) = (*(int *)0xC952850);
    *(unsigned int *)((a4 + 0xAC)) = (*(int *)0xC952848);
    return 0x0;
}

int FUN_0c043724(int a4)
{
    int t0;
    int t7;
    int t12;
    int t15;
    int t18;
    int t19;
    int t22;

    t0 = *(int *)((a4 + 0x4C8));
    if (t0 == 0) {
        return t0;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 == 3) {
                return t0;
            }
            if (t0 != 4) {
                if (t0 == 5) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return ((int (*)(int))(0xC04345A))(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 6) {
                    t7 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t7 + 0x1);
                    if ((int)(t7 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
                        return ((int (*)(int))(0xC043498))(a4);
                    }
                    return 0x3B0;
                }
                if (t0 == 7) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return FUN_0c043338(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 8) {
                    return t0;
                }
                if (t0 == 9) {
                    return t0;
                }
                if (t0 == 10) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return ((int (*)(int))(0xC043356))(a4);
                    }
                    return 0x2EC;
                }
                return t0;
            }
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                t12 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t12 + 0x1);
                if ((int)(t12 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                    return 0x3B0;
                }
                return FUN_0c043338(a4);
            }
            return 0x2EC;
        }
        FUN_0c034f6c(a4, 0x100, 0x1);
        t15 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t15 + 0x1);
        if ((int)(t15 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            FUN_0c0da2e0();
            t18 = FUN_0c0e5f1c();
            if ((t18 != 0) && ((t18 != 1) && ((t18 != 2) && (t18 != 3)))) {
                if (t18 != 4) {
                    return t18;
                }
                return ((int (*)(int))(0xC04343C))(a4);
            }
            return FUN_0c043338(a4);
        }
        return 0x3B0;
    }
    t19 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t19 + 0x1);
    if ((int)(t19 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
        return 0x3B0;
    }
    FUN_0c0da2e0();
    t22 = FUN_0c0e5f1c();
    if (t22 != 0) {
        if (t22 != 1) {
            if ((t22 != 2) && ((t22 != 3) && (t22 != 4))) {
                return t22;
            }
            return ((int (*)(int))(0xC043356))(a4);
        }
        return ((int (*)(int))(0xC04343C))(a4);
    }
    return FUN_0c043338(a4);
}
