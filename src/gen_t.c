/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Stop(int);
int FUN_0c01e822(int, int, int, int);
int FUN_0c01fe82(int);
int FUN_0c0321d4(int, int);
int FUN_0c0341a6(int, int);
int FUN_0c034314(int, int, int);
int FUN_0c034c26(int);
int FUN_0c034e2c(int);
int FUN_0c0366b4(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c0556ce(int, int, int);
int FUN_0c0558f8(int, int, int, int);
int FUN_0c085752(int, int);
int FUN_0c0bbbf4(int);
int FUN_0c0c4322(int);
int FUN_0c0c4580(void);
int FUN_0c0c465c(int);
int FUN_0c0c74a4(void);
int FUN_0c0cc3f8(int);
int FUN_0c0cee6a(int);
int FUN_0c0cf908(void);
int FUN_0c0cfaf2(int);
int FUN_0c0d1854(int);
int FUN_0c0d2040(int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de2c0(int);
extern int FUN_0c0e15d4();
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e1dc4(int);
int FUN_0c0e262a(int);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(int);
int FUN_0c229734(void);
int FUN_0c233692(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int buMountDisk(int, int, int);
int memset(int, int, int);
extern int mwRnaErrCallFunc();
int syBtCfgSet(int, int, int);
int thunk_FUN_0c0e2a4c(int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfname(int, int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int FUN_0c034f6c(int a4, int a5, int a6);
int FUN_0c035ad6(int a4, int a5);
int FUN_0c03c65c(int a4);
int FUN_0c03c6ac(int a4);
int FUN_0c03c70c(int a4);
int FUN_0c04e5b8(int a4, int a5);
int FUN_0c0555ca(int a4, int a5, int a6, int a7);
int FUN_0c07dcea(int a4);
int FUN_0c078d72(int a4, int a5);
int FUN_0c08448c(int a4);
int FUN_0c0373e0(int a4);
int FUN_0c0a44c6(int a4, int a5);
int FUN_0c0a4bb2(int a4);
int FUN_0c0ae09a(void);
int FUN_0c03f450(int a4);
int FUN_0c0a9592(int a4, int a5, int a6, int a7);
int FUN_0c0cdff2(void);
void FUN_0c0ce6a8(int a4, int a5);
void FUN_0c0cec9a(int a4);
int FUN_0c0d2060(int a4);
int FUN_0c0e1852(int a4, int a5, int a6);
int FUN_0c0e4f04(int a4, int a5);
int ADXF_Close(int a4);
float FUN_0c01e79a(int a4, int a5);
int FUN_0c016c10(int a4);
int FUN_0c01fb04(void);
int FUN_0c0236ce(int a4);
int FUN_0c03f63c(int a4, int a5);
int FUN_0c054c3c(int a4);
int FUN_0c054ccc(int a4, int a5, int a6, int a7);
int FUN_0c055874(void);
int FUN_0c085704(int a4);
int FUN_0c0cf11c(int a4, int a5);
float FUN_0c0d7114(int a4, int a5);
int FUN_0c0b3254(int a4);
int ntInfExit(void);
int FUN_0c0f30f8(int a4, int a5);
int kmChangeContextColorClamp(int a4);
int search_fat_used(int a4);
int fmMngNum2Bit(int a4, int a5, int a6);
int FUN_0c22ca1a(int a4, int a5, int a6, int a7);
int syCfgGetSoundMode(int a4, int a5, int a6);
void kmiRegisterPhIntHandler(int a4);
int buDeleteFile(int a4, int a5);

int FUN_0c034f6c(int a4, int a5, int a6)
{
    int t11;
    int t19;
    int t1;
    int t2;
    float u3;

    t11 = 0x0;
    t19 = 0;
    if ((*(int *)((a4 + 0x530))) == 0) {
        t19 = (1);
    } else {
        t1 = FUN_0c0366b4(a4);
        t2 = *(short *)((a4 + 0x6E));
        u3 = *(float *)0xC03503C;
        if (_builtin_fabsf((float)(short)(t2 - t1)) > u3) {
            FUN_0c0546fe(a4, t1, a5, a6);
        } else {
            _builtin_fabsf((float)(short)(t2 - t1));
        }
        t11 = 0x1;
        t19 = ((_builtin_fabsf((float)(short)(t2 - t1)) > u3));
    }
    return t11;
}

int FUN_0c035ad6(int a4, int a5)
{
    int t10;
    int t1;
    int t3;
    int t8;
    int t5;
    int t6;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t10 = 0xFFFFFFFF;
    if ((*(int *)(((0xC247030 + (a5 << 2)) + 0x0))) != 0) {
        t1 = *(int *)(((0xC246FF0 + (a5 << 2)) + 0x0));
        t3 = FUN_0c0341a6((*(int *)(((int)stk + 4))), t1);
        t8 = 0xFFFFFFFF;
        if ((int)t3 > 0) {
            t5 = FUN_0c034314((*(int *)(((int)stk + 4))), t1, (((int)stk + 4) + 0x4));
            t6 = 0xFFFFFFFF;
            if (t5 != 0) {
                t6 = t3;
            }
            t8 = t6;
        }
        t10 = t8;
    }
    return t10;
}

int FUN_0c03c65c(int a4)
{
    int t3;

    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x3);
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t3 = *(int *)((a4 + 0x57C));
        if (t3 != 0) {
            if ((t3 != 1) && ((t3 != 2) && (t3 != 3))) {
                
                return t3;
            }
            return FUN_0c0cc3f8(0xC2EA9);
        }
        return FUN_0c0cc3f8(0xB2EA9);
    }
    return 0x304;
}

int FUN_0c03c6ac(int a4)
{
    int t3;

    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x4);
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t3 = *(int *)((a4 + 0x57C));
        if (t3 != 0) {
            if ((t3 != 1) && ((t3 != 2) && (t3 != 3))) {
                
                return t3;
            }
            return FUN_0c0cc3f8(0xC2EA9);
        }
        return FUN_0c0cc3f8(0xB2EA9);
    }
    return 0x304;
}

int FUN_0c03c70c(int a4)
{
    int t3;

    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x5);
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t3 = *(int *)((a4 + 0x57C));
        if (t3 != 0) {
            if ((t3 != 1) && ((t3 != 2) && (t3 != 3))) {
                
                return t3;
            }
            return FUN_0c0cc3f8(0xC2EA9);
        }
        return FUN_0c0cc3f8(0xB2EA9);
    }
    return 0x304;
}

