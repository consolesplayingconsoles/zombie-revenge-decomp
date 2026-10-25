/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_Stop(int);
int FUN_0c01f18e(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c04997c(int, int);
int FUN_0c0548cc(int);
int FUN_0c06524a(int, int, int);
int FUN_0c0652a2(int, int, int, int, float);
int FUN_0c066064(void);
int FUN_0c06f1cc(int, int);
int FUN_0c07e1e8(void);
int FUN_0c082f78(int, int, int);
int FUN_0c084104(void);
int FUN_0c0a8bb0(int);
int FUN_0c0a9e68(int, int, float);
int FUN_0c0b35e4(int);
int FUN_0c0bb1c8(int, int);
int FUN_0c0c0340(int);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c6694(void);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cdd9c(int);
int FUN_0c0cee62(void);
int FUN_0c0cee6a(int);
int FUN_0c0cfb00(int);
int FUN_0c0d1862(int);
int FUN_0c0da2e0(void);
int FUN_0c0e14c4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e1ade(int);
int FUN_0c0e1dc4(int);
int FUN_0c0e35b6(int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e609c(void);
int FUN_0c0e61d4(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c229028(void);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c22ba6e(int);
int FUN_0c22bece(int, int);
int check_fat_xross(int, int);
int kbCfgIni(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int search_fat(int, int, int, int);
int set_fat(int, int, int);
int syCfgIIDCheckSum(int);
int syMmuDeleteEntry(int, int, int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
void FUN_0c016d20(int a4, int a5, int a6);
int FUN_0c034bac(int a4);
int FUN_0c01a38e(int a4, int a5);
int FUN_0c070b90(int a4, int a5);
int FUN_0c06f3ac(void);
int FUN_0c067128(void);
int FUN_0c075124(void);
int FUN_0c0770b8(void);
int FUN_0c077102(void);
int FUN_0c08ad98(int a4);
int FUN_0c0927b8(int a4);
int FUN_0c0a2884(int a4, int a5, int a6, int a7);
void FUN_0c01a52c(int a4);
int FUN_0c016c5e(int a4);
int FUN_0c050dac(int a4);
int FUN_0c041f2a(int a4);
int FUN_0c06cdc2(int a4, int a5, int a6);
int FUN_0c06cee2(int a4, int a5, int a6);
int FUN_0c0839e4(int a4);
int FUN_0c08f3d8(int a4, int a5);
int FUN_0c0906a0(int a4);
int FUN_0c0a8730(void);
void FUN_0c0a9e94(int a4, int a5, float f4);
int FUN_0c0ac848(int a4, int a5);
int FUN_0c0b2e84(int a4);
int FUN_0c0be88a(int a4, int a5, int a6, int a7);
void FUN_0c0cbd70(void);
int FUN_0c0c664c(int a4);
int FUN_0c0cdeba(void);
int FUN_0c0e18f4(int a4, int a5, int a6);
int FUN_0c0e1962(int a4, int a5, int a6);
int FUN_0c0e63ac(int a4, int a5, int a6);
int FUN_0c0f3f98(int a4, int a5);
int get_data(int a4);
int FUN_0c232ef4(int a4);
int FUN_0c22ba22(int a4, int a5, int a6, int a7);
int FUN_0c0874ca(int a4, int a5, int a6, int a7);
int FUN_0c08a1b8(int a4, int a5);
int FUN_0c092146(int a4);
int FUN_0c0b70fe(void);
int FUN_0c0b7f08(int a4, int a5);
int FUN_0c0cee9e(void);
float FUN_0c0da010(float f4);
float FUN_0c0e5930(int a4);
int FUN_0c0e1b06(void);
void FUN_0c0b359e(int a4, int a5);
int buCloseFile(int a4);
int buDeleteFileEx(int a4, int a5, int a6);
int FUN_0c22287e(int a4, int a5, int a6);
int search_fat_free_xross(int a4, int a5, int a6, int a7);
int syCfgGetIndividualID(int a4, int a5, int a6);

void FUN_0c016d20(int a4, int a5, int a6)
{
    if ((int)(*(short *)((a6 + 0x0))) < 0) {
        return;
    }
    ((int (*)(int, int, int))(0xC016CE0))(a4, a5, a6);
}

int FUN_0c034bac(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = 0x0;
    for (;;) {
        if ((t0 != (*(int *)((a4 + 0x498)))) && ((t2 = *(short *)(((((t0 << 2) << 2) + 0xC2460F4) + 0x4)), (unsigned short)t2 == 2) && ((t3 = *(int *)(((((t0 << 2) << 2) + 0xC2460F4) + 0x0)), t4 = *(int *)((t3 + 0x4C8)), t4 == 2) && (t5 = *(int *)((t3 + 0x510)), t6 = *(int *)((a4 + 0x510)), t5 == t6)))) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            return 0x1;
        }
    }
    return 0x0;
}

int FUN_0c01a38e(int a4, int a5)
{
    int t5;

    FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)(((a4 << 2) + 0xC23EDC0))), (*(int *)(((a4 << 2) + 0xC23EDD0))));
    t5 = (FUN_0c04997c(a4, a5));
    if (a5 == 0) {
        *(float *)(((a4 << 2) + 0xC24758C)) = 0.0f;
        *(unsigned int *)(((a4 << 2) + 0xC247584)) = 0x0;
        *(unsigned int *)(((a4 << 2) + 0xC247594)) = 0x180;
        *(unsigned int *)(((a4 << 2) + 0xC24759C)) = 0x180;
        t5 = 0xC24759C;
    }
    return t5;
}

int FUN_0c070b90(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC070C96, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(unsigned int *)((t1 + 0x28C)) = 0x1260;
    *(unsigned int *)((t1 + 0xBC)) = 0x2;
    *(unsigned short *)((t1 + 0x6E)) = a5;
    *(unsigned int *)((t1 + 0x29C)) = (*(short *)((t1 + 0x6E)));
    return 0x29C;
}

int FUN_0c06f3ac(void)
{
    int t1;
    float u5;

    t1 = FUN_0c0e19aa(0xC06EDE8, 0xCC, (*(int *)0xC23ECE4));
    FUN_0c06f1cc(t1, 0xC06F2D6);
    *(float *)((t1 + 0x9C)) = (*(float *)0xC06F4C8);
    *(float *)((t1 + 0xA4)) = (*(float *)0xC06F4B0);
    u5 = *(float *)0xC06F4BC;
    *(float *)((t1 + 0xA8)) = u5;
    *(float *)((t1 + 0xB0)) = (*(float *)0xC06F4CC);
    *(float *)((t1 + 0xA0)) = u5;
    *(float *)((t1 + 0xAC)) = (*(float *)0xC06F4D0);
    return 0xAC;
}

int FUN_0c067128(void)
{
    int t0;
    int t5;

    t0 = *(int *)0xC247BE8;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0e16c0((*(int *)0xC247BF0));
    }
    FUN_0c07e1e8();
    FUN_0c084104();
    *(unsigned int *)0xC247BF0 = (FUN_0c0e14c4(0xC0670DC));
    t5 = FUN_0c066064();
    *(unsigned int *)0xC247BE8 = ((*(int *)0xC247BE8) + 0x1);
    return t5;
}

