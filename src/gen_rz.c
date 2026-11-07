/* Straight-line functions with calls and guards (batch gen_rz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dcca0(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0c8e40(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c8e40(int a4, int a5, int a6, int a7, float f4)
{
    int stk[17];
    register int t1;
    register int t17;
    register int t19;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register float u65;
    register float u72;
    register float u79;
    register int t88;
    register int t90;
    register int t92;
    register int t0;
    int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x34);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x34) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x34) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x28);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x28) + 0x4);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 4) + 0x28) + 0x8);
    t1 = a7;
    for (;;) {
        if ((int)(*(short *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) >= 0) {
            t0 = (nlPushMatrix(0x0));
            t0 = (*(short *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x2)));
            *(unsigned short *)(((((int)stk + 4) + 0x24) + 0x0)) = t0;
            if ((int)t1 < 0) {
            } else {
                t0 = (FUN_0c0dcca0(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x4)));
                t17 = *(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0x0));
                t19 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0));
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((int)t17 >> 4) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = (((int)t17 >> 14) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = ((((t17 << 2) << 2) << 2) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = (((int)t19 >> 4) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (((int)t19 >> 14) & 0xFFC0);
                *(unsigned int *)(((*(int *)(((int)stk + 36))) + 0x0)) = ((((t19 << 2) << 2) << 2) & 0xFFC0);
                t27 = (((int)t19 >> 14) & 0xFFC0);
                t28 = 0x0;
                t29 = 0x0;
                t30 = (*(int *)(((int)stk + 12)));
                t31 = (*(int *)(((int)stk + 8)));
                for (;;) {
                    if ((int)t29 >= (int)0x3) {
                        break;
                    }
                    t2 = t29;
                    t2 = (t2 << 2);
                    t0 = t2;
                    t27 = (*(int *)(((((int)stk + 4) + 0x28) + t0)));
                    if ((int)(*(int *)(((((int)stk + 4) + 0x34) + t0))) < (int)t27) {
                        t0 = t2;
                        t27 = (*(int *)(((((int)stk + 4) + 0x34) + t0)));
                        if ((int)((*(int *)(((((int)stk + 4) + 0x28) + t0))) - t27) > (int)0x8000) {
                            t27 = (*(int *)((t30 + 0x0)));
                            t27 = (t27 + 0x10000);
                            *(unsigned int *)((t30 + 0x0)) = t27;
                        }
                    } else {
                        t0 = t28;
                        t27 = (*(int *)(((((int)stk + 4) + 0x28) + t0)));
                        if ((int)((*(int *)(((((int)stk + 4) + 0x34) + t0))) - t27) > (int)0x8000) {
                            t27 = (*(int *)((t31 + 0x0)));
                            t27 = (t27 + 0x10000);
                            *(unsigned int *)((t31 + 0x0)) = t27;
                        }
                    }
                    t28 = (t28 + 0x4);
                    t30 = (t30 + 0x4);
                    t29 = (t29 + 0x1);
                    t31 = (t31 + 0x4);
                }
                t2 = (*(int *)(((int)stk + 24)));
                t2 = (*(int *)((t2 + 0x0)));
                u65 = (float)t2;
                u65 = u65 + f4 * ((float)((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))) - t2));
                t0 = (nlRotateAZ((int)u65));
                t2 = (*(int *)(((int)stk + 12)));
                t2 = (*(int *)((t2 + 0x0)));
                u72 = (float)t2;
                u72 = u72 + f4 * ((float)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - t2));
                t0 = (nlRotateAY((int)u72));
                t2 = (*(int *)(((int)stk + 32)));
                t2 = (*(int *)((t2 + 0x0)));
                u79 = (float)t2;
                u79 = u79 + f4 * ((float)((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) - t2));
                t0 = (nlRotateAX((int)u79));
                if (t1 == 0) {
                    t0 = (nlGetMatrix(0xC31FD40));
                }
                t1 = (t1 - 1);
            }
            t88 = *(int *)(((int)stk + 20));
            t0 = 0x24;
            *(unsigned int *)((t88 + 0x0)) = ((*(int *)((t88 + 0x0))) + 0x4);
            t90 = *(int *)(((int)stk + 16));
            *(unsigned int *)((t90 + 0x0)) = ((*(int *)((t90 + 0x0))) + 0x4);
            t92 = *(int *)(((int)stk + 4));
            *(unsigned int *)((t92 + 0x0)) = ((*(int *)((t92 + 0x0))) + 0x10);
            t2 = (*(short *)((((int)stk + 4) + t0)));
            t2 = (unsigned short)t2;
            if ((0x1 & t2) != 0) {
                t0 = (((int (*)(int, int, int, int, float))(FUN_0c0c8e40))((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), t1, f4));
                t1 = t0;
            }
            t0 = (nlPopMatrix(0x1));
            if ((t2 & 0x2) == 0) continue;
            break;
        }
        break;
    }
    return t1;
}