int FUN_0c04e5b8(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x6E)) = a5;
    *(unsigned int *)((a4 + 0x20C)) = 0x400000;
    *(unsigned int *)((a4 + 0x210)) = 0x74;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFFFFD);
    *(unsigned int *)((a4 + 0x2D4)) = 0x3;
    if ((*(int *)((a4 + 0xAC))) == 9) {
        *(unsigned int *)((a4 + 0x2C4)) = 0x3C1;
    } else {
        *(volatile int *)((a4 + 0xAC));
        *(unsigned int *)((a4 + 0x2C4)) = 0x4CB;
    }
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x31C)) = 0x0;
    return 0x31C;
}

int FUN_0c0555ca(int a4, int a5, int a6, int a7)
{
    int t0;

    *(unsigned int *)0xC1FF888 = 0x1;
    if (((int)a5 >= (int)0x16) && ((int)a5 < (int)0x1D)) {
        t0 = FUN_0c0553b6(a5, 0x4, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        _quick_odd_mvn(t0);
        *(unsigned int *)((a4 + 0x25C)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c07dcea(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07DD98, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(float *)((t1 + 0x74)) = (1.0f / (*(float *)((a4 + 0x274))));
    *(unsigned int *)((t1 + 0x78)) = 0x1264;
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t1 + 0x80)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFEFF);
    return 0x80;
}

int FUN_0c078d72(int a4, int a5)
{
    int t0;
    int t1;
    int stk[8];

    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = a4;
    for (;;) {
        t1 = *(short *)((t0 + 0xC));
        if (t1 == 0) {
            break;
        }
        nlPushMatrix(0x0);
        if (((unsigned short)(*(short *)((t0 + 0xE))) & (*(short *)(((int)stk + 4)))) != 0) {
            FUN_0c0dcca0(t0);
            FUN_0c0c465c((unsigned short)(*(short *)((t0 + 0xC))));
        }
        nlPopMatrix(0x1);
        t0 = (t0 + 0x10);
    }
    return t1;
}

int FUN_0c08448c(int a4)
{
    int t8;
    int t12;
    int t3;
    float u4;
    int stk[6];

    if (a4 != 0) {
        t3 = 0xC247F40;
        u4 = (*(float *)0xC247F34);
    } else {
        t3 = 0xC247F28;
        u4 = (*(float *)0xC247F1C);
    }
    FUN_0c0dce80(((int)stk + 4), t3, u4);
    t8 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t12 = 0xC247CAC;
    if (t8 != 0) {
        FUN_0c0dbda0((0x2AC + t8));
        FUN_0c0db4d0(((int)stk + 4), ((int)stk + 4));
        t12 = (FUN_0c0de2c0(((int)stk + 4)));
    }
    return t12;
}

int FUN_0c0373e0(int a4)
{
    int t1;
    int t12;

    FUN_0c085704(a4);
    t1 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t1 + 0x1);
    if ((float)(t1 + 0x1) > ((*(float *)((a4 + 0x278))) * (*(float *)0xC0374E0))) {
        FUN_0c0e19f2();
    }
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.049999997f);
    t12 = *(int *)((a4 + 0x3AC));
    if ((t12 & 1) != 0) {
        return FUN_0c0bbbf4(a4);
    }
    return t12;
}

