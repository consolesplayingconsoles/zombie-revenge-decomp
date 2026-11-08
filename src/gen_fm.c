/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[1]; } Stk1;
int FUN_0c0df4c0(int);
int FUN_0c0df4f0(int);
int FUN_0c22bcdc(int);
int FUN_0c22ca84(int);
int FUN_0c22ee60(void);
int kmSetCheapShadowMode(void);
int kmiFBreset(void);
int kmiGetProfileInt(int, int, int);
int kmiWaitVlank(void);
int mwRnaErrCallFunc(int);
int kmSetUserClipLevelAdjust(int a4, int a5);
int kmiFBinit(void);
int FUN_0c21efbc(int a4, int a5, int a6);
int kmfSetVirticalFilterMode(int a4);
int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8);
int kmSetFogTable(int a4);
int mwRnaGetTime(int a4, int a5, int a6, int a7);
int kmiResetTA(void);
int FUN_0c0df490(void);
int kmSetBorderColor(Stk1 s);
int kmSetFogVertexColor(Stk4 s);
int kmSetFogTableColor(Stk4 s);
int kmiWriteRegister(int a4, int a5);
int thunk_kmSetCheapShadowMode(void);
struct o54_int { char p[0x54]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



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

    if (((((struct o18_int *)0xC95231C)->v)) == 1) {
        t1 = (((struct o4_int *)0xC9525BC)->v);
        t2 = (((struct o1C_int *)0xC95231C)->v);
        (((struct o0_uint *)0xC952514)->v) = (((((struct o0_int *)0xC952514)->v)) - (((t2 * t1) << 2) << 1));
        (((struct o4_uint *)0xC952514)->v) = (((((struct o4_int *)0xC952514)->v)) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 == 1) {
            t14 = 0x0;
            if ((((((struct o0_int *)0xC95231C)->v)) & 0x1) == 1) {
                t14 = 0x1;
            }
            if ((t14 != 1) && (t16 = (((struct o0_int *)0xC95231C)->v), (t16 & 32) == 0)) {
                (((struct o1C_uint *)0xC95231C)->v) = 0x8;
            } else {
                (((struct o1C_uint *)0xC95231C)->v) = 0x10;
            }
            t21 = (((struct o4_int *)0xC9525BC)->v);
            t22 = (((struct o1C_int *)0xC95231C)->v);
            (((struct o0_uint *)0xC952514)->v) = (((((struct o0_int *)0xC952514)->v)) + (((t22 * t21) << 2) << 1));
            (((struct o4_uint *)0xC952514)->v) = ((((t22 * t21) << 2) << 1) + ((((struct o4_int *)0xC952514)->v)));
        }
    } else {
        (((struct o1C_uint *)0xC95231C)->v) = 0x0;
    }
    t35 = (((struct o0_int *)0xC9525BC)->v);
    t38 = (((struct o24_int *)0xC95231C)->v);
    t39 = 0xC952338;
    if ((int)((((struct o1C_int *)0xC95231C)->v)) < (int)((((struct o34_int *)0xC95231C)->v))) {
        t39 = 0xC952350;
    }
    t41 = *(int *)((t39 + 0x0));
    t49 = (t38 - t41);
    if ((unsigned int)(((((struct o34_int *)0xC95231C)->v)) + (t38 - t41)) > (unsigned int)((((struct o24_int *)0xC95231C)->v))) {
        t49 = (((((struct o24_int *)0xC95231C)->v)) - ((((struct o1C_int *)0xC95231C)->v)));
    }
    if ((unsigned int)((((struct o24_int *)0xC95231C)->v)) < (unsigned int)t49) {
        (((struct o24_uint *)0xC95231C)->v) = t49;
    }
    (((struct o0_uint *)0xC9525BC)->v) = ((((t49 & 0x3FF) << 8) << 2) | (t35 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, ((((struct o0_int *)0xC9525BC)->v)));
    kmiWriteRegister(0x44, ((((struct o8_int *)0xC9525BC)->v)));
    (((struct o18_uint *)0xC95231C)->v) = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = ((((struct o1C_int *)0xC95231C)->v));
    }
    return 0x0;
}

