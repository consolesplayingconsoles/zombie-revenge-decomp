/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01c214(int, int);
int FUN_0c01e822(int, int, int, int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c049b80(int);
int FUN_0c0519f0(int);
int FUN_0c051a48(int);
int FUN_0c055090(int);
int FUN_0c082f04(int, int, float);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0bb1a8(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d80c0(int);
int FUN_0c0db320(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float nlLength(int, int);
int FUN_0c0de000(float);
int FUN_0c0dee40(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e4428(int);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c0e63ac(int, int, int);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmiWriteRegister(int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
void FUN_0c0c3ef8(int a4);
int nlPushMatrix(int a4);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c010cb6(void);
int FUN_0c0209ba(int a4);
int FUN_0c03c510(int a4);
int FUN_0c04f7cc(void);
int FUN_0c056016(int a4);
int FUN_0c079108(void);
int FUN_0c0836d2(int a4);
int FUN_0c0a59f8(int a4);
void FUN_0c0af7f8(int a4);
int FUN_0c0c62d0(int a4);
int FUN_0c0c4c90(int a4);
float FUN_0c0d7178(int a4, int a5);
int FUN_0c0e419a(int a4, int a5, int a6, int a7);
int kmSetPaletteBankData(int a4, int a5, int a6);
struct o22C_float { char p[0x22C]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o330_uint { char p[0x330]; unsigned int v; };
struct o334_uint { char p[0x334]; unsigned int v; };
struct o338_int { char p[0x338]; int v; };
struct o338_uint { char p[0x338]; unsigned int v; };
struct o340_uint { char p[0x340]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o344_uint { char p[0x344]; unsigned int v; };
struct o348_int { char p[0x348]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o34C_uint { char p[0x34C]; unsigned int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o46C_float { char p[0x46C]; float v; };
struct o470_float { char p[0x470]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o57C_int { char p[0x57C]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o5C0_uint { char p[0x5C0]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o76_ushort { char p[0x76]; unsigned short v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };



void FUN_0c0c3ef8(int a4)
{
    int t3;
    int t6;
    int t0;
    int t1;
    int t2;
    int stk[9];

    t3 = a4;
    for (;;) {
        if ((int)(*(short *)((t3 + 0x0))) < 0) {
            break;
        }
        t0 = (*(short *)((t3 + 0x0)));
        t0 = (t0 << 1);
        t6 = *(short *)((0xC1127D8 + t0));
        t1 = (unsigned short)t6;
        t1 = (t1 << 1);
        t1 = (t1 + (unsigned short)t6);
        t1 = (t1 << 2);
        t0 = (*(short *)(((t1 + 0xC2623A0) + 0x8)));
        t0 = (t0 - 1);
        *(unsigned short *)(((t1 + 0xC2623A0) + 0x8)) = t0;
        t0 = (unsigned short)t0;
        if ((int)t0 <= 0) {
            t2 = (*(short *)((t3 + 0x0)));
            t3 = (t3 + 0x2);
            t0 = 0xC1198A8;
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            t2 = (*(short *)((t2 + t0)));
            t2 = (unsigned short)t2;
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t2 = (t2 + 0xC209E3C);
            t0 = (*(short *)((t2 + 0x6)));
            t0 = (FUN_0c0d80c0(t0));
            t2 = t1;
            t2 = (t2 + 0xC2623A0);
            t0 = (FUN_0c0dee40((*(int *)((t2 + 0x0)))));
            t0 = (FUN_0c0e2a4c((*(int *)((t2 + 0x4)))));
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            *(unsigned int *)((t2 + 0x4)) = 0x0;
            continue;
        }
        break;
    }
}


int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC237B88);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a11, t2);
    }
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int FUN_0c010cb6(void)
{
    int t15;
    int t18;
    int t20;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40E0);
    FUN_0c0c465c(0x1472);
    FUN_0c0c465c(0x1467);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40EC);
    if ((*(int *)0xC23EAF4) != 0) {
        FUN_0c0dcc70(1.44999993f, 0.0f, 0.0f);
    }
    FUN_0c0c465c(0x146F);
    nlPopMatrix(0x1);
    t15 = *(int *)0xC2498F4;
    if ((0xC0C0 & t15) != 0) {
        *(unsigned int *)0xC23EAF4 = ((*(int *)0xC23EAF4) ^ 0x1);
        t20 = 0xFFFFFFFF;
    } else {
        t18 = 0xFFFFFFFF;
        if ((t15 & 0xC) != 0) {
            t18 = (*(int *)0xC23EAF4);
        }
        t20 = t18;
    }
    return t20;
}

int FUN_0c0209ba(int a4)
{
    int t0;

    t0 = FUN_0c0e1830(0xC020962, 0x5EC);
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o45C_float *)(t0))->v) = 0.25f;
    (((struct o460_float *)(t0))->v) = 1.0f;
    (((struct o464_float *)(t0))->v) = 0.25f;
    (((struct o3AC_uint *)(t0))->v) = 0x78;
    (((struct o468_float *)(t0))->v) = ((((((struct o45C_float *)(t0))->v)) - ((((struct o45C_float *)(a4))->v))) / (float)((((struct o3AC_int *)(t0))->v)));
    (((struct o46C_float *)(t0))->v) = ((((((struct o460_float *)(t0))->v)) - ((((struct o460_float *)(a4))->v))) / (float)((((struct o3AC_int *)(t0))->v)));
    (((struct o470_float *)(t0))->v) = ((((((struct o464_float *)(t0))->v)) - ((((struct o464_float *)(a4))->v))) / (float)((((struct o3AC_int *)(t0))->v)));
    return 0x470;
}

int FUN_0c03c510(int a4)
{
    int t10;
    int t18;
    int stk[5];

    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t18 = 0x5C0;
        if (((((struct o5C0_int *)(a4))->v)) == 0) {
            (((struct o5C0_uint *)(a4))->v) = 0x1;
            t18 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0));
        }
    } else {
        t10 = (((struct o57C_int *)(a4))->v);
        if ((t10 != 0) && ((t10 != 1) && ((t10 != 2) && (t10 != 3)))) {
            t18 = t10;
            if (t10 != 4) {
            } else {
                t18 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0));
            }
        } else {
            t18 = (FUN_0c0cc3f8(0x12EA9, 0x0, 0x0, 0x0));
        }
    }
    return t18;
}


