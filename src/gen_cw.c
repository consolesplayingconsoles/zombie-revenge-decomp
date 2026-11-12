/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_GetStat(int);
int FUN_0c011c6c(void);
int FUN_0c0169da(int);
int FUN_0c016ab8(void);
int FUN_0c01cdc2(int);
int FUN_0c02a416(int);
int FUN_0c0341a6(int, int);
int FUN_0c034314(int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c05a98a(int);
int FUN_0c063098(int);
int FUN_0c07e24e(void);
int FUN_0c07f06c(int);
int FUN_0c082260(void);
int FUN_0c0831d0(int);
int FUN_0c08d75c(int, int, int);
int FUN_0c090bf0(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc720(void);
int FUN_0c0cdf02(void);
int FUN_0c0ce770(int);
int FUN_0c0ce784(int);
int FUN_0c0cead0(int);
int FUN_0c0d20b0(int);
int FUN_0c0d22d0(int);
int FUN_0c0d267a(void);
int FUN_0c0d7e90(int, int);
int FUN_0c0d7fc0(int, int, int);
int nlFreeCommonTextureAll(void);
int FUN_0c0d9250(int);
int FUN_0c0d9260(int, int, int, int);
int FUN_0c0d93f0(int);
int FUN_0c0d95a0(int, int, int, int);
int FUN_0c0d9a60(void);
int FUN_0c0da2e0(void);
int FUN_0c0da7e0(void);
int FUN_0c0da880(int);
int FUN_0c0da9a0(int, int, int, int);
int FUN_0c0daf40(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
float nlLength(int, int);
int nlSubVector3op(int, int, int);
int nlObjPutInit(void);
int FUN_0c0de260(float);
int nlObjPutSetLightDirectionF(float, float, float);
int FUN_0c0de4a0(void);
int FUN_0c0df490(void);
int FUN_0c0df660(int, int, int);
int FUN_0c0dfcee(float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e38e8(int);
int FUN_0c0e3930(int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e5740(void);
int FUN_0c0e5930(int);
int _divls(void);
int _quick_odd_mvn(void);
int FUN_0c21b228(int, int, int, int);
int crcchk(int, int, int, int);
int FUN_0c220e10(int);
int bcdtime2fad(int);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c22b7e4(int);
int FUN_0c22c7fe(int, int, int, int, int, int, int);
int FUN_0c232f8a(int, int);
int FUN_0c2339e8(int, int, int, int);
extern void _builtin_prefetch(void *);
extern float _builtin_sqrtf(float);
int buDefragDisk(int, int);
int buGetLastError(int);
int buStat(int);
extern int get_fat();
int kmfSetTimeOutCount(int, int);
int kmiABSalloc(int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiTXalloc(int, int);
int memset(int, int, int);
extern int mwRnaErrCallFunc();
int mwlRnaAlloc(void);
int search_fat_dir(int, int);
int set_fat(int, int);
int thunk_FUN_0c011cfc(int);
int vmsfb_create(int, int, int);
int vmsfb_init(void);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int FUN_0c090c68(int a4);
int FUN_0c03242c(int a4, float f4, float f5);
int FUN_0c063160(int a4, int a5, int a6, int a7);
int FUN_0c0d1f12(int a4);
int FUN_0c22b866(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int FUN_0c07e458(int a4);
int FUN_0c0e486e(int a4, int a5);
int vmsfs_c_init(int a4);
int write_dir(int a4, int a5, int a6, int a7);
void FUN_0c0168b0(void);
int FUN_0c0daf70(int);
int kmCreateContiguousTextureSurface(int a4, int a5, int a6, int a7, int a8);
int FUN_0c02ef26(int a4, int a5, int a6, int a7);
int FUN_0c0be338(int, int);
int FUN_0c0c4a3c(int a4, int a5, int a6, int a7);
int FUN_0c0e3f42(int a4);
int FUN_0c0e4d2c(int a4);
int FUN_0c015a3c(int a4);
int FUN_0c08071e(int a4);
int gdDecSubcode(int, int);
int ADXB_ExecOneAiff16(int a4, int a5, int a6, int a7);
int FUN_0c0b63e8(void);
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o2A0_float { char p[0x2A0]; float v; };
struct o2A4_float { char p[0x2A4]; float v; };
struct o2A8_float { char p[0x2A8]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3D0_short { char p[0x3D0]; short v; };
struct o3FC_uint { char p[0x3FC]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };







int FUN_0c0d1f12(int a4)
{
    int t1;
    int t3;
    int t49;
    int t53;
    int t36;
    int t29;
    int t23;
    int t15;
    int t9;
    int t41;

    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    t1 = *(int *)((a4 + 0x34));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 != 4) {
                        t3 = t1;
                        if (t1 != 5) {
                        } else {
                            t3 = (FUN_0c0d22d0(a4));
                        }
                        t9 = t3;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                        t9 = (FUN_0c0d22d0(a4));
                    }
                    t15 = t9;
                } else {
                    thunk_FUN_0c011cfc(a4);
                    t15 = (FUN_0c0da2e0());
                }
                t23 = t15;
            } else {
                (((struct o5C_uint *)(a4))->v) = 0x0;
                (((struct o60_uint *)(a4))->v) = 0x0;
                FUN_0c011c6c();
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                thunk_FUN_0c011cfc(a4);
                t23 = (FUN_0c0da2e0());
            }
            t29 = t23;
        } else {
            FUN_0c0d20b0(a4);
            t29 = (FUN_0c0da2e0());
        }
        t36 = t29;
    } else {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        FUN_0c0d20b0(a4);
        t36 = (FUN_0c0da2e0());
    }
    if (((*(int *)((a4 + 0x38))) != 0) && (t41 = *(int *)((a4 + 0x30)), (int)t41 >= (int)0x78)) {
        if ((*(int *)0xC943400) == 0) {
            t49 = 0x40000;
            if (((((struct o14_int *)0xC23A1A8)->v)) == 0) {
                t49 = 0x20000;
            }
            (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | t49);
            t53 = 0x20000;
            if (((((struct o14_int *)0xC23A1A8)->v)) == 0) {
                t53 = 0x40000;
            }
            (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) & (~t53));
        }
        if ((*(int *)0xC943400) == 1) {
            (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | 0x60000);
        }
        if ((*(int *)0xC943400) == 2) {
            (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) & 0xFFF9FFFF);
        }
        (((struct o0_uint *)0xC23EDE0)->v) = 0x4;
        (((struct o4_uint *)0xC23EDE0)->v) = 0x4;
        (((struct o18_uint *)0xC23ED44)->v) = 0x0;
        (((struct o0_uint *)0xC23ED44)->v) = 0x1;
        (((struct o4_uint *)0xC23ED44)->v) = 0x1F;
        FUN_0c0cc720();
        return FUN_0c0d267a();
    }
    return t36;
}

int FUN_0c22b866(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t12;
    register int t17;
    register int t21;
    register int t34;
    register int t39;
    register int t43;
    register int t54;
    register int t56;
    register int t57;
    register int t67;
    register int t58;
    register int t59;
    register int t70;
    register int t74;
    register int t78;
    register int t108;
    register int t114;
    register int t115;
    register int t104;
    register int t99;
    register int t92;

    if (((int)a5 >= (int)0x1) && ((int)a5 <= (int)0x2)) {
        if (a4 != 0) {
            if ((int)a5 > 0) {
                t0 = a4;
                t1 = 0x0;
                for (;;) {
                    if ((*(int *)((t0 + 0x0))) == 0) {
                        break;
                    }
                    t1 = (t1 + 0x1);
                    t0 = (t0 + 0x4);
                    if ((int)t1 >= (int)a5) {
                        t0 = ((int)stk + 0);
                        t0 = (t0 + 0x8);
                        FUN_0c22b6c8(t0);
                        t4 = mwlRnaAlloc();
                        if (t4 == 0) {
                            t0 = 0xC237E8C;
                            t5 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                        } else {
                            t1 = 0x0;
                            *(unsigned char *)((t4 + 0x3)) = a5;
                            *(unsigned char *)((t4 + 0x2)) = a5;
                            t0 = 0x0;
                            if ((int)a5 > 0) {
                                for (;;) {
                                    t1 = (t1 + 0x1);
                                    *(unsigned int *)((((t4 + 0x10) + t0) + 0x0)) = (*(int *)((a4 + t0)));
                                    t0 = (t0 + 0x4);
                                    if ((int)t1 >= (int)a5) {
                                        break;
                                    }
                                }
                                t0 = a5;
                                (((struct o40_uint *)(t4))->v) = (FUN_0c232f8a(t0, t1));
                                if (((((struct o40_int *)(t4))->v)) == 0) {
                                    t0 = 0xC237EBC;
                                    t12 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                                    t0 = ((int)stk + 0);
                                    t0 = (t0 + 0x8);
                                    FUN_0c22b6e0(t0);
                                    return 0x0;
                                }
                                t0 = t4;
                                FUN_0c22b7e4(t0);
                                t1 = (unsigned char)(*(signed char *)((t4 + 0x3)));
                                t0 = t4;
                                FUN_0c22c7fe(t0, t1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                                if ((int)a5 > 0) {
                                    t17 = 0x0;
                                    for (;;) {
                                        t1 = t17;
                                        t0 = ((((struct o40_int *)(t4))->v));
                                        FUN_0c2339e8(t0, t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                        t21 = (t17 << 2);
                                        t17 = (t17 + 0x1);
                                        *(unsigned int *)(((t21 + (t4 + 0x28)) + 0x0)) = (*(int *)(((int)stk + 0)));
                                        if ((int)t17 >= (int)a5) {
                                            break;
                                        }
                                    }
                                }
                            } else {
                                t0 = a5;
                                (((struct o40_uint *)(t4))->v) = (FUN_0c232f8a(t0, t1));
                                if (((((struct o40_int *)(t4))->v)) == 0) {
                                    t0 = 0xC237EBC;
                                    t34 = ((int (*)(int))(mwRnaErrCallFunc))(t0);
                                    t0 = ((int)stk + 0);
                                    t0 = (t0 + 0x8);
                                    FUN_0c22b6e0(t0);
                                    return 0x0;
                                }
                                t0 = t4;
                                FUN_0c22b7e4(t0);
                                t1 = (unsigned char)(*(signed char *)((t4 + 0x3)));
                                t0 = t4;
                                FUN_0c22c7fe(t0, t1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                                if ((int)a5 > 0) {
                                    t39 = 0x0;
                                    for (;;) {
                                        t1 = t39;
                                        t0 = ((((struct o40_int *)(t4))->v));
                                        FUN_0c2339e8(t0, t1, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                        t43 = (t39 << 2);
                                        t39 = (t39 + 0x1);
                                        *(unsigned int *)(((t43 + (t4 + 0x28)) + 0x0)) = (*(int *)(((int)stk + 0)));
                                        if ((int)t39 >= (int)a5) {
                                            break;
                                        }
                                    }
                                }
                            }
                            *(unsigned int *)((t4 + 0x30)) = ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((t4 + 0x8))))) << 2) << 1);
                            *(unsigned char *)((t4 + 0x0)) = 0x1;
                        }
                        t0 = ((int)stk + 0);
                        t0 = (t0 + 0x8);
                        FUN_0c22b6e0(t0);
                        return t4;
                    }
                }
                t54 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC237E60, t1, a6, a7);
                t104 = 0x0;
            } else {
                FUN_0c22b6c8((((int)stk + 0) + 0x8));
                t56 = mwlRnaAlloc();
                if (t56 == 0) {
                    t57 = ((int (*)(int))(mwRnaErrCallFunc))(0xC237E8C);
                    t99 = t56;
                } else {
                    *(unsigned char *)((t56 + 0x3)) = a5;
                    *(unsigned char *)((t56 + 0x2)) = a5;
                    t67 = 0x0;
                    if ((int)a5 > 0) {
                        t58 = 0x0;
                        t59 = 0x0;
                        for (;;) {
                            t59 = (t59 + 0x1);
                            *(unsigned int *)((((t56 + 0x10) + t58) + 0x0)) = (*(int *)((a4 + t58)));
                            t58 = (t58 + 0x4);
                            if ((int)t59 >= (int)a5) {
                                break;
                            }
                        }
                        t67 = t59;
                    }
                    (((struct o40_uint *)(t56))->v) = (FUN_0c232f8a(a5, t67));
                    if (((((struct o40_int *)(t56))->v)) == 0) {
                        t70 = ((int (*)(int))(mwRnaErrCallFunc))(0xC237EBC);
                        t92 = 0x0;
                    } else {
                        FUN_0c22b7e4(t56);
                        FUN_0c22c7fe(t56, (unsigned char)(*(signed char *)((t56 + 0x3))), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                        if ((int)a5 > 0) {
                            t74 = 0x0;
                            for (;;) {
                                FUN_0c2339e8(((((struct o40_int *)(t56))->v)), t74, ((int)stk + 0), (((int)stk + 0) + 0x4));
                                t78 = (t74 << 2);
                                t74 = (t74 + 0x1);
                                *(unsigned int *)(((t78 + (t56 + 0x28)) + 0x0)) = (*(int *)(((int)stk + 0)));
                                if ((int)t74 >= (int)a5) {
                                    break;
                                }
                            }
                        }
                        *(unsigned int *)((t56 + 0x30)) = ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((t56 + 0x8))))) << 2) << 1);
                        *(unsigned char *)((t56 + 0x0)) = 0x1;
                        t92 = t56;
                    }
                    t99 = t92;
                }
                FUN_0c22b6e0((((int)stk + 0) + 0x8));
                t104 = t99;
            }
            t115 = t104;
        } else {
            t108 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC237E60, a5, a6, a7);
            t115 = 0x0;
        }
    } else {
        t114 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC237E30, a5, a6, a7);
        t115 = 0x0;
    }
    return t115;
}

