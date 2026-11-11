/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _modls(int);
int FUN_0c058e7c(int a4, int a5);

int FUN_0c058e7c(int a4, int a5)
{
    register int t0;
    register int t1;

    t1 = *(int *)0xC20499C;
    if ((a4 == 22) || (a4 == 23) || (a4 == 24)) {
        if ((a5 % 3) != 0) {
            return 0x2;
        }
        if ((t1 != 0) && ((*(int *)0xC23EDC0) == 4)) {
            return 0x1;
        }
        return 0x0;
    }
    if ((a4 == 25) || (a4 == 26) || (a4 == 27)) {
        if ((*(int *)0xC1FF88C) != 0) {
            return 0x12;
        }
        if (t1 == 0) {
            return ((a5 % 6) + 0xC);
        }
        t0 = ((a5 % 7) + 0xB);
        if ((int)t0 >= (int)0xC) {
            return t0;
        }
        return (((*(int *)0xC23EDC0) == 4) ? 0x1 : 0x0);
    }
    if (a4 == 28) {
        t0 = ((a5 % 9) + 0x3);
        if ((int)t0 >= (int)0x4) {
            return t0;
        }
        return 0x3;
    }
    return a4;
}
