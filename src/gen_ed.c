/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int nlAddVector3op(int, int, int);
int FUN_0c0913aa(int a4, float f4);

int FUN_0c0913aa(int a4, float f4)
{
    int t0;
    int t2;
    int t28;
    int t20;
    int stk[7];

    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    if ((t0 & 0x3) == 0) {
        t2 = FUN_0c0e19aa(0xC0914FE, 0xB4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        FUN_0c0dce80(((int)stk + 4), (a4 + 0x48), (1.0f + 1.0f));
        nlAddVector3op((t2 + 0x30), (a4 + 0x30), ((int)stk + 4));
        *(float *)((t2 + 0x74)) = (*(float *)((a4 + 0x74)));
        *(unsigned int *)((t2 + 0x78)) = 0xFB;
        *(unsigned int *)((t2 + 0xA0)) = 0x7;
        *(float *)((t2 + 0x48)) = (*(float *)((a4 + 0x48)));
        *(float *)((t2 + 0x4C)) = (*(float *)((a4 + 0x4C)));
        *(float *)((t2 + 0x50)) = (*(float *)((a4 + 0x50)));
        *(unsigned short *)(((0x64 + t2) + 0x0)) = (FUN_0c0da2e0());
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * 0.799999952f);
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.199999988f);
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.799999952f);
        *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) - 1.0f);
    } else {
        t20 = a4;
    }
    t28 = 0xA0;
    if ((int)(*(int *)((a4 + 0xA0))) <= 0) {
        t28 = (FUN_0c0e19f2(t20));
    }
    return t28;
}
