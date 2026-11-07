/* Straight-line functions with calls and guards (batch gen_aan): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce8a(int, float);
int FUN_0c01d2c2(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e07b4(int, float, float, float, float, float, float);
int FUN_0c0e2d6c(int, float, float, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c01cb94(int a4, int a5);

int FUN_0c01cb94(int a4, int a5)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t91;
    register float t4;
    register int t81;
    register int t47;
    int t51;
    register int t86;
    int t54;
    register int t62;
    int t63;

    t0 = *(int *)((a4 + 0x88));
    t2 = FUN_0c01ce8a((a4 + 0x30), (*(float *)((t0 + 0xC))));
    t91 = 0x0;
    if (t2 != 0) {
        nlPushMatrix(0x0);
        t4 = nlLength((a5 + 0x30), (a5 + 0x3C));
        if (t4 > (*(float *)((a5 + 0x1E4)))) {
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            nlRotateAZ((*(short *)((a4 + 0x70))));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            FUN_0c0db470((a5 + 0x3C), (((int)stk + 4) + 0xC));
            t47 = (FUN_0c0e07b4((*(int *)((t0 + 0x90))), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24)))));
        } else {
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            nlRotateAZ((*(short *)((a4 + 0x70))));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            t47 = (FUN_0c0e2d6c((*(int *)((t0 + 0x90))), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)((a5 + 0x1E4)))));
        }
        nlPopMatrix(0x1);
        if ((((*(int *)0xC23A1A8) & 0x101) != 0) && (t51 = *(int *)((a5 + 0x200)), t51 == -1)) {
            *(unsigned int *)((a5 + 0x1BC)) = 0xFFFFFFFF;
            t86 = 0x0;
        } else {
            t81 = 0x0;
            if ((t47 != 0) && (t54 = *(int *)((a5 + 0x200)), t54 != 0)) {
                *(unsigned int *)((a4 + 0x1C0)) = (*(int *)((a5 + 0x200)));
                *(unsigned int *)((a4 + 0x1BC)) = (*(int *)((a5 + 0x1F8)));
                *(unsigned int *)((a4 + 0x1D0)) = (*(int *)((a5 + 0x1FC)));
                *(unsigned int *)((a4 + 0x1C4)) = (*(int *)((a5 + 0xBC)));
                *(unsigned int *)((a4 + 0x208)) = (*(int *)((a5 + 0x1E8)));
                *(unsigned int *)((a4 + 0x1CC)) = (*(int *)((a5 + 0x1F4)));
                if ((((*(int *)0xC23A1A8) & 0x100) != 0) && ((t62 = *(int *)((a5 + 0xBC)), (int)t62 < (int)0x2) && (((int)t62 < (int)0x2) && (t63 = *(int *)0xC23A1A8, (0x100 & t63) != 0)))) {
                    FUN_0c01d2c2(a4, a5);
                }
                *(float *)((a4 + 0x1D4)) = (nlLength((a5 + 0x30), (a5 + 0x3C)));
                FUN_0c0a7714((0x1D8 + a4), (0x1DC + a4), ((*(float *)((a5 + 0x30))) - (*(float *)((a5 + 0x3C)))), ((*(float *)((a5 + 0x34))) - (*(float *)((a5 + 0x40)))), ((*(float *)((a5 + 0x38))) - (*(float *)((a5 + 0x44)))));
                *(unsigned int *)((a5 + 0x1C4)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)((a5 + 0x208)) = 0x0;
                *(unsigned int *)((a5 + 0xD8)) = 0x4;
                *(unsigned int *)((a5 + 0x1EC)) = ((*(int *)((a5 + 0x1EC))) | ((int)0x1 << (int)(*(int *)(((0x1C4 + a5) + 0x0)))));
                t81 = 0xFFFFFFFF;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    return t91;
}
