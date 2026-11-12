/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dfcee(float, float);
int _divls(void);
int FUN_0c0df660(int a4, int a5, int a6);
struct o8_int { char p[0x8]; int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c0df660(int a4, int a5, int a6)
{
    int stk[4];
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t20;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    (((struct o0_uint *)0xC94C698)->v) = 0xFFFFFFFF;
    if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 4)))) {
        (((struct o0_uint *)0xC94C698)->v) = 0x0;
        for (;;) {
        }
    }
    FUN_0c0dfcee(640.0f, 480.0f);
    (((struct o8_uint *)0xC94C698)->v) = (*(int *)(((int)stk + 8)));
    (((struct o4_uint *)0xC94C698)->v) = (*(int *)(((int)stk + 12)));
    t5 = *(int *)(((int)stk + 4));
    t7 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = ((((t5 << 1) + t7) + 0x3) & 0xFFFFFFFC);
    (((struct oC_uint *)0xC94C698)->v) = ((((t5 << 1) + t7) + 0x3) & 0xFFFFFFFC);
    t9 = (int)((int)((*(int *)(((int)stk + 8))) + 0x1F) / (int)0x20);
    t10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    (((struct o10_uint *)0xC94C698)->v) = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t11 = ((((t9 << 2) + t10) + 0x3) & 0xFFFFFFFC);
    t12 = 0xFFFFFFFC;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)(*(int *)(((int)stk + 4)))) {
            break;
        }
        t12 = (*(int *)(((int)stk + 0)));
        t12 = (t12 << 1);
        t11 = ((((struct o4_int *)0xC94C698)->v));
        *(unsigned short *)((t12 + t11)) = 0xFFFFFFFF;
        t12 = (*(int *)(((int)stk + 0)));
        t12 = (t12 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t12;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        t20 = (int)((int)(((((struct o8_int *)0xC94C698)->v)) + 0x1F) / (int)0x20);
        if ((int)(*(int *)(((int)stk + 0))) >= (int)t20) {
            break;
        }
        *(unsigned int *)((((*(int *)(((int)stk + 0))) << 2) + ((((struct oC_int *)0xC94C698)->v)))) = 0x0;
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    return t20;
}