int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7)
{
    int t1;
    int t82;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
    int t30;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t83;
    int t89;
    int t88;
    int t71;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t82 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = (((unsigned char)(*(signed char *)((((t24 + 0x2) + t1) + 0x0))) << 8) | (unsigned char)(*(signed char *)((t24 + t1))));
                        t29 = *(signed char *)((((t24 + 0x3) + t1) + 0x0));
                        t30 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x4);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = (((unsigned char)t29 << 8) | (unsigned char)t30);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t40 = 0x0;
                    t41 = (0x0 + ((t18 << 1) + t14));
                    t42 = 0x0;
                    for (;;) {
                        t43 = *(signed char *)((((t40 + 0x1) + t1) + 0x0));
                        t42 = (t42 + 0x1);
                        t44 = *(signed char *)((t1 + t40));
                        t40 = (t40 + 0x2);
                        *(unsigned short *)((t41 + 0x0)) = (((unsigned char)t43 << 8) | (unsigned char)t44);
                        t41 = (t41 + 0x2);
                        if ((int)t42 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t71 = 0x0;
        }
        t82 = t71;
    }
    t83 = *(int *)((a4 + 0x4));
    t89 = t83;
    if (t83 == 2) {
        t88 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t82);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t89 = t88;
    }
    return t89;
}

