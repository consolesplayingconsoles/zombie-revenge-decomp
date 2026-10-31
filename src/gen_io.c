/* Straight-line functions with calls and guards (batch gen_io): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c08d840(int, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e19f2(int);
int FUN_0c05f7ec(int a4, int a5, int a6);

int FUN_0c05f7ec(int a4, int a5, int a6)
{
    int stk[3];
    register int t13;
    register int t11;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x10);
    } else {
        t11 = a4;
    }
    t13 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t13 - 1);
    if ((int)(t13 - 1) <= 0) {
        FUN_0c0e19f2(t11);
    }
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * 0.979999959f);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * 0.979999959f);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.979999959f);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + 0.0199999996f);
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    if ((int)(*(int *)((a4 + 0x22C))) < (int)0x28) {
        if ((int)(*(int *)((a4 + 0x22C))) < (int)0xC) {
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * 0.969999969f);
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * 0.969999969f);
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.969999969f);
        }
        *(float *)((a4 + 0x250)) = ((*(float *)((a4 + 0x250))) + 0.0149999997f);
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x250 + a4) + 0x0))));
    }
    if (((*(int *)((a4 + 0x22C))) & 7) == 0) {
        FUN_0c08d840((a4 + 0x30), 12.0f);
    }
    return FUN_0c01cdc2(a4);
}
