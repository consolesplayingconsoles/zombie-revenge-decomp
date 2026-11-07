/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(void);
int FUN_0c0be46c(int, int);
int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c01860c(int a4);

int FUN_0c01860c(int a4)
{
    register int t2;
    register int t4;
    register int t7;
    register int t3;
    register float u5;

    t2 = (*(int *)(((a4 + 0x30) + 0x4)));
    t4 = (*(int *)(((a4 + 0x30) + 0x0)));
    for (;;) {
        t7 = *(int *)((t4 + 0x0));
        if (((*(int *)((a4 + 0x50))) & 0x1) != 0) {
            u5 = (*(float *)((t4 + 0x1C)));
            u5 = (-u5);
            u5 = (u5 + 1.0f);
            *(float *)((t7 + 0x18)) = u5;
        }
        if (((*(int *)((a4 + 0x50))) & 0x2) != 0) {
            u5 = (*(float *)((t4 + 0x20)));
            u5 = (-u5);
            u5 = (u5 + 1.0f);
            *(float *)((t7 + 0x1C)) = u5;
            t3 = (*(int *)(((t7 + 0x1C) + 0x0)));
            t3 = (t3 | 0x1);
            *(unsigned int *)(((t7 + 0x1C) + 0x0)) = t3;
        }
        t2 = (t2 - 0x1);
        t4 = (t4 + 0x24);
        if (t2 == 0) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x38));
    nlRotateAY((*(short *)((a4 + 0x46))));
    nlRotateAX((*(short *)((a4 + 0x44))));
    nlRotateAZ((*(short *)((a4 + 0x48))));
    FUN_0c0c465c((unsigned short)(*(short *)((a4 + 0x4A))));
    nlPopMatrix(0x1);
    FUN_0c0be46c((unsigned short)(*(short *)((a4 + 0x4A))), (a4 + 0x30));
    return FUN_0c01843e();
}
