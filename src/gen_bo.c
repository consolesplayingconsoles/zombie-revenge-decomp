/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19f2(int);
int FUN_0c01fe82(int a4);

int FUN_0c01fe82(int a4)
{
    int t2;
    int t6;

    if ((*(int *)((a4 + 0x4))) != 0) {
        t2 = ((int (*)(int))((*(int *)((a4 + 0x4)))))(a4);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
    } else {
        t6 = a4;
    }
    return FUN_0c0e19f2(t6);
}
