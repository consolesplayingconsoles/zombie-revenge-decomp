/* Straight-line functions with calls and guards (batch gen_kk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e6620(int, int);
int FUN_0c0e6700(int, int, int, int);
int nlSynchFunction(int);
int FUN_0c0e6400(void);

int FUN_0c0e6400(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned int *)((0xC94D6B8 + t1)) = 0x0;
        *(unsigned int *)((0xC94D6E8 + t1)) = 0xFFFFFFFF;
        t1 = (t1 + 0x4);
        if ((int)t2 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    t2 = 0xC20D06E;
    for (;;) {
        FUN_0c0e6700((*(short *)((t2 + 0x0))), (*(short *)((t2 + 0x2))), 0xFFFFFFFF, 0xC94D6B8);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        FUN_0c0e6620(t1, 0x0);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = nlSynchFunction(0x0);
    _builtin_set_cr((t0 & 0xFFFFFFFF));
    return t1;
}