int FUN_0c075124(void)
{
    int t0;
    int t1;
    int t3;
    int t9;
    int t6;

    t0 = 0xC23EE14;
    t1 = 0x0;
    for (;;) {
        t3 = *(short *)(((*(int *)((t0 + 0x4))) + 0x46));
        if (t3 != 49) {
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x8);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t9 = t3;
    if ((*(int *)((t0 + 0x0))) == 0) {
        t6 = FUN_0c0e19aa(0xC075036, 0xB4, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t6);
        *(unsigned int *)((t6 + 0x8C)) = (*(int *)0xC1FF488);
        *(unsigned int *)((t6 + 0x78)) = 0x1268;
        t9 = 0x78;
    }
    return t9;
}

int FUN_0c0770b8(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0186EC, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(float *)((t1 + 0x30)) = (*(float *)0xC077170);
    *(float *)((t1 + 0x34)) = (*(float *)0xC077174);
    *(float *)((t1 + 0x38)) = (*(float *)0xC077178);
    *(unsigned short *)((t1 + 0x62)) = 0x1000;
    *(float *)((t1 + 0x74)) = (*(float *)0xC07717C);
    *(unsigned int *)((t1 + 0x78)) = 0x11F5;
    return 0x78;
}

int FUN_0c077102(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0186EC, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(float *)((t1 + 0x30)) = 550.0f;
    *(float *)((t1 + 0x34)) = -300.0f;
    *(float *)((t1 + 0x38)) = 1100.0f;
    *(unsigned short *)((t1 + 0x62)) = 0x4000;
    *(float *)((t1 + 0x74)) = 0.25f;
    *(unsigned int *)((t1 + 0x78)) = 0x11F5;
    return 0x78;
}

int FUN_0c08ad98(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08AE04, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(unsigned short *)((t1 + 0x9A)) = 0x296;
    *(unsigned short *)((t1 + 0xA2)) = 0x1;
    *(float *)((t1 + 0x90)) = 0.375f;
    *(unsigned short *)((t1 + 0x8E)) = 0x6B;
    return 0x8E;
}

int FUN_0c0927b8(int a4)
{
    int t1;
    int t2;

    t1 = *(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4));
    t2 = FUN_0c0e1830(0xC092736, 0xB4);
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t2 + 0x8C)) = t1;
    *(unsigned int *)((t2 + 0x78)) = 0x127A;
    return FUN_0c0bb1c8(a4, 0x0);
}

