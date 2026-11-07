/* Straight-line functions with calls and guards (batch gen_aet): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _destructFiber(int, int);
int longjmp(int, int);
int setjmp(int, int, int, int, float, float, float, float, float, float, float, float);
int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)0xC990CB4 = (*(int *)0xC990CB0);
    t0 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40001);
    *(unsigned int *)0xC990CB0 = a4;
    setjmp((a4 + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t1 = 0x0;
    t2 = (0x210 + a4);
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x208)))) {
            break;
        }
        *(unsigned int *)((a4 + 0xD78)) = t2;
        t3 = *(int *)((t2 + 0xC));
        if (t3 != 0) {
            if (t3 != 3) {
                if (t3 != 1) {
                    if (t3 != 2) {
                    } else {
                        t3 = 0xC233FEE;
                        *(unsigned int *)((t2 + 0xC)) = 0x3;
                        *(unsigned int *)((t2 + 0x20)) = 0xC233FEE;
                    }
                } else {
                    t3 = (*(int *)((t2 + 0x14)));
                    if ((unsigned int)t3 <= (unsigned int)(*(int *)((a4 + 0x204)))) {
                        longjmp((t2 + 0x18), 0x1);
                    }
                }
            } else {
                _destructFiber(a4, t2);
            }
        }
        t3 = 0x124;
        t1 = (t1 + 0x1);
        t2 = (t2 + t3);
    }
    *(unsigned int *)((a4 + 0x204)) = ((*(int *)((a4 + 0x204))) + 0x1);
    *(unsigned int *)0xC990CB0 = (*(int *)0xC990CB4);
    _builtin_set_fpscr(t0);
    return 0x204;
}
