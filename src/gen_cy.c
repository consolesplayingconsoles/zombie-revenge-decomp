/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c021074(int);
int FUN_0c032f3e(int);
int FUN_0c032f8a(int);
int FUN_0c033028(int);
int FUN_0c03310c(int);
int FUN_0c03338c(int);
int FUN_0c033d60(int, int, int, float, float);
int FUN_0c0349ea(int, int, int);
int FUN_0c042b60(int, int, int);
int FUN_0c045acc(int, int, int);
int FUN_0c0519f0(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c08448c(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c086bda(int, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0bb1a8(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da300(void);
float FUN_0c0da410(int);
float FUN_0c0da6a0(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db0e0(int, ...);
int FUN_0c0db4d0(int, int);
int FUN_0c0db640(int);
int FUN_0c0dc100(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e36c4(int, int);
int FUN_0c0e3792(int, int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e61d4(void);
int FUN_0c2212c0(void);
int FUN_0c22ba6a(void);
int FUN_0c22bb3e(int);
int FUN_0c22bcdc(int);
int FUN_0c22bd70(int);
int FUN_0c22bece(int, int);
int FUN_0c22bfa2(int, int);
int FUN_0c22c05a(int);
int FUN_0c22c262(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_fat_xross(int, int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsReopenHn(int, int, int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int mwRnaGetPlaySw(int);
extern int mwRnaGetTransSw();
int mwlRnaAddFlshPos(int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_fat(int, int);
int search_fat_free_xross(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int gdFsDaReleaseG(int a4);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8);
int vmsfs_fwrite1(int a4, int a5);
int FUN_0c0c5a4c(int a4);
int vmsfs_getinfo(int a4, int a5);
int FUN_0c0350a4(int a4, int a5, int a6, int a7);
int FUN_0c036470(int a4);
int FUN_0c06df78(int a4);
int FUN_0c0e3c22(int a4, int a5);
int FUN_0c0b3ef8(int a4, int a5, int a6, int a7);
int kmiFinalizeRender(int a4, int a5, int a6);
int vmsfs_diskfree(int a4, int a5);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsettime(int a4, int a5, int a6);
int FUN_0c055dfa(int a4);
float FUN_0c08640a(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c096094(int a4, int a5);
int FUN_0c0961f8(int a4, int a5);
int FUN_0c0333f0(int a4, int a5, int a6, int a7);
int FUN_0c045ca2(int a4);
int FUN_0c0a72a0(float f4, float f5, float f6, float f7, float f8, float f9);
int vmsfs_fopen(int a4, int a5, int a6);
int FUN_0c22c3b8(int a4, int a5, int a6, int a7);

int gdFsDaReleaseG(int a4)
{
    int t2;
    int t55;
    int t3;
    int t4;
    int t11;
    int t22;
    int t23;
    int t25;
    int t32;
    int t37;
    int t42;
    int t47;
    int t53;
    int t6;
    int t7;
    int t13;
    int t51;
    int t30;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
    t55 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC2393C4;
        if (((*(short *)((t4 + 0x3A))) != 0) && (t6 = *(int *)0xC94D9D8, t7 = *(int *)0xC94D9DC, t6 != t7)) {
            *(unsigned short *)((t4 + 0x3A)) = 0x0;
        }
        t11 = *(int *)0xC2393C4;
        if (((*(short *)((t11 + 0x3A))) != 0) && (t13 = *(int *)((t11 + 0x2C)), (int)t13 >= (int)0x10001)) {
            t22 = *(int *)0xC94D9D0;
            t23 = *(int *)0xC94D9D4;
            t25 = *(int *)0xC94D9CC;
            if ((*(int *)0xC94D9C8) == 1) {
                t30 = (*(int *)(((*(int *)((t11 + 0xC))) + 0x28)));
            } else {
                t30 = (*(int *)(((*(int *)((t11 + 0xC))) + 0x2C)));
            }
            t32 = ((int (*)(int, int, int))(t30))(t25, t22, t23);
            if (t32 != 0) {
                *(unsigned int *)((t2 + 0x3C)) = t32;
                *(unsigned short *)((t2 + 0x50)) = 0x4;
                *(unsigned int *)((t2 + 0x4)) = 0xC94D9D8;
                *(unsigned short *)((t2 + 0x48)) = 0x8;
                *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
                t37 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x40)))))();
            }
            t51 = t32;
        } else {
            t42 = ((int (*)(int))((*(int *)(((*(int *)((t11 + 0xC))) + 0x34)))))(a4);
            if (t42 != 0) {
                *(unsigned int *)((t2 + 0x3C)) = t42;
                *(unsigned short *)((t2 + 0x50)) = 0x4;
                *(unsigned short *)((t2 + 0x48)) = 0x6;
                *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
                t47 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x40)))))();
            }
            t51 = t42;
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t53 = 0x0;
        if (t51 == 0) {
            t53 = 0xFFFFFFF3;
        }
        t55 = t53;
    }
    return t55;
}

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;
    int t1;

    t0 = *(int *)0xC2393C4;
    if ((t0 != 0) && (t1 = *(short *)((t0 + 0x38)), t1 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t2 = FUN_0c2212c0();
    t4 = ((int (*)(void))((*(int *)((t2 + 0x0)))))();
    t5 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC2393C4 = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC2393C4) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC2393C4) + 0xC)) = t2;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0xC2393C4) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x3C)) = a8;
    t17 = 0x3A;
    t18 = ((*(int *)0xC2393C4) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)0xC2393C4) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)0xC2393C4);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0xC2393C4;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0xC2393C4;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0xC20F2C4))();
}

int FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    float u4;
    int t5;
    float u10;
    int t11;
    float u15;
    int t17;
    float u22;
    float u23;
    float u26;
    float u28;
    float u30;
    int stk[31];

    stk[22] = a8;
    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)(((int)stk + 4)) = t0;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x4);
    u4 = (float)t0;
    u4 = u4 + (FUN_0c0da300()) * (float)((*(short *)(((a4 + 0x4) + 0x0))) - (*(short *)(((int)stk + 4))));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = u4;
    t5 = *(short *)((a4 + 0x2));
    *(unsigned short *)(((int)stk + 4)) = t5;
    u10 = (float)t5;
    u10 = u10 + (FUN_0c0da300()) * (float)((*(short *)(((*(int *)(((int)stk + 12))) + 0x2))) - (*(short *)(((int)stk + 4))));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = u10;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x8);
    t11 = *(short *)(((a4 + 0x8) + 0x0));
    *(unsigned short *)(((int)stk + 8)) = t11;
    *(unsigned int *)(((int)stk + 4)) = (a4 + 0xC);
    u15 = (float)t11;
    u15 = u15 + (FUN_0c0da300()) * (float)((*(short *)(((a4 + 0xC) + 0x0))) - (*(short *)(((int)stk + 8))));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = u15;
    t17 = *(short *)(((*(int *)(((int)stk + 12))) + 0x2));
    *(unsigned short *)(((int)stk + 8)) = t17;
    u22 = (float)t17;
    u22 = u22 + (FUN_0c0da300()) * (float)((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))) - (*(short *)(((int)stk + 8))));
    *(float *)(((((int)stk + 4) + 0x24) + 0x4)) = u22;
    u23 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    u26 = u23;
    u26 = u26 + (FUN_0c0da300()) * ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) - u23);
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = u26;
    u28 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
    u30 = u28;
    u30 = u30 + (FUN_0c0da300()) * ((*(float *)(((((int)stk + 4) + 0x24) + 0x4))) - u28);
    *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = u30;
    *(float *)(((int)stk + 28)) = (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(float *)(((int)stk + 32)) = (*(float *)0xC0CF114);
    *(float *)(((int)stk + 36)) = (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)));
    *(float *)(((int)stk + 32)) = (FUN_0c01f1b8((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC)));
    *(volatile int *)(((((int)stk + 4) + 0x54) + 0x0));
    return (FUN_0c0e61d4());
}

