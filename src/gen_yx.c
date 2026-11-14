/* Straight-line functions with calls and guards (batch gen_yx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
int FUN_0c0e631c(int, int, int);
int FUN_0c0f29d8(int, int, int);
int FUN_0c0f31b8(int, int);
int FUN_0c0f2b70(int a4, int a5, int a6, Stk2 s);

int FUN_0c0f2b70(int a4, int a5, int a6, Stk2 s)
{
    int stk[17];
    register int t1;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t19;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    t1 = 0x1;
    if (((unsigned short)(*(short *)((((((int)stk + 4) + 0x18) + 0x6) + 0x0))) & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    *(unsigned short *)((a5 + 0x0)) = (*(short *)((((((int)stk + 4) + 0x18) + 0x6) + 0x0)));
    *(unsigned short *)((a5 + 0x0)) = ((int)((*(short *)((a5 + 0x0))) & 0x7FF0) >> 4);
    FUN_0c0f31b8(((int)stk + 4), (((((int)stk + 4) + 0x18) + 0x6) - 2));
    FUN_0c0e631c(a6, (((int)stk + 4) + 0x1), 0x3);
    FUN_0c0f31b8(((int)stk + 4), (((((int)stk + 4) + 0x18) + 0x6) - 6));
    FUN_0c0e631c((a6 + 0x3), ((int)stk + 4), 0x4);
    FUN_0c0f29d8(a6, 0x7, 0x3);
    if ((int)(*(short *)((a5 + 0x0))) > 0) {
        t11 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t11 | 0x80);
        t19 = (t11 | 0x80);
    } else {
        t12 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t12 + 0x1);
        t13 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t13 & 0x7F);
        t14 = (t13 & 0x7F);
        t15 = (t12 + 0x1);
        for (;;) {
            if (((unsigned char)(*(signed char *)((a6 + 0x0))) & 0x80) != 0) {
                break;
            }
            t14 = (FUN_0c0f29d8(a6, 0x7, 0x1));
            t15 = (*(short *)((a5 + 0x0)));
            t15 = (t15 - 1);
            *(unsigned short *)((a5 + 0x0)) = t15;
        }
        t19 = t14;
    }
    return t19;
}