int FUN_0c0a2884(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[9];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = (a4 - 32);
    t1 = a4;
    for (;;) {
        t2 = *(int *)(((int)stk + 12));
        t3 = *(int *)(((int)stk + 4));
        t4 = t0;
        t0 = (t0 - 32);
        *(unsigned int *)(((int)stk + 12)) = (t2 - 12);
        t5 = t1;
        t1 = (t1 - 32);
        t6 = FUN_0c0652a2(t5, t4, (t2 - 12), t3, 0.899999976f);
        t7 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t7 - 1);
        if ((t7 - 1) == 0) {
            break;
        }
    }
    return t6;
}

void FUN_0c01a52c(int a4)
{
    int t3;

    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        *(volatile int *)(((a4 << 2) + 0xC23F25C));
        t3 = *(int *)((((FUN_0c0e5dc0()) << 2) + 0xC1EFA24));
        FUN_0c0c7354(t3, ((*(float *)(((a4 << 2) + 0xC0F52B4))) + 160.0f), 32.0f);
    return;
    }
}

int FUN_0c016c5e(int a4)
{
    FUN_0c0e609c();
    if (((*(int *)0xC23A1A8) & 1) != 0) {
        FUN_0c0cfb00(a4);
    }
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        FUN_0c0d1862(a4);
    }
    return 0xC23ED24;
}

int FUN_0c050dac(int a4)
{
    int t1;
    int t3;

    FUN_0c0548cc(a4);
    t1 = FUN_0c01f18e(a4);
    t3 = t1;
    if (t1 != 0) {
        *(unsigned int *)((a4 + 0x2C4)) = 0x386;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x20C)) = 0x4000;
        *(unsigned int *)((a4 + 0x210)) = 0x9;
        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0xB4)));
        *(float *)((a4 + 0x258)) = 0.0f;
        *(float *)((a4 + 0x25C)) = 0.0f;
        *(float *)((a4 + 0x260)) = 0.0f;
        t3 = 0x260;
    }
    return t3;
}

