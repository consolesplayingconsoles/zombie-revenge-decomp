/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[14]; } Stk14;
int FUN_0c034134(int, float);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034924(int, int);
int FUN_0c0349ea(int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0db0a0(int, int);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e6118(void);
int FUN_0c9debc0(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int nlFreeTextureAll(void);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int syMalloc_default_malloc(int a4);
int FUN_0c045840(void);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int FUN_0c0c11b0(int a4, int a5);
int FUN_0c9dee14(int a4);
int FUN_0c04569c(int a4);
int FUN_0c0430c0(int a4, float f4);
int FUN_0c034efc(int a4, int a5, int a6, int a7);
int FUN_0c0ce638(int a4, int a5);
int nlFreeCommonTextureAll(void);
int FUN_0c041dd0(int a4);
int FUN_0c035402(int a4);
int nlSetPaletteData(int a4, int a5, int a6);

int syMalloc_default_malloc(int a4)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t9;
    int t14;
    int stk[3];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t2 = *(int *)0xC94DF9C;
    t4 = (*(int *)((t2 + 0x0)));
    t5 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t4 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t4 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t5 = t4;
        t4 = (*(int *)((t4 + 0x0)));
    }
    t9 = *(int *)((t4 + 0x4));
    if (t9 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t5 + 0x0)) = (*(int *)((t4 + 0x0)));
        t14 = t4;
    } else {
        *(unsigned int *)((t4 + 0x4)) = (t9 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t4 + ((((t9 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t14 = (t4 + ((((t9 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC94DF9C = t5;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t14 + 0x20);
}

int FUN_0c045840(void)
{
    int t22;
    int t2;
    int t4;
    int t6;
    int t7;
    int t12;
    int t15;
    int t16;
    int stk[57];

    FUN_0c0e6118();
    { struct mv14 { int w[14]; }; *(struct mv14 *)(((int)stk + 20)) = *(struct mv14 *)(0xC0F5DB0); }
    t22 = 0xC246DDC;
    if ((*(int *)0xC246DDC) != 0) {
        t2 = ((int (*)(int, int, Stk14))(FUN_0c0db0a0))(0x1, 0x20, *(Stk14 *)(((int)stk + 20)));
        t4 = (*(int *)0xC247994);
        *(int *)((int)stk + 16) = t4;
        *(int *)((int)stk + 12) = 0xC0F5DE8;
        t6 = (nlPrintf(0xC0F5DE8, t4));
        t7 = 0x0;
        for (;;) {
            if ((int)(*(int *)(((0xC247634 + (t7 << 2)) + 0x0))) > 0) {
                t6 = (((int (*)(int, int))(FUN_0c0db0a0))(0x1, (t7 + 0x21)));
                t6 = 0xC2475D4;
                t6 = (t6 + 0x30);
                t6 = (*(int *)(((t7 << 2) + t6)));
                t6 = (t6 << 2);
                t12 = (*(int *)((((int)stk + 20) + t6)));
                *(int *)((int)stk + 16) = t12;
                t6 = 0xC2475D4;
                t6 = (t6 + 0x60);
                t6 = (*(int *)(((t7 << 2) + t6)));
                t6 = (t6 << 2);
                t15 = (*(int *)(((((int)stk + 20) + 0x38) + t6)));
                *(int *)((int)stk + 12) = t15;
                t16 = t7;
                *(int *)((int)stk + 8) = t16;
                *(int *)((int)stk + 4) = 0xC0F5DFC;
                t6 = (nlPrintf(0xC0F5DFC, t16, t15, t12));
            }
            t7 = (t7 + 0x1);
            if ((int)t7 >= (int)0xC) {
                break;
            }
        }
        t22 = t6;
    }
    return t22;
}

int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int t4;
    int t10;
    int t13;
    int t17;
    int t20;
    int t23;
    int stk[10];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    R11 = (R4);
    R13 = (R7);
    if ((R7 != 0)) goto L_C2287B2;
    t4 = vmsfs_fgetsize(R11, (*(int *)(((int)stk + 8))));
    R4 = (t4);
    if (((int)t4 >= 0)) goto L_C2287B0;
    R0 = (R4);
    L_C228800:;
    return R0;
    L_C2287B0:;
    R13 = (R4);
    L_C2287B2:;
    t10 = vmsfs_fopen(R11, (*(int *)(((int)stk + 8))), ((int)stk + 4));
    R14 = (t10);
    if (((int)t10 < 0)) goto L_C2287FE;
    t13 = *(int *)(((int)stk + 12));
    *(unsigned int *)((((R11 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    *(unsigned int *)((((R11 * 0x148) + 0xC956768) + 0x34)) = R13;
    t17 = ((R11 * 0x148) + 0xC956768);
    R11 = (0x0);
    R12 = (t13);
    R4 = t17;
    if (((unsigned int)0x0 >= (unsigned int)R13)) goto L_C2287F4;
    R10 = (0x200);
    L_C2287DE:;
    t20 = vmsfs_fread1((*(int *)(((int)stk + 4))), R12);
    R14 = (t20);
    if (((int)t20 < 0)) goto L_C2287F6;
    t23 = (unsigned int)(R11 + 0x1) < (unsigned int)R13;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R10));
    if (t23) goto L_C2287DE;
    L_C2287F4:;
    R14 = (0x0);
    L_C2287F6:;
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    L_C2287FE:;
    R0 = (R14);
    goto L_C228800;
}

int FUN_0c0c11b0(int a4, int a5)
{
    int t5;
    int t9;
    int t10;
    int t11;
    int t1;
    int t3;
    int t7;
    int t8;
    int t16;
    int t17;
    int t18;
    int t19;

    if (a4 != 0) {
        t1 = (FUN_0c0db0a0(0x3, 0xA));
    } else {
        t3 = a5;
    }
    t5 = t1;
    t9 = 0xC2622C8;
    t10 = t3;
    t11 = 0x0;
    for (;;) {
        if (a4 != 0) {
            t7 = t11;
            t7 = (t7 << 2);
            t8 = 0xC1E3A80;
            t7 = (t7 + 0xC52315C);
            t5 = (nlPrintf((t8), (t7)));
        } else {
            t16 = t7;
            t17 = t8;
            t18 = t9;
            t19 = t10;
        }
        t7 = t16;
        t8 = t17;
        t9 = t18;
        t10 = t19;
        t9 = t11;
        t9 = (t9 << 2);
        t8 = (*(int *)(((0xC20B184) + 0x0)));
        t7 = t9;
        t7 = (t7 + 0xC52315C);
        if ((unsigned int)t7 >= (unsigned int)t8) {
            break;
        }
        t5 = t11;
        t5 = (t5 + 0x2);
        t5 = (t5 << 2);
        t11 = (*(int *)((0xC52315C + t5)));
        if (t11 == 0) {
            if (a4 != 0) {
                t8 = 0xC1E3A88;
                t5 = (nlPrintf((t8)));
                return t5;
            }
            return t5;
        }
    }
    *(unsigned int *)0xC2622C0 = 0xA110CFA1;
    *(unsigned int *)0xC2622C4 = (t9 + 0xC52315C);
    *(unsigned int *)0xC2622C8 = a5;
    for (;;) {
    }
}

int FUN_0c9dee14(int a4)
{
    int t3;
    int t4;
    int t5;
    int t48;
    int t49;
    int t50;
    int t6;
    float u8;
    float u9;
    int t35;
    int t38;
    int t55;
    int t59;
    int t60;
    int t70;
    int t71;
    int t67;
    int t78;
    int t0;
    int t1;
    int t2;
    int t51;
    int t12;
    int t13;
    int t36;
    int t37;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;
    int t25;
    int t26;
    int t30;
    int t31;
    int t32;
    int t33;
    int t42;
    int t43;
    int t44;
    int t58;
    int t61;
    int t62;
    int t69;
    int t72;
    int t73;
    int t74;
    int t79;
    int t80;
    int t81;

    t3 = a4;
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t5 = t4;
        t48 = t0;
        t49 = t3;
        t50 = t1;
        if ((t4 & 62) != 0) {
            t0 = 0xC0DC510;
            t6 = t3;
            t3 = 0x0;
            nlPushMatrix(t3);
            t0 = 0xC0DCC70;
            t3 = t6;
            t3 = (t3 + 0x8);
            if ((t4 & 2) != 0) {
                u8 = *(float *)((t3 + 0x0));
                t3 = (t3 + 0x4);
                u9 = *(float *)((t3 + 0x0));
                t3 = (t3 + 0x4);
                FUN_0c0dcc70(u8, u9, (*(float *)((t3 + 0x0))));
            } else {
                t12 = 0xC0DCC70;
                t13 = t3;
            }
            t0 = t12;
            t3 = t13;
            t35 = t0;
            t38 = t3;
            if ((t4 & 32) != 0) {
                if (1) {
                    t3 = (*(int *)((t6 + 0x1C)));
                    nlRotateAZ(t3);
                } else {
                    t17 = t0;
                    t18 = 0xC0DC950;
                    t19 = t3;
                }
                t0 = t17;
                t2 = t18;
                t3 = t19;
                t1 = 0xC0DC890;
                if ((t4 & 16) != 0) {
                    t3 = (*(int *)((t6 + 0x18)));
                    nlRotateAY(t3);
                } else {
                    t23 = t0;
                    t24 = 0xC0DC890;
                    t25 = t2;
                    t26 = t3;
                }
                t0 = t23;
                t1 = t24;
                t2 = t25;
                t3 = t26;
                t0 = 0xC0DC6E0;
                if ((t4 & 8) != 0) {
                    t3 = (*(int *)((t6 + 0x14)));
                    nlRotateAX(t3);
                } else {
                    t30 = 0xC0DC6E0;
                    t31 = t1;
                    t32 = t2;
                    t33 = t3;
                }
                t35 = t30;
                t36 = t31;
                t37 = t32;
                t38 = t33;
            }
            t0 = t35;
            t1 = t36;
            t2 = t37;
            t3 = t38;
            t2 = 0xC0DCBB0;
            if ((t4 & 4) != 0) {
                t3 = t6;
                t3 = (t3 + 0x20);
                FUN_0c0dcbb0(t3);
            } else {
                t42 = t0;
                t43 = t1;
                t44 = 0xC0DCBB0;
            }
            t48 = t42;
            t49 = t6;
            t50 = t43;
            t51 = t44;
        } else {
            t51 = t2;
        }
        t0 = t48;
        t1 = t50;
        t2 = t51;
        t3 = (*(int *)((t49 + 0x4)));
        t55 = t49;
        t59 = t4;
        t60 = t49;
        if (t3 != 0) {
            FUN_0c9debc0(t3);
            t59 = t5;
            t60 = t55;
        } else {
            t58 = t0;
            t61 = t1;
            t62 = t2;
        }
        t0 = t58;
        t1 = t61;
        t2 = t62;
        t3 = (*(int *)((t60 + 0x2C)));
        t70 = t59;
        t71 = t60;
        if (t3 != 0) {
            t67 = ((int (*)(int))(FUN_0c9dee14))(t3);
            t70 = t5;
            t71 = t55;
        } else {
            t69 = t0;
            t72 = t1;
            t73 = t2;
            t74 = t3;
        }
        t0 = t69;
        t1 = t72;
        t2 = t73;
        t3 = t74;
        t0 = 0xC0DC4C0;
        t78 = t70;
        if ((t70 & 62) != 0) {
            t3 = 0x1;
            t78 = (nlPopMatrix(t3));
        } else {
            t79 = 0xC0DC4C0;
            t80 = t1;
            t81 = t2;
        }
        t0 = t79;
        t1 = t80;
        t2 = t81;
        t3 = (*(int *)((t71 + 0x30)));
        if (t3 == 0) {
            break;
        }
    }
    return t78;
}

int FUN_0c04569c(int a4)
{
    int t1;
    int t2;
    int t3;
    int t35;
    int t37;
    int t7;
    int t31;
    int t33;
    int t15;
    int t0;
    int t36;
    int t9;
    int t32;
    int t27;
    int t28;
    int t29;
    int t21;
    int t22;
    int t23;
    int t16;
    int t17;
    int stk[11];

    t1 = a4;
    t2 = 0x10;
    for (;;) {
        t3 = *(int *)((t2 + 0xC246FF0));
        t35 = 0xC246FF0;
        t37 = t1;
        if (t3 != 0) {
            t0 = (*(int *)0xC246DC8);
            t7 = 0xC246FF0;
            if (t0 != 0) {
                t1 = t3;
                t7 = (FUN_0c0349ea(t1, ((int)stk + 4), (((int)stk + 4) + 0x4)));
            } else {
                t9 = t1;
            }
            t0 = 0xC246DCC;
            t1 = t9;
            t1 = (*(int *)((t0 + 0x0)));
            t31 = t7;
            t33 = t1;
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        t15 = t1;
                        if (t1 != 4) {
                            t16 = t0;
                            t17 = t1;
                        } else {
                            t1 = t3;
                            t15 = (FUN_0c034924(t1, 0x2));
                        }
                        t21 = t15;
                        t22 = t16;
                        t23 = t17;
                    } else {
                        t1 = t3;
                        t21 = (FUN_0c034924(t1, 0xA5E));
                    }
                    t27 = t21;
                    t28 = t22;
                    t29 = t23;
                } else {
                    t1 = t3;
                    t27 = (FUN_0c034924(t1, 0xA5C));
                }
                t31 = t27;
                t32 = t28;
                t33 = t29;
            } else {
                t32 = t0;
            }
            t35 = t31;
            t36 = t32;
            t37 = t33;
        } else {
            t36 = t0;
        }
        t2 = (t2 + 0x4);
        t0 = t36;
        t1 = t37;
        if ((unsigned int)t2 >= (unsigned int)0x30) {
            break;
        }
    }
    return t35;
}

int FUN_0c0430c0(int a4, float f4)
{
    int t18;
    int t2;
    int t5;
    int t15;
    int t13;
    int t6;
    int t12;
    int stk[11];

    *(float *)(((int)stk + 28)) = f4;
    t18 = 0x0;
    if ((*(int *)((a4 + 0x50C))) != 0) {
        t2 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
        FUN_0c03442c(a4, t2, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        t5 = FUN_0c034134(a4, (*(float *)(((int)stk + 28))));
        t15 = 0x3;
        if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t6 == 0)) {
            t13 = 0x2;
            if (((int)(*(int *)((a4 + 0x510))) < (int)0x2) && (t12 = *(int *)((t2 + 0x32C)), t12 == 0)) {
                t13 = 0x1;
            }
            t15 = t13;
        }
        t18 = t15;
    }
    return t18;
}

int FUN_0c034efc(int a4, int a5, int a6, int a7)
{
    int t21;
    int t31;
    int t1;
    int t7;
    int t8;
    float u9;
    int t14;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t21 = 0x0;
    t31 = 0;
    if ((*(int *)(((0xC247030 + (a5 << 2)) + 0x0))) != 0) {
        t1 = *(int *)(((0xC246FF0 + (a5 << 2)) + 0x0));
        FUN_0c0a68ec(((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)((t1 + 0x30)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t1 + 0x38)))));
        t7 = *(int *)(((int)stk + 4));
        t8 = *(short *)((a4 + 0x6E));
        u9 = *(float *)0xC035030;
        t14 = 0x0;
        if (u9 > _builtin_fabsf((float)(short)(t8 - t7))) {
            FUN_0c0546fe(a4, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))));
            t14 = 0x1;
        } else {
            _builtin_fabsf((float)(short)(t8 - t7));
        }
        t21 = t14;
        t31 = ((u9 > _builtin_fabsf((float)(short)(t8 - t7))));
    } else {
        t31 = (1);
    }
    return t21;
}

