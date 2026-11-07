/* Straight-line functions with calls and guards (batch gen_qb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a8016(int, int, int);
int FUN_0c0be6ee(int, int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c09406c(int a4);

int FUN_0c09406c(int a4)
{
    int stk[23];
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t16;
    register float u19;
    register int t20;
    register float t21;
    register float u42;
    register int t64;
    register int t67;
    register int t69;

    nlPushMatrix((((((*(int *)((a4 + 0x84))) << 8) + 0xC25F840) + (((((*(int *)((a4 + 0x88))) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (a4 + 0x34);
    *(unsigned int *)(((int)stk + 40)) = 0x13;
    t7 = *(int *)((a4 + 0x30));
    t9 = t7;
    t10 = (t7 + 0xC);
    t11 = (*(int *)((a4 + 0x8C)));
    for (;;) {
        t12 = t10;
        t10 = (t10 + 0xC);
        t13 = t9;
        t9 = (t9 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t13) = *(struct mv3 *)(t12); }
        t11 = (t11 - 0x1);
        if (t11 == 0) {
            break;
        }
    }
    FUN_0c0db840((((int)stk + 4) + 0x34));
    t16 = *(int *)((a4 + 0x8C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t16 << 1) + t16) << 2) + (*(int *)((a4 + 0x30))))) = *(struct mv3 *)((((int)stk + 4) + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x40)) = *(struct mv3 *)((*(int *)((a4 + 0x30)))); }
    *(unsigned int *)(((int)stk + 24)) = 0xC200B60;
    *(unsigned int *)(((int)stk + 12)) = 0xC200B78;
    *(unsigned int *)(((int)stk + 28)) = 0xC200B48;
    *(unsigned int *)(((int)stk + 32)) = 0xC200B54;
    u19 = 1.0f;
    for (;;) {
        t20 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t20 + 0x638);
        t21 = FUN_0c0da410((t20 + 0x638));
        *(float *)(((int)stk + 44)) = (t21 * 0.5f);
        FUN_0c0a8016(((*(int *)((a4 + 0x30))) + 0xC), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (((int)stk + 4) + 0x4C));
        nlSubVector3op((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x40), (((int)stk + 4) + 0x4C));
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 56))), (*(float *)(((int)stk + 60))), (*(float *)(((int)stk + 64))));
        nlUnitMatrix();
        nlRotateAX((-(*(int *)(((int)stk + 4)))));
        nlRotateAY((-(*(int *)(((int)stk + 8)))));
        FUN_0c0dcc80((((int)stk + 4) + 0x4C));
        FUN_0c0dcca0((((int)stk + 4) + 0x40));
        nlRotateAY((*(int *)(((int)stk + 48))));
        nlRotateAX((*(int *)(((int)stk + 52))));
        u42 = (t21 * t21);
        u19 = (u19 * 4.0f);
        *(float *)(((*(int *)(((int)stk + 24))) + 0x0)) = (u42 * 4.0f);
        *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = u19;
        FUN_0c0db470((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 28))));
        FUN_0c0db470(0xC200B84, (*(int *)(((int)stk + 32))));
        FUN_0c0be6ee(0x3C7, 0xC200B48);
        FUN_0c0848d6(1.0f, (t21 * t21), (t21 * t21));
        FUN_0c0dbda0(((*(int *)(((int)stk + 36))) + 0x2AC));
        FUN_0c0dcca0((((int)stk + 4) + 0x4C));
        nlRotateAY((*(int *)(((int)stk + 8))));
        nlRotateAX((*(int *)(((int)stk + 4))));
        FUN_0c0c475c(0x3C7, (*(float *)(((int)stk + 44))));
        *(unsigned int *)(((int)stk + 52)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((int)stk + 48)) = (*(int *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x40)) = *(struct mv3 *)((((int)stk + 4) + 0x4C)); }
        u19 = (t21 * t21);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
        t64 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((int)stk + 40)) = (t64 - 1);
        if ((t64 - 1) != 0) continue;
        break;
    }
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    t67 = *(int *)((a4 + 0x90));
    *(unsigned int *)((a4 + 0x90)) = (t67 - 1);
    t69 = 0x90;
    if ((int)(t67 - 1) <= 0) {
        t69 = (FUN_0c0e19f2());
    }
    return t69;
}