int kmiFBinit(void)
{
    int t1;
    int t9;
    int t19;
    int t27;
    int t32;
    int t48;

    if (((((struct o0_int *)0xC239EE0)->v)) == 1) {
        t1 = kmiGetProfileInt(0xC2381D4, 0xC2381E0, 0x0);
        if (t1 == 1) {
            *(unsigned int *)0xC952310 = 0x1000000;
            (((struct o4_uint *)0xC239EE0)->v) = 0x1000000;
            (((struct o8_uint *)0xC239EE0)->v) = 0x0;
            (((struct oC_uint *)0xC239EE0)->v) = 0x1000000;
            (((struct o10_uint *)0xC239EE0)->v) = 0x1000000;
            (((struct o14_uint *)0xC239EE0)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC952310 = 0x800000;
            (((struct o4_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o8_uint *)0xC239EE0)->v) = 0x0;
            (((struct oC_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o10_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o14_uint *)0xC239EE0)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC239EE0)->v) = ((((struct oC_int *)0xC239EE0)->v));
        (((struct o3C_uint *)0xC239EE0)->v) = ((((struct o14_int *)0xC239EE0)->v));
        t9 = FUN_0c22ee60();
        t48 = 0x3;
        if (t9 == 0) {
        } else {
            *(unsigned int *)((t9 + 0xC)) = ((((struct o8_int *)0xC239EE0)->v));
            *(unsigned int *)((t9 + 0x10)) = ((((struct oC_int *)0xC239EE0)->v));
            *(unsigned int *)((t9 + 0x8)) = ((((struct o20_int *)0xC239EE0)->v));
            (((struct o20_uint *)0xC239EE0)->v) = t9;
            *(unsigned int *)((t9 + 0x4)) = ((((struct o24_int *)0xC239EE0)->v));
            (((struct o24_uint *)0xC239EE0)->v) = t9;
            t48 = 0x0;
        }
    } else {
        t19 = kmiGetProfileInt(0xC2381D4, 0xC2381E0, 0x0);
        if (t19 == 1) {
            *(unsigned int *)0xC952310 = 0x1000000;
            (((struct o4_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o8_uint *)0xC239EE0)->v) = 0x0;
            (((struct oC_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o10_uint *)0xC239EE0)->v) = 0x800000;
            (((struct o14_uint *)0xC239EE0)->v) = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC952310 = 0x800000;
            (((struct o4_uint *)0xC239EE0)->v) = 0x400000;
            (((struct o8_uint *)0xC239EE0)->v) = 0x0;
            (((struct oC_uint *)0xC239EE0)->v) = 0x400000;
            (((struct o10_uint *)0xC239EE0)->v) = 0x400000;
            (((struct o14_uint *)0xC239EE0)->v) = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC239EE0)->v) = ((((struct oC_int *)0xC239EE0)->v));
        (((struct o3C_uint *)0xC239EE0)->v) = ((((struct o14_int *)0xC239EE0)->v));
        t27 = FUN_0c22ee60();
        t48 = 0x3;
        if (t27 != 0) {
            *(unsigned int *)((t27 + 0xC)) = ((((struct o8_int *)0xC239EE0)->v));
            *(unsigned int *)((t27 + 0x10)) = ((((struct oC_int *)0xC239EE0)->v));
            *(unsigned int *)((t27 + 0x8)) = ((((struct o20_int *)0xC239EE0)->v));
            (((struct o20_uint *)0xC239EE0)->v) = t27;
            *(unsigned int *)((t27 + 0x4)) = ((((struct o24_int *)0xC239EE0)->v));
            (((struct o24_uint *)0xC239EE0)->v) = t27;
            t32 = FUN_0c22ee60();
            t48 = 0x3;
            if (t32 == 0) {
            } else {
                *(unsigned int *)((t32 + 0xC)) = ((((struct o10_int *)0xC239EE0)->v));
                *(unsigned int *)((t32 + 0x10)) = ((((struct o14_int *)0xC239EE0)->v));
                *(unsigned int *)((t32 + 0x8)) = ((((struct o34_int *)0xC239EE0)->v));
                (((struct o34_uint *)0xC239EE0)->v) = t32;
                *(unsigned int *)((t32 + 0x4)) = ((((struct o38_int *)0xC239EE0)->v));
                (((struct o38_uint *)0xC239EE0)->v) = t32;
                t48 = 0x0;
            }
        }
    }
    return t48;
}