int FUN_0c07e458(int a4)
{
    int t2;
    int t22;
    int t25;
    int t46;
    int t49;

    FUN_0c0dbda0((0x2AC + a4));
    t2 = *(int *)0xC23ED50;
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        *(unsigned int *)0xC247CA4 = (((((t2 << 2) + t2) << 2) << 1) + 0xC1016E0);
    } else {
        if (t2 != ((((struct o38_int *)0xC247D64)->v))) {
            *(unsigned int *)0xC247CA4 = (FUN_0c082260());
        }
    }
    (((struct o0_uint *)0xC247D64)->v) = ((((struct o0_int *)0xC247CFC)->v));
    (((struct o4_uint *)0xC247D64)->v) = ((((struct o4_int *)0xC247CFC)->v));
    t22 = ((int (*)(int))((*(int *)(((((((struct o0_int *)0xC247CFC)->v)) << 2) + 0xC101440)))))(a4);
    FUN_0c07f06c(a4);
    t25 = (((struct o0_int *)0xC247D64)->v);
    if (((((struct o0_int *)0xC247CFC)->v)) != t25) {
        if ((int)t25 <= (int)0x7) {
            (((struct oC_uint *)0xC247CFC)->v) = t25;
        }
        (((struct o4_uint *)0xC247CFC)->v) = 0x0;
        (((struct o24C_uint *)(a4))->v) = 0x0;
        (((struct o3FC_uint *)(a4))->v) = 0x0;
        memset(0xC247D1C, 0x0, 0x48);
        if ((int)((((struct o0_int *)0xC247CFC)->v)) >= (int)0xC) {
            (((struct o2A0_float *)(a4))->v) = (float)(unsigned short)((((struct o3CC_short *)(a4))->v));
            (((struct o2A4_float *)(a4))->v) = (float)(unsigned short)((((struct o3CE_short *)(a4))->v));
            (((struct o2A8_float *)(a4))->v) = (float)(unsigned short)((((struct o3D0_short *)(a4))->v));
        }
    }
    t46 = ((int (*)(int))((*(int *)(((((((struct o0_int *)0xC247CFC)->v)) << 2) + 0xC101400)))))(a4);
    t49 = ((int (*)(int))((*(int *)(((((((struct o0_int *)0xC247CFC)->v)) << 2) + 0xC101480)))))(a4);
    return FUN_0c07e24e();
}


