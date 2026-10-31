/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c473c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c06e7ac(int a4, int a5, int a6, int a7);

int FUN_0c06e7ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)((a4 + 0x80))) == 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(short *)((a4 + 0x64))));
        if ((((*(int *)0xC23ED5C) & 0x200) != 0) && (t0 = *(int *)0xC23ED5C, (t0 & 0x800) != 0)) {
            *(unsigned int *)((a4 + 0x80)) = 0x1;
            *(unsigned int *)((a4 + 0x8C)) = 0xC0FBAB0;
            t0 = *(int *)((a4 + 0x8C));
            *(unsigned int *)((a4 + 0xA0)) = (*(short *)((t0 + 0x0)));
            *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)((t0 + 0x2)));
        }
    } else {
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = *(int *)((a4 + 0x8C));
            *(unsigned int *)((a4 + 0x8C)) = (t0 + 0x4);
            *(unsigned int *)((a4 + 0xA0)) = (*(short *)(((t0 + 0x4) + 0x0)));
            if ((int)(*(int *)((a4 + 0xA0))) < 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~(*(short *)((a4 + 0x64)))));
                FUN_0c0e19f2(0xC23ED88, (t0 + 0x4));
            } else {
                *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)(((t0 + 0x4) + 0x2)));
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAZ((*(short *)((a4 + 0x64))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    FUN_0c0c473c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}
