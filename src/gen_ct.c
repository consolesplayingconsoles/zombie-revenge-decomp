/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_GetPtinfoSize(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXT_EntryErrFunc(int, int);
int FUN_0c010a30(void);
int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02abd0(int);
int FUN_0c0341a6(int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c0349ea(int, int, int);
int FUN_0c034bac(int);
int FUN_0c03593a(int);
int FUN_0c037088(void);
int FUN_0c03720a(int);
int FUN_0c037242(int);
int FUN_0c038c50(int, int);
int FUN_0c03a66c(int, int, int, int);
int FUN_0c03a834(int, int);
int FUN_0c05025c(int);
int FUN_0c0563e6(int);
int FUN_0c0853d4(int, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c0340(int, float);
int FUN_0c0cbbf4(void);
int FUN_0c0d8590(void);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db640(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int FUN_0c0e609c(void);
int FUN_0c0e61d4(void);
int FUN_0c210416(void);
int FUN_0c213470(void);
int FUN_0c22ea0c(int, int, int);
int FUN_0c22ee60(void);
int FUN_0c22ee8c(int);
int FUN_0c22eeb2(int, int, int);
int FUN_0c22f660(int, int);
int FUN_0c22f788(void);
int FUN_0c22f7e0(int);
int FUN_0c22f806(int, int);
int buCalcCRC(int, int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int direntry(int, int);
int gdFsInit(void);
int get_vmstime(int, int);
int kmSetSystemConfiguration(int);
int kmiFBgetfreememEx(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_free_dir(int);
int set_file_info(int, int, int, int);
int set_vmstime(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int buAnalyzeBackupFileImage(int a4, int a5);
int FUN_0c03e1a0(int a4, int a5, int a6, int a7);
int FUN_0c0cf58a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0d9450(int a4, int a5, int a6, int a7);
int FUN_0c0cbc28(void);
void vmsfs_fcreate(int a4, int a5, int a6, int a7);
int kmiVQalloc(int a4, int a5, int a6);
void FUN_0c02ac3e(int a4);
int FUN_0c0347d6(int a4);
int kmiChkActiveListType(int a4, int a5, int a6, int a7, int a8);
int FUN_0c054978(int a4);
int FUN_0c22ed1c(int a4, int a5);
int mpdrv_make_deviceinfo(int a4, int a5, int a6);
void FUN_0c06e56e(int a4, int a5);
int FUN_0c0911b8(int a4, int a5);
int FUN_0c0e3792(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);
int FUN_0c22e8ca(int a4, int a5, int a6);
int FUN_0c050830(int a4);
int FUN_0c035ce4(int a4);

int buAnalyzeBackupFileImage(int a4, int a5)
{
    int t45;
    int t5;
    int t7;
    int t8;
    int t37;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t33;
    int t34;
    int t35;
    int t1;
    int t2;
    int t3;
    int t28;

    t45 = 0xFFFFFF21;
    if (((*(short *)((a5 + 0x40))) != 0) && ((t1 = *(short *)((a5 + 0x40)), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = *(short *)((a5 + 0x44)), (int)(unsigned short)t2 <= (int)0x3) && (t3 = *(int *)((a5 + 0x48)), (unsigned int)t3 <= (unsigned int)0xE1000)))) {
        t5 = *(int *)((((unsigned short)(*(short *)((a5 + 0x40))) << 2) + 0xC2393E0));
        t7 = *(int *)((((unsigned short)(*(short *)((a5 + 0x44))) << 2) + 0xC2393F0));
        t8 = *(int *)((a5 + 0x48));
        t37 = 0xFFFFFF21;
        if ((unsigned int)(((t5 + t7) + t8) + 0x80) > (unsigned int)0xE1000) {
        } else {
            t9 = 0x80;
            t10 = 0x10;
            t11 = a4;
            t12 = a5;
            for (;;) {
                if (t10 == 0) {
                    break;
                }
                t9 = (*(signed char *)((t12 + 0x0)));
                t12 = (t12 + 0x1);
                t10 = (t10 - 1);
                *(unsigned char *)((t11 + 0x0)) = t9;
                t11 = (t11 + 0x1);
            }
            *(unsigned char *)((t11 + 0x0)) = 0x0;
            t14 = t9;
            t15 = 0x20;
            t16 = (a4 + 0x12);
            t17 = (a5 + 0x10);
            for (;;) {
                if (t15 == 0) {
                    break;
                }
                t18 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t14 = t18;
                t15 = (t15 - 1);
                *(unsigned char *)((t16 + 0x0)) = t14;
                t16 = (t16 + 0x1);
            }
            *(unsigned char *)((t16 + 0x0)) = 0x0;
            t19 = t14;
            t20 = 0x10;
            t21 = (a4 + 0x34);
            t22 = (a5 + 0x30);
            for (;;) {
                if (t20 == 0) {
                    break;
                }
                t23 = *(signed char *)((t22 + 0x0));
                t22 = (t22 + 0x1);
                t19 = t23;
                t20 = (t20 - 1);
                *(unsigned char *)((t21 + 0x0)) = t19;
                t21 = (t21 + 0x1);
            }
            *(unsigned char *)((t21 + 0x0)) = 0x0;
            *(unsigned short *)((a4 + 0x4E)) = (*(short *)((a5 + 0x42)));
            *(unsigned short *)((a4 + 0x4C)) = (*(short *)((a5 + 0x40)));
            *(unsigned int *)((a4 + 0x44)) = (a5 + 0x60);
            *(unsigned int *)((a4 + 0x48)) = (a5 + 0x80);
            *(unsigned short *)((a4 + 0x54)) = (*(short *)((a5 + 0x44)));
            if ((*(short *)((a5 + 0x44))) == 0) {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
                t28 = ((a5 + 0x80) + t5);
            } else {
                *(unsigned int *)((a4 + 0x50)) = ((a5 + 0x80) + t5);
                t28 = (((a5 + 0x80) + t5) + t7);
            }
            *(unsigned int *)((a4 + 0x5C)) = (*(int *)((a5 + 0x48)));
            if ((*(int *)((a5 + 0x48))) == 0) {
                *(unsigned int *)((a4 + 0x58)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x58)) = t28;
            }
            t33 = *(short *)((a5 + 0x46));
            *(unsigned short *)((a5 + 0x46)) = 0x0;
            t34 = buCalcCRC(a5, (((t5 + t7) + t8) + 0x80));
            *(unsigned short *)((a5 + 0x46)) = t33;
            t35 = 0x0;
            if ((unsigned short)t34 != (unsigned short)t33) {
                t35 = 0xFFFFFF20;
            }
            t37 = t35;
        }
        t45 = t37;
    }
    return t45;
}

int FUN_0c03e1a0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t15;

    t0 = *(int *)((a4 + 0x4C8));
    if ((unsigned int)t0 >= (unsigned int)0xE) {
        return FUN_0c03a66c(a4, a5, a6, a7);
    }
    switch ((t0 << 1)) {
        case 0:
        {
            if ((((*(int *)((a4 + 0xC8))) & 0x300) != 0) && ((t2 = *(int *)((a4 + 0x304)), (int)t2 <= 0) && (t3 = *(int *)((a4 + 0x20C)), (t3 & 0x4000) == 0))) {
                if ((*(int *)0xC247030) != 0) {
                    *(unsigned int *)((a4 + 0x1C4)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x1C4)) = 0x1;
                }
                *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                *(unsigned int *)((a4 + 0x1CC)) = 0x0;
                *(unsigned int *)((a4 + 0x1C8)) = 0x0;
                *(float *)((a4 + 0x1D4)) = 100.0f;
                *(unsigned int *)((a4 + 0x1DC)) = 0x0;
                *(unsigned int *)((a4 + 0x1D8)) = 0x0;
                return FUN_0c03a834(a4, a5);
            }
            if (((*(int *)((a4 + 0x4CC))) == 1) && (t15 = *(int *)((a4 + 0x304)), (int)t15 <= 0)) {
                return ((int (*)(int))(0xC03B894))(a4);
            }
            return FUN_0c03a66c(a4, a5, a6, a7);
        }
        case 2:
        case 4:
        case 6:
        case 22:
        {
            return FUN_0c03a66c(a4, a5, a6, a7);
        }
        case 8:
        {
            FUN_0c038c50(a4, a5);
            return ((int (*)(int))(0xC03B870))(a4);
        }
        case 10:
        {
            return ((int (*)(int))(0xC03B95C))(a4);
        }
        case 12:
        {
            if ((*(int *)((a4 + 0x20C))) == 9) {
                return ((int (*)(int))(0xC03B994))(a4);
            }
            return ((int (*)(int))(0xC03B882))(a4);
        }
        case 14:
        {
            return ((int (*)(int))(0xC03B882))(a4);
        }
        case 16:
        {
            *(unsigned int *)((a4 + 0x4C4)) = 0x5;
            *(unsigned int *)((a4 + 0x4C8)) = 0x0;
            *(unsigned int *)((a4 + 0x4D0)) = 0x0;
            return 0x4D0;
        }
        case 18:
        {
            if ((*(int *)((a4 + 0x210))) != 67) {
                return ((int (*)(int))(0xC03B9D4))(a4);
            }
            return ((int (*)(int))(0xC03BB88))(a4);
        }
        case 20:
        {
            return ((int (*)(int))(0xC03BC12))(a4);
        }
        case 24:
        {
            return ((int (*)(int))(0xC03B9C4))(a4);
        }
        default:
        {
            return ((int (*)(int))(0xC03BCF6))(a4);
        }
    }
}

int FUN_0c0cf58a(int a4, int a5, int a6, int a7, float f4)
{
    int t4;
    int t5;
    int t6;
    int t9;
    int t7;
    int t11;
    int t13;
    float u14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    float u22;
    int t48;
    int t71;
    int t49;
    int t63;
    int t51;
    int t55;
    int t78;
    int t82;
    int t98;
    int t99;
    int t102;
    int t100;
    int t104;
    int t106;
    float u107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    float u115;
    int t141;
    int t164;
    int t142;
    int t156;
    int t144;
    int t148;
    int t171;
    int t175;
    int t8;
    float u21;
    int t37;
    int t38;
    int t40;
    float u41;
    float u42;
    int t90;
    int t101;
    float u114;
    int t130;
    int t131;
    int t133;
    float u134;
    float u135;
    int t183;
    int stk[7];

    *(unsigned char *)(((int)stk + 4)) = 0xFFFFFFFF;
    if ((*(int *)((a4 + 0x4C))) != 0) {
        *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) - 1);
        return 0x4C;
    }
    if ((*(int *)((a4 + 0x54))) != 0) {
        t4 = *(int *)((a4 + 0x54));
        *(unsigned int *)((a4 + 0x54)) = (t4 - 1);
        if ((t4 - 1) == 0) {
            return FUN_0c0e19f2(a4, a5, a6, a7);
        }
        t5 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t5 + 0x1);
        t6 = *(int *)((a4 + 0x50));
        t9 = t6;
        if ((int)(t5 + 0x1) >= (int)t6) {
            *(unsigned int *)((a4 + 0x30)) = 0x0;
            t7 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t7 + 0x1);
            t8 = 0x0;
            t9 = (t7 + 0x1);
        }
        t11 = *(int *)((a4 + 0x5C));
        *(unsigned int *)(((int)stk + 8)) = t11;
        t13 = *(int *)((a4 + 0x34));
        *(float *)((a4 + 0x64)) = (*(float *)((a4 + 0x3C)));
        u14 = *(float *)((a4 + 0x40));
        *(float *)((a4 + 0x68)) = u14;
        t15 = 0x68;
        t16 = t8;
        t17 = t11;
        t18 = t9;
        t19 = a4;
        t20 = t13;
        u22 = u14;
        for (;;) {
            if (t20 != 0) {
                t17 = (*(int *)(((int)stk + 8)));
                t17 = (t17 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t17;
                t17 = (t17 - 1);
                t18 = (*(signed char *)((t17 + 0x0)));
                *(unsigned char *)(((int)stk + 4)) = t18;
                if (t18 == 0) {
                    break;
                }
                t15 = (*(signed char *)(((int)stk + 4)));
                if (t15 == 10) {
                    t18 = 0x48;
                    t18 = (t18 + a4);
                    t15 = 0x3C;
                    u22 = (*(float *)((a4 + t15)));
                    t15 = 0x64;
                    *(float *)((a4 + t15)) = u22;
                    t18 = (*(int *)((t18 + 0x0)));
                    t15 = 0x68;
                } else {
                    t15 = (*(signed char *)(((int)stk + 4)));
                    if (t15 != 32) {
                        t17 = (*(signed char *)(((int)stk + 4)));
                        t19 = a4;
                        t15 = (*(int *)((a4 + 0x38)));
                        t17 = (t17 << 1);
                        t18 = (*(short *)((t17 + t15)));
                        t15 = 0x60;
                        *(unsigned int *)((a4 + t15)) = t18;
                        t19 = (t19 + 0x60);
                        t15 = (FUN_0c0c0340(t19, f4));
                    } else {
                        t37 = t16;
                        t38 = t17;
                        t40 = t19;
                        u41 = u21;
                        u42 = u22;
                    }
                    u21 = u41;
                    u22 = u42;
                    t16 = t37;
                    t17 = t38;
                    t18 = 0x44;
                    t19 = t40;
                    t18 = (t18 + a4);
                    t18 = (*(int *)((t18 + 0x0)));
                    t15 = 0x64;
                }
                u22 = (float)t18;
                u21 = (*(float *)((a4 + t15)));
                t20 = (t20 - 1);
                u21 = (u21 + u22);
                *(float *)((a4 + t15)) = u21;
                continue;
            }
            break;
        }
        t48 = *(int *)((a4 + 0x58));
        if ((int)t48 <= 0) {
            t71 = t48;
            if ((t48 == -1) && (t20 != 0)) {
                t49 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t49 - 1);
                t63 = t48;
                if ((*(signed char *)(((t49 - 1) + 0x0))) != 0) {
                    t51 = *(int *)0xC23A258;
                    t55 = t51;
                    if ((t51 & 4) != 0) {
                        *(unsigned int *)((a4 + 0x60)) = (*(short *)(((*(int *)((a4 + 0x38))) + 0x80)));
                        *(float *)((a4 + 0x8C)) = 1.0f;
                        t55 = (FUN_0c0c0340((a4 + 0x60), f4));
                    }
                    t63 = t55;
                }
                t71 = t63;
            }
            t90 = t71;
        } else {
            t78 = *(int *)0xC23A258;
            t82 = t78;
            if ((t78 & 4) != 0) {
                *(unsigned int *)((a4 + 0x60)) = (*(short *)(((*(int *)((a4 + 0x38))) + 0x80)));
                *(float *)((a4 + 0x8C)) = 1.0f;
                t82 = (FUN_0c0c0340((a4 + 0x60), f4));
            }
            t90 = t82;
        }
        return t90;
    }
    t98 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t98 + 0x1);
    t99 = *(int *)((a4 + 0x50));
    t102 = t99;
    if ((int)(t98 + 0x1) >= (int)t99) {
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        t100 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t100 + 0x1);
        t101 = 0x0;
        t102 = (t100 + 0x1);
    }
    t104 = *(int *)((a4 + 0x5C));
    *(unsigned int *)(((int)stk + 8)) = t104;
    t106 = *(int *)((a4 + 0x34));
    *(float *)((a4 + 0x64)) = (*(float *)((a4 + 0x3C)));
    u107 = *(float *)((a4 + 0x40));
    *(float *)((a4 + 0x68)) = u107;
    t108 = 0x68;
    t109 = t101;
    t110 = t104;
    t111 = t102;
    t112 = a4;
    t113 = t106;
    u115 = u107;
    for (;;) {
        if (t113 != 0) {
            t110 = (*(int *)(((int)stk + 8)));
            t110 = (t110 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t110;
            t110 = (t110 - 1);
            t111 = (*(signed char *)((t110 + 0x0)));
            *(unsigned char *)(((int)stk + 4)) = t111;
            if (t111 == 0) {
                break;
            }
            t108 = (*(signed char *)(((int)stk + 4)));
            if (t108 == 10) {
                t111 = 0x48;
                t111 = (t111 + a4);
                t108 = 0x3C;
                u115 = (*(float *)((a4 + t108)));
                t108 = 0x64;
                *(float *)((a4 + t108)) = u115;
                t111 = (*(int *)((t111 + 0x0)));
                t108 = 0x68;
            } else {
                t108 = (*(signed char *)(((int)stk + 4)));
                if (t108 != 32) {
                    t110 = (*(signed char *)(((int)stk + 4)));
                    t112 = a4;
                    t108 = (*(int *)((a4 + 0x38)));
                    t110 = (t110 << 1);
                    t111 = (*(short *)((t110 + t108)));
                    t108 = 0x60;
                    *(unsigned int *)((a4 + t108)) = t111;
                    t112 = (t112 + 0x60);
                    t108 = (FUN_0c0c0340(t112, f4));
                } else {
                    t130 = t109;
                    t131 = t110;
                    t133 = t112;
                    u134 = u114;
                    u135 = u115;
                }
                u114 = u134;
                u115 = u135;
                t109 = t130;
                t110 = t131;
                t111 = 0x44;
                t112 = t133;
                t111 = (t111 + a4);
                t111 = (*(int *)((t111 + 0x0)));
                t108 = 0x64;
            }
            u115 = (float)t111;
            u114 = (*(float *)((a4 + t108)));
            t113 = (t113 - 1);
            u114 = (u114 + u115);
            *(float *)((a4 + t108)) = u114;
            continue;
        }
        break;
    }
    t141 = *(int *)((a4 + 0x58));
    if ((int)t141 <= 0) {
        t164 = t141;
        if ((t141 == -1) && (t113 != 0)) {
            t142 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t142 - 1);
            t156 = t141;
            if ((*(signed char *)(((t142 - 1) + 0x0))) != 0) {
                t144 = *(int *)0xC23A258;
                t148 = t144;
                if ((t144 & 4) != 0) {
                    *(unsigned int *)((a4 + 0x60)) = (*(short *)(((*(int *)((a4 + 0x38))) + 0x80)));
                    *(float *)((a4 + 0x8C)) = 1.0f;
                    t148 = (FUN_0c0c0340((a4 + 0x60), f4));
                }
                t156 = t148;
            }
            t164 = t156;
        }
        t183 = t164;
    } else {
        t171 = *(int *)0xC23A258;
        t175 = t171;
        if ((t171 & 4) != 0) {
            *(unsigned int *)((a4 + 0x60)) = (*(short *)(((*(int *)((a4 + 0x38))) + 0x80)));
            *(float *)((a4 + 0x8C)) = 1.0f;
            t175 = (FUN_0c0c0340((a4 + 0x60), f4));
        }
        t183 = t175;
    }
    return t183;
}

