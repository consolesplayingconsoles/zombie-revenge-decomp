/* Straight-line functions with calls and guards (batch gen_ku): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e2a4c(int);
int FUN_0c094c60(int a4);

int FUN_0c094c60(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = (a4 + 0x34);
    t2 = (*(int *)((a4 + 0xE0)));
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t4 = FUN_0c0e2a4c(t3);
        t2 = (t2 - 0x1);
        if (t2 == 0) {
            break;
        }
    }
    return t4;
}