int FUN_0c0a44c6(int a4, int a5)
{
    int t2;
    int t7;
    int t9;

    *(unsigned int *)(((0x84 + (*(int *)0xC249778)) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x6)));
    t2 = *(int *)0xC249778;
    if ((*(int *)((t2 + 0x84))) == 0) {
        *(unsigned int *)(((0x80 + t2) + 0x0)) = (-(unsigned short)(*(short *)((a5 + 0x4))));
        *(unsigned int *)(((*(int *)0xC249778) + 0xA0)) = 0x0;
        t9 = 0xA0;
    } else {
        *(unsigned int *)(((0x80 + t2) + 0x0)) = (-(unsigned short)(*(short *)((a5 + 0x4))));
        t7 = *(short *)((a5 + 0x4));
        *(unsigned int *)(((0xA0 + (*(int *)0xC249778)) + 0x0)) = (-(unsigned short)t7);
        t9 = (-(unsigned short)t7);
    }
    return t9;
}

int FUN_0c0a4bb2(int a4)
{
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (((*(int *)(((0xC247030 + (a4 << 2)) + 0x0))) != 0) && ((t1 = *(int *)(((0xC246FF0 + (a4 << 2)) + 0x0)), t2 = *(int *)((t1 + 0x48C)), t2 == 49) && ((t3 = *(int *)(((a4 << 2) + 0xC24977C)), t4 = *(int *)((t3 + 0x84)), t4 == 2) && (t5 = *(int *)((t3 + 0xA4)), (int)t5 > 0)))) {
        *(unsigned int *)((t3 + 0xA4)) = ((*(int *)((t3 + 0xA4))) - 1);
        t7 = *(int *)((t3 + 0xA4));
        return ((((t7 << 1) + t7) << 2) + 0xC201110);
    }
    return 0x0;
}

int FUN_0c0ae09a(void)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC0ADD8C, 0x2044, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t3 = *(int *)0xC23ED50;
    if (t3 != 55) {
        if (t3 != 59) {
            if (t3 != 104) {
            } else {
                *(unsigned int *)((t1 + 0x30)) = 0xC10F514;
            }
        } else {
            *(unsigned int *)((t1 + 0x30)) = 0xC10F498;
        }
    } else {
        *(unsigned int *)((t1 + 0x30)) = 0xC10F590;
    }
    *(float *)((t1 + 0x34)) = (*(float *)(((*(int *)((t1 + 0x30))) + 0x0)));
    *(unsigned int *)((t1 + 0x38)) = (*(int *)(((*(int *)((t1 + 0x30))) + 0x3C)));
    return 0x34;
}

