/* Straight-line functions with calls and guards (batch gen_adl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c017718(int, int, float);
int FUN_0c01cdf2(int);
int FUN_0c01d9c2(int);
int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int mwPlySetLpFlg(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c01788c(int a4);

int FUN_0c01788c(int a4)
{
    register int t0;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x1BC))) != 0) {
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t0 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t0 << 2) + 0xC247584)) = ((*(int *)(((t0 << 2) + 0xC247584))) + 0x3E8);
        }
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x100);
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x1B0)) = ((int)0x1 << (int)(*(int *)((a4 + 0x1C4))));
        *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
    }
    if ((*(int *)((a4 + 0x220))) != 0) {
        t0 = 0x0;
        for (;;) {
            FUN_0c017718(a4, t0, 0.0f);
            FUN_0c017718(a4, t0, 12.0f);
            t0 = (t0 + 0x1);
            if ((unsigned int)t0 >= (unsigned int)0xA) {
                break;
            }
        }
        if ((*(int *)0xC23ED50) == 20) {
            *(unsigned int *)(((((*(int *)((a4 + 0x22C))) << 2) << 1) + 0xC23EE14)) = 0x0;
        }
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + 12.0f), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}
