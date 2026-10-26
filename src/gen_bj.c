/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c062934(int, float, float);
int FUN_0c062a74(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(void);
int FUN_0c062b5e(int a4);

int FUN_0c062b5e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;

    t0 = *(int *)((a4 + 0x22C));
    t1 = *(int *)((a4 + 0x240));
    t2 = FUN_0c062a74(a4);
    if (t2 == 0) {
        FUN_0c0e19f2();
    }
    _quick_odd_mvn();
    FUN_0c062934(a4, 200.0f, (((float)t0 / (float)t1) * 1.0f));
    t8 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t8 - 1);
    if ((int)(t8 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x22C;
}
