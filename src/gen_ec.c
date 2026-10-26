/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
int FUN_0c015436(int, int, int, int);
int FUN_0c01a320(int, int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
int FUN_0c0208fc(int);
int FUN_0c0219ec(void);
int FUN_0c021a48(void);
int FUN_0c021bac(void);
int FUN_0c021c64(void);
int FUN_0c021d00(void);
int FUN_0c021d30(int);
int FUN_0c021dd0(int);
extern int FUN_0c0220dc();
int FUN_0c0236ce(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c03217c(int, int, int);
int FUN_0c0321d4(int, int);
int FUN_0c03593a(int);
int FUN_0c035ad6(int, int);
int FUN_0c035b26(int, int);
int FUN_0c035ce4(int);
int FUN_0c036806(int, int, int, int, int, int, int);
int FUN_0c037504(int);
int FUN_0c038ce0(int, int);
int FUN_0c0392e8(int, int);
int FUN_0c039302(int);
int FUN_0c03aaa2(int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c049b80(int);
int FUN_0c051a48(int);
int FUN_0c053ac4(int);
int FUN_0c0556ce(int, int, int);
int FUN_0c056118(int, int, int, int);
int FUN_0c08edf0(int);
int FUN_0c08fbb8(int, int, Stk2, float, float);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c47ae(int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc010(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cead0(int);
int FUN_0c0cec9a(int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int FUN_0c0e6248(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c23327e(int, int, int);
int FUN_0c23330a(int);
int FUN_0c233774(void);
int buGetDiskFree(int, int);
int buIsFormat(int);
int buStat(int);
int memset(int, int, int);
extern int mwRnaErrCallFunc();
int mwRnaGetPlaySw(int);
int nlFastInvertMatrix(void);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int pdVibMxStart(int, int);
int search_exec_file(int, int);
int setjmp(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c03cc70(int a4);
int FUN_0c058308(int a4, int a5, int a6, int a7);
int FUN_0c085050(int a4, int a5, int a6);
int buFbrCreateFiber(int a4, int a5, int a6, int a7);
int FUN_0c03442c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c03acb4(int a4, int a5);
int FUN_0c04c514(int a4);
int FUN_0c0552dc(int a4, int a5);
void FUN_0c088ec4(int a4, int a5);
int FUN_0c0160d2(int a4, int a5, int a6, int a7);
int FUN_0c02e70c(int a4);
int FUN_0c042fd0(int a4, int a5, int a6);
int FUN_0c023de0(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c036994(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int FUN_0c0412b8(int a4);
int FUN_0c04d34a(int a4, int a5);
void FUN_0c08b678(int a4, float f4, float f5);
int FUN_0c08ee90(void);
int FUN_0c0e59e0(void);
int vmsfs_xfind(int a4, int a5, int a6);
int FUN_0c22bfa2(int a4, int a5, int a6, int a7);
int FUN_0c019980(void);
int FUN_0c021fee(int a4, int a5, int a6);
void FUN_0c04c42e(int a4, int a5);
int FUN_0c057fd4(int a4, int a5);
int FUN_0c0d9800(int a4);
int FUN_0c02cbe0(int a4);
int FUN_0c02219e(int a4, int a5, int a6, int a7);
float FUN_0c05477c(int a4, float f4);
int FUN_0c07cf64(int a4, int a5, float f4, float f5, float f6);
int FUN_0c09ba10(int a4);
int FUN_0c0cc054(int a4, int a5);
int FUN_0c0e36c4(int a4, int a5);
int FUN_0c04e506(int a4, int a5);
float FUN_0c06db68(int a4, int a5);
void FUN_0c06e9cc(int a4, int a5);

int FUN_0c03cc70(int a4)
{
    int t6;
    int t36;
    int t22;
    int t42;
    int t3;
    int t4;
    int t7;
    int t16;
    int t31;
    int t25;
    int stk[5];

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        t42 = 0x560;
    } else {
        FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
        if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
        } else {
            FUN_0c0cc3f8(0x334A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
            t6 = *(int *)((a4 + 0x4F8));
            if (((t6 != 4) && (t6 != 5)) || (t7 = *(int *)((a4 + 0x544)), t7 != 3)) {
            } else {
                *(unsigned int *)0xC247D04 = 0xA;
            }
        }
        if (((int)(*(int *)((a4 + 0x304))) <= 0) && (t16 = *(int *)((a4 + 0x57C)), (int)t16 < (int)0x3)) {
            *(unsigned int *)((a4 + 0x57C)) = 0x3;
        }
        t36 = 0x304;
        if ((int)(*(int *)((a4 + 0x304))) > 0) {
            t22 = *(int *)((a4 + 0x57C));
            if ((t22 != 0) && (t22 != 1)) {
                if ((t22 != 2) && (t22 != 3)) {
                    t25 = t22;
                } else {
                    t25 = (FUN_0c0cc3f8(0xDA, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                }
                t31 = t25;
            } else {
                t31 = (FUN_0c0cc3f8(0xD8, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}

int FUN_0c058308(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t10;

    t1 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    t2 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t2 - 1);
    if ((int)(t2 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((int)(*(int *)((a4 + 0xA0))) < (int)0x3C) {
        t10 = *(int *)0xC23A258;
        if ((t10 & 1) == 0) {
            if (t1 != 0) {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((t1 + 0x22C))), (*(float *)((t1 + 0x230))), (*(float *)((t1 + 0x234))));
                nlRotateAY(((*(short *)((t1 + 0x222))) + (*(short *)((t1 + 0x228)))));
                nlRotateAX(((*(short *)((t1 + 0x220))) + (*(short *)((t1 + 0x226)))));
                nlRotateAZ((*(short *)((t1 + 0x22A))));
                if ((*(int *)((a4 + 0x84))) == 0) {
                    FUN_0c0dcc70(0.0f, 2.79999995f, -2.19999981f);
                    nlRotateAY(0x8000);
                } else {
                    FUN_0c0dcc70(0.0f, 2.79999995f, 1.0f);
                }
                FUN_0c0c47ae(0x125E);
                return nlPopMatrix(0x1);
            }
            return t10;
        }
        return t10;
    }
    if (t1 != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)((t1 + 0x22C))), (*(float *)((t1 + 0x230))), (*(float *)((t1 + 0x234))));
        nlRotateAY(((*(short *)((t1 + 0x222))) + (*(short *)((t1 + 0x228)))));
        nlRotateAX(((*(short *)((t1 + 0x220))) + (*(short *)((t1 + 0x226)))));
        nlRotateAZ((*(short *)((t1 + 0x22A))));
        if ((*(int *)((a4 + 0x84))) == 0) {
            FUN_0c0dcc70(0.0f, 2.79999995f, -2.19999981f);
            nlRotateAY(0x8000);
        } else {
            FUN_0c0dcc70(0.0f, 2.79999995f, 1.0f);
        }
        FUN_0c0c47ae(0x125E);
        return nlPopMatrix(0x1);
    }
    return 0xA0;
}

int FUN_0c085050(int a4, int a5, int a6)
{
    int t1;
    float u8;
    float u10;
    int t14;

    t1 = FUN_0c0e19aa(0xC08512C, 0x74, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x5C)) = (a5 - 1);
    *(unsigned int *)((t1 + 0x60)) = a4;
    if (a6 != 0) {
        *(unsigned int *)((t1 + 0x64)) = a4;
    }
    *(float *)((t1 + 0x30)) = (float)(*(int *)0xC248A64);
    *(float *)((t1 + 0x34)) = (float)(*(int *)0xC248A68);
    *(float *)((t1 + 0x38)) = (float)(*(int *)0xC248A6C);
    u8 = *(float *)0xC085180;
    u10 = *(float *)0xC085184;
    *(float *)((t1 + 0x3C)) = (((-(*(float *)((t1 + 0x30)))) + u8) / ((float)a4 * u10));
    *(float *)((t1 + 0x40)) = (((-(*(float *)((t1 + 0x34)))) + u8) / ((float)a4 * u10));
    *(float *)((t1 + 0x44)) = (((-(*(float *)((t1 + 0x38)))) + u8) / ((float)a4 * u10));
    *(unsigned int *)((t1 + 0x48)) = (unsigned char)((int)(*(int *)0xC248A70) >> 8);
    t14 = *(signed char *)0xC248A70;
    *(unsigned int *)((t1 + 0x50)) = (unsigned char)t14;
    *(float *)((t1 + 0x4C)) = ((float)(((((((unsigned char)t14 << 2) << 2) << 2) << 1) + (*(int *)((t1 + 0x48)))) - 128) / (float)a4);
    return 0x4C;
}

int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int t1;
    int t14;
    int t3;
    int t4;
    int t5;
    int stk[47];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    memset((((int)stk + 4) + 0x8), 0x0, 0x98);
    t1 = *(int *)((a4 + 0x208));
    t14 = 0xFFFFFFFF;
    if ((*(int *)((a4 + 0x20C))) != t1) {
        t3 = t1;
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            if ((*(int *)((t5 + 0xC))) == 0) {
                break;
            }
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        *(unsigned int *)((t5 + 0x14)) = (*(int *)((a4 + 0x204)));
        *(unsigned int *)((t5 + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        FUN_0c0e631c((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        FUN_0c0e631c((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + (*(int *)(((int)stk + 4))));
        *(unsigned int *)((t5 + 0x20)) = (*(int *)(((int)stk + 8)));
        t14 = t4;
    }
    return t14;
}

int FUN_0c03442c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[17];

    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((-(*(short *)((a4 + 0x6E)))));
    *(float *)(((int)stk + 44)) = ((-(*(float *)((a5 + 0x30)))) + (*(float *)((a4 + 0x30))));
    *(float *)(((int)stk + 48)) = ((-(*(float *)((a5 + 0x34)))) + (*(float *)((a4 + 0x34))));
    *(float *)(((int)stk + 52)) = ((-(*(float *)((a5 + 0x38)))) + (*(float *)((a4 + 0x38))));
    FUN_0c0db470((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 40)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (((int)((*(int *)(((int)stk + 4))) + 0x4000) >> 15) & 0x1);
    *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (((int)((*(int *)(((int)stk + 4))) + 0x2000) >> 14) & 0x3);
    *(unsigned int *)((a8 + 0x0)) = (((int)(0x2000 + (*(int *)(((int)stk + 8)))) >> 14) & 0x3);
    *(unsigned short *)((a9 + 0x0)) = (*(int *)(((int)stk + 4)));
    return 0x44;
}

int FUN_0c03acb4(int a4, int a5)
{
    int t7;

    if ((*(int *)((a4 + 0x5C8))) == 0) {
        return FUN_0c03aaa2(a4, a5);
    }
    FUN_0c038ce0(a4, a5);
    if ((int)(*(int *)((a4 + 0x57C))) < (int)0x3) {
        *(unsigned int *)((a4 + 0x57C)) = 0x3;
    }
    if ((*(int *)((a4 + 0x5A0))) == 1) {
        *(unsigned int *)((a4 + 0x2C4)) = 0x4EC;
        t7 = 0x4EB;
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x4EA;
        t7 = 0x4E9;
    }
    *(unsigned int *)((a4 + 0x5B8)) = t7;
    *(unsigned int *)((a4 + 0x4C4)) = 0x3;
    *(unsigned int *)((a4 + 0x4C8)) = 0x7;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    FUN_0c0392e8(a4, 0x1);
    FUN_0c039302(a4);
    FUN_0c0392e8(a4, 0x0);
    FUN_0c0392e8(a4, 0x2);
    FUN_0c0392e8(a4, 0x3);
    FUN_0c0392e8(a4, 0x4);
    FUN_0c0392e8(a4, 0x5);
    FUN_0c0392e8(a4, 0x6);
    FUN_0c0392e8(a4, 0x7);
    FUN_0c0392e8(a4, 0x8);
    return FUN_0c037504(a4);
}

int FUN_0c04c514(int a4)
{
    int t28;
    int t48;
    int t55;
    int t64;
    int t70;
    int t1;
    int t46;
    int t47;

    if (((*(int *)((a4 + 0x3AC))) != 0) && (t1 = *(int *)((a4 + 0xD8)), t1 != 0)) {
        if (((*(int *)0xC23A1A8) & 0x100) != 0) {
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xE4))) << 2)))) == 4) {
                if (((*(int *)(((*(int *)(((((*(int *)((a4 + 0xE4))) << 2) + 0xC246FF0) + 0x0))) + 0x20C))) & 0xC000) != 0) {
                    t28 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t28 << 2))) = ((*(int *)((0xC247594 + (t28 << 2)))) + 0x32);
                }
            }
        }
        if (((*(int *)0xC204998) != 0) && ((t46 = *(int *)0xC2049AC, t46 != 0) || (t47 = *(int *)0xC1FF894, (int)t47 >= 0))) {
        } else {
            t48 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((0xC247594 + (t48 << 2))) = ((*(int *)((0xC247594 + (t48 << 2)))) - 50);
        }
        if ((*(int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2)))) == 0) {
            t55 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((0xC247594 + (t55 << 2))) = ((*(int *)((0xC247594 + (t55 << 2)))) + 0x1);
        }
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    }
    t64 = *(int *)((a4 + 0x2EC));
    t70 = t64;
    if ((t64 & 12) != 0) {
        FUN_0c053ac4(a4);
        *(unsigned short *)(((0x6E + a4) + 0x0)) = ((*(short *)(((0x6E + a4) + 0x0))) + ((*(short *)((((*(int *)(((0x2A0 + a4) + 0x0))) << 1) + 0xC0F85D8))) - 32768));
        FUN_0c049b80(a4);
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        t70 = 0x1B0;
    }
    return t70;
}

int FUN_0c0552dc(int a4, int a5)
{
    int t0;
    int t27;
    int t1;
    int t19;
    int t2;

    t0 = FUN_0c0556ce(a5, 0x1, 0x0);
    t27 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t1 = *(int *)(((t0 << 2) + 0xC2475D4));
        if ((0x1887F0 & (((int)a5 >= 0) ? (0x1 << (a5 & 31)) : ((-(int)a5 & 31) ? ((int)0x1 >> (-(int)a5 & 31)) : ((int)0x1 >> 31)))) != 0) {
            *(unsigned int *)((a4 + 0x344)) = a5;
            *(unsigned int *)((a4 + 0x330)) = 0x4;
            t2 = 0x34C;
        } else {
            *(unsigned int *)((a4 + 0x348)) = a5;
            *(unsigned int *)((a4 + 0x330)) = 0x2;
            t2 = 0x350;
        }
        *(unsigned int *)((a4 + t2)) = t0;
        *(unsigned int *)((a4 + 0x340)) = a5;
        *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
        *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)a5 >= 0) ? (0x1 << (a5 & 31)) : ((-(int)a5 & 31) ? ((int)0x1 >> (-(int)a5 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            *(unsigned int *)(((0x21C + t1) + 0x0)) = (*(int *)(((a5 << 2) + 0xC1FF60C)));
        } else {
            *(unsigned int *)((t1 + 0x21C)) = (*(int *)((((a5 << 2) << 2) + 0xC20C0B8)));
        }
        if ((*(int *)(((a5 << 2) + 0xC1FF6D8))) != 0) {
            t19 = ((int (*)(int, int))((*(int *)(((a5 << 2) + 0xC1FF6D8)))))(a4, (((int)a5 >= 0) ? (0x1 << (a5 & 31)) : ((-(int)a5 & 31) ? ((int)0x1 >> (-(int)a5 & 31)) : ((int)0x1 >> 31))));
        }
        t27 = t0;
    }
    return t27;
}

void FUN_0c088ec4(int a4, int a5)
{
    int t3;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u21;

    if ((*(int *)((a4 + 0x380))) != 0) {
        *(unsigned int *)(((*(int *)((a4 + 0x380))) + 0x0)) = a5;
    } else {
        t3 = FUN_0c0e19aa(0xC088FCC, 0x12C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t3);
        *(unsigned int *)((t3 + 0x120)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t3 + 0x124)) = a5;
        *(unsigned int *)((a4 + 0x380)) = (0x124 + t3);
        if ((int)(*(int *)((t3 + 0x124))) >= 0) {
            *(unsigned int *)((t3 + 0x128)) = 0x1;
        } else {
            *(unsigned int *)((t3 + 0x128)) = 0x0;
        }
        t10 = ((t3 + 0x58) + 0x28);
        t11 = ((0x80 + t3) + 0x28);
        t12 = 0xA;
        t13 = (0xF8 + t3);
        t14 = ((0xF8 + t3) + 0x28);
        t15 = ((0xA8 + t3) + 0x28);
        for (;;) {
            *(unsigned int *)(((t10 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
            t10 = (t10 - 0x4);
            *(unsigned int *)(((t11 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
            t11 = (t11 - 0x4);
            *(unsigned int *)(((t15 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
            t15 = (t15 - 0x4);
            *(unsigned int *)(((t14 - 0x4) + 0x0)) = (((FUN_0c0da2e0()) << 2) << 2);
            t14 = (t14 - 0x4);
            t12 = (t12 - 0x1);
            u21 = 0.799999952f;
            u21 = u21 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            *(float *)(((t13 - 0x4) + 0x0)) = u21;
            t13 = (t13 - 0x4);
            if (t12 == 0) {
                break;
            }
        }
    }
}

int FUN_0c0160d2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t5;
    int t2;
    int t11;
    int t21;
    int t33;
    int t35;
    int t42;
    int t25;
    int t15;
    int t37;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC23EB1C;
    t1 = *(int *)0xC23EB20;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t5 = t0;
                if (t0 != 3) {
                } else {
                    t2 = buStat(t1);
                    if (t2 == 0) {
                        *(unsigned int *)0xC23EB1C = 0x9;
                    }
                    t5 = t2;
                }
                t15 = t5;
            } else {
                FUN_0c015436(t1, (*(int *)(((int)stk + 4))), a6, a7);
                t11 = buGetDiskFree((*(int *)0xC23EB20), 0x0);
                *(unsigned int *)0xC23EB18 = t11;
                if ((int)(*(int *)0xC23EB24) >= 0) {
                    *(unsigned int *)0xC23EB1C = 0xA;
                } else {
                    *(unsigned int *)0xC23EB1C = 0x9;
                }
                t15 = t11;
            }
            t25 = t15;
        } else {
            t21 = buStat(t1);
            if (t21 == 0) {
                *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
            }
            t25 = t21;
        }
        t42 = t25;
    } else {
        *(unsigned int *)0xC23EB18 = 0x0;
        t33 = *(int *)(((FUN_0c0cead0((*(int *)0xC23EB20))) + 0x50));
        if (t33 == 1) {
            t35 = FUN_0c0cec9a((*(int *)0xC23EB20), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            *(unsigned int *)0xC23EB1C = ((*(int *)0xC23EB1C) + 0x1);
            t37 = t35;
        } else {
            *(unsigned int *)0xC23EB1C = 0x9;
            t37 = t33;
        }
        t42 = t37;
    }
    return t42;
}

int FUN_0c02e70c(int a4)
{
    int t1;
    int t6;
    int t8;
    int t18;
    int t20;
    int t22;
    int t27;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_C02E70C:;
    t1 = (FUN_0c02a416(R4)) == 0;
    R14 = (R4);
    if (t1) goto L_C02E724;
    goto L_C02E71C;
    L_C02E71C:;
    *(unsigned int *)((R14 + 0x538)) = 0xA;
    goto L_C02E7D2;
    L_C02E7D2:;
    R0 = (0x4F8);
    R3 = (0x0);
    goto L_C02E78A;
    L_C02E78A:;
    *(unsigned int *)((R14 + R0)) = R3;
    goto L_C02E7DC;
    L_C02E7DC:;
    return R0;
    L_C02E724:;
    t6 = (FUN_0c03593a(R14)) == 0;
    R13 = (0x2);
    if (t6) goto L_C02E7BC;
    goto L_C02E730;
    L_C02E730:;
    t8 = FUN_0c02a35a(R14);
    R0 = (t8);
    if ((t8 == 0)) goto L_C02E74A;
    goto L_C02E73A;
    L_C02E73A:;
    if ((R0 == 1)) goto L_C02E77C;
    goto L_C02E73E;
    L_C02E73E:;
    if ((R0 == 2)) goto L_C02E782;
    goto L_C02E742;
    L_C02E742:;
    if ((R0 == 3)) goto L_C02E77C;
    goto L_C02E746;
    L_C02E746:;
    goto L_C02E78E;
    L_C02E78E:;
    *(unsigned int *)((R14 + 0x538)) = R13;
    goto L_C02E7D2;
    L_C02E77C:;
    *(unsigned int *)((R14 + 0x538)) = R13;
    goto L_C02E7D8;
    L_C02E7D8:;
    *(unsigned int *)((R14 + 0x4F8)) = R13;
    R0 = (0x4F8);
    goto L_C02E7DC;
    L_C02E782:;
    *(unsigned int *)((R14 + 0x538)) = R13;
    R0 = (0x4F8);
    R3 = (0x6);
    goto L_C02E78A;
    L_C02E74A:;
    t18 = (FUN_0c035b26(R14, R5)) == 0;
    if (t18) goto L_C02E766;
    goto L_C02E754;
    L_C02E754:;
    t20 = (FUN_0c035ce4(R14)) == 0;
    if (t20) goto L_C02E766;
    goto L_C02E75E;
    L_C02E75E:;
    *(unsigned int *)((R14 + 0x4F8)) = 0x4;
    R0 = (0x4F8);
    goto L_C02E7DC;
    L_C02E766:;
    t22 = *(int *)((R14 + 0x538));
    R4 = (t22);
    if ((t22 == 8)) goto L_C02E7D8;
    goto L_C02E770;
    L_C02E770:;
    if ((R4 != 4)) goto L_C02E7D2;
    goto L_C02E778;
    L_C02E778:;
    goto L_C02E7D8;
    L_C02E7BC:;
    *(unsigned int *)((R14 + 0x538)) = 0x1;
    *(unsigned int *)((R14 + 0x524)) = 0x0;
    t27 = (FUN_0c0236ce(R14)) != 0;
    if (t27) goto L_C02E7D8;
    goto L_C02E7D2;
}

int FUN_0c042fd0(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t5;
    int t11;
    int t13;
    int t14;
    int t15;
    int t26;
    int t27;
    int t29;
    int t12;
    int t21;
    int t22;
    int t25;
    int t31;

    t0 = *(int *)0xC247074;
    if (t0 == 0) {
        FUN_0c0da2e0();
        *(volatile int *)0xC247070;
        t4 = 0x0;
        t5 = (FUN_0c0e5f1c());
        for (;;) {
            if ((*(int *)(((t4 << 2) + 0xC247030))) == 4) {
                t5 = (t5 - 1);
            }
            if ((int)t5 >= 0) {
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)0x2) {
                    break;
                }
                continue;
            }
            *(unsigned int *)((a4 + 0x510)) = t4;
            t4 = 0x1;
            *(unsigned int *)((a4 + 0x50C)) = t4;
            return 0x50C;
        }
        *(unsigned int *)((a4 + 0x50C)) = 0x0;
    } else {
        t11 = 0x84;
        t13 = 0x0;
        t14 = a6;
        t15 = t0;
        for (;;) {
            if ((unsigned int)t13 >= (unsigned int)0x8) {
                break;
            }
            t14 = 0xC246FF0;
            t14 = (t14 + t13);
            t11 = 0xC246FF0;
            t11 = (t11 + 0x40);
            t11 = (*(int *)((t13 + t11)));
            t14 = (*(int *)((t14 + 0x0)));
            if ((t11 == 4) && (t21 = (t11 == 4), t11 = 0x32C, t22 = *(int *)((t14 + t11)), t12 = t22, (int)t12 > 0)) {
                t15 = (t15 + 0x1);
            }
            t13 = (t13 + 0x4);
        }
        FUN_0c0da2e0();
        t26 = 0x0;
        t27 = (FUN_0c0e5f1c());
        for (;;) {
            t29 = *(int *)(((0xC246FF0 + (t26 << 2)) + 0x0));
            if ((*(int *)(((t26 << 2) + 0xC247030))) == 4) {
                if (((int)t26 >= (int)0x2) || (t31 = *(int *)((t29 + 0x32C)), t25 = t31, (int)t25 > 0)) {
                    t27 = (t27 - 1);
                }
                if ((int)t27 < 0) {
                    break;
                }
                t26 = (t26 + 0x1);
                if ((int)t26 >= (int)0xC) {
                    *(unsigned int *)((a4 + 0x50C)) = 0x0;
                    return 0x50C;
                }
                continue;
            }
            t26 = (t26 + 0x1);
            if ((int)t26 >= (int)0xC) {
                *(unsigned int *)((a4 + 0x50C)) = 0x0;
                return 0x50C;
            }
        }
        *(unsigned int *)((a4 + 0x510)) = t26;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
    }
    return 0x50C;
}

int FUN_0c023de0(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t1;
    int stk[6];

    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    if ((int)(*(int *)((a4 + 0x544))) >= 0) {
        t1 = *(int *)((a4 + 0x4F0));
        if ((*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x0))) == (*(int *)0xC1F3224)) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0xC0F53C8); }
            *(unsigned int *)((a4 + 0x1B0)) = 0x0;
            FUN_0c08fbb8(a4, ((int)stk + 4), *(Stk2 *)(((int)stk + 4)), f4, f5);
            FUN_0c0321d4(a4, 0xF);
        } else {
            if ((int)(*(int *)((a4 + 0x4E0))) >= 0) {
                FUN_0c03217c(a4, (*(int *)((a4 + 0x54C))), (*(int *)((a4 + 0x544))));
            } else {
                FUN_0c0321d4(a4, (*(int *)((a4 + 0x544))));
            }
        }
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    } else {
        *(unsigned int *)((a4 + 0x534)) = 0x0;
        FUN_0c02a19a(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    return 0x56C;
}

int FUN_0c036994(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t10;
    int t13;
    int t16;
    int stk[24];

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(float *)(((int)stk + 24)) = f4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    *(unsigned int *)(((int)stk + 32)) = (0xC23F268 + (((((a4 << 1) + a4) << 2) << 2) << 2));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 20))));
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 24)));
    FUN_0c0db470((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x14));
    *(float *)(((((int)stk + 16) + 0x38) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 16) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 40)));
    *(float *)(((((int)stk + 16) + 0x40) + 0x0)) = (*(float *)(((int)stk + 44)));
    nlPopMatrix(0x1);
    t10 = *(int *)(((int)stk + 16));
    t13 = FUN_0c036806((*(int *)(((int)stk + 32))), (((int)stk + 4) + 0x44), (*(int *)(((int)stk + 28))), (((int)stk + 4) + 0x38), a8, a9, a10);
    *(unsigned int *)((t10 + 0x0)) = t13;
    t16 = t13;
    if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) == 0) {
        *(float *)((a9 + 0x0)) = 0.0f;
        t16 = 0x54;
    }
    return t16;
}

