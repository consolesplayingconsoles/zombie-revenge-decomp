/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0bb1c8(int, int);
int FUN_0c0c47ae(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c092736(int a4);

int FUN_0c092736(int a4)
{
    int t0;
    register int t1;

    if (((*(int *)((0xC247604 + ((*(int *)(((*(int *)((a4 + 0x8C))) + 0xBC))) << 2)))) == 1) && (t0 = *(int *)((a4 + 0x88)), t1 = *(int *)((0xC247030 + (t0 << 2))), t1 == 4)) {
        t0 = t1;
    } else {
        FUN_0c0bb1c8((*(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0))), 0x1);
        t0 = (FUN_0c0e19f2());
    }
    if ((*(int *)0xC23EDB4) == 0) {
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((*(int *)((a4 + 0x88))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
        FUN_0c0c47ae((*(int *)((a4 + 0x78))));
        return nlPopMatrix(0x1);
    }
    return t0;
}
