/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c037088(int a4, int a5, int a6, int a7);

int FUN_0c037088(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t10;
    int t13;
    int t15;

    FUN_0c0da2e0();
    t1 = FUN_0c0e5f1c();
    t2 = *(int *)((a4 + 0x4C0));
    t3 = *(int *)0xC2462F8;
    if ((*(int *)((a4 + 0x330))) != 0) {
        *(volatile int *)0xC23ED70;
        t6 = FUN_0c0e5dc0();
        t7 = (a4 + t6);
        if ((int)(a4 + t6) < 0) {
            t7 = a7;
        }
        t10 = t7;
        if ((int)t7 > (int)a5) {
            t10 = a5;
        }
        if ((int)(*(int *)(((t10 << 2) + 0xC1EFF78))) <= (int)a6) {
            return 0x0;
        }
        return 0x1;
    }
    t13 = (t3 + t2);
    if ((int)(t3 + t2) < 0) {
        t13 = 0x0;
    }
    t15 = t13;
    if ((int)t13 > (int)0xF) {
        t15 = 0xF;
    }
    if ((int)(*(int *)(((t15 << 2) + 0xC1EFF38))) > (int)t1) {
        return 0x1;
    }
    return 0x0;
}
