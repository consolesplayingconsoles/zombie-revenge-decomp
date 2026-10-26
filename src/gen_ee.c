/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0c465c(int);
int FUN_0c0c8d06(int, Stk3);
int FUN_0c0dcca0(int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06ece4(int a4);

int FUN_0c06ece4(int a4)
{
    int t2;
    int t8;
    int stk[7];

    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x90 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
    t2 = FUN_0c0c8d06(((int)stk + 4), *(Stk3 *)(((int)stk + 4)));
    if ((int)t2 >= 0) {
        if ((*(float *)(((int)stk + 8))) > (*(float *)((a4 + 0x34)))) {
            t8 = FUN_0c0e18ce(0xC08C1AA, 0xA4);
            FUN_0c0e19d0(t8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x70)) = *(struct mv3 *)(((int)stk + 4)); }
            *(float *)((t8 + 0x90)) = 0.5f;
            *(unsigned short *)((t8 + 0x9A)) = 0x3B7;
            *(unsigned short *)((t8 + 0xA0)) = 0xF;
            FUN_0c0e19f2();
        }
    } else {
        if (0.0f > (*(float *)((a4 + 0x34)))) {
            FUN_0c0e19f2();
        }
    }
    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * (*(float *)(((0x94 + a4) + 0x0))));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return (nlPopMatrix(0x1));
}
