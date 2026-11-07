/* Straight-line functions with calls and guards (batch gen_abv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c02a19a(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int, Stk3);
int FUN_0c04685c(int, int, float, float);
int FUN_0c09c42c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5f1c(void);
int FUN_0c0480ec(int a4);

int FUN_0c0480ec(int a4)
{
    int stk[7];
    register int t1;
    register int t20;
    register int t24;
    register int t48;

    FUN_0c034fbc(a4, 0x80, 0x1, 0x0);
    t1 = *(int *)((a4 + 0x3A0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 != 4) {
                        if (t1 == 5) {
                            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                                *(unsigned int *)((a4 + 0x398)) = 0x384;
                                *(unsigned int *)((a4 + 0x534)) = 0x0;
                                *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                                FUN_0c02a19a(a4);
                            }
                        }
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F6750); }
                        *(float *)(((int)stk + 8)) = 20.0f;
                        FUN_0c046294(a4, ((int)stk + 4), 0x1, *(Stk3 *)(((int)stk + 4)));
                        FUN_0c046170(a4, 0.0249999985f);
                        t20 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t20 - 1);
                        if ((int)(t20 - 1) < 0) {
                            FUN_0c09c42c(a4);
                            *(unsigned int *)((a4 + 0x2C4)) = 0x5A6;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        } else {
                            *(volatile int *)((a4 + 0x3AC));
                            t24 = FUN_0c0e5f1c();
                            if (t24 == 0) {
                                FUN_0c0cc3f8(0x324A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            }
                        }
                    }
                } else {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x5A5;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x3AC)) = 0xB4;
                        FUN_0c0cc3f8(0x324A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                }
            } else {
                t48 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t48 - 1);
                if ((int)(t48 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x5A4;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
            }
        } else {
            if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x5A3;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x5A2;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
}
