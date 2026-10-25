/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0100d0(int, int, int);
int FUN_0c01029e(void);
int FUN_0c0106a0(void);
int FUN_0c010fae(int, int, int, float);
int FUN_0c016d20(int, int, int);
int FUN_0c021956(void);
int FUN_0c022252(void);
int FUN_0c02374e(int, int);
int FUN_0c034e2c(int);
int FUN_0c037002(int, int);
int FUN_0c04228c(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c042570(int);
int FUN_0c043234(int);
int FUN_0c049b80(int);
int FUN_0c054654(int, int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0ce2ac(int, int, int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e3550(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c214c44(void);
int FUN_0c042980(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
void FUN_0c015018(int a4);
void FUN_0c016d2c(void);
int FUN_0c04a258(int a4);
int FUN_0c050248(int a4);
int FUN_0c010250(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0105c4(int a4);
int FUN_0c01843e(int a4, int a5, int a6, int a7);
int FUN_0c03240e(int a4);
int FUN_0c03812c(int a4);
int FUN_0c04996a(void);
int FUN_0c04bc36(int a4);
int FUN_0c04bde0(int a4);
int FUN_0c05025c(int a4);
int FUN_0c03542e(int a4);
int FUN_0c0100c0(int a4, int a5, int a6);
int FUN_0c01ac36(void);
int FUN_0c02bc00(int a4);
int FUN_0c02bc0e(int a4);
int FUN_0c02bc1c(int a4);
int FUN_0c04b8a8(int a4);
int FUN_0c051330(int a4);
int mwPlySetLpFlg(int a4);
void FUN_0c04574a(void);
int FUN_0c046968(int a4);
int mwPlyPreInitSofdec(void);
int FUN_0c02dac6(void);
int FUN_0c02db78(void);
int FUN_0c052268(int a4);
void FUN_0c010c0c(void);
void FUN_0c016ab8(void);
int FUN_0c01ac8c(void);
int FUN_0c01ac9a(void);
void __init_target_cc_f(void);
int FUN_0c034b88(int a4, int a5);
void FUN_0c04518a(void);
int mwSfdStartFrame(void);
int FUN_0c04537c(void);
int FUN_0c045580(void);
void FUN_0c045612(void);
int FUN_0c045666(void);
void FUN_0c04573a(void);
int FUN_0c045742(void);
int FUN_0c0457fc(void);
void __init_dspdb_cc_f(void);
int FUN_0c052260(int a4);
int thunk_FUN_0c0e2a4c(int a4);
int thunk_FUN_0c214c44(void);
int FUN_0c0110c6(int a4, int a5);
int thunk_FUN_0c0ce2ac(int a4, int a5, int a6, int a7);
int FUN_0c027046(int a4);
int thunk_FUN_0c034e2c(int a4);
int thunk_FUN_0c0546fe(int a4, int a5, int a6, int a7);
void FUN_0c010c14(void);
int FUN_0c0110cc(int a4, int a5, float f4);
int thunk_FUN_0c016d20(int a4, int a5, int a6);

int FUN_0c042980(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    if ((int)(*(int *)((a4 + 0x4DC))) < (int)0x4C) {
        *(unsigned int *)((a4 + 0x4DC)) = ((*(int *)((a4 + 0x4DC))) + 0x4C);
        return FUN_0c042570(a4);
    }
    return FUN_0c04228c(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

void FUN_0c015018(int a4)
{
    int t0;

    t0 = a4;
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = 0x16;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x6)) {
            break;
        }
    }
}

void FUN_0c016d2c(void)
{
    int t0;
    int t1;

    t0 = 0xC23EE14;
    t1 = 0x8;
    for (;;) {
        t1 = (t1 - 0x1);
        *(unsigned int *)((t0 + 0x4)) = 0x0;
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x8);
        if (t1 == 0) {
            break;
        }
    }
}

int FUN_0c04a258(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x324));
    *(unsigned int *)((a4 + 0x324)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        *(unsigned int *)((a4 + 0x324)) = 0x0;
    }
    return 0x324;
}

int FUN_0c050248(int a4)
{
    return (unsigned short)((short)((*(int *)((a4 + 0x1E0))) - (*(short *)((a4 + 0x6E)))) + 0x10000);
}

int FUN_0c010250(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    _builtin_set_gbr((void *)(0xC990E80));
    FUN_0c0e3550(0xC23A1C0, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    FUN_0c0106a0();
    return FUN_0c01029e();
}

int FUN_0c0105c4(int a4)
{
    return (FUN_0c0e262a(a4));
}

int FUN_0c01843e(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 4) != 0) {
        return FUN_0c0e19f2(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c03240e(int a4)
{
    return FUN_0c037002((a4 + 0x60), (a4 + 0x4B0));
}

int FUN_0c03812c(int a4)
{
    int t0;

    t0 = FUN_0c043234(a4);
    return ((((int)t0 >= 0)) ? 1 : 0);
}

int FUN_0c04996a(void)
{
    int t1;

    t1 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)0xC2475AC = (*(float *)((0xC1FE428 + (t1 << 2))));
    return (t1 << 2);
}

int FUN_0c04bc36(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c04bde0(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c05025c(int a4)
{
    return FUN_0c054654(a4, (*(int *)((a4 + 0x1E0))), 0x1000, 0x0);
}

int FUN_0c03542e(int a4)
{
    *(unsigned int *)((a4 + 0x4D8)) = (*(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC1EFE28)));
    return 0x4D8;
}

int FUN_0c0100c0(int a4, int a5, int a6)
{
    return (FUN_0c0100d0(0x30, a5, a6));
}

int FUN_0c01ac36(void)
{
    FUN_0c021956();
    return FUN_0c022252();
}

int FUN_0c02bc00(int a4)
{
    *(unsigned int *)((a4 + 0x4F8)) = 0xC;
    *(unsigned int *)((a4 + 0x544)) = 0x2;
    return 0x544;
}

int FUN_0c02bc0e(int a4)
{
    *(unsigned int *)((a4 + 0x4F8)) = 0xC;
    *(unsigned int *)((a4 + 0x544)) = 0x3;
    return 0x544;
}

int FUN_0c02bc1c(int a4)
{
    *(unsigned int *)((a4 + 0x4F8)) = 0xC;
    *(unsigned int *)((a4 + 0x544)) = 0x4;
    return 0x544;
}

int FUN_0c04b8a8(int a4)
{
    *(unsigned int *)((a4 + 0x20C)) = 0x40000;
    *(unsigned int *)((a4 + 0x210)) = 0x62;
    return 0x210;
}

int FUN_0c051330(int a4)
{
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
    return 0xC247030;
}

int mwPlySetLpFlg(int a4)
{
    return FUN_0c0e2a4c((*(int *)((a4 + 0x88))));
}

void FUN_0c04574a(void)
{
    *(unsigned int *)0xC246DD0 = 0x0;
    *(unsigned int *)0xC246DD4 = 0x0;
}

int FUN_0c046968(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x488));
    *(unsigned int *)((t0 + 0x0)) = 0x0;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    return 0x488;
}

int mwPlyPreInitSofdec(void)
{
    return FUN_0c0e1830(0xC01A8DC, 0x80);
}

int FUN_0c02dac6(void)
{
    int t0;

    t0 = *(int *)0xC23ED88;
    *(unsigned int *)0xC23ED88 = (t0 | 0x10);
    return (t0 | 0x10);
}

int FUN_0c02db78(void)
{
    int t0;

    t0 = *(int *)0xC23ED88;
    *(unsigned int *)0xC23ED88 = (t0 | 0x20);
    return (t0 | 0x20);
}

int FUN_0c052268(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x6));
    *(unsigned short *)((a4 + 0x6)) = (t0 + 0x300);
    return (t0 + 0x300);
}

