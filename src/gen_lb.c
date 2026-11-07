/* Straight-line functions with calls and guards (batch gen_lb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
float FUN_0c0be958(int a4);

float FUN_0c0be958(int a4)
{
    int stk[19];
    register int t1;
    register int t2;
    register float u4;
    register float u5;
    register int t7;
    register int t8;
    register int t9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u20;
    register float u24;

    t1 = *(int *)((a4 + 0x1C));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(volatile float *)((a4 + 0x14));
    u4 = *(float *)0xC0BEAC4;
    u5 = *(float *)0xC0BEAC8;
    t7 = (*(int *)((a4 + 0x0)));
    t8 = t1;
    for (;;) {
        t9 = *(int *)((t7 + 0x0));
        t7 = (t7 + 0x4);
        FUN_0c0db470(t9, (((int)stk + 4) + 0xC));
        u11 = *(float *)(((int)stk + 24));
        FUN_0c0db4d0((t9 + 0xC), ((int)stk + 4));
        u13 = *(float *)(((int)stk + 16));
        u14 = (1.0f / (_builtin_fabsf(u11) * (1.0f + 1.0f)));
        *(float *)(((int)stk + 16)) = (u13 * u14);
        u15 = *(float *)(((int)stk + 20));
        u16 = (1.0f / (_builtin_fabsf(u11) * (1.0f + 1.0f)));
        *(float *)(((int)stk + 20)) = (u15 * u16);
        u20 = (*(float *)(((int)stk + 16)));
        u20 = u20 + u5 * ((*(float *)(((int)stk + 4))) + (*(float *)((t2 + 0x32C))));
        *(float *)((t9 + 0x18)) = (u20 + u4);
        u24 = (*(float *)(((int)stk + 20)));
        u24 = u24 + u5 * ((*(float *)(((int)stk + 8))) + (*(float *)((t2 + 0x334))));
        t8 = (t8 - 0x1);
        *(float *)((t9 + 0x1C)) = (u24 + u4);
        *(unsigned int *)(((t9 + 0x1C) + 0x0)) = ((*(int *)(((t9 + 0x1C) + 0x0))) | 0x1);
        if (t8 == 0) {
            break;
        }
    }
    return u5;
}