int FUN_0c0412b8(int a4)
{
    int stk[28];

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x34)) = *(struct mv11 *)(0xC0F5744); }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (*(float *)0xC0413B0);
    *(float *)(((int)stk + 28)) = (*(float *)0xC0413B4);
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x28) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x28) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
    FUN_0c0a79fa((((int)stk + 4) + 0x1C), ((((int)stk + 4) + 0x1C) + 0x4), ((((int)stk + 4) + 0x1C) + 0x8));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 72)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x0)));
    *(float *)(((int)stk + 76)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x4)));
    *(float *)(((int)stk + 80)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x8)));
    *(unsigned int *)(((int)stk + 84)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x4)));
    *(unsigned short *)(((int)stk + 88)) = (*(short *)0xC23ED50);
    *(unsigned int *)(((int)stk + 60)) = 0xC03F3A0;
    return (FUN_0c0208fc((((int)stk + 4) + 0x34)));
}

int FUN_0c04d34a(int a4, int a5)
{
    int t7;
    int t9;
    int t13;
    int t11;
    int t3;

    if (((*(int *)((a5 + 0x0))) & 0x202) != 0) {
        t3 = ((*(int *)((a4 + 0x374))) + 0x7);
    } else {
        t3 = ((*(int *)((a4 + 0x374))) - 1);
    }
    *(unsigned int *)((a4 + 0x374)) = t3;
    if ((int)(*(int *)((a4 + 0x374))) > (int)0x16) {
        t7 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
        *(unsigned int *)((a4 + 0x2C4)) = 0x399;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((t7 + 0x2C4)) = ((*(int *)((a4 + 0x2C4))) + 0x1);
        *(unsigned int *)((t7 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x210)) = 0x52;
        *(unsigned int *)((a4 + 0x374)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        return 0x3B0;
    }
    t9 = *(int *)((a4 + 0x3B0));
    *(unsigned int *)((a4 + 0x3B0)) = (t9 - 1);
    t13 = 0x3B0;
    if ((int)(t9 - 1) <= 0) {
        t11 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
        *(unsigned int *)((a4 + 0x2C4)) = 0x397;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((t11 + 0x2C4)) = ((*(int *)((a4 + 0x2C4))) + 0x1);
        *(unsigned int *)((t11 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x210)) = 0x4F;
        *(unsigned int *)((a4 + 0x374)) = 0x0;
        t13 = 0x374;
    }
    return t13;
}

void FUN_0c08b678(int a4, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u7;
    float u8;
    int t15;
    int t5;
    int t6;
    float u9;
    int t11;
    int t27;
    float u28;
    float u29;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x1;
    t4 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if (((int)(*(int *)((t1 + 0xC247030))) >= (int)0x3) && (t11 = *(int *)((((((t4 << 2) + t4) << 2) + 0xC248CBC) + 0x0)), t11 == 0)) {
            t6 = (*(int *)((t2 + 0xC246FF0)));
            t0 = t6;
            t0 = (t0 + 0x30);
            u9 = (nlLength(t0, a4));
            if (f4 > u9) {
                t0 = 0xC08B7DC;
                t15 = FUN_0c0e19aa(t0, 0x48, (*(int *)0xC23ECF0));
                t5 = t15;
                t0 = t15;
                FUN_0c0e19d0(t0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((t4 << 2) + t4) << 2) + 0xC248CBC) + 0x8)) = *(struct mv3 *)(a4); }
                u9 = (u9 / f4);
                *(unsigned int *)((((((t4 << 2) + t4) << 2) + 0xC248CBC) + 0x0)) = t5;
                *(unsigned int *)((t5 + 0x30)) = t6;
                *(unsigned int *)((t5 + 0x38)) = (*(int *)((t6 + 0xBC)));
                u9 = (u9 * f5);
                *(float *)((((((t4 << 2) + t4) << 2) + 0xC248CBC) + 0x4)) = u9;
                *(unsigned int *)((t6 + 0x38C)) = t3;
            }
        } else {
            t27 = t0;
            u28 = u7;
            u29 = u8;
        }
        u7 = u28;
        u8 = u29;
        t0 = t27;
        t4 = (t4 + 0x1);
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((int)t4 >= (int)0xC) {
            break;
        }
    }
}

