/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0845f8(int, int);
int FUN_0c0a80e2(int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e40ec(int, int, int);
int _quick_odd_mvn(int);
int FUN_0c0c0fb8(int a4);
int FUN_0c0c105a(int a4);
int FUN_0c0c0fee(int a4);
int FUN_0c0c1024(int a4);
int FUN_0c0afe10(int a4);
int FUN_0c0cc9ba(int a4);
int FUN_0c08e9e0(int a4);
int FUN_0c0cc832(void);
int FUN_0c07a3d6(int a4);
int FUN_0c068382(int a4);
void FUN_0c08214c(int a4);
int FUN_0c068508(int a4);
int FUN_0c0a440e(int a4);

int FUN_0c0c0fb8(int a4)
{
    int t5;
    int t6;

    FUN_0c0db0a0((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x38))));
    t5 = nlPrintf(0xC1E3A20, ((*(int *)((a4 + 0x40)))));
    t6 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t6 - 1);
    if ((int)(t6 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t5;
}

int FUN_0c0c105a(int a4)
{
    int t3;
    int t4;

    FUN_0c0db0a0((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x38))));
    t3 = nlPrintf(0xC1E3A2C, (0x44 + a4));
    t4 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t4 - 1);
    if ((int)(t4 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t3;
}

int FUN_0c0c0fee(int a4)
{
    int t4;
    int t5;

    FUN_0c0db0a0((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x38))));
    t4 = nlPrintf(0xC1E3A24, (*(float *)((a4 + 0x3C))));
    t5 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t5 - 1);
    if ((int)(t5 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t4;
}

int FUN_0c0c1024(int a4)
{
    int t5;
    int t6;

    FUN_0c0db0a0((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x38))));
    t5 = nlPrintf(0xC1E3A28, ((*(int *)((a4 + 0x40)))));
    t6 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t6 - 1);
    if ((int)(t6 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t5;
}

int FUN_0c0afe10(int a4)
{
    int t1;
    int t2;

    t1 = FUN_0c0a80e2(0xC1107C0, (*(int *)((a4 + 0x30))), 0xC247EA8);
    t2 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t2 + 0x888);
    if ((unsigned int)(t2 + 0x888) >= (unsigned int)0x40000) {
        return FUN_0c0e19f2();
    }
    return t1;
}

int FUN_0c0cc9ba(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0CC9EA, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    return FUN_0c0cc3f8(0x234A9);
}

int FUN_0c08e9e0(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08EA54, 0x3C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC08E9D8;
    *(unsigned int *)((t1 + 0x38)) = a4;
    return FUN_0c0cc3f8(0x328A9);
}

int FUN_0c0cc832(void)
{
    int t0;

    t0 = 0x2;
    for (;;) {
        FUN_0c0e40ec(t0, 0x2A0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return FUN_0c0cc3f8(0x928A9);
}

int FUN_0c07a3d6(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07A460, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x8C)) = a4;
    return FUN_0c0cc3f8(0x328A9);
}

int FUN_0c068382(int a4)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 6) != 0) {
        FUN_0c0845f8((*(int *)((a4 + 0x78))), 0x0);
        return FUN_0c0e19f2();
    }
    return t0;
}


int FUN_0c068508(int a4)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 6) != 0) {
        FUN_0c0845f8((*(int *)((a4 + 0x78))), 0x0);
        return FUN_0c0e19f2();
    }
    return t0;
}

int FUN_0c0a440e(int a4)
{
    *(unsigned int *)(((FUN_0c0e19aa(0xC0A4432, 0x80, (*(int *)0xC23ECF0))) + 0x38)) = (*(int *)((a4 + 0xBC)));
    return FUN_0c0cc3f8(0xA7);
}