int FUN_0c0d9450(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    float u4;
    int t7;
    int t10;
    int t52;

    t0 = *(int *)0xC943E34;
    t2 = (((t0 + a5) + a6) + a7);
    if ((*(int *)0xC943E30) == 3) {
        t2 = (((((t0 + a5) + a6) + a7) + a4) + ((((t0 + a5) + a6) + a7) + a4));
    }
    *(unsigned int *)0xC943DF0 = t2;
    u4 = *(float *)0xC0D95FC;
    if ((*(int *)0xC943E30) == 3) {
        t7 = (int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u));
        *(float *)0xC943DF4 = (((float)a4 * u4) / (float)(t7 >> 1));
        *(float *)0xC943DF8 = (((float)a5 * u4) / (float)(t7 >> 1));
        *(float *)0xC943DFC = (((float)a6 * u4) / (float)(t7 >> 1));
        *(float *)0xC943E00 = (((float)a7 * u4) / (float)(t7 >> 1));
        *(float *)0xC943E04 = (((float)(*(int *)0xC943E34) * u4) / (float)(t7 >> 1));
    } else {
        t10 = *(int *)0xC943E24;
        if (t10 == 32) {
            *(float *)0xC943DF4 = 0.0f;
            *(float *)0xC943DF8 = (((float)a5 * u4) / (float)t2);
            *(float *)0xC943DFC = (((float)a6 * u4) / (float)t2);
            *(float *)0xC943E00 = (((float)a7 * u4) / (float)t2);
            *(float *)0xC943E04 = (((float)(*(int *)0xC943E34) * u4) / (float)t2);
        } else {
            if (t10 == 34) {
                *(float *)0xC943DF4 = (((float)a4 * u4) / (float)t2);
                *(float *)0xC943DF8 = (((float)a5 * u4) / (float)t2);
                *(float *)0xC943DFC = 0.0f;
                *(float *)0xC943E00 = (((float)a7 * u4) / (float)t2);
                *(float *)0xC943E04 = (((float)(*(int *)0xC943E34) * u4) / (float)t2);
            } else {
                if ((*(int *)0xC943E24) == 36) {
                    *(float *)0xC943DF4 = (((float)a4 * u4) / (float)t2);
                    *(float *)0xC943DF8 = (((float)a5 * u4) / (float)t2);
                    *(float *)0xC943DFC = (((float)a6 * u4) / (float)t2);
                    *(float *)0xC943E00 = (((float)a7 * u4) / (float)t2);
                    *(float *)0xC943E04 = 0.0f;
                }
            }
        }
    }
    t52 = kmSetSystemConfiguration(0xC943DC8);
    if (t52 != 0) {
        _builtin_trapa(65);
    }
    *(unsigned int *)(((*(int *)0xC944454) + 0x0)) = 0x800000;
    if ((*(int *)0xC943EAC) == 0) {
        FUN_0c0d8590();
        *(unsigned int *)0xC943EAC = 0x1;
    }
    return t52;
}