int FUN_0c08ee90(void)
{
    int t6;
    float u19;
    float u21;
    int stk[11];

    *(unsigned int *)(((int)stk + 20)) = 0xC247ED8;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)(((int)stk + 24))) + 0x2EC));
    t6 = *(int *)(((*(int *)(((int)stk + 20))) + 0x0));
    nlRotateAX((((int)((unsigned int)((int)((unsigned int)(-t6) + (unsigned int)0x0)) + ((((int)0x0 > (int)(-t6))) ? 1u : 0u))) >> 1));
    FUN_0c0caf6a(((int)stk + 8), (((int)stk + 8) + 0x4), (((int)stk + 8) + 0x8), 0.00299999979f);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)(((int)stk + 8))), 0.5f, (*(float *)(((int)stk + 12))));
    nlRotateAY((*(int *)(((int)stk + 16))));
    u19 = 120.0f;
    u19 = u19 + 0.0170940161f * (float)((FUN_0c0da2e0()) & 0xFFF);
    *(float *)(((int)stk + 4)) = u19;
    u21 = -105.0f;
    u21 = u21 + 0.0512820482f * (float)((FUN_0c0da2e0()) & 0xFFF);
    FUN_0c0dcc70(u21, 200.0f, u19);
    FUN_0c0db840((((int)stk + 8) + 0x14));
    FUN_0c08edf0((((int)stk + 8) + 0x14));
    return (nlPopMatrix(0x1));
}

