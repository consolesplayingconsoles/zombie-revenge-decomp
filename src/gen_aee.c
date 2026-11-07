/* Straight-line functions with calls and guards (batch gen_aee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c08640a(int a4, int a5, int a6, int a7, int a8, int a9);

float FUN_0c08640a(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;

    if (a9 != 0) {
        if (a9 == 1) {
            t0 = 0x18;
            t1 = (a6 + 0x6);
            t2 = (a4 + 0x6);
            t3 = (a5 + 0x6);
            for (;;) {
                t4 = *(short *)((t3 + 0x0));
                t3 = (t3 + 0x2);
                t0 = (t0 - 0x1);
                t5 = *(short *)((t2 + 0x0));
                t2 = (t2 + 0x2);
                *(unsigned short *)((t1 + 0x0)) = (t4 - ((int)((short)(t4 - t5) * a8) << (int)(-a7)));
                t1 = (t1 + 0x2);
                if (t0 == 0) {
                    break;
                }
            }
        } else {
            t0 = a4;
            t1 = a5;
            t2 = a6;
            t3 = 0x2;
            for (;;) {
                t4 = *(short *)((t1 + 0x0));
                t1 = (t1 + 0x2);
                t3 = (t3 - 0x1);
                t5 = *(short *)((t0 + 0x0));
                t0 = (t0 + 0x2);
                *(unsigned short *)((t2 + 0x0)) = (t4 - ((int)((short)(t4 - t5) * a8) << (int)(-a7)));
                t2 = (t2 + 0x2);
                if (t3 == 0) {
                    break;
                }
            }
            t0 = (a4 + 0x36);
            t1 = 0x15;
            t2 = (a5 + 0x36);
            t3 = (a6 + 0x36);
            for (;;) {
                t4 = *(short *)((t2 + 0x0));
                t2 = (t2 + 0x2);
                t1 = (t1 - 0x1);
                t5 = *(short *)((t0 + 0x0));
                t0 = (t0 + 0x2);
                *(unsigned short *)((t3 + 0x0)) = (t4 - ((int)((short)(t4 - t5) * a8) << (int)(-a7)));
                t3 = (t3 + 0x2);
                if (t1 == 0) {
                    break;
                }
            }
        }
    } else {
        t0 = 0x30;
        t1 = a6;
        t2 = a5;
        t3 = a4;
        for (;;) {
            t4 = *(short *)((t2 + 0x0));
            t5 = *(short *)((t3 + 0x0));
            t6 = (((unsigned short)t5 - (unsigned short)t4) - 0x10000);
            if ((int)((unsigned short)t5 - (unsigned short)t4) > (int)0x8000) {
            } else {
                t7 = ((unsigned short)t5 - (unsigned short)t4);
                if ((int)((unsigned short)t5 - (unsigned short)t4) < (int)0xFFFF8000) {
                    t7 = (((unsigned short)t5 - (unsigned short)t4) + 0x10000);
                }
                t6 = t7;
            }
            t2 = (t2 + 0x2);
            t0 = (t0 - 0x1);
            t3 = (t3 + 0x2);
            u0 = ((float)(t6 + (unsigned short)t4) * ((float)a8 / (float)((int)0x1 << (int)a7)));
            u0 = u0 + ((1.0f - ((float)a8 / (float)((int)0x1 << (int)a7)))) * (float)(unsigned short)t4;
            *(unsigned short *)((t1 + 0x0)) = (int)u0;
            t1 = (t1 + 0x2);
            if (t0 == 0) {
                break;
            }
        }
        u0 = (1.0f - ((float)a8 / (float)((int)0x1 << (int)a7)));
    }
    return u0;
}
