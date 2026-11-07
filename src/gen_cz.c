/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXPD_GetStat(int);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int FUN_0c015436(int, int, int, int);
int FUN_0c0154c0(int, int, int, float, float);
int FUN_0c01e822(int, int, int, int, int, float, float, float);
float FUN_0c01f1b8(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c035402(void);
int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c041f2a(int);
int FUN_0c049b80(int);
int FUN_0c053ac4(int);
int FUN_0c053c64(int, int);
int FUN_0c061a8a(int, int, float);
int FUN_0c061ccc(void);
int FUN_0c062180(int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0845c4(void);
int FUN_0c0847a2(int);
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7888(int, int, float, float, float);
int FUN_0c0b70fe(void);
int FUN_0c0bf908(int);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c4e78(int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0d80c0(int);
int nlCommonTextureClearTextureIndex(int);
int nlFreePalette(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0daf60(int, int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c20f29a(int);
extern float _builtin_sqrtf(float);
int adxt_start_sj(int, int);
int buIsFormat(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int get_fat(int, int);
int kmFreeTexture(int);
int set_fat(int, int, int);
int thunk_FUN_0c22bece(int, int);
int thunk_FUN_0c22bfa2(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int adxt_RcvrReplay(int a4, int a5);
int FUN_0c033850(int a4);
int FUN_0c062934(int a4, float f4, float f5);
int FUN_0c0a748e(int a4, int a5, int a6);
int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7);
int FUN_0c0346ca(int a4);
int FUN_0c04fe58(int a4, int a5);
int FUN_0c0c4d50(void);
int gdFsLoadDirG(int a4, int a5);
int FUN_0c02a432(int a4);
float FUN_0c0830b2(int a4);
int FUN_0c20d298(int a4, int a5);
int FUN_0c010b04(int a4, float f4, float f5, float f6, float f7);
int FUN_0c03fd20(int a4);
int FUN_0c05faf6(int a4, int a5);
int FUN_0c05f9ee(int a4, int a5);
int FUN_0c0975d0(int a4, int a5, int a6, int a7);
int FUN_0c097720(int a4, int a5, int a6, int a7);
void FUN_0c0cf6e4(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int vmsfs_xwrite1(int a4, int a5);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
int FUN_0c015fcc(int a4, int a5, int a6, int a7, float f4, float f5);
float FUN_0c036efc(int a4, int a5, int a6, int a7);
int FUN_0c0852bc(int a4);
int FUN_0c0bf940(void);
int FUN_0c0dee40(int a4);
int FUN_0c0e4226(int a4, int a5, int a6);
int FUN_0c0e4b20(int a4);
int FUN_0c04e402(int a4, int a5);


int FUN_0c033850(int a4)
{
    int t0;
    int stk[16];

    t0 = *(int *)((a4 + 0x488));
    FUN_0c035828(a4, 0x400, 0x1, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x10), 1.5f, 0.0272199996f);
    if (((*(int *)(((int)stk + 8))) & 0x8000) != 0) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
    }
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x1000) {
        *(unsigned int *)(((int)stk + 8)) = 0x1000;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = -1.5f;
    FUN_0c0db470((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x14));
    *(float *)(((((int)stk + 8) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 8) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)((a4 + 0x4B0)) = ((*(float *)((a4 + 0x4B0))) + (*(float *)(((((int)stk + 8) + 0xC) + 0x0))));
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + (*(float *)(((((int)stk + 8) + 0x8) + 0x0))));
    *(float *)((a4 + 0x4B8)) = ((*(float *)((a4 + 0x4B8))) + (*(float *)(((((int)stk + 8) + 0x4) + 0x0))));
    nlPopMatrix(0x1);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
    *(unsigned int *)((t0 + 0x200)) = 0x1;
    *(unsigned int *)((t0 + 0x1E8)) = 0x1;
    *(unsigned int *)((t0 + 0x1F4)) = 0xA;
    *(unsigned int *)((t0 + 0x204)) = 0x0;
    *(float *)((t0 + 0x1E4)) = 3.0f;
    *(unsigned int *)((t0 + 0x1FC)) = 0x2;
    *(unsigned int *)((t0 + 0x1F8)) = 0x3;
    *(unsigned int *)((t0 + 0xD8)) = 0x0;
    return 0xD8;
}


int FUN_0c0a748e(int a4, int a5, int a6)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    FUN_0c0a7888((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    nlUnitMatrix();
    nlRotateAY((-(*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
    nlRotateAZ((-(*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (short)(FUN_0c0d9dc0((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8)))));
    return (nlPopMatrix(0x1));
}






int FUN_0c02a432(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t22;
    int t23;
    int t24;
    int t35;
    int t41;
    int t37;
    int t31;
    int t28;
    int t19;
    int t18;
    int t17;
    int t27;
    int t26;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t41 = 0x4F8;
    } else {
        t1 = FUN_0c03593a(a4);
        if (t1 != 0) {
            t2 = FUN_0c02a35a(a4);
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            *(unsigned int *)((a4 + 0x538)) = 0x2;
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        } else {
                            *(unsigned int *)((a4 + 0x538)) = 0x2;
                            *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    t7 = FUN_0c0236ce(a4);
                    if (t7 != 0) {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    }
                }
                t31 = 0x4F8;
            } else {
                t11 = FUN_0c035b26(a4);
                if (t11 != 0) {
                    t12 = FUN_0c035ce4(a4);
                    if (t12 != 0) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        t19 = 0x4F8;
                    } else {
                        t13 = *(int *)((a4 + 0x538));
                        if ((t13 != 8) && ((t13 != 6) && ((t13 != 7) && (t13 != 4)))) {
                            if ((t13 != 1) && ((t13 != 3) && ((t13 != 5) && (t13 != 10)))) {
                                t14 = t13;
                                if ((t13 == 2) || (t13 == 9)) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    t14 = 0x4F8;
                                }
                                t17 = t14;
                            } else {
                                *(unsigned int *)((a4 + 0x524)) = 0x0;
                                t15 = FUN_0c0236ce(a4);
                                if (t15 == 0) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                                t17 = 0x4F8;
                            }
                            t18 = t17;
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            t18 = 0x4F8;
                        }
                        t19 = t18;
                    }
                    t28 = t19;
                } else {
                    t22 = *(int *)((a4 + 0x538));
                    if ((t22 != 8) && ((t22 != 6) && ((t22 != 7) && (t22 != 4)))) {
                        if ((t22 != 1) && ((t22 != 3) && ((t22 != 5) && (t22 != 10)))) {
                            t23 = t22;
                            if ((t22 == 2) || (t22 == 9)) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                t23 = 0x4F8;
                            }
                            t26 = t23;
                        } else {
                            *(unsigned int *)((a4 + 0x524)) = 0x0;
                            t24 = FUN_0c0236ce(a4);
                            if (t24 == 0) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                            t26 = 0x4F8;
                        }
                        t27 = t26;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                        t27 = 0x4F8;
                    }
                    t28 = t27;
                }
                t31 = t28;
            }
            t37 = t31;
        } else {
            *(unsigned int *)((a4 + 0x538)) = 0x1;
            *(unsigned int *)((a4 + 0x50C)) = 0x0;
            *(unsigned int *)((a4 + 0x524)) = 0x0;
            t35 = FUN_0c0236ce(a4);
            if (t35 == 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
            t37 = 0x4F8;
        }
        t41 = t37;
    }
    return t41;
}










int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t54;
    int t45;
    int t9;
    int t37;
    int t10;
    int t11;
    int t12;
    int t32;
    int t16;
    int t26;
    int t64;
    int t13;
    int t14;
    int t15;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t64 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t54 = 0xFFFFFF01;
        if (t5 != 0) {
            t45 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t37 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t32 = 0xFFFFFF04;
                    if (((unsigned short)t12 == 0xFFFC) && (t13 = *(int *)((a4 + 0x30)), t14 = *(int *)((((t0 * 0x148) + 0xC956768) + 0x1C)), t15 = *(int *)((t14 + 0x38)), (int)t13 < (int)t15)) {
                        t16 = vmsfs_write_retry(t11, t10, a5);
                        t26 = t16;
                        if ((int)t16 < 0) {
                        } else {
                            set_fat(t11, t10, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t10;
                            } else {
                                set_fat(t11, (*(int *)((a4 + 0x3C))), t10);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t10;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t26 = 0x0;
                        }
                        t32 = t26;
                    }
                    t37 = t32;
                }
                t45 = t37;
            }
            t54 = t45;
        }
        t64 = t54;
    }
    return t64;
}


int FUN_0c015fcc(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t6;
    int t22;
    int t16;
    int t17;
    int t31;
    int t34;
    int t35;
    int t43;
    int t49;
    int t26;
    int t18;
    int t32;
    int t40;
    int stk[9];

    t0 = *(int *)0xC23EB34;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                *(unsigned int *)0xC23EB34 = 0x9;
            }
            t26 = t0;
        } else {
            FUN_0c0154c0((*(int *)0xC23EB20), 0x1, 0x2, f4, f5);
            t6 = *(int *)0xC23EB1C;
            t22 = t6;
            if (t6 == 9) {
                if ((int)(*(int *)0xC23EB24) < 0) {
                    *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    t18 = t6;
                } else {
                    FUN_0c0e631c(0xC522A54, (*(int *)0xC23EB14), 0x3E0);
                    FUN_0c0e631c(0xC20116C, 0xC522D94, 0x20);
                    FUN_0c0b70fe();
                    FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    t16 = *(int *)0xC522D84;
                    *(unsigned int *)0xC23A1A4 = t16;
                    t17 = FUN_0c0c4e78(t16);
                    *(unsigned int *)0xC23EB34 = 0x9;
                    t18 = t17;
                }
                t22 = t18;
            }
            t26 = t22;
        }
        t49 = t26;
    } else {
        t31 = t0;
        t34 = 0xC0F40CC;
        t35 = 0x2;
        for (;;) {
            if ((int)t35 >= (int)0x6) {
                break;
            }
            t31 = (FUN_0c015436((*(int *)0xC23EB20), t35, a6, a7));
            if ((int)((*(int *)0xC23EB24)) >= 0) {
                t31 = 0xC1EF2D4;
                t32 = (*(signed char *)((t34 + 0x0)));
                *(unsigned char *)((t32 + t31)) = 0x1;
                t40 = t32;
            }
            t32 = t40;
            t35 = (t35 + 0x1);
            t34 = (t34 + 0x1);
        }
        t43 = FUN_0c015436((*(int *)0xC23EB20), 0x1, a6, a7);
        if ((int)(*(int *)0xC23EB24) < 0) {
            *(unsigned int *)0xC23EB34 = 0x2;
        } else {
            *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
        }
        t49 = t43;
    }
    return t49;
}

