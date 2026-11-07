/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c01cf44(int a4, int a5, int a6, int a7);
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };


int FUN_0c01cf44(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t4;
    int stk[7];

    t0 = *(int *)((a4 + 0x38));
    t3 = *(int *)((a4 + 0x38));
    if (((*(int *)((0xC247604 + ((*(int *)((a4 + 0x34))) << 2)))) == 1) && (t4 = *(int *)(((t3 << 2) + 0xC247030)), t4 == 4)) {
    } else {
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((*(int *)((a4 + 0x38))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
    FUN_0c0dcc70(((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
    FUN_0c0db840(((int)stk + 4));
    *(float *)(((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x84) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x84) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0x84) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    return (nlPopMatrix(0x1));
}
