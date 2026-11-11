/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_DecodeHeader(int, int, int, int, int, int, int, int, int, int, int, int);
int ADXB_GetFormat(int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c0469a4(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c082220(void);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cf09e(int, int, int, int, int);
int FUN_0c0cf11c(int, int);
int FUN_0c0cf16a(int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0dfcee(float, float);
int FUN_0c0e19f2(void);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c22bd70(int);
int FUN_0c22be84(int);
int FUN_0c233a38(int);
int FUN_0c233a46(void);
int FUN_0c233a4a(void);
int SJ_SplitChunk(int, int, int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int get_fat(int, int, int, int);
int get_vmstime(int, int);
int kmiReadRegister(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int search_dir(int, int, int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsfs_unmount(int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsio_init(void);
int vmsio_ismount(int);
int vmsio_isready(int);
int kmGetCurrentScanline(int a4);
int FUN_0c08bf92(int a4, int a5, int a6, int a7);
int FUN_0c091ac8(int a4);
int FUN_0c0b4404(int a4);
int FUN_0c0cf1b0(int a4, int a5, int a6, int a7);
int FUN_0c060ae0(int a4, int a5);
int vmsfs_init(int a4, int a5, int a6);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);
int vmsfs_fread1(int a4, int a5);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int FUN_0c034fbc(int a4, int a5, int a6, int a7);
int FUN_0c0df660(int a4, int a5, int a6);
int FUN_0c034c26(int a4);
int adxsjd_decode_prep(int a4);
int FUN_0c054fb0(int a4, int a5, int a6, int a7);
int FUN_0c02ee08(int a4);
int FUN_0c02b648(int a4);
int FUN_0c0a7b90(int a4, int a5, int a6);
int FUN_0c02b0c2(int a4);
int FUN_0c22bece(int a4, int a5, int a6, int a7);
int FUN_0c046a20(int a4);
int FUN_0c22c602(int a4, int a5, int a6, int a7);
struct o1C4_int { char p[0x1C4]; int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_short { char p[0x48]; short v; };
struct o488_int { char p[0x488]; int v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o554_int { char p[0x554]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o538_int { char p[0x538]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };





int FUN_0c08bf92(int a4, int a5, int a6, int a7)
{
    int t1;
    float u5;
    int t6;
    float u23;
    int t24;
    int t25;
    int t43;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x30));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                u5 = ((((struct oC_float *)0xC08C144)->v));
                u5 = u5 + ((((struct o10_float *)0xC08C144)->v)) * (float)(FUN_0c0da2e0());
                (((struct o40_float *)(a4))->v) = u5;
                t6 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t6 - 1);
                if ((int)(t6 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    (((struct o40_float *)(a4))->v) = ((((struct o14_float *)0xC08C144)->v));
                    *(unsigned int *)((a4 + 0x34)) = ((((FUN_0c0da2e0()) & 0x1F) << 1) + 0x80);
                }
            }
        } else {
            u23 = ((((struct o0_float *)0xC08C144)->v));
            u23 = u23 + ((((struct o4_float *)0xC08C144)->v)) * (FUN_0c0d9e90((*(int *)((a4 + 0x38)))));
            (((struct o40_float *)(a4))->v) = u23;
            t24 = *(int *)((a4 + 0x38));
            t25 = *(int *)((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x38)) = (t24 + t25);
            if ((int)(t24 + t25) >= (int)0xFFFF) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                *(unsigned int *)((a4 + 0x34)) = (((FUN_0c0da2e0()) & 0x7) + 0x1);
                *(unsigned int *)((a4 + 0x3C)) = (((FUN_0c0da2e0()) & 0x1FFF) + 0x80);
            }
        }
    } else {
        t43 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t43 - 1);
        if ((int)(t43 - 1) < 0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            *(unsigned int *)((a4 + 0x3C)) = (((FUN_0c0da2e0()) & 0x1FFF) + 0x80);
        }
    }
    *(float *)0xC247F18 = ((((struct o40_float *)(a4))->v));
    return 0x40;
}

int FUN_0c091ac8(int a4)
{
    float u8;
    float u11;
    float u12;
    float u13;
    int t19;
    float u24;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX(((((struct o48_short *)(a4))->v)));
    nlRotateAZ(((((struct o4C_short *)(a4))->v)));
    nlRotateAY(((((struct o4A_short *)(a4))->v)));
    u8 = (((struct o54_float *)(a4))->v);
    nlScale(u8, ((((struct o58_float *)(a4))->v)), u8);
    u11 = (((struct o58_float *)(a4))->v);
    u12 = (((struct o54_float *)(a4))->v);
    u13 = u12;
    if (u11 > u12) {
        u13 = u11;
    }
    FUN_0c0de000(u13);
    FUN_0c0c465c((((((struct o60_int *)(a4))->v)) + 0x1B8));
    nlPopMatrix(0x1);
    t19 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t19 - 1);
    if ((int)(t19 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    u24 = *(float *)0xC091CC0;
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - u24);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + u24);
    (((struct o60_uint *)(a4))->v) = ((((((struct o60_int *)(a4))->v)) + 0x1) & 0x1F);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    return FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC091CC8));
}