int FUN_0c041f2a(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x4E4));
    *(unsigned int *)((a4 + 0x4E4)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        t2 = *(int *)((a4 + 0x2EC));
        if ((t2 & 12) != 0) {
            t3 = *(int *)((a4 + 0x4DC));
            t4 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t4 + 0x1);
            if ((int)(*(short *)((((((t4 + 0x1) << 2) << 1) + (*(int *)((((((t3 - 76) << 1) + (t3 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                return FUN_0c03f4bc(a4);
            }
            return FUN_0c041dd0(a4);
        }
        return t2;
    }
    return 0x4E4;
}

int FUN_0c06cdc2(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;

    *(unsigned short *)(((((*(short *)((((a5 << 1) + (a4 + 0x36)) + 0x0))) << 1) + (a4 + 0x52)) + 0x0)) = 0x0;
    t1 = a5;
    t2 = a6;
    for (;;) {
        t3 = *(short *)((((t1 << 1) + (a4 + 0x36)) + 0x2));
        if ((int)t3 < 0) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 1);
        t2 = (t2 + (a4 + 0x36));
        t1 = (t1 + 0x1);
        *(unsigned short *)((t2 + 0x0)) = (*(short *)((t2 + 0x2)));
    }
    *(unsigned short *)((((t1 << 1) + (a4 + 0x36)) + 0x0)) = 0xFFFFFFFF;
    return t3;
}

int FUN_0c06cee2(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;

    *(unsigned short *)(((((*(short *)((((a5 << 1) + (a4 + 0x40)) + 0x0))) << 1) + (a4 + 0x52)) + 0x0)) = 0x0;
    t1 = a5;
    t2 = a6;
    for (;;) {
        t3 = *(short *)((((t1 << 1) + (a4 + 0x40)) + 0x2));
        if ((int)t3 < 0) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 1);
        t2 = (t2 + (a4 + 0x40));
        t1 = (t1 + 0x1);
        *(unsigned short *)((t2 + 0x0)) = (*(short *)((t2 + 0x2)));
    }
    *(unsigned short *)((((t1 << 1) + (a4 + 0x40)) + 0x0)) = 0xFFFFFFFF;
    return t3;
}

int FUN_0c0839e4(int a4)
{
    FUN_0c082f78(a4, 0x3, 0xC247EB4);
    FUN_0c082f78(a4, 0x4, 0xC247EB8);
    FUN_0c082f78(a4, 0x5, 0xC247EBC);
    FUN_0c082f78(a4, 0x0, 0xC247EA8);
    FUN_0c082f78(a4, 0x1, 0xC247EAC);
    return FUN_0c082f78(a4, 0x2, 0xC247EB0);
}

int FUN_0c08f3d8(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08EF9C, 0xB0, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x58)) = a4;
    *(unsigned int *)((t1 + 0x38)) = a5;
    *(unsigned int *)((t1 + 0x5C)) = 0x1E;
    *(unsigned int *)((t1 + 0x60)) = 0x14;
    *(unsigned int *)((t1 + 0x90)) = 0xC0;
    *(unsigned int *)((t1 + 0x94)) = 0xC;
    return 0x94;
}

int FUN_0c0906a0(int a4)
{
    int t1;
    int t4;
    int t5;

    t1 = FUN_0c0e19aa(0xC0906E8, 0xB4, (*(int *)0xC23ECF4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    t4 = *(int *)((a4 + 0xDC));
    t5 = t4;
    if ((int)t4 > (int)0x63) {
        t5 = 0x63;
    }
    *(unsigned int *)((t1 + 0xA0)) = t5;
    return 0xA0;
}

int FUN_0c0a8730(void)
{
    int t1;

    t1 = FUN_0c0a8bb0((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23ED48 = 0x0;
    *(unsigned int *)0xC23EDB0 = 0x0;
    return t1;
}

void FUN_0c0a9e94(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t11;

    t0 = 0x0;
    t1 = a5;
    for (;;) {
        if ((int)(*(short *)((t1 + 0x0))) < 0) {
            return;
        }
        t0 = (t0 + (*(short *)((t1 + 0x0))));
        if ((int)a4 < (int)t0) {
            break;
        }
        t1 = (t1 + 0x10);
    }
    if ((*(int *)0xC23A1A0) == 0) {
        t11 = (short)((unsigned int)((unsigned short)(*(int *)((t1 + 0x4))) << 16) >> 16);
    } else {
        t11 = ((unsigned int)((*(int *)((t1 + 0x4))) & 0xFFFF0000) >> 16);
    }
    if ((int)t11 > 0) {
        FUN_0c0a9e68(t11, (*(int *)((t1 + 0x8))), f4);
    }
}

int FUN_0c0ac848(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    t0 = a5;
    t1 = a4;
    for (;;) {
        t2 = t1;
        t1 = (t1 - 36);
        t3 = t0;
        t0 = (t0 - 36);
        FUN_0c06524a(t3, t2, 0xC10E70C);
        if ((*(int *)((t1 + 0x20))) == 0xC0AC848) {
            break;
        }
    }
    t6 = t0;
    t7 = t1;
    for (;;) {
        t8 = t6;
        t6 = (t6 + 0x24);
        t9 = t7;
        t7 = (t7 + 0x24);
        t10 = FUN_0c06524a(t9, t8, 0xC10E70C);
        if ((*(int *)((t7 + 0x20))) == 0xC0AC848) {
            break;
        }
    }
    return t10;
}

int FUN_0c0b2e84(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0B2ECC, 0xB4, (*(int *)0xC23ECE4));
    *(unsigned int *)((t1 + 0x7C)) = (*(int *)((a4 + 0x8)));
    FUN_0c0e61d4();
    *(unsigned int *)(((0x98 + t1) + 0x0)) = ((FUN_0c0da2e0()) & 0x7);
    *(unsigned int *)((t1 + 0x9C)) = 0x0;
    return 0x9C;
}

int FUN_0c0be88a(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t2;

    t1 = 0xC2623A0;
    t3 = a4;
    t4 = a4;
    t5 = ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) + 0x18);
    t6 = a7;
    for (;;) {
        if ((*(int *)((t5 + 0x0))) == 0) {
            break;
        }
        t1 = 0x4C;
        t6 = a5;
        t2 = (*(int *)((t5 + t1)));
        for (;;) {
            t4 = (*(int *)((t6 + 0x0)));
            t6 = (t6 + 0x4);
            if ((int)t4 < 0) {
                break;
            }
            t1 = t4;
            t1 = (t1 + t5);
            t3 = (*(int *)((t6 + 0x0)));
            t6 = (t6 + 0x4);
            t4 = (*(int *)((t1 + 0x0)));
            t4 = (t4 & t3);
            t3 = (*(int *)((t6 + 0x0)));
            t6 = (t6 + 0x4);
            t4 = (t4 | t3);
            *(unsigned int *)((t1 + 0x0)) = t4;
        }
        t2 = ((unsigned int)t2 >> 2);
        t5 = (t5 + 0x50);
        t2 = (t2 << 2);
        t5 = (t5 + t2);
    }
    return t1;
}

void FUN_0c0cbd70(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;

    t1 = 0xC521CB8;
    t2 = 0xC521CB8;
    t3 = 0xC521CB8;
    t4 = 0xC521CB8;
    for (;;) {
        if ((*(int *)((t3 + 0x0))) != 0) {
            t1 = (*(int *)((t4 + 0x0)));
            ADXF_Stop(t1);
            t1 = (*(int *)((t4 + 0x0)));
            ADXF_Close(t1);
            *(unsigned int *)((t4 + 0x0)) = 0x0;
        } else {
            t11 = t1;
            t12 = t2;
        }
        t3 = (t3 + 0x4);
        t1 = t11;
        t2 = t12;
        t4 = (t4 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC521CC0) {
            break;
        }
    }
}

int FUN_0c0c664c(int a4)
{
    int t0;
    int t1;
    int t9;

    t0 = *(short *)((a4 + 0x6A));
    *(unsigned short *)((a4 + 0x6A)) = (t0 + 0x1);
    if ((int)(unsigned short)(t0 + 0x1) > 0) {
        t1 = *(short *)((a4 + 0x6C));
        *(unsigned short *)((a4 + 0x6C)) = (t1 + 0x1);
        if ((int)(unsigned short)(t1 + 0x1) >= (int)0xF0) {
            FUN_0c0c6694();
            FUN_0c0e19f2();
        }
        t9 = *(int *)0xC23A258;
        if ((t9 & 1) != 0) {
            return FUN_0c0c0340((a4 + 0x30));
        }
        return t9;
    }
    return 0x6A;
}

int FUN_0c0cdeba(void)
{
    int t5;
    int t7;
    int t9;

    if ((*(int *)0xC5229FC) == 1) {
        if (((*(int *)0xC2497B8) & 0x80008) == 0) {
            return 0x0;
        }
        return 0x1;
    }
    if (((*(int *)0xC2497B8) & 8) != 0) {
        t5 = FUN_0c0cdd9c(0x0);
        if (t5 == 0) {
            if (((*(int *)0xC2497B8) & 0x80000) != 0) {
                t7 = FUN_0c0cdd9c(0x1);
                if (t7 != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x1;
    }
    if (((*(int *)0xC2497B8) & 0x80000) != 0) {
        t9 = FUN_0c0cdd9c(0x1);
        if (t9 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0e18f4(int a4, int a5, int a6)
{
    int t3;
    int t4;

    *(unsigned int *)((a5 + 0x10)) = (*(int *)((a6 + 0x10)));
    *(unsigned int *)((a5 + 0x14)) = a6;
    *(unsigned int *)((a5 + 0x18)) = (*(int *)((a6 + 0x18)));
    *(unsigned int *)(((*(int *)((a6 + 0x18))) + 0x14)) = a5;
    *(unsigned int *)((a6 + 0x18)) = a5;
    *(unsigned int *)((a5 + 0x0)) = a4;
    *(unsigned int *)((a5 + 0x1C)) = a6;
    *(unsigned short *)((a5 + 0x2E)) = 0x0;
    *(unsigned int *)((a5 + 0x4)) = 0xC0E17A4;
    t3 = *(int *)0xC94C79C;
    *(unsigned int *)0xC94C79C = (t3 + 0x1);
    *(unsigned int *)((a5 + 0x8)) = ((t3 + 0x1) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x80018691;
    t4 = FUN_0c0e1dc4(a5);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    return t4;
}

int FUN_0c0e1962(int a4, int a5, int a6)
{
    int t3;
    int t4;

    *(unsigned int *)((a5 + 0x10)) = a6;
    *(unsigned int *)((a5 + 0x14)) = (*(int *)((a6 + 0x14)));
    *(unsigned int *)((a5 + 0x18)) = a6;
    *(unsigned int *)(((*(int *)((a6 + 0x14))) + 0x18)) = a5;
    *(unsigned int *)((a6 + 0x14)) = a5;
    *(unsigned int *)((a5 + 0x0)) = a4;
    *(unsigned int *)((a5 + 0x1C)) = (*(int *)0xC94C790);
    *(unsigned short *)((a5 + 0x2E)) = 0x0;
    *(unsigned int *)((a5 + 0x4)) = 0xC0E17A4;
    t3 = *(int *)0xC94C79C;
    *(unsigned int *)0xC94C79C = (t3 + 0x1);
    *(unsigned int *)((a5 + 0x8)) = ((t3 + 0x1) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x80018691;
    t4 = FUN_0c0e1dc4(a5);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    return t4;
}

int FUN_0c0e63ac(int a4, int a5, int a6)
{
    int t8;
    int t10;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a6 == 0) {
        return 0x0;
    }
    t8 = a4;
    t10 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            if ((t3 == t4) && ((t5 = *(signed char *)(((t0 - 1) + 0x0)), t5 != 0) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6))) continue;
            break;
        }
        t8 = t0;
        t10 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t8 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t10 - 1) + 0x0))));
}

int FUN_0c0f3f98(int a4, int a5)
{
    int t16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t0;

    t16 = 0x0;
    if ((int)a5 > 0) {
        t1 = (0x0 + a4);
        t2 = (0x0 + a4);
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((unsigned int)(unsigned char)(*(signed char *)((t1 + 0x0))) >> 1);
            if (t3 != 0) {
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 | 0x80);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t3 = ((unsigned char)t5 & 0x1);
            t4 = (t4 + 0x1);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            if ((int)t4 >= (int)a5) {
                break;
            }
        }
        t16 = t3;
    }
    return t16;
}

int get_data(int a4)
{
    int t5;

    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        if ((unsigned char)(*(signed char *)((a4 + 0x8))) == 5) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    } else {
        t5 = *(signed char *)((a4 + 0x8));
        if (((unsigned char)t5 != 0xFF) && ((unsigned char)t5 != 0)) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}

int FUN_0c232ef4(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    if ((unsigned int)0xC98F174 < (unsigned int)0xC98F1B4) {
        t0 = 0xC98F174;
        t1 = 0xC98F174;
        t2 = 0xC98E974;
        for (;;) {
            if ((*(int *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC98F1B4) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t6 = t1;
    } else {
        t6 = 0x0;
    }
    return t6;
}

int FUN_0c22ba22(int a4, int a5, int a6, int a7)
{
    int stk[4];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC237EE0, a5, a6, a7));
    }
    FUN_0c22b6c8(((int)stk + 4));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        FUN_0c22ba6e(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    *(unsigned int *)((a4 + 0x48)) = (*(int *)((a4 + 0x4C)));
    FUN_0c22bece(a4, 0x1);
    return (FUN_0c22b6e0(((int)stk + 4)));
}

int FUN_0c0874ca(int a4, int a5, int a6, int a7)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC087510, 0x60, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x5C)) = a6;
    *(unsigned int *)((t1 + 0x58)) = a7;
    return 0x58;
}

int FUN_0c08a1b8(int a4, int a5)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC089D04, 0x31C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = a5;
    t3 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x40)) = ((((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))) - 1);
    *(unsigned int *)((t1 + 0x48)) = (*(int *)((a4 + 0x388)));
    return 0x48;
}

