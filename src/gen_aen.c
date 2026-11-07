/* Straight-line functions with calls and guards (batch gen_aen): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d9c2(int);
int FUN_0c07a352(int, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c079de4(int a4);

int FUN_0c079de4(int a4)
{
    int stk[7];
    register float u28;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    if (((*(int *)0xC23A258) & 3) == 0) {
        *(float *)(((int)stk + 4)) = (((((float)(unsigned char)(FUN_0c0da2e0()) * 50.0f) / 256.0f)) + -25.0f);
        *(float *)(((int)stk + 8)) = (((float)(unsigned char)(FUN_0c0da2e0()) * (1.0f + 1.0f)) / 256.0f);
        *(float *)(((int)stk + 12)) = (((float)(unsigned char)(FUN_0c0da2e0()) * (1.0f + 1.0f)) / 256.0f);
        FUN_0c0dc5a0();
        nlRotateAY((*(short *)((a4 + 0x62))));
        FUN_0c0db4d0(((int)stk + 4), (((int)stk + 4) + 0xC));
        nlPopMatrix(0x1);
        nlAddVector((((int)stk + 4) + 0xC), (a4 + 0x30));
        u28 = (((float)(unsigned char)(FUN_0c0da2e0()) * 0.5f) / 256.0f);
        FUN_0c07a352((((int)stk + 4) + 0xC), (u28 + 0.5f));
    }
    return (nlPopMatrix(0x1));
}