void FUN_0c010c0c(void)
{
    *(unsigned int *)0xC23EB44 = 0x0;
}

void FUN_0c016ab8(void)
{
    *(unsigned int *)0xC23ED70 = 0x0;
}

int FUN_0c01ac8c(void)
{
    return FUN_0c0e1830(0xC01AC94, 0x30);
}

int FUN_0c01ac9a(void)
{
    return FUN_0c0e1830(0xC01AD14, 0x30);
}

void __init_target_cc_f(void)
{
    *(unsigned int *)0xC246494 = 0x1;
}

int FUN_0c034b88(int a4, int a5)
{
    return 0x1;
}

void FUN_0c04518a(void)
{
    *(unsigned int *)0xC246DB0 = 0x0;
}

int mwSfdStartFrame(void)
{
    *(unsigned int *)0xC246DB4 = 0x0;
    return 0xC246DB4;
}

int FUN_0c04537c(void)
{
    *(unsigned int *)0xC246DB8 = 0x0;
    return 0xC246DB8;
}

int FUN_0c045580(void)
{
    *(unsigned int *)0xC246DBC = 0x0;
    return 0xC246DBC;
}

void FUN_0c045612(void)
{
    *(unsigned int *)0xC246DC0 = 0x0;
}

int FUN_0c045666(void)
{
    *(unsigned int *)0xC246DC4 = 0x0;
    return 0xC246DC4;
}

void FUN_0c04573a(void)
{
    *(unsigned int *)0xC246DC8 = 0x0;
}

int FUN_0c045742(void)
{
    *(unsigned int *)0xC246DCC = 0x0;
    return 0xC246DCC;
}

int FUN_0c0457fc(void)
{
    *(unsigned int *)0xC246DD8 = 0x0;
    return 0xC246DD8;
}

void __init_dspdb_cc_f(void)
{
    *(unsigned int *)0xC246DDC = 0x0;
}

int FUN_0c052260(int a4)
{
    int t0;

    t0 = *(short *)0xC2475C0;
    *(unsigned short *)((a4 + 0x6)) = t0;
    return t0;
}

int thunk_FUN_0c0e2a4c(int a4)
{
    return FUN_0c0e2a4c(a4);
}

int thunk_FUN_0c214c44(void)
{
    return FUN_0c214c44();
}

int FUN_0c0110c6(int a4, int a5)
{
    return FUN_0c010fae(a4, a5, 0x1, 1.0f);
}

int thunk_FUN_0c0ce2ac(int a4, int a5, int a6, int a7)
{
    return FUN_0c0ce2ac(a4, a5, a6, a7);
}

int FUN_0c027046(int a4)
{
    return FUN_0c02374e(a4, 0x0);
}

int thunk_FUN_0c034e2c(int a4)
{
    return FUN_0c034e2c(a4);
}

int thunk_FUN_0c0546fe(int a4, int a5, int a6, int a7)
{
    return FUN_0c0546fe(a4, a5, a6, a7);
}

void FUN_0c010c14(void)
{
    
}

int FUN_0c0110cc(int a4, int a5, float f4)
{
    return FUN_0c010fae(a4, a5, 0x0, f4);
}

int thunk_FUN_0c016d20(int a4, int a5, int a6)
{
    return FUN_0c016d20(a4, a5, a6);
}
