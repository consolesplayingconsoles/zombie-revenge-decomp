/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c017718(int, int, float);
int FUN_0c01cdf2(int);
int FUN_0c01d9c2(int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c08477e(int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c465c(int);
int FUN_0c0d6e1a(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c0dcc70(float, float, float);
float nlLength(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int _quick_odd_mvn(int, int, int, int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int mwPlaEntryErrFn(int, int);
int mwPlySetLpFlg(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int FUN_0c01788c(int a4);
int FUN_0c0d6254(int a4, int a5, int a6);
int FUN_0c084f18(int a4);
int vmsfs_fdelete_ex(int a4, int a5, int a6);

int FUN_0c01788c(int a4)
{
    int t11;
    int t19;
    int t28;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x1BC))) != 0) {
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t11 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t11 << 2) + 0xC247584)) = ((*(int *)(((t11 << 2) + 0xC247584))) + 0x3E8);
        }
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x100);
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        t19 = *(int *)((a4 + 0x1C4));
        *(unsigned int *)((a4 + 0x1B0)) = (((int)t19 >= 0) ? (0x1 << (t19 & 31)) : ((-(int)t19 & 31) ? ((int)0x1 >> (-(int)t19 & 31)) : ((int)0x1 >> 31)));
        *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
    }
    if ((*(int *)((a4 + 0x220))) != 0) {
        t28 = 0x0;
        for (;;) {
            FUN_0c017718(a4, t28, 0.0f);
            FUN_0c017718(a4, t28, 12.0f);
            t28 = (t28 + 0x1);
            if ((unsigned int)t28 >= (unsigned int)0xA) {
                break;
            }
        }
        if ((*(int *)0xC23ED50) == 20) {
            *(unsigned int *)(((((*(int *)((a4 + 0x22C))) << 2) << 1) + 0xC23EE14)) = 0x0;
        }
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + 12.0f), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}


int FUN_0c084f18(int a4)
{
    float u0;
    int t1;
    float u11;
    float u12;
    int t18;
    int t24;
    int t38;
    int t39;

    u0 = *(float *)(((0x4C + a4) + 0x0));
    t1 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t1 + (int)u0);
    if ((int)(t1 + (int)u0) > (int)0xFF) {
        *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) - 127);
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - (*(float *)(((0x3C + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - (*(float *)(((0x40 + a4) + 0x0))));
    u11 = *(float *)((a4 + 0x38));
    u12 = *(float *)(((0x44 + a4) + 0x0));
    *(float *)((a4 + 0x38)) = (u11 - u12);
    FUN_0c084570((*(int *)((a4 + 0x48))), (*(int *)((a4 + 0x50))), (int)(*(float *)((a4 + 0x30))), (int)(*(float *)((a4 + 0x34))), (int)(u11 - u12));
    t18 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t18 - 1);
    if ((int)(t18 - 1) <= 0) {
        t24 = *(int *)0xC248A88;
        FUN_0c084570(((int)t24 >> 8), (unsigned char)t24, (*(int *)0xC248A7C), (*(int *)0xC248A80), ((*(int *)0xC248A84)));
        if ((*(int *)((a4 + 0x64))) != 0) {
            FUN_0c08477e(0x0);
            mwPlaEntryErrFn(0xFFFFFFFF, 0x0);
        }
        return FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x64))) != 0) {
        *(volatile int *)((a4 + 0x64));
        *(volatile int *)((a4 + 0x60));
        t38 = FUN_0c0e5dc0();
        t39 = t38;
        if ((int)t38 < 0) {
            t39 = 0x0;
        }
        FUN_0c08477e(0x1);
        return mwPlaEntryErrFn(0xFFFFFFFF, (((t39 << 16) | (t39 << 8)) | t39));
    }
    return 0x64;
}

int vmsfs_fdelete_ex(int a4, int a5, int a6)
{
    int t0;
    int t8;
    int t12;
    int t17;
    int t26;
    int t27;
    int t37;
    int t42;
    int t45;
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
    R6 = a6;
    L_C226EF4:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    *(unsigned int *)((((R4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    t0 = *(int *)((((R4 * 0x148) + 0xC956768) + 0x4));
    *(unsigned int *)((((R4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC239D54)));
    R11 = (0x1);
    R12 = (R6);
    R14 = (R4);
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C226F5E;
    goto L_C226F34;
    L_C226F34:;
    t8 = (vmsio_isready(R14)) != 0;
    if (t8) goto L_C226F48;
    goto L_C226F3E;
    L_C226F3E:;
    vmsfs_unmount(R14);
    goto L_C226F5E;
    L_C226F5E:;
    R0 = (0xFFFFFF01);
    goto L_C226FFE;
    L_C226FFE:;
    return R0;
    L_C226F48:;
    t12 = (vmsio_ismount(R14)) == 0;
    if (t12) goto L_C226F5E;
    goto L_C226F52;
    L_C226F52:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + 0xC956768) + 0x8))) != 0)) goto L_C226F64;
    goto L_C226F5E;
    L_C226F64:;
    t17 = (int)(buIsFormat(R14)) >= 0;
    if (t17) goto L_C226F74;
    goto L_C226F6E;
    L_C226F6E:;
    R0 = (0xFFFFFF03);
    goto L_C226FFE;
    L_C226F74:;
    R10 = (0x0);
    R13 = ((*(int *)(((int)stk + 4))));
    R8 = (0x0);
    if (((int)R12 <= 0)) goto L_C226F92;
    goto L_C226F7E;
    L_C226F7E:;
    *(volatile int *)((R13 + 0x0));
    t26 = (int)(check_isopen()) < 0;
    if (t26) goto L_C226FCE;
    goto L_C226F8A;
    L_C226F8A:;
    t27 = (int)(R10 + 0x1) < (int)R12;
    R10 = ((R10 + 0x1));
    R13 = ((R13 + 0x4));
    if (t27) goto L_C226F7E;
    goto L_C226F92;
    L_C226F92:;
    R10 = (R8);
    R13 = ((*(int *)(((int)stk + 4))));
    R9 = (R8);
    if (((int)R12 <= 0)) goto L_C226FB0;
    goto L_C226F9C;
    L_C226F9C:;
    t37 = (int)(clear_file(R14, (*(int *)((R13 + 0x0))))) >= 0;
    R10 = ((R10 + 0x1));
    if (t37) goto L_C226FAA;
    goto L_C226FA8;
    L_C226FA8:;
    R9 = (R11);
    goto L_C226FAA;
    L_C226FAA:;
    R13 = ((R13 + 0x4));
    if (((int)R10 < (int)R12)) goto L_C226F9C;
    goto L_C226FB0;
    L_C226FB0:;
    t42 = write_dir(R14);
    R4 = (t42);
    if (((int)t42 < 0)) goto L_C226FC6;
    goto L_C226FBA;
    L_C226FBA:;
    t45 = write_fat(R14);
    R4 = (t45);
    if (((int)t45 >= 0)) goto L_C226FCA;
    goto L_C226FC6;
    L_C226FC6:;
    R0 = (R4);
    goto L_C226FFE;
    L_C226FCA:;
    if ((R9 == 0)) goto L_C226FFC;
    goto L_C226FCE;
    L_C226FCE:;
    R0 = (0xFFFFFF0A);
    goto L_C226FFE;
    L_C226FFC:;
    R0 = (0x0);
    goto L_C226FFE;
}
