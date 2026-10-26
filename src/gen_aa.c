/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dc1a0(int);
int FUN_0c0dc510(int);
int FUN_0c0de6c0(void);
int FUN_0c0de700(void);
int FUN_0c0de850(int);
int FUN_0c0de8d0(void);
extern int _builtin_tas(char *);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int kmSetBorderColor(int, ...);
int mpdrv_dpf(int, ...);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int mpdrv_set_hreset_ns(int);
int FUN_0c0cf942(int a4, int a5, int a6, int a7);
void FUN_0c20d7d4(int a4);
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
float FUN_0c093ac8(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c0de1f0(int a4, float f4);
int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_getlerr(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0de230(int a4, float f4);
int FUN_0c01c214(int a4, int a5);
int FUN_0c22fa7e(int a4, int a5, int a6);
void FUN_0c231fb4(int a4, int a5, int a6);
int mpdrv_set_hreset(int a4);

int FUN_0c0cf942(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;

    t0 = a4;
    t1 = a5;
    t2 = a7;
    t3 = (((0x5 - a6) << 1) + 0xC20BCF8);
    t4 = a6;
    for (;;) {
        t5 = *(short *)((t3 + 0x0));
        t3 = (t3 + 0x2);
        t6 = 0x0;
        for (;;) {
            t1 = (t1 - (unsigned short)t5);
            if ((int)t1 < 0) {
                break;
            }
            t6 = (t6 + 0x1);
        }
        t1 = (t1 + (unsigned short)t5);
        if ((t6 == 0) && (t2 == 0)) {
            if (t4 == 1) {
                t2 = 0x1;
                *(unsigned char *)((t0 + 0x0)) = (t6 + 0x30);
                t0 = (t0 + 0x1);
            }
            t9 = t4;
        } else {
            t2 = 0x1;
            *(unsigned char *)((t0 + 0x0)) = (t6 + 0x30);
            t0 = (t0 + 0x1);
            t9 = (unsigned short)t5;
        }
        t4 = (t4 - 0x1);
        if (t4 == 0) {
            break;
        }
    }
    return t9;
}

void FUN_0c20d7d4(int a4)
{
    int stk[3];

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    kmSetBorderColor(((*(int *)((((int)stk + 8) + 0x0)))));
                    for (;;) {
                    }
                }
                *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF00FF;
                kmSetBorderColor(((*(int *)((((int)stk + 8) + 0x0)))));
                for (;;) {
                }
            }
            *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF00FF00;
            kmSetBorderColor(((*(int *)((((int)stk + 8) + 0x0)))));
            for (;;) {
            }
        }
        *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF0000;
        kmSetBorderColor(((*(int *)((((int)stk + 8) + 0x0)))));
        for (;;) {
        }
    }
    *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF0000FF;
    kmSetBorderColor(((*(int *)((((int)stk + 8) + 0x0)))));
    for (;;) {
    }
}

int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

float FUN_0c093ac8(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u0;
    int t1;
    int t2;
    int t3;
    float u5;

    u0 = (1.0f - (((f5 * f5) - ((f5 - f6) * (f5 - f6))) / (f5 * f5)));
    t1 = a4;
    t2 = a5;
    t3 = a6;
    for (;;) {
        t2 = (t2 - 4);
        t3 = (t3 - 0x1);
        u5 = (f4 * u0);
        u5 = u5 + (((f5 * f5) - ((f5 - f6) * (f5 - f6))) / (f5 * f5)) * (float)(*(int *)((t2 + 0x0)));
        *(unsigned int *)(((t1 - 0x4) + 0x0)) = (int)u5;
        t1 = (t1 - 0x4);
        if (t3 == 0) {
            break;
        }
    }
    return (((f5 * f5) - ((f5 - f6) * (f5 - f6))) / (f5 * f5));
}

int FUN_0c0de1f0(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        FUN_0c0de6c0();
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dc1a0(0xC948580);
    return FUN_0c0de850(a4);
}

int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getlerr(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c0de230(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        FUN_0c0de700();
    }
    FUN_0c0de8d0();
    return FUN_0c0de850(a4);
}

int FUN_0c01c214(int a4, int a5)
{
    int t0;
    int t1;

    t0 = (a4 & 0xFFFFFFE0);
    t1 = ((unsigned int)((unsigned int)((unsigned int)a5 >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t0);
        t0 = (t0 + 0x20);
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c22fa7e(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
    return t3;
}

void FUN_0c231fb4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

int mpdrv_set_hreset(int a4)
{
    return mpdrv_set_hreset_ns(a4);
}
