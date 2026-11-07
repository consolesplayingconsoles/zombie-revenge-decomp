/* Straight-line functions with calls and guards (batch gen_afk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056118(int, int, int, int);
int FUN_0c057fd4(int a4, int a5);

int FUN_0c057fd4(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    u0 = *(float *)0xC0580F8;
    t0 = 0xC0580F8;
    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC247030 + t4) + 0x0))) != 0) {
            t1 = 0xC246FF0;
            t1 = (t1 + t3);
            t0 = 0x330;
            t1 = (*(int *)((t1 + 0x0)));
            t0 = (*(int *)((t1 + t0)));
            t2 = 0xC23F268;
            if ((t0 != 3) && (t0 != 2)) {
                if (t0 != 4) {
                    t5 = t1;
                    t6 = t2;
                } else {
                    t0 = 0xBC;
                    t7 = *(int *)((t1 + t0));
                    t0 = 0x1D8;
                    *(unsigned int *)((t1 + t0)) = 0x0;
                    t0 = 0x6E;
                    t8 = *(short *)((t1 + t0));
                    t0 = 0x1DC;
                    *(unsigned int *)((t1 + t0)) = t8;
                    t0 = (t0 - 8);
                    *(float *)((t1 + t0)) = u0;
                    t8 = (((((((t7 << 1) + t7) << 2) << 2) << 2) + t2) + 0x3C);
                    t2 = 0x3;
                    t0 = (FUN_0c056118(t1, t2, t8, 0x0));
                }
                t7 = t5;
                t5 = t6;
            } else {
                t0 = 0xBC;
                t6 = *(int *)((t1 + t0));
                t0 = 0x1D8;
                *(unsigned int *)((t1 + t0)) = 0x0;
                t0 = 0x6E;
                t8 = *(short *)((t1 + t0));
                t0 = 0x1DC;
                *(unsigned int *)((t1 + t0)) = t8;
                t0 = (t0 - 8);
                *(float *)((t1 + t0)) = u0;
                t8 = (((((((t6 << 1) + t6) << 2) << 2) << 2) + t2) + 0x24);
                t2 = 0x3;
                t0 = (FUN_0c056118(t1, t2, t8, 0x1));
            }
            t6 = t7;
            t7 = t5;
        } else {
            t6 = t1;
            t7 = t2;
        }
        t4 = (t4 + 0x4);
        t1 = t6;
        t2 = t7;
        t3 = (t3 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0x8) {
            break;
        }
    }
    return t0;
}
