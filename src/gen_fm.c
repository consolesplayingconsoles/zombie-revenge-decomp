/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c0df4c0(int);
int FUN_0c0df4f0(int);
int FUN_0c22bcdc(int);
int FUN_0c22ca84(int);
int FUN_0c22ee60(void);
int kmSetCheapShadowMode(void);
int kmiFBreset(void);
int kmiGetProfileInt(int, int, int);
int kmiWaitVlank(void);
int mwRnaErrCallFunc(int, int, int, int);
int kmSetUserClipLevelAdjust(int a4, int a5);
int kmiFBinit(void);
int FUN_0c21efbc(int a4, int a5, int a6);
int kmfSetVirticalFilterMode(int a4);
int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8);
int kmSetFogTable(int a4);
int mwRnaGetTime(int a4, int a5, int a6, int a7);
int kmiResetTA(void);
int FUN_0c0df490(void);
int kmSetBorderColor(Stk4 s);
int kmSetFogVertexColor(Stk4 s);
int kmSetFogTableColor(Stk4 s);
int kmiWriteRegister(int a4, int a5);
int thunk_kmSetCheapShadowMode(void);

int kmSetUserClipLevelAdjust(int a4, int a5)
{
    int t1;
    int t2;
    int t14;
    int t21;
    int t22;
    int t35;
    int t38;
    int t39;
    int t41;
    int t49;
    int t16;

    if ((*(int *)0xC952334) == 1) {
        t1 = *(int *)0xC9525C0;
        t2 = *(int *)0xC952338;
        *(unsigned int *)0xC952514 = ((*(int *)0xC952514) - (((t2 * t1) << 2) << 1));
        *(unsigned int *)0xC952518 = ((*(int *)0xC952518) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 == 1) {
            t14 = 0x0;
            if (((*(int *)0xC95231C) & 0x1) == 1) {
                t14 = 0x1;
            }
            if ((t14 != 1) && (t16 = *(int *)0xC95231C, (t16 & 32) == 0)) {
                *(unsigned int *)0xC952338 = 0x8;
            } else {
                *(unsigned int *)0xC952338 = 0x10;
            }
            t21 = *(int *)0xC9525C0;
            t22 = *(int *)0xC952338;
            *(unsigned int *)0xC952514 = ((*(int *)0xC952514) + (((t22 * t21) << 2) << 1));
            *(unsigned int *)0xC952518 = ((((t22 * t21) << 2) << 1) + (*(int *)0xC952518));
        }
    } else {
        *(unsigned int *)0xC952338 = 0x0;
    }
    t35 = *(int *)0xC9525BC;
    t38 = *(int *)0xC952340;
    t39 = 0xC952338;
    if ((int)(*(int *)0xC952338) < (int)(*(int *)0xC952350)) {
        t39 = 0xC952350;
    }
    t41 = *(int *)((t39 + 0x0));
    t49 = (t38 - t41);
    if ((unsigned int)((*(int *)0xC952350) + (t38 - t41)) > (unsigned int)(*(int *)0xC952340)) {
        t49 = ((*(int *)0xC952340) - (*(int *)0xC952338));
    }
    if ((unsigned int)(*(int *)0xC952340) < (unsigned int)t49) {
        *(unsigned int *)0xC952340 = t49;
    }
    *(unsigned int *)0xC9525BC = ((((t49 & 0x3FF) << 8) << 2) | (t35 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, (*(int *)0xC9525BC));
    kmiWriteRegister(0x44, (*(int *)0xC9525C4));
    *(unsigned int *)0xC952334 = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)0xC952338);
    }
    return 0x0;
}

