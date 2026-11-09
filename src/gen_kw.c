/* Straight-line functions with calls and guards (batch gen_kw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0e6248(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c07409c(int a4);

int FUN_0c07409c(int a4)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t8;

    t0 = a4;
    t1 = 0x0;
    t2 = 0xC0FD34C;
    t3 = 0xC0FD374;
    for (;;) {
        { struct mvb6 { char c[6]; }; *(struct mvb6 *)(((int)stk + 4)) = *(struct mvb6 *)(0xC0FE16C); }
        t4 = 0x0;
        t0 = t2;
        t6 = t4;
        t7 = 0x0;
        t8 = (*(int *)((t0 + 0x4)));
        for (;;) {
            if ((int)t7 >= (int)(*(int *)((t3 + 0x0)))) {
                break;
            }
            t0 = 0x0;
            t6 = (nlPushMatrix(t0));
            t0 = t8;
            t6 = (FUN_0c0dcca0(t0));
            t0 = (*(int *)((t8 + 0xC)));
            t6 = (FUN_0c0c465c(t0));
            t0 = 0x1;
            t6 = (nlPopMatrix(t0));
            t7 = (t7 + 0x1);
            t8 = (t8 + 0x10);
        }
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x8);
        if ((unsigned int)t1 >= (unsigned int)0x5) {
            break;
        }
    }
    return t6;
}
