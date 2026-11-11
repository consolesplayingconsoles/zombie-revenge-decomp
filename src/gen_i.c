/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c011cfc(int);
int FUN_0c052064(int);
int FUN_0c0685a4(int);
int FUN_0c06b060(int);
int FUN_0c082b76(int);
int FUN_0c084458(void);
int FUN_0c085534(void);
int FUN_0c0855f4(int);
int FUN_0c0be88a(int, int);
int FUN_0c0c0340(int, float);
int FUN_0c0c2764(int);
int FUN_0c0c27a0(int);
int FUN_0c0c465c(int);
int FUN_0c0c5a4c(int);
int FUN_0c0c7970(int, int);
int FUN_0c0c82f2(int, int, int, int);
int FUN_0c0cc3cc(int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0cc6dc(void);
int FUN_0c0d61be(void);
int FUN_0c0d80d0(int, int);
int paletteUpload(void);
int FUN_0c0db840(int);
int nlUnitMatrix(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e40ec(int, int, int);
int buSetCompleteCallback(int);
int buSetProgressCallback(int);
int buStat(int);
int thunk_FUN_0c016d20(int, int, int);
int FUN_0c0d6c52(int a4);
void FUN_0c0b771e(void);
int FUN_0c0c82dc(int a4, int a5, int a6, int a7);
int FUN_0c0ce486(void);
int FUN_0c0cead0(int a4);
int FUN_0c0d8130(int a4, int a5, int a6);
int FUN_0c07516e(int a4);
int FUN_0c0b70a0(int a4);
int FUN_0c0b78d6(void);
int FUN_0c0b7a02(void);
int FUN_0c0b8156(void);
int FUN_0c0b9b7a(void);
int FUN_0c0c6496(float f4);
int FUN_0c0c7aa4(int a4, int a5);
int FUN_0c0ce770(int a4);
int FUN_0c0b4f72(void);
int FUN_0c0b5332(void);
int FUN_0c0b59f6(void);
int FUN_0c0b9efe(void);
int FUN_0c0c7ea0(void);
int FUN_0c0cea58(void);
int FUN_0c0ceae6(int a4);
int FUN_0c06b1b2(int a4);
int FUN_0c0b60aa(void);
int FUN_0c0b65ca(void);
int FUN_0c0b68ce(void);
void FUN_0c0bd6f8(void);
int FUN_0c0c49b0(int a4);
int FUN_0c0ce87e(void);
int FUN_0c0b26a2(int a4);
int FUN_0c0b8624(void);
int FUN_0c0c281c(int a4);
int FUN_0c0cedc8(void);
int FUN_0c0cfaf2(int a4);
int FUN_0c0cfb00(int a4);
int FUN_0c0d1854(int a4);
int FUN_0c0d1862(int a4);
int FUN_0c0bc744(int a4);
void FUN_0c0cf386(void);
int FUN_0c0c7ef8(void);
void FUN_0c0d063e(void);
void FUN_0c0d267a(void);
int FUN_0c0b5d54(float f4);
int FUN_0c0c7e46(void);
int FUN_0c0c7ef0(void);
int FUN_0c0cc008(int a4);
void FUN_0c0cee62(void);
int thunk_FUN_0c0d61be(void);
void FUN_0c0d80c0(int a4);
int thunk_FUN_0c011cfc(int);
void FUN_0c0c1480(void);
void FUN_0c0c4654(void);
void FUN_0c0cbaf8(void);
int FUN_0c0cc3c8(void);
struct o170_uint { char p[0x170]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };



int FUN_0c0d6c52(int a4)
{
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o170_uint *)(a4))->v) = 0x0;
    *(unsigned int *)(((0x170 + a4) + 0x24)) = 0x0;
    *(unsigned int *)(((0x170 + a4) + 0x28)) = 0x0;
    *(unsigned int *)(((0x170 + a4) + 0x2C)) = 0x0;
    return 0x64;
}

void FUN_0c0b771e(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    t1 = 0xC24FB34;
    for (;;) {
        t2 = (t0 == 0);
        t0 = (t0 + 0x1);
        if (t2) {
            break;
        }
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
    }
}

int FUN_0c0c82dc(int a4, int a5, int a6, int a7)
{
    return FUN_0c0c82f2(a4, a5, a6, a7);
}

int FUN_0c0ce486(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC5229FC;
    if (t0 != 1) {
        t1 = *(int *)0xC522A48;
        return ((int (*)(int))(t1))(0xC23F1AC);
    }
    return t0;
}