float FUN_0c036efc(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u8;
    float u9;
    float u16;
    float u17;
    int stk[20];

    *(unsigned int *)(((int)stk + 12)) = a7;
    u0 = *(float *)0xC037084;
    u1 = *(float *)((a5 + 0x4));
    u2 = *(float *)((a4 + 0x4));
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x8));
    u6 = *(float *)((a4 + 0x8));
    u8 = ((u2 - u1) * (u2 - u1));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u9 = u8;
    u9 = u9 + (u6 - u5) * (u6 - u5);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0)))), ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4)))), ((*(float *)((a4 + 0x8))) - u5));
    u16 = *(float *)((a5 + 0xC));
    u17 = (u0 * (*(float *)((a4 + 0xC))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((u17 * u16) / (_builtin_sqrtf(u9) * _builtin_sqrtf(u9)));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    *(float *)((a6 + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) / (*(float *)((a5 + 0xC))));
    *(float *)((a6 + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x4))) / (*(float *)((a5 + 0xC))));
    *(float *)((a6 + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x8))) / (*(float *)((a5 + 0xC))));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = _builtin_sqrtf(((((u17 * u16) / (_builtin_sqrtf(u9) * _builtin_sqrtf(u9)))) * (*(float *)((a4 + 0x10)))));
    return _builtin_sqrtf(u9);
}