int vmsfs_fwrite1(int a4, int a5)
{
    int t1;
    int t5;
    int t73;
    int t62;
    int t9;
    int t52;
    int t10;
    int t11;
    int t43;
    int t12;
    int t23;
    int t13;
    int t16;
    int t84;
    int t36;

    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t84 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t73 = 0xFFFFFF01;
        if (t5 != 0) {
            t62 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t52 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x28));
                    t11 = search_fat_free_xross(t10);
                    t43 = 0xFFFFFF04;
                    if ((int)t11 >= 0) {
                        t12 = vmsfs_write_retry(t10, t11, a5);
                        if ((int)t12 < 0) {
                            t23 = t12;
                            if (t12 == 0xFFFFFF01) {
                            } else {
                                t13 = t11;
                                for (;;) {
                                    set_fat(t10, t13, 0xFFFF);
                                    t13 = (search_fat(t10, 0xFFFC));
                                    if ((int)t13 < 0) {
                                        break;
                                    }
                                    t16 = vmsfs_write_retry(t10, t13, a5);
                                    if (t16 == 0) {
                                        set_fat(t10, t13, 0xFFFA);
                                        if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t13;
                                            *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                            return 0x0;
                                        }
                                        set_fat(t10, (*(int *)((a4 + 0x3C))), t13);
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                        return 0x0;
                                    }
                                }
                                t23 = 0xFFFFFF04;
                            }
                            t36 = t23;
                        } else {
                            set_fat(t10, t11, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t11;
                            } else {
                                set_fat(t10, (*(int *)((a4 + 0x3C))), t11);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t11;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t36 = 0x0;
                        }
                        t43 = t36;
                    }
                    t52 = t43;
                }
                t62 = t52;
            }
            t73 = t62;
        }
        t84 = t73;
    }
    return t84;
}

int FUN_0c0c5a4c(int a4)
{
    int t0;
    int t1;
    int t9;

    t0 = a4;
    for (;;) {
        t1 = FUN_0c0e1830(0xC0C5B90, 0x80);
        FUN_0c0e19d0(t1);
        *(unsigned char *)(((0x75 + t1) + 0x0)) = (*(signed char *)((t0 + 0xC)));
        *(unsigned char *)(((0x76 + t1) + 0x0)) = (*(signed char *)((t0 + 0xD)));
        *(unsigned char *)(((0x77 + t1) + 0x0)) = (*(signed char *)((t0 + 0xE)));
        *(unsigned short *)(((0x7A + t1) + 0x0)) = (*(short *)((t0 + 0x8)));
        *(unsigned short *)(((0x7C + t1) + 0x0)) = (*(short *)((t0 + 0xA)));
        *(unsigned int *)((t1 + 0x68)) = (*(int *)((t0 + 0x0)));
        t9 = *(signed char *)((t0 + 0xF));
        *(unsigned short *)(((0x78 + t1) + 0x0)) = (unsigned char)t9;
        if ((unsigned short)(unsigned char)t9 != 0) {
            *(unsigned int *)((t1 + 0x70)) = (*(int *)((t0 + 0x4)));
        } else {
            *(unsigned int *)((t1 + 0x6C)) = (*(int *)((t0 + 0x4)));
        }
        if ((*(int *)0xC23A1A0) == 0) {
            *(unsigned int *)((t1 + 0x30)) = (unsigned short)(*(short *)(((*(int *)((t0 + 0x0))) + 0x0)));
            *(float *)((t1 + 0x34)) = 594.0f;
            *(float *)((t1 + 0x38)) = 240.0f;
            *(float *)((t1 + 0x40)) = 1.0f;
            *(float *)((t1 + 0x44)) = 1.0f;
            *(unsigned int *)((t1 + 0x64)) = 0xA;
        } else {
            *(unsigned int *)((t1 + 0x30)) = (unsigned short)(*(short *)(((*(int *)((t0 + 0x0))) + 0x2)));
            *(unsigned int *)((t1 + 0x68)) = ((*(int *)((t1 + 0x68))) + 0x6);
            *(float *)((t1 + 0x34)) = 320.0f;
            *(float *)((t1 + 0x38)) = 400.0f;
            *(float *)((t1 + 0x40)) = 1.29999995f;
            *(float *)((t1 + 0x44)) = 1.29999995f;
            *(unsigned int *)((t1 + 0x64)) = 0x100A;
        }
        t0 = (t0 + 0x10);
        *(float *)((t1 + 0x3C)) = 0.00139999995f;
        *(float *)((t1 + 0x50)) = 1.0f;
        *(float *)((t1 + 0x54)) = 1.0f;
        *(float *)((t1 + 0x5C)) = 1.0f;
        *(unsigned int *)((t1 + 0x60)) = 0xFFFFFFFF;
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
    }
    return 0x60;
}

int vmsfs_getinfo(int a4, int a5)
{
    int t48;
    int t1;
    int t3;
    int t38;
    int t6;
    int t33;
    int t7;
    int t11;
    int t15;
    int t16;
    int t17;
    int t43;
    int t4;
    int t5;
    int t9;
    int t10;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = *(signed char *)(((t4 + 0xC956768) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t33 = 0xFFFFFF03;
                if ((int)t6 >= 0) {
                    t7 = t6;
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t10 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20)));
                        t10 = (t10 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t10 + t7))));
                    }
                    t15 = t10;
                    t16 = (((int)stk + 4) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 4) + 0x4));
                    *(unsigned short *)((a5 + 0x20)) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0))) + 0x1);
                    *(unsigned short *)((a5 + 0x22)) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)));
                    *(unsigned short *)(((0x26 + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x0));
                    *(unsigned short *)((a5 + 0x24)) = (*(short *)((a5 + 0x26)));
                    *(unsigned short *)((a5 + 0x28)) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x38)));
                    *(unsigned short *)(((0x2A + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x1));
                    *(unsigned short *)((a5 + 0x2C)) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x2C))) + 0x1);
                    *(unsigned short *)((a5 + 0x2E)) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
}