int FUN_0c0e59e0(void)
{
    int t4;
    int t5;
    int t3;
    int t9;
    int t15;
    int t22;
    int t29;

    nlPushMatrix(0x0);
    nlFastInvertMatrix();
    t4 = 0x0;
    t5 = 0xC94CA68;
    for (;;) {
        if ((*(short *)((t5 + 0x0))) != 0) {
            FUN_0c0db4d0((t5 + 0x68), (0x80 + t5));
            FUN_0c0db470((t5 + 0x5C), (t5 + 0x74));
        } else {
            t9 = t3;
        }
        t3 = t9;
        t5 = (t5 + 0xB0);
        t3 = (*(short *)((t5 + 0x0)));
        t4 = (t4 + 0x1);
        if (t3 != 0) {
            FUN_0c0db4d0((t5 + 0x68), (0x80 + t5));
            FUN_0c0db470((t5 + 0x5C), (t5 + 0x74));
        } else {
            t15 = t3;
        }
        t3 = t15;
        t5 = (t5 + 0xB0);
        t3 = (*(short *)((t5 + 0x0)));
        t4 = (t4 + 0x1);
        if (t3 != 0) {
            FUN_0c0db4d0((t5 + 0x68), (0x80 + t5));
            FUN_0c0db470((t5 + 0x5C), (t5 + 0x74));
        } else {
            t22 = t3;
        }
        t3 = t22;
        t5 = (t5 + 0xB0);
        t3 = (*(short *)((t5 + 0x0)));
        t4 = (t4 + 0x1);
        if (t3 != 0) {
            FUN_0c0db4d0((t5 + 0x68), (0x80 + t5));
            FUN_0c0db470((t5 + 0x5C), (t5 + 0x74));
        } else {
            t29 = t3;
        }
        t4 = (t4 + 0x1);
        t3 = t29;
        t5 = (t5 + 0xB0);
        if ((int)t4 >= (int)0x10) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int vmsfs_xfind(int a4, int a5, int a6)
{
    int t39;
    int t1;
    int t3;
    int t27;
    int t21;
    int t5;
    int t16;
    int t6;
    int t11;
    int t7;
    int t9;
    int t33;
    int t8;
    int stk[15];

    t39 = 0xFFFFFF01;
    if ((*(signed char *)(((a4 * 0x148) + 0xC95676A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if (t3 != 0) {
                t21 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + 0xC956770))) == 0) {
                } else {
                    t5 = buIsFormat(a4);
                    t16 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t6 = search_exec_file(a4, ((int)stk + 4));
                        t11 = 0xFFFFFF05;
                        if ((int)t6 >= 0) {
                            t7 = t6;
                            t9 = 0x0;
                            for (;;) {
                                if ((int)t9 >= (int)0xC) {
                                    break;
                                }
                                t8 = ((int)stk + 4);
                                t8 = (t8 + 0x10);
                                t7 = t9;
                                t8 = (*(signed char *)((t8 + t7)));
                                t9 = (t9 + 0x1);
                                *(unsigned char *)((a5 + t7)) = t8;
                            }
                            *(unsigned char *)((a5 + 0xC)) = 0x0;
                            t11 = 0x0;
                        }
                        t16 = t11;
                    }
                    t21 = t16;
                }
                t27 = t21;
            }
            t33 = t27;
        }
        t39 = t33;
    }
    return t39;
}