int vmsfs_c_init(int a4)
{
    int t9;
    int t42;

    (((struct o0_uint *)0xC954330)->v) = 0x0;
    (((struct o4_uint *)0xC954330)->v) = 0x0;
    (((struct o8_uint *)0xC954330)->v) = 0x0;
    (((struct oC_uint *)0xC954330)->v) = 0x0;
    (((struct o10_uint *)0xC954330)->v) = 0x0;
    (((struct o14_uint *)0xC954330)->v) = 0x0;
    (((struct o18_uint *)0xC954330)->v) = 0x0;
    (((struct o1C_uint *)0xC954330)->v) = 0x0;
    memset(0xC954350, 0x0, 0x400);
    memset(0xC954750, 0x30, 0x400);
    memset(0xC954B50, 0x31, 0x400);
    memset(0xC954F50, 0x32, 0x400);
    memset(0xC955350, 0x33, 0x400);
    memset(0xC955750, 0x34, 0x400);
    memset(0xC955B50, 0x35, 0x400);
    memset(0xC955F50, 0x36, 0x400);
    memset(0xC956350, 0x37, 0x400);
    t9 = vmsfb_init();
    t42 = 0xFFFFFFFF;
    if (t9 == 0) {
    } else {
        if ((0x1 & a4) != 0) {
            vmsfb_create(0xC224A04, 0xC954750, 0x400);
        }
        if ((0x2 & a4) != 0) {
            vmsfb_create(0xC224A08, 0xC954B50, 0x400);
        }
        if ((0x4 & a4) != 0) {
            vmsfb_create(0xC224A0C, 0xC954F50, 0x400);
        }
        if ((0x8 & a4) != 0) {
            vmsfb_create(0xC224A10, 0xC955350, 0x400);
        }
        if ((0x10 & a4) != 0) {
            vmsfb_create(0xC224A14, 0xC955750, 0x400);
        }
        if ((0x20 & a4) != 0) {
            vmsfb_create(0xC224A18, 0xC955B50, 0x400);
        }
        if ((0x40 & a4) != 0) {
            vmsfb_create(0xC224A1C, 0xC955F50, 0x400);
        }
        if ((a4 & 0x80) != 0) {
            vmsfb_create(0xC224A74, 0xC956350, 0x400);
        }
        t42 = 0x0;
    }
    return t42;
}

