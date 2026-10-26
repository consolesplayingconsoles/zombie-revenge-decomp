/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6688(int, int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e61d4(void);
int FUN_0c0e6248(int);
int FUN_0c05f6f8(int a4);

int FUN_0c05f6f8(int a4)
{
    int t3;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0)));
    t3 = FUN_0c0e19aa(0xC05F7EC, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t3);
    *(unsigned int *)((t3 + 0x200)) = 0x1;
    *(unsigned int *)((t3 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
    *(unsigned int *)((t3 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t3 + 0x1E8)) = 0x0;
    *(unsigned int *)((t3 + 0x1F4)) = 0xA;
    *(unsigned int *)((t3 + 0x204)) = 0xA;
    *(float *)((t3 + 0x1E4)) = 5.0f;
    *(unsigned int *)((t3 + 0x1F8)) = 0xD;
    *(volatile int *)(((int)stk + 4));
    FUN_0c0e6248(0xA);
    FUN_0c0e61d4();
    FUN_0c0e61d4();
    *(unsigned int *)((t3 + 0x22C)) = 0x20;
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = -0.599999964f;
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = -1.5f;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 0.0f;
    return (FUN_0c0a6688((*(int *)(((int)stk + 4))), (t3 + 0x6C), (t3 + 0x48)));
}
