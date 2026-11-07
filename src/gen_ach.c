/* Straight-line functions with calls and guards (batch gen_ach): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086778(int a4, int a5, int a6);

int FUN_0c086778(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 != 2) {
                t0 = a6;
            } else {
                t1 = a6;
                if ((int)(short)(((*(short *)((a4 + 0x0))) - (*(short *)((a5 + 0x0)))) + 0x4000) < 0) {
                    t2 = *(short *)((a5 + 0x4));
                    t3 = *(short *)((a4 + 0x4));
                    t4 = (short)((t3 - t2) + 0x4000);
                    if ((int)(short)((t3 - t2) + 0x4000) < 0) {
                        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) + 0x8000);
                        *(unsigned short *)(((a4 + 0x2) + 0x0)) = (0xFFFF8000 - (*(short *)(((a4 + 0x2) + 0x0))));
                        t2 = *(short *)((a4 + 0x4));
                        *(unsigned short *)((a4 + 0x4)) = (t2 + 0x8000);
                        t4 = (t2 + 0x8000);
                    }
                    t1 = t4;
                }
                t2 = t1;
                t1 = 0x7;
                t3 = (a5 + 0x36);
                t4 = (a4 + 0x36);
                for (;;) {
                    if ((int)(short)(((*(short *)((t4 + 0x0))) - (*(short *)((t3 + 0x0)))) + 0x4000) < 0) {
                        t2 = (*(short *)((t3 + 0x4)));
                        t5 = t2;
                        t2 = (*(short *)((t4 + 0x4)));
                        t2 = (t2 - t5);
                        t2 = (t2 + 0x4000);
                        t2 = (short)t2;
                        if ((int)t2 < 0) {
                            *(unsigned short *)((t4 + 0x0)) = ((*(short *)((t4 + 0x0))) + 0x8000);
                            *(unsigned short *)(((t4 + 0x2) + 0x0)) = (0xFFFF8000 - (*(short *)(((t4 + 0x2) + 0x0))));
                            t2 = (*(short *)((t4 + 0x4)));
                            t2 = (t2 + 0x8000);
                            *(unsigned short *)((t4 + 0x4)) = t2;
                        }
                    }
                    t1 = (t1 - 0x1);
                    t4 = (t4 + 0x6);
                    t3 = (t3 + 0x6);
                    if (t1 == 0) {
                        break;
                    }
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = a6;
            t2 = 0x8;
            t3 = (a5 + 0x6);
            t4 = (a4 + 0x6);
            for (;;) {
                if ((int)(short)(((*(short *)((t4 + 0x0))) - (*(short *)((t3 + 0x0)))) + 0x4000) < 0) {
                    t0 = (*(short *)((t3 + 0x4)));
                    t5 = t0;
                    t0 = (*(short *)((t4 + 0x4)));
                    t0 = (t0 - t5);
                    t0 = (t0 + 0x4000);
                    t0 = (short)t0;
                    if ((int)t0 < 0) {
                        *(unsigned short *)((t4 + 0x0)) = ((*(short *)((t4 + 0x0))) + 0x8000);
                        *(unsigned short *)(((t4 + 0x2) + 0x0)) = (0xFFFF8000 - (*(short *)(((t4 + 0x2) + 0x0))));
                        t0 = (*(short *)((t4 + 0x4)));
                        t0 = (t0 + 0x8000);
                        *(unsigned short *)((t4 + 0x4)) = t0;
                    }
                }
                t2 = (t2 - 0x1);
                t4 = (t4 + 0x6);
                t3 = (t3 + 0x6);
                if (t2 == 0) {
                    break;
                }
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = a6;
        t2 = 0x10;
        t3 = a5;
        t4 = a4;
        for (;;) {
            if ((int)(short)(((*(short *)((t4 + 0x0))) - (*(short *)((t3 + 0x0)))) + 0x4000) < 0) {
                t1 = (*(short *)((t3 + 0x4)));
                t5 = t1;
                t1 = (*(short *)((t4 + 0x4)));
                t1 = (t1 - t5);
                t1 = (t1 + 0x4000);
                t1 = (short)t1;
                if ((int)t1 < 0) {
                    *(unsigned short *)((t4 + 0x0)) = ((*(short *)((t4 + 0x0))) + 0x8000);
                    *(unsigned short *)(((t4 + 0x2) + 0x0)) = (0xFFFF8000 - (*(short *)(((t4 + 0x2) + 0x0))));
                    t1 = (*(short *)((t4 + 0x4)));
                    t1 = (t1 + 0x8000);
                    *(unsigned short *)((t4 + 0x4)) = t1;
                }
            }
            t2 = (t2 - 0x1);
            t4 = (t4 + 0x6);
            t3 = (t3 + 0x6);
            if (t2 == 0) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}