int FUN_0c0cead0(int a4)
{
    return ((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C);
}

int FUN_0c0d8130(int a4, int a5, int a6)
{
    return FUN_0c0d80d0(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}

int FUN_0c07516e(int a4)
{
    FUN_0c0685a4(a4);
    return FUN_0c0c465c((*(int *)((a4 + 0x30))));
}

int FUN_0c0b70a0(int a4)
{
    *(unsigned short *)((((a4 << 2) + 0xC24FB2C) + 0x0)) = 0x0;
    *(unsigned short *)((((a4 << 2) + 0xC24FB2C) + 0x2)) = 0x0;
    return 0x0;
}

int FUN_0c0b78d6(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B78EA, 0xB4);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b7a02(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B7A16, 0xB0);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b8156(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B81AC, 0xB4);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b9b7a(void)
{
    int t0;

    t0 = FUN_0c0cc6dc();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t0;
}

int FUN_0c0c6496(float f4)
{
    int t0;

    t0 = *(int *)0xC23A258;
    if ((t0 & 1) != 0) {
        return FUN_0c0c0340(0xC1E9638, f4);
    }
    return t0;
}

int FUN_0c0c7aa4(int a4, int a5)
{
    if (((int)a5 >= (int)0x4) && ((int)a5 < (int)0xC)) {
        return FUN_0c0c7970(a4, a5);
    }
    return 0xFFFFFFFF;
}

int FUN_0c0ce770(int a4)
{
    *(unsigned int *)(((a4 << 2) + 0xC522E40)) = (*(int *)0xC522E38);
    *(unsigned char *)((a4 + 0xC522E48)) = 0x1;
    return 0xC522E48;
}

int FUN_0c0b4f72(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B4F84, 0x68);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b5332(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B5344, 0x68);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b59f6(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B5A08, 0x68);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b9efe(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B9F10, 0x68);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0c7ea0(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C7E4E, 0x38);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0cea58(void)
{
    buSetCompleteCallback(0xC0CE924);
    return buSetProgressCallback(0xC0CEA10);
}

int FUN_0c0ceae6(int a4)
{
    int t0;

    t0 = buStat(a4);
    return (((t0 == 0)) ? 1 : 0);
}

int FUN_0c06b1b2(int a4)
{
    FUN_0c0685a4(a4);
    return FUN_0c06b060(a4);
}

int FUN_0c0b60aa(void)
{
    FUN_0c085534();
    return FUN_0c052064(0x0);
}

int FUN_0c0b65ca(void)
{
    nlUnitMatrix();
    return FUN_0c082b76(0x0);
}

int FUN_0c0b68ce(void)
{
    FUN_0c085534();
    return FUN_0c052064(0x0);
}

void FUN_0c0bd6f8(void)
{
    int t0;
    int t1;

    t0 = 0xC260A34;
    t1 = 0x72;
    for (;;) {
        t1 = (t1 - 0x1);
        *(unsigned int *)(((t0 - 0x4) + 0x0)) = 0x0;
        t0 = (t0 - 0x4);
        if (t1 == 0) {
            break;
        }
    }
}

int FUN_0c0c49b0(int a4)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = a4;
    return FUN_0c0be88a((unsigned short)(*(short *)(((int)stk + 0))), 0xC1E5188);
}

int FUN_0c0ce87e(void)
{
    (((struct o4_uint *)0xC522E38)->v) = ((((struct o0_int *)0xC522E38)->v));
    (((struct o12_uchar *)0xC522E38)->v) = 0x1;
    return 0xC522E38;
}

int FUN_0c0b26a2(int a4)
{
    FUN_0c0855f4(a4);
    return FUN_0c0e19f2();
}

int FUN_0c0b8624(void)
{
    int t1;

    t1 = *(int *)((((*(int *)0xC23A18C) << 2) + 0xC204650));
    return ((int (*)(void))(t1))();
}

int FUN_0c0c281c(int a4)
{
    FUN_0c0c2764(a4);
    return FUN_0c0c27a0(a4);
}

int FUN_0c0cedc8(void)
{
    paletteUpload();
    return FUN_0c084458();
}

int FUN_0c0cfaf2(int a4)
{
    return thunk_FUN_0c016d20(0xC23ED04, a4, 0xC20BAC8);
}

int FUN_0c0cfb00(int a4)
{
    return thunk_FUN_0c016d20(0xC23ED24, a4, 0xC20BAC8);
}

int FUN_0c0d1854(int a4)
{
    return thunk_FUN_0c016d20(0xC23ED04, a4, 0xC20C380);
}

int FUN_0c0d1862(int a4)
{
    return thunk_FUN_0c016d20(0xC23ED24, a4, 0xC20C380);
}

int FUN_0c0bc744(int a4)
{
    return FUN_0c0db840((a4 + 0x22C));
}

void FUN_0c0cf386(void)
{
    (((struct o0_uint *)0xC94315C)->v) = 0x0;
    (((struct o4_uint *)0xC94315C)->v) = 0x0;
}

int FUN_0c0c7ef8(void)
{
    return FUN_0c0e40ec(0x0, 0x100A0, 0x0);
}

void FUN_0c0d063e(void)
{
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
}

void FUN_0c0d267a(void)
{
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
}

int FUN_0c0b5d54(float f4)
{
    return FUN_0c0c0340(0xC2041F4, f4);
}

int FUN_0c0c7e46(void)
{
    return FUN_0c0c5a4c(0xC1E8940);
}

int FUN_0c0c7ef0(void)
{
    return FUN_0c0cc3f8(0xA1FA9);
}

int FUN_0c0cc008(int a4)
{
    return (unsigned char)(*(signed char *)((a4 + 0xC20A790)));
}

void FUN_0c0cee62(void)
{
    *(unsigned int *)0xC943164 = 0x0;
}

int thunk_FUN_0c0d61be(void)
{
    return FUN_0c0d61be();
}

void FUN_0c0d80c0(int a4)
{
    *(unsigned int *)0xC948270 = a4;
}

int thunk_FUN_0c011cfc(int a4)
{
    return FUN_0c011cfc(a4);
}

void FUN_0c0c1480(void)
{
    
}

void FUN_0c0c4654(void)
{
    
}

void FUN_0c0cbaf8(void)
{
    
}

int FUN_0c0cc3c8(void)
{
    return FUN_0c0cc3cc(0x12F, 0x0);
}
