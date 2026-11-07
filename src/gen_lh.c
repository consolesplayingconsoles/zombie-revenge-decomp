/* Straight-line functions with calls and guards (batch gen_lh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0be16c(int, int);
int FUN_0c0c7ef0(void);
int FUN_0c0c8138(int);
int FUN_0c0c86ac(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0c7f8c(void);

int FUN_0c0c7f8c(void)
{
    int stk[13];
    register int t1;
    register int t6;
    register int t20;
    register int t23;
    register int t24;
    register int t25;
    register int t27;
    register int t29;

    t1 = FUN_0c0e19aa(0xC0C82DC, 0x1A8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC0C7F02;
    *(unsigned int *)0xC31FD34 = t1;
    FUN_0c0be16c(0xDED, (t1 + 0x30));
    FUN_0c0be16c(0xDEE, (t1 + 0x50));
    FUN_0c0be16c(0xDEF, (t1 + 0x70));
    t6 = *(int *)((t1 + 0x4C));
    *(unsigned int *)(((0x98 + t1) + 0x0)) = (FUN_0c0e262a((((t6 << 2) + t6) << 2)));
    *(unsigned int *)(((0x9C + t1) + 0x0)) = (FUN_0c0e262a((((t6 << 2) + t6) << 2)));
    *(unsigned int *)(((0xA0 + t1) + 0x0)) = (FUN_0c0e262a((((t6 << 2) + t6) << 2)));
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = (FUN_0c0e262a((((t6 << 1) + t6) << 2)));
    *(unsigned int *)(((0xA8 + t1) + 0x0)) = (FUN_0c0e262a((t6 << 2)));
    *(unsigned int *)(((0xAC + t1) + 0x0)) = (FUN_0c0e262a((t6 << 2)));
    *(unsigned int *)(((0xB0 + t1) + 0x0)) = (FUN_0c0e262a((t6 << 2)));
    FUN_0c0c86ac((t1 + 0x30), (0xB4 + t1), (*(int *)((t1 + 0x98))));
    FUN_0c0c86ac((t1 + 0x50), (0xC8 + t1), (*(int *)((t1 + 0x9C))));
    FUN_0c0c86ac((t1 + 0x70), (0xDC + t1), (*(int *)((t1 + 0xA0))));
    t20 = *(int *)((t1 + 0xB0));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((t1 + 0xA8)));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((t1 + 0xAC)));
    if ((int)t6 > 0) {
        t23 = t20;
        t24 = 0x0;
        for (;;) {
            t25 = t23;
            *(int *)((int)stk + 4) = t25;
            t23 = (t23 + 0x4);
            *(float *)((t25 + 0x0)) = ((float)(((FUN_0c0da2e0()) & 0x7FFF) + 0x2000) * 2.49999994e-05f);
            t27 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t27 + 0x4);
            *(int *)((int)stk + 4) = ((t27 + 0x4) - 4);
            *(unsigned int *)((((t27 + 0x4) - 4) + 0x0)) = (FUN_0c0da2e0());
            t29 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t29 + 0x4);
            *(int *)((int)stk + 4) = ((t29 + 0x4) - 4);
            t24 = (t24 + 0x1);
            *(unsigned int *)((((t29 + 0x4) - 4) + 0x0)) = (FUN_0c0da2e0());
            if ((int)t24 >= (int)t6) {
                break;
            }
        }
    }
    *(unsigned int *)((t1 + 0xF0)) = 0x1;
    FUN_0c0c8138(t1);
    return FUN_0c0c7ef0();
}
