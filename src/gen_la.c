/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0870f6(int a4, int a5, int a6, float f4);

int FUN_0c0870f6(int a4, int a5, int a6, float f4)
{
    int stk[18];
    register int t1;
    register int t9;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register float u25;
    register float u28;
    register int t29;
    register int t31;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c0e19aa(0xC087290, 0x54, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC086FE0;
    *(unsigned int *)((t1 + 0x50)) = a5;
    *(unsigned int *)((t1 + 0x3C)) = (FUN_0c0e262a(((a5 << 2) << 2)));
    *(unsigned int *)(((0x40 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x44 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x48 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x4C + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    t9 = *(int *)((t1 + 0x3C));
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)((t1 + 0x40))) + (a5 << 2));
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)((t1 + 0x44))) + (a5 << 2));
    t11 = *(int *)((t1 + 0x48));
    t12 = *(int *)((t1 + 0x4C));
    nlPushMatrix(0x0);
    t14 = (t11 + (a5 << 2));
    t15 = (t12 + (a5 << 2));
    t16 = a5;
    t17 = t9;
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0((*(int *)(((int)stk + 12))));
        t21 = FUN_0c0da2e0();
        nlRotateAY(((*(int *)(((int)stk + 8))) + t21));
        u25 = (f4 * (float)(FUN_0c0da2e0()));
        *(float *)((t1 + 0x38)) = (u25 * 3.05185094e-05f);
        FUN_0c0db470((t1 + 0x30), t17);
        u28 = 0.5f;
        u28 = u28 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t17 + 0xC)) = u28;
        t29 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t29 - 4);
        *(int *)((int)stk + 4) = (t29 - 4);
        *(unsigned int *)(((t29 - 4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t31 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t31 - 4);
        *(int *)((int)stk + 4) = (t31 - 4);
        *(unsigned int *)(((t31 - 4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        *(unsigned int *)(((t14 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t14 = (t14 - 0x4);
        t16 = (t16 - 0x1);
        *(unsigned int *)(((t15 - 0x4) + 0x0)) = (((FUN_0c0da2e0()) << 2) << 2);
        t15 = (t15 - 0x4);
        t17 = (t17 + 0x10);
        if (t16 == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

