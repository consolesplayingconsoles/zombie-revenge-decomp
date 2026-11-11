/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dfcee(float, float);
int _divls(void);
int FUN_0c0df660(int a4, int a5, int a6);
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c0df660(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    R1008 = v0_2;
    (((struct o0_uint *)0xC94C698)->v) = 0xFFFFFFFF;
    if (((int)(*(int *)(((int)stk + 12))) <= (int)(R1008))) goto L_C0DF686;
    (((struct o0_uint *)0xC94C698)->v) = 0x0;
    L_C0DF682:;
    goto L_C0DF682;
    L_C0DF686:;
    FUN_0c0dfcee(640.0f, 480.0f);
    (((struct o8_uint *)0xC94C698)->v) = (*(int *)(((int)stk + 12)));
    (((struct o4_uint *)0xC94C698)->v) = (*(int *)(((int)stk + 16)));
    v0_0 = R1008;
    v0_1 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_1) + 0x3) & 0xFFFFFFFC);
    (((struct oC_uint *)0xC94C698)->v) = ((((v0_0 << 1) + v0_1) + 0x3) & 0xFFFFFFFC);
    *(volatile int *)(((int)stk + 12));
    v0_0 = _divls();
    v0_1 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 2) + v0_1) + 0x3) & 0xFFFFFFFC);
    (((struct o10_uint *)0xC94C698)->v) = ((((v0_0 << 2) + v0_1) + 0x3) & 0xFFFFFFFC);
    R1004 = 0x0;
    L_C0DF70A:;
    if (((int)(R1004) < (int)(R1008))) goto L_C0DF6F8;
    R1004 = 0x0;
    L_C0DF72C:;
    *(volatile int *)0xC94C6A0;
    v0_0 = _divls();
    v0_1 = (v0_0);
    if (((int)(R1004) < (int)v0_0)) goto L_C0DF71A;
    return v0_1;
    L_C0DF71A:;
    *(unsigned int *)((((R1004) << 2) + ((((struct oC_int *)0xC94C698)->v)))) = 0x0;
    R1004 = ((R1004) + 0x1);
    goto L_C0DF72C;
    L_C0DF6F8:;
    *(unsigned short *)((((R1004) << 1) + ((((struct o4_int *)0xC94C698)->v)))) = 0xFFFFFFFF;
    R1004 = ((R1004) + 0x1);
    goto L_C0DF70A;
}
