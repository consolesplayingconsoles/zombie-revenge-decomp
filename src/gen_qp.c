/* Straight-line functions with calls and guards (batch gen_qp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e1e6a(int);
int FUN_0c0e22cc(int, int, int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ed62c(int);
int FUN_0c0ed650(int);
int FUN_0c0e15d4(int a4);

int FUN_0c0e15d4(int a4)
{
    int stk[10];
    register int t2;
    register int t3;
    register int t39;
    register int t1;
    register int t10;
    register int t16;
    register int t22;
    register int t34;

    t2 = a4;
    t3 = (*(int *)((a4 + 0x18)));
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((t3 + 0x18)));
        if ((*(int *)((t3 + 0x4))) != 0) {
            t2 = t3;
            t1 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t3 + 0x4)))))(t2, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        } else {
            t10 = t2;
        }
        t1 = 0x2E;
        t2 = t10;
        *(unsigned int *)((t3 + 0x4)) = 0x0;
        if (((unsigned short)(*(short *)((t3 + t1))) & 0x4) != 0) {
            t2 = t3;
            t1 = (FUN_0c0ed62c(t2));
        } else {
            t16 = t2;
        }
        t1 = 0x2E;
        t2 = t16;
        if (((unsigned short)(*(short *)((t3 + t1))) & 0x4) == 0) {
            t2 = t3;
            t1 = (FUN_0c0e1e6a(t2));
        } else {
            t22 = t2;
        }
        t1 = 0x2E;
        t2 = t22;
        if (((unsigned short)(*(short *)((t3 + t1))) & 0x10) == 0) {
            if (((unsigned short)(*(short *)((t3 + t1))) & 0x8) != 0) {
                t2 = t3;
                t1 = (FUN_0c0ed650(t2));
            } else {
                t2 = t3;
                t1 = (FUN_0c0e2a4c(t2, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) - 1);
            }
        } else {
            t34 = t2;
        }
        t2 = t34;
        if (t3 != a4) {
            t3 = (*(int *)(((int)stk + 4)));
            continue;
        }
        break;
    }
    t39 = FUN_0c0e22cc(a4, (*(int *)((a4 + 0x38))), (*(int *)((a4 + 0x3C))));
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    return t39;
}