int FUN_0c22bfa2(int a4, int a5, int a6, int a7)
{
    int t4;
    int t18;
    int t6;
    int t13;
    int t14;
    int t8;
    int t9;
    int t41;
    int t21;
    int t37;
    int t25;
    int t32;
    int t33;
    int t27;
    int t28;
    int t51;
    int t53;
    int t45;
    int t46;
    int t17;
    int t10;
    int t40;
    int t36;
    int t29;
    int stk[7];

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        t53 = (((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC237EE0, a5, a6, a7));
    } else {
        FUN_0c22b6c8(((int)stk + 4));
        if ((*(int *)(((int)stk + 8))) == 0) {
            t4 = mwRnaGetPlaySw(a4);
            t18 = 0x0;
            if (t4 != 0) {
                t6 = FUN_0c23330a((*(int *)((a4 + 0x40))));
                t13 = 0xC237FEC;
                t14 = t6;
                if (t6 != 0) {
                } else {
                    *(volatile int *)((a4 + 0x40));
                    t8 = FUN_0c233774();
                    t9 = *(signed char *)((a4 + 0x1));
                    if (t8 != 0) {
                        t10 = 0xC23800C;
                    }
                    *(unsigned char *)((a4 + 0x1)) = (t9 & 0x5);
                    t13 = t10;
                    t14 = t8;
                }
                t17 = t13;
                t18 = t14;
            }
            t45 = t17;
            t46 = t18;
        } else {
            t41 = 0x0;
            if ((*(int *)(((int)stk + 8))) == 1) {
                t21 = mwRnaGetPlaySw(a4);
                t37 = 0x0;
                if (t21 != 1) {
                    t25 = FUN_0c23327e((*(int *)((a4 + 0x40))), (*(int *)((a4 + 0x8))), (*(int *)((a4 + 0xC))));
                    t32 = 0xC238030;
                    t33 = t25;
                    if (t25 != 0) {
                    } else {
                        *(volatile int *)((a4 + 0x40));
                        t27 = FUN_0c233774();
                        t28 = *(signed char *)((a4 + 0x1));
                        if (t27 != 0) {
                            t29 = 0xC23800C;
                        }
                        *(unsigned char *)((a4 + 0x1)) = (t28 | 0x2);
                        t32 = t29;
                        t33 = t27;
                    }
                    t36 = t32;
                    t37 = t33;
                }
                t40 = t36;
                t41 = t37;
            }
            t45 = t40;
            t46 = t41;
        }
        t51 = (FUN_0c22b6e0(((int)stk + 4)));
        if (t46 != 0) {
            t51 = (((int (*)(int))(mwRnaErrCallFunc))(t45));
        }
        t53 = t51;
    }
    return t53;
}

int FUN_0c019980(void)
{
    int t0;
    int t13;
    int t27;
    int t28;

    *(unsigned int *)0xC23F220 = 0x0;
    t0 = *(int *)0xC23EDE0;
    if (t0 != 4) {
        if (t0 != 5) {
        } else {
            *(unsigned int *)0xC23F220 = ((*(int *)0xC23F220) + 0x1);
            FUN_0c01a320(0x0, 0x1);
        }
    } else {
        *(unsigned int *)0xC23EDE0 = 0x5;
        *(unsigned int *)0xC23F220 = ((*(int *)0xC23F220) + 0x1);
        FUN_0c01a320(0x0, 0x1);
    }
    t13 = *(int *)0xC23EDE4;
    if (t13 != 4) {
        if (t13 != 5) {
        } else {
            *(unsigned int *)0xC23F220 = ((*(int *)0xC23F220) + 0x2);
            FUN_0c01a320(0x1, 0x1);
        }
    } else {
        *(unsigned int *)0xC23EDE4 = 0x5;
        *(unsigned int *)0xC23F220 = ((*(int *)0xC23F220) + 0x2);
        FUN_0c01a320(0x1, 0x1);
    }
    if (((int)(*(int *)0xC23F220) < (int)0x3) && ((t27 = *(int *)0xC23EDE0, t27 != 7) && (t28 = *(int *)0xC23EDE4, t28 != 7))) {
        *(unsigned int *)0xC23F21C = 0x0;
    } else {
        *(unsigned int *)0xC23F21C = 0x1;
    }
    return 0x70;
}