int FUN_0c0cf1b0(int a4, int a5, int a6, int a7)
{
    int t11;
    int t2;
    int t16;
    int t44;
    float u21;
    int stk[13];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    FUN_0c0cf09e(a7, a5, a6, a7, (((int)stk + 8) + 0x14));
    t11 = a4;
    if (a4 == 22) {
        t2 = (FUN_0c0da2e0() % 100);
        t11 = 0x17;
        if ((((*(int *)0xC23A1A8) & 1) == 0) && ((unsigned int)t2 >= (unsigned int)0x3C)) {
            t11 = 0x18;
            if ((unsigned int)t2 < (unsigned int)0x50) {
                t11 = 0x16;
            }
        }
    }
    t16 = *(int *)(((int)stk + 8));
    if (t16 != 0) {
        if (t16 != 1) {
            t44 = t16;
            if (t16 != 2) {
            } else {
                *(unsigned short *)(((int)stk + 20)) = 0x0;
                *(unsigned short *)(((int)stk + 22)) = (FUN_0c0da2e0());
                *(unsigned short *)(((int)stk + 24)) = 0x0;
                if (0x0 != 0) {
                    u21 = (*(float *)0xC0CF354);
                } else {
                    u21 = (*(float *)0xC0CF358);
                }
                *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + u21);
                t44 = (FUN_0c0cf16a(0x2, t11, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x18), (((int)stk + 8) + 0xC)));
            }
        } else {
            *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)0xC0CF34C));
            t44 = (FUN_0c0cf11c(t11, (((int)stk + 8) + 0x14)));
        }
    } else {
        t44 = (FUN_0c0cf11c(t11, (((int)stk + 8) + 0x14)));
    }
    return t44;
}