int FUN_0c0cbc28(void)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t33;
    int t34;
    int t35;
    int t36;
    int stk[15];

    t0 = 0xC521CB8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC521CC0) {
            break;
        }
    }
    t1 = 0x8;
    for (;;) {
        t2 = gdFsInit();
        if (t2 != 0) {
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
            continue;
        }
        FUN_0c210416();
        FUN_0c213470();
        ADXT_EntryErrFunc(0xC0CEDF4, 0x0);
        FUN_0c0e609c();
        FUN_0c0cbbf4();
        t9 = *(int *)(((((*(int *)0xC1EF578) << 2) + ((int)stk + 4)) + 0x0));
        *(unsigned int *)0xC20A6F8 = t9;
        t1 = 0xC20A6E4;
        t10 = t9;
        t11 = 0xC521CC0;
        for (;;) {
            if ((int)(*(short *)((t1 + 0x0))) < 0) {
                break;
            }
            t10 = (*(short *)((t1 + 0x0)));
            if (t10 == 2) {
                *(unsigned int *)0xC522920 = t11;
            }
            t10 = (*(short *)((t1 + 0x2)));
            t10 = (ADXF_LoadPartition((*(short *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), t11, t10));
            t10 = (ADXF_GetPtinfoSize((*(short *)((t1 + 0x0)))));
            t1 = (t1 + 0x8);
            t11 = (t11 + t10);
        }
        *(unsigned int *)0xC31FDA0 = 0x1;
        *(unsigned char *)0xC522918 = 0x0;
        *(unsigned int *)0xC4BFE28 = 0xC31FDC0;
        return t10;
    }
    if (t2 != 0) {
        FUN_0c010a30();
    }
    FUN_0c210416();
    FUN_0c213470();
    ADXT_EntryErrFunc(0xC0CEDF4, 0x0);
    FUN_0c0e609c();
    FUN_0c0cbbf4();
    t33 = *(int *)(((((*(int *)0xC1EF578) << 2) + ((int)stk + 4)) + 0x0));
    *(unsigned int *)0xC20A6F8 = t33;
    t34 = t33;
    t35 = 0xC521CC0;
    t36 = 0xC20A6E4;
    for (;;) {
        if ((int)(*(short *)((t36 + 0x0))) < 0) {
            break;
        }
        t34 = (*(short *)((t36 + 0x0)));
        if (t34 == 2) {
            *(unsigned int *)0xC522920 = t35;
        }
        t34 = (*(short *)((t36 + 0x2)));
        t34 = (ADXF_LoadPartition((*(short *)((t36 + 0x0))), (*(int *)((t36 + 0x4))), t35, t34));
        t34 = (ADXF_GetPtinfoSize((*(short *)((t36 + 0x0)))));
        t36 = (t36 + 0x8);
        t35 = (t35 + t34);
    }
    *(unsigned int *)0xC31FDA0 = 0x1;
    *(unsigned char *)0xC522918 = 0x0;
    *(unsigned int *)0xC4BFE28 = 0xC31FDC0;
    return t34;
}

void vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int t6;
    int t10;
    int t14;
    int t17;
    int t19;
    int t20;
    int t24;
    int t29;
    int stk[20];

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
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C22608E:;
    *(unsigned int *)(((int)stk + 8)) = R6;
    *(unsigned int *)(((int)stk + 4)) = R7;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    R11 = (0x0);
    R12 = (R5);
    R14 = (R4);
    if (((*(signed char *)(((R4 * 0x148) + 0xC95676A))) == 0)) goto L_C2260E2;
    goto L_C2260B8;
    L_C2260B8:;
    t6 = (vmsio_isready(R14)) != 0;
    if (t6) goto L_C2260CA;
    goto L_C2260C2;
    L_C2260C2:;
    vmsfs_unmount(R14);
    goto L_C2260E2;
    L_C2260E2:;
    R0 = (0xFFFFFF01);
    goto L_C2261C6;
    L_C2261C6:;
    return;
    L_C2260CA:;
    t10 = (vmsio_ismount(R14)) == 0;
    if (t10) goto L_C2260E2;
    goto L_C2260D4;
    L_C2260D4:;
    if (((*(signed char *)(((R14 * 0x148) + 0xC956770))) != 0)) goto L_C226124;
    goto L_C2260E2;
    L_C226124:;
    t14 = (int)(buIsFormat(R14)) >= 0;
    if (t14) goto L_C226134;
    goto L_C22612E;
    L_C22612E:;
    R0 = (0xFFFFFF03);
    goto L_C2261C6;
    L_C226134:;
    t17 = (int)(check_isopen()) < 0;
    if (t17) goto L_C22616C;
    goto L_C226140;
    L_C226140:;
    t19 = (int)(search_dir(R14, R12, (((int)stk + 4) + 0x8))) < 0;
    if (t19) goto L_C226160;
    goto L_C226150;
    L_C226150:;
    t20 = clear_file(R14, R12);
    R4 = (t20);
    if (((int)t20 >= 0)) goto L_C226160;
    goto L_C22615C;
    L_C22615C:;
    R0 = (R4);
    goto L_C2261C6;
    L_C226160:;
    t24 = search_free_dir(R14);
    R10 = (t24);
    if (((int)t24 >= 0)) goto L_C226172;
    goto L_C22616C;
    L_C22616C:;
    R0 = (0xFFFFFF08);
    goto L_C2261C6;
    L_C226172:;
    direntry(R14, R10);
    t29 = open_file_handle();
    R13 = (t29);
    if ((t29 != 0)) goto L_C22618C;
    goto L_C226186;
    L_C226186:;
    R0 = (0xFFFFFF07);
    goto L_C2261C6;
    L_C22618C:;
    *(unsigned int *)((R13 + 0x8)) = R11;
    *(unsigned int *)((R13 + 0x4)) = 0x1;
    *(unsigned int *)((R13 + 0x2C)) = R10;
    *(unsigned int *)((R13 + 0x38)) = 0xFFFF;
    *(unsigned int *)((R13 + 0x30)) = R11;
    *(unsigned int *)((R13 + 0x28)) = R14;
    *(unsigned short *)((R13 + 0x2)) = R11;
    *(unsigned char *)((R13 + 0x1)) = R11;
    R4 = ((R13 + 0x10));
    goto L_C2261AE;
    L_C2261AE:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_C2261A8;
    goto L_C2261B4;
    L_C2261B4:;
    *(unsigned char *)((R4 + 0x0)) = R11;
    set_vmstime((R13 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R13;
    R0 = (0x0);
    goto L_C2261C6;
    L_C2261A8:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R12 + 0x0)));
    R12 = ((R12 + 0x1));
    R4 = ((R4 + 0x1));
    goto L_C2261AE;
}

int kmiVQalloc(int a4, int a5, int a6)
{
    int t1;
    int t21;
    int t3;
    int t4;
    int t5;
    int t7;
    int t28;
    int t55;
    int t29;
    int t33;
    int t38;
    int t20;
    int t2;
    int t6;
    int t10;
    int t65;
    int t43;
    int t49;
    int stk[13];

    FUN_0c22f660((((int)stk + 4) + 0x8), a4);
    t1 = *(int *)0xC239F20;
    t21 = 0x0;
    if (t1 != 0) {
        t3 = t1;
        t4 = a5;
        t5 = a6;
        t7 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t3 + 0x0))) & 0xF000) == (*(int *)(((int)stk + 12)))) && (t10 = *(int *)(((int)stk + 28)), t5 = t10, t4 = 0x0, (unsigned int)0x0 < (unsigned int)t5)) {
                for (;;) {
                    t2 = t4;
                    t2 = (t2 << 2);
                    t2 = (t2 + (t3 + 0xC));
                    if ((*(int *)((t2 + 0x0))) == 0) {
                        t6 = t4;
                        t7 = t3;
                        t3 = 0x0;
                        t4 = t5;
                    }
                    t4 = (t4 + 0x1);
                    if ((unsigned int)t4 >= (unsigned int)t5) {
                        break;
                    }
                }
            }
            if (t7 == 0) {
                t3 = (*(int *)((t3 + 0x4)));
            }
            if (t3 == 0) {
                break;
            }
        }
        t20 = t6;
        t21 = t7;
    }
    if (t21 == 0) {
        t28 = FUN_0c22f788();
        t55 = 0x3;
        if (t28 != 0) {
            t29 = (t28 + 0xC);
            for (;;) {
                *(unsigned int *)((t29 + 0x0)) = 0x0;
                t29 = (t29 + 0x4);
                if ((unsigned int)t29 >= (unsigned int)(t28 + 0x4C)) {
                    break;
                }
            }
            FUN_0c22f806(0xC239F20, t28);
            *(unsigned short *)((t28 + 0x0)) = ((*(short *)((t28 + 0x0))) | (*(int *)(((int)stk + 12))));
            t33 = *(int *)(((int)stk + 24));
            if (((*(int *)0xC952300) & 4) != 0) {
                kmiFBgetfreememEx(((int)stk + 4), (((int)stk + 4) + 0x4));
                t38 = 0x0;
                if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 8)))) {
                    t38 = 0x1;
                }
                t43 = (FUN_0c22ea0c(t38, t33, t28));
            } else {
                t43 = (FUN_0c22ea0c(0x1, t33, t28));
            }
            if (t43 != 0) {
                FUN_0c22f7e0(t28);
                t49 = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = (((0x0 * ((unsigned int)(*(int *)(((int)stk + 16))) >> 2)) << 2) + (*(int *)((t28 + 0x8))));
                *(unsigned int *)(((0x0 + (t28 + 0xC)) + 0x0)) = a4;
                *(unsigned short *)((t28 + 0x0)) = ((*(short *)((t28 + 0x0))) | 0x2);
                t49 = 0x0;
            }
            t55 = t49;
        }
        t65 = t55;
    } else {
        *(unsigned int *)((a4 + 0x1C)) = (((t20 * ((unsigned int)(*(int *)(((int)stk + 16))) >> 2)) << 2) + (*(int *)((t21 + 0x8))));
        *(unsigned int *)((((t20 << 2) + (t21 + 0xC)) + 0x0)) = a4;
        *(unsigned short *)((t21 + 0x0)) = ((*(short *)((t21 + 0x0))) | 0x2);
        t65 = 0x0;
    }
    return t65;
}

void FUN_0c02ac3e(int a4)
{
    int t0;
    int t5;
    int t8;
    int t9;
    int t11;
    int t13;
    int t14;
    int t15;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = *(int *)((a4 + 0x4F8));
        if ((t5 != 6) && (t5 != 7)) {
            t8 = *(int *)((a4 + 0x4F8));
            if ((t8 != 8) && (t8 != 9)) {
                *(unsigned int *)((a4 + 0x554)) = 0x1;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                t9 = *(int *)((a4 + 0x4F0));
                ((int (*)(int))((*(int *)(((((t9 << 2) + t9) << 2) + 0xC1F8E3C)))))(a4);
    return;
            }
            *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            return;
        }
        *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        return;
    }
    t11 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t11 < (unsigned int)0xE) {
        switch ((t11 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02abd0(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02abd0(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
                t13 = FUN_0c0563e6(a4);
                if ((int)t13 < 0) {
                    *(unsigned int *)((a4 + 0x554)) = 0x1;
                    *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                    return;
                }
                t14 = FUN_0c03593a(a4);
                if (t14 == 0) {
                    *(unsigned int *)((a4 + 0x554)) = 0x1;
                    t15 = *(int *)((a4 + 0x4F0));
                    ((int (*)(int))((*(int *)(((((t15 << 2) + t15) << 2) + 0xC1F8E3C)))))(a4);
    return;
                }
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
        }
    }
}

int FUN_0c0347d6(int a4)
{
    int t1;
    int t2;
    int t5;
    int t100;
    int t94;
    int t88;
    int t82;
    int t0;
    int t3;
    int t4;
    int t25;
    int t38;
    int t40;
    int stk[27];

    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 12) + 0x30) + 0x4);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 12) + 0x30) + 0xC);
    *(unsigned int *)((((((int)stk + 12) + 0x30) + 0xC) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 12) + 0x30) + 0x8)) = 0x0;
    *(unsigned int *)((((((int)stk + 12) + 0x30) + 0x4) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 12) + 0x30) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 12) + 0x20) + 0x4);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 12) + 0x20) + 0xC) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 12) + 0x20) + 0x8)) = 0x0;
    *(unsigned int *)((((((int)stk + 12) + 0x20) + 0x4) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 12) + 0x20) + 0x0)) = 0x0;
    t1 = ((((int)stk + 12) + 0x20) + 0xC);
    t2 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)0x8) {
            break;
        }
        t1 = 0xC246FF0;
        t2 = t5;
        t1 = (t1 + 0x40);
        t2 = (t2 << 2);
        t1 = (t1 + t2);
        if (((*(int *)((t1 + 0x0))) != 0) && (t0 = 0xBC, t25 = *(int *)((a4 + t0)), t25 != t5)) {
            t3 = 0xC246FF0;
            t3 = (t3 + t2);
            t3 = (*(int *)((t3 + 0x0)));
            t2 = a4;
            t0 = (FUN_0c0341a6(t2, t3));
            t4 = t0;
            if ((int)t4 > 0) {
                t1 = ((int)stk + 8);
                t1 = (t1 + 0x1C);
                t2 = a4;
                t0 = (FUN_0c03442c(t2, t3, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x8), (t1), (((int)stk + 12) + 0x1C)));
                t0 = (*(int *)(((int)stk + 12)));
                t0 = (t0 << 2);
                *(unsigned int *)(((((int)stk + 12) + 0x30) + t0)) = ((*(int *)(((((int)stk + 12) + 0x30) + t0))) + 0x1);
                t0 = (*(int *)(((int)stk + 12)));
                t0 = (t0 << 2);
                if ((int)(*(int *)(((((int)stk + 12) + 0x20) + t0))) < (int)t4) {
                    t0 = (*(int *)(((int)stk + 12)));
                    t0 = (t0 << 2);
                    *(unsigned int *)(((((int)stk + 12) + 0x20) + t0)) = t4;
                }
            }
        } else {
            t38 = t1;
            t40 = t2;
        }
        t5 = (t5 + 0x1);
        t1 = t38;
        t2 = t40;
    }
    t100 = 0x3;
    if ((int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) <= (int)(*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))) {
        t94 = 0x1;
        if ((int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) >= (int)(*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))) {
            t88 = 0x3;
            if ((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) > (int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))) {
            } else {
                t82 = 0x1;
                if ((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) < (int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))) {
                } else {
                    t82 = ((((FUN_0c0da2e0()) & 0x1) << 1) + 0x1);
                }
                t88 = t82;
            }
            t94 = t88;
        }
        t100 = t94;
    }
    return t100;
}

