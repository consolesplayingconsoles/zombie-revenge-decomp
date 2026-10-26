/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0e61d4(int);
int FUN_0c04638a(int a4);

int FUN_0c04638a(int a4)
{
    int stk[9];

    if ((*(int *)((a4 + 0x50C))) != 0) {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
            FUN_0c0e61d4((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))));
        } else {
            FUN_0c0e61d4(0xC246FF0);
        }
    } else {
        FUN_0c0e61d4(a4);
    }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x30))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x0)))), ((*(float *)((a4 + 0x34))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x4)))), ((*(float *)((a4 + 0x38))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x8)))));
    *(unsigned int *)((a4 + 0x248)) = (*(int *)(((int)stk + 4)));
    return 0x248;
}
