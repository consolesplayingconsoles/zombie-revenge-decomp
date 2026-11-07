/* Straight-line functions with calls and guards (batch gen_le): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db0a0(int, int);
int FUN_0c0e5f1c(void);
int nlPrintf(int, ...);
int FUN_0c01da32(void);

int FUN_0c01da32(void)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t7;
    register int t12;
    register int t18;
    register int t19;
    register int t20;

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        t0 = *(int *)(((int)stk + 12));
        t1 = *(int *)(((int)stk + 12));
        t2 = 0x0;
        for (;;) {
            if ((*(int *)((((((t2 << 1) + t2) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94)) + 0x0))) == ((((t2 << 1) + t2) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94))) {
                FUN_0c0db0a0((t2 + 0x2), (t1 + 0x5));
                *(int *)((int)stk + 8) = 0xC0F53B8;
                nlPrintf(0xC0F53B8);
            } else {
                t6 = ((((t2 << 1) + t2) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94));
                t7 = 0x0;
                for (;;) {
                    t6 = (*(int *)((t6 + 0x0)));
                    if (t6 == ((((t2 << 1) + t2) << 2) + ((((t0 << 1) + t0) << 8) + 0xC23FF94))) {
                        break;
                    }
                    t7 = (t7 + 0x1);
                }
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
                FUN_0c0db0a0((t2 + 0x2), (t1 + 0x5));
                t12 = (FUN_0c0e5f1c());
                *(int *)((int)stk + 8) = t12;
                *(int *)((int)stk + 4) = 0xC0F53BC;
                nlPrintf(0xC0F53BC, t12);
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x1F) {
                break;
            }
        }
        FUN_0c0db0a0(0x2, 0x25);
        t18 = (*(int *)(((int)stk + 16)));
        *(int *)((int)stk + 8) = t18;
        *(int *)((int)stk + 4) = 0xC0F53C0;
        t19 = nlPrintf(0xC0F53C0, t18);
        t20 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t20 + 0x1);
        if ((int)(t20 + 0x1) >= (int)0x3F) {
            break;
        }
    }
    return t19;
}

