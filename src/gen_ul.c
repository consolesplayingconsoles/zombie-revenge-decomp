/* Straight-line functions with calls and guards (batch gen_ul): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlRotateAX(int, float, float);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0b2262(int a4);

int FUN_0c0b2262(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    int R7;
    register int R8;
    register int R9;
    register int R12;
    register float F4;
    register float F5;
    register float F6;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    nlUnitMatrix();
    v0_4 = *(int *)((v0_3 + 0x24C));
    v0_5 = (v0_4);
    v0_1 = (0xC23ED88);
    v0_0 = (v0_3);
    v0_3 = (0x10000);
    v0_6 = (0x4);
    v0_2 = (0xC202CA0);
    R7 = (0xFFFFFFFB);
    if ((v0_4 == 0)) goto L_C0B2290;
    if ((v0_5 == 1)) goto L_C0B22A8;
    if ((v0_5 == 2)) goto L_C0B22FC;
    if ((v0_5 == 3)) goto L_C0B2334;
    L_C0B2372:;
    *(unsigned short *)((v0_0 + 0x3CC)) = (*(short *)((v0_0 + 0x3D4)));
    *(unsigned short *)((v0_0 + 0x3CE)) = (*(short *)((v0_0 + 0x3D8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + v0_0)) = *(struct mv3 *)((0x260 + v0_0)); }
    nlRotateAX((-(*(short *)((v0_0 + 0x3CC)))), F4, F5);
    nlRotateAY((-(*(short *)((v0_0 + 0x3CE)))));
    FUN_0c0dcc70((-(*(float *)((v0_0 + 0x254)))), (-(*(float *)((v0_0 + 0x258)))), (-(*(float *)((v0_0 + 0x25C)))));
    nlGetMatrix((0x2AC + v0_0));
    nlInvertMatrix(0x0);
    nlGetMatrix((0x2EC + v0_0));
    return FUN_0c0dbda0((0x2AC + v0_0));
    L_C0B2334:;
    if (((v0_6 & (*(int *)((v0_1 + 0x0)))) == 0)) goto L_C0B2372;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) & R7);
    *(unsigned int *)((v0_0 + 0x420)) = v0_3;
    v0_1 = *(int *)((v0_0 + 0x400));
    *(unsigned int *)((v0_0 + 0x400)) = (v0_1 + 0x1);
    *(unsigned int *)((v0_0 + 0x41C)) = (*(int *)((v0_2 + ((v0_1 + 0x1) << 2))));
    *(unsigned int *)((v0_0 + 0x24C)) = 0x2;
    FUN_0c0a7ed4((*(int *)((v0_0 + 0x41C))), (*(int *)((v0_0 + 0x420))), (0x260 + v0_0), (0x3D4 + v0_0));
    goto L_C0B2372;
    L_C0B22FC:;
    FUN_0c0a7ed4((*(int *)((v0_0 + 0x41C))), (*(int *)((v0_0 + 0x420))), (0x260 + v0_0), (0x3D4 + v0_0));
    *(unsigned int *)((v0_0 + 0x420)) = ((*(int *)((v0_0 + 0x420))) + 0x444);
    if ((((*(int *)((v0_1 + 0x0))) & 8) == 0)) goto L_C0B2372;
    v0_2 = (((*(int *)((v0_1 + 0x0))) & 0xFFFFFFF7));
    L_C0B2328:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    *(unsigned int *)((v0_0 + 0x24C)) = ((*(int *)((v0_0 + 0x24C))) + 0x1);
    goto L_C0B2372;
    L_C0B22A8:;
    if (((v0_6 & (*(int *)((v0_1 + 0x0)))) == 0)) goto L_C0B2372;
    v0_2 = (((*(int *)((v0_1 + 0x0))) & R7));
    goto L_C0B2328;
    L_C0B2290:;
    *(unsigned int *)((v0_0 + 0x41C)) = (*(int *)((v0_2 + ((*(int *)((v0_0 + 0x400))) << 2))));
    *(unsigned int *)((v0_0 + 0x420)) = v0_3;
    *(unsigned int *)((v0_0 + 0x24C)) = ((*(int *)((v0_0 + 0x24C))) + 0x1);
    goto L_C0B22A8;
}
