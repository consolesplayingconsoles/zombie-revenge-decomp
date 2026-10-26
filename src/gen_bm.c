/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19f2(int, int);
int mwPlySetLpFlg(int);
int FUN_0c06b430(int a4);

int FUN_0c06b430(int a4)
{
    mwPlySetLpFlg(a4);
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
    return FUN_0c0e19f2(0x0, 0xC246FF0);
}