int write_dir(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t12;
    int t13;
    int t17;
    int t25;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    R1008 = (*(int *)((t0 + 0x18)));
    R1012 = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(R1008)) {
            if ((R1012) != 0) {
                t12 = write_fat(a4);
                if ((int)t12 >= 0) {
                    t13 = write_sys(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0xC956768) + 0x48) + t4) + 0x0))) != 0) {
            R1004 = ((t4 << 8) << 1);
            for (;;) {
                t17 = vmsfs_write_retry(a4, t7, ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x28))) + (R1004)));
                if (t17 == 0) {
                    break;
                }
                if (t17 != 0xFFFFFF01) {
                    R1012 = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7);
                    t6 = (search_fat_dir(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t25 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, t6);
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t17;
            }
            t29 = ((int (*)(int, int))(get_fat))(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC956768) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t29;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(((int (*)(int, int, int, int))(get_fat))(a4, t7, a6, a7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}

void FUN_0c0168b0(void)
{
    int t7;
    int t12;
    int t27;
    int t37;
    int t58;
    int t63;
    int t65;
    int t67;
    int t53;

    if ((*(int *)0xC23ED98) == 0) {
        return;
    }
    if (((*(int *)0xC2497B8) & 0x8) != 0) {
        t7 = (((struct o0_int *)0xC23EDE0)->v);
        if (t7 != 6) {
            if (t7 != 7) {
                if (t7 != 0) {
                } else {
                    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
                        t12 = FUN_0c0cdf02();
                        if (t12 != 0) {
                            (((struct o0_uint *)0xC23EDE0)->v) = 0x1;
                            FUN_0c0169da(0x0);
                            FUN_0c0ce770(0x0);
                        }
                    }
                }
            } else {
                t27 = FUN_0c0cdf02();
                if (t27 != 0) {
                    (((struct o0_uint *)0xC23EDE0)->v) = 0x9;
                    FUN_0c0ce784(0x0);
                    FUN_0c016ab8();
                }
            }
        } else {
            t37 = FUN_0c0cdf02();
            if (t37 != 0) {
                (((struct o0_uint *)0xC23EDE0)->v) = 0x8;
                FUN_0c0ce784(0x0);
                FUN_0c016ab8();
            }
        }
    }
    if (((*(int *)0xC204998) == 0) && (t53 = *(int *)0xC2497B8, (t53 & 0x80000) != 0)) {
        t58 = (((struct o4_int *)0xC23EDE0)->v);
        if (t58 != 6) {
            if (t58 != 7) {
                if (t58 != 0) {
                    return;
                }
                if (((*(int *)0xC23A1A8) & 0x101) == 0) {
                    t63 = FUN_0c0cdf02();
                    if (t63 != 0) {
                        (((struct o4_uint *)0xC23EDE0)->v) = 0x1;
                        FUN_0c0169da(0x1);
                        FUN_0c0ce770(0x1);
    return;
                    }
                    return;
                }
                return;
            }
            t65 = FUN_0c0cdf02();
            if (t65 != 0) {
                (((struct o4_uint *)0xC23EDE0)->v) = 0x9;
                FUN_0c0ce784(0x1);
                FUN_0c016ab8();
    return;
            }
            return;
        }
        t67 = FUN_0c0cdf02();
        if (t67 != 0) {
            (((struct o4_uint *)0xC23EDE0)->v) = 0x8;
            FUN_0c0ce784(0x1);
            FUN_0c016ab8();
    return;
        }
        return;
    }
}


int kmCreateContiguousTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t64;
    int t55;
    int t3;
    int t4;
    int t21;
    int t23;
    int t42;
    int t25;
    int t26;
    int t28;
    int t32;
    int t49;

    t0 = FUN_0c21b228(a4, a6, a7, a8);
    t64 = t0;
    if (t0 == 0) {
        t55 = 0x4;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        } else {
            if ((int)a5 > (int)0x1) {
                if ((int)0x1 < (int)a5) {
                    t3 = (a4 + 0x28);
                    t4 = 0x1;
                    for (;;) {
                        t4 = (t4 + 0x1);
                        *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x0)));
                        *(unsigned int *)((t3 + 0x4)) = (*(int *)((a4 + 0x4)));
                        *(unsigned int *)((t3 + 0x8)) = (*(int *)((a4 + 0x8)));
                        *(unsigned int *)((t3 + 0xC)) = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)((t3 + 0x10)) = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)((t3 + 0x14)) = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)((t3 + 0x18)) = (*(int *)((a4 + 0x18)));
                        t3 = (t3 + 0x28);
                        if ((int)t4 >= (int)a5) {
                            break;
                        }
                    }
                }
            }
            t21 = kmiTXalloc(((*(int *)((a4 + 0x14))) * a5), a4);
            if (t21 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t49 = t21;
            } else {
                t23 = *(int *)((a4 + 0x1C));
                kmiFBfree(t23);
                t42 = t21;
                if ((int)a5 > 0) {
                    t25 = t23;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned int *)(((((((t26 << 2) + t26) << 2) << 1) + a4) + 0x1C)) = t25;
                        t28 = kmiABSalloc((*(int *)(((((((t26 << 2) + t26) << 2) << 1) + a4) + 0x14))), (((((t26 << 2) + t26) << 2) << 1) + a4));
                        t25 = (t25 + (((unsigned int)(*(int *)(((((((t26 << 2) + t26) << 2) << 1) + a4) + 0x14))) >> 2) << 2));
                        if (t28 == 3) {
                            break;
                        }
                        t26 = (t26 + 0x1);
                        if ((int)t26 >= (int)a5) {
                            return t28;
                        }
                    }
                    if ((int)t26 > 0) {
                        t32 = 0x0;
                        for (;;) {
                            kmiFBfree((*(int *)(((a4 + ((((t26 << 2) + t26) << 2) << 1)) + 0x1C))));
                            t32 = (t32 + 0x1);
                            if ((int)t32 >= (int)t26) {
                                break;
                            }
                        }
                    }
                    kmiDefaultInterruptHandler(0x3);
                    t42 = t28;
                }
                t49 = t42;
            }
            t55 = t49;
        }
        t64 = t55;
    }
    return t64;
}



