/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int);
int FUN_0c0c5d32(int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0e19f2(void);
int FUN_0c0c6534(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };


int FUN_0c0c6534(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t15;
    register int t16;
    register int t22;
    int t1;
    register int t35;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    if (((*(int *)0xC23ED50) == 14) && (t1 = *(int *)0xC2475B0, (t1 & 1) != 0)) {
    } else {
        FUN_0c0e19f2();
    }
    if ((((((struct o0_int *)0xC247030)->v)) != 4) && (t35 = (((struct o4_int *)0xC247030)->v), t35 != 4)) {
    } else {
        t35 = 0x84;
        if ((int)(*(int *)0xC247074) <= (int)0x1) {
            FUN_0c0db470(0xC1E9804, (((int)stk + 4) + 0x4));
            FUN_0c0c5d32((((int)stk + 4) + 0x4), (*(float *)0xC0C6614));
            t15 = R1004;
            t16 = *(int *)((t15 + 0x34));
            *(unsigned int *)((t15 + 0x34)) = (t16 + 0x1);
            if (t16 == 0) {
                FUN_0c0cc3f8(0x0, 0x0, 0x0, 0x0);
            }
            t22 = *(int *)0xC23A258;
            t35 = t22;
            if ((t22 & 1) != 0) {
                t35 = (FUN_0c0c0340(0xC1E96A8));
            }
        }
    }
    return t35;
}