int kmiChkActiveListType(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t19;
    int t20;
    int t21;
    int t22;
    int t27;
    int t31;
    int t36;
    int t41;
    int t46;
    int t24;
    int stk[20];

    stk[11] = a8;
    t0 = ((int)stk + 4);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)(((int)stk + 4) + 0x14)) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    if ((*(int *)0xC952640) == 1) {
        if ((*(int *)0xC95271C) == 32) {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x1;
        }
        if ((*(int *)0xC95271C) == 33) {
            *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x1;
        }
        if ((*(int *)0xC95271C) == 34) {
            *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x1;
        }
        if ((*(int *)0xC95271C) == 35) {
            *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x1;
        }
        if ((*(int *)0xC95271C) == 36) {
            *(unsigned int *)((((int)stk + 4) + 0x10)) = 0x1;
        }
    }
    t19 = *(int *)((((int)stk + 4) + 0x0));
    t20 = *(int *)((((int)stk + 4) + 0x4));
    t21 = *(int *)((((int)stk + 4) + 0x8));
    t22 = *(int *)((((int)stk + 4) + 0xC));
    t24 = (a8 + (*(int *)((((int)stk + 4) + 0x10))));
    *(unsigned int *)(((int)stk + 44)) = t24;
    *(unsigned int *)0xC952764 = 0x0;
    t27 = 0x0;
    if ((a4 + t19) != 0) {
        *(unsigned int *)0xC952764 = ((*(int *)0xC952764) | 0x1);
        t27 = 0x1;
    }
    t31 = t27;
    if ((a5 + t20) != 0) {
        *(unsigned int *)0xC952764 = ((*(int *)0xC952764) | 0x2);
        t31 = (t27 + 0x1);
    }
    t36 = t31;
    if ((a6 + t21) != 0) {
        *(unsigned int *)0xC952764 = ((*(int *)0xC952764) | 0x4);
        t36 = (t31 + 0x1);
    }
    t41 = t36;
    if ((a7 + t22) != 0) {
        *(unsigned int *)0xC952764 = ((*(int *)0xC952764) | 0x8);
        t41 = (t36 + 0x1);
    }
    t46 = t41;
    if (t24 != 0) {
        *(unsigned int *)0xC952764 = ((*(int *)0xC952764) | 0x10);
        t46 = (t41 + 0x1);
    }
    return t46;
}

int FUN_0c054978(int a4)
{
    int t0;
    float u43;
    float u44;
    float u53;
    float u54;
    int stk[25];

    t0 = *(int *)((a4 + 0x3D4));
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dc950((-(*(short *)((a4 + 0x70)))));
    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
    FUN_0c0dc950((*(short *)((t0 + 0x0))));
    FUN_0c0dc890((*(short *)(((t0 + 0x2) + 0x0))));
    FUN_0c0dc6e0((*(short *)((((t0 + 0x2) + 0x2) + 0x0))));
    FUN_0c0dc950((*(short *)(((((t0 + 0x2) + 0x2) + 0x2) + 0x0))));
    FUN_0c0dc890((*(short *)((((((t0 + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    FUN_0c0dc6e0((*(short *)(((((((t0 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) > (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
        if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) > 0.0f) {
            u43 = (*(float *)(((((int)stk + 4) + 0x24) + 0x0)));
            u44 = (*(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)));
        } else {
            u43 = (-(*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
            u44 = (-(*(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0))));
        }
        FUN_0c0a68ec(((int)stk + 4), u43, u44);
    } else {
        if (0.0f > (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
            u53 = (*(float *)(((((int)stk + 4) + 0x30) + 0x0)));
            u54 = (*(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)));
        } else {
            u53 = (-(*(float *)(((((int)stk + 4) + 0x30) + 0x0))));
            u54 = (-(*(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0))));
        }
        FUN_0c0a68ec(((int)stk + 4), u53, u54);
    }
    FUN_0c0dc4c0(0x1);
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 4)));
    return 0x6E;
}

int FUN_0c22ed1c(int a4, int a5)
{
    int t4;
    int t13;
    int t5;
    int t6;
    int t8;
    int t9;
    int t50;
    int t18;
    int t19;
    int t34;
    int t35;
    int t37;
    int t38;
    int t10;
    int t39;

    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) & 0xFFFB);
    kmytex_FBDeQueueEntry((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x4), a5);
    *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10))) + (*(int *)((a5 + 0x10))));
    t4 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8));
    t13 = 0x0;
    if (t4 != 0) {
        t5 = t4;
        t6 = 0x0;
        for (;;) {
            t8 = *(int *)((a5 + 0xC));
            t9 = *(int *)((t5 + 0xC));
            if ((t9 != ((*(int *)((a5 + 0x10))) + t8)) && (t10 = *(int *)((t5 + 0x10)), t8 != (t10 + t9))) {
                t5 = (*(int *)((t5 + 0x8)));
            } else {
                t6 = t5;
                t5 = 0x0;
            }
            if (t5 == 0) {
                break;
            }
        }
        t13 = t6;
    }
    t50 = a5;
    if (t13 != 0) {
        t18 = t13;
        t19 = a5;
        for (;;) {
            if ((*(int *)((t18 + 0xC))) == ((*(int *)((t19 + 0xC))) + (*(int *)((t19 + 0x10))))) {
                *(unsigned int *)((t18 + 0xC)) = (*(int *)((t19 + 0xC)));
                *(unsigned int *)((t18 + 0x10)) = ((*(int *)((t18 + 0x10))) + (*(int *)((t19 + 0x10))));
            } else {
                *(unsigned int *)((t18 + 0x10)) = ((*(int *)((t18 + 0x10))) + (*(int *)((t19 + 0x10))));
            }
            FUN_0c22ee8c(t19);
            kmytex_FBDeQueueEntry(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0xC), t18);
            t34 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8));
            t19 = t18;
            t18 = 0x0;
            if (t34 != 0) {
                t35 = t34;
                for (;;) {
                    t37 = *(int *)((t19 + 0xC));
                    t38 = *(int *)((t35 + 0xC));
                    if ((t38 != ((*(int *)((t19 + 0x10))) + t37)) && (t39 = *(int *)((t35 + 0x10)), t37 != (t39 + t38))) {
                        t35 = (*(int *)((t35 + 0x8)));
                    } else {
                        t18 = t35;
                        t35 = 0x0;
                    }
                    if (t35 == 0) {
                        break;
                    }
                }
            }
            if (t18 == 0) {
                break;
            }
        }
        t50 = t19;
    }
    FUN_0c22eeb2(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0xC), t50);
    return 0x0;
}

