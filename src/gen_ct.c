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
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(void);
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
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_uint { char p[0x1C4]; unsigned int v; };
struct o1C8_uint { char p[0x1C8]; unsigned int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o328_int { char p[0x328]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_short { char p[0x40]; short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o49C_int { char p[0x49C]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4CC_int { char p[0x4CC]; int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o548_int { char p[0x548]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o80_short { char p[0x80]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };


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
    if ((((((struct o40_short *)(a5))->v)) != 0) && ((t1 = (((struct o40_short *)(a5))->v), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = (((struct o44_short *)(a5))->v), (int)(unsigned short)t2 <= (int)0x3) && (t3 = (((struct o48_int *)(a5))->v), (unsigned int)t3 <= (unsigned int)0xE1000)))) {
        t5 = *(int *)((((unsigned short)((((struct o40_short *)(a5))->v)) << 2) + 0xC2393E0));
        t7 = *(int *)((((unsigned short)((((struct o44_short *)(a5))->v)) << 2) + 0xC2393F0));
        t8 = (((struct o48_int *)(a5))->v);
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
            (((struct o4E_ushort *)(a4))->v) = ((((struct o42_short *)(a5))->v));
            (((struct o4C_ushort *)(a4))->v) = ((((struct o40_short *)(a5))->v));
            (((struct o44_uint *)(a4))->v) = (a5 + 0x60);
            (((struct o48_uint *)(a4))->v) = (a5 + 0x80);
            (((struct o54_ushort *)(a4))->v) = ((((struct o44_short *)(a5))->v));
            if (((((struct o44_short *)(a5))->v)) == 0) {
                (((struct o50_uint *)(a4))->v) = 0x0;
                t28 = ((a5 + 0x80) + t5);
            } else {
                (((struct o50_uint *)(a4))->v) = ((a5 + 0x80) + t5);
                t28 = (((a5 + 0x80) + t5) + t7);
            }
            (((struct o5C_uint *)(a4))->v) = ((((struct o48_int *)(a5))->v));
            if (((((struct o48_int *)(a5))->v)) == 0) {
                (((struct o58_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o58_uint *)(a4))->v) = t28;
            }
            t33 = (((struct o46_short *)(a5))->v);
            (((struct o46_ushort *)(a5))->v) = 0x0;
            t34 = buCalcCRC(a5, (((t5 + t7) + t8) + 0x80));
            (((struct o46_ushort *)(a5))->v) = t33;
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

    t0 = (((struct o4C8_int *)(a4))->v);
    if ((unsigned int)t0 >= (unsigned int)0xE) {
        return FUN_0c03a66c(a4, a5, a6, a7);
    }
    switch ((t0 << 1)) {
        case 0:
        {
            if (((((((struct oC8_int *)(a4))->v)) & 0x300) != 0) && ((t2 = (((struct o304_int *)(a4))->v), (int)t2 <= 0) && (t3 = (((struct o20C_int *)(a4))->v), (t3 & 0x4000) == 0))) {
                if ((*(int *)0xC247030) != 0) {
                    (((struct o1C4_uint *)(a4))->v) = 0x0;
                } else {
                    (((struct o1C4_uint *)(a4))->v) = 0x1;
                }
                (((struct o1BC_uint *)(a4))->v) = 0x0;
                (((struct o1CC_uint *)(a4))->v) = 0x0;
                (((struct o1C8_uint *)(a4))->v) = 0x0;
                (((struct o1D4_float *)(a4))->v) = 100.0f;
                (((struct o1DC_uint *)(a4))->v) = 0x0;
                (((struct o1D8_uint *)(a4))->v) = 0x0;
                return FUN_0c03a834(a4, a5);
            }
            if ((((((struct o4CC_int *)(a4))->v)) == 1) && (t15 = (((struct o304_int *)(a4))->v), (int)t15 <= 0)) {
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
            if (((((struct o20C_int *)(a4))->v)) == 9) {
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
            (((struct o4C4_uint *)(a4))->v) = 0x5;
            (((struct o4C8_uint *)(a4))->v) = 0x0;
            (((struct o4D0_uint *)(a4))->v) = 0x0;
            return 0x4D0;
        }
        case 18:
        {
            if (((((struct o210_int *)(a4))->v)) != 67) {
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

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = (((struct o4F8_int *)(a4))->v);
        if ((t5 != 6) && (t5 != 7)) {
            t8 = (((struct o4F8_int *)(a4))->v);
            if ((t8 != 8) && (t8 != 9)) {
                (((struct o554_uint *)(a4))->v) = 0x1;
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                t9 = (((struct o4F0_int *)(a4))->v);
                ((int (*)(int))((*(int *)(((((t9 << 2) + t9) << 2) + 0xC1F8E3C)))))(a4);
    return;
            }
            (((struct o4F8_uint *)(a4))->v) = 0xA;
            return;
        }
        (((struct o4F8_uint *)(a4))->v) = 0x8;
        return;
    }
    t11 = (((struct o4F8_int *)(a4))->v);
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
                    (((struct o554_uint *)(a4))->v) = 0x1;
                    (((struct o4F8_uint *)(a4))->v) = 0xC;
                    return;
                }
                t14 = FUN_0c03593a(a4);
                if (t14 == 0) {
                    (((struct o554_uint *)(a4))->v) = 0x1;
                    t15 = (((struct o4F0_int *)(a4))->v);
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
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
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

    t0 = (((struct o3D4_int *)(a4))->v);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((-((((struct o70_short *)(a4))->v))));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    nlRotateAZ((*(short *)((t0 + 0x0))));
    nlRotateAY((*(short *)(((t0 + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((t0 + 0x2) + 0x2) + 0x0))));
    nlRotateAZ((*(short *)(((((t0 + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)((((((t0 + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)(((((((t0 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
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
    nlPopMatrix(0x1);
    (((struct o6E_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    return 0x6E;
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
    if (((((struct o4C_int *)(a4))->v)) != 0) {
        (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) - 1);
        return 0x4C;
    }
    if (((((struct o54_int *)(a4))->v)) != 0) {
        t4 = (((struct o54_int *)(a4))->v);
        (((struct o54_uint *)(a4))->v) = (t4 - 1);
        if ((t4 - 1) == 0) {
            return FUN_0c0e19f2(a4, a5, a6, a7);
        }
        t5 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t5 + 0x1);
        t6 = (((struct o50_int *)(a4))->v);
        t9 = t6;
        if ((int)(t5 + 0x1) >= (int)t6) {
            *(unsigned int *)((a4 + 0x30)) = 0x0;
            t7 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t7 + 0x1);
            t8 = 0x0;
            t9 = (t7 + 0x1);
        }
        t11 = (((struct o5C_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 8)) = t11;
        t13 = *(int *)((a4 + 0x34));
        (((struct o64_float *)(a4))->v) = ((((struct o3C_float *)(a4))->v));
        u14 = (((struct o40_float *)(a4))->v);
        (((struct o68_float *)(a4))->v) = u14;
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
        t48 = (((struct o58_int *)(a4))->v);
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
                        (((struct o60_uint *)(a4))->v) = ((((struct o80_short *)((*(int *)((a4 + 0x38)))))->v));
                        (((struct o8C_float *)(a4))->v) = 1.0f;
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
                (((struct o60_uint *)(a4))->v) = ((((struct o80_short *)((*(int *)((a4 + 0x38)))))->v));
                (((struct o8C_float *)(a4))->v) = 1.0f;
                t82 = (FUN_0c0c0340((a4 + 0x60), f4));
            }
            t90 = t82;
        }
        return t90;
    }
    t98 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t98 + 0x1);
    t99 = (((struct o50_int *)(a4))->v);
    t102 = t99;
    if ((int)(t98 + 0x1) >= (int)t99) {
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        t100 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t100 + 0x1);
        t101 = 0x0;
        t102 = (t100 + 0x1);
    }
    t104 = (((struct o5C_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = t104;
    t106 = *(int *)((a4 + 0x34));
    (((struct o64_float *)(a4))->v) = ((((struct o3C_float *)(a4))->v));
    u107 = (((struct o40_float *)(a4))->v);
    (((struct o68_float *)(a4))->v) = u107;
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
    t141 = (((struct o58_int *)(a4))->v);
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
                    (((struct o60_uint *)(a4))->v) = ((((struct o80_short *)((*(int *)((a4 + 0x38)))))->v));
                    (((struct o8C_float *)(a4))->v) = 1.0f;
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
            (((struct o60_uint *)(a4))->v) = ((((struct o80_short *)((*(int *)((a4 + 0x38)))))->v));
            (((struct o8C_float *)(a4))->v) = 1.0f;
            t175 = (FUN_0c0c0340((a4 + 0x60), f4));
        }
        t183 = t175;
    }
    return t183;
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
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C22608E:;
    R1008 = R6;
    R1004 = R7;
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
    set_vmstime((R13 + 0x20), (R1008));
    *(unsigned int *)(((R1004) + 0x0)) = R13;
    R0 = (0x0);
    goto L_C2261C6;
    L_C2261A8:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R12 + 0x0)));
    R12 = ((R12 + 0x1));
    R4 = ((R4 + 0x1));
    goto L_C2261AE;
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
    if ((((((struct o508_int *)(R4))->v)) != 0)) goto L_C035D1E;
    goto L_C035D04;
    L_C035D04:;
    if ((((((struct o50C_int *)(R14))->v)) == 0)) goto L_C035D50;
    goto L_C035D0C;
    L_C035D0C:;
    R13 = ((*(int *)(((((((struct o510_int *)(R14))->v)) << 2) + 0xC246FF0))));
    if ((((((struct o49C_int *)(R14))->v)) == 1)) goto L_C035D26;
    goto L_C035D1E;
    L_C035D1E:;
    (((struct o538_uint *)(R14))->v) = 0x3;
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
    (((struct o538_uint *)(R14))->v) = R3;
    goto L_C035E0C;
    L_C035D3E:;
    if (((((((struct o20C_int *)(R13))->v)) & 0x402CDE00) != 0)) goto L_C035D50;
    goto L_C035D48;
    L_C035D48:;
    if (((int)((((struct o328_int *)(R13))->v)) <= 0)) goto L_C035D54;
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
    if ((((((struct o548_int *)(R14))->v)) == 0)) goto L_C035D9C;
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
    t35 = (((struct oBC_int *)(R14))->v);
    t37 = (FUN_0c0853d4(((((((t35 << 1) + t35) << 2) << 2) << 2) + 0xC23F268), 1.0f)) != 0;
    if (t37) goto L_C035DFC;
    goto L_C035DBA;
    L_C035DBA:;
    (((struct o538_uint *)(R14))->v) = 0x4;
    goto L_C035E0C;
    L_C035DFC:;
    t39 = (FUN_0c037088()) != 0;
    if (t39) goto L_C035E10;
    goto L_C035E06;
    L_C035E06:;
    (((struct o538_uint *)(R14))->v) = 0x9;
    goto L_C035E0C;
    L_C035E10:;
    (((struct o538_uint *)(R14))->v) = 0x0;
    R0 = (0x1);
    goto L_C035E18;
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



