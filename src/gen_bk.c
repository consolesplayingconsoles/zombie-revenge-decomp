/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
extern int nlGetMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int _quick_odd_mvn(int, float, float, float);
int mwRnaErrCallFunc(int, int, int, int);
int FUN_0c08c170(int a4, int a5, int a6, int a7);
void FUN_0c0a5754(int a4, int a5, int a6, int a7);
int FUN_0c086fe0(int a4, int a5, int a6, int a7);
void FUN_0c0a9edc(int a4, int a5, int a6, int a7);
int FUN_0c0c64cc(int a4, int a5, int a6, int a7);
int mwRnaGetAutoSw(int a4, int a5, int a6, int a7);
int mwRnaGetPlaySw(int a4, int a5, int a6, int a7);
int FUN_0c0de160(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int mwRnaGetTransSw(int a4, int a5, int a6, int a7);
int FUN_0c0ce5b2(Stk3 s);
int mwRnaGetNumRoom(int a4, int a5, int a6, int a7);
int FUN_0c0ab374(int a4, int a5, int a6, int a7);
int FUN_0c0de310(float f4, float f5, float f6);
int FUN_0c22c716(int a4, int a5, int a6, int a7);
int mwRnaGetNumData(int a4, int a5, int a6, int a7);
int FUN_0c0d9e90(int a4);
void FUN_0c22c8bc(int a4, int a5, int a6, int a7);

int FUN_0c08c170(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;

    t0 = *(short *)((a4 + 0x9E));
    *(unsigned short *)((a4 + 0x9E)) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)(*(short *)((a4 + 0x9C)))) {
        *(unsigned short *)((a4 + 0x9E)) = 0x0;
        *(unsigned short *)((a4 + 0x9A)) = ((*(short *)((a4 + 0x9A))) + 0x1);
        t3 = *(short *)((a4 + 0xA0));
        *(unsigned short *)((a4 + 0xA0)) = (t3 - 1);
        if ((int)(short)(t3 - 1) <= 0) {
            return FUN_0c0e19f2(a4, a5, a6, a7);
        }
        return 0xA0;
    }
    return 0x9C;
}

void FUN_0c0a5754(int a4, int a5, int a6, int a7)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 0) {
        FUN_0c0cc3f8(0x828A9, a5, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        FUN_0c05b274((*(int *)(((int)stk + 8))), 0x0, 0x0, 0x0, (unsigned short)(*(short *)(((*(int *)(((int)stk + 12))) + 0x4))));
    }
}

int FUN_0c086fe0(int a4, int a5, int a6, int a7)
{
    int stk[4];

    FUN_0c0cc3f8(0x730A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0e2a4c((*(int *)((a4 + 0x3C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((a4 + 0x40))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((a4 + 0x44))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((a4 + 0x48))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    return (FUN_0c0e2a4c((*(int *)((a4 + 0x4C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
}

void FUN_0c0a9edc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;
    int stk[4];

    t0 = 0x0;
    t1 = a5;
    for (;;) {
        if ((int)(*(int *)((t1 + 0x0))) < 0) {
            return;
        }
        t4 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t0 = (t0 + t4);
        if (a4 == t0) {
            break;
        }
        if ((int)a4 >= (int)t0) {
            t1 = (t1 + 0x4);
            continue;
        }
        return;
    }
    FUN_0c0cc3f8((*(int *)((t1 + 0x0))), t0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
}

int FUN_0c0c64cc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;

    t0 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t6 = *(int *)0xC23A258;
    if ((t6 & 1) != 0) {
        return FUN_0c0c0340(0xC1E9670);
    }
    return t6;
}

int mwRnaGetAutoSw(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (((0x4 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1) >> 1);
}

int mwRnaGetPlaySw(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int FUN_0c0de160(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t2;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlGetMatrix8))(0xC94C640, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0xC9485C0);
    t2 = ((int (*)(int))(nlGetMatrix8))(0xC948580);
    return nlLoadMatrix8(0xC94C640);
}

int mwRnaGetTransSw(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (0x1 & (unsigned char)(*(signed char *)((a4 + 0x1))));
}

int FUN_0c0ce5b2(Stk3 s)
{
    int stk[15];

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    FUN_0c0db0a0((*(int *)(((((int)stk + 8) + 0x8) + 0x0))), (*(int *)(((((int)stk + 8) + 0x8) + 0x4))));
    return (nlPrintf(((*(int *)(((((int)stk + 8) + 0x8) + 0x8))))));
}

int mwRnaGetNumRoom(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x30))) - (*(int *)((a4 + 0x3C))));
}

int FUN_0c0ab374(int a4, int a5, int a6, int a7)
{
    int stk[3];

    FUN_0c0cc3f8(0xD1FA9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc3f8(0x62AA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return (FUN_0c0cc3f8(0x82AA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}


int FUN_0c22c716(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int mwRnaGetNumData(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x3C)));
}

int FUN_0c0d9e90(int a4)
{
    int t1;

    t1 = (unsigned short)a4;
    if ((int)(unsigned short)a4 > (int)0x8000) {
        t1 = (0x10000 - (unsigned short)a4);
    }
    return FUN_0c0da410((0x4000 - t1));
}

void FUN_0c22c8bc(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
    return;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
}
