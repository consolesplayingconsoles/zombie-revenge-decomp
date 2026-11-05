/* Straight-line functions with calls and guards (batch gen_ki): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c094ad8(int a4);

int FUN_0c094ad8(int a4)
{
    int stk[7];
    register int t1;
    register float u10;
    register int t14;
    register int t36;
    register int t44;
    register int t42;
    register int t34;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 4)) = 0xC247ED8;
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    nlRotateAZ((*(int *)((a4 + 0x58))));
    u10 = *(float *)((a4 + 0x54));
    nlScale(u10, u10, u10);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    t14 = *(int *)(((int)stk + 4));
    FUN_0c0848bc(((*(float *)(((a4 + 0x48) + 0x0))) * (*(float *)(((t14 + 0x10) + 0x0)))), ((*(float *)(((a4 + 0x48) + 0x4))) * (*(float *)(((t14 + 0x10) + 0x4)))), ((*(float *)(((a4 + 0x48) + 0x8))) * (*(float *)(((t14 + 0x10) + 0x8)))));
    FUN_0c0c465c(((*(int *)((a4 + 0x60))) + 0xFB));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.0399999991f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.998999953f);
    if (((*(int *)0xC23A258) & 0x1) == 0) {
        if ((*(int *)((a4 + 0x5C))) != 0) {
            t34 = ((*(int *)((a4 + 0x60))) - 1);
        } else {
            t34 = ((*(int *)((a4 + 0x60))) + 0x1);
        }
        *(unsigned int *)((a4 + 0x60)) = t34;
        t36 = *(int *)((a4 + 0x60));
        if (((int)t36 <= 0) || ((int)t36 >= (int)0x3)) {
            *(unsigned int *)((a4 + 0x5C)) = ((*(int *)((a4 + 0x5C))) ^ 0x1);
        }
        t42 = t36;
    }
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) * 0.98999995f);
    t44 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t44 - 1);
    if ((int)(t44 - 1) <= 0) {
        return FUN_0c0e19f2(t42, 0x1);
    }
    return 0x64;
}