int FUN_0c092146(int a4)
{
    int t1;
    int t2;

    t1 = *(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4));
    t2 = FUN_0c0e1830(0xC0921CC, 0xB4);
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t2 + 0x8C)) = t1;
    *(unsigned int *)((t2 + 0x78)) = 0x1244;
    return 0x78;
}

int FUN_0c0b70fe(void)
{
    int t0;
    int t1;
    int t5;

    t0 = 0x0;
    t1 = 0xC24FAB4;
    for (;;) {
        *(float *)((t1 + 0x4)) = (float)(*(signed char *)(((0xC522AA4 + t0) + 0x0)));
        *(unsigned int *)((t1 + 0x0)) = (*(int *)((((t0 << 2) + 0xC522A68) + 0x0)));
        *(unsigned short *)((t1 + 0x8)) = (*(signed char *)((t0 + 0xC522A90)));
        t5 = *(signed char *)((t0 + 0xC522A9A));
        t0 = (t0 + 0x1);
        *(unsigned short *)((t1 + 0xA)) = t5;
        t1 = (t1 + 0xC);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t5;
}

int FUN_0c0b7f08(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = FUN_0c0e1830(0xC0B7F4E, 0xC8);
    FUN_0c0e19d0(t0);
    t2 = FUN_0c0e61d4();
    t3 = (0xB4 + t0);
    t4 = a5;
    for (;;) {
        t5 = *(signed char *)((t4 + 0x0));
        t4 = (t4 + 0x1);
        *(unsigned char *)((t3 + 0x0)) = t5;
        t3 = (t3 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)((0xB4 + t0) + 0x14)) {
            break;
        }
    }
    return t2;
}

