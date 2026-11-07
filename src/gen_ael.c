/* Straight-line functions with calls and guards (batch gen_ael): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdSetSetCondition(void);
int pdVibIsReady(int);
int pdVibStart(int a4, int a5, int a6);

int pdVibStart(int a4, int a5, int a6)
{
    int stk[18];
    register int t0;
    register int t41;
    register int t1;
    register int t2;
    register int t3;
    int t5;
    register int t6;
    register int t12;
    register int t7;
    register int t9;
    register int t18;
    register int t15;
    register int t22;
    register int t25;
    register int t38;
    register int t39;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = pdVibIsReady(a4);
    t41 = 0xFFFFFFFE;
    if (t0 == 0) {
    } else {
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t1 = (((int)stk + 4) + 0x4);
            t2 = 0x0;
            t3 = a5;
            for (;;) {
                t5 = *(signed char *)((t3 + 0x1));
                *(unsigned char *)((t1 + 0x0)) = ((((unsigned char)(*(signed char *)((t3 + 0x0))) << 2) << 2) | (0x1 & t5));
                t6 = *(signed char *)((t3 + 0x2));
                t1 = (t1 + 0x1);
                t12 = t6;
                if (((unsigned char)t5 & 0x88) == 0) {
                    t7 = t6;
                    if ((signed char)t6 == 1) {
                        t7 = 0x2;
                    }
                    t9 = t7;
                    if ((signed char)t7 == -1) {
                        t9 = 0xFFFFFFFE;
                    }
                    t12 = t9;
                }
                t18 = (0x70 & (((signed char)t12 << 2) << 2));
                if ((int)(signed char)t12 > 0) {
                } else {
                    t15 = 0x0;
                    if ((int)(signed char)t12 < 0) {
                        t15 = (0x7 & (-(signed char)t12));
                    }
                    t18 = t15;
                }
                *(unsigned char *)((t1 + 0x0)) = (t18 | (0x88 & t5));
                t1 = (t1 + 0x1);
                *(unsigned char *)((t1 + 0x0)) = (*(signed char *)((t3 + 0x3)));
                t1 = (t1 + 0x1);
                t22 = t1;
                t1 = (t1 + 0x1);
                t25 = 0x0;
                if (((unsigned char)t5 & 0x88) != 0) {
                    t25 = (unsigned char)(*(signed char *)((t3 + 0x4)));
                }
                t2 = (t2 + 0x1);
                *(unsigned char *)((t22 + 0x0)) = t25;
                t3 = (t3 + 0x8);
                if ((unsigned int)t2 >= (unsigned int)a6) {
                    break;
                }
            }
        }
        *(volatile int *)(((int)stk + 4));
        t38 = kdSetSetCondition();
        t39 = 0x0;
        if ((int)t38 < 0) {
            t39 = 0xFFFFFFFF;
        }
        t41 = t39;
    }
    return t41;
}