int kmiFBinit(void)
{
    int t1;
    int t9;
    int t14;
    int t19;
    int t27;
    int t42;
    int t32;
    int t37;
    int t48;

    if ((*(int *)0xC239EE0) == 1) {
        t1 = kmiGetProfileInt(0xC2381D4, 0xC2381E0, 0x0);
        if (t1 == 1) {
            *(unsigned int *)0xC952310 = 0x1000000;
            *(unsigned int *)0xC239EE4 = 0x1000000;
            *(unsigned int *)0xC239EE8 = 0x0;
            *(unsigned int *)0xC239EEC = 0x1000000;
            *(unsigned int *)0xC239EF0 = 0x1000000;
            *(unsigned int *)0xC239EF4 = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC952310 = 0x800000;
            *(unsigned int *)0xC239EE4 = 0x800000;
            *(unsigned int *)0xC239EE8 = 0x0;
            *(unsigned int *)0xC239EEC = 0x800000;
            *(unsigned int *)0xC239EF0 = 0x800000;
            *(unsigned int *)0xC239EF4 = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        *(unsigned int *)0xC239F08 = (*(int *)0xC239EEC);
        *(unsigned int *)0xC239F1C = (*(int *)0xC239EF4);
        t9 = FUN_0c22ee60();
        t14 = 0x3;
        if (t9 == 0) {
        } else {
            *(unsigned int *)((t9 + 0xC)) = (*(int *)0xC239EE8);
            *(unsigned int *)((t9 + 0x10)) = (*(int *)0xC239EEC);
            *(unsigned int *)((t9 + 0x8)) = (*(int *)0xC239F00);
            *(unsigned int *)0xC239F00 = t9;
            *(unsigned int *)((t9 + 0x4)) = (*(int *)0xC239F04);
            *(unsigned int *)0xC239F04 = t9;
            t14 = 0x0;
        }
        t48 = t14;
    } else {
        t19 = kmiGetProfileInt(0xC2381D4, 0xC2381E0, 0x0);
        if (t19 == 1) {
            *(unsigned int *)0xC952310 = 0x1000000;
            *(unsigned int *)0xC239EE4 = 0x800000;
            *(unsigned int *)0xC239EE8 = 0x0;
            *(unsigned int *)0xC239EEC = 0x800000;
            *(unsigned int *)0xC239EF0 = 0x800000;
            *(unsigned int *)0xC239EF4 = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC952310 = 0x800000;
            *(unsigned int *)0xC239EE4 = 0x400000;
            *(unsigned int *)0xC239EE8 = 0x0;
            *(unsigned int *)0xC239EEC = 0x400000;
            *(unsigned int *)0xC239EF0 = 0x400000;
            *(unsigned int *)0xC239EF4 = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        *(unsigned int *)0xC239F08 = (*(int *)0xC239EEC);
        *(unsigned int *)0xC239F1C = (*(int *)0xC239EF4);
        t27 = FUN_0c22ee60();
        t42 = 0x3;
        if (t27 != 0) {
            *(unsigned int *)((t27 + 0xC)) = (*(int *)0xC239EE8);
            *(unsigned int *)((t27 + 0x10)) = (*(int *)0xC239EEC);
            *(unsigned int *)((t27 + 0x8)) = (*(int *)0xC239F00);
            *(unsigned int *)0xC239F00 = t27;
            *(unsigned int *)((t27 + 0x4)) = (*(int *)0xC239F04);
            *(unsigned int *)0xC239F04 = t27;
            t32 = FUN_0c22ee60();
            t37 = 0x3;
            if (t32 == 0) {
            } else {
                *(unsigned int *)((t32 + 0xC)) = (*(int *)0xC239EF0);
                *(unsigned int *)((t32 + 0x10)) = (*(int *)0xC239EF4);
                *(unsigned int *)((t32 + 0x8)) = (*(int *)0xC239F14);
                *(unsigned int *)0xC239F14 = t32;
                *(unsigned int *)((t32 + 0x4)) = (*(int *)0xC239F18);
                *(unsigned int *)0xC239F18 = t32;
                t37 = 0x0;
            }
            t42 = t37;
        }
        t48 = t42;
    }
    return t48;
}

int FUN_0c21efbc(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t16;
    int t24;
    int t21;
    int t22;

    t1 = ((int (*)(int, int, int))(kmiWriteRegister))(0x124, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC952774))), a6);
    t3 = ((int (*)(int, int))(kmiWriteRegister))(0x12C, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC952778))));
    t5 = ((int (*)(int, int))(kmiWriteRegister))(0x128, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC952780))));
    t7 = ((int (*)(int, int))(kmiWriteRegister))(0x130, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC952784))));
    t8 = ((int (*)(int, int))(kmiWriteRegister))(0x13C, ((((a5 - 1) << 16) + a4) - 1));
    t9 = *(int *)0xC9527AC;
    t10 = *(int *)0xC9527B0;
    t11 = *(int *)0xC9527B4;
    t12 = *(int *)0xC9527B8;
    if ((*(int *)0xC9522FC) == 6) {
        t14 = *(int *)0xC9527A8;
        t21 = ((((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((((0x1 & t14) << 16) << 2) << 2)) | ((0x3 & (*(int *)0xC9527BC)) << 16));
        t22 = ((((0x1 & t14) << 16) << 2) << 2);
    } else {
        t16 = *(int *)0xC9527A8;
        t21 = (((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((0x1 & t16) << 16));
        t22 = ((0x1 & t16) << 16);
    }
    t24 = ((int (*)(int, int, int))(kmiWriteRegister))(0x140, t21, t22);
    return (((int (*)(int, int))(kmiWriteRegister))(0x144, 0x80000000));
}

int kmfSetVirticalFilterMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t46;
    int t49;
    int t50;
    int t51;
    int t38;
    int t41;
    int t42;
    int t43;
    int t30;
    int t33;
    int t34;
    int t35;
    int t22;
    int t25;
    int t26;
    int t27;
    int t52;
    int t53;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)0xC952358;
    t1 = *(int *)0xC95235C;
    t2 = *(int *)0xC952340;
    t3 = *(int *)0xC9525BC;
    t4 = *(int *)0xC9525FC;
    t46 = t2;
    t49 = ((unsigned short)t4 & 0xFF00);
    t50 = t1;
    t51 = t0;
    if (a4 != 0) {
        t38 = t2;
        t41 = (unsigned short)t4;
        t42 = t1;
        t43 = t0;
        if (a4 != 1) {
            t30 = t2;
            t33 = (unsigned short)t4;
            t34 = t1;
            t35 = t0;
            if (a4 == 2) {
                t22 = t2;
                t25 = (unsigned short)t4;
                t26 = t1;
                t27 = t0;
                if ((((*(int *)0xC95231C) & 3) == 0) && ((t18 = *(int *)0xC95231C, (t18 & 32) != 0) && ((t19 = *(int *)0xC95231C, (t19 & 0x1) == 1) || ((t20 = *(int *)0xC95231C, (t20 & 0x2C) != 32) || (0x1 == 0))))) {
                    t22 = 0xD6;
                    t25 = 0x471;
                    t26 = (t1 + 0xC);
                    t27 = (t0 + 0xC);
                }
                t30 = t22;
                t33 = t25;
                t34 = t26;
                t35 = t27;
            }
            t38 = t30;
            t41 = t33;
            t42 = t34;
            t43 = t35;
        }
        t46 = t38;
        t49 = t41;
        t50 = t42;
        t51 = t43;
    }
    t52 = *(int *)0xC952350;
    t53 = *(int *)0xC952350;
    kmiWaitVlank();
    kmiWriteRegister(0x44, ((*(int *)0xC9525C4) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, ((*(int *)0xC952600) | 0x8));
    kmiWriteRegister(0xF0, ((t51 + t52) | ((t50 + t53) << 16)));
    kmiWriteRegister(0x5C, ((t3 & 0xFFF003FF) | (((t46 & 0x3FF) << 8) << 2)));
    kmiWriteRegister(0xF4, ((t4 & 0xFFFF0000) | t49));
    *(unsigned int *)0xC9525A4 = 0x1;
    return 0x0;
}

int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t6;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t2 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t2 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    t4 = ((int (*)(int, int, int, int))(kmiWriteRegister))(0x14C, t2, a6, ((a7 - 1) & 0x3F));
    t6 = ((int (*)(int, int))(kmiWriteRegister))(0x148, (*(int *)((a4 + 0x1C))));
    return 0x0;
}

int kmSetFogTable(int a4)
{
    float u0;
    int t2;
    int t3;
    int t5;

    u0 = *(float *)0xC20E1F0;
    t2 = ((int)((*(float *)((a4 + 0x1FC))) * u0) & 0xFF);
    t3 = 0x80;
    for (;;) {
        t3 = (t3 - 1);
        t5 = t2;
        t2 = (int)((*(float *)((a4 + (t3 << 2)))) * u0);
        t2 = (t2 & 0xFF);
        kmiWriteRegister(((t3 << 2) + 0x200), (unsigned short)((t2 << 8) | t5));
        if (t3 == 0) {
            break;
        }
    }
    return 0x0;
}

int mwRnaGetTime(int a4, int a5, int a6, int a7)
{
    int t3;

    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
    }
    FUN_0c22bcdc(a4);
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a4 + 0x54))) - (*(int *)((a4 + 0x3C))));
    t3 = FUN_0c22ca84(a4);
    *(unsigned int *)((a6 + 0x0)) = t3;
    return t3;
}

int kmiResetTA(void)
{
    kmiWriteRegister(0x8, 0x1);
    return kmiWriteRegister(0x8, 0x0);
}

int FUN_0c0df490(void)
{
    kmSetCheapShadowMode();
    FUN_0c0df4c0(0x1);
    return FUN_0c0df4f0(0x1);
}

int kmSetBorderColor(Stk4 s)
{
    kmiWriteRegister(0x40, s.w[0]);
    return 0x0;
}

int kmSetFogVertexColor(Stk4 s)
{
    kmiWriteRegister(0xB4, s.w[0]);
    return 0x0;
}

int kmSetFogTableColor(Stk4 s)
{
    kmiWriteRegister(0xB0, s.w[0]);
    return 0x0;
}

int kmiWriteRegister(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0xA05F8000) + 0x0)) = a5;
    return 0x1;
}

int thunk_kmSetCheapShadowMode(void)
{
    return kmSetCheapShadowMode();
}
