/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c0e06de(void);

int FUN_0c0e06de(void)
{
    int stk[4];
    register int t5;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)((int)((int)(((((struct o0_int *)0xC94C6A0)->v)) + 0x1F) / (int)0x20))) {
            return 0xFFFFFFFF;
        }
        t5 = *(int *)((((*(int *)(((int)stk + 12))) << 2) + ((((struct o4_int *)0xC94C6A0)->v))));
        *(unsigned int *)(((int)stk + 4)) = t5;
        if (t5 != -1) {
            break;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    for (;;) {
        if (((*(int *)(((int)stk + 4))) & (*(int *)(((int)stk + 0)))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) << 1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    t12 = *(int *)(((int)stk + 12));
    t13 = (((struct o4_int *)0xC94C6A0)->v);
    *(unsigned int *)(((t12 << 2) + t13)) = ((*(int *)(((t12 << 2) + t13))) | (*(int *)(((int)stk + 0))));
    return (((((*(int *)(((int)stk + 12))) << 2) << 2) << 1) + (*(int *)(((int)stk + 8))));
}
