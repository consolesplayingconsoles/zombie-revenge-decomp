/* Straight-line functions with calls and guards (batch gen_tw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0555ca(int, int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int FUN_0c05a2dc(int a4, int a5, int a6, float f4);

int FUN_0c05a2dc(int a4, int a5, int a6, float f4)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t2;
    register int t79;
    register int t4;
    register int t8;
    register int t5;
    register int t6;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t38;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t29;
    register int t42;
    register int t43;
    register int t44;
    register int t32;
    register int t71;
    register int t72;
    register int t73;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 16)) = f4;
    t0 = (0x234 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t1 = (t1 + t2);
        if ((unsigned int)t0 >= (unsigned int)((0x234 + a4) + 0x10)) {
            break;
        }
    }
    t79 = 0xC;
    if ((int)t1 <= 0) {
    } else {
        t4 = FUN_0c0e262a((t1 << 1));
        t8 = t4;
        if ((int)t1 > 0) {
            t5 = t4;
            t6 = 0x0;
            for (;;) {
                t6 = (t6 + 0x1);
                *(unsigned short *)((t5 + 0x0)) = (*(short *)((a4 + 0x224)));
                t5 = (t5 + 0x2);
                if ((int)t6 >= (int)t1) {
                    break;
                }
            }
            t8 = 0x224;
        }
        t16 = t8;
        t17 = 0x0;
        t18 = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
        t19 = ((0x234 + a4) + 0x4);
        t20 = ((0x224 + a4) + 0x4);
        for (;;) {
            t21 = 0x0;
            for (;;) {
                if ((int)t21 >= (int)(*(int *)((t19 + 0x0)))) {
                    break;
                }
                t16 = t18;
                t17 = (*(int *)((t20 + 0x0)));
                t16 = (t16 << 1);
                *(unsigned short *)((t4 + t16)) = t17;
                for (;;) {
                    t16 = t1;
                    t17 = 0xC0E5F1C;
                    t16 = (FUN_0c0e5f1c(t18));
                    t18 = t16;
                    t16 = (t16 << 1);
                    t17 = (*(short *)((t4 + t16)));
                    t16 = 0x224;
                    if (t17 == (*(int *)((a4 + t16)))) {
                        break;
                    }
                }
                t21 = (t29 + 0x1);
            }
            t19 = (t19 + 0x4);
            t20 = (t20 + 0x4);
            if ((unsigned int)t19 >= (unsigned int)((0x234 + a4) + 0x10)) {
                break;
            }
        }
        t38 = a5;
        if ((int)t1 > (int)0x1) {
            *(volatile int *)((a4 + 0xF0));
            *(unsigned int *)(((int)stk + 12)) = (FUN_0c0e5dc0());
            t38 = (a5 - (((int)((unsigned int)((int)((unsigned int)t32 + (unsigned int)0x0)) + ((((int)0x0 > (int)t32)) ? 1u : 0u))) >> 1));
        } else {
            t42 = t19;
            t43 = t21;
            t44 = t20;
        }
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x30)));
        *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        *(float *)(((int)stk + 52)) = (*(float *)((a4 + 0x38)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        if ((int)t1 > 0) {
            t50 = 0x0;
            t51 = t38;
            for (;;) {
                t52 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t52 + 0x2);
                t53 = *(short *)((((t52 + 0x2) - 2) + 0x0));
                FUN_0c0dc5a0();
                nlRotateAY(t51);
                nlRotateAX((*(int *)(((int)stk + 4))));
                FUN_0c0db4d0((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                nlPopMatrix(0x1);
                if ((int)(short)t53 < (int)0x16) {
                    FUN_0c05561a(a4, (short)t53, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                } else {
                    FUN_0c0555ca(a4, (short)t53, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                }
                t50 = (t50 + 0x1);
                t51 = (t51 + (*(int *)(((int)stk + 12))));
                if ((int)t50 >= (int)t1) {
                    break;
                }
            }
        } else {
            t71 = t42;
            t72 = t43;
            t73 = t44;
        }
        t79 = (FUN_0c0e2a4c(t4, t71, t72, t73, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t79;
}
