/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_DecodeHeader(int, int, int, int, int, int, int, int, int, int, int, int);
int ADXB_GetFormat(int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(void);
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
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
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
void vmsfs_fread1(int a4, int a5);
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

int kmGetCurrentScanline(int a4)
{
    int t4;
    int t5;
    int t1;
    int t7;
    int t8;
    int t36;
    int t38;
    float u39;
    int t31;
    int t33;
    float u34;
    int t27;
    float u28;
    int t40;
    int t46;
    int t48;
    int t21;
    int t42;

    t4 = a4;
    t5 = 0x0;
    if (((*(int *)0xC952300) & 2) != 0) {
        t1 = kmiReadRegister(0x10C);
        t4 = t1;
        t5 = (0x3FF & t1);
    }
    t7 = *(int *)0xC952350;
    t8 = *(int *)0xC952358;
    t36 = 0x1E0;
    t38 = (t8 + t7);
    u39 = 1.0f;
    if ((((*(int *)0xC95231C) & 0x1) != 1) || (0x1 == 0)) {
        t31 = 0xF0;
        t33 = (t8 + t7);
        u34 = 1.0f;
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t21 = *(int *)0xC95231C, (t21 & 44) != 0) && (0x1 != 0))) {
            t27 = 0xF0;
            u28 = 0.5f;
            if (((*(int *)0xC95231C) & 32) != 0) {
                t27 = 0x1E0;
                u28 = 1.0f;
            }
            t31 = t27;
            t33 = ((t8 + t7) + (t8 + t7));
            u34 = u28;
        }
        t36 = t31;
        t38 = t33;
        u39 = u34;
    }
    t40 = *(int *)0xC9525EC;
    t46 = t5;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t42 = *(int *)0xC95231C, (t42 & 44) != 0) && ((0x1 != 0) && ((t4 & 0x40000) != 0)))) {
        t46 = (t5 + 0x1);
    }
    t48 = ((int)((float)(t46 - t38) * u39) - ((unsigned int)t40 >> 16));
    if ((int)(int)((float)(t46 - t38) * u39) <= (int)t36) {
        t48 = (int)((float)(t46 - t38) * u39);
    }
    *(unsigned int *)((a4 + 0x0)) = t48;
    return 0x0;
}

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
                u5 = (*(float *)0xC08C150);
                u5 = u5 + (*(float *)0xC08C154) * (float)(FUN_0c0da2e0());
                *(float *)((a4 + 0x40)) = u5;
                t6 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t6 - 1);
                if ((int)(t6 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(float *)((a4 + 0x40)) = (*(float *)0xC08C158);
                    *(unsigned int *)((a4 + 0x34)) = ((((FUN_0c0da2e0()) & 0x1F) << 1) + 0x80);
                }
            }
        } else {
            u23 = (*(float *)0xC08C144);
            u23 = u23 + (*(float *)0xC08C148) * (FUN_0c0d9e90((*(int *)((a4 + 0x38)))));
            *(float *)((a4 + 0x40)) = u23;
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
    *(float *)0xC247F18 = (*(float *)((a4 + 0x40)));
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
    nlRotateAX((*(short *)((a4 + 0x48))));
    nlRotateAZ((*(short *)((a4 + 0x4C))));
    nlRotateAY((*(short *)((a4 + 0x4A))));
    u8 = *(float *)((a4 + 0x54));
    nlScale(u8, (*(float *)((a4 + 0x58))), u8);
    u11 = *(float *)((a4 + 0x58));
    u12 = *(float *)((a4 + 0x54));
    u13 = u12;
    if (u11 > u12) {
        u13 = u11;
    }
    FUN_0c0de000(u13);
    FUN_0c0c465c(((*(int *)((a4 + 0x60))) + 0x1B8));
    nlPopMatrix(0x1);
    t19 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t19 - 1);
    if ((int)(t19 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    u24 = *(float *)0xC091CC0;
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - u24);
    *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) + u24);
    *(unsigned int *)((a4 + 0x60)) = (((*(int *)((a4 + 0x60))) + 0x1) & 0x1F);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    return FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC091CC8));
}