int FUN_0c056016(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = (((struct o34C_int *)(a4))->v);
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x5;
    t2 = (((struct o344_int *)(a4))->v);
    (((struct o338_uint *)(a4))->v) = (((((struct o338_int *)(a4))->v)) & (~(((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)))));
    (((struct o334_uint *)(a4))->v) = 0x0;
    (((struct o344_uint *)(a4))->v) = 0x0;
    (((struct o34C_uint *)(a4))->v) = 0x0;
    (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) & (~((((struct o22C_int *)(t1))->v))));
    if (((((struct o330_int *)(a4))->v)) == 3) {
        (((struct o330_uint *)(a4))->v) = 0x2;
        (((struct o340_uint *)(a4))->v) = ((((struct o348_int *)(a4))->v));
    } else {
        (((struct o330_uint *)(a4))->v) = 0x0;
        (((struct o340_uint *)(a4))->v) = 0x0;
    }
    FUN_0c0bb1a8(a4, 0x1);
    return FUN_0c0519f0(a4);
}


int FUN_0c0836d2(int a4)
{
    int t1;
    int stk[7];

    t1 = *(int *)(((((((struct o3B4_int *)(a4))->v)) << 2) + 0xC246FF0));
    FUN_0c082f04(a4, 0x3, ((((struct o22C_float *)(t1))->v)));
    FUN_0c082f04(a4, 0x4, ((((struct o230_float *)(t1))->v)));
    FUN_0c082f04(a4, 0x5, ((((struct o234_float *)(t1))->v)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY(0x9F49);
    nlRotateAX(0x38E);
    FUN_0c0db470(0xC1028D4, ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 4))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 8))));
    return (FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 12)))));
}

int FUN_0c0a59f8(int a4)
{
    int t1;

    if (a4 != 0) {
        (((struct o0_ushort *)0xC10BB8E)->v) = 0x14D2;
        (((struct o2_ushort *)0xC10BB8E)->v) = 0x14D6;
        (((struct o4_ushort *)0xC10BB8E)->v) = 0x14D4;
        (((struct o6_ushort *)0xC10BB8E)->v) = 0x14D3;
        (((struct o8_ushort *)0xC10BB8E)->v) = 0x14D7;
        (((struct oA_ushort *)0xC10BB8E)->v) = 0x14D5;
        *(unsigned int *)0xC201140 = 0x14EC;
        (((struct o0_ushort *)0xC1FE8C0)->v) = 0x14BF;
        t1 = 0x14EA;
    } else {
        (((struct o0_ushort *)0xC10BB8E)->v) = 0x491;
        (((struct o2_ushort *)0xC10BB8E)->v) = 0x495;
        (((struct o4_ushort *)0xC10BB8E)->v) = 0x493;
        (((struct o6_ushort *)0xC10BB8E)->v) = 0x492;
        (((struct o8_ushort *)0xC10BB8E)->v) = 0x496;
        (((struct oA_ushort *)0xC10BB8E)->v) = 0x494;
        *(unsigned int *)0xC201140 = 0x129F;
        (((struct o0_ushort *)0xC1FE8C0)->v) = 0x1264;
        t1 = 0x1287;
    }
    (((struct o3A_ushort *)0xC1FE8C0)->v) = t1;
    *(unsigned short *)0xC1FE934 = t1;
    return 0xC1FE8FA;
}

