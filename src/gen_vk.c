/* Straight-line functions with calls and guards (batch gen_vk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de3c0(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c057c50(int a4);

int FUN_0c057c50(int a4)
{
    int stk[10];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R10;
    register float F3;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC2475D4;
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((v0_3 + 0x30))), ((*(float *)((v0_3 + 0xB4))) + 0.0699999928f), (*(float *)((v0_3 + 0x38))));
    v0_0 = (v0_3);
    if ((((*(int *)0xC23A258) & 3) == 0)) goto L_C057D3A;
    R10 = (0x5);
    v0_1 = (0xC9);
    v0_2 = (0x0);
    v0_3 = (0xC0DE3C0);
    v0_3 = (0xC246FF0);
    v0_4 = (0x0);
    v0_5 = (0x0);
    v0_6 = (0x0);
    v0_7 = (0x2);
    w0_0 = (0.899999976f);
    w0_1 = (6.0f);
    L_C057CA8:;
    if (((*(int *)(((v0_3 + 0x40) + (v0_2 << 2)))) != 4)) goto L_C057D08;
    if (((*(int *)((((0x514 + v0_3) + v0_4) + 0x0))) != (*(int *)((v0_0 + 0xBC))))) goto L_C057D08;
    if ((!(w0_1 > (*(float *)((v0_5 + (((*(int *)(((int)stk + 4))) + 0xC0) + ((((*(int *)(((0xBC + v0_0) + 0x0))) << 2) << 2) << 2)))))))) goto L_C057D08;
    if ((((*(int *)(((*(int *)(((v0_3 + v0_6) + 0x0))) + 0x20C))) & R10) == 0)) goto L_C057D08;
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c(v0_1, w0_0);
    FUN_0c0de3c0(0x4, 0x5);
    L_C057D3A:;
    return nlPopMatrix(0x1);
    L_C057D08:;
    v0_8 = (int)(v0_2 + 0x1) < (int)v0_7;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    v0_6 = ((v0_6 + 0x4));
    if (v0_8) goto L_C057CA8;
    FUN_0c0848bc(0.699999988f, w0_0, 0.5f);
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c465c(v0_1);
    FUN_0c0de3c0(0x4, 0x5);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    goto L_C057D3A;
}