int FUN_0c0cf1b0(int a4, int a5, int a6, int a7)
{
    int t11;
    int t2;
    int t7;
    int t4;
    int t16;
    int t26;
    int t44;
    int t36;
    float u21;
    int stk[13];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    FUN_0c0cf09e(a7, a5, a6, a7, (((int)stk + 8) + 0x14));
    t11 = a4;
    if (a4 == 22) {
        FUN_0c0da2e0();
        t2 = FUN_0c0e5f1c();
        t7 = 0x17;
        if ((((*(int *)0xC23A1A8) & 1) == 0) && ((unsigned int)t2 >= (unsigned int)0x3C)) {
            t4 = 0x18;
            if ((unsigned int)t2 < (unsigned int)0x50) {
                t4 = 0x16;
            }
            t7 = t4;
        }
        t11 = t7;
    }
    t16 = *(int *)(((int)stk + 8));
    if (t16 != 0) {
        if (t16 != 1) {
            t26 = t16;
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
                t26 = (FUN_0c0cf16a(0x2, t11, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x18), (((int)stk + 8) + 0xC)));
            }
            t36 = t26;
        } else {
            *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)0xC0CF34C));
            t36 = (FUN_0c0cf11c(t11, (((int)stk + 8) + 0x14)));
        }
        t44 = t36;
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
    if ((*(int *)((a4 + 0x48C))) == 45) {
        if ((*(int *)((a4 + 0x2FC))) != 0) {
            t6 = *(int *)(((*(int *)((a4 + 0x2FC))) + 0x20));
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
        if ((*(int *)((a4 + 0x2FC))) != 0) {
            t26 = *(int *)(((*(int *)((a4 + 0x2FC))) + 0x20));
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
    *(unsigned int *)0xC95B670 = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = (*(int *)0xC95B670);
            t4 = (t4 + 0x1);
            *(unsigned int *)0xC95B670 = t4;
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
    *(unsigned int *)0xC95B668 = 0x8;
    *(unsigned int *)0xC95B66C = 0x0;
    vmsfs_setretry(0xA);
    t19 = *(int *)0xC95B668;
    memset(0xC95B428, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    vmsio_init();
    return 0x0;
}

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t42;
    int t36;
    int t5;
    int t30;
    int t7;
    int t8;
    int t10;
    int t11;
    int t13;
    int t31;
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x1);
    t42 = t0;
    if ((int)t0 >= 0) {
        t36 = 0xFFFFFF04;
        if ((unsigned int)t0 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t31 = (vmsfs_save_exec_file_verify(a4, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t5 = vmsfs_xcreate(a4, (*(int *)(((int)stk + 20))), a8, ((int)stk + 12));
                t30 = t5;
                if ((int)t5 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t7 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = ((*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC239D40))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t10 = 0x0;
                        t11 = t7;
                        for (;;) {
                            t13 = vmsfs_xwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t13 >= 0) {
                                t10 = (t10 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t10 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t13;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t30 = 0x0;
                }
                t31 = t30;
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}

void vmsfs_fread1(int a4, int a5)
{
    int t2;
    int t9;
    int t15;
    int t33;
    int t35;
    int t41;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C226750:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t2 = (vmsio_isready((*(int *)((R4 + 0x28))))) != 0;
    R14 = (R4);
    if (t2) goto L_C226772;
    goto L_C226768;
    L_C226768:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_C22678C;
    L_C22678C:;
    R0 = (0xFFFFFF01);
    goto L_C226832;
    L_C226832:;
    return;
    L_C226772:;
    t9 = (vmsio_ismount((*(int *)((R14 + 0x28))))) == 0;
    if (t9) goto L_C22678C;
    goto L_C22677C;
    L_C22677C:;
    if (((*(signed char *)((((*(int *)((R14 + 0x28))) * 0x148) + 0xC956770))) != 0)) goto L_C2267BC;
    goto L_C22678C;
    L_C2267BC:;
    t15 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) >= 0;
    if (t15) goto L_C2267CC;
    goto L_C2267C6;
    L_C2267C6:;
    R0 = (0xFFFFFF03);
    goto L_C226832;
    L_C2267CC:;
    R0 = (0x40);
    R13 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x40))) != 0xFFFA)) goto L_C2267E4;
    goto L_C2267D8;
    L_C2267D8:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_C2267EA;
    goto L_C2267DE;
    L_C2267DE:;
    R0 = (0xFFFF0000);
    goto L_C226832;
    L_C2267EA:;
    R0 = (0x0);
    goto L_C226832;
    L_C2267E4:;
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_C2267EE;
    goto L_C2267EA;
    L_C2267EE:;
    if (((*(int *)((R14 + R0))) == 0xFFFC)) goto L_C2267FE;
    goto L_C2267F6;
    L_C2267F6:;
    if (((*(int *)((R14 + R0))) != 0xFFFF)) goto L_C226804;
    goto L_C2267FE;
    L_C2267FE:;
    R0 = (0xFFFFFF41);
    goto L_C226832;
    L_C226804:;
    t33 = *(int *)((R14 + R0));
    t35 = vmsfs_read_retry(R13, t33, (*(int *)(((int)stk + 4))));
    R12 = (t33);
    R4 = (t35);
    if (((int)t35 >= 0)) goto L_C22681A;
    goto L_C226816;
    L_C226816:;
    R0 = (R4);
    goto L_C226832;
    L_C22681A:;
    *(unsigned int *)(((0x40 + R14) + 0x0)) = (unsigned short)(get_fat(R13, R12, R6, R7));
    t41 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t41 - 1);
    R0 = ((t41 - 1));
    goto L_C226832;
}