int mpdrv_make_deviceinfo(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t41;
    int t42;
    int t43;
    int t38;
    int t39;

    *(unsigned int *)((a4 + 0x0)) = ((((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x1))) << 16) & 0xFF0000) | (((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x2))) << 8) & 0xFF00)) | ((((unsigned char)(*(signed char *)(((a6 + 0x4) + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)(((a6 + 0x4) + 0x3))));
    t4 = 0xFF000000;
    t5 = ((a6 + 0x4) + 0x4);
    t6 = (a4 + 0x4);
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)(a4 + 0x8)) {
            break;
        }
        t4 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t4;
        t6 = (t6 + 0x1);
    }
    t8 = t4;
    t9 = t5;
    t10 = (a4 + 0x8);
    for (;;) {
        if ((unsigned int)t10 >= (unsigned int)(a4 + 0xC)) {
            break;
        }
        t8 = (*(signed char *)((t9 + 0x0)));
        t9 = (t9 + 0x1);
        *(unsigned char *)((t10 + 0x0)) = t8;
        t10 = (t10 + 0x1);
    }
    t12 = t8;
    t13 = t9;
    t14 = (a4 + 0xC);
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)(a4 + 0x10)) {
            break;
        }
        t12 = (*(signed char *)((t13 + 0x0)));
        t13 = (t13 + 0x1);
        *(unsigned char *)((t14 + 0x0)) = t12;
        t14 = (t14 + 0x1);
    }
    *(unsigned char *)((a4 + 0x11)) = (*(signed char *)((t13 + 0x0)));
    if ((*(signed char *)((a4 + 0x10))) != 0) {
        *(unsigned char *)(((a4 + 0x12) + 0x0)) = ((*(signed char *)(((t13 + 0x1) + 0x0))) & 0x3);
        *(unsigned char *)(((0x13 + a4) + 0x0)) = (((unsigned int)(unsigned char)(*(signed char *)(((t13 + 0x1) + 0x0))) >> 2) & 0x3);
    } else {
        *(unsigned char *)(((a4 + 0x12) + 0x0)) = (*(signed char *)((0xC239F48 + ((unsigned char)(*(signed char *)(((t13 + 0x1) + 0x0))) & 0xF))));
        *(unsigned char *)((a4 + 0x13)) = 0x0;
    }
    if ((*(int *)((0x10C4 + (*(int *)0xC98E18C)))) == 1) {
        t28 = 0xC98E18C;
        t29 = (t13 + 0x1);
        t30 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t30 >= (unsigned int)(a4 + 0x33)) {
                break;
            }
            t28 = (*(signed char *)((t29 + 0x0)));
            t29 = (t29 + 0x1);
            *(unsigned char *)((t30 + 0x0)) = t28;
            t30 = (t30 + 0x1);
        }
        t38 = t28;
        t39 = t29;
    } else {
        t32 = 0xC98E18C;
        t33 = ((t13 + 0x1) + 0x1);
        t34 = (a4 + 0x14);
        for (;;) {
            if ((unsigned int)t34 >= (unsigned int)(a4 + 0x32)) {
                break;
            }
            t32 = (*(signed char *)((t33 + 0x0)));
            t33 = (t33 + 0x1);
            *(unsigned char *)((t34 + 0x0)) = t32;
            t34 = (t34 + 0x1);
        }
        *(unsigned char *)((a4 + 0x32)) = 0x0;
        t38 = t32;
        t39 = t33;
    }
    *(unsigned char *)((a4 + 0x33)) = 0x0;
    t41 = t38;
    t42 = t39;
    t43 = (a4 + 0x34);
    for (;;) {
        if ((unsigned int)t43 >= (unsigned int)(a4 + 0x70)) {
            break;
        }
        t41 = (*(signed char *)((t42 + 0x0)));
        t42 = (t42 + 0x1);
        *(unsigned char *)((t43 + 0x0)) = t41;
        t43 = (t43 + 0x1);
    }
    *(unsigned char *)((a4 + 0x70)) = 0x0;
    *(unsigned short *)(((0x74 + a4) + 0x0)) = (((unsigned char)(*(signed char *)((t42 + 0x1))) << 8) | (unsigned char)(*(signed char *)((t42 + 0x0))));
    *(unsigned short *)((a4 + 0x76)) = (((unsigned char)(*(signed char *)((t42 + 0x3))) << 8) | (unsigned char)(*(signed char *)((t42 + 0x2))));
    return 0x0;
}

void FUN_0c06e56e(int a4, int a5)
{
    int t0;
    int t1;
    int t4;
    int t6;
    int t14;
    int t18;
    int t41;

    if ((int)a5 <= 0) {
    } else {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t4 = FUN_0c0e19aa(0xC06E384, 0xC4, (*(int *)(((*(int *)0xC247C60) + 0x30))));
            FUN_0c0e19d0(t4);
            t6 = ((int (*)(void))(FUN_0c0e61d4))();
            *(unsigned short *)((t4 + 0x3C)) = 0x0;
            *(unsigned short *)((t4 + 0x3E)) = (*(int *)((t1 + 0xC)));
            *(unsigned short *)((t4 + 0x40)) = 0x0;
            FUN_0c0dc5a0();
            FUN_0c0dcca0(t1);
            FUN_0c0dc890((*(int *)((t1 + 0xC))));
            FUN_0c0db640((t4 + 0x50));
            FUN_0c0dc4c0(0x1);
            t14 = *(int *)((t1 + 0x10));
            *(unsigned short *)((t4 + 0x42)) = (*(short *)(((((t14 << 2) << 1) + 0xC0FB75C) + 0x0)));
            *(unsigned short *)(((0x46 + t4) + 0x0)) = (*(short *)(((((t14 << 2) << 1) + 0xC0FB75C) + 0x2)));
            *(unsigned int *)((t4 + 0x48)) = (*(int *)(((((t14 << 2) << 1) + 0xC0FB75C) + 0x4)));
            t18 = *(short *)((t4 + 0x46));
            if (t18 != 1) {
                if (t18 != 2) {
                } else {
                    if ((*(int *)((t1 + 0x14))) != 0) {
                        *(unsigned int *)((t4 + 0xA4)) = 0xC06E2CA;
                    } else {
                        *(unsigned int *)((t4 + 0xA4)) = 0xC06E0C4;
                    }
                }
            } else {
                if ((*(int *)((t1 + 0x14))) != 0) {
                    *(unsigned int *)((t4 + 0xA4)) = 0xC06E23C;
                } else {
                    *(unsigned int *)((t4 + 0xA4)) = 0xC06DF78;
                }
            }
            if ((*(int *)((t1 + 0x14))) != 0) {
                *(unsigned int *)((t4 + 0xB4)) = (*(int *)((t1 + 0x14)));
                *(unsigned int *)((t4 + 0xB4)) = ((*(int *)((t4 + 0xB4))) + 0xC);
                t41 = ((int (*)(int))(FUN_0c0e61d4))((((t14 << 2) << 1) + 0xC0FB75C));
            }
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x18);
            if ((int)t0 < (int)a5) continue;
            break;
        }
    }
}

int FUN_0c0911b8(int a4, int a5)
{
    int t1;
    float u11;
    float u16;
    int t25;
    int t30;
    int t40;
    int stk[9];

    *(unsigned int *)(((int)stk + 12)) = a4;
    t1 = FUN_0c0e19aa(0xC091AC8, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-(*(float *)((a5 + 0x4)))), (-(*(float *)((a5 + 0x8)))));
    *(unsigned short *)((t1 + 0x48)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((t1 + 0x4C)) = (*(int *)(((int)stk + 8)));
    *(unsigned short *)(((0x4A + t1) + 0x0)) = ((FUN_0c0da2e0()) << 1);
    u11 = 0.199999988f;
    u11 = u11 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    *(float *)((t1 + 0x54)) = u11;
    *(float *)((t1 + 0x58)) = ((*(float *)((t1 + 0x54))) * 1.5f);
    *(unsigned int *)(((0x60 + t1) + 0x0)) = ((FUN_0c0da2e0()) & 0x1F);
    *(float *)((t1 + 0x30)) = ((float)(FUN_0c0da2e0()) * 9.15555211e-06f);
    *(unsigned int *)((t1 + 0x64)) = 0x14;
    u16 = 0.299999982f;
    u16 = u16 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    FUN_0c0dce80((t1 + 0x3C), a5, u16);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((*(int *)(((int)stk + 12))));
    FUN_0c0dc6e0((*(int *)(((int)stk + 4))));
    FUN_0c0dc950((*(int *)(((int)stk + 8))));
    t25 = FUN_0c0da2e0();
    FUN_0c0dc890((t25 << 1));
    FUN_0c0db470((t1 + 0x30), (t1 + 0x30));
    FUN_0c0dc4c0(0x1);
    t30 = FUN_0c0e19aa(0xC091BE4, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t30);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-(*(float *)((a5 + 0x4)))), (-(*(float *)((a5 + 0x8)))));
    *(volatile int *)(((int)stk + 12));
    FUN_0c0e61d4();
    *(unsigned short *)((t30 + 0x48)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((t30 + 0x4C)) = (*(int *)(((int)stk + 8)));
    t40 = FUN_0c0da2e0();
    *(unsigned short *)(((0x4A + t30) + 0x0)) = (t40 << 1);
    return (t40 << 1);
}

