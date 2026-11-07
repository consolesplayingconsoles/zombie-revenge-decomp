/* Straight-line functions with calls and guards (batch gen_lu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4ff0(int a4, int a5);

int FUN_0c0c4ff0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = (a4 + 0x1);
    t1 = a5;
    t2 = (*(signed char *)((a4 + 0x0)));
    t3 = 0x9;
    for (;;) {
        t3 = (t3 - 0x1);
        t4 = (int)(((unsigned int)t2) & 1);
        t2 = ((unsigned int)t2 >> 1);
        t5 = 0;
        if ((t3 == 0)) {
            t6 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t2 = t6;
            t3 = 0x8;
            t6 = (int)(((unsigned int)t2) & 1);
            t2 = ((unsigned int)t2 >> 1);
            t5 = ((t6 != 0));
        } else {
            t5 = ((t4 != 0));
        }
        if (t5) {
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            *(unsigned char *)((t1 + 0x0)) = t4;
            t1 = (t1 + 0x1);
            continue;
        }
        t3 = (t3 - 0x1);
        t4 = (int)(((unsigned int)t2) & 1);
        t2 = ((unsigned int)t2 >> 1);
        t5 = 0;
        if ((t3 == 0)) {
            t6 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t2 = t6;
            t3 = 0x8;
            t6 = (int)(((unsigned int)t2) & 1);
            t2 = ((unsigned int)t2 >> 1);
            t5 = ((t6 != 0));
        } else {
            t5 = ((t4 != 0));
        }
        if (!t5) {
            t4 = 0x0;
            t3 = (t3 - 0x1);
            t5 = (int)(((unsigned int)t2) & 1);
            t2 = ((unsigned int)t2 >> 1);
            t6 = 0;
            if ((t3 == 0)) {
                t7 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t2 = t7;
                t3 = 0x8;
                t7 = (int)(((unsigned int)t2) & 1);
                t2 = ((unsigned int)t2 >> 1);
                t6 = ((t7 != 0));
            } else {
                t6 = ((t5 != 0));
            }
            t4 = ((int)(((unsigned int)(t4) << 1) | ((t6) ? 1u : 0u)));
            t3 = (t3 - 0x1);
            t5 = (int)(((unsigned int)t2) & 1);
            t2 = ((unsigned int)t2 >> 1);
            t6 = 0;
            if ((t3 == 0)) {
                t7 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t2 = t7;
                t3 = 0x8;
                t7 = (int)(((unsigned int)t2) & 1);
                t2 = ((unsigned int)t2 >> 1);
                t6 = ((t7 != 0));
            } else {
                t6 = ((t5 != 0));
            }
            t5 = (*(signed char *)((t0 + 0x0)));
            t0 = (t0 + 0x1);
            t4 = ((int)(((unsigned int)(t4) << 1) | ((t6) ? 1u : 0u)));
            t5 = (t5 | 0xFFFFFF00);
            t4 = (t4 + 0x2);
            t5 = (t5 + t1);
            for (;;) {
                t6 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                t4 = (t4 - 0x1);
                *(unsigned char *)((t1 + 0x0)) = t6;
                t1 = (t1 + 0x1);
                if (t4 == 0) {
                    break;
                }
            }
            continue;
        }
        t4 = (*(signed char *)((t0 + 0x0)));
        t0 = (t0 + 0x1);
        t6 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t5 = (unsigned char)t4;
        t5 = (t5 | (t6 << 8));
        if (t5 != 0) {
            t5 = ((unsigned int)t5 >> 2);
            t5 = ((unsigned int)t5 >> 1);
            t4 = (t4 & 0x7);
            t5 = (t5 | 0xFFFFE000);
            if (t4 == 0) {
                t4 = (*(signed char *)((t0 + 0x0)));
                t0 = (t0 + 0x1);
                t5 = (t5 + t1);
                t4 = (unsigned char)t4;
                t4 = (t4 + 0x1);
                for (;;) {
                    t6 = *(signed char *)((t5 + 0x0));
                    t5 = (t5 + 0x1);
                    t4 = (t4 - 0x1);
                    *(unsigned char *)((t1 + 0x0)) = t6;
                    t1 = (t1 + 0x1);
                    if (t4 == 0) {
                        break;
                    }
                }
            } else {
                t4 = (t4 + 0x2);
                t5 = (t5 + t1);
                for (;;) {
                    t6 = *(signed char *)((t5 + 0x0));
                    t5 = (t5 + 0x1);
                    t4 = (t4 - 0x1);
                    *(unsigned char *)((t1 + 0x0)) = t6;
                    t1 = (t1 + 0x1);
                    if (t4 == 0) {
                        break;
                    }
                }
            }
            continue;
        }
        break;
    }
    return (t1 - a5);
}