int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int t34;
    int t1;
    int t3;
    int t27;
    int t6;
    int t23;
    int t8;
    int t19;
    int t30;
    int t4;
    int t5;
    int stk[18];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0xC956768);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t30 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 12)), t5 = *(signed char *)(((t4 + 0xC956768) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t23 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
                    t19 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 56))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 56)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 26)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 24)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 20))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x2C));
                        t19 = 0x0;
                    }
                    t23 = t19;
                }
                t27 = t23;
            }
            t30 = t27;
        }
        t34 = t30;
    }
    return t34;
}

int FUN_0c034fbc(int a4, int a5, int a6, int a7)
{
    int t25;
    int t35;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R11;
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
    L_C034FBC:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    *(unsigned int *)(((int)stk + 16)) = R7;
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C035008;
    goto L_C034FD4;
    L_C034FD4:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C035016;
    goto L_C034FDC;
    L_C034FDC:;
    R0 = (0x510);
    R4 = (0xC246FF0);
    if (((*(int *)(((((*(int *)((R14 + 0x510))) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C034FF8;
    goto L_C034FF0;
    L_C034FF0:;
    *(unsigned int *)((R14 + 0x50C)) = 0x0;
    goto L_C035016;
    L_C035016:;
    R0 = (0x0);
    goto L_C03509A;
    L_C03509A:;
    return R0;
    L_C034FF8:;
    R13 = (((*(int *)(((((*(int *)((R14 + R0))) << 2) + R4) + 0x0))) + 0x30));
    goto L_C035040;
    L_C035040:;
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((R14 + 0x30))) - (*(float *)((R13 + 0x0)))), ((*(float *)((R14 + 0x38))) - (*(float *)((R13 + 0x8)))));
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_C03508C;
    goto L_C03505E;
    L_C03505E:;
    R0 = (0x4D8);
    R4 = (0x8000);
    if (((int)(*(int *)((R14 + 0x4D8))) <= (int)0x8000)) goto L_C03507C;
    goto L_C035068;
    L_C035068:;
    t25 = *(int *)((R14 + R0));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((((int)((unsigned int)((int)((unsigned int)t25 + (unsigned int)0x0)) + ((((int)0x0 > (int)t25)) ? 1u : 0u))) >> 1) + R4));
    goto L_C03508C;
    L_C03508C:;
    FUN_0c0546fe(R14, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
    R0 = (0x1);
    goto L_C03509A;
    L_C03507C:;
    t35 = *(int *)((R14 + R0));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (((int)((unsigned int)((int)((unsigned int)t35 + (unsigned int)0x0)) + ((((int)0x0 > (int)t35)) ? 1u : 0u))) >> 1));
    goto L_C03508C;
    L_C035008:;
    if (((*(int *)((R14 + 0x514))) == 0)) goto L_C035016;
    goto L_C035010;
    L_C035010:;
    R13 = ((0x518 + R14));
    goto L_C035040;
}

int FUN_0c0df660(int a4, int a5, int a6)
{
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t18;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)0xC94C698 = 0xFFFFFFFF;
    if ((int)(*(int *)(((int)stk + 12))) > (int)(*(int *)(((int)stk + 8)))) {
        *(unsigned int *)0xC94C698 = 0x0;
        for (;;) {
        }
    }
    FUN_0c0dfcee(640.0f, 480.0f);
    *(unsigned int *)0xC94C6A0 = (*(int *)(((int)stk + 12)));
    *(unsigned int *)0xC94C69C = (*(int *)(((int)stk + 16)));
    t5 = *(int *)(((int)stk + 8));
    t6 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((t5 << 1) + t6) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0xC94C6A4 = ((((t5 << 1) + t6) + 0x3) & 0xFFFFFFFC);
    *(volatile int *)(((int)stk + 12));
    t8 = FUN_0c0e5dc0();
    t9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((t8 << 2) + t9) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0xC94C6A8 = ((((t8 << 2) + t9) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t10 = ((((t8 << 2) + t9) + 0x3) & 0xFFFFFFFC);
    t11 = 0xFFFFFFFC;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((int)stk + 8)))) {
            break;
        }
        t11 = (*(int *)(((int)stk + 4)));
        t11 = (t11 << 1);
        t10 = (*(int *)0xC94C69C);
        *(unsigned short *)((t11 + t10)) = 0xFFFFFFFF;
        t11 = (*(int *)(((int)stk + 4)));
        t11 = (t11 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t11;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        *(volatile int *)0xC94C6A0;
        t18 = FUN_0c0e5dc0();
        if ((int)(*(int *)(((int)stk + 4))) >= (int)t18) {
            break;
        }
        *(unsigned int *)((((*(int *)(((int)stk + 4))) << 2) + (*(int *)0xC94C6A4))) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    }
    return t18;
}

int FUN_0c034c26(int a4)
{
    int t0;
    int t7;
    float u8;
    float u9;
    float u10;
    float u11;
    int t12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    int t29;
    float u30;
    float u31;
    float u32;
    float u33;
    int t34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    int t2;
    int t24;

    t0 = *(int *)0xC23A1A8;
    if ((0x100 & t0) != 0) {
        if ((0x80000 & t0) == 0) {
            if ((t0 & 0x100000) == 0) {
                if (((*(int *)0xC247030) == 4) && (t2 = *(int *)0xC247034, t2 == 4)) {
                    t7 = *(int *)0xC246FF0;
                    u8 = *(float *)((a4 + 0x30));
                    u9 = *(float *)((t7 + 0x30));
                    u10 = *(float *)((t7 + 0x38));
                    u11 = *(float *)((a4 + 0x38));
                    t12 = *(int *)0xC246FF4;
                    u13 = ((u11 - u10) * (u11 - u10));
                    u13 = u13 + (u8 - u9) * (u8 - u9);
                    u14 = *(float *)((a4 + 0x30));
                    u15 = *(float *)((t12 + 0x30));
                    u16 = *(float *)((t12 + 0x38));
                    u17 = *(float *)((a4 + 0x38));
                    u18 = ((u17 - u16) * (u17 - u16));
                    u18 = u18 + (u14 - u15) * (u14 - u15);
                    if (!(_builtin_sqrtf(u13) > _builtin_sqrtf(u18))) {
                        *(unsigned int *)((a4 + 0x510)) = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x510)) = 0x1;
                    }
                    *(unsigned int *)((a4 + 0x50C)) = 0x1;
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    return 0x1;
                }
                if ((*(int *)0xC247030) == 4) {
                    *(unsigned int *)((a4 + 0x510)) = 0x0;
                    *(unsigned int *)((a4 + 0x50C)) = 0x1;
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    return 0x1;
                }
                if ((*(int *)0xC247034) == 4) {
                    *(unsigned int *)((a4 + 0x510)) = 0x1;
                    *(unsigned int *)((a4 + 0x50C)) = 0x1;
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x50C)) = 0x0;
                *(unsigned int *)((a4 + 0x524)) = 0x0;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x510)) = 0x0;
            *(unsigned int *)((a4 + 0x50C)) = 0x1;
            *(unsigned int *)((a4 + 0x524)) = 0x0;
            return 0x1;
        }
        *(unsigned int *)((a4 + 0x510)) = 0x1;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    if (((*(int *)0xC247030) == 4) && (t24 = *(int *)0xC247034, t24 == 4)) {
        t29 = *(int *)0xC246FF0;
        u30 = *(float *)((a4 + 0x30));
        u31 = *(float *)((t29 + 0x30));
        u32 = *(float *)((t29 + 0x38));
        u33 = *(float *)((a4 + 0x38));
        t34 = *(int *)0xC246FF4;
        u35 = ((u33 - u32) * (u33 - u32));
        u35 = u35 + (u30 - u31) * (u30 - u31);
        u36 = *(float *)((a4 + 0x30));
        u37 = *(float *)((t34 + 0x30));
        u38 = *(float *)((t34 + 0x38));
        u39 = *(float *)((a4 + 0x38));
        u40 = ((u39 - u38) * (u39 - u38));
        u40 = u40 + (u36 - u37) * (u36 - u37);
        if (!(_builtin_sqrtf(u35) > _builtin_sqrtf(u40))) {
            *(unsigned int *)((a4 + 0x510)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x510)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    if ((*(int *)0xC247030) == 4) {
        *(unsigned int *)((a4 + 0x510)) = 0x0;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    if ((*(int *)0xC247034) == 4) {
        *(unsigned int *)((a4 + 0x510)) = 0x1;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    return 0x0;
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
    int t31;
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
            t31 = 0x2;
        } else {
            t31 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
        }
        t35 = t31;
    } else {
        t35 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
    }
    return t35;
}

int FUN_0c054fb0(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t18;
    int t28;
    int t35;
    int t6;
    int t20;

    if ((*(int *)((a4 + 0x330))) != 0) {
        t2 = *(int *)((a4 + 0x330));
        t3 = 0x1;
        if (t2 == 3) {
            t3 = 0x2;
        }
        t5 = t2;
        t7 = t3;
        t8 = 0x0;
        for (;;) {
            t9 = (t7 == 0);
            t7 = (t7 - 1);
            if (t9) {
                t5 = 0x0;
                return t5;
            }
            t10 = 0x0;
            for (;;) {
                if ((*(int *)(((0xC2479B4 + (((t10 << 2) << 2) << 1)) + 0x0))) != 0) {
                    t5 = t10;
                    if (t5 != 9) {
                        t5 = 0xA;
                        t18 = (0xC2479B4 + (((t10 << 2) << 2) << 1));
                        t10 = (t10 + 0x1);
                        if ((int)t10 >= (int)t5) {
                            t20 = t18; break;
                        }
                        continue;
                    }
                    t5 = 0xFFFFFFFF;
                    return t5;
                }
                t20 = (0xC2479B4 + (((t10 << 2) << 2) << 1)); break;
            }
            t5 = 0x344;
            if (((*(int *)((a4 + t5))) != 0) && ((0x1 & t8) == 0)) {
                t5 = 0x34C;
                t6 = (*(int *)((a4 + t5)));
                *(unsigned int *)((t20 + 0x8)) = 0x0;
                t8 = (t8 | 0x1);
                *(unsigned int *)((t20 + 0x0)) = 0x1;
                *(unsigned int *)((t20 + 0x4)) = t6;
                t5 = t6;
                t5 = (t5 << 2);
                t6 = 0xC2475D4;
                *(unsigned int *)((t20 + 0x14)) = (*(int *)((0xC2475D4 + t5)));
                t6 = (*(int *)((t6 + t5)));
                *(unsigned int *)((t20 + 0x18)) = (*(int *)((t6 + 0x0)));
                *(unsigned int *)((t6 + 0x0)) = 0xC056B20;
                *(unsigned int *)((t20 + 0x1C)) = a4;
                t28 = *(int *)((0xC247634 + t5));
                t5 = (t5 + 0xC247604);
                *(unsigned int *)((t20 + 0xC)) = t28;
                *(unsigned int *)((t20 + 0x10)) = (*(int *)((t5 + 0x0)));
                continue;
            }
            t5 = 0x348;
            if (((*(int *)((a4 + t5))) != 0) && ((0x2 & t8) == 0)) {
                t5 = 0x350;
                t6 = (*(int *)((a4 + t5)));
                *(unsigned int *)((t20 + 0x8)) = 0x1;
                t8 = (t8 | 0x2);
                *(unsigned int *)((t20 + 0x0)) = 0x1;
                *(unsigned int *)((t20 + 0x4)) = t6;
                t5 = t6;
                t5 = (t5 << 2);
                t6 = 0xC2475D4;
                *(unsigned int *)((t20 + 0x14)) = (*(int *)((0xC2475D4 + t5)));
                t6 = (*(int *)((t6 + t5)));
                *(unsigned int *)((t20 + 0x18)) = (*(int *)((t6 + 0x0)));
                *(unsigned int *)((t6 + 0x0)) = 0xC056B20;
                *(unsigned int *)((t20 + 0x1C)) = a4;
                t35 = *(int *)((0xC247634 + t5));
                t5 = (t5 + 0xC247604);
                *(unsigned int *)((t20 + 0xC)) = t35;
                *(unsigned int *)((t20 + 0x10)) = (*(int *)((t5 + 0x0)));
                continue;
            }
            break;
        }
    }
    return 0xFFFFFFFF;
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

    if (((*(int *)0xC247030) == 4) && (t1 = *(int *)0xC247034, t1 == 4)) {
        t6 = *(int *)((a4 + 0xBC));
        u8 = *(float *)((((t6 << 2) + 0xC247084) + 0x0));
        u9 = *(float *)(((((t6 << 2) + 0xC247084) + 0x40) + 0x0));
        if ((*(int *)((a4 + 0x28C))) != 0) {
            t19 = *(int *)(((((*(int *)((a4 + 0x28C))) << 2) + 0xC246FF0) + 0x0));
            if (((*(int *)((t19 + 0x4D0))) == 1) && (t21 = *(int *)((t19 + 0x1C4)), (int)t21 <= (int)0x2)) {
                *(unsigned int *)((a4 + 0x510)) = (*(int *)((t19 + 0x1C4)));
            } else {
                if (((*(int *)((t19 + 0x554))) == 2) && (t28 = *(int *)((t19 + 0x50C)), t28 != 0)) {
                    *(unsigned int *)(((0x510 + a4) + 0x0)) = (((*(int *)((t19 + 0x510))) + 0x1) & 0x1);
                } else {
                    if (!(u8 > u9)) {
                        *(unsigned int *)((a4 + 0x510)) = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x510)) = 0x1;
                    }
                }
            }
        } else {
            if (!(u8 > u9)) {
                *(unsigned int *)((a4 + 0x510)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x510)) = 0x1;
            }
        }
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    if ((*(int *)0xC247030) == 4) {
        *(unsigned int *)((a4 + 0x510)) = 0x0;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    if ((*(int *)0xC247034) == 4) {
        *(unsigned int *)((a4 + 0x510)) = 0x1;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        return 0x1;
    }
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    return 0x0;
}