int FUN_0c0ce638(int a4, int a5)
{
    int t2;
    int t3;
    int t0;
    int t1;
    int t13;

    t2 = 0x0;
    t3 = a5;
    for (;;) {
        if ((*(int *)((t3 + 0x0))) == 0) {
            break;
        }
        if (t2 == a4) {
            t1 = (*(int *)((t3 + 0x0)));
            t0 = (FUN_0c0db0a0(((*(int *)((t1 + 0x0))) - 4), (*(int *)((t1 + 0x4)))));
            t13 = 0xC1E9F40;
        } else {
            t1 = (*(int *)((t3 + 0x0)));
            t0 = (FUN_0c0db0a0(((*(int *)((t1 + 0x0))) - 4), (*(int *)((t1 + 0x4)))));
            t13 = 0xC1E9F44;
        }
        t0 = (nlPrintf(t13));
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x8);
    }
    return t0;
}

int nlFreeCommonTextureAll(void)
{
    int t14;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    int t2;

    nlFreeTextureAll();
    t14 = 0xC20CC48;
    if ((*(int *)0xC20CC48) != 0) {
        t3 = 0xFFFFFFF8;
        t4 = 0xFFFFFFFF;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)0xC20CC48)) {
                break;
            }
            t4 = (t4 + 0x1);
            *(unsigned int *)((((*(int *)0xC943D78) + t3) + 0x0)) = 0x0;
            t2 = (*(int *)0xC943D78);
            t2 = (t2 + t3);
            t3 = (t3 + 0x8);
            *(unsigned int *)((t2 + 0x4)) = 0xFFFFFFFF;
        }
        t9 = 0xC20CC48;
        t10 = 0x0;
        t11 = 0x0;
        for (;;) {
            if ((int)t11 >= (int)(*(int *)0xC20CC4C)) {
                break;
            }
            t9 = (*(int *)0xC943D7C);
            t11 = (t11 + 0x1);
            *(unsigned int *)((t10 + t9)) = 0x0;
            t10 = (t10 + 0x4);
        }
        t14 = t9;
    }
    return t14;
}