int FUN_0c0350a4(int a4, int a5, int a6, int a7)
{
    int t12;
    int t16;
    int t28;
    int t38;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0350A4:;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 24)) = R6;
    *(unsigned int *)(((int)stk + 16)) = R7;
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C0350F2;
    goto L_C0350BE;
    L_C0350BE:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C035100;
    goto L_C0350C6;
    L_C0350C6:;
    R0 = (0x510);
    R4 = (0xC246FF0);
    if (((*(int *)(((((*(int *)((R14 + 0x510))) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C0350E2;
    goto L_C0350DA;
    L_C0350DA:;
    *(unsigned int *)((R14 + 0x50C)) = 0x0;
    goto L_C035100;
    L_C035100:;
    R0 = (0x0);
    goto L_C0351B0;
    L_C0351B0:;
    return R0;
    L_C0350E2:;
    t12 = *(int *)(((((*(int *)((R14 + R0))) << 2) + R4) + 0x0));
    R13 = ((t12 + 0x30));
    R4 = (t12);
    goto L_C035104;
    L_C035104:;
    t16 = (FUN_0c0349ea(R14, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4))) == 0;
    R12 = (0x8000);
    if (t16) goto L_C035150;
    goto L_C035116;
    L_C035116:;
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((R14 + 0x30))) - (*(float *)((R13 + 0x0)))), ((*(float *)((R14 + 0x38))) - (*(float *)((R13 + 0x8)))));
    goto L_C035170;
    L_C035170:;
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_C0351A2;
    goto L_C035176;
    L_C035176:;
    R0 = (0x4D8);
    if (((int)(*(int *)((R14 + 0x4D8))) <= (int)R12)) goto L_C035192;
    goto L_C03517E;
    L_C03517E:;
    t28 = *(int *)((R14 + R0));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((((int)((unsigned int)((int)((unsigned int)t28 + (unsigned int)0x0)) + ((((int)0x0 > (int)t28)) ? 1u : 0u))) >> 1) + R12));
    goto L_C0351A2;
    L_C0351A2:;
    FUN_0c0546fe(R14, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
    R0 = (0x1);
    goto L_C0351B0;
    L_C035192:;
    t38 = *(int *)((R14 + R0));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (((int)((unsigned int)((int)((unsigned int)t38 + (unsigned int)0x0)) + ((((int)0x0 > (int)t38)) ? 1u : 0u))) >> 1));
    goto L_C0351A2;
    L_C035150:;
    FUN_0c042b60(R14, (((int)stk + 4) + 0x18), (*(int *)(((int)stk + 8))));
    FUN_0c0a68ec(((int)stk + 4), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 36))));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + R12);
    goto L_C035170;
    L_C0350F2:;
    if (((*(int *)((R14 + 0x514))) == 0)) goto L_C035100;
    goto L_C0350FA;
    L_C0350FA:;
    R13 = ((0x518 + R14));
    goto L_C035104;
}

int FUN_0c036470(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t35;
    int stk[13];

    t0 = *(int *)((a4 + 0x30));
    *(unsigned short *)(((int)stk + 4)) = 0x0;
    *(unsigned short *)(((int)stk + 6)) = (*(short *)((a4 + 0x48)));
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t2 = FUN_0c033d60(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), ((int)stk + 4), 0x0, 10.0f, 0.199999988f);
    t3 = *(int *)((a4 + 0x38));
    if (t3 != 0) {
        t4 = 0xC0365A4;
        t5 = t3;
        t6 = 0x0;
        t7 = 0x0;
        t8 = 0x0;
        t9 = 0x0;
        for (;;) {
            if ((*(float *)((((0xD0 + a4) + (t9 << 2)) + 0x0))) > 0.0f) {
                t4 = a4;
                t4 = (t4 + 0x50);
                t4 = (*(int *)(((t9 << 2) + t4)));
                *(unsigned short *)(((int)stk + 6)) = t4;
                if ((*(float *)((((0xF0 + a4) + (t9 << 2)) + 0x0))) == 4.0f) {
                    t5 = 0x110;
                    t5 = (t5 + a4);
                    t5 = (t5 + (t9 << 2));
                    if ((*(int *)((t5 + 0x0))) == 0) {
                        t5 = 0xC033D60;
                        t4 = (FUN_0c033d60(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), ((int)stk + 4), 0x3, (*(float *)((((0xD0 + a4) + (t9 << 2)) + 0x0))), 0.099999994f));
                    } else {
                        t4 = 0x110;
                        t4 = (t4 + a4);
                        t4 = (*(int *)(((t9 << 2) + t4)));
                        if (t4 == 1) {
                            t5 = 0xD0;
                            t5 = (t5 + a4);
                            t5 = (t5 + t8);
                            t4 = (FUN_0c033d60(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), ((int)stk + 4), 0x5, (*(float *)((t5 + 0x0))), 0.099999994f));
                        } else {
                            t4 = (FUN_0c033d60(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), ((int)stk + 4), 0x2, (*(float *)((((0xD0 + a4) + t7) + 0x0))), 0.099999994f));
                        }
                    }
                } else {
                    t5 = 0xD0;
                    t5 = (t5 + a4);
                    t5 = (t5 + t6);
                    t4 = (FUN_0c033d60(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), ((int)stk + 4), 0x1, (*(float *)((t5 + 0x0))), 0.099999994f));
                }
            }
            t5 = 0x8;
            t9 = (t9 + 0x1);
            t6 = (t6 + 0x4);
            t7 = (t7 + 0x4);
            t8 = (t8 + 0x4);
            if ((int)t9 >= (int)t5) {
                break;
            }
        }
        t35 = t4;
    } else {
        t35 = t2;
    }
    return t35;
}

int FUN_0c06df78(int a4)
{
    int t0;
    float u10;
    float u14;
    float u18;
    int stk[26];

    t0 = *(int *)((a4 + 0x48));
    *(unsigned short *)((a4 + 0x96)) = ((*(short *)((a4 + 0x96))) + (*(short *)(((0x9C + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x98)) = ((*(short *)((a4 + 0x98))) + (*(short *)(((0x9E + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x9A)) = ((*(short *)((a4 + 0x9A))) + (*(short *)(((0xA0 + a4) + 0x0))));
    u10 = (float)(*(short *)((a4 + 0x90)));
    u10 = u10 + 2048.0f * (FUN_0c0da410((*(short *)((a4 + 0x96)))));
    *(unsigned short *)((a4 + 0x3C)) = (int)u10;
    u14 = (float)(*(short *)((a4 + 0x92)));
    u14 = u14 + 2048.0f * (FUN_0c0da410((*(short *)((a4 + 0x98)))));
    *(unsigned short *)((a4 + 0x3E)) = (int)u14;
    u18 = (float)(*(short *)((a4 + 0x94)));
    u18 = u18 + 2048.0f * (FUN_0c0da410((*(short *)((a4 + 0x9A)))));
    *(unsigned short *)((a4 + 0x40)) = (int)u18;
    FUN_0c0dccc0();
    FUN_0c0dc890((*(short *)((a4 + 0x3E))));
    FUN_0c0dcca0(t0);
    FUN_0c0dc950((*(short *)((a4 + 0x40))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x3C))));
    FUN_0c0dcc80(t0);
    FUN_0c0db640((((int)stk + 4) + 0xC));
    FUN_0c0db4d0(t0, ((int)stk + 4));
    *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x30)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((*(int *)((a4 + 0x4C))) + 0x4))) - (*(float *)(((int)stk + 8))));
    *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x38)));
    FUN_0c0dccc0();
    FUN_0c0dcca0(((int)stk + 4));
    return (FUN_0c0dc100((((int)stk + 4) + 0xC)));
}

