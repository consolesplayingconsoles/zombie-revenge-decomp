/* Straight-line functions with calls and guards (batch gen_agt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3AC_int { char p[0x3AC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
int FUN_0c0240e0(int);
int FUN_0c024324(int);
int FUN_0c06e56e(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e19f2(void);
int FUN_0c06e6b0(int a4, int a5, int a6, int a7);
int FUN_0c02e9a8(int a4, int a5, int a6, int a7);
int FUN_0c02e9ce(int a4, int a5, int a6, int a7);

int FUN_0c06e6b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4((*(int *)((a4 + 0x30))));
        *(unsigned int *)0xC247C60 = 0x0;
        FUN_0c0e19f2();
    }
    t0 = FUN_0c0e16c0((*(int *)((a4 + 0x30))));
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t1 + 0x1);
    t2 = t0;
    if ((int)(t1 + 0x1) > (int)0x78) {
        t0 = (int)((int)(FUN_0c0da2e0()) % (int)0x1F4);
        t1 = t0;
        if ((int)t0 < (int)0x1) {
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            t0 = (((struct o40_int *)(a4))->v);
            (((struct o40_uint *)(a4))->v) = (t0 + 0x18);
            FUN_0c06e56e(((t0 + 0x18) - 24), 0x1);
            t0 = 0x4;
            if ((*(float *)0xC06E78C) > ((((struct o4_float *)(((((struct o40_int *)(a4))->v))))->v))) {
                (((struct o40_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
                t0 = 0x40;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c02e9a8(int a4, int a5, int a6, int a7)
{
    int stk[2];

    *(int *)((int)stk + 0) = a4;
    if (((int)((int)((((struct o3AC_int *)(a4))->v)) % (int)0x28)) == 20) {
        FUN_0c0cc3f8(0x1BA9, a5, a6, a7);
    }
    return FUN_0c0240e0((*(int *)(((int)stk + 0))));
}

int FUN_0c02e9ce(int a4, int a5, int a6, int a7)
{
    int stk[2];

    *(int *)((int)stk + 0) = a4;
    if (((int)((int)((((struct o3AC_int *)(a4))->v)) % (int)0x28)) == 20) {
        FUN_0c0cc3f8(0x1BA9, a5, a6, a7);
    }
    return FUN_0c024324((*(int *)(((int)stk + 0))));
}