int FUN_0c0cee9e(void)
{
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t3;

    FUN_0c0cee62();
    *(volatile float *)0xC0CF100;
    t2 = 0xC0CF100;
    t4 = 0x4;
    t5 = 0xC247B24;
    for (;;) {
        t6 = (t5 + 0x8);
        for (;;) {
            t7 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            if (t7 != 0) {
                t2 = (FUN_0c0cee6a((t7 + 0x30)));
            }
            t3 = t5;
            t3 = (t3 + 0x18);
            if ((unsigned int)t6 >= (unsigned int)t3) {
                break;
            }
        }
        t4 = (t4 - 0x1);
        t5 = (t5 + 0x18);
        if (t4 == 0) {
            break;
        }
    }
    return t2;
}

float FUN_0c0da010(float f4)
{
    if ((*(float *)0xC0DA134) > _builtin_fabsf(f4)) {
        if (0.0f > f4) {
            if ((_builtin_fabsf(f4) - (float)(int)_builtin_fabsf(f4)) != 0.0f) {
                return (float)(0xFFFFFFFF - (int)_builtin_fabsf(f4));
            }
            return f4;
        }
        return (float)(int)_builtin_fabsf(f4);
    }
    return f4;
}

float FUN_0c0e5930(int a4)
{
    float u8;
    float u9;
    float u11;

    *(float *)0xC94D568 = (*(float *)((a4 + 0x0)));
    *(float *)0xC94D56C = (*(float *)(((a4 + 0x4) + 0x0)));
    *(float *)0xC94D570 = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    *(float *)0xC94D574 = (*(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    u8 = ((*(float *)0xC94D570) * (*(float *)0xC0E59C8));
    u8 = u8 + (*(float *)0xC0E59CC) * (*(float *)0xC94D56C);
    u9 = *(float *)0xC0E59D0;
    u11 = u8;
    u11 = u11 + u9 * (*(float *)0xC94D574);
    *(float *)0xC94D568 = u11;
    return u9;
}

int FUN_0c0e1b06(void)
{
    int t1;
    int t7;

    t1 = *(int *)0xC94C790;
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) - 1);
    *(unsigned int *)(((*(int *)((t1 + 0x14))) + 0x18)) = (*(int *)((t1 + 0x18)));
    *(unsigned int *)(((*(int *)((t1 + 0x18))) + 0x14)) = (*(int *)((t1 + 0x14)));
    *(unsigned short *)(((0x2E + t1) + 0x0)) = (((*(short *)((t1 + 0x2E))) & 0xFFFC) | 0x1);
    t7 = *(int *)((t1 + 0x18));
    FUN_0c0e1ade(t1);
    *(unsigned int *)0xC94C790 = t7;
    return FUN_0c0e35b6(0xC94C6F8, 0x3);
}

