/* Straight-line functions with calls and guards (batch gen_jr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c02a19a(int);
int FUN_0c03d588(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c05808a(void);
int FUN_0c088ec4(int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0e19f2(void);
void FUN_0c057f7e(void);
int FUN_0c027760(int a4);
int FUN_0c028f26(int a4);
int FUN_0c048dba(int a4);
int FUN_0c03e178(int a4);
int FUN_0c0116be(void);

void FUN_0c057f7e(void)
{
    if (((*(int *)0xC23ED5C) & 0x10000) != 0) {
        FUN_0c05808a();
        FUN_0c0e19f2();
    return;
    }
}

int FUN_0c027760(int a4)
{
    FUN_0c02a19a(a4);
    return FUN_0c02286c(a4, 0x28, 0.0f, 0.0749999955f);
}

int FUN_0c028f26(int a4)
{
    FUN_0c02a19a(a4);
    return FUN_0c02286c(a4, 0x28, 0.0f, (*(float *)0xC028FAC));
}

int FUN_0c048dba(int a4)
{
    FUN_0c02a19a(a4);
    return FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048E20));
}

int FUN_0c03e178(int a4)
{
    int stk[3];

    *(int *)((int)stk + 4) = a4;
    FUN_0c088ec4(a4, 0xB4);
    FUN_0c03d588(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return FUN_0c0cc3f8(0x132A9);
}

int FUN_0c0116be(void)
{
    *(unsigned int *)0xC23ED98 = 0x0;
    FUN_0c010c40((*(int *)0xC23EABC));
    return FUN_0c0cc3f8(0x1);
}