int FUN_0c060ae0(int a4, int a5)
{
    int t6;
    int t7;
    int t26;
    int t27;
    float u53;
    float u54;
    int stk[10];

    *(unsigned int *)(((int)stk + 16)) = a5;
    FUN_0c035828(a4, 0x800, 0xFFFFFFFF, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x4), 1.5f, 0.0272199996f);
    if (((((struct o48C_int *)(a4))->v)) == 45) {
        if (((((struct o2FC_int *)(a4))->v)) != 0) {
            t6 = *(int *)((((((struct o2FC_int *)(a4))->v)) + 0x20));
            *(unsigned int *)(((int)stk + 12)) = t6;
            t7 = *(int *)(((int)stk + 8));
            if ((int)(short)(t6 - t7) > (int)0x1000) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
            } else {
                if ((int)(short)(t6 - t7) < (int)0xFFFFF000) {
                    *(unsigned int *)(((int)stk + 8)) = (0xFFFFF000 + (*(int *)(((int)stk + 12))));
                }
            }
        }
        u53 = 0.0f;
        u54 = 0.0f;
    } else {
        if (((((struct o2FC_int *)(a4))->v)) != 0) {
            t26 = *(int *)((((((struct o2FC_int *)(a4))->v)) + 0x20));
            *(unsigned int *)(((int)stk + 12)) = t26;
            t27 = *(int *)(((int)stk + 8));
            if ((int)(short)(t26 - t27) > (int)0x1000) {
                *(unsigned int *)(((int)stk + 8)) = (0x1000 + (*(int *)(((int)stk + 12))));
            } else {
                if ((int)(short)(t26 - t27) < (int)0xFFFFF000) {
                    *(unsigned int *)(((int)stk + 8)) = (0xFFFFF000 + (*(int *)(((int)stk + 12))));
                }
            }
        }
        u53 = 1.0f;
        u54 = 1.0f;
    }
    return (FUN_0c05fd8c(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 8))), 0x0, 0x8, 1.5f, 1.0f, u53, u54));
}

int vmsfs_init(int a4, int a5, int a6)
{
    int t0;
    int t5;
    int t6;
    int t19;
    int t4;

    *(unsigned int *)0xC956764 = 0xC956750;
    t0 = 0xC9571A8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC9571C8) {
            break;
        }
    }
    memset(0xC956750, 0x0, 0x14);
    memset(0xC956768, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC95B668)->v) = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = ((((struct o8_int *)0xC95B668)->v));
            t4 = (t4 + 0x1);
            (((struct o8_uint *)0xC95B668)->v) = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5);
        *(unsigned int *)(((*(int *)0xC956764) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        *(unsigned int *)(((*(int *)0xC956764) + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC95B668)->v) = 0x8;
    (((struct o4_uint *)0xC95B668)->v) = 0x0;
    vmsfs_setretry(0xA);
    t19 = (((struct o0_int *)0xC95B668)->v);
    memset(0xC95B428, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    vmsio_init();
    return 0x0;
}



int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int t34;
    int t1;
    int t3;
    int t6;
    int t8;
    int t4;
    int t5;
    int stk[18];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a5;
    R1012 = (a4 * 0x148);
    R1004 = ((a4 * 0x148) + 0xC956768);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t34 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t34 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = R1012, t5 = *(signed char *)(((t4 + 0xC956768) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t34 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (R1008), (((int)stk + 4) + 0xC));
                    t34 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 56))) * ((*(int *)(((*(int *)(((R1004) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 56)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 26)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 24)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 20))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x2C));
                        t34 = 0x0;
                    }
                }
            }
        }
    }
    return t34;
}




int adxsjd_decode_prep(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t9;
    int t12;
    int t13;
    int t15;
    int t24;
    int t27;
    int t35;
    int t8;
    int stk[11];

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x4));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, 0x1000, (((int)stk + 4) + 0xC));
    t5 = *(int *)(((int)stk + 20));
    if ((int)t5 >= (int)0x10) {
        t7 = ADXB_DecodeHeader(t2, (*(int *)(((int)stk + 16))), t5, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 20)), (int)t7 <= (int)t8)) {
            t9 = ADXB_GetFormat(t2);
            if (t9 == 4) {
                *(unsigned char *)((a4 + 0x3)) = 0x1;
            }
            t12 = ADXB_GetFormat(t2);
            if (t12 == 2) {
                t13 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 4)) = t13;
                t15 = 0x40;
                if ((int)t13 < (int)0x40) {
                    t15 = (*(int *)(((int)stk + 4)));
                }
                FUN_0c0e631c((a4 + 0x50), (*(int *)(((int)stk + 16))), t15);
            }
            SJ_SplitChunk((((int)stk + 4) + 0xC), t7, (((int)stk + 4) + 0xC));
            t24 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0xC));
            t27 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0x4));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t35 = 0x2;
        } else {
            t35 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
        }
    } else {
        t35 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
    }
    return t35;
}


