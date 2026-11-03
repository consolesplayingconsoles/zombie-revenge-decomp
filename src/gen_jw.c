/* Straight-line functions with calls and guards (batch gen_jw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c07a1d6(int a4, int a5, int a6, int a7);

int FUN_0c07a1d6(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (((*(int *)0xC23ED5C) & 22) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((int)(*(int *)((a4 + 0x22C))) > 0) {
        t7 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t7 - 1);
        if ((int)(t7 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x1EC)) = 0x0;
            *(unsigned int *)((a4 + 0xD8)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        *(unsigned int *)((a4 + 0x22C)) = 0x50;
    }
    *(float *)((a4 + 0x38)) = (*(float *)(((*(int *)((a4 + 0x230))) + 0x38)));
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x38))) + (*(float *)((a4 + 0x50))));
    return FUN_0c01cdc2(a4);
}