int FUN_0c0c4a3c(int a4, int a5, int a6, int a7)
{
    int t20;
    int t23;
    int t24;

    if (a4 != 0) {
        if (a4 != 1) {
            return a4;
        }
        kmfSetTimeOutCount(0xA, 0x3);
        FUN_0c0de4a0();
        FUN_0c0de260(0.5f);
        FUN_0c0e5930(0xC209CB8);
        return nlObjPutSetLightDirectionF((-1.0f), (-1.0f), 1.0f);
    }
    FUN_0c0d9260(a4, a5, a6, a7);
    FUN_0c0d9250(0x10C000);
    FUN_0c0d93f0(0xCF60000);
    FUN_0c0d95a0(0x0, 0x1400, 0x12C00, 0x0);
    FUN_0c0d7e90(0xC990F00, 0xC9C3B80);
    FUN_0c0d7fc0(0xC2F6C58, 0x300, 0x2328);
    nlFreeCommonTextureAll();
    FUN_0c0df660(0xC313F3C, 0x300, 0x2328);
    FUN_0c0dfcee(640.0f, 480.0f);
    *(unsigned int *)0xC260CB8 = 0x0;
    nlObjPutInit();
    FUN_0c0df490();
    FUN_0c0d9a60();
    FUN_0c0e5740();
    FUN_0c0da7e0();
    FUN_0c0daf40();
    FUN_0c0da880(0x0);
    *(unsigned int *)0xC26239C = 0xC276BFC;
    t20 = 0xFFFFFFFC;
    if ((int)0xC276BFC >= 0) {
        t20 = 0x1C;
    }
    if (t20 != 0) {
        t23 = *(int *)0xC26239C;
        t24 = t23;
        if ((int)t23 < 0) {
            t24 = (t23 + 0x1F);
        }
        *(unsigned int *)0xC26239C = ((((((int)t24 >> 5) + 0x1) << 2) << 2) << 1);
    }
    return t20;
}



int FUN_0c015a3c(int a4)
{
    int t4;
    int t6;
    int t21;
    int t24;
    int t28;
    int t26;
    int t37;
    int t38;
    int t1;
    int t40;
    int t31;
    int t17;
    int stk[6];

    t4 = 0x0;
    if (((*(int *)0xC23EABC) != 6) && (t1 = *(int *)0xC23ED50, t1 == 1)) {
        t4 = 0x1;
    }
    FUN_0c0cead0(a4);
    t6 = (((struct o8_int *)0xC23EB14)->v);
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 != 2) {
                if (t6 != 9) {
                    if (t6 != 10) {
                    } else {
                        (((struct o8_uint *)0xC23EB14)->v) = 0x2;
                    }
                }
            } else {
                *(unsigned int *)0xC23A25C = 0x1;
                (((struct o8_uint *)0xC23EB14)->v) = 0x9;
            }
            t31 = t6;
        } else {
            if ((t4 != 0) && (t17 = *(int *)0xC523158, (t17 & 24) != 0)) {
                FUN_0c0c465c(0x13FA);
            }
            t21 = buGetLastError(a4);
            (((struct o10_uint *)0xC23EB14)->v) = t21;
            if ((t21 != 0) && ((t21 != 0xFFFFFF04) && ((t21 != 0xFFFFFF06) && ((t21 != 0xFFFFFF09) && ((t21 != -1) && (t21 != 0xFFFFFF0B)))))) {
                (((struct o8_uint *)0xC23EB14)->v) = 0xA;
            }
            t24 = buStat(a4);
            t28 = t24;
            if (t24 == 0) {
                t26 = FUN_0c0e2a4c(((((struct o0_int *)0xC23EB14)->v)));
                (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
                t28 = t26;
            }
            t31 = t28;
        }
        t40 = t31;
    } else {
        *(unsigned int *)0xC23A25C = 0x0;
        t37 = FUN_0c0e262a(0x80);
        (((struct o0_uint *)0xC23EB14)->v) = t37;
        t38 = buDefragDisk(a4, t37);
        (((struct o8_uint *)0xC23EB14)->v) = (((((struct o8_int *)0xC23EB14)->v)) + 0x1);
        t40 = t38;
    }
    return t40;
}