int FUN_0c02ee08(int a4)
{
    int t6;
    float u8;
    float u9;
    int t19;
    int t1;
    int t21;
    int t28;

    if ((((((struct o0_int *)0xC247030)->v)) == 4) && (t1 = (((struct o4_int *)0xC247030)->v), t1 == 4)) {
        t6 = (((struct oBC_int *)(a4))->v);
        u8 = *(float *)((((t6 << 2) + 0xC247084) + 0x0));
        u9 = (((struct o40_float *)(((t6 << 2) + 0xC247084)))->v);
        if (((((struct o28C_int *)(a4))->v)) != 0) {
            t19 = *(int *)((((((((struct o28C_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
            if ((((((struct o4D0_int *)(t19))->v)) == 1) && (t21 = (((struct o1C4_int *)(t19))->v), (int)t21 <= (int)0x2)) {
                (((struct o510_uint *)(a4))->v) = ((((struct o1C4_int *)(t19))->v));
            } else {
                if ((((((struct o554_int *)(t19))->v)) == 2) && (t28 = (((struct o50C_int *)(t19))->v), t28 != 0)) {
                    (((struct o510_uint *)(a4))->v) = ((((((struct o510_int *)(t19))->v)) + 0x1) & 0x1);
                } else {
                    if (!(u8 > u9)) {
                        (((struct o510_uint *)(a4))->v) = 0x0;
                    } else {
                        (((struct o510_uint *)(a4))->v) = 0x1;
                    }
                }
            }
        } else {
            if (!(u8 > u9)) {
                (((struct o510_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o510_uint *)(a4))->v) = 0x1;
            }
        }
        (((struct o50C_uint *)(a4))->v) = 0x1;
        (((struct o524_uint *)(a4))->v) = 0x0;
        return 0x1;
    }
    if (((((struct o0_int *)0xC247030)->v)) == 4) {
        (((struct o510_uint *)(a4))->v) = 0x0;
        (((struct o50C_uint *)(a4))->v) = 0x1;
        (((struct o524_uint *)(a4))->v) = 0x0;
        return 0x1;
    }
    if (((((struct o4_int *)0xC247030)->v)) == 4) {
        (((struct o510_uint *)(a4))->v) = 0x1;
        (((struct o50C_uint *)(a4))->v) = 0x1;
        (((struct o524_uint *)(a4))->v) = 0x0;
        return 0x1;
    }
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    return 0x0;
}



int FUN_0c02b0c2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t12;
    int t22;
    int t34;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        (((struct o538_uint *)(a4))->v) = 0xA;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
    } else {
        t1 = FUN_0c03593a(a4);
        if (t1 != 0) {
            t2 = FUN_0c02a35a(a4);
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            (((struct o538_uint *)(a4))->v) = 0x2;
                            (((struct o4F8_uint *)(a4))->v) = 0x0;
                        } else {
                            (((struct o538_uint *)(a4))->v) = 0x2;
                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                        }
                    } else {
                        (((struct o538_uint *)(a4))->v) = 0x2;
                        (((struct o4F8_uint *)(a4))->v) = 0x6;
                    }
                } else {
                    (((struct o538_uint *)(a4))->v) = 0x2;
                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                }
            } else {
                t8 = FUN_0c035b26(a4);
                if (t8 != 0) {
                    t9 = FUN_0c035ce4(a4);
                    if (t9 == 0) {
                        if (((((struct o538_int *)(a4))->v)) == 8) {
                            (((struct o4F8_uint *)(a4))->v) = 0x4;
                        } else {
                            t12 = (((struct o538_int *)(a4))->v);
                            if ((t12 != 6) && (t12 != 7)) {
                                if (t12 == 4) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                                }
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            }
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                    }
                } else {
                    if (((((struct o538_int *)(a4))->v)) == 8) {
                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                    } else {
                        t22 = (((struct o538_int *)(a4))->v);
                        if ((t22 != 6) && (t22 != 7)) {
                            if (t22 == 4) {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x0;
                            }
                        } else {
                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                        }
                    }
                }
            }
        } else {
            (((struct o538_uint *)(a4))->v) = 0x1;
            (((struct o50C_uint *)(a4))->v) = 0x0;
            (((struct o524_uint *)(a4))->v) = 0x0;
            t34 = FUN_0c0236ce(a4);
            if (t34 == 0) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0x2;
            }
        }
    }
    return 0x4F8;
}

int FUN_0c22bece(int a4, int a5, int a6, int a7)
{
    int t4;
    int t16;
    int t23;
    int t38;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        t38 = (mwRnaErrCallFunc(0xC237EE0, a5, a6, a7));
    } else {
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            (((struct o98_uint *)(a4))->v) = 0x1;
            FUN_0c22be84(a4);
            t4 = mwRnaGetTransSw(a4);
            if (t4 == 1) {
                FUN_0c22bd70(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            (((struct o98_uint *)(a4))->v) = 0x0;
        }
        FUN_0c22b6c8(((int)stk + 4));
        if ((*(int *)(((int)stk + 8))) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                (((struct o58_uint *)(a4))->v) = (*(int *)((a4 + 0x34)));
                (((struct o5C_uint *)(a4))->v) = 0x0;
                (((struct o60_uint *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if ((*(int *)(((int)stk + 8))) == 1) {
                t23 = mwRnaGetTransSw(a4);
                if (t23 != 1) {
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned int *)((a4 + 0x38)) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o64_uint *)(a4))->v) = 0x0;
                    (((struct o68_uint *)(a4))->v) = 0x0;
                    (((struct o50_uint *)(a4))->v) = 0x0;
                    (((struct o54_uint *)(a4))->v) = 0x0;
                    (((struct o44_uint *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    (((struct o58_uint *)(a4))->v) = (*(int *)((a4 + 0x34)));
                    (((struct o5C_uint *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                }
            }
        }
        t38 = (FUN_0c22b6e0(((int)stk + 4)));
    }
    return t38;
}

int FUN_0c046a20(int a4)
{
    int t0;
    int t10;
    int t29;
    int t44;
    int t65;
    int t66;
    int t47;
    int t7;
    int t26;
    int t40;
    int t60;

    t0 = (((struct o488_int *)(a4))->v);
    if ((*(int *)((t0 + 0x0))) == 0) {
        t40 = 0x0;
        if ((((((struct o4F0_int *)(a4))->v)) == 48) && (t7 = (((struct o4F8_int *)(a4))->v), t7 == 4)) {
            t10 = (((struct o544_int *)(a4))->v);
            if (t10 != 2) {
                if (t10 != 7) {
                    if (t10 != 8) {
                        t40 = 0x0;
                        if (t10 != 9) {
                        } else {
                            t40 = ((((struct oC_int *)0xC1FDEC0)->v));
                        }
                    } else {
                        t40 = ((((struct o8_int *)0xC1FDEC0)->v));
                    }
                } else {
                    t40 = ((((struct o4_int *)0xC1FDEC0)->v));
                }
            } else {
                t40 = ((((struct o0_int *)0xC1FDEC0)->v));
            }
        }
        t60 = t40;
        if ((((((struct o4F0_int *)(a4))->v)) == 49) && (t26 = (((struct o4F8_int *)(a4))->v), t26 == 4)) {
            t29 = (((struct o544_int *)(a4))->v);
            if (t29 != 1) {
                if (t29 != 2) {
                    if (t29 != 4) {
                        if (t29 != 9) {
                        } else {
                            t40 = ((((struct o14_int *)0xC1FDEC0)->v));
                        }
                    } else {
                        t40 = ((((struct o10_int *)0xC1FDEC0)->v));
                    }
                } else {
                    t40 = ((((struct o8_int *)0xC1FDEC0)->v));
                }
            } else {
                t40 = ((((struct o4_int *)0xC1FDEC0)->v));
            }
            t60 = t40;
        }
        t44 = (((struct o4F0_int *)(a4))->v);
        t65 = t44;
        t66 = t60;
        if (t44 == 50) {
            t47 = (((struct o4F8_int *)(a4))->v);
            t65 = t47;
            t66 = t60;
            if (t47 == 4) {
                t65 = (((struct o544_int *)(a4))->v);
                if (t65 != 0) {
                    if (t65 != 1) {
                        if (t65 != 2) {
                            if (t65 != 4) {
                            } else {
                                t60 = ((((struct o14_int *)0xC1FDEC0)->v));
                            }
                        } else {
                            t60 = ((((struct o10_int *)0xC1FDEC0)->v));
                        }
                    } else {
                        t60 = ((((struct o8_int *)0xC1FDEC0)->v));
                    }
                } else {
                    t60 = ((((struct o4_int *)0xC1FDEC0)->v));
                }
                t66 = t60;
            }
        }
        if (t66 != 0) {
            *(unsigned int *)((t0 + 0x0)) = 0x1;
            *(unsigned int *)((t0 + 0x4)) = t66;
            return FUN_0c0469a4(a4);
        }
        return t65;
    }
    return 0x488;
}

int FUN_0c22c602(int a4, int a5, int a6, int a7)
{
    int t37;
    int t7;
    int t4;
    int stk[4];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC237EE0, a5, a6, a7));
    }
    t37 = 0x94;
    if ((((((struct o94_int *)(a4))->v)) != 0) && (t4 = *(int *)((a4 + 0x38)), t4 != 0)) {
        FUN_0c22b6c8(((int)stk + 4));
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            t7 = mwRnaGetTransSw(a4);
            if (t7 == 1) {
                FUN_0c22bd70(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        if ((int)(*(int *)((a4 + 0x3C))) > 0) {
            *(volatile int *)((a4 + 0x3C));
            *(volatile int *)((a4 + 0x5C));
            *(volatile int *)((a4 + 0x8));
            _divls();
            *(volatile int *)((a4 + 0x38));
            _divls();
            *(volatile int *)((a4 + 0x94));
            FUN_0c233a38(((((struct o40_int *)(a4))->v)));
            if (((((struct o90_int *)(a4))->v)) == 2) {
                *(volatile int *)((a4 + 0x5C));
                *(volatile int *)((a4 + 0x3C));
                *(volatile int *)((a4 + 0x40));
                FUN_0c233a4a();
            }
            *(volatile int *)((a4 + 0x40));
            FUN_0c233a46();
        }
        t37 = (FUN_0c22b6e0(((int)stk + 4)));
    }
    return t37;
}



int FUN_0c0a7b90(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t14;
    int t26;
    float u27;
    float u29;
    int t30;
    int t20;
    int stk[27];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a4;
    R1012 = a5;
    R1004 = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = R1012;
    t4 = FUN_0c0d9dc0((-(*(float *)(((int)stk + 24)))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 20));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((u7 * t6), (*(float *)(((int)stk + 16))));
        t20 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t20 = (short)t9;
        }
    } else {
        t14 = FUN_0c0d9dc0((u7 * t5), (-(*(float *)(((int)stk + 24)))));
        t20 = (short)t14;
        if (0.0f > t5) {
            t20 = ((short)t14 + 0x8000);
        }
    }
    *(unsigned int *)(((R1004) + 0x0)) = (short)t20;
    t26 = R1008;
    u27 = ((*(float *)(((int)stk + 48))) * t5);
    u27 = u27 + t6 * (*(float *)(((int)stk + 56)));
    u29 = ((*(float *)(((int)stk + 32))) * t5);
    u29 = u29 + t6 * (*(float *)(((int)stk + 40)));
    t30 = FUN_0c0d9dc0(u29, u27);
    *(unsigned int *)((t26 + 0x0)) = (short)t30;
    return (short)t30;
}