int FUN_0c03f450(int a4)
{
    int t1;
    int t12;

    FUN_0c085704(a4);
    t1 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t1 + 0x1);
    if ((float)(t1 + 0x1) > ((*(float *)((a4 + 0x278))) * (*(float *)0xC03F590))) {
        FUN_0c01fe82(a4);
    }
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.049999997f);
    t12 = *(int *)((a4 + 0x3AC));
    if ((t12 & 1) != 0) {
        return FUN_0c0bbbf4(a4);
    }
    return t12;
}

int FUN_0c0a9592(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int t12;
    int t14;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))((*(int *)0xC23ECE0), a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECEC));
    t5 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECE4));
    t7 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECF0));
    t9 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECF4));
    t12 = *(int *)0xC204998;
    t14 = (FUN_0c0c4322((*(int *)0xC23ED50)));
    if (t12 != 0) {
        t14 = (FUN_0c0c4580());
    }
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23ED48 = 0x0;
    *(unsigned int *)0xC23EDB0 = 0x0;
    return t14;
}


void FUN_0c0ce6a8(int a4, int a5)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t3;
    int t13;
    int t14;

    t1 = a4;
    t2 = a5;
    t4 = 0x0;
    t5 = a5;
    for (;;) {
        if ((*(int *)((t5 + 0x0))) == 0) {
            break;
        }
        if (t4 == a4) {
            t3 = (*(int *)((t5 + 0x0)));
            t1 = (*(int *)((t3 + 0x0)));
            t2 = (*(int *)((t3 + 0x4)));
            t1 = (t1 - 4);
            FUN_0c0db0a0(t1, t2);
            nlPrintf(0xC1E9F40);
        } else {
            t13 = t1;
            t14 = t2;
        }
        t4 = (t4 + 0x1);
        t1 = t13;
        t2 = t14;
        t5 = (t5 + 0x4);
    }
}

void FUN_0c0cec9a(int a4)
{
    if ((int)a4 >= 0) {
        if ((*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x54))) == 0) {
            *(unsigned int *)(((0x54 + ((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C)) + 0x0)) = (FUN_0c0e262a((*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x58)))));
            buMountDisk(a4, (*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x54))), (*(int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x58))));
    return;
        }
        return;
    }
}

int FUN_0c0d2060(int a4)
{
    int t2;

    FUN_0c0da2e0();
    t2 = (0xFFFFFFFE & (FUN_0c0e5f1c()));
    for (;;) {
        if ((*(int *)(((((0x1 - a4) << 2) + 0xC943410) + 0x0))) != t2) {
            break;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x6) {
            t2 = 0x0;
        }
    }
    *(unsigned int *)((0xC943410 + (a4 << 2))) = t2;
    return FUN_0c0d2040(a4, t2);
}