int FUN_0c0e3c22(int a4, int a5)
{
    int t2;
    int t58;
    int t3;
    int t10;
    int t11;
    int t12;
    int t15;
    int t20;
    int t34;
    int t21;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t52;
    int stk[12];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t2 = FUN_0c0e36c4((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t58 = t2;
    if (t2 == 0) {
        t3 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t3 + 0x8)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)((t3 + 0x4)));
        *(unsigned int *)(((int)stk + 20)) = (FUN_0c0e3792((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), ((int)stk + 4)));
        t10 = 0x0;
        for (;;) {
            if ((int)t10 >= (int)0x400000) {
                return 0xFFFFFF00;
            }
            t11 = FUN_0c0e4428(0x18A0);
            if (t11 == 0) {
                break;
            }
            t10 = (t10 + 0x1);
        }
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)0x400000) {
                return 0xFFFFFF00;
            }
            if ((*(int *)0xA08000B4) != 0) {
                break;
            }
            t12 = (t12 + 0x1);
        }
        t15 = *(int *)(((int)stk + 4));
        if (t15 != 0) {
            t20 = FUN_0c0e3630((*(int *)(((int)stk + 20))), ((*(int *)(((int)stk + 20))) + (*(int *)(((int)stk + 16)))), (*(int *)(((int)stk + 4))));
            *(unsigned int *)(((int)stk + 8)) = t20;
            t34 = t20;
            if (t20 == 0) {
                for (;;) {
                    t21 = FUN_0c0e36ac();
                    if (t21 == 0) {
                        break;
                    }
                }
                t25 = (*(int *)(((int)stk + 20)));
                t26 = (*(int *)(((int)stk + 28)));
                t27 = 0x0;
                for (;;) {
                    if ((unsigned int)t27 >= (unsigned int)((unsigned int)(*(int *)(((int)stk + 16))) >> 2)) {
                        break;
                    }
                    t29 = t25;
                    t25 = (t25 + 0x4);
                    t30 = *(int *)((t26 + 0x0));
                    t26 = (t26 + 0x4);
                    *(unsigned int *)((t29 + 0x0)) = (t30);
                    t27 = (t27 + 0x1);
                }
                *(unsigned int *)0xA08000B0 = 0x1;
                t31 = 0x0;
                for (;;) {
                    if ((int)t31 >= (int)0x400000) {
                        return 0xFFFFFF00;
                    }
                    if ((*(int *)0xA08000B4) == 0) {
                        break;
                    }
                    t31 = (t31 + 0x1);
                }
                *(unsigned int *)0xA08000B0 = 0x0;
                t34 = 0x0;
            }
            t52 = t34;
        } else {
            t42 = t15;
            t43 = (*(int *)(((int)stk + 20)));
            t44 = (*(int *)(((int)stk + 28)));
            t45 = 0x0;
            for (;;) {
                if ((unsigned int)t45 >= (unsigned int)((unsigned int)(*(int *)(((int)stk + 16))) >> 2)) {
                    break;
                }
                t47 = t43;
                t43 = (t43 + 0x4);
                t48 = *(int *)((t44 + 0x0));
                t44 = (t44 + 0x4);
                t42 = t48;
                *(unsigned int *)((t47 + 0x0)) = t42;
                t45 = (t45 + 0x1);
            }
            *(unsigned int *)0xA08000B0 = 0x1;
            t49 = 0x0;
            for (;;) {
                if ((int)t49 >= (int)0x400000) {
                    return 0xFFFFFF00;
                }
                if ((*(int *)0xA08000B4) == 0) {
                    break;
                }
                t49 = (t49 + 0x1);
            }
            *(unsigned int *)0xA08000B0 = 0x0;
            t52 = 0x0;
        }
        t58 = t52;
    }
    return t58;
}

int FUN_0c0b3ef8(int a4, int a5, int a6, int a7)
{
    int t16;
    int t17;

    if (((*(int *)0xC23ED5C) & 4) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c08448c(0x1);
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70(1.0f, 0.0f, 0.0f);
    FUN_0c0c465c((unsigned short)(*(short *)0xC203F70));
    FUN_0c0c465c((unsigned short)(*(short *)0xC203F72));
    FUN_0c0c465c((unsigned short)(*(short *)0xC203F74));
    FUN_0c0dc4c0(0x1);
    t16 = *(int *)((a4 + 0xA4));
    *(unsigned int *)((a4 + 0xA4)) = (t16 + 0x1);
    if ((t16 + 0x1) == 60) {
        *(unsigned int *)((a4 + 0xA4)) = 0x0;
        t17 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t17 + 0x1);
        if ((t17 + 0x1) == 60) {
            *(unsigned int *)((a4 + 0xA0)) = 0x0;
        }
    }
    *(volatile int *)((a4 + 0xA0));
    *(unsigned short *)(((0x62 + a4) + 0x0)) = (FUN_0c0e5dc0());
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70((*(float *)0xC0B4060), (*(float *)0xC0B405C), (*(float *)0xC0B4058));
    FUN_0c0dc950(0xFFFFFFF6);
    FUN_0c0dc6e0(0xA);
    FUN_0c0dc890((*(short *)((a4 + 0x62))));
    FUN_0c0c465c((*(int *)((a4 + 0x7C))));
    FUN_0c0dc4c0(0x1);
    FUN_0c0dcc70((*(float *)0xC0B4078), (*(float *)0xC0B4074), (*(float *)0xC0B4070));
    FUN_0c0dc950(0xFFFFFFF6);
    FUN_0c0dc6e0(0xA);
    FUN_0c0dc890((*(short *)((a4 + 0x62))));
    FUN_0c0dcb80(1.0f, 1.0f, (*(float *)0xC0B407C));
    FUN_0c0de000(1.0f);
    FUN_0c0c465c(((*(int *)((a4 + 0x7C))) + 0x1));
    return (FUN_0c0dc4c0(0x1));
}

int kmiFinalizeRender(int a4, int a5, int a6)
{
    int t23;
    int t24;
    int t25;
    int t26;
    int t16;

    if ((*(int *)((0xC952648 + ((*(int *)0xC952660) << 2)))) != -1) {
        if ((*(int *)0xC952674) == 0) {
            *(unsigned int *)0xC9525AC = ((*(int *)0xC9525AC) | 0x20);
            *(unsigned int *)((((*(int *)0xC952660) << 2) + 0xC952648)) = 0x3;
        }
        if (((*(int *)0xC952300) & 0x1) != 0) {
            t16 = (*(int *)0xA05F8138);
        } else {
            t16 = (*(int *)(((((((*(int *)0xC952660) & 0x1) << 2) << 2) << 1) + 0xC952784)));
        }
        *(unsigned int *)((((((*(int *)0xC952660) & 0x1) << 2) + 0xC952828) + 0x0)) = (*(int *)0xA05F8138);
        *(unsigned int *)0xC9524B0 = (((*(int *)0xC9524A8) & 0xFF000000) | (((t16 - (*(int *)(((((((*(int *)0xC952660) & 0x1) << 2) << 2) << 1) + 0xC952780)))) << 1) & 0xFFFFF8));
        t23 = (t16 + 0xA5000000);
        t24 = 0x30;
        t25 = 0xC9523A0;
        for (;;) {
            t26 = *(int *)((t25 + 0x0));
            t25 = (t25 + 0x4);
            t24 = (t24 - 1);
            *(unsigned int *)((t23 + 0x0)) = t26;
            t23 = (t23 + 0x4);
            if (t24 == 0) {
                break;
            }
        }
    }
    *(unsigned int *)0xC952508 = 0x0;
    *(unsigned int *)0xC952850 = ((*(int *)0xC95284C) - (*(int *)0xFFD8000C));
    return 0x4C;
}

