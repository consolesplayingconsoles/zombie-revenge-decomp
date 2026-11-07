/* Straight-line functions with calls and guards (batch gen_sv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c061214(int a4, int a5);

int FUN_0c061214(int a4, int a5)
{
    int stk[13];
    register int t1;
    register int t10;
    register int t24;
    register int t26;
    register int t14;

    t1 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
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
    t24 = *(int *)((a4 + 0xBC));
    t26 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t26 << 1) + t26) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    *(float *)((t1 + 0x24C)) = 40.0f;
    *(float *)((t1 + 0x250)) = 0.649999976f;
    *(float *)((t1 + 0x254)) = 1.02499998f;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (-(*(float *)((t1 + 0x250))));
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(float *)((t1 + 0x48)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    *(float *)((t1 + 0x4C)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x4))));
    *(float *)((t1 + 0x50)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    return 0x50;
}