int FUN_0c0e1852(int a4, int a5, int a6)
{
    int t7;
    int t8;

    *(unsigned int *)((a5 + 0x10)) = (*(int *)0xC94C798);
    *(unsigned int *)((a5 + 0x14)) = (*(int *)(((*(int *)0xC94C798) + 0x14)));
    *(unsigned int *)((a5 + 0x18)) = (*(int *)0xC94C798);
    *(unsigned int *)(((*(int *)(((*(int *)0xC94C798) + 0x14))) + 0x18)) = a5;
    *(unsigned int *)(((*(int *)0xC94C798) + 0x14)) = a5;
    *(unsigned int *)((a5 + 0x0)) = a4;
    *(unsigned int *)((a5 + 0x1C)) = a6;
    *(unsigned short *)((a5 + 0x2E)) = 0x0;
    *(unsigned int *)((a5 + 0x4)) = 0xC0E17A4;
    t7 = *(int *)0xC94C79C;
    *(unsigned int *)0xC94C79C = (t7 + 0x1);
    *(unsigned int *)((a5 + 0x8)) = ((t7 + 0x1) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x80018691;
    t8 = FUN_0c0e1dc4(a5);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    return t8;
}

int FUN_0c0e4f04(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t6;
    int t10;
    int t11;
    int t7;
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x9);
    t1 = *(short *)(((int)stk + 10));
    if (t1 != 1) {
        if (t1 != 2) {
            t3 = t1;
            if (t1 != 4) {
            } else {
                t2 = *(signed char *)(((t0 + 0x9) + 0x0));
                *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t2 & 0x80) | 0x2);
                t3 = ((t2 & 0x80) | 0x2);
            }
            t7 = t3;
        } else {
            t6 = *(signed char *)(((t0 + 0x9) + 0x0));
            *(unsigned char *)(((t0 + 0x9) + 0x0)) = ((t6 & 0x80) | 0x1);
            t7 = ((t6 & 0x80) | 0x1);
        }
        t11 = t7;
    } else {
        t10 = *(signed char *)(((t0 + 0x9) + 0x0));
        *(unsigned char *)(((t0 + 0x9) + 0x0)) = (t10 & 0x80);
        t11 = (t10 & 0x80);
    }
    return t11;
}

int ADXF_Close(int a4)
{
    int t9;

    t9 = (adxf_SetCmdHstry(0x3, 0x0, a4, 0xFFFFFFFF, 0xFFFFFFFF));
    if (a4 != 0) {
        ADXCRS_Lock();
        if ((*(signed char *)((a4 + 0x1))) == 2) {
            ADXF_Stop(a4);
        }
        memset(a4, 0x0, 0x30);
        ADXCRS_Unlock();
        t9 = (adxf_SetCmdHstry(0x3, 0x1, a4, 0xFFFFFFFF, 0xFFFFFFFF));
    }
    return t9;
}

float FUN_0c01e79a(int a4, int a5)
{
    float u0;
    float u3;
    float u6;

    u0 = *(float *)0xC01E8D8;
    u3 = (*(float *)((a4 + 0x8C)));
    u3 = u3 + u0 * (*(float *)(((0x98 + a4) + 0x0)));
    *(float *)((a4 + 0x8C)) = u3;
    *(float *)((a4 + 0x30)) = u3;
    u6 = (*(float *)((a4 + 0x94)));
    u6 = u6 + u0 * (*(float *)(((0xA0 + a4) + 0x0)));
    *(float *)((a4 + 0x94)) = u6;
    *(float *)((a4 + 0x38)) = u6;
    *(unsigned int *)0xC245FA0 = 0x80000000;
    *(float *)((a4 + 0x54)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x30))));
    *(float *)((a4 + 0x5C)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x38))));
    return u0;
}


int FUN_0c01fb04(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((0xC246074 + t0) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((0xC246074 + t0) + 0x4)) = 0x0;
        *(unsigned int *)(((0xC246074 + t0) + 0x8)) = 0x2;
        *(unsigned int *)(((0xC246074 + t0) + 0xC)) = 0x0;
        t1 = (0xC246074 + t0);
        t2 = (0xC246074 + t0);
        t0 = (t0 + 0x20);
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        *(unsigned int *)((t1 + 0x1C)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x80) {
            break;
        }
    }
    *(unsigned int *)0xC2462F4 = 0x0;
    t3 = FUN_0c0c74a4();
    *(unsigned int *)0xC2462FC = 0x0;
    return t3;
}