int vmsfs_diskfree(int a4, int a5)
{
    int t5;
    int t9;
    int t14;
    int t28;
    int t37;
    int t39;
    int t47;
    int stk[9];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C225C34:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    R12 = (((R4 * 0x148) + 0xC956768));
    R14 = (R4);
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C225C80;
    goto L_C225C58;
    L_C225C58:;
    t5 = (vmsio_isready(R14)) != 0;
    if (t5) goto L_C225C6A;
    goto L_C225C62;
    L_C225C62:;
    vmsfs_unmount(R14);
    goto L_C225C80;
    L_C225C80:;
    R0 = (0xFFFFFF01);
    goto L_C225D3A;
    L_C225D3A:;
    return R0;
    L_C225C6A:;
    t9 = (vmsio_ismount(R14)) == 0;
    if (t9) goto L_C225C80;
    goto L_C225C74;
    L_C225C74:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + 0xC956768) + 0x8))) != 0)) goto L_C225C86;
    goto L_C225C80;
    L_C225C86:;
    t14 = (int)(buIsFormat(R14)) >= 0;
    if (t14) goto L_C225C96;
    goto L_C225C90;
    L_C225C90:;
    R0 = (0xFFFFFF03);
    goto L_C225D3A;
    L_C225C96:;
    R10 = (0x0);
    R13 = (0xFFFC);
    R4 = (0x0);
    if (((*(int *)(((int)stk + 4))) != 1)) goto L_C225CE4;
    goto L_C225CA2;
    L_C225CA2:;
    R11 = (R4);
    goto L_C225CB6;
    L_C225CB6:;
    if (((int)R11 < (int)(*(int *)(((*(int *)((R12 + 0x1C))) + 0x38))))) goto L_C225CA6;
    goto L_C225CBE;
    L_C225CBE:;
    R10 = (R11);
    goto L_C225D38;
    L_C225D38:;
    R0 = (R10);
    goto L_C225D3A;
    L_C225CA6:;
    t28 = (unsigned short)(get_fat(R14, R11, R6)) != R13;
    if (t28) goto L_C225CBE;
    goto L_C225CB4;
    L_C225CB4:;
    R11 = ((R11 + 0x1));
    goto L_C225CB6;
    L_C225CE4:;
    if (((*(int *)0xC237C10) == 0)) goto L_C225D1A;
    goto L_C225CEC;
    L_C225CEC:;
    R11 = (R4);
    goto L_C225D0E;
    L_C225D0E:;
    if (((int)R11 < (int)(*(int *)(((*(int *)((R12 + 0x1C))) + 0x30))))) goto L_C225CF0;
    goto L_C225D16;
    L_C225D16:;
    goto L_C225D38;
    L_C225CF0:;
    t37 = (unsigned short)(get_fat(R14, R11, R6)) != R13;
    if (t37) goto L_C225D0C;
    goto L_C225CFE;
    L_C225CFE:;
    t39 = (int)(check_fat_xross(R14, R11)) < 0;
    if (t39) goto L_C225D0C;
    goto L_C225D0A;
    L_C225D0A:;
    R10 = ((R10 + 0x1));
    goto L_C225D0C;
    L_C225D0C:;
    R11 = ((R11 + 0x1));
    goto L_C225D0E;
    L_C225D1A:;
    R11 = (R4);
    goto L_C225D30;
    L_C225D30:;
    if (((int)R11 < (int)(*(int *)(((*(int *)((R12 + 0x1C))) + 0x30))))) goto L_C225D1E;
    goto L_C225D38;
    L_C225D1E:;
    t47 = (unsigned short)(get_fat(R14, R11, R6)) != R13;
    R11 = ((R11 + 0x1));
    if (t47) goto L_C225D30;
    goto L_C225D2E;
    L_C225D2E:;
    R10 = ((R10 + 0x1));
    goto L_C225D30;
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int t0;
    int t33;
    int t3;
    int t5;
    int t29;
    int t8;
    int t27;
    int t10;
    int t25;
    int t12;
    int t24;
    int t14;
    int t23;
    int t15;
    int t18;
    int t19;
    int t31;
    int t6;
    int t7;
    int t17;
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC239D30)));
    t33 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t31 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t29 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t7 = *(signed char *)(((t6 + 0xC956768) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 4));
                    t10 = check_isopen();
                    t25 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC));
                        t24 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t14 = search_dir(a4, (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
                            t23 = 0xFFFFFF06;
                            if ((int)t14 < 0) {
                                t15 = direntry(a4, t12);
                                t18 = (t15 + 0x4);
                                t19 = (*(int *)(((int)stk + 8)));
                                for (;;) {
                                    if ((unsigned int)t18 >= (unsigned int)(t15 + 0x10)) {
                                        break;
                                    }
                                    t17 = (*(signed char *)((t19 + 0x0)));
                                    t19 = (t19 + 0x1);
                                    *(unsigned char *)((t18 + 0x0)) = t17;
                                    t18 = (t18 + 0x1);
                                }
                                direntry_dirty(a4, t12);
                                t23 = (write_dir(a4));
                            }
                            t24 = t23;
                        }
                        t25 = t24;
                    }
                    t27 = t25;
                }
                t29 = t27;
            }
            t31 = t29;
        }
        t33 = t31;
    }
    return t33;
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int t0;
    int t36;
    int t3;
    int t5;
    int t30;
    int t8;
    int t27;
    int t10;
    int t24;
    int t12;
    int t22;
    int t13;
    int t17;
    int t18;
    int t33;
    int t6;
    int t7;
    int t16;
    int stk[21];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC239D38)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t7 = *(signed char *)(((t6 + 0xC956768) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 4));
                    t10 = check_isopen();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 4) + 0x38), (*(int *)(((int)stk + 8))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 4) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (write_dir(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}

int FUN_0c055dfa(int a4)
{
    int t0;
    int t1;
    int t3;
    int t28;
    int t36;
    int t26;
    int t12;
    int t42;
    int stk[5];

    t0 = *(int *)((a4 + 0x33C));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
    t3 = *(int *)((a4 + 0x210));
    if ((t3 != 85) && (t3 != 87)) {
        if (t3 != 86) {
            t12 = 0xC2475D4;
        } else {
            *(unsigned int *)((a4 + 0x344)) = (*(int *)((t1 + 0x220)));
            *(unsigned int *)((a4 + 0x34C)) = (*(int *)((a4 + 0x33C)));
            *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x344)));
            *(unsigned int *)((a4 + 0x330)) = 0x4;
            FUN_0c0bb1a8(a4, 0x0);
        }
        t26 = t12;
    } else {
        *(unsigned int *)((a4 + 0x348)) = (*(int *)((t1 + 0x220)));
        *(unsigned int *)((a4 + 0x350)) = (*(int *)((a4 + 0x33C)));
        *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x348)));
        if ((*(int *)((a4 + 0x330))) == 1) {
            *(unsigned int *)((a4 + 0x330)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x330)) = 0x2;
        }
        t26 = 0xC2475D4;
    }
    t28 = *(int *)(((0x220 + t1) + 0x0));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)t28 >= 0) ? (0x1 << (t28 & 31)) : ((-(int)t28 & 31) ? ((int)0x1 >> (-(int)t28 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)((a4 + 0x33C)) = 0x0;
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
    if ((*(int *)((0xC1FF6D8 + ((*(int *)((t1 + 0x220))) << 2)))) != 0) {
        t36 = ((int (*)(int, int))((*(int *)((0xC1FF6D8 + ((*(int *)((t1 + 0x220))) << 2))))))(a4, t26);
    } else {
        t42 = t26;
    }
    FUN_0c0cc3f8((*(int *)((((*(int *)((t1 + 0x220))) << 2) + 0xC1FE958))), t42, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return FUN_0c0519f0(a4);
}

float FUN_0c08640a(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int t35;
    float u39;
    float u53;

    if (a9 != 0) {
        if (a9 == 1) {
            t0 = 0x18;
            t1 = (a6 + 0x6);
            t2 = (a4 + 0x6);
            t3 = (a5 + 0x6);
            for (;;) {
                t4 = *(short *)((t3 + 0x0));
                t3 = (t3 + 0x2);
                t0 = (t0 - 0x1);
                t5 = *(short *)((t2 + 0x0));
                t2 = (t2 + 0x2);
                *(unsigned short *)((t1 + 0x0)) = (t4 - (((int)(-a7) >= 0) ? (((short)(t4 - t5) * a8) << ((-a7) & 31)) : ((-(int)(-a7) & 31) ? ((int)((short)(t4 - t5) * a8) >> (-(int)(-a7) & 31)) : ((int)((short)(t4 - t5) * a8) >> 31))));
                t1 = (t1 + 0x2);
                if (t0 == 0) {
                    break;
                }
            }
        } else {
            t6 = a4;
            t7 = a5;
            t8 = a6;
            t9 = 0x2;
            for (;;) {
                t10 = *(short *)((t7 + 0x0));
                t7 = (t7 + 0x2);
                t9 = (t9 - 0x1);
                t11 = *(short *)((t6 + 0x0));
                t6 = (t6 + 0x2);
                *(unsigned short *)((t8 + 0x0)) = (t10 - (((int)(-a7) >= 0) ? (((short)(t10 - t11) * a8) << ((-a7) & 31)) : ((-(int)(-a7) & 31) ? ((int)((short)(t10 - t11) * a8) >> (-(int)(-a7) & 31)) : ((int)((short)(t10 - t11) * a8) >> 31))));
                t8 = (t8 + 0x2);
                if (t9 == 0) {
                    break;
                }
            }
            t12 = (a4 + 0x36);
            t13 = 0x15;
            t14 = (a5 + 0x36);
            t15 = (a6 + 0x36);
            for (;;) {
                t16 = *(short *)((t14 + 0x0));
                t14 = (t14 + 0x2);
                t13 = (t13 - 0x1);
                t17 = *(short *)((t12 + 0x0));
                t12 = (t12 + 0x2);
                *(unsigned short *)((t15 + 0x0)) = (t16 - (((int)(-a7) >= 0) ? (((short)(t16 - t17) * a8) << ((-a7) & 31)) : ((-(int)(-a7) & 31) ? ((int)((short)(t16 - t17) * a8) >> (-(int)(-a7) & 31)) : ((int)((short)(t16 - t17) * a8) >> 31))));
                t15 = (t15 + 0x2);
                if (t13 == 0) {
                    break;
                }
            }
        }
    } else {
        t29 = 0x30;
        t30 = a6;
        t31 = a5;
        t32 = a4;
        for (;;) {
            t33 = *(short *)((t31 + 0x0));
            t34 = *(short *)((t32 + 0x0));
            t37 = (((unsigned short)t34 - (unsigned short)t33) - 0x10000);
            if ((int)((unsigned short)t34 - (unsigned short)t33) > (int)0x8000) {
            } else {
                t35 = ((unsigned short)t34 - (unsigned short)t33);
                if ((int)((unsigned short)t34 - (unsigned short)t33) < (int)0xFFFF8000) {
                    t35 = (((unsigned short)t34 - (unsigned short)t33) + 0x10000);
                }
                t37 = t35;
            }
            t31 = (t31 + 0x2);
            t29 = (t29 - 0x1);
            t32 = (t32 + 0x2);
            u39 = ((float)(t37 + (unsigned short)t33) * ((float)a8 / (float)(((int)a7 >= 0) ? (0x1 << (a7 & 31)) : ((-(int)a7 & 31) ? ((int)0x1 >> (-(int)a7 & 31)) : ((int)0x1 >> 31)))));
            u39 = u39 + (1.0f - ((float)a8 / (float)(((int)a7 >= 0) ? (0x1 << (a7 & 31)) : ((-(int)a7 & 31) ? ((int)0x1 >> (-(int)a7 & 31)) : ((int)0x1 >> 31))))) * (float)(unsigned short)t33;
            *(unsigned short *)((t30 + 0x0)) = (int)u39;
            t30 = (t30 + 0x2);
            if (t29 == 0) {
                break;
            }
        }
        u53 = (1.0f - ((float)a8 / (float)(((int)a7 >= 0) ? (0x1 << (a7 & 31)) : ((-(int)a7 & 31) ? ((int)0x1 >> (-(int)a7 & 31)) : ((int)0x1 >> 31)))));
    }
    return u53;
}

int FUN_0c096094(int a4, int a5)
{
    int t1;
    int t46;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u12;
    float u18;
    float u7;
    int t43;
    int t44;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t46 = 0xC0961C0;
    if ((int)a5 > 0) {
        t2 = 0xC0961C0;
        t3 = a4;
        t4 = a5;
        t5 = 0x0;
        t6 = a4;
        for (;;) {
            if ((*(int *)((t6 + 0x18))) != 0) {
                t2 = 0x10;
                *(unsigned int *)((t6 + 0x18)) = ((*(int *)((t6 + 0x18))) - 1);
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + -0.00999999978f);
                t2 = 0xC;
                u12 = *(float *)((t6 + t2));
                t2 = 0x4;
                *(float *)((t6 + 0x0)) = ((*(float *)((t6 + 0x0))) + u12);
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + (*(float *)(((0x10 + t6) + 0x0))));
                t2 = 0x8;
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + (*(float *)(((0x14 + t6) + 0x0))));
                t3 = 0x0;
                t2 = (FUN_0c0dc510(t3));
                t2 = 0x8;
                u18 = *(float *)((t6 + t2));
                t2 = 0x4;
                t2 = (FUN_0c0dcc70((*(float *)((t6 + 0x0))), (*(float *)((t6 + t2))), u18));
                t2 = 0x3CE;
                t3 = (*(short *)((t1 + t2)));
                t2 = (FUN_0c0dc890(t3));
                t2 = 0x3CC;
                t3 = (*(short *)((t1 + t2)));
                t2 = (FUN_0c0dc6e0(t3));
                t2 = (FUN_0c0dcb80(0.599999964f, 0.599999964f, 0.599999964f));
                t2 = (FUN_0c0de000(0.599999964f));
                u7 = 1.0f;
                if ((int)(*(int *)((t6 + 0x18))) < (int)0xA) {
                    u7 = (float)(*(int *)((t6 + 0x18)));
                    u7 = (u7 / 10.0f);
                }
                t2 = (FUN_0c0848bc(((*(float *)0xC200AF4) * u7), ((*(float *)0xC200AF8) * u7), ((*(float *)0xC200AFC) * u7)));
                t3 = (*(int *)0xC23A258);
                if ((t3 & 0x1) != 0) {
                    t3 = 0x291;
                } else {
                    t3 = 0x295;
                }
                t2 = (FUN_0c0c465c(t3));
                t3 = 0x1;
                t2 = (FUN_0c0dc4c0(t3));
            } else {
                t43 = t3;
                t44 = t4;
            }
            t5 = (t5 + 0x1);
            t3 = t43;
            t4 = t44;
            t6 = (t6 + 0x1C);
            if ((int)t5 >= (int)a5) {
                break;
            }
        }
        t46 = t2;
    }
    return t46;
}