int FUN_0c0852bc(int a4)
{
    int t1;

    t1 = 0xC1A4004;
    if ((*(int *)0xC23A180) != 1) {
        t1 = 0xC1A35FC;
    }
    FUN_0c08455e(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x0))) * 0.00999999978f));
    FUN_0c0844dc(((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x3))) << 8), ((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x2))) << 8), 0x0, ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x1))) * 0.00999999978f));
    FUN_0c0844dc(((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x6))) << 8), ((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x5))) << 8), 0x1, ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x4))) * 0.00999999978f));
    FUN_0c084570((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x7))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x8))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x9))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xA))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xB))));
    FUN_0c0845c4();
    FUN_0c0847a2((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x14))));
    FUN_0c0847f4(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xC))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xD))) * 0.00999999978f));
    FUN_0c0847a8(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xE))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xF))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x10))) * 0.00999999978f));
    return FUN_0c0847ce(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x11))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x12))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x13))) * 0.00999999978f));
}














int FUN_0c20d298(int a4, int a5)
{
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R7;
    int R8;
    int R9;
    int R10;
    int R12;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C20D298:;
    R0 = (R5);
    if ((R5 == 0)) goto L_C20D320;
    goto L_C20D29E;
    L_C20D29E:;
    if ((R0 == 1)) goto L_C20D328;
    goto L_C20D2A2;
    L_C20D2A2:;
    if ((R0 == 2)) goto L_C20D330;
    goto L_C20D2A6;
    L_C20D2A6:;
    if ((R0 == 3)) goto L_C20D338;
    goto L_C20D2AA;
    L_C20D2AA:;
    if ((R0 == 4)) goto L_C20D340;
    goto L_C20D2AE;
    L_C20D2AE:;
    if ((R0 != 5)) goto L_C20D2B6;
    goto L_C20D2B2;
    L_C20D2B2:;
    goto L_C20D380;
    L_C20D380:;
    R0 = (0x25C);
    R1 = (0xC20D7C8);
    goto L_C20D394;
    L_C20D394:;
    *(unsigned int *)((R4 + R0)) = R1;
    goto L_C20D39E;
    L_C20D39E:;
    return R0;
    L_C20D2B6:;
    if ((R0 != 6)) goto L_C20D2BE;
    goto L_C20D2BA;
    L_C20D2BA:;
    goto L_C20D388;
    L_C20D388:;
    R0 = (0x264);
    R2 = (0xC20D7CC);
    goto L_C20D39C;
    L_C20D39C:;
    *(unsigned int *)((R4 + R0)) = R2;
    goto L_C20D39E;
    L_C20D2BE:;
    if ((R0 != 7)) goto L_C20D2C6;
    goto L_C20D2C2;
    L_C20D2C2:;
    goto L_C20D390;
    L_C20D390:;
    R0 = (0x26C);
    R1 = (0xC20D7D0);
    goto L_C20D394;
    L_C20D2C6:;
    if ((R0 != 8)) goto L_C20D2CE;
    goto L_C20D2CA;
    L_C20D2CA:;
    goto L_C20D398;
    L_C20D398:;
    R0 = (0x274);
    R2 = (0xC20D7D4);
    goto L_C20D39C;
    L_C20D2CE:;
    goto L_C20D39E;
    L_C20D340:;
    R0 = (0x254);
    R2 = (0xC20D7C4);
    goto L_C20D39C;
    L_C20D338:;
    R0 = (0x24C);
    R1 = (0xC20D7C0);
    goto L_C20D394;
    L_C20D330:;
    R0 = (0x244);
    R2 = (0xC20D79A);
    goto L_C20D39C;
    L_C20D328:;
    R0 = (0x23C);
    R1 = (0xC20D796);
    goto L_C20D394;
    L_C20D320:;
    *(unsigned int *)((R4 + 0x234)) = 0xC20D792;
    R0 = (0x234);
    goto L_C20D39E;
}


