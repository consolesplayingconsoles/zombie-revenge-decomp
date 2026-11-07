/* Straight-line functions with calls and guards (batch gen_ld): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
float FUN_0c0dcea0(int);
float nlLength(int, int);
int nlSubVector3op(int, int, int);
float FUN_0c082cfa(int a4, int a5);

float FUN_0c082cfa(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float t9;
    register int t12;
    register int t13;
    register float t21;
    register int t24;
    register int t25;
    register int t33;
    register int t34;
    register float u40;
    register float u31;
    register float u19;

    t0 = 0xC247DB8;
    t1 = 0xA;
    for (;;) {
        t1 = (t1 - 0x1);
        *(unsigned short *)((t0 + 0x16)) = 0x0;
        *(unsigned short *)((t0 + 0x14)) = 0x0;
        t0 = (t0 + 0x18);
        if (t1 == 0) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x24C)) = a5;
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                t2 = t0;
                t3 = t1;
                for (;;) {
                    t3 = (t3 - 0x1);
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t2 = (t2 + 0x18);
                    if (t3 == 0) {
                        break;
                    }
                }
            } else {
                nlSubVector3op((((int)stk + 4) + 0x8), (0x278 + a4), (0x254 + a4));
                FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
                t9 = FUN_0c0dcea0((((int)stk + 4) + 0x8));
                *(float *)((a4 + 0x29C)) = t9;
                *(float *)((a4 + 0x2A0)) = (float)(*(int *)(((int)stk + 4)));
                *(float *)((a4 + 0x2A4)) = (float)(*(int *)(((int)stk + 8)));
                t12 = 0xC247DB8;
                t13 = 0x3;
                for (;;) {
                    t13 = (t13 - 0x1);
                    *(unsigned int *)((t12 + 0x4)) = 0x0;
                    t12 = (t12 + 0x18);
                    if (t13 == 0) {
                        break;
                    }
                }
                u19 = t9;
            }
            u31 = u19;
        } else {
            t21 = nlLength((0x254 + a4), (0x278 + a4));
            *(float *)((a4 + 0x29C)) = t21;
            *(float *)((a4 + 0x2A0)) = (float)(*(short *)((a4 + 0x3CC)));
            *(float *)((a4 + 0x2A4)) = (float)(*(short *)((a4 + 0x3CE)));
            t24 = 0xC247E00;
            t25 = 0x3;
            for (;;) {
                t25 = (t25 - 0x1);
                *(unsigned int *)((t24 + 0x4)) = 0x0;
                t24 = (t24 + 0x18);
                if (t25 == 0) {
                    break;
                }
            }
            u31 = t21;
        }
        u40 = u31;
    } else {
        t33 = 0xC247E48;
        t34 = 0x4;
        for (;;) {
            t34 = (t34 - 0x1);
            *(unsigned int *)((t33 + 0x4)) = 0x0;
            t33 = (t33 + 0x18);
            if (t34 == 0) {
                break;
            }
        }
    }
    return u40;
}