int FUN_0c0961f8(int a4, int a5)
{
    int t1;
    int t46;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u12;
    float u18;
    float u7;
    int t43;
    int t44;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t46 = 0xC096324;
    if ((int)a5 > 0) {
        t2 = 0xC096324;
        t3 = a4;
        t4 = a5;
        t5 = 0x0;
        t6 = a4;
        for (;;) {
            if ((*(int *)((t6 + 0x18))) != 0) {
                t2 = 0x10;
                *(unsigned int *)((t6 + 0x18)) = ((*(int *)((t6 + 0x18))) - 1);
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + -0.00999999978f);
                t2 = 0xC;
                u12 = *(float *)((t6 + t2));
                t2 = 0x4;
                *(float *)((t6 + 0x0)) = ((*(float *)((t6 + 0x0))) + u12);
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + (*(float *)(((0x10 + t6) + 0x0))));
                t2 = 0x8;
                *(float *)((t6 + t2)) = ((*(float *)((t6 + t2))) + (*(float *)(((0x14 + t6) + 0x0))));
                t3 = 0x0;
                t2 = (FUN_0c0dc510(t3));
                t2 = 0x8;
                u18 = *(float *)((t6 + t2));
                t2 = 0x4;
                t2 = (FUN_0c0dcc70((*(float *)((t6 + 0x0))), (*(float *)((t6 + t2))), u18));
                t2 = 0x3CE;
                t3 = (*(short *)((t1 + t2)));
                t2 = (FUN_0c0dc890(t3));
                t2 = 0x3CC;
                t3 = (*(short *)((t1 + t2)));
                t2 = (FUN_0c0dc6e0(t3));
                t2 = (FUN_0c0dcb80(0.599999964f, 0.599999964f, 0.599999964f));
                t2 = (FUN_0c0de000(0.599999964f));
                u7 = 1.0f;
                if ((int)(*(int *)((t6 + 0x18))) < (int)0xA) {
                    u7 = (float)(*(int *)((t6 + 0x18)));
                    u7 = (u7 / 10.0f);
                }
                t2 = (FUN_0c0848bc(((*(float *)0xC200ADC) * u7), ((*(float *)0xC200AE0) * u7), ((*(float *)0xC200AE4) * u7)));
                t3 = (*(int *)0xC23A258);
                if ((t3 & 0x1) != 0) {
                    t3 = 0x291;
                } else {
                    t3 = 0x295;
                }
                t2 = (FUN_0c0c465c(t3));
                t3 = 0x1;
                t2 = (FUN_0c0dc4c0(t3));
            } else {
                t43 = t3;
                t44 = t4;
            }
            t5 = (t5 + 0x1);
            t3 = t43;
            t4 = t44;
            t6 = (t6 + 0x1C);
            if ((int)t5 >= (int)a5) {
                break;
            }
        }
        t46 = t2;
    }
    return t46;
}