int FUN_0c0236ce(int a4)
{
    int t3;
    int t5;
    int t7;

    if ((*(int *)((a4 + 0x508))) == 0) {
        if ((*(int *)((a4 + 0x50C))) == 0) {
            t3 = FUN_0c034c26(a4);
            if (t3 != 0) {
                if ((*(int *)((a4 + 0x524))) == 0) {
                    t5 = FUN_0c034e2c(a4);
                    if (t5 == 0) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x0;
        }
        if ((*(int *)((a4 + 0x524))) == 0) {
            t7 = FUN_0c034e2c(a4);
            if (t7 == 0) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x1;
    }
    *(unsigned int *)((a4 + 0x524)) = 0x1;
    *(unsigned int *)((a4 + 0x528)) = 0x3;
    return 0x1;
}

int FUN_0c03f63c(int a4, int a5)
{
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    FUN_0c0321d4(a4, a5);
    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = 0x5;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x4DC)) = 0x0;
    *(unsigned int *)((a4 + 0x4E0)) = 0x0;
    *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    *(unsigned int *)((a4 + 0x4E8)) = 0x0;
    *(unsigned int *)((a4 + 0x4EC)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
    return 0xC247030;
}

int FUN_0c054c3c(int a4)
{
    int t2;
    int t3;

    t2 = *(int *)0xC247CB0;
    if (((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030))) != 0) && (t3 = *(int *)((a4 + 0x294)), t3 != 0x10000)) {
        if ((*(float *)0xC054CC4) > _builtin_fabsf((float)(short)((*(short *)((a4 + 0x6E))) - ((*(int *)((a4 + 0x294))) + (*(short *)((t2 + 0x3CE))))))) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c054ccc(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t4;

    if ((int)(*(int *)0xC1FF6D4) > 0) {
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x0)) = 0x9;
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x2)) = 0x1;
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x4)) = 0xA;
        t1 = ((((a4 & 0x1) * 0xE) + 0xC247998) + 0x6);
        t2 = 0x1;
        for (;;) {
            if ((int)t2 >= (int)(*(int *)0xC1FF6D4)) {
                break;
            }
            *(unsigned short *)((t1 + 0x0)) = 0x0;
            t1 = (t1 + 0x2);
            t2 = (t2 + 0x1);
        }
        t4 = 0xA;
    } else {
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x0)) = 0x0;
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x2)) = 0x0;
        *(unsigned short *)(((((a4 & 0x1) * 0xE) + 0xC247998) + 0x4)) = 0x0;
        t4 = 0x0;
    }
    return t4;
}

int FUN_0c055874(void)
{
    int t1;
    int t2;
    int t5;

    if ((int)(*(int *)0xC247994) >= (int)0xC) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)0x30) {
                return 0xFFFFFFFF;
            }
            if ((*(int *)((t1 + 0xC247604))) == 11) {
                break;
            }
            t1 = (t1 + 0x4);
            t2 = (t2 + 0x4);
        }
        t5 = *(int *)(((0xC2475D4 + t2) + 0x0));
        FUN_0c0558f8(t5, t2, 0xC2475D4, 0x30);
        *(unsigned int *)((t5 + 0x0)) = 0xC056B1A;
        return 0x0;
    }
    return 0x0;
}

int FUN_0c085704(int a4)
{
    int t5;

    t5 = 0x0;
    if ((*(int *)((a4 + 0x2F0))) != 0) {
        FUN_0c085752(a4, 0x2);
        t5 = 0x1;
    }
    return FUN_0c085752(a4, t5);
}


float FUN_0c0d7114(int a4, int a5)
{
    int t4;
    int t5;
    int stk[12];

    *(float *)(((int)stk + 32)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    t4 = FUN_0c01e822(a4, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10));
    t5 = 0x1;
    if (t4 == 0) {
        t5 = 0x0;
    }
    return (float)t5;
}

int FUN_0c0b3254(int a4)
{
    int t3;
    int t6;
    int t5;

    FUN_0c0bbbf4(a4);
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x20000);
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    *(unsigned int *)((a4 + 0x0)) = 0xC0B32A2;
    t3 = *(int *)((0xC247030 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)));
    t6 = t3;
    if (t3 == 4) {
        t5 = *(int *)((0xC246FF0 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)));
        *(unsigned int *)((t5 + 0xA4)) = 0xA7F;
        *(unsigned int *)((t5 + 0x0)) = 0xC0B32A2;
        t6 = 0xA4;
    }
    return t6;
}