int FUN_0c021fee(int a4, int a5, int a6)
{
    int t0;
    int t17;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c0e1830(0xC021EBA, 0x5EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t0 + 0x498)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((t0 + 0x474)) = (*(int *)((a6 + 0x4)));
    *(unsigned int *)((t0 + 0x488)) = (*(int *)((a6 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((a6 + 0xC)); }
    *(unsigned short *)((t0 + 0x6E)) = (*(int *)((a6 + 0x18)));
    *(unsigned int *)(((0x4A8 + t0) + 0x0)) = (unsigned short)(*(short *)((a6 + 0x1C)));
    *(unsigned int *)(((0x4AC + t0) + 0x0)) = (unsigned short)(*(short *)((a6 + 0x1E)));
    *(unsigned int *)((t0 + 0x4A4)) = (*(int *)0xC23ED50);
    *(unsigned int *)(((((*(int *)((t0 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    *(unsigned int *)(((((*(int *)((t0 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t0;
    *(unsigned int *)(((((*(int *)((t0 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t0;
    FUN_0c021dd0(t0);
    FUN_0c01d562(t0, (*(int *)((t0 + 0x488))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    t17 = *(int *)(((*(int *)((t0 + 0x488))) + 0x4));
    *(unsigned int *)((t0 + 0x78)) = t17;
    return FUN_0c01ce40(t0, t17, 25.0f);
}

void FUN_0c04c42e(int a4, int a5)
{
    int t3;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04C42E:;
    R14 = (R4);
    if ((((*(int *)((R5 + 0x0))) & 0x602) == 0)) goto L_C04C4DE;
    goto L_C04C43C;
    L_C04C43C:;
    t3 = *(int *)((R5 + 0x8));
    R4 = (t3);
    if (((0x200 & t3) == 0)) goto L_C04C4DE;
    goto L_C04C444;
    L_C04C444:;
    R0 = (0x3);
    if (((unsigned int)(*(int *)((R5 + 0x2C))) >= (unsigned int)0x3)) goto L_C04C4DE;
    goto L_C04C44C;
    L_C04C44C:;
    if (((0x2 & R4) == 0)) goto L_C04C4DE;
    goto L_C04C452;
    L_C04C452:;
    if (((unsigned int)(*(int *)((R5 + 0x30))) >= (unsigned int)R0)) goto L_C04C4DE;
    goto L_C04C458;
    L_C04C458:;
    if (((0x400 & R4) == 0)) goto L_C04C4DE;
    goto L_C04C45E;
    L_C04C45E:;
    if (((unsigned int)(*(int *)((R5 + 0x34))) >= (unsigned int)R0)) goto L_C04C4DE;
    goto L_C04C464;
    L_C04C464:;
    R0 = (0x20C);
    if ((((*(int *)((R14 + 0x20C))) & 0x7F9000) != 0)) goto L_C04C4DE;
    goto L_C04C46E;
    L_C04C46E:;
    R0 = (0xC247594);
    if (((int)(*(int *)((((*(int *)((R14 + 0xBC))) << 2) + 0xC247594))) <= (int)0x32)) goto L_C04C4DE;
    goto L_C04C47E;
    L_C04C47E:;
    R0 = (0x394);
    if (((int)(*(int *)((R14 + 0x394))) < 0)) goto L_C04C4DE;
    goto L_C04C486;
    L_C04C486:;
    if ((((*(int *)((R14 + 0x20C))) & 2) != 0)) goto L_C04C49C;
    goto L_C04C48E;
    L_C04C48E:;
    R0 = (0xC246FD8);
    if (((*(int *)((((*(int *)((R14 + 0xBC))) << 2) + 0xC246FD8))) != 0)) goto L_C04C4DE;
    goto L_C04C49C;
    L_C04C49C:;
    FUN_0c051a48(R14);
    *(unsigned int *)((R14 + 0x20C)) = 0x2;
    *(unsigned int *)((R14 + 0x210)) = 0x7F;
    *(unsigned int *)((R14 + 0x2D4)) = 0x0;
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((((*(int *)((R14 + 0xC0))) >> 1) << 1) + 0xC0F7FEC)));
    *(unsigned int *)((R14 + 0x2CC)) = 0x1;
    *(unsigned int *)((R14 + 0x394)) = 0x1;
    *(unsigned int *)((R14 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((R14 + 0x3AC)) = 0x1;
    R0 = (0x3AC);
    goto L_C04C4DE;
    L_C04C4DE:;
}

int FUN_0c057fd4(int a4, int a5)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    int t12;
    int t13;
    int t20;
    int t21;
    int t22;
    int t30;
    int t31;
    int t26;
    int t27;
    int t17;
    int t18;

    u0 = *(float *)0xC0580F8;
    t1 = 0xC0580F8;
    t2 = a4;
    t3 = a5;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC247030 + t5) + 0x0))) != 0) {
            t2 = 0xC246FF0;
            t2 = (t2 + t4);
            t1 = 0x330;
            t2 = (*(int *)((t2 + 0x0)));
            t1 = (*(int *)((t2 + t1)));
            t3 = 0xC23F268;
            if ((t1 != 3) && (t1 != 2)) {
                if (t1 != 4) {
                    t17 = t2;
                    t18 = t3;
                } else {
                    t1 = 0xBC;
                    t11 = *(int *)((t2 + t1));
                    t1 = 0x1D8;
                    *(unsigned int *)((t2 + t1)) = 0x0;
                    t1 = 0x6E;
                    t12 = *(short *)((t2 + t1));
                    t1 = 0x1DC;
                    *(unsigned int *)((t2 + t1)) = t12;
                    t1 = (t1 - 8);
                    *(float *)((t2 + t1)) = u0;
                    t13 = (((((((t11 << 1) + t11) << 2) << 2) << 2) + t3) + 0x3C);
                    t3 = 0x3;
                    t1 = (FUN_0c056118(t2, t3, t13, 0x0));
                }
                t26 = t17;
                t27 = t18;
            } else {
                t1 = 0xBC;
                t20 = *(int *)((t2 + t1));
                t1 = 0x1D8;
                *(unsigned int *)((t2 + t1)) = 0x0;
                t1 = 0x6E;
                t21 = *(short *)((t2 + t1));
                t1 = 0x1DC;
                *(unsigned int *)((t2 + t1)) = t21;
                t1 = (t1 - 8);
                *(float *)((t2 + t1)) = u0;
                t22 = (((((((t20 << 1) + t20) << 2) << 2) << 2) + t3) + 0x24);
                t3 = 0x3;
                t1 = (FUN_0c056118(t2, t3, t22, 0x1));
            }
            t30 = t26;
            t31 = t27;
        } else {
            t30 = t2;
            t31 = t3;
        }
        t5 = (t5 + 0x4);
        t2 = t30;
        t3 = t31;
        t4 = (t4 + 0x4);
        if ((unsigned int)t5 >= (unsigned int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c0d9800(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t4;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;

    t0 = *(int *)0xC943EF4;
    t1 = *(int *)0xC943EA4;
    t2 = *(short *)0xC94827C;
    t7 = (t2 + t2);
    if ((int)t1 > (int)0x3) {
        t4 = ((t2 << 1) + t2);
        if ((int)t1 > (int)0x4) {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t7 = t4;
    }
    t9 = (int)((unsigned int)((int)((unsigned int)t7 + (unsigned int)0x0)) + ((((int)0x0 > (int)t7)) ? 1u : 0u));
    t11 = 0x1000;
    t12 = (t0 + 0xA5000000);
    t13 = t1;
    t14 = 0x0;
    t15 = (a4 + 0x1000);
    for (;;) {
        t16 = *(short *)0xC94827E;
        if ((int)t14 >= (int)t16) {
            break;
        }
        t13 = 0x0;
        if ((int)(t9 >> 1) > 0) {
            for (;;) {
                t11 = (*(short *)((t12 + 0x0)));
                t13 = (t13 + 0x5);
                t12 = (t12 + 0xA);
                *(unsigned short *)((t15 + 0x0)) = t11;
                t15 = (t15 + 0x2);
                if ((int)t13 >= (int)(t9 >> 1)) {
                    break;
                }
            }
        }
        t14 = (t14 + 0x5);
        t12 = (t12 + 0x1400);
    }
    return t16;
}

int FUN_0c02cbe0(int a4)
{
    int t63;
    int t43;
    int t46;
    int t49;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t57;
    int t53;

    t63 = 0x0;
    if (((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) == 4) && ((t2 = *(int *)((a4 + 0x49C)), t2 == 1) && ((t3 = *(int *)((a4 + 0x50C)), t3 != 0) && ((t4 = *(int *)((a4 + 0x4CC)), t4 != 1) && ((t5 = *(int *)((a4 + 0x4D0)), t5 != 1) && ((t6 = *(int *)((a4 + 0x54C)), (int)t6 > 0) && ((t7 = *(int *)((a4 + 0x4C8)), t7 != 2) && ((t8 = *(int *)((a4 + 0x304)), (int)t8 > 0) && ((t9 = *(int *)((a4 + 0x490)), (int)t9 > 0) && (t10 = *(int *)((a4 + 0x490)), t11 = *(int *)((((t10 << 2) + 0xC247030) + 0x0)), t11 != 0)))))))))) {
        t43 = *(int *)(((((*(int *)((a4 + 0x490))) << 2) + 0xC246FF0) + 0x0));
        if ((*(int *)((t43 + 0x4C4))) == 6) {
            t46 = FUN_0c035ad6(a4, (*(int *)((t43 + 0xCC))));
            if ((int)t46 < 0) {
                *(unsigned int *)((a4 + 0x494)) = 0x0;
                t53 = 0x0;
            } else {
                t49 = 0x0;
                if ((int)(*(int *)((a4 + 0x494))) > 0) {
                } else {
                    *(unsigned int *)((a4 + 0x494)) = 0x1;
                    *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                    t49 = 0x1;
                }
                t53 = t49;
            }
            t57 = t53;
        } else {
            *(unsigned int *)((a4 + 0x494)) = 0x0;
            t57 = 0x0;
        }
        t63 = t57;
    }
    return t63;
}

int FUN_0c02219e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t19;
    int t13;
    int t15;
    int t25;
    int t27;
    int t43;
    int t55;
    int t31;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t19 = t0;
                if (t0 != 3) {
                } else {
                    t13 = FUN_0c021d00();
                    t15 = t13;
                    if (t13 != 0) {
                        FUN_0c021a48();
                        *(unsigned int *)((a4 + 0x30)) = 0x1;
                        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFF;
                        t15 = 0x68;
                    }
                    t19 = t15;
                }
                t31 = t19;
            } else {
                FUN_0c021c64();
                *(unsigned int *)((a4 + 0x30)) = 0x3;
                t25 = FUN_0c021d00();
                t27 = t25;
                if (t25 != 0) {
                    FUN_0c021a48();
                    *(unsigned int *)((a4 + 0x30)) = 0x1;
                    *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFF;
                    t27 = 0x68;
                }
                t31 = t27;
            }
            return t31;
        }
        if ((*(int *)0xC246494) == 0) {
            t43 = *(int *)0xC23ED50;
            if ((*(int *)((a4 + 0x68))) != t43) {
                if ((*(int *)(((((t43 << 2) << 1) + (*(int *)((a4 + 0x50)))) + 0x4))) == (*(int *)((a4 + 0x68)))) {
                    *(unsigned int *)((a4 + 0x30)) = 0x2;
                    return 0x68;
                }
                *(unsigned int *)((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246324)) = (*(int *)0xC246310);
                *(unsigned int *)((a4 + 0x68)) = (*(int *)0xC23ED50);
                *(unsigned int *)(((0x6C + a4) + 0x0)) = (FUN_0c021d30(a4));
                FUN_0c021bac();
                return ((int (*)(int))(FUN_0c0220dc))(a4);
            }
            return ((int (*)(int, int, int, int))(FUN_0c0220dc))(a4, 0xC23ED50, a6, a7);
        }
        return t0;
    }
    t55 = FUN_0c0219ec();
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return t55;
}

float FUN_0c05477c(int a4, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t5;
    float u6;
    float u7;
    float u8;
    float t14;
    float u17;
    float u23;
    int stk[13];

    *(float *)(((int)stk + 4)) = f4;
    u0 = *(float *)0xC0548A8;
    u1 = *(float *)((a4 + 0x1D4));
    u2 = *(float *)0xC0548AC;
    u3 = (u1 * u0);
    if ((u1 * u0) > u2) {
        u3 = u2;
    }
    t5 = *(int *)((a4 + 0x1CC));
    u6 = *(float *)0xC0548B0;
    u7 = *(float *)0xC0548B4;
    u8 = ((float)t5 * u6);
    if (((float)t5 * u6) > u7) {
        u8 = u7;
    }
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x10) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x10) + 0x8)) = (u3 + u8);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(int *)((a4 + 0x1D8))) >> 1);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = (*(int *)((a4 + 0x1DC)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), (0x258 + a4));
    t14 = FUN_0c0da410((*(int *)((a4 + 0x1D8))));
    u17 = t14;
    if (0.0f > t14) {
        u17 = (*(float *)0xC0548C0);
    }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x3E8 + a4) + 0x0))));
    u23 = (*(float *)0xC0548C4);
    u23 = u23 + u3 * u17;
    *(float *)((a4 + 0x26C)) = (u23 * (*(float *)(((int)stk + 4))));
    return u3;
}

int FUN_0c07cf64(int a4, int a5, float f4, float f5, float f6)
{
    float u16;
    int t26;
    float u19;
    int t23;
    float u24;
    int t25;
    float u20;
    int t21;
    float u18;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 4)) = f6;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)0xC247CAC) + 0x2AC));
    FUN_0c0db470((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 24)) = (-(*(float *)(((int)stk + 24))));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 16))) / (((*(float *)0xC247D14) * f4) - ((*(float *)(((int)stk + 24))) * (*(float *)0xC247D0C))));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 20))) / (((*(float *)0xC247D18) * f4) - ((*(float *)(((int)stk + 24))) * (*(float *)0xC247D10))));
    *(float *)((a5 + 0x8)) = (*(float *)(((int)stk + 24)));
    u16 = *(float *)(((int)stk + 24));
    t26 = 0x0;
    if (!((*(float *)(((int)stk + 8))) > u16) && (u18 = *(float *)(((int)stk + 4)), !(u16 > u18))) {
        u19 = *(float *)((a5 + 0x0));
        t23 = 0x0;
        u24 = _builtin_fabsf(u19);
        t25 = 0;
        if (1.0f > _builtin_fabsf(u19)) {
            u20 = *(float *)((a5 + 0x4));
            t21 = 0x1;
            if (!(1.0f > _builtin_fabsf(u20))) {
                t21 = 0x0;
            }
            t23 = t21;
            u24 = _builtin_fabsf(u20);
            t25 = ((1.0f > _builtin_fabsf(u20)));
        } else {
            t25 = (0);
        }
        t26 = t23;
    }
    return t26;
}