int FUN_0c0333f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t15;
    float t47;
    int t49;
    int t16;
    int t17;
    int stk[7];

    t0 = *(int *)((a4 + 0x3F8));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                }
            } else {
                FUN_0c021074(a4);
                *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) - 1);
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            }
        } else {
            FUN_0c03338c(a4);
            FUN_0c03310c(a4);
            t15 = FUN_0c033028(a4);
            if ((t15 != 0) && ((t16 = *(int *)((a4 + 0x22C)), (int)t16 > (int)0xFC00) || (t17 = *(int *)((a4 + 0x22C)), (int)t17 < (int)0x400))) {
                if ((int)(*(int *)((a4 + 0x234))) <= (int)0xFC00) {
                    if ((int)(*(int *)((a4 + 0x234))) < (int)0x400) {
                        *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                }
            }
        }
    } else {
        FUN_0c03338c(a4);
        t47 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
        if ((t47 + 1.0f) > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = (t47 + 1.0f);
            t49 = FUN_0c032f8a(a4);
            if (t49 != 0) {
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            } else {
                if ((*(int *)((a4 + 0x410))) == 0) {
                    FUN_0c0cc3f8(0x2CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x410)) = 0x1;
                }
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
            }
        }
    }
    return (FUN_0c032f3e(a4));
}

int FUN_0c045ca2(int a4)
{
    FUN_0c0db0a0(0x1, (*(int *)((a4 + 0x60))));
    FUN_0c0db0e0(0xC0F5E24);
    FUN_0c045acc(a4, (*(int *)((a4 + 0x64))), 0x0);
    return ((int (*)(int))(0xC045BBC))(a4);
}

int FUN_0c0a72a0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    float t23;
    int stk[40];

    *(float *)(((int)stk + 40)) = f4;
    *(float *)(((int)stk + 48)) = f5;
    *(float *)(((int)stk + 44)) = f6;
    *(float *)(((int)stk + 36)) = f7;
    *(float *)(((int)stk + 32)) = f8;
    *(float *)(((int)stk + 52)) = f9;
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 32))), f9);
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dc950((-(*(int *)(((int)stk + 8)))));
    FUN_0c0dc6e0((-(*(int *)(((int)stk + 4)))));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 44)));
    FUN_0c0db4d0((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x34));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 56)));
    *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(float *)(((int)stk + 60)));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 64)));
    FUN_0c0dccc0();
    FUN_0c0db640((((int)stk + 4) + 0x4C));
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 20))));
    t23 = FUN_0c0da6a0((*(int *)(((int)stk + 16))));
    *(float *)(((int)stk + 96)) = ((FUN_0c0da410((*(int *)(((int)stk + 12))))) / t23);
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 104)) = ((FUN_0c0d9e90((*(int *)(((int)stk + 12))))) / t23);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc6e0((*(int *)(((int)stk + 4))));
    FUN_0c0dc950((*(int *)(((int)stk + 8))));
    FUN_0c0dc100((((int)stk + 4) + 0x4C));
    FUN_0c0dc950((-(*(int *)(((int)stk + 8)))));
    return (FUN_0c0dc6e0((-(*(int *)(((int)stk + 4))))));
}

