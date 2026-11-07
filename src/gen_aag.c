/* Straight-line functions with calls and guards (batch gen_aag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0830b2(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0831d0(int a4);

int FUN_0c0831d0(int a4)
{
    int stk[2];

    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    nlPushMatrix(0x0);
    v0_0 = *(int *)((v0_2 + 0x24C));
    v0_1 = (v0_0);
    v0_2 = (v0_2);
    if ((v0_0 == 0)) goto L_C0831F0;
    if ((v0_1 == 1)) goto L_C08320C;
    if ((v0_1 == 2)) goto L_C08325E;
    L_C0832B4:;
    return nlPopMatrix(0x1);
    L_C08325E:;
    FUN_0c0830b2(0x3);
    FUN_0c0830b2(0x4);
    FUN_0c0830b2(0x5);
    FUN_0c0830b2(0x6);
    FUN_0c0830b2(0x7);
    FUN_0c0830b2(0x8);
    FUN_0c0830b2(0x9);
    nlUnitMatrix();
    FUN_0c0dcca0((0x278 + v0_2));
    nlRotateAY((int)(*(float *)((v0_2 + 0x2A4))));
    nlRotateAX((int)(*(float *)((v0_2 + 0x2A0))));
    *(float *)0xC2009A8 = (-(*(float *)((v0_2 + 0x29C))));
    v0_0 = (0x254);
    L_C0832AC:;
    FUN_0c0db470(0xC2009A0, (v0_0 + v0_2));
    goto L_C0832B4;
    L_C08320C:;
    FUN_0c0830b2(0x0);
    FUN_0c0830b2(0x1);
    FUN_0c0830b2(0x2);
    FUN_0c0830b2(0x6);
    FUN_0c0830b2(0x7);
    FUN_0c0830b2(0x8);
    FUN_0c0830b2(0x9);
    nlUnitMatrix();
    FUN_0c0dcca0((0x254 + v0_2));
    nlRotateAY((int)(*(float *)((v0_2 + 0x2A4))));
    nlRotateAX((int)(*(float *)((v0_2 + 0x2A0))));
    *(float *)0xC2009A8 = (-(*(float *)((v0_2 + 0x29C))));
    v0_0 = (0x278);
    goto L_C0832AC;
    L_C0831F0:;
    FUN_0c0830b2(0x0);
    FUN_0c0830b2(0x1);
    FUN_0c0830b2(0x2);
    FUN_0c0830b2(0x3);
    FUN_0c0830b2(0x4);
    FUN_0c0830b2(0x5);
    goto L_C0832B4;
}