int kmfSetVirticalFilterMode(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t46;
    int t49;
    int t50;
    int t51;
    int t22;
    int t52;
    int t53;
    int t18;
    int t19;
    int t20;

    t0 = (((struct o3C_int *)0xC95231C)->v);
    t1 = *(int *)0xC95235C;
    t22 = (((struct o24_int *)0xC95231C)->v);
    t3 = (((struct o18_int *)0xC9525A4)->v);
    t4 = (((struct o0_int *)0xC9525FC)->v);
    t46 = t22;
    t49 = ((unsigned short)t4 & 0xFF00);
    t50 = t1;
    t51 = t0;
    if (a4 != 0) {
        t46 = t22;
        t49 = (unsigned short)t4;
        t50 = t1;
        t51 = t0;
        if (a4 != 1) {
            t46 = t22;
            t49 = (unsigned short)t4;
            t50 = t1;
            t51 = t0;
            if (a4 == 2) {
                t49 = (unsigned short)t4;
                t50 = t1;
                t51 = t0;
                if (((((((struct o0_int *)0xC95231C)->v)) & 3) == 0) && ((t18 = (((struct o0_int *)0xC95231C)->v), (t18 & 32) != 0) && ((t19 = (((struct o0_int *)0xC95231C)->v), (t19 & 0x1) == 1) || ((t20 = (((struct o0_int *)0xC95231C)->v), (t20 & 0x2C) != 32) || (0x1 == 0))))) {
                    t22 = 0xD6;
                    t49 = 0x471;
                    t50 = (t1 + 0xC);
                    t51 = (t0 + 0xC);
                }
                t46 = t22;
            }
        }
    }
    t52 = (((struct o34_int *)0xC95231C)->v);
    t53 = (((struct o34_int *)0xC95231C)->v);
    kmiWaitVlank();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC9525A4)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (((((struct o4_int *)0xC9525FC)->v)) | 0x8));
    kmiWriteRegister(0xF0, ((t51 + t52) | ((t50 + t53) << 16)));
    kmiWriteRegister(0x5C, ((t3 & 0xFFF003FF) | (((t46 & 0x3FF) << 8) << 2)));
    kmiWriteRegister(0xF4, ((t4 & 0xFFFF0000) | t49));
    (((struct o0_uint *)0xC9525A4)->v) = 0x1;
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
        return mwRnaErrCallFunc(0xC237EE0);
    }
    FUN_0c22bcdc(a4);
    *(unsigned int *)((a5 + 0x0)) = (((((struct o54_int *)(a4))->v)) - (*(int *)((a4 + 0x3C))));
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

int kmSetBorderColor(Stk1 s)
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
    t9 = (((struct o4_int *)0xC9527A8)->v);
    t10 = (((struct o8_int *)0xC9527A8)->v);
    t11 = (((struct oC_int *)0xC9527A8)->v);
    t12 = (((struct o10_int *)0xC9527A8)->v);
    if ((*(int *)0xC9522FC) == 6) {
        t14 = (((struct o0_int *)0xC9527A8)->v);
        t21 = ((((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((((0x1 & t14) << 16) << 2) << 2)) | ((0x3 & ((((struct o14_int *)0xC9527A8)->v))) << 16));
        t22 = ((((0x1 & t14) << 16) << 2) << 2);
    } else {
        t16 = (((struct o0_int *)0xC9527A8)->v);
        t21 = (((((t9 & 0x3) | (((t10 & 0x3) << 2) << 2)) | ((t11 & 0x3) << 8)) | ((((t12 & 0x3) << 8) << 2) << 2)) | ((0x1 & t16) << 16));
        t22 = ((0x1 & t16) << 16);
    }
    t24 = ((int (*)(int, int, int))(kmiWriteRegister))(0x140, t21, t22);
    return (((int (*)(int, int))(kmiWriteRegister))(0x144, 0x80000000));
}