int vmsfs_fopen(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t14;
    int t17;
    int t19;
    int t21;
    int t25;
    int t30;
    int stk[18];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C225E18:;
    *(unsigned int *)(((int)stk + 4)) = R6;
    *(unsigned int *)((R6 + 0x0)) = 0x0;
    R11 = (R5);
    R12 = (0x0);
    R13 = (R4);
    if (((*(signed char *)(((R4 * 0x148) + 0xC95676A))) == 0)) goto L_C225E68;
    goto L_C225E3E;
    L_C225E3E:;
    t6 = (vmsio_isready(R13)) != 0;
    if (t6) goto L_C225E50;
    goto L_C225E48;
    L_C225E48:;
    vmsfs_unmount(R13);
    goto L_C225E68;
    L_C225E68:;
    R0 = (0xFFFFFF01);
    goto L_C225F1C;
    L_C225F1C:;
    return R0;
    L_C225E50:;
    t10 = (vmsio_ismount(R13)) == 0;
    if (t10) goto L_C225E68;
    goto L_C225E5A;
    L_C225E5A:;
    if (((*(signed char *)(((R13 * 0x148) + 0xC956770))) != 0)) goto L_C225E6E;
    goto L_C225E68;
    L_C225E6E:;
    t14 = (int)(buIsFormat(R13)) >= 0;
    if (t14) goto L_C225E7E;
    goto L_C225E78;
    L_C225E78:;
    R0 = (0xFFFFFF03);
    goto L_C225F1C;
    L_C225E7E:;
    t17 = (int)(check_isopen()) < 0;
    if (t17) goto L_C225EA8;
    goto L_C225E8A;
    L_C225E8A:;
    t19 = (int)(check_file_correct(R13, R11)) >= 0;
    if (t19) goto L_C225E9C;
    goto L_C225E96;
    L_C225E96:;
    R0 = (0xFFFFFF41);
    goto L_C225F1C;
    L_C225E9C:;
    t21 = open_file_handle();
    R14 = (t21);
    if ((t21 != 0)) goto L_C225EDC;
    goto L_C225EA8;
    L_C225EA8:;
    R0 = (0xFFFFFF07);
    goto L_C225F1C;
    L_C225EDC:;
    t25 = search_dir(R13, R11, (((int)stk + 4) + 0x4));
    *(unsigned int *)0xC95B66C = t25;
    if (((int)t25 >= 0)) goto L_C225EFC;
    goto L_C225EF0;
    L_C225EF0:;
    close_file_handle(R14);
    R0 = (0xFFFFFF05);
    goto L_C225F1C;
    L_C225EFC:;
    *(unsigned int *)((R14 + 0x4)) = R12;
    *(unsigned int *)((R14 + 0x34)) = (*(int *)(((int)stk + 48)));
    t30 = *(int *)(((int)stk + 20));
    *(unsigned int *)((R14 + 0x38)) = t30;
    *(unsigned int *)((R14 + 0x40)) = t30;
    *(unsigned int *)((R14 + 0x28)) = R13;
    *(unsigned short *)((R14 + 0x2)) = (*(short *)(((int)stk + 16)));
    *(unsigned char *)((R14 + 0x1)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R14;
    R0 = (R12);
    goto L_C225F1C;
}

int FUN_0c22c3b8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t3;
    int t10;
    int t13;
    int t20;
    int t24;
    int t27;
    int t32;
    int t38;
    int t47;
    int t69;
    int t2;
    int t9;
    int t33;
    int t34;
    int t62;
    int t63;
    int t64;
    int t70;

    t0 = *(int *)((a4 + 0x98));
    if (t0 != 1) {
        t1 = ((int (*)(int, int, int, int))(mwRnaGetTransSw))(a4, a5, a6, a7);
        if ((t1 == 1) && (t2 = *(signed char *)((a4 + 0x5)), (unsigned char)t2 == 1)) {
            t3 = FUN_0c22bb3e(a4);
            if (t3 == 1) {
                FUN_0c22bd70(a4);
                *(unsigned char *)((a4 + 0x5)) = 0x0;
            }
        }
        if (((unsigned char)(*(signed char *)((a4 + 0x6))) == 1) && (t9 = *(signed char *)((a4 + 0x5)), t9 == 0)) {
            t10 = *(int *)((a4 + 0x10));
            t13 = ((int (*)(int, int))((*(int *)(((*(int *)((t10 + 0x0))) + 0x24)))))(t10, 0x1);
            if ((int)t13 < (int)0x20) {
                FUN_0c22bece(a4, 0x0);
                *(unsigned char *)((a4 + 0x6)) = 0x0;
            }
        }
        t20 = mwRnaGetPlaySw(a4);
        if (t20 == 1) {
            FUN_0c22bcdc(a4);
        }
        t24 = ((int (*)(int))(mwRnaGetTransSw))(a4);
        if (t24 == 1) {
            if ((*(signed char *)((a4 + 0x5))) == 0) {
                t27 = FUN_0c22c05a(a4);
                if ((int)t27 <= 0) {
                } else {
                    *(unsigned char *)((a4 + 0x5)) = 0x1;
                }
            }
        } else {
            t32 = mwRnaGetPlaySw(a4);
            if ((t32 == 1) && (t33 = *(int *)((a4 + 0x30)), t34 = *(int *)((a4 + 0x5C)), (int)t34 < (int)t33)) {
                if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                    t38 = FUN_0c22bb3e(a4);
                    if (t38 == 1) {
                        mwlRnaAddFlshPos(a4);
                        *(unsigned char *)((a4 + 0x5)) = 0x0;
                    }
                }
                if ((*(signed char *)((a4 + 0x5))) == 0) {
                    t47 = FUN_0c22c262(a4);
                    if ((int)t47 > 0) {
                        *(unsigned char *)((a4 + 0x5)) = 0x1;
                    }
                }
            }
        }
        if (((unsigned char)(*(signed char *)((a4 + 0x1))) == 5) && ((t62 = *(int *)((a4 + 0x3C)), t63 = *(int *)((a4 + 0x48)), (int)t62 >= (int)t63) && (t64 = *(signed char *)((a4 + 0x7)), t64 == 0))) {
            FUN_0c22bfa2(a4, 0x1);
            *(unsigned int *)((a4 + 0x48)) = 0x7FFFFFFF;
        }
        t69 = *(signed char *)((a4 + 0x1));
        if (((unsigned char)t69 == 6) && (t70 = *(int *)((a4 + 0x3C)), t70 == 0)) {
            FUN_0c22bfa2(a4, 0x0);
            return FUN_0c22ba6a();
        }
        return (unsigned char)t69;
    }
    return t0;
}