void FUN_0c0af7f8(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    float u5;
    int stk[10];

    t0 = *(int *)((a4 + 0x3C));
    if (t0 != 0) {
        nlPushMatrix(0x0);
        t2 = 0xC10FDD8;
        t3 = t0;
        t4 = 0xC10FDC0;
        for (;;) {
            u5 = *(float *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c0db800(0x0);
            FUN_0c0dcca0(t4);
            nlRotateAY(0x3FFF);
            nlScale(u5, u5, u5);
            FUN_0c0de000(u5);
            FUN_0c0c465c(0xA3);
            t3 = (t3 - 0x1);
            t4 = (t4 + 0xC);
            if (t3 == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
    return;
    }
}

int FUN_0c0c62d0(int a4)
{
    int t0;
    int t9;

    t0 = FUN_0c0e1830(0xC0C6352, 0x84);
    FUN_0c0e19d0(t0);
    (((struct o70_uint *)(t0))->v) = (*(int *)((a4 + 0xC)));
    (((struct o7E_ushort *)(t0))->v) = (*(short *)((a4 + 0x4)));
    (((struct o7C_ushort *)(t0))->v) = (*(short *)((a4 + 0x8)));
    (((struct o76_ushort *)(t0))->v) = (*(short *)((a4 + 0x6)));
    (((struct o68_float *)(t0))->v) = (float)(*(short *)((a4 + 0x0)));
    (((struct o6C_float *)(t0))->v) = (float)(*(short *)((a4 + 0x2)));
    (((struct o3C_float *)(t0))->v) = (*(float *)0xC0C6400);
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o40_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    (((struct o5C_float *)(t0))->v) = 1.0f;
    (((struct o60_uint *)(t0))->v) = 0xFFFFFFFF;
    t9 = *(short *)((a4 + 0xA));
    (((struct o80_ushort *)(t0))->v) = t9;
    return t9;
}

int FUN_0c0c4c90(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t7;
    int t10;

    t0 = *(short *)(((a4 << 1) + 0xC163774));
    t1 = 0xC209E3C;
    t2 = 0x5D;
    for (;;) {
        if ((int)a4 >= (int)(*(short *)((t1 + 0x0)))) {
            t2 = (t2 - 0x1);
            t1 = (t1 + 0x8);
            if (t2 == 0) {
                break;
            }
            continue;
        }
        break;
    }
    t5 = FUN_0c0e63ac((*(int *)0xC26239C), 0xC1E5158, 0x10);
    if (t5 == 0) {
        t7 = *(int *)((((*(int *)0xC26239C) + 0xC) + 0x4));
        FUN_0c01c214((*(int *)0xC26239C), ((t7 + 0x33) & 0xFFFFFFE0));
        t10 = FUN_0c0e262a(((t7 + 0x33) & 0xFFFFFFE0));
        return FUN_0c0db320(t10, ((*(int *)0xC26239C) + 0x1C), ((int)((t7 + 0x33) & 0xFFFFFFE0) >> 5));
    }
    return (FUN_0c0e262a(((((((unsigned short)t0 << 2) << 2) << 1) + 0x1F) & 0xFFFFFFE0)));
}

float FUN_0c0d7178(int a4, int a5)
{
    int t9;
    float u10;
    int stk[18];
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    R1008 = a5;
    FUN_0c0a6800((R1008), (((int)stk + 8) + 0x28), 0.0f, ((*(float *)((a4 + 0x4))) + 5.0f), -100.0f);
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 56))) - (*(float *)((a4 + 0x8))));
    R1008 = (FUN_0c01e822(a4, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), 0x8));
    t9 = R1008;
    u10 = (nlLength(a4, (((int)stk + 8) + 0x10)));
    if (t9 == 0) {
        u10 = 0.0f;
    }
    return u10;
}

int FUN_0c0e419a(int a4, int a5, int a6, int a7)
{
    if (a6 != 0x7B0) {
        if (a6 != 0xAB0) {
            if (a6 != 0x27B0) {
                if (a6 != 0x2AB0) {
                    return 0xFFFFFFFE;
                }
                return (FUN_0c0e4428(((((0xF & (a5 - 1)) + (((a4 & 0xF) << 16) << 8)) + a6) + (((a7 + 0x40) & 0x7F) << 16))));
            }
            return (FUN_0c0e4428(((((0xF & (a5 - 1)) + (((a4 & 0xF) << 16) << 8)) + a6) + ((a7 & 0x7F) << 16))));
        }
        return (FUN_0c0e4428(((((0xF & (a5 - 1)) + (((a4 & 0xF) << 16) << 8)) + a6) + (((a7 + 0x40) & 0x7F) << 16))));
    }
    return (FUN_0c0e4428(((((0xF & (a5 - 1)) + (((a4 & 0xF) << 16) << 8)) + a6) + ((a7 & 0x7F) << 16))));
}

int kmSetPaletteBankData(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (a5 + a4);
    if ((int)(a5 + a4) > (int)0x400) {
        t0 = 0x3FF;
    }
    if ((int)a4 < (int)t0) {
        t2 = ((a4 << 2) + a6);
        t3 = ((a4 << 2) + 0x1000);
        t4 = a4;
        for (;;) {
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            kmiWriteRegister(t3, t5);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t4 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}
