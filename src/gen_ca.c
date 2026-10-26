/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0909fc(int);
int FUN_0c09d320(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0e19f2(void);
int FUN_0c0e61d4(int);
int FUN_0c0e6248(void);
int FUN_0c063a90(int a4);

int FUN_0c063a90(int a4)
{
    int t1;
    int t2;
    int t31;
    int t7;
    int t16;
    int t25;
    int stk[10];

    t1 = *(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0));
    t2 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t2 - 1);
    if ((int)(t2 - 1) < 0) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    } else {
        t7 = a4;
    }
    if ((*(int *)((t1 + 0x2BC))) != (*(int *)((a4 + 0x220)))) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    } else {
        t16 = t7;
    }
    t31 = t16;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0909fc(a4);
        } else {
            t25 = t16;
        }
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & (~(*(int *)(((0x1C4 + a4) + 0x0)))));
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        t31 = t25;
    }
    FUN_0c0e61d4(t31);
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x1C0));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = -10.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((a4 + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((a4 + 0x34) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((a4 + 0x38) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0dc4c0(0x1);
    FUN_0c0e6248();
    return (FUN_0c01cdc2(a4));
}
