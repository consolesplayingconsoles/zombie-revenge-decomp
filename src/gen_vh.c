/* Straight-line functions with calls and guards (batch gen_vh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
extern int FUN_0c0e5f1c();
int FUN_0c0366b4(int a4);

int FUN_0c0366b4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = *(int *)((a4 + 0x530));
    t1 = 0x0;
    t2 = 0xFFFFFFFF;
    t3 = 0x0;
    t4 = 0xFFFFFFFF;
    t5 = 0xFFFFFFFF;
    for (;;) {
        if (t1 != 0) {
            t7 = ((t3 << 2) + (0xF0 + t0));
            if ((*(float *)((((t3 << 2) + (0xF0 + t0)) + 0x0))) != 0.0f) {
                t8 = t3;
                t8 = (t8 - 1);
                t9 = t8;
                t9 = (t9 - t4);
                t1 = 0x0;
                if ((int)t2 >= (int)t9) {
                    if (t2 == t9) {
                        FUN_0c0da2e0();
                        t9 = 0xC0E5F1C;
                        t7 = ((int (*)(void))(FUN_0c0e5f1c))();
                        if ((int)t7 > (int)0x3) {
                            t5 = t4;
                            t5 = (t5 + t8);
                            t2 = t8;
                            t5 = ((int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u)));
                            t5 = (t5 >> 1);
                            t2 = (t2 - t4);
                        }
                    } else {
                        t7 = ((t3 << 2) + (0xF0 + t0));
                    }
                } else {
                    t5 = t4;
                    t5 = (t5 + t8);
                    t2 = t8;
                    t5 = ((int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u)));
                    t5 = (t5 >> 1);
                    t2 = (t2 - t4);
                    t7 = ((t3 << 2) + (0xF0 + t0));
                }
            }
            t6 = t7;
        } else {
            if ((*(float *)((((t3 << 2) + (0xF0 + t0)) + 0x0))) == 0.0f) {
                t4 = t3;
                t1 = 0x1;
            }
            t6 = ((t3 << 2) + (0xF0 + t0));
        }
        t9 = 0x8;
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)t9) {
            break;
        }
    }
    t3 = t5;
    t7 = t6;
    if (t1 != 0) {
        if ((int)t2 >= (int)(0x7 - t4)) {
            t1 = t5;
            if (t2 == (0x7 - t4)) {
                FUN_0c0da2e0();
                t2 = ((int (*)(void))(FUN_0c0e5f1c))();
                t8 = t5;
                if ((int)t2 > (int)0x3) {
                    t8 = (((int)((unsigned int)((int)((unsigned int)(t4 + 0x7) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 + 0x7))) ? 1u : 0u))) >> 1);
                }
                t1 = t8;
            } else {
                t2 = t6;
            }
            t5 = t1;
            t1 = t2;
        } else {
            t5 = (((int)((unsigned int)((int)((unsigned int)(t4 + 0x7) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 + 0x7))) ? 1u : 0u))) >> 1);
            t1 = t6;
        }
        t3 = t5;
        t7 = t1;
    }
    *(volatile int *)0xC23ED68;
    t1 = ((int (*)(int))(FUN_0c0e5f1c))(t7);
    t1 = ((int (*)(void))(FUN_0c0e5f1c))();
    if (t1 != 0) {
        t2 = (t3 + 0x1);
        if (t1 != 1) {
            t4 = (t3 - 1);
            if (t1 != 2) {
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    } else {
        t2 = FUN_0c0da2e0();
        t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t4 = (t2 & 0x1);
        }
        t1 = (t3 + t4);
    }
    t2 = t1;
    if ((int)t1 < 0) {
        t2 = 0x0;
    }
    t1 = t2;
    if ((int)t2 > (int)0x7) {
        t1 = 0x7;
    }
    return (unsigned short)((*(int *)(((t1 << 2) + (t0 + 0x50)))) + 0x8000);
}