int FUN_0c0e4b20(int a4)
{
    int t8;
    int t10;
    int t16;
    int t25;
    int t27;
    int t33;
    int t12;
    int t13;
    int t29;
    int t30;
    int stk[4];

    *(unsigned short *)(((((int)stk + 4) + 0xA) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = 0x0;
    if ((*(short *)(((int)stk + 14))) == 1) {
        *(unsigned short *)(((int)stk + 6)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 6))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 4))) == 0) {
                    return 0xFFFFFFFF;
                }
                t8 = *(short *)(((int)stk + 6));
                *(unsigned char *)(((unsigned char)((((t8 << 1) + t8) << 2) << 1) + 0xC94C848)) = 0x1;
                return (*(short *)(((int)stk + 6)));
            }
            t10 = *(short *)(((int)stk + 6));
            if (((*(signed char *)(((unsigned char)((((t10 << 1) + t10) << 2) << 1) + 0xC94C848))) == 0) && (t12 = *(short *)(((int)stk + 6)), t13 = *(int *)(((unsigned char)((((t12 << 1) + t12) << 2) << 1) + 0xC94C850)), t13 == 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 6)) = ((*(short *)(((int)stk + 6))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 4)) = 0x1;
        if ((*(short *)(((int)stk + 4))) == 0) {
            return 0xFFFFFFFF;
        }
        t16 = *(short *)(((int)stk + 6));
        *(unsigned char *)(((unsigned char)((((t16 << 1) + t16) << 2) << 1) + 0xC94C848)) = 0x1;
        return (*(short *)(((int)stk + 6)));
    }
    if ((*(short *)(((int)stk + 14))) == 2) {
        *(unsigned short *)(((int)stk + 6)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 6))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 4))) == 0) {
                    return 0xFFFFFFFF;
                }
                t25 = *(short *)(((int)stk + 6));
                *(unsigned char *)(((unsigned char)((((t25 << 1) + t25) << 2) << 1) + 0xC94C848)) = 0x1;
                return (*(short *)(((int)stk + 6)));
            }
            t27 = *(short *)(((int)stk + 6));
            if (((*(signed char *)(((unsigned char)((((t27 << 1) + t27) << 2) << 1) + 0xC94C848))) == 0) && (t29 = *(short *)(((int)stk + 6)), t30 = *(int *)(((unsigned char)((((t29 << 1) + t29) << 2) << 1) + 0xC94C850)), t30 != 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 6)) = ((*(short *)(((int)stk + 6))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 4)) = 0x1;
        if ((*(short *)(((int)stk + 4))) == 0) {
            return 0xFFFFFFFF;
        }
        t33 = *(short *)(((int)stk + 6));
        *(unsigned char *)(((unsigned char)((((t33 << 1) + t33) << 2) << 1) + 0xC94C848)) = 0x1;
        return (*(short *)(((int)stk + 6)));
    }
    return 0xFFFFFFFF;
}


