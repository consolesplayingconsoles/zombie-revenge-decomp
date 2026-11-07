/* Straight-line functions with calls and guards (batch gen_va): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e6248(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c0294e6(void);

int FUN_0c0294e6(void)
{
    int stk[9];
    register int t10;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R9;
    register int R11;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = *(int *)((((((*(int *)0xC23ED50) << 2) << 1) + 0xC1A1660) + 0x4));
    v0_2 = *(short *)((v0_1 + 0x16));
    v0_0 = (v0_2);
    v0_0 = (0x0);
    v0_1 = (v0_1);
    if ((v0_2 == 0x10A3)) goto L_C02950E;
    L_C029630:;
    v0_0 = (0x0);
    L_C029638:;
    return v0_0;
    L_C02950E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(v0_1); }
    FUN_0c0e6248(v0_1);
    v0_2 = ((((int)stk + 4) + 0x14));
    v0_3 = (((int)stk + 4));
    v0_1 = ((t10 << 2));
    v0_4 = (0xC246FF0);
    if (((*(int *)(((0xC247030 + (t10 << 2)) + 0x0))) != 0)) goto L_C029540;
    goto L_C029630;
    L_C029540:;
    v0_1 = *(int *)(((v0_4 + v0_1) + 0x0));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((*(float *)((v0_1 + 0x30))) - (*(float *)((v0_2 + 0x0)))), ((*(float *)((v0_1 + 0x34))) - (*(float *)((v0_2 + 0x4)))), ((*(float *)((v0_1 + 0x38))) - (*(float *)((v0_2 + 0x8)))));
    nlRotateAX((-(*(short *)((v0_3 + 0x0)))));
    nlRotateAY((-(*(short *)((v0_3 + 0x2)))));
    nlRotateAZ((-(*(short *)((v0_3 + 0x4)))));
    FUN_0c0db840((((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    w0_1 = *(float *)(((int)stk + 20));
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_C029630;
    if ((!(31.6899986f > w0_0))) goto L_C0295AE;
    v0_0 = (0x3);
    L_C0295B6:;
    w0_1 = *(float *)(((int)stk + 12));
    w0_0 = (w0_1);
    if ((-73.0499954f > w0_1)) goto L_C029630;
    if ((!(-10.0f > w0_0))) goto L_C0295CE;
    v0_0 = ((v0_0 + 0x1));
    L_C029634:;
    v0_0 = (v0_0);
    goto L_C029638;
    L_C0295CE:;
    w0_1 = (10.0f);
    if ((!(10.0f > w0_0))) goto L_C029624;
    v0_0 = ((v0_0 + 0x2));
    goto L_C029634;
    L_C029624:;
    if ((!((*(float *)0xC029740) > w0_0))) goto L_C029630;
    v0_0 = ((v0_0 + 0x3));
    goto L_C029634;
    L_C0295AE:;
    w0_1 = (63.2799988f);
    if ((!(63.2799988f > w0_0))) goto L_C029630;
    goto L_C0295B6;
}
