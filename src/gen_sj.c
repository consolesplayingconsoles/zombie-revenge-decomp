/* Straight-line functions with calls and guards (batch gen_sj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c09d278(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c063ff8(int a4, int a5);

int FUN_0c063ff8(int a4, int a5)
{
    int stk[13];
    register int t1;
    register int t10;
    register int t25;
    register int t14;

    t1 = FUN_0c0e19aa(0xC063F78, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    t25 = *(int *)((a4 + 0xBC));
    *(float *)(((int)stk + 40)) = (((*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x0))) + (*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x0)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 44)) = (((*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x4))) + (*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x4)))) / (1.0f + 1.0f));
    *(float *)(((int)stk + 48)) = (((*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x24) + 0x8))) + (*(float *)(((((((((t25 << 1) + t25) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x8)))) / (1.0f + 1.0f));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX(((*(short *)((a4 + 0x6C))) - 7168));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = -1.79999995f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    FUN_0c09d278((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x48)) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
    return (FUN_0c0cc3f8(0xA2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}
