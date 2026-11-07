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
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d80c0(int);
int FUN_0c0db320(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
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
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
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
int kmiWriteRegister(int, int, int);
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
            t0 = (FUN_0c0e2a4c((*(int *)((t2 + 0x4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
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
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(float *)((t0 + 0x45C)) = 0.25f;
    *(float *)((t0 + 0x460)) = 1.0f;
    *(float *)((t0 + 0x464)) = 0.25f;
    *(unsigned int *)((t0 + 0x3AC)) = 0x78;
    *(float *)((t0 + 0x468)) = (((*(float *)((t0 + 0x45C))) - (*(float *)((a4 + 0x45C)))) / (float)(*(int *)((t0 + 0x3AC))));
    *(float *)((t0 + 0x46C)) = (((*(float *)((t0 + 0x460))) - (*(float *)((a4 + 0x460)))) / (float)(*(int *)((t0 + 0x3AC))));
    *(float *)((t0 + 0x470)) = (((*(float *)((t0 + 0x464))) - (*(float *)((a4 + 0x464)))) / (float)(*(int *)((t0 + 0x3AC))));
    return 0x470;
}

int FUN_0c03c510(int a4)
{
    int t6;
    int t10;
    int t12;
    int t18;
    int t16;
    int stk[5];

    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t6 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t6 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t18 = t6;
    } else {
        t10 = *(int *)((a4 + 0x57C));
        if ((t10 != 0) && ((t10 != 1) && ((t10 != 2) && (t10 != 3)))) {
            t12 = t10;
            if (t10 != 4) {
            } else {
                t12 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t16 = t12;
        } else {
            t16 = (FUN_0c0cc3f8(0x12EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t18 = t16;
    }
    return t18;
}

int FUN_0c04f7cc(void)
{
    int t0;
    int t1;
    int t3;
    int t10;
    int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0xC247030));
        t10 = t3;
        if (t3 == 4) {
            t2 = 0xC246FF0;
            t2 = (t2 + t0);
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c049b80(t2);
            _quick_odd_mvn();
            _quick_odd_mvn();
            *(unsigned int *)((t2 + 0x1B0)) = 0x0;
            *(unsigned int *)((t2 + 0xA4)) = 0xA7F;
            FUN_0c051a48(t2);
            *(unsigned int *)((t2 + 0x0)) = 0xC04A118;
            t10 = (FUN_0c055090(t2));
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    return t10;
}

int FUN_0c056016(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x34C));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x5;
    t2 = *(int *)(((0x344 + a4) + 0x0));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) & (~(((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)))));
    *(unsigned int *)((a4 + 0x334)) = 0x0;
    *(unsigned int *)((a4 + 0x344)) = 0x0;
    *(unsigned int *)((a4 + 0x34C)) = 0x0;
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) & (~(*(int *)(((0x22C + t1) + 0x0)))));
    if ((*(int *)((a4 + 0x330))) == 3) {
        *(unsigned int *)((a4 + 0x330)) = 0x2;
        *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x348)));
    } else {
        *(unsigned int *)((a4 + 0x330)) = 0x0;
        *(unsigned int *)((a4 + 0x340)) = 0x0;
    }
    FUN_0c0bb1a8(a4, 0x1);
    return FUN_0c0519f0(a4);
}


int FUN_0c0836d2(int a4)
{
    int t1;
    int stk[7];

    t1 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    FUN_0c082f04(a4, 0x3, (*(float *)((t1 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t1 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t1 + 0x234))));
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
        *(unsigned short *)0xC10BB8E = 0x14D2;
        *(unsigned short *)0xC10BB90 = 0x14D6;
        *(unsigned short *)0xC10BB92 = 0x14D4;
        *(unsigned short *)0xC10BB94 = 0x14D3;
        *(unsigned short *)0xC10BB96 = 0x14D7;
        *(unsigned short *)0xC10BB98 = 0x14D5;
        *(unsigned int *)0xC201140 = 0x14EC;
        *(unsigned short *)0xC1FE8C0 = 0x14BF;
        t1 = 0x14EA;
    } else {
        *(unsigned short *)0xC10BB8E = 0x491;
        *(unsigned short *)0xC10BB90 = 0x495;
        *(unsigned short *)0xC10BB92 = 0x493;
        *(unsigned short *)0xC10BB94 = 0x492;
        *(unsigned short *)0xC10BB96 = 0x496;
        *(unsigned short *)0xC10BB98 = 0x494;
        *(unsigned int *)0xC201140 = 0x129F;
        *(unsigned short *)0xC1FE8C0 = 0x1264;
        t1 = 0x1287;
    }
    *(unsigned short *)0xC1FE8FA = t1;
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
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
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
    *(unsigned int *)((t0 + 0x70)) = (*(int *)((a4 + 0xC)));
    *(unsigned short *)(((0x7E + t0) + 0x0)) = (*(short *)((a4 + 0x4)));
    *(unsigned short *)(((0x7C + t0) + 0x0)) = (*(short *)((a4 + 0x8)));
    *(unsigned short *)(((0x76 + t0) + 0x0)) = (*(short *)((a4 + 0x6)));
    *(float *)((t0 + 0x68)) = (float)(*(short *)((a4 + 0x0)));
    *(float *)((t0 + 0x6C)) = (float)(*(short *)((a4 + 0x2)));
    *(float *)((t0 + 0x3C)) = (*(float *)0xC0C6400);
    *(float *)((t0 + 0x50)) = 1.0f;
    *(float *)((t0 + 0x54)) = 1.0f;
    *(float *)((t0 + 0x40)) = 1.0f;
    *(float *)((t0 + 0x44)) = 1.0f;
    *(float *)((t0 + 0x5C)) = 1.0f;
    *(unsigned int *)((t0 + 0x60)) = 0xFFFFFFFF;
    t9 = *(short *)((a4 + 0xA));
    *(unsigned short *)(((0x80 + t0) + 0x0)) = t9;
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

    *(unsigned int *)(((int)stk + 8)) = a5;
    FUN_0c0a6800((*(int *)(((int)stk + 8))), (((int)stk + 8) + 0x28), 0.0f, ((*(float *)((a4 + 0x4))) + 5.0f), -100.0f);
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 56))) - (*(float *)((a4 + 0x8))));
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c01e822(a4, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), 0x8));
    t9 = *(int *)(((int)stk + 8));
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
            kmiWriteRegister(t3, t5, a6);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t4 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}
