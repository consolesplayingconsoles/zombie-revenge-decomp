/* Straight-line functions with calls and guards (batch gen_afi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c08ab5a(int a4);

int FUN_0c08ab5a(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_0 = a4;
    v0_1 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_0 + 0x3C)));
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((v0_1 + 0x0))), (*(float *)((v0_0 + 0x4C))), (*(float *)((v0_1 + 0x8))));
    nlRotateAY(0xBFFF);
    FUN_0c0dcca0(0xC10AB34);
    w0_0 = *(float *)((v0_0 + 0x50));
    nlScale(w0_0, w0_0, w0_0);
    FUN_0c0de000((*(float *)((v0_0 + 0x50))));
    FUN_0c0c465c(((*(int *)((v0_0 + 0x58))) + 0x2F2));
    nlPopMatrix(0x1);
    v0_2 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)((v0_0 + 0x5C)) = (v0_2 + 0x1);
    v0_1 = (v0_0);
    if (((int)((v0_2 + 0x1) - 1) < (int)(*(int *)((v0_0 + 0x64))))) goto L_C08ABE0;
    *(unsigned int *)((v0_1 + 0x5C)) = 0x0;
    v0_2 = *(int *)((v0_1 + 0x58));
    *(unsigned int *)((v0_1 + 0x58)) = (v0_2 + 0x1);
    v0_3 = (0x58);
    v0_0 = (0x0);
    if (((int)(v0_2 + 0x1) < (int)0xF)) goto L_C08ABE0;
    *(unsigned int *)((v0_1 + v0_3)) = v0_0;
    L_C08ABE0:;
    if (((*(int *)((0xC247030 + ((*(int *)((v0_1 + 0x30))) << 2)))) != 4)) goto L_C08ABFA;
    v0_3 = (0x4);
    if (!((!((*(float *)(((*(int *)(((int)stk + 4))) + 0x4))) > 3.0f)))) goto L_C08ABFA;
    return v0_3;
    L_C08ABFA:;
    return FUN_0c0e19f2(v0_0);
}
