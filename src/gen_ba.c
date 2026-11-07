/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c08b2d0(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e5dc0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int FUN_0c06c01c(int a4, int a5, int a6, int a7);

int FUN_0c06c01c(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t8;
    register int t23;
    register int t18;
    register int t20;
    register int t48;
    register int t60;
    register int t69;
    register int t63;
    register int t53;
    register int t28;

    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((*(short *)((a4 + 0x64))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    nlPopMatrix(0x1);
    t8 = *(int *)((a4 + 0x80));
    if (t8 != 0) {
        if (t8 != 1) {
            if (t8 != 2) {
                if (t8 == 3) {
                    *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x98 + a4) + 0x0))));
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 4);
                    t23 = 0x64;
                    if ((int)(*(short *)((a4 + 0x64))) < (int)0xFFFFE93F) {
                        FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                        *(volatile int *)((a4 + 0x98));
                        *(unsigned int *)(((0x98 + a4) + 0x0)) = (-(FUN_0c0e5dc0()));
                        t18 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t18 + 0x1);
                        t20 = 0xA0;
                        if ((int)(t18 + 0x1) >= (int)0x3) {
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                            t20 = 0x80;
                        }
                        t23 = t20;
                    }
                    t28 = t23;
                } else {
                    *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                    t28 = 0x64;
                }
                t53 = t28;
            } else {
                *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x98 + a4) + 0x0))));
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) - 4);
                t48 = 0x64;
                if ((int)(*(short *)((a4 + 0x64))) < (int)0xFFFFE93F) {
                    FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    FUN_0c0dc5a0();
                    *(float *)(((int)stk + 4)) = 50.0f;
                    *(float *)(((int)stk + 8)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 0.0f;
                    FUN_0c0dcca0((a4 + 0x30));
                    nlRotateAZ((*(short *)((a4 + 0x64))));
                    FUN_0c0db470(((int)stk + 4), (((int)stk + 4) + 0xC));
                    FUN_0c08b2d0((((int)stk + 4) + 0xC), 0x4000);
                    nlPopMatrix(0x1);
                    *(unsigned short *)((a4 + 0x64)) = 0xFFFFE93F;
                    *(volatile int *)((a4 + 0x98));
                    *(unsigned int *)(((0x98 + a4) + 0x0)) = (-(FUN_0c0e5dc0()));
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    *(unsigned int *)((a4 + 0xA0)) = 0x0;
                    t48 = 0xA0;
                }
                t53 = t48;
            }
            t63 = t53;
        } else {
            t60 = t8;
            if (((*(int *)0xC23ED88) & 0x200) != 0) {
                *(unsigned int *)((a4 + 0x98)) = 0x0;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                t60 = 0x80;
            }
            t63 = t60;
        }
        t69 = t63;
    } else {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t69 = 0x80;
    }
    return t69;
}