int FUN_0c09ba10(int a4)
{
    int t1;
    int t3;
    int t5;
    int t6;
    int t14;
    int t15;

    t1 = FUN_0c0e19aa(0xC09B7D8, 0x188, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)0xC24970C = 0x1;
    *(unsigned int *)((t1 + 0x30)) = a4;
    t3 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x40)) = (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)));
    nlPushMatrix(0x0);
    t5 = 0x0;
    t6 = 0xC10C204;
    for (;;) {
        FUN_0c0dbda0((((((*(int *)((t6 + 0x0))) << 2) << 2) << 2) + (*(int *)((a4 + 0x3E4)))));
        FUN_0c0dcca0((t6 + 0x8));
        FUN_0c0dccf0();
        FUN_0c0db840(((((t5 << 1) + t5) << 2) + (t1 + 0x48)));
        t5 = (t5 + 0x1);
        t6 = (t6 + 0x14);
        if ((unsigned int)t5 >= (unsigned int)0x14) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t14 = 0x1B8;
    for (;;) {
        t15 = FUN_0c0cbafc(t14, 0x2, 0xFC007000, 0x84002000);
        t14 = (t14 + 0x1);
        if ((int)t14 >= (int)0x1D8) {
            break;
        }
    }
    return t15;
}

int FUN_0c0cc054(int a4, int a5)
{
    int t0;
    int t57;
    int t9;
    int t49;
    int t17;
    int t41;
    int t21;
    int t23;
    int t29;
    int t36;
    int t30;
    int t10;
    int t38;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)(((a4 << 2) + 0xC23EDE0));
    t57 = t0;
    if (t0 == 5) {
        t9 = *(int *)0xC23A180;
        t49 = t9;
        if ((t9 == 2) && (t10 = *(int *)0xC522D74, t10 != 0)) {
            t17 = *(int *)0xC23A1A8;
            t41 = 0x20000;
            if (((0x100 & t17) != 0) && ((((0x20000 & t17) == 0) && (a4 == 0)) || (((t17 & 0x40000) == 0) && (a4 != 0)))) {
            } else {
                if ((*(int *)(((a4 << 2) + 0xC24990C))) == 5) {
                    t21 = 0xB;
                    if (a4 == 0) {
                        t21 = 0x5;
                    }
                    t23 = *(int *)(((int)stk + 4));
                    *(unsigned char *)(((int)stk + 8)) = 0x1;
                    *(unsigned char *)(((int)stk + 9)) = (*(signed char *)((((t23 << 2) + 0xC20A714) + 0x0)));
                    *(unsigned char *)(((int)stk + 10)) = (*(signed char *)((((t23 << 2) + 0xC20A714) + 0x1)));
                    *(unsigned char *)(((int)stk + 11)) = (*(signed char *)((((t23 << 2) + 0xC20A714) + 0x2)));
                    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)((((t23 << 2) + 0xC20A714) + 0x3)));
                    t38 = (pdVibMxStart(t21, (((int)stk + 4) + 0x4)));
                } else {
                    t29 = FUN_0c0cc010((a4 + a4));
                    t36 = t29;
                    if (t29 != -1) {
                        t30 = *(int *)(((int)stk + 4));
                        *(unsigned char *)(((int)stk + 8)) = 0x1;
                        *(unsigned char *)(((int)stk + 9)) = (*(signed char *)((((t30 << 2) + 0xC20A714) + 0x0)));
                        *(unsigned char *)(((int)stk + 10)) = (*(signed char *)((((t30 << 2) + 0xC20A714) + 0x1)));
                        *(unsigned char *)(((int)stk + 11)) = (*(signed char *)((((t30 << 2) + 0xC20A714) + 0x2)));
                        *(unsigned char *)(((int)stk + 12)) = (*(signed char *)((((t30 << 2) + 0xC20A714) + 0x3)));
                        t36 = (pdVibMxStart(t29, (((int)stk + 4) + 0x4)));
                    }
                    t38 = t36;
                }
                t41 = t38;
            }
            t49 = t41;
        }
        t57 = t49;
    }
    return t57;
}

