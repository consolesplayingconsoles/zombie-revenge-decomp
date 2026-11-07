/* Straight-line functions with calls and guards (batch gen_rw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7064(int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c056588(int a4);

int FUN_0c056588(int a4)
{
    int stk[11];
    register float u0;
    register float u1;
    register float u2;

    *(int *)((int)stk + 28) = (a4 + 0x68);
    *(int *)((int)stk + 24) = (a4 + 0x64);
    *(float *)(((int)stk + 20)) = 0.049999997f;
    u0 = *(float *)((a4 + 0x38));
    *(float *)(((int)stk + 16)) = u0;
    u1 = *(float *)((a4 + 0x34));
    *(float *)(((int)stk + 12)) = u1;
    u2 = *(float *)((a4 + 0x30));
    *(float *)(((int)stk + 8)) = u2;
    *(float *)(((int)stk + 4)) = (u0 + (*(float *)((a4 + 0x5C))));
    FUN_0c0a7064(((int)stk + 32), (((int)stk + 32) + 0x4), (((int)stk + 32) + 0x8), (a4 + 0x60), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), (a4 + 0x64), (a4 + 0x68), (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))), (*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x90))), (*(float *)((a4 + 0x94))), (u2 + (*(float *)((a4 + 0x54)))), (u1 + (*(float *)((a4 + 0x58)))));
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) * 0.5f);
    return 0x64;
}