int FUN_0c02b648(int a4)
{
    int t0;
    int t1;
    int t8;
    int t9;
    int t10;
    int t15;
    int t4;
    int t2;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    } else {
        t1 = FUN_0c02a35a();
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        t2 = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        t2 = 0xC;
                    }
                    t4 = t2;
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x2;
                    t4 = 0x6;
                }
                *(unsigned int *)((a4 + 0x4F8)) = t4;
            } else {
                *(unsigned int *)((a4 + 0x538)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
        } else {
            t8 = FUN_0c035b26(a4);
            if (t8 != 0) {
                t9 = FUN_0c035ce4(a4);
                if (t9 != 0) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                } else {
                    t10 = *(int *)((a4 + 0x538));
                    if ((t10 == 8) || ((t10 == 6) || ((t10 == 7) || ((t10 == 4) || ((t10 == 5) || (t10 == 10)))))) {
                        *(unsigned int *)((a4 + 0x524)) = 0x0;
                        FUN_0c0236ce(a4);
                    }
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                }
            } else {
                t15 = *(int *)((a4 + 0x538));
                if ((t15 == 8) || ((t15 == 6) || ((t15 == 7) || ((t15 == 4) || ((t15 == 5) || (t15 == 10)))))) {
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    FUN_0c0236ce(a4);
                }
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            }
        }
    }
    return 0x4F8;
}