int FUN_0c0e36c4(int a4, int a5)
{
    int t6;
    int t16;
    int t17;
    int t18;
    int t1;
    int stk[9];

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    if (((int)(*(int *)(((int)stk + 28))) >= 0) && (t1 = *(int *)(((int)stk + 28)), (int)t1 < (int)0x8)) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 32)));
        *(unsigned int *)(((int)stk + 4)) = 0xC1EAB3C;
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 16))) >= (int)0x4) {
                t6 = *(int *)(((int)stk + 28));
                if ((*(int *)((0xC94C908 + (signed char)(((t6 << 1) + t6) << 2)))) != -1) {
                    return 0xFFFFFFFD;
                }
                *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x8)));
                *(unsigned int *)(((int)stk + 24)) = (*(int *)0xA0800088);
                if ((int)((*(int *)0xC94C820) + (*(int *)(((int)stk + 20)))) > (int)(*(int *)(((int)stk + 24)))) {
                    return 0xFFFFFFFC;
                }
                if ((*(int *)0xC94C828) != 0) {
                    return 0xFFFFFFFB;
                }
                return 0x0;
            }
            t16 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t16 + 0x1);
            t17 = *(signed char *)((((t16 + 0x1) - 1) + 0x0));
            t18 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
            if (t17 != (*(signed char *)((((t18 + 0x1) - 1) + 0x0)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c04e506(int a4, int a5)
{
    int t1;
    int t8;
    int t31;
    int t25;
    int t20;
    int t36;

    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
    t1 = *(int *)((a4 + 0x2EC));
    if ((t1 & 12) != 0) {
        FUN_0c049b80(a4);
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        t36 = 0x3AC;
    } else {
        t8 = *(int *)((a5 + 0x8));
        t31 = t1;
        if (((0x400 & t8) != 0) && ((0x202 & t8) == 0)) {
            t25 = 0x394;
            if ((int)(*(int *)((a4 + 0x394))) >= 0) {
                t20 = 0x3AC;
                if ((int)(*(int *)((a4 + 0x3AC))) < (int)0xFFFFFFCE) {
                    *(unsigned int *)((a4 + 0x20C)) = 0x40;
                    *(unsigned int *)((a4 + 0x210)) = 0x7C;
                    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((((*(int *)((a4 + 0xC0))) << 2) << 2) + 0xC0F82AA)));
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x2D4)) = 0x1;
                    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                    if ((int)(*(int *)((a4 + 0x394))) >= 0) {
                        *(unsigned int *)((a4 + 0x394)) = 0x1;
                    }
                    t20 = 0x394;
                }
                t25 = t20;
            }
            t31 = t25;
        }
        t36 = t31;
    }
    return t36;
}

float FUN_0c06db68(int a4, int a5)
{
    int t1;
    float u3;
    float u12;
    float t14;

    t1 = FUN_0c0e19aa(0xC06D9FC, 0x58, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    u3 = *(float *)0xC06DC78;
    *(float *)((t1 + 0x34)) = ((*(float *)((a4 + 0x30))) - ((FUN_0c0da410((*(short *)((a4 + 0x62))))) * u3));
    *(float *)((t1 + 0x38)) = (*(float *)((a4 + 0x34)));
    *(float *)((t1 + 0x3C)) = ((*(float *)((a4 + 0x38))) - ((FUN_0c0d9e90((*(short *)((a4 + 0x62))))) * u3));
    *(unsigned short *)((t1 + 0x4C)) = 0x0;
    *(unsigned short *)((t1 + 0x4E)) = ((*(short *)((a4 + 0x62))) - 32768);
    *(unsigned short *)((t1 + 0x50)) = (-a5);
    u12 = *(float *)0xC06DC84;
    *(float *)((t1 + 0x40)) = (((u3 / (FUN_0c0da410(a5))) / u12) * (1.0f + 1.0f));
    t14 = FUN_0c0d9e90(a5);
    *(float *)((t1 + 0x44)) = ((t14 * u3) / u12);
    *(float *)((t1 + 0x48)) = 0.0f;
    *(unsigned short *)((t1 + 0x52)) = 0x9C;
    return ((t14 * u3) / u12);
}

void FUN_0c06e9cc(int a4, int a5)
{
    int t1;
    int t4;
    int t8;
    int t15;
    int t12;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)(*(int *)(((int)stk + 8))) > 0) {
        t1 = a4;
        for (;;) {
            if ((*(short *)((t1 + 0x12))) == 0xE06) {
                t4 = FUN_0c0e19aa(0xC06E7AC, 0xB4, (*(int *)0xC23ECE4));
                FUN_0c0e19d0(t4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(t1); }
                FUN_0c0e6248();
                t12 = t4;
            } else {
                t8 = FUN_0c0e19aa(0xC06E87A, 0xB4, (*(int *)0xC23ECE4));
                FUN_0c0e19d0(t8);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)(t1); }
                FUN_0c0e6248();
                t12 = t8;
            }
            *(unsigned int *)(((0x78 + t12) + 0x0)) = (*(short *)((t1 + 0x12)));
            *(unsigned int *)((t12 + 0x80)) = 0x0;
            t15 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t15 + 0x1);
            t1 = (t1 + 0x18);
            if ((int)(t15 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
    }
}
