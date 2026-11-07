/* Straight-line functions with calls and guards (batch gen_py): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
extern int FUN_0c0e19f2();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c07a944(int a4, int a5, int a6, int a7);

int FUN_0c07a944(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t6;
    register float t16;
    register int t39;
    register float u18;
    register float u21;
    register int t41;
    register float t65;
    register float t67;
    register float u68;
    register float u30;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t6 = *(int *)((a4 + 0x80));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 == 2) {
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (((*(float *)(((0x90 + a4) + 0x0))) * (1.0f + 1.0f))));
                *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * 0.969999969f);
                *(float *)((a4 + 0x94)) = ((*(float *)((a4 + 0x94))) + -0.0599999987f);
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x94 + a4) + 0x0))));
                t16 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
                t39 = 0;
                if (t16 > (*(float *)((a4 + 0x34)))) {
                    u18 = *(float *)((a4 + 0x94));
                    if (_builtin_fabsf(u18) > 0.199999988f) {
                        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x2000);
                        *(float *)((a4 + 0x34)) = ((t16 + t16) - (*(float *)((a4 + 0x34))));
                        u21 = *(float *)((a4 + 0x94));
                        *(float *)((a4 + 0x94)) = (-(u21 * 0.199999988f));
                        *(unsigned short *)((a4 + 0x64)) = (-(*(short *)((a4 + 0x64))));
                        *(unsigned short *)((a4 + 0x60)) = (-(*(short *)((a4 + 0x60))));
                        u30 = (-(u21 * 0.199999988f));
                    } else {
                        *(float *)((a4 + 0x34)) = t16;
                        *(unsigned short *)((a4 + 0x64)) = 0x0;
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        u30 = _builtin_fabsf(u18);
                    }
                    t39 = ((_builtin_fabsf(u18) > 0.199999988f));
                } else {
                    t39 = (0);
                }
            } else {
                if (t6 == 3) {
                    FUN_0c0553b6(0x19, 0xB, (a4 + 0x30));
                    t41 = ((int (*)(void))(FUN_0c0e19f2))();
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = (int)((FUN_0c0da410((*(int *)((a4 + 0xA4))))) * (float)(*(int *)((a4 + 0x98))));
            *(unsigned short *)((a4 + 0x64)) = (int)((FUN_0c0da410((*(int *)((a4 + 0xA8))))) * (float)(*(int *)((a4 + 0x98))));
            *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) + 0x480);
            *(unsigned int *)((a4 + 0xA8)) = ((*(int *)((a4 + 0xA8))) + 0x700);
            t65 = FUN_0c0da410((*(short *)((a4 + 0x60))));
            t67 = FUN_0c0da410((*(short *)((a4 + 0x64))));
            u68 = _builtin_fabsf((t65 * 10.0f));
            *(float *)((a4 + 0x58)) = (u68 + (_builtin_fabsf((t67 * 20.0f))));
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (*(float *)(((0x90 + a4) + 0x0))));
            if (-135.0f > (*(float *)((a4 + 0x38)))) {
                *(float *)((a4 + 0x94)) = 0.0f;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            } else {
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 16);
                *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * 0.959999979f);
                if ((int)(*(int *)((a4 + 0x98))) < 0) {
                    *(unsigned int *)((a4 + 0x98)) = 0x0;
                    if (0.099999994f > (*(float *)((a4 + 0x90)))) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(float *)((a4 + 0x58)) = 0.0f;
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x64)) = 0x0;
                    }
                }
            }
        }
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x8C))) + 0x1BC))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x98)) = 0x200;
            *(float *)((a4 + 0x90)) = 0.109999999f;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58)))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAZ((*(short *)((a4 + 0x64))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return (nlPopMatrix(0x1));
}
