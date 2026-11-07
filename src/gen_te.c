/* Straight-line functions with calls and guards (batch gen_te): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0a5222(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0a5222(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];
    register int t62;
    register int t3;
    register int t21;
    register int t36;
    register int t37;
    register int t45;
    register int t38;
    register int t40;
    register int t49;
    register int t50;
    register int t58;
    register int t51;
    register int t53;

    t62 = 0x88;
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
    } else {
        t3 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((*(int *)((t3 + 0x3E4))));
        FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
        nlRotateAZ((*(short *)0xC10D13A));
        nlRotateAY(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)0xC10D138)));
        nlRotateAX(((*(short *)0xC10D136) + (*(short *)((a4 + 0x60)))));
        FUN_0c0a79fa((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
        nlPopMatrix(0x1);
        if ((*(int *)((t3 + 0x50C))) != 0) {
            t21 = *(int *)(((((*(int *)((t3 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((*(float *)((t3 + 0x30))) - (*(float *)((t21 + 0x30)))), ((*(float *)((t3 + 0x34))) - (*(float *)((t21 + 0x34)))), ((*(float *)((t3 + 0x38))) - (*(float *)((t21 + 0x38)))));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)((((int)stk + 4) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = (*(int *)((((int)stk + 4) + 0x4)));
        }
        t36 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
        t37 = *(int *)(((((int)stk + 4) + 0x18) + 0x4));
        t45 = 0xC0A536C;
        if (_builtin_fabsf((float)(short)(t37 - t36)) > 256.0f) {
            if (((int)(short)(t37 - t36) < (int)0x8000) && ((int)(short)(t37 - t36) > 0)) {
                t38 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t38 + 0x100);
                if ((int)(short)(t38 + 0x100) > (int)0xA86) {
                    *(unsigned short *)((a4 + 0x62)) = 0xA86;
                }
            } else {
                t40 = *(short *)((a4 + 0x62));
                *(unsigned short *)((a4 + 0x62)) = (t40 - 0x100);
                if ((int)(short)(t40 - 0x100) < (int)0xFFFFF4A0) {
                    *(unsigned short *)((a4 + 0x62)) = 0xFFFFF4A0;
                }
            }
            t45 = 0x62;
        }
        t49 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
        t50 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
        t58 = t45;
        if (_builtin_fabsf((float)(short)(t50 - t49)) > 256.0f) {
            if (((int)(short)(t50 - t49) < (int)0x8000) && ((int)(short)(t50 - t49) > 0)) {
                t51 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t51 + 0x100);
                if ((int)(short)(t51 + 0x100) > (int)0x112E) {
                    *(unsigned short *)((a4 + 0x60)) = 0x112E;
                }
            } else {
                t53 = *(short *)((a4 + 0x60));
                *(unsigned short *)((a4 + 0x60)) = (t53 - 0x100);
                if ((int)(short)(t53 - 0x100) < (int)0xFFFFF57A) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFF57A;
                }
            }
            t58 = 0x60;
        }
        t62 = t58;
        _builtin_fabsf((float)(short)(t50 - t49));
    }
    return t62;
}
