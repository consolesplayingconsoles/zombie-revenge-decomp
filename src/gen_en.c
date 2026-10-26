/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0dd050(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlSubVector3op(int, int, int);
int FUN_0c07b0bc(void);
int FUN_0c0c6254(int a4, int a5, int a6, int a7);
int FUN_0c0b0a8e(int a4, int a5, int a6, int a7);

int FUN_0c07b0bc(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07AF2C, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC200780); }
    nlSubVector3op((t1 + 0x48), 0xC20078C, 0xC200780);
    FUN_0c0dd050((t1 + 0x48));
    *(unsigned short *)(((0x64 + t1) + 0x0)) = ((FUN_0c0d9dc0((*(float *)((t1 + 0x4C))), (*(float *)((t1 + 0x48))))) - 32768);
    *(unsigned int *)((t1 + 0x78)) = 0x119C;
    return 0x78;
}

int FUN_0c0c6254(int a4, int a5, int a6, int a7)
{
    int t3;
    int t15;
    int t18;

    if ((unsigned short)(*(short *)((a4 + 0x68))) != 0) {
        
        if ((*(short *)((a4 + 0x6C))) != 0) {
            t3 = *(short *)((a4 + 0x6C));
            *(unsigned short *)((a4 + 0x6C)) = (t3 - 1);
            if ((int)(unsigned short)(t3 - 1) <= 0) {
                FUN_0c0e19f2(a4, a5, a6, a7);
            }
        }
        return FUN_0c0c0340((a4 + 0x30));
    }
    t15 = *(short *)((a4 + 0x6A));
    *(unsigned short *)((a4 + 0x6A)) = (t15 - 1);
    if ((int)(unsigned short)(t15 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x68)) = ((*(short *)((a4 + 0x68))) + 0x1);
        if ((*(short *)((a4 + 0x6C))) != 0) {
            t18 = *(short *)((a4 + 0x6C));
            *(unsigned short *)((a4 + 0x6C)) = (t18 - 1);
            if ((int)(unsigned short)(t18 - 1) <= 0) {
                FUN_0c0e19f2(a4, a5, a6, a7);
            }
        }
        return FUN_0c0c0340((a4 + 0x30));
    }
    return 0x6A;
}

int FUN_0c0b0a8e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t17;

    t0 = *(int *)((a4 + 0x30));
    t2 = *(int *)((((unsigned short)(*(short *)((t0 + 0x454))) << 2) + 0xC195F48));
    if ((*(int *)0xC24FA38) == 0x672) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    nlMultiMatrix(((*(int *)((t0 + 0x3E4))) + 0x240));
    nlRotateAX((*(short *)0xC2024D8));
    t17 = ((int (*)(int, float))(t2))(0x660, (*(float *)((t0 + 0x458))));
    return nlPopMatrix(0x1);
}
