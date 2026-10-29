/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int, Stk3);
int FUN_0c010f0a(void);
void FUN_0c08214c(int a4, int a5, int a6, int a7);

int FUN_0c010f0a(void)
{
    int stk[5];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F4110); }
    nlPushMatrix(0x0, *(Stk3 *)(((int)stk + 4)));
    FUN_0c0dcca0(((int)stk + 4));
    FUN_0c0c465c(0x13FD);
    return (nlPopMatrix(0x1));
}

void FUN_0c08214c(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)0xC247D04 = (*(int *)((a4 + 0x34)));
        { struct mv7 { int w[7]; }; *(struct mv7 *)(0xC247CB8) = *(struct mv7 *)((a4 + 0x38)); }
        FUN_0c0e19f2(a4, a5, a6, a7);
    return;
    }
}
