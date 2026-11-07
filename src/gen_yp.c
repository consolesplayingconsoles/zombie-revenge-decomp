/* Straight-line functions with calls and guards (batch gen_yp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c054fb0(int a4, int a5, int a6, int a7);

int FUN_0c054fb0(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t5;
    register int t7;
    int t8;
    register int t10;
    register int t11;
    register int t20;
    register int t30;
    register int t37;
    register int t6;
    register int t22;

    if ((*(int *)((a4 + 0x330))) != 0) {
        t2 = *(int *)((a4 + 0x330));
        t3 = 0x1;
        if (t2 == 3) {
            t3 = 0x2;
        }
        t5 = t2;
        t7 = t3;
        t8 = 0x0;
        for (;;) {
            t10 = t7 == 0;
            t7 = (t7 - 1);
            if (t10) {
                t5 = 0x0;
                return t5;
            }
            t11 = 0x0;
            for (;;) {
                if ((*(int *)(((0xC2479B4 + (((t11 << 2) << 2) << 1)) + 0x0))) != 0) {
                    t5 = t11;
                    if (t5 != 9) {
                        t5 = 0xA;
                        t20 = (0xC2479B4 + (((t11 << 2) << 2) << 1));
                        t11 = (t11 + 0x1);
                        if ((int)t11 >= (int)t5) {
                            t22 = t20; break;
                        }
                        continue;
                    }
                    t5 = 0xFFFFFFFF;
                    return t5;
                }
                t22 = (0xC2479B4 + (((t11 << 2) << 2) << 1)); break;
            }
            t5 = 0x344;
            if (((*(int *)((a4 + t5))) != 0) && ((0x1 & t8) == 0)) {
                t5 = 0x34C;
                t6 = (*(int *)((a4 + t5)));
                *(unsigned int *)((t22 + 0x8)) = 0x0;
                t8 = (t8 | 0x1);
                *(unsigned int *)((t22 + 0x0)) = 0x1;
                *(unsigned int *)((t22 + 0x4)) = t6;
                t5 = t6;
                t5 = (t5 << 2);
                t6 = 0xC2475D4;
                *(unsigned int *)((t22 + 0x14)) = (*(int *)((0xC2475D4 + t5)));
                t6 = (*(int *)((t6 + t5)));
                *(unsigned int *)((t22 + 0x18)) = (*(int *)((t6 + 0x0)));
                *(unsigned int *)((t6 + 0x0)) = 0xC056B20;
                *(unsigned int *)((t22 + 0x1C)) = a4;
                t30 = *(int *)((0xC247634 + t5));
                t5 = (t5 + 0xC247604);
                *(unsigned int *)((t22 + 0xC)) = t30;
                *(unsigned int *)((t22 + 0x10)) = (*(int *)((t5 + 0x0)));
                continue;
            }
            t5 = 0x348;
            if (((*(int *)((a4 + t5))) != 0) && ((0x2 & t8) == 0)) {
                t5 = 0x350;
                t6 = (*(int *)((a4 + t5)));
                *(unsigned int *)((t22 + 0x8)) = 0x1;
                t8 = (t8 | 0x2);
                *(unsigned int *)((t22 + 0x0)) = 0x1;
                *(unsigned int *)((t22 + 0x4)) = t6;
                t5 = t6;
                t5 = (t5 << 2);
                t6 = 0xC2475D4;
                *(unsigned int *)((t22 + 0x14)) = (*(int *)((0xC2475D4 + t5)));
                t6 = (*(int *)((t6 + t5)));
                *(unsigned int *)((t22 + 0x18)) = (*(int *)((t6 + 0x0)));
                *(unsigned int *)((t6 + 0x0)) = 0xC056B20;
                *(unsigned int *)((t22 + 0x1C)) = a4;
                t37 = *(int *)((0xC247634 + t5));
                t5 = (t5 + 0xC247604);
                *(unsigned int *)((t22 + 0xC)) = t37;
                *(unsigned int *)((t22 + 0x10)) = (*(int *)((t5 + 0x0)));
                continue;
            }
            break;
        }
    }
    return 0xFFFFFFFF;
}
