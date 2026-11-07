/* Straight-line functions with calls and guards (batch gen_tx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de3c0(int, int);
int FUN_0c0e19f2(int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c07da7e(int a4);

int FUN_0c07da7e(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    u0 = FUN_0c0da410((*(int *)((a4 + 0x54))));
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)0xC23A258;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        u1 = *(float *)((a4 + 0x5C));
                        *(float *)((a4 + 0x5C)) = (u1 - 0.0166666657f);
                        if (!((u1 - 0.0166666657f) > 0.0f)) {
                            FUN_0c0e19f2((t1 & 0x1));
                        }
                    }
                } else {
                    if ((t1 & 0x1) != 0) {
                        t0 = *(int *)((a4 + 0x60));
                        *(unsigned int *)((a4 + 0x60)) = (t0 - 1);
                        if ((int)(t0 - 1) <= (int)0x1) {
                            *(unsigned int *)((a4 + 0x30)) = 0x4;
                        }
                    }
                }
            } else {
                if ((t1 & 0x1) != 0) {
                    t0 = *(int *)((a4 + 0x60));
                    *(unsigned int *)((a4 + 0x60)) = (t0 + 0x1);
                    if ((int)(t0 + 0x1) >= (int)0x5) {
                        *(unsigned int *)((a4 + 0x30)) = 0x3;
                    }
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x4E)) = (int)(u0 * 16383.0f);
            t0 = *(int *)(((0x58 + a4) + 0x0));
            t1 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t1 + t0);
            if ((int)(t1 + t0) >= (int)0x3FFF) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
            }
        }
    } else {
        FUN_0c0db470(0xC23F568, (a4 + 0x34));
        nlGetAverageVector((a4 + 0x40), (a4 + 0x34), (a4 + 0x34), u0, (1.0f - u0));
        t0 = *(int *)(((0x58 + a4) + 0x0));
        t1 = *(int *)((a4 + 0x54));
        *(unsigned int *)((a4 + 0x54)) = (t1 + t0);
        if ((int)(t1 + t0) >= (int)0x3FFF) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(unsigned int *)((a4 + 0x54)) = 0x0;
        }
    }
    FUN_0c0de3c0(0x4, 0x1);
    FUN_0c0dc5a0();
    t0 = *(int *)((a4 + 0x60));
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY(((*(short *)((a4 + 0x4E))) + 0x3FFF));
    nlRotateAZ(0x1555);
    t1 = t0;
    for (;;) {
        FUN_0c0c475c((*(short *)((a4 + 0x52))), (*(float *)((a4 + 0x5C))));
        FUN_0c0dcc70(0.0f, 0.0f, -9.99999975e-05f);
        t0 = t1 == 0;
        t1 = (t1 - 1);
        if (t0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return FUN_0c0de3c0(0x4, 0x5);
}
