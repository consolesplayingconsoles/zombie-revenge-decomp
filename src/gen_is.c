/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d9c2(int);
int FUN_0c07a352(int, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c079de4(int a4);
void FUN_0c09517c(int a4);


void FUN_0c09517c(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((a4 + 0x38));
    if (t0 != 0) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((0x22C + t0));
        nlRotateAY((*(short *)((t0 + 0x228))));
        nlRotateAX((*(short *)((t0 + 0x226))));
        nlRotateAZ((*(short *)((t0 + 0x22A))));
        FUN_0c0c465c((*(short *)((t1 + 0x0))));
        FUN_0c0c465c((*(short *)((a4 + 0x64))));
        FUN_0c0c465c((*(short *)((a4 + 0x62))));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((t1 + 0x44));
        nlRotateAY((*(short *)((a4 + 0x3E))));
        nlRotateAX((*(short *)((a4 + 0x3C))));
        FUN_0c0c465c((*(short *)((t1 + 0x6))));
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        FUN_0c0dcca0((t1 + 0x50));
        nlRotateAY((*(short *)((a4 + 0x3E))));
        nlRotateAX((*(short *)((a4 + 0x3C))));
        FUN_0c0c465c((*(short *)((t1 + 0x8))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t35 = ((int (*)(int))((*(int *)((a4 + 0x30)))))(a4);
        t36 = *(short *)((a4 + 0x68));
        *(unsigned short *)((a4 + 0x68)) = (t36 - 1);
        if (((int)(short)(t36 - 1) >= 0) && (t37 = *(short *)((t0 + 0x23A)), t38 = *(short *)((a4 + 0x4A)), t37 == t38)) {
            return;
        }
        *(unsigned short *)((t0 + 0x238)) = 0x0;
        FUN_0c0e19f2();
    return;
    }
}