void FUN_0c0b359e(int a4, int a5)
{
    if (a5 != 0) {
        *(unsigned int *)((a4 + 0x3D0)) = a5;
        *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)((a5 + 0x4))) - 1);
        if ((unsigned short)(*(short *)((a5 + 0x8))) != 0xFFFF) {
            *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)((a5 + 0x8)));
        }
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((a5 + 0x2)));
        *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)((a5 + 0xA)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        FUN_0c0b35e4(a4);
    return;
    }
}

int buCloseFile(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    t4 = 0xFFFFFFFF;
    if (t1 != 0) {
    } else {
        vmsfs_c_setfunc(t0, 0x4);
        vmsfs_c_setparam(t0, a4, 0x1, 0x0, 0x0, 0x0, 0x0);
        t4 = 0x0;
    }
    return t4;
}

int buDeleteFileEx(int a4, int a5, int a6)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x11);
        vmsfs_c_setparam(a4, a4, a5, a6, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int FUN_0c22287e(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t5;
    int t6;

    t1 = 0xC953CE8;
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)0xC953D28) {
            break;
        }
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        syMmuDeleteEntry(t2, a5, a6);
    }
    t5 = 0xC953D28;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0xC953D48) {
            break;
        }
        t6 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        syMmuDeleteEntry(t6, a5, a6);
    }
    return (syMmuDeleteEntry((*(int *)0xC953D48), a5, a6));
}

int search_fat_free_xross(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    for (;;) {
        t0 = search_fat(a4, 0xFFFC, a6, a7);
        if ((int)t0 < 0) {
            break;
        }
        t1 = check_fat_xross(a4, t0);
        if ((int)t1 < 0) {
            set_fat(a4, t0, 0xFFFA);
            continue;
        }
        return t0;
    }
    return 0xFFFFFFFF;
}

int syCfgGetIndividualID(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;

    if (a4 == 0) {
        return 0x0;
    }
    kbCfgIni(0x0, a5, a6);
    t1 = FUN_0c229028();
    FUN_0c0e631c(a4, (t1 + 0x2), 0x6);
    t3 = syCfgIIDCheckSum(t1);
    t4 = 0x2;
    if (t3 != 0) {
        t4 = 0x1;
    }
    return t4;
}
