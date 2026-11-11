/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0ce042(int a4, int a5, int a6, int a7);

int FUN_0c0ce042(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t7;

    if (((*(int *)0xC23A258) & 20) == 0) {
        *(unsigned int *)0xC23F244 = ((*(int *)0xC23F244) ^ 0x1);
    }
    t6 = *(int *)0xC23ED50;
    if (t6 != 11) {
        t7 = *(int *)0xC522A40;
        return ((int (*)(int, int, int, int))(t7))(0xC23F1AC, a5, a6, a7);
    }
    return t6;
}
