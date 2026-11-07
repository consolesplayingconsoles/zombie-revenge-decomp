/* Straight-line functions with calls and guards (batch gen_qe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd0a0(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[26];
    register int t3;
    register int t21;
    register int t22;
    register int t31;
    register int t43;
    register int t44;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x58)) = *(struct mv3 *)(0xC10101C); }
    t3 = FUN_0c0e19aa(0xC07CE44, 0xAC, (*(int *)(((((*(int *)(((int)stk + 16))) << 2) + ((*(int *)(((int)stk + 4))) + 0x30)) + 0x0))));
    FUN_0c0e19d0(t3);
    *(unsigned short *)((t3 + 0x72)) = ((short)(a9 >> 0));
    *(float *)((t3 + 0x74)) = 3.21943283f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4C)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x40)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x34)) = *(struct mv3 *)(a8); }
    nlSubVector3op((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4C), (((int)stk + 4) + 0x40));
    nlAddVector3op((t3 + 0x78), (((int)stk + 4) + 0x4C), (((int)stk + 4) + 0x40));
    nlAddVector((t3 + 0x78), (((int)stk + 4) + 0x34));
    FUN_0c0dce80((t3 + 0x78), (t3 + 0x78), 0.333333313f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)(a12); }
    FUN_0c0dce80((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28), 10.7314396f);
    nlAddVector((t3 + 0x78), (((int)stk + 4) + 0x10));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((t3 + 0x78));
    nlRotateV((((int)stk + 4) + 0x58), (((int)stk + 4) + 0x28));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    FUN_0c0db4d0((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x28));
    t21 = FUN_0c0d9dc0((*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 44))));
    t22 = t21;
    if (a10 != 0) {
        t22 = (t21 + 0x8000);
    }
    nlPopMatrix(0x1);
    nlRotateAZ(t22);
    nlGetMatrix((t3 + 0x30));
    nlPopMatrix(0x1);
    *(unsigned int *)((t3 + 0xA4)) = (0x176 + (*(int *)(((int)stk + 4))));
    if (a11 == 0) {
        *(unsigned short *)(((0xA2 + t3) + 0x0)) = ((FUN_0c0da2e0()) & 0x3F);
    } else {
        t31 = 0x8;
        for (;;) {
            t31 = (t31 - 0x1);
            *(unsigned short *)(((0xA2 + t3) + 0x0)) = ((*(short *)(((0xA2 + t3) + 0x0))) + ((FUN_0c0da2e0()) & 0xF));
            if (t31 == 0) {
                break;
            }
        }
        *(unsigned short *)((t3 + 0xA2)) = ((*(short *)((t3 + 0xA2))) + 0x3F);
    }
    *(unsigned short *)((t3 + 0xA2)) = ((*(short *)((t3 + 0xA2))) + 0xF0);
    FUN_0c0dd0a0((t3 + 0x78), (((int)stk + 4) + 0x28));
    *(unsigned short *)((t3 + 0xA8)) = (int)((((*(float *)(((int)stk + 48))) + 1.0f) / (1.0f + 1.0f)) * 240.0f);
    t43 = FUN_0c0da2e0();
    t44 = *(short *)(((0xA8 + t3) + 0x0));
    *(unsigned short *)(((0xA8 + t3) + 0x0)) = (t44 + ((t43 & 0x1F) - 8));
    if ((int)(short)(t44 + ((t43 & 0x1F) - 8)) > (int)0xF0) {
        *(unsigned short *)((t3 + 0xA8)) = 0xF0;
    }
    *(unsigned short *)((t3 + 0xA8)) = ((short)(*(short *)((t3 + 0xA8))) * (short)0xFFFFFFFF);
    return 0xA8;
}
