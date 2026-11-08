/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0bb1c8(int, int);
int FUN_0c0c47ae(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c092736(int a4);
struct o78_int { char p[0x78]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c092736(int a4)
{
    int t0;
    register int t1;

    if (((*(int *)((0xC247604 + (((((struct oBC_int *)(((((struct o8C_int *)(a4))->v))))->v)) << 2)))) == 1) && (t0 = (((struct o88_int *)(a4))->v), t1 = *(int *)((0xC247030 + (t0 << 2))), t1 == 4)) {
        t0 = t1;
    } else {
        FUN_0c0bb1c8((*(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0))), 0x1);
        t0 = (FUN_0c0e19f2());
    }
    if ((*(int *)0xC23EDB4) == 0) {
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((((((((struct o88_int *)(a4))->v)) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
        FUN_0c0c47ae(((((struct o78_int *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return t0;
}
