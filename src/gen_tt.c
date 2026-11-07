/* Straight-line functions with calls and guards (batch gen_tt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlUnitMatrix(void);
int FUN_0c035458(int a4, int a5);

int FUN_0c035458(int a4, int a5)
{
    int stk[22];
    int t34;
    register int t69;
    int t49;
    register int t65;
    int t56;
    register int t61;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 24))) + 0x3E4))) + ((((*(int *)(((int)stk + 20))) << 2) << 2) << 2)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x3C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x3C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x3C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)((((((int)stk + 4) + 0x48) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((((int)stk + 4) + 0x48) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x8), ((*(float *)(((((int)stk + 4) + 0x30) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x30) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x30) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x8)))));
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x3C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x48) + 0x8)))));
    if (((int)(*(int *)(((int)stk + 4))) > (int)0x1000) && (t34 = *(int *)(((int)stk + 4)), (int)t34 < (int)0x7000)) {
        t69 = (*(int *)(((int)stk + 8)));
    } else {
        if (((int)(*(int *)(((int)stk + 4))) > (int)0x9000) && (t49 = *(int *)(((int)stk + 4)), (int)t49 < (int)0xF000)) {
            t65 = ((*(int *)(((int)stk + 8))) + 0x8000);
        } else {
            if (((int)(*(int *)(((int)stk + 4))) > (int)0x4000) && (t56 = *(int *)(((int)stk + 4)), (int)t56 < (int)0xC000)) {
                t61 = ((*(int *)(((int)stk + 12))) + 0x8000);
            } else {
                t61 = (*(int *)(((int)stk + 12)));
            }
            t65 = t61;
        }
        t69 = t65;
    }
    return t69;
}