int FUN_0c0e3792(int a4, int a5, int a6, int a7)
{
    int t2;
    int t4;
    int t14;
    int t22;
    int t25;
    int t28;
    int t32;
    int t36;
    int t37;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0E3792:;
    *(unsigned int *)(((int)stk + 28)) = R4;
    *(unsigned int *)(((int)stk + 24)) = R5;
    *(unsigned int *)(((int)stk + 20)) = R6;
    *(unsigned int *)(((int)stk + 16)) = R7;
    *(unsigned int *)0xC94C820 = ((*(int *)0xC94C820) + (*(int *)(((int)stk + 20))));
    t2 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC94C908)) = (*(int *)(((int)stk + 24)));
    t4 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((t4 << 1) + t4) << 2) + 0xC94C910)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((((*(int *)(((int)stk + 28))) << 2) + 0xA0800060) + 0x0)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 28))) - 1);
    goto L_C0E383C;
    L_C0E383C:;
    if (((int)(*(int *)(((int)stk + 8))) >= 0)) goto L_C0E37F8;
    goto L_C0E3842;
    L_C0E3842:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C0E384E;
    goto L_C0E3848;
    L_C0E3848:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC94C814);
    goto L_C0E384E;
    L_C0E384E:;
    t14 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((t14 << 1) + t14) << 2) + 0xC94C90C)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C0E38BE;
    L_C0E38BE:;
    if (((int)(*(int *)(((int)stk + 8))) < (int)0x8)) goto L_C0E3878;
    goto L_C0E38C6;
    L_C0E38C6:;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return (*(int *)(((int)stk + 4)));
    L_C0E3878:;
    t22 = *(signed char *)(((int)stk + 8));
    if (((*(int *)((0xC94C908 + (signed char)(((t22 << 1) + t22) << 2)))) == -1)) goto L_C0E38B8;
    goto L_C0E388C;
    L_C0E388C:;
    t25 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)(((signed char)(((t25 << 1) + t25) << 2) + 0xC94C910))));
    t28 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((signed char)(((t28 << 1) + t28) << 2) + 0xC94C90C)) = ((*(int *)(((signed char)(((t28 << 1) + t28) << 2) + 0xC94C90C))) + (*(int *)(((int)stk + 20))));
    goto L_C0E38B8;
    L_C0E38B8:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C0E38BE;
    L_C0E37F8:;
    t32 = *(signed char *)(((int)stk + 8));
    R1 = (0xC94C908);
    if (((*(int *)((0xC94C908 + (signed char)(((t32 << 1) + t32) << 2)))) == -1)) goto L_C0E3836;
    goto L_C0E380C;
    L_C0E380C:;
    t36 = *(int *)(((int)stk + 8));
    t37 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((signed char)(((t36 << 1) + t36) << 2) + 0xC94C90C))) + (*(int *)((((signed char)(((t37 << 1) + t37) << 2) + R1) + 0x8))));
    goto L_C0E3842;
    L_C0E3836:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
    goto L_C0E383C;
}

int vmsfs_findnext_ex(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t15;
    int t19;
    int t23;
    int t30;
    int t53;
    int stk[20];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C226C1A:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    R12 = (R4);
    R13 = (((R4 * 0x148) + 0xC956768));
    R14 = (R6);
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C226C6A;
    goto L_C226C40;
    L_C226C40:;
    t6 = (vmsio_isready(R12)) != 0;
    if (t6) goto L_C226C54;
    goto L_C226C4A;
    L_C226C4A:;
    vmsfs_unmount(R12);
    goto L_C226C6A;
    L_C226C6A:;
    R0 = (0xFFFFFF01);
    goto L_C226D4C;
    L_C226D4C:;
    return R0;
    L_C226C54:;
    t10 = (vmsio_ismount(R12)) == 0;
    if (t10) goto L_C226C6A;
    goto L_C226C5E;
    L_C226C5E:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + 0xC956768) + 0x8))) != 0)) goto L_C226C70;
    goto L_C226C6A;
    L_C226C70:;
    t15 = (int)(buIsFormat(R12)) >= 0;
    if (t15) goto L_C226C80;
    goto L_C226C7A;
    L_C226C7A:;
    R0 = (0xFFFFFF03);
    goto L_C226D4C;
    L_C226C80:;
    t19 = *(int *)((R13 + 0x18));
    t23 = (direntry(R12, (*(int *)((R13 + 0x18)))));
    R10 = (0x0);
    R11 = (0x0);
    R12 = (0x1);
    R4 = t23;
    R5 = (t19);
    goto L_C226CDC;
    L_C226CDC:;
    if (((int)R5 < (int)(*(int *)(((*(int *)((R13 + 0x1C))) + 0x30))))) goto L_C226C94;
    goto L_C226CE4;
    L_C226CE4:;
    if ((R11 != 0)) goto L_C226CEE;
    goto L_C226CE8;
    L_C226CE8:;
    R0 = (0xFFFFFF05);
    goto L_C226D4C;
    L_C226CEE:;
    t30 = *(int *)(((int)stk + 4));
    R11 = ((t30 + 0xC));
    R5 = (t30);
    R6 = ((R4 + 0x4));
    goto L_C226D00;
    L_C226D00:;
    if (((unsigned int)R5 < (unsigned int)R11)) goto L_C226CFA;
    goto L_C226D04;
    L_C226D04:;
    *(unsigned char *)((R11 + 0x0)) = R10;
    set_file_info(R4, (((int)stk + 4) + 0x8), R6, R7);
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)((R13 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((R14 + 0x4)) = (*(int *)(((int)stk + 52)));
    *(unsigned char *)((R14 + 0x6)) = (*(signed char *)(((int)stk + 16)));
    *(unsigned char *)((R14 + 0x7)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned short *)((R14 + 0x8)) = (*(short *)(((int)stk + 20)));
    if (((*(int *)(((int)stk + 16))) != 0xCC)) goto L_C226D3A;
    goto L_C226D36;
    L_C226D36:;
    R0 = (R12);
    goto L_C226D3C;
    L_C226D3C:;
    *(unsigned char *)((R14 + 0x6)) = R0;
    get_vmstime((R14 + 0xA), (((int)stk + 4) + 0x28));
    R0 = (0x0);
    goto L_C226D4C;
    L_C226D3A:;
    R0 = (R10);
    goto L_C226D3C;
    L_C226CFA:;
    *(unsigned char *)((R5 + 0x0)) = (*(signed char *)((R6 + 0x0)));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    goto L_C226D00;
    L_C226C94:;
    *(unsigned int *)((R13 + 0x18)) = ((*(int *)((R13 + 0x18))) + 0x1);
    t53 = *(signed char *)((R4 + 0x0));
    R6 = ((unsigned char)t53);
    R7 = (t53);
    if (((unsigned char)t53 == 51)) goto L_C226CAA;
    goto L_C226CA4;
    L_C226CA4:;
    if ((R6 != 0xCC)) goto L_C226CD8;
    goto L_C226CAA;
    L_C226CAA:;
    R11 = (R12);
    goto L_C226CE4;
    L_C226CD8:;
    R4 = ((R4 + 0x20));
    R5 = ((R5 + 0x1));
    goto L_C226CDC;
}

int FUN_0c22e8ca(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t5;
    int t11;
    int t6;
    int t7;
    int t52;
    int t26;
    int t39;
    int t45;
    int t21;
    int t34;

    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t2 = a5;
    if (t0 != 0) {
        t2 = (a5 + (0x20 - t0));
    }
    t5 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8));
    t11 = 0x0;
    if (t5 != 0) {
        t6 = t5;
        t7 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t6 + 0x10))) >= (int)t2) {
                t7 = t6;
                t6 = 0x0;
            } else {
                t6 = (*(int *)((t6 + 0x8)));
            }
            if (t6 == 0) {
                break;
            }
        }
        t11 = t7;
    }
    t52 = 0x3;
    if (t11 != 0) {
        if ((*(int *)((t11 + 0x10))) == t2) {
            kmytex_FBDeQueueEntry(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0xC), t11);
            FUN_0c22eeb2((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x4), t11);
            *(unsigned int *)((a6 + 0x1C)) = (*(int *)((t11 + 0xC)));
            *(unsigned int *)((t11 + 0x14)) = a6;
            *(unsigned short *)((t11 + 0x0)) = 0x1;
            if ((short)a4 == 0) {
                t21 = ((*(short *)((t11 + 0x0))) | 0x20);
            } else {
                t21 = ((*(short *)((t11 + 0x0))) | 0x40);
            }
            *(unsigned short *)((t11 + 0x0)) = t21;
            *(unsigned short *)((t11 + 0x0)) = ((*(short *)((t11 + 0x0))) | 0x4);
            *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t11 + 0x10))));
            t45 = 0x0;
        } else {
            t26 = FUN_0c22ee60();
            t39 = 0x3;
            if (t26 == 0) {
            } else {
                *(unsigned int *)((t26 + 0xC)) = (*(int *)((t11 + 0xC)));
                *(unsigned int *)((t26 + 0x10)) = t2;
                *(unsigned int *)((t11 + 0x10)) = ((*(int *)((t11 + 0x10))) - t2);
                *(unsigned int *)((t11 + 0xC)) = ((*(int *)((t11 + 0xC))) + t2);
                FUN_0c22eeb2((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x4), t26);
                *(unsigned int *)((a6 + 0x1C)) = (*(int *)((t26 + 0xC)));
                *(unsigned int *)((t26 + 0x14)) = a6;
                if ((short)a4 == 0) {
                    t34 = ((*(short *)((t26 + 0x0))) | 0x20);
                } else {
                    t34 = ((*(short *)((t26 + 0x0))) | 0x40);
                }
                *(unsigned short *)((t26 + 0x0)) = t34;
                *(unsigned short *)((t26 + 0x0)) = ((*(short *)((t26 + 0x0))) | 0x4);
                *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t26 + 0x10))));
                t39 = 0x0;
            }
            t45 = t39;
        }
        t52 = t45;
    }
    return t52;
}

