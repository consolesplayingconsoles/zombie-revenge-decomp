/* Straight-line functions with calls and guards (batch gen_kc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c09d6fe(int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c062fba(int a4, int a5, int a6, int a7);
struct o3B0_int { char p[0x3B0]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o4D0_int { char p[0x4D0]; int v; };


int FUN_0c062fba(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t19;
    register int t21;
    int t3;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((int)((((struct o3B0_int *)(t0))->v)) > 0) && (t3 = (((struct o4D0_int *)(t0))->v), t3 == 0)) {
    } else {
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((((((struct o40_int *)(a4))->v)) << 2) << 2) << 2) + ((((struct o3E4_int *)(t0))->v))));
    FUN_0c0dcca0((*(int *)0xC247B9C));
    FUN_0c0dcca0((a4 + 0x34));
    FUN_0c0db840(((int)stk + 4));
    nlPopMatrix(0x1);
    t19 = FUN_0c09d6fe((a4 + 0x48), (*(int *)0xC247B98), ((int)stk + 4), (((((((struct o44_int *)(a4))->v)) == 0)) ? 1 : 0));
    t21 = t19;
    if (t19 == 0) {
        t21 = (FUN_0c0e19f2());
    }
    return t21;
}
