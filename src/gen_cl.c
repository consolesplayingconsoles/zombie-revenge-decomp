/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c084bf6(int, int);
int FUN_0c0b464a(float, float);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
float FUN_0c0dd050(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e486e(int, int);
int FUN_0c0e4ca0(int);
int FUN_0c0e4e88(int);
int FUN_0c22b994(int, int);
int FUN_0c22ba6e(int, int, int, int);
int FUN_0c233528(int, int);
int FUN_0c2335c8(int, int, int);
int FUN_0c23363e(int, int, int);
int FUN_0c233692(int, int, int);
int FUN_0c23370e(int, int);
int FUN_0c233730(int, int, int);
int FUN_0c23379c(int, int);
int FUN_0c2337e6(int, int);
int memset(int, int, int);
int FUN_0c23327e(int a4, int a5, int a6);
int FUN_0c22b736(int a4, int a5, int a6, int a7);
float FUN_0c090110(int a4, float f4);
int FUN_0c0b4238(int a4);

int FUN_0c23327e(int a4, int a5, int a6)
{
    int t28;

    if ((*(signed char *)((a4 + 0x1))) == 0) {
        FUN_0c0e4e88((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))));
        FUN_0c23379c(a4, a6);
        FUN_0c2337e6(a4, a5);
        FUN_0c23370e(a4, (*(int *)((a4 + 0x8))));
        FUN_0c233528(a4, (*(int *)((a4 + 0x30))));
        FUN_0c23363e(a4, 0x0, (*(int *)((a4 + 0x34))));
        FUN_0c23363e(a4, 0x1, (*(int *)((a4 + 0x38))));
        FUN_0c2335c8(a4, (*(int *)((a4 + 0x3C))), (*(int *)((a4 + 0x40))));
        FUN_0c233692(a4, (*(short *)((a4 + 0x44))), (*(short *)((a4 + 0x46))));
        FUN_0c233730(a4, (*(short *)((a4 + 0x48))), (*(short *)((a4 + 0x4A))));
    }
    t28 = 0x2710;
    for (;;) {
        t28 = (t28 - 0x1);
        if (t28 == 0) {
            break;
        }
    }
    FUN_0c0e486e((*(short *)((a4 + 0x2))), (*(int *)(((*(int *)((a4 + 0x10))) + 0x4))));
    FUN_0c0e4ca0((*(short *)((a4 + 0x2))));
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    return 0x0;
}

int FUN_0c22b736(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    int t11;
    int t19;
    int t20;
    int t21;
    int t6;
    int t15;
    int t16;

    t0 = 0xC95F6B0;
    t1 = 0xC95F6B0;
    t2 = 0xC95F6B0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 1) {
            t0 = t1;
            FUN_0c22ba6e(t0, a5, a6, a7);
        } else {
            t6 = t0;
        }
        t2 = (t2 + 0x9C);
        t0 = t6;
        t1 = (t1 + 0x9C);
        if ((unsigned int)t2 >= (unsigned int)0xC95FB90) {
            break;
        }
    }
    t8 = 0xC95F6B0;
    t9 = 0xC95F6B0;
    t10 = 0xC95F6B0;
    t11 = 0xC95F6B0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t11 + 0x0))) == 1) {
            t8 = t10;
            FUN_0c22b994(t8, t9);
        } else {
            t15 = t8;
            t16 = t9;
        }
        t11 = (t11 + 0x9C);
        t8 = t15;
        t9 = t16;
        t10 = (t10 + 0x9C);
        if ((unsigned int)t11 >= (unsigned int)0xC95FB90) {
            break;
        }
    }
    memset(0xC95F6B0, 0x0, 0x4E0);
    t19 = memset(0xC95FB90, 0x0, 0x820);
    t20 = 0x0;
    t21 = 0xC9603B0;
    for (;;) {
        t20 = (t20 + 0x1);
        *(unsigned int *)((t21 + 0x0)) = 0x80808080;
        t21 = (t21 + 0x4);
        if ((int)t20 >= (int)0x200) {
            break;
        }
    }
    return t19;
}

float FUN_0c090110(int a4, float f4)
{
    int t4;
    int t9;
    float t14;
    float u31;
    float u22;

    if (((*(int *)((a4 + 0xC8))) & 0x1FC) != 0) {
        if ((*(int *)((a4 + 0x510))) != -1) {
            t4 = FUN_0c0e19aa(0xC08FF08, 0x68, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t4);
            *(unsigned int *)((t4 + 0x30)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)((t4 + 0x34)) = (*(int *)((a4 + 0x498)));
            t9 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
            *(float *)((t4 + 0x50)) = ((*(float *)((t9 + 0x30))) - (*(float *)((a4 + 0x30))));
            *(float *)((t4 + 0x58)) = ((*(float *)((t9 + 0x38))) - (*(float *)((a4 + 0x38))));
            *(float *)((t4 + 0x54)) = 0.0f;
            t14 = FUN_0c0dd050((t4 + 0x50));
            *(float *)((t4 + 0x64)) = t14;
            if ((*(float *)((t4 + 0x64))) > 50.0f) {
                *(float *)((t4 + 0x64)) = 50.0f;
            }
            u22 = t14;
        }
        u31 = u22;
    }
    return u31;
}

int FUN_0c0b4238(int a4)
{
    int t0;
    int t3;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c084bf6(0x1C, 0x0);
        *(unsigned int *)((a4 + 0x50)) = 0x1E;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        return 0x50;
    }
    t3 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t3 - 1);
    if ((int)(t3 - 1) <= 0) {
        *(volatile int *)((a4 + 0x50));
    }
    t9 = *(int *)0xC23A258;
    if ((t9 & 127) == 0) {
        t10 = FUN_0c0da2e0();
        t11 = FUN_0c0da2e0();
        FUN_0c0b464a(((float)(t10 & 0x1F) + 194.0f), ((float)(t11 & 0xF) + 98.0f));
        return FUN_0c0cc3f8(0x528A9);
    }
    return t9;
}