int FUN_0c0a7b90(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t11;
    int t14;
    int t16;
    int t26;
    float u27;
    float u29;
    int t30;
    int t20;
    int stk[27];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = *(int *)(((int)stk + 12));
    t4 = FUN_0c0d9dc0((-(*(float *)(((int)stk + 24)))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 20));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((u7 * t6), (*(float *)(((int)stk + 16))));
        t11 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t11 = (short)t9;
        }
        t20 = t11;
    } else {
        t14 = FUN_0c0d9dc0((u7 * t5), (-(*(float *)(((int)stk + 24)))));
        t16 = (short)t14;
        if (0.0f > t5) {
            t16 = ((short)t14 + 0x8000);
        }
        t20 = t16;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (short)t20;
    t26 = *(int *)(((int)stk + 8));
    u27 = ((*(float *)(((int)stk + 48))) * t5);
    u27 = u27 + t6 * (*(float *)(((int)stk + 56)));
    u29 = ((*(float *)(((int)stk + 32))) * t5);
    u29 = u29 + t6 * (*(float *)(((int)stk + 40)));
    t30 = FUN_0c0d9dc0(u29, u27);
    *(unsigned int *)((t26 + 0x0)) = (short)t30;
    return (short)t30;
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
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    } else {
        t1 = FUN_0c03593a(a4);
        if (t1 != 0) {
            t2 = FUN_0c02a35a();
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
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
                t8 = FUN_0c035b26(a4);
                if (t8 != 0) {
                    t9 = FUN_0c035ce4(a4);
                    if (t9 == 0) {
                        if ((*(int *)((a4 + 0x538))) == 8) {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        } else {
                            t12 = *(int *)((a4 + 0x538));
                            if ((t12 != 6) && (t12 != 7)) {
                                if (t12 == 4) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    }
                } else {
                    if ((*(int *)((a4 + 0x538))) == 8) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    } else {
                        t22 = *(int *)((a4 + 0x538));
                        if ((t22 != 6) && (t22 != 7)) {
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
            }
        } else {
            *(unsigned int *)((a4 + 0x538)) = 0x1;
            *(unsigned int *)((a4 + 0x50C)) = 0x0;
            *(unsigned int *)((a4 + 0x524)) = 0x0;
            t34 = FUN_0c0236ce(a4);
            if (t34 == 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
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
            *(unsigned int *)((a4 + 0x98)) = 0x1;
            FUN_0c22be84(a4);
            t4 = mwRnaGetTransSw(a4);
            if (t4 == 1) {
                FUN_0c22bd70(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            *(unsigned int *)((a4 + 0x98)) = 0x0;
        }
        FUN_0c22b6c8(((int)stk + 4));
        if ((*(int *)(((int)stk + 8))) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                *(unsigned int *)((a4 + 0x58)) = (*(int *)((a4 + 0x34)));
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
                *(unsigned int *)((a4 + 0x60)) = 0x0;
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
                    *(unsigned int *)((a4 + 0x64)) = 0x0;
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    *(unsigned int *)((a4 + 0x50)) = 0x0;
                    *(unsigned int *)((a4 + 0x54)) = 0x0;
                    *(unsigned int *)((a4 + 0x44)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned int *)((a4 + 0x58)) = (*(int *)((a4 + 0x34)));
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
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
    int t24;
    int t10;
    int t12;
    int t43;
    int t29;
    int t31;
    int t44;
    int t65;
    int t66;
    int t47;
    int t62;
    int t63;
    int t49;
    int t51;
    int t7;
    int t21;
    int t18;
    int t15;
    int t26;
    int t40;
    int t37;
    int t34;
    int t60;
    int t57;
    int t54;

    t0 = *(int *)((a4 + 0x488));
    if ((*(int *)((t0 + 0x0))) == 0) {
        t24 = 0x0;
        if (((*(int *)((a4 + 0x4F0))) == 48) && (t7 = *(int *)((a4 + 0x4F8)), t7 == 4)) {
            t10 = *(int *)((a4 + 0x544));
            if (t10 != 2) {
                if (t10 != 7) {
                    if (t10 != 8) {
                        t12 = 0x0;
                        if (t10 != 9) {
                        } else {
                            t12 = (*(int *)0xC1FDECC);
                        }
                        t15 = t12;
                    } else {
                        t15 = (*(int *)0xC1FDEC8);
                    }
                    t18 = t15;
                } else {
                    t18 = (*(int *)0xC1FDEC4);
                }
                t21 = t18;
            } else {
                t21 = (*(int *)0xC1FDEC0);
            }
            t24 = t21;
        }
        t43 = t24;
        if (((*(int *)((a4 + 0x4F0))) == 49) && (t26 = *(int *)((a4 + 0x4F8)), t26 == 4)) {
            t29 = *(int *)((a4 + 0x544));
            if (t29 != 1) {
                if (t29 != 2) {
                    if (t29 != 4) {
                        t31 = t24;
                        if (t29 != 9) {
                        } else {
                            t31 = (*(int *)0xC1FDED4);
                        }
                        t34 = t31;
                    } else {
                        t34 = (*(int *)0xC1FDED0);
                    }
                    t37 = t34;
                } else {
                    t37 = (*(int *)0xC1FDEC8);
                }
                t40 = t37;
            } else {
                t40 = (*(int *)0xC1FDEC4);
            }
            t43 = t40;
        }
        t44 = *(int *)((a4 + 0x4F0));
        t65 = t44;
        t66 = t43;
        if (t44 == 50) {
            t47 = *(int *)((a4 + 0x4F8));
            t62 = t47;
            t63 = t43;
            if (t47 == 4) {
                t49 = *(int *)((a4 + 0x544));
                if (t49 != 0) {
                    if (t49 != 1) {
                        if (t49 != 2) {
                            t51 = t43;
                            if (t49 != 4) {
                            } else {
                                t51 = (*(int *)0xC1FDED4);
                            }
                            t54 = t51;
                        } else {
                            t54 = (*(int *)0xC1FDED0);
                        }
                        t57 = t54;
                    } else {
                        t57 = (*(int *)0xC1FDEC8);
                    }
                    t60 = t57;
                } else {
                    t60 = (*(int *)0xC1FDEC4);
                }
                t62 = t49;
                t63 = t60;
            }
            t65 = t62;
            t66 = t63;
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
    if (((*(int *)((a4 + 0x94))) != 0) && (t4 = *(int *)((a4 + 0x38)), t4 != 0)) {
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
            FUN_0c0e5dc0();
            *(volatile int *)((a4 + 0x38));
            FUN_0c0e5dc0();
            *(volatile int *)((a4 + 0x94));
            FUN_0c233a38((*(int *)((a4 + 0x40))));
            if ((*(int *)((a4 + 0x90))) == 2) {
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