int FUN_0c08071e(int a4)
{
    int t0;
    int t3;
    int t24;
    int t31;
    int t4;
    int t6;

    t0 = *(int *)0xC23A1A8;
    if ((t0 & 16) == 0) {
        if (((((struct o4_int *)0xC247DAC)->v)) != 0) {
            t3 = t0;
            for (;;) {
                if ((int)((((struct o0_int *)0xC247DAC)->v)) < (int)(unsigned short)(*(short *)((((((struct o4_int *)0xC247DAC)->v)) + 0x0)))) {
                    break;
                }
                t6 = ((((struct o4_int *)0xC247DAC)->v));
                t3 = (*(short *)((t6 + 0x2)));
                t6 = (unsigned short)t3;
                t6 = (t6 << 2);
                t3 = t6;
                t3 = (((int (*)(int, int))((*(int *)((0xC102808 + t3)))))(a4, (*(int *)((((((struct o4_int *)0xC247DAC)->v)) + 0x4)))));
                t3 = 0xC102868;
                (((struct o8_uint *)0xC247DAC)->v) = (*(int *)(((t6) + t3)));
                if (((((struct o4_int *)0xC247DAC)->v)) != 0) {
                    t4 = ((((struct o4_int *)0xC247DAC)->v));
                    t4 = (t4 + 0x8);
                    (((struct o4_uint *)0xC247DAC)->v) = t4;
                    continue;
                }
                break;
            }
            t24 = ((int (*)(int))(((((struct o8_int *)0xC247DAC)->v))))(a4);
            (((struct o0_uint *)0xC247DAC)->v) = (((((struct o0_int *)0xC247DAC)->v)) + 0x1);
            return FUN_0c0831d0(a4);
        }
        (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
        (((struct o4_uint *)0xC247CFC)->v) = 0x0;
        *(unsigned int *)((a4 + 0x24C)) = 0x0;
        *(float *)((a4 + 0x29C)) = (nlLength((0x254 + a4), (0x278 + a4)));
        *(unsigned int *)((a4 + 0x3D4)) = (*(short *)((a4 + 0x3CC)));
        *(unsigned int *)((a4 + 0x3D8)) = (*(short *)((a4 + 0x3CE)));
        t31 = *(int *)(((((((struct o0_int *)0xC247CFC)->v)) << 2) + 0xC101400));
        return ((int (*)(int))(t31))(a4);
    }
    return t0;
}



int FUN_0c0b63e8(void)
{
    int t0;
    int t2;
    int t4;

    t0 = FUN_0c0e1830(0xC0B65CA, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CAC = t0;
    t2 = FUN_0c0e1830(0xC0B6504, 0x440);
    FUN_0c0e19d0(t2);
    *(unsigned int *)0xC247CB0 = t2;
    t4 = *(int *)0xC23ED50;
    if ((t4 != 3) && (t4 != 7)) {
        if (t4 != 5) {
        } else {
            (((struct o254_float *)(t2))->v) = (*(float *)0xC0B65EC);
            (((struct o258_float *)(t2))->v) = (*(float *)0xC0B65F0);
            (((struct o25C_float *)(t2))->v) = (*(float *)0xC0B65F4);
            (((struct o3CC_ushort *)(t2))->v) = 0xFFFFDC72;
            (((struct o3CE_ushort *)(t2))->v) = 0x0;
            (((struct o3FC_uint *)(t2))->v) = 0x1;
        }
    } else {
        (((struct o254_float *)(t2))->v) = 230.0f;
        (((struct o258_float *)(t2))->v) = 44.0f;
        (((struct o25C_float *)(t2))->v) = 80.0f;
        (((struct o3CC_ushort *)(t2))->v) = 0xFFFFE93F;
        (((struct o3CE_ushort *)(t2))->v) = 0xFFFF8001;
    }
    return (FUN_0c0e1830(0xC07E24E, 0x30));
}







