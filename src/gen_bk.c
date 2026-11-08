/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
extern int nlGetMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int FUN_0c0e19f2(void);
int FUN_0c0e2a4c(int);
int _quick_odd_mvn(int, float, float, float);
int mwRnaErrCallFunc(int);
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
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o9A_short { char p[0x9A]; short v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9E_short { char p[0x9E]; short v; };
struct o9E_ushort { char p[0x9E]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };


int FUN_0c08c170(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;

    t0 = (((struct o9E_short *)(a4))->v);
    (((struct o9E_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)((((struct o9C_short *)(a4))->v))) {
        (((struct o9E_ushort *)(a4))->v) = 0x0;
        (((struct o9A_ushort *)(a4))->v) = (((((struct o9A_short *)(a4))->v)) + 0x1);
        t3 = (((struct oA0_short *)(a4))->v);
        (((struct oA0_ushort *)(a4))->v) = (t3 - 1);
        if ((int)(short)(t3 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    return 0x9C;
}

void FUN_0c0a5754(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int R1008;
    int R1012;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a4;
    R1012 = a5;
    if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 0) {
        FUN_0c0cc3f8(0x828A9, a5, a6, a7);
        FUN_0c05b274((R1008), 0x0, 0x0, 0x0, (unsigned short)(*(short *)(((R1012) + 0x4))));
    }
}

int FUN_0c086fe0(int a4, int a5, int a6, int a7)
{

    FUN_0c0cc3f8(0x730A9, a5, a6, a7);
    FUN_0c0e2a4c((*(int *)((a4 + 0x3C))));
    FUN_0c0e2a4c(((((struct o40_int *)(a4))->v)));
    FUN_0c0e2a4c(((((struct o44_int *)(a4))->v)));
    FUN_0c0e2a4c(((((struct o48_int *)(a4))->v)));
    return (FUN_0c0e2a4c(((((struct o4C_int *)(a4))->v))));
}

void FUN_0c0a9edc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;

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
    FUN_0c0cc3f8((*(int *)((t1 + 0x0))), t0, a6, a7);
}

int FUN_0c0c64cc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;

    t0 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
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
        mwRnaErrCallFunc(0xC237EE0);
        return 0xFFFFFFFF;
    }
    return (((0x4 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1) >> 1);
}

int mwRnaGetPlaySw(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0);
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
        mwRnaErrCallFunc(0xC237EE0);
        return 0xFFFFFFFF;
    }
    return (0x1 & (unsigned char)(*(signed char *)((a4 + 0x1))));
}

int FUN_0c0ce5b2(Stk3 s)
{

    FUN_0c0db0a0((*(int *)(((int)&s + 0))), (*(int *)(((int)&s + 4))));
    return (nlPrintf(((*(int *)(((int)&s + 8))))));
}

int mwRnaGetNumRoom(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x30))) - (*(int *)((a4 + 0x3C))));
}

int FUN_0c0ab374(int a4, int a5, int a6, int a7)
{

    FUN_0c0cc3f8(0xD1FA9, a5, a6, a7);
    FUN_0c0cc3f8(0x62AA9, 0x0, 0x0, 0x0);
    return (FUN_0c0cc3f8(0x82AA9, 0x0, 0x0, 0x0));
}


int FUN_0c22c716(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int mwRnaGetNumData(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0xC237EE0);
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
        mwRnaErrCallFunc(0xC237EE0);
    return;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
}
