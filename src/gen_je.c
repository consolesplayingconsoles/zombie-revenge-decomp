/* Straight-line functions with calls and guards (batch gen_je): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0685a4(int);
int FUN_0c075bae(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06b29c(int a4, int a5, int a6, int a7);

int FUN_0c06b29c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t22;
    register int t4;

    t0 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t4 = a4;
    }
    FUN_0c0685a4(t4);
    if ((*(int *)((a4 + 0xD8))) != 0) {
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        FUN_0c0cc3f8(0xD21A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c075bae((a4 + 0x30));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - 6.0f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    nlPopMatrix(0x1);
    t22 = *(int *)0xC23ED9C;
    if (t22 == 4) {
        return FUN_0c01cdc2(a4);
    }
    return t22;
}