int FUN_0c050830(int a4)
{
    int t2;
    int t3;
    int t9;
    int t15;
    int t23;
    int t25;
    int t28;
    int t29;
    float u40;
    int t33;
    int t34;
    int t42;
    int t44;
    int t5;
    int t11;
    int t12;
    int t13;
    int t30;
    int t31;
    int t32;

    t2 = *(short *)(((*(int *)((((*(int *)((a4 + 0x1C4))) << 2) + 0xC246FF0))) + 0x6E));
    t3 = *(short *)((a4 + 0x6E));
    if (!(16384.0f > _builtin_fabsf((float)(short)(t2 - t3)))) {
        *(unsigned int *)((a4 + 0x20C)) = 0x40;
        *(unsigned int *)((a4 + 0x210)) = 0x7B;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        if ((((*(int *)0xC23A1A8) & 0x100) == 0) && ((t5 = *(int *)0xC23ED9C, t5 == 4) || (t5 == 7))) {
            if (((float)(*(int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2)))) - ((float)(*(int *)((a4 + 0x1CC))) * 0.099999994f)) > 0.0f) {
                t9 = *(int *)((a4 + 0x1BC));
                if ((t9 != 19) && ((t9 != 20) && ((t9 != 21) && ((t9 != 3) && ((t9 != 4) && ((t9 != 11) && (t9 != 5))))))) {
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x2C4)) = 0x458;
                *(unsigned int *)((a4 + 0x3AC)) = 0xF;
                if (((0x100 & (*(int *)0xC23A1A8)) == 0) && ((t11 = *(int *)0xC204998, t11 == 0) || ((t12 = *(int *)0xC2049AC, t12 == 0) && (t13 = *(int *)0xC1FF894, (int)t13 < 0)))) {
                    t15 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t15 << 2))) = (int)((float)(*(int *)((0xC247594 + (t15 << 2)))) - ((float)(*(int *)(((0x1CC + a4) + 0x0))) * 0.099999994f));
                }
                t23 = *(int *)((a4 + 0xBC));
                *(unsigned int *)(((((t23 << 2) << 2) << 1) + 0xC247554)) = ((*(int *)(((((t23 << 2) << 2) << 1) + 0xC247554))) + 0x1);
                t25 = *(int *)((a4 + 0xBC));
                *(unsigned int *)(((t25 << 2) + 0xC247584)) = ((*(int *)(((t25 << 2) + 0xC247584))) + 0x14);
                *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                FUN_0c05025c(a4);
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        t28 = *(int *)((a4 + 0x1BC));
        if ((t28 != 19) && ((t28 != 20) && ((t28 != 21) && ((t28 != 3) && ((t28 != 4) && ((t28 != 11) && (t28 != 5))))))) {
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x2C4)) = 0x458;
        *(unsigned int *)((a4 + 0x3AC)) = 0xF;
        t29 = *(int *)0xC23A1A8;
        u40 = _builtin_fabsf((float)(short)(t2 - t3));
        if (((0x100 & t29) == 0) && ((t30 = *(int *)0xC204998, t30 == 0) || ((t31 = *(int *)0xC2049AC, t31 == 0) && (t32 = *(int *)0xC1FF894, (int)t32 < 0)))) {
            t33 = *(int *)(((0x1CC + a4) + 0x0));
            t34 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((0xC247594 + (t34 << 2))) = (int)((float)(*(int *)((0xC247594 + (t34 << 2)))) - ((float)t33 * 0.099999994f));
            u40 = ((float)t33 * 0.099999994f);
        }
        t42 = *(int *)((a4 + 0xBC));
        *(unsigned int *)(((((t42 << 2) << 2) << 1) + 0xC247554)) = ((*(int *)(((((t42 << 2) << 2) << 1) + 0xC247554))) + 0x1);
        t44 = *(int *)((a4 + 0xBC));
        *(unsigned int *)(((t44 << 2) + 0xC247584)) = ((*(int *)(((t44 << 2) + 0xC247584))) + 0x14);
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        FUN_0c05025c(a4);
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c035ce4(int a4)
{
    int t14;
    int t22;
    int t26;
    int t33;
    int t35;
    int t37;
    int t39;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F4;
    int T_;
    R4 = a4;
    L_C035CE4:;
    *(unsigned int *)(((int)stk + 16)) = (FUN_0c03720a(R4));
    *(unsigned int *)(((int)stk + 12)) = (FUN_0c037242(R4));
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C035D1E;
    goto L_C035D04;
    L_C035D04:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C035D50;
    goto L_C035D0C;
    L_C035D0C:;
    R13 = ((*(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0))));
    if (((*(int *)((R14 + 0x49C))) == 1)) goto L_C035D26;
    goto L_C035D1E;
    L_C035D1E:;
    *(unsigned int *)((R14 + 0x538)) = 0x3;
    goto L_C035E0C;
    L_C035E0C:;
    R0 = (0x0);
    goto L_C035E18;
    L_C035E18:;
    return R0;
    L_C035D26:;
    t14 = (FUN_0c0349ea(R14, ((int)stk + 4), (((int)stk + 4) + 0x4))) != 0;
    if (t14) goto L_C035D3E;
    goto L_C035D36;
    L_C035D36:;
    R3 = (0x8);
    goto L_C035D38;
    L_C035D38:;
    *(unsigned int *)((R14 + 0x538)) = R3;
    goto L_C035E0C;
    L_C035D3E:;
    if ((((*(int *)((R13 + 0x20C))) & 0x402CDE00) != 0)) goto L_C035D50;
    goto L_C035D48;
    L_C035D48:;
    if (((int)(*(int *)((R13 + 0x328))) <= 0)) goto L_C035D54;
    goto L_C035D50;
    L_C035D50:;
    R3 = (0x5);
    goto L_C035D38;
    L_C035D54:;
    t22 = (FUN_0c034bac(R14)) != 0;
    if (t22) goto L_C035D7C;
    goto L_C035D5E;
    L_C035D5E:;
    FUN_0c0da2e0();
    t26 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 16)));
    if (t26) goto L_C035D7C;
    goto L_C035D72;
    L_C035D72:;
    R0 = (0x6);
    goto L_C035D74;
    L_C035D74:;
    *(unsigned int *)(((0x538 + R14) + 0x0)) = R0;
    goto L_C035E0C;
    L_C035D7C:;
    if (((*(int *)((R14 + 0x548))) == 0)) goto L_C035D9C;
    goto L_C035D84;
    L_C035D84:;
    FUN_0c0da2e0();
    t33 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 12)));
    if (t33) goto L_C035D9C;
    goto L_C035D98;
    L_C035D98:;
    R0 = (0x7);
    goto L_C035D74;
    L_C035D9C:;
    t35 = *(int *)((R14 + 0xBC));
    t37 = (FUN_0c0853d4(((((((t35 << 1) + t35) << 2) << 2) << 2) + 0xC23F268), 1.0f)) != 0;
    if (t37) goto L_C035DFC;
    goto L_C035DBA;
    L_C035DBA:;
    *(unsigned int *)((R14 + 0x538)) = 0x4;
    goto L_C035E0C;
    L_C035DFC:;
    t39 = (FUN_0c037088()) != 0;
    if (t39) goto L_C035E10;
    goto L_C035E06;
    L_C035E06:;
    *(unsigned int *)((R14 + 0x538)) = 0x9;
    goto L_C035E0C;
    L_C035E10:;
    *(unsigned int *)((R14 + 0x538)) = 0x0;
    R0 = (0x1);
    goto L_C035E18;
}
