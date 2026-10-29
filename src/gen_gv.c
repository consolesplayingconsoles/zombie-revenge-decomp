/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6688(int, int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e6248(int);
int FUN_0c05f6f8(int a4);
void FUN_0c0bb292(int a4);

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
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned int *)((t3 + 0x22C)) = 0x20;
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = -0.599999964f;
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = -1.5f;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 0.0f;
    return (FUN_0c0a6688((*(int *)(((int)stk + 4))), (t3 + 0x6C), (t3 + 0x48)));
}

void FUN_0c0bb292(int a4)
{
    int t1;
    int t3;
    int t10;
    int t11;
    int t12;

    if ((*(int *)(((0xC247030 + (a4 << 2)) + 0x0))) != 0) {
        t1 = *(int *)(((0xC246FF0 + (a4 << 2)) + 0x0));
        t3 = FUN_0c0e19aa(0xC0BB360, 0x474, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        if ((*(int *)((t1 + 0xC0))) == 42) {
            *(unsigned int *)((t3 + 0xBC)) = (*(int *)((t1 + 0xBC)));
            *(unsigned int *)((t3 + 0xC0)) = 0x29;
            FUN_0c0ba6e8(t3);
    return;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC0BB134;
        *(unsigned int *)((t3 + 0xBC)) = (*(int *)((t1 + 0xBC)));
        *(unsigned int *)((t3 + 0xC0)) = (*(int *)((t1 + 0xC0)));
        *(unsigned int *)((t3 + 0xC4)) = (*(int *)((t1 + 0xC4)));
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((((0x404 + t1) + t10) + 0x0));
            t12 = ((0x404 + t3) + t10);
            t10 = (t10 + 0x4);
            *(unsigned int *)((t12 + 0x0)) = t11;
            if ((unsigned int)t10 >= (unsigned int)0x40) {
                break;
            }
        }
        FUN_0c0ba776(t3, 0x40);
    return;
    }
}