int FUN_0c041dd0(int a4)
{
    int t0;
    int t4;

    t0 = *(int *)((a4 + 0x4DC));
    *(unsigned int *)((a4 + 0x2C4)) = (*(short *)((((((*(int *)((a4 + 0x4E0))) << 2) << 1) + (*(int *)(((((((t0 - 76) << 1) + (t0 - 76)) << 2) + 0xC1F518C) + 0x0)))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    t4 = *(int *)((a4 + 0x4DC));
    *(unsigned int *)((a4 + 0x4E4)) = (*(int *)((((((*(int *)((a4 + 0x4E0))) << 2) << 1) + (*(int *)(((0xC1F518C + ((((t4 - 76) << 1) + (t4 - 76)) << 2)) + 0x0)))) + 0x4)));
    return 0x4E4;
}

int FUN_0c035402(int a4)
{
    int stk[10];

    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 4)) = *(struct mv8 *)(0xC0F558C); }
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((((int)stk + 4) + ((*(int *)(((0x2A0 + a4) + 0x0))) << 2)) + 0x0))));
    return 0x6E;
}

int nlSetPaletteData(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    if ((*(signed char *)(((int)_builtin_get_gbr() + 1))) != 3) {
        t1 = (a4 << 2);
        t2 = a5;
        t3 = a6;
        for (;;) {
            t4 = *(short *)((t2 + 0x0));
            t2 = (t2 + 0x2);
            t3 = (t3 - 0x1);
            *(unsigned short *)((t1 + 0xC9DD220)) = t4;
            t1 = (t1 + 0x4);
            if (t3 == 0) {
                break;
            }
        }
        *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
        return 0x1;
    }
    t5 = (a4 << 2);
    t6 = a5;
    t7 = a6;
    for (;;) {
        t8 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t7 = (t7 - 0x1);
        *(unsigned int *)((t5 + 0xC9DD220)) = t8;
        t5 = (t5 + 0x4);
        if (t7 == 0) {
            break;
        }
    }
    *(unsigned char *)(((int)_builtin_get_gbr() + 0)) = 0x1;
    return 0x1;
}
