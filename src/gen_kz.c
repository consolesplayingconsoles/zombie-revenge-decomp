/* Straight-line functions with calls and guards (batch gen_kz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c0be338();
int FUN_0c0db470(int, int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
float nlLength(int, int);
int FUN_0c0be054(int a4, int a5, int a6, int a7);

int FUN_0c0be054(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t0;
    register int t2;
    register float u3;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register float t13;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = ((int (*)(int, int, int, int))(FUN_0c0be338))(a4, (((int)stk + 4) + 0x18), a6, a7);
    t2 = ((int (*)(int, int))(FUN_0c0be338))((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x10));
    u3 = *(float *)0xC0BE228;
    t6 = (*(int *)(((int)stk + 32)));
    t7 = (*(int *)(((int)stk + 28)));
    for (;;) {
        t10 = (*(int *)(((int)stk + 24)));
        t11 = (*(int *)(((int)stk + 20)));
        for (;;) {
            FUN_0c0db470((t11 + 0x4), (((int)stk + 4) + 0x4));
            t13 = nlLength((t7 + 0x4), (((int)stk + 4) + 0x4));
            if (!(t13 > u3)) {
                t14 = *(int *)((t11 + 0x0));
                *(float *)((t14 + 0xC)) = (*(float *)((t7 + 0x10)));
                *(float *)((t14 + 0x10)) = (*(float *)((t7 + 0x14)));
                *(float *)((t14 + 0x14)) = (*(float *)((t7 + 0x18)));
            }
            t10 = (t10 - 0x1);
            t11 = (t11 + 0x24);
            if (t10 == 0) {
                break;
            }
        }
        t6 = (t6 - 0x1);
        t7 = (t7 + 0x24);
        if (t6 == 0) {
            break;
        }
    }
    FUN_0c0e2a4c((*(int *)(((int)stk + 28))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    return (FUN_0c0e2a4c((*(int *)(((int)stk + 20))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
}
