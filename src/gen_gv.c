/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6688(int, int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e6248(int);
int FUN_0c05f6f8(int a4);
void FUN_0c0bb292(int a4);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };


int FUN_0c05f6f8(int a4)
{
    int t3;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0)));
    t3 = FUN_0c0e19aa(0xC05F7EC, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t3);
    (((struct o200_uint *)(t3))->v) = 0x1;
    (((struct o1EC_uint *)(t3))->v) = ((((struct o1EC_int *)(a4))->v));
    (((struct oBC_uint *)(t3))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o1E8_uint *)(t3))->v) = 0x0;
    (((struct o1F4_uint *)(t3))->v) = 0xA;
    (((struct o204_uint *)(t3))->v) = 0xA;
    (((struct o1E4_float *)(t3))->v) = 5.0f;
    (((struct o1F8_uint *)(t3))->v) = 0xD;
    *(volatile int *)(((int)stk + 4));
    FUN_0c0e6248(0xA);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o22C_uint *)(t3))->v) = 0x20;
    (((struct o4_float *)((((int)stk + 4) + 0x4)))->v) = -0.599999964f;
    (((struct o8_float *)((((int)stk + 4) + 0x4)))->v) = -1.5f;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 0.0f;
    return (FUN_0c0a6688((*(int *)(((int)stk + 4))), (t3 + 0x6C), (t3 + 0x48)));
}

void FUN_0c0bb292(int a4)
{
    int t1;
    int t3;
    int t10;
    int t11;
    int t12;

    if ((*(int *)(((0xC247030 + (a4 << 2)) + 0x0))) != 0) {
        t1 = *(int *)(((0xC246FF0 + (a4 << 2)) + 0x0));
        t3 = FUN_0c0e19aa(0xC0BB360, 0x474, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        if (((((struct oC0_int *)(t1))->v)) == 42) {
            (((struct oBC_uint *)(t3))->v) = ((((struct oBC_int *)(t1))->v));
            (((struct oC0_uint *)(t3))->v) = 0x29;
            FUN_0c0ba6e8(t3);
    return;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC0BB134;
        (((struct oBC_uint *)(t3))->v) = ((((struct oBC_int *)(t1))->v));
        (((struct oC0_uint *)(t3))->v) = ((((struct oC0_int *)(t1))->v));
        (((struct oC4_uint *)(t3))->v) = ((((struct oC4_int *)(t1))->v));
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((((0x404 + t1) + t10) + 0x0));
            t12 = ((0x404 + t3) + t10);
            t10 = (t10 + 0x4);
            *(unsigned int *)((t12 + 0x0)) = t11;
            if ((unsigned int)t10 >= (unsigned int)0x40) {
                break;
            }
        }
        FUN_0c0ba776(t3, 0x40);
    return;
    }
}
