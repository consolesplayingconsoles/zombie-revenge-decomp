/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c016ea0(int a4, int a5, int a6, int a7);

int FUN_0c016ea0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((*(int *)0xC23ED50) != (*(int *)((a4 + 0x80)))) {
        return 0x80;
    }
    t4 = *(int *)((a4 + 0x98));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 != 3) {
                } else {
                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
                    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0219999999f);
                    if (!(40.0f > (*(float *)((a4 + 0x34))))) {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    }
                }
            } else {
                t4 = *(int *)((a4 + 0x9C));
                *(float *)((a4 + 0x34)) = (*(float *)(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F290)));
                if ((int)(*(int *)(((*(int *)(((((*(int *)((a4 + 0x9C))) << 2) + 0xC246FF0) + 0x0))) + 0x2B4))) >= (int)0xF) {
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    *(float *)((a4 + 0x4C)) = 0.899999976f;
                }
            }
        } else {
            if ((int)(*(int *)(((*(int *)(((((*(int *)((a4 + 0x9C))) << 2) + 0xC246FF0) + 0x0))) + 0x2B4))) >= (int)0x7) {
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            }
        }
    } else {
        if ((((*(int *)0xC23ED5C) & 16) != 0) && (t0 = *(int *)((a4 + 0x84)), t1 = *(int *)0xC23ED54, t1 == t0)) {
            t0 = 0x0;
            for (;;) {
                if (((*(int *)((0xC247030 + (t0 << 2)))) == 4) && (t2 = *(int *)((((t0 << 2) + 0xC246FF0) + 0x0)), t3 = *(int *)((t2 + 0x20C)), (t3 & 0x100000) != 0)) {
                    break;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x2) {
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    t0 = 0x0;
                    nlPushMatrix(t0);
                    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
                    t0 = (*(int *)((a4 + 0x78)));
                    FUN_0c0c465c(t0);
                    t0 = 0x1;
                    return nlPopMatrix(t0);
                }
            }
            *(unsigned int *)((a4 + 0x9C)) = t0;
            *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}
