/* Straight-line functions with calls and guards (batch gen_nx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetBorderColor(int, ...);
int FUN_0c0d99a0(int a4);

int FUN_0c0d99a0(int a4)
{
    int stk[6];
    register int t13;
    register int t15;

    *(unsigned int *)(((int)stk + 8)) = a4;
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                } else {
                    *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x0)) = 0xFFFF00FF;
                }
            } else {
                *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x0)) = 0xFF00FF00;
            }
        } else {
            *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x0)) = 0xFFFF0000;
        }
    } else {
        *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x0)) = 0xFF0000FF;
    }
    t13 = (*(int *)(((((int)stk + 8) + 0x4) + 0x0)));
    *(int *)((int)stk + 4) = t13;
    kmSetBorderColor(t13);
    t15 = *(int *)(((int)stk + 8));
    if (t15 == 1) {
        for (;;) {
        }
    }
    _builtin_trapa(48);
    return t15;
}
