/* Straight-line functions with calls and guards (batch gen_jt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07e454(void);
int FUN_0c084a7c(void);
int FUN_0c084e08(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c075182(void);
int FUN_0c083c9e(int a4, int a5);
int FUN_0c0c252a(void);

int FUN_0c075182(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC07516E, 0x34, (*(int *)0xC23ECE4));
    *(unsigned int *)((t1 + 0x30)) = 0xFA5;
    return t1;
}

int FUN_0c083c9e(int a4, int a5)
{
    FUN_0c084a7c();
    return FUN_0c084e08(a5, 0x0);
}

int FUN_0c0c252a(void)
{
    return FUN_0c07e454();
}