int FUN_0c0346ca(int a4)
{
    int t1;
    float u3;
    int t6;
    int t9;
    int t13;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t25;
    int t31;
    int stk[19];

    t1 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 56)) = (*(float *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC205CB8) + 0x0)));
    u3 = *(float *)0xC034850;
    *(float *)(((int)stk + 60)) = ((*(float *)((a4 + 0x4))) + u3);
    t6 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 64)) = (*(float *)((0x8 + (((((t6 << 1) + t6) << 2) << 1) + 0xC205CB8))));
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 44)) = (*(float *)((0xC + (((((t9 << 1) + t9) << 2) << 1) + 0xC205CB8))));
    *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x4))) + u3);
    t13 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 52)) = (*(float *)(((0xC205CB8 + ((((t13 << 1) + t13) << 2) << 1)) + 0x14)));
    u15 = *(float *)((a4 + 0x0));
    u16 = *(float *)(((int)stk + 56));
    u17 = *(float *)(((int)stk + 64));
    u18 = *(float *)((a4 + 0x8));
    u19 = *(float *)((a4 + 0x0));
    u20 = ((u18 - u17) * (u18 - u17));
    u20 = u20 + (u15 - u16) * (u15 - u16);
    u21 = *(float *)(((int)stk + 44));
    u22 = *(float *)(((int)stk + 52));
    u23 = *(float *)((a4 + 0x8));
    u24 = ((u23 - u22) * (u23 - u22));
    u24 = u24 + (u19 - u21) * (u19 - u21);
    t25 = (((int)stk + 8) + 0x24);
    if (_builtin_sqrtf(u24) > _builtin_sqrtf(u20)) {
        t25 = (((int)stk + 8) + 0x30);
    }
    *(float *)(((int)stk + 32)) = ((*(float *)((a4 + 0x0))) - (*(float *)((t25 + 0x0))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = ((*(float *)((a4 + 0x8))) - (*(float *)((t25 + 0x8))));
    t31 = FUN_0c01e822(t25, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 0x8, _builtin_sqrtf(u20), _builtin_sqrtf(u24), (u23 - u22));
    return (((t31 == 0)) ? 1 : 0);
}



int FUN_0c0e4226(int a4, int a5, int a6)
{
    int t1;
    int t39;
    int t41;
    int t44;
    int t32;
    int t24;
    int t16;
    int t9;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        t1 = 0xFFFFFFFE;
                        if (a5 != 0x50A5) {
                        } else {
                            t1 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
                        }
                        t9 = t1;
                    } else {
                        t9 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
                    }
                    t16 = t9;
                } else {
                    t16 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0x7F) << 16))));
                }
                t24 = t16;
            } else {
                t24 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
            t32 = t24;
        } else {
            t32 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1)))));
        }
        t44 = t32;
    } else {
        t39 = FUN_0c0e4428(((((a6 & 0x7F00) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
        t41 = t39;
        if (t39 != 0) {
        } else {
            t41 = (FUN_0c0e4428(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5)));
        }
        t44 = t41;
    }
    return t44;
}