int ntInfExit(void)
{
    int t10;

    if ((*(int *)0xC20D130) != 0) {
        FUN_0c229734();
        if (((*(int *)0xC20D138) & 1) == 0) {
            thunk_FUN_0c0e2a4c((*(int *)0xC20D130));
        }
        *(unsigned int *)0xC20D130 = 0x0;
    }
    t10 = *(int *)0xC20D134;
    if (t10 != 0) {
        if (((*(int *)0xC20D138) & 2) == 0) {
            thunk_FUN_0c0e2a4c(t10);
        }
        *(unsigned int *)0xC20D134 = 0x0;
    }
    *(unsigned int *)0xC20D138 = 0x0;
    return 0x0;
}

int FUN_0c0f30f8(int a4, int a5)
{
    int t16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t0;

    t16 = 0x0;
    if ((int)(a5 - 1) >= 0) {
        t1 = ((a5 - 1) + a4);
        t2 = (a5 - 1);
        t3 = ((a5 - 1) + a4);
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) << 1);
            if (t4 != 0) {
                t0 = (*(signed char *)((t3 + 0x0)));
                t0 = (t0 | 0x1);
                *(unsigned char *)((t3 + 0x0)) = t0;
            }
            t4 = ((unsigned char)t5 & 0x80);
            t2 = (t2 - 1);
            t3 = (t3 - 1);
            t1 = (t1 - 1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t16 = t4;
    }
    if (t16 != 0) {
        return 0x1;
    }
    return 0x0;
}

int kmChangeContextColorClamp(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC95288C = ((*(int *)0xC95288C) | 0x200000);
    } else {
        *(unsigned int *)0xC95288C = ((*(int *)0xC95288C) & 0xFFDFFFFF);
    }
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

int search_fat_used(int a4)
{
    int t0;
    int t6;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = ((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x24))), (t0 << 1));
        if (((unsigned short)t6 != 0xFFFC) && ((unsigned short)t6 != 0xFFFF)) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return t0;
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t0;

    t1 = (((a6 << 2) << 2) << 2);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    for (;;) {
        if ((int)t1 <= 0) {
            break;
        }
        if ((int)t3 >= (int)0x8) {
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x1);
            t3 = (t3 - 8);
        } else {
            if ((int)t3 > 0) {
                t0 = 0x8;
                for (;;) {
                    t5 = (t5 << 1);
                    if ((int)t3 > 0) {
                        t3 = (t3 - 1);
                    } else {
                        t5 = (t5 | (0x1));
                    }
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = t5;
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0xFFFFFFFF;
            }
            t4 = (t4 + 0x1);
        }
        t1 = (t1 - 1);
    }
    return 0x0;
}

int FUN_0c22ca1a(int a4, int a5, int a6, int a7)
{
    int t1;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC237EE0, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x80)) = a5;
    *(unsigned int *)((a4 + 0x84)) = a6;
    t1 = FUN_0c233692((*(int *)((a4 + 0x40))), a5, a6);
    if (t1 != 0) {
        return ((int (*)(int))(mwRnaErrCallFunc))(0xC238100);
    }
    return t1;
}

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC239400;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0, t0, a6);
            if (t1 != -1) {
                t3 = *(signed char *)0x8C00007E;
                if ((signed char)t3 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t3 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

void kmiRegisterPhIntHandler(int a4)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)((((int)_builtin_get_vbr()) + 0x224)) = a4;
    *(unsigned int *)0xA05F6930 = 0x0;
    *(unsigned int *)0xA05F6938 = 0x0;
    *(unsigned int *)0xA05F6900 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6908 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6930 = 0x2807EC;
    *(unsigned int *)0xA05F6938 = 0xE;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int buDeleteFile(int a4, int a5)
{
    int t0;
    int t4;

    t0 = vmsfs_c_getstate(a4);
    t4 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x7);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        vmsfs_c_setfname(a4, a5, a5);
        t4 = 0x0;
    }
    return t4;
}
