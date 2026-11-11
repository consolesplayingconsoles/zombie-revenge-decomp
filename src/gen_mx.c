int FUN_0c0c1e60(int);
int FUN_0c0c1d5a(int);
int FUN_0c0c1c4c(int);
/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c1488(int, int, int, int);
int FUN_0c0c1af4(int);
int FUN_0c0c1f1e(int);
int FUN_0c0c2126(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o90_int { char p[0x90]; int v; };


int FUN_0c0c2126(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t3 = *(int *)((a4 + 0x38));
    if ((((((struct o0_int *)0xC2497B0)->v)) & 0x606) != 0) {
        FUN_0c0c1af4(a4);
        t4 = *(int *)(((0x84 + a4) + (((((struct o90_int *)(a4))->v)) << 2)));
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 != 2) {
                    if (t4 != 3) {
                        return t4;
                    }
                    return FUN_0c0c1e60(a4);
                }
                return FUN_0c0c1d5a(a4);
            }
            return FUN_0c0c1f1e(a4);
        }
        return FUN_0c0c1c4c(a4);
    }
    if ((((((struct o8_int *)0xC2497B0)->v)) & 0x80008) == 0) {
        FUN_0c0c1af4(a4);
        t4 = *(int *)(((0x84 + a4) + (((((struct o90_int *)(a4))->v)) << 2)));
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 != 2) {
                    if (t4 != 3) {
                        return t4;
                    }
                    return FUN_0c0c1e60(a4);
                }
                return FUN_0c0c1d5a(a4);
            }
            return FUN_0c0c1f1e(a4);
        }
        return FUN_0c0c1c4c(a4);
    }
    *(unsigned int *)0xC262388 = 0x0;
    t4 = (((struct o0_int *)0xC2497B0)->v);
    t5 = (FUN_0c0c1488(t3, a5, a6, a7));
    if (((t4 & 0x8) != 0) && (t0 = (((struct o0_int *)0xC2497B0)->v), (t0 & 0x80000) != 0)) {
        (((struct o0_uint *)0xC23A180)->v) = 0x7;
        (((struct o10_uint *)0xC23A180)->v) = 0x0;
        t5 = 0x7;
    }
    t0 = t5;
    if ((0x8 & ((((struct o0_int *)0xC2497B0)->v))) != 0) {
        t3 = (((struct o90_int *)(a4))->v);
        *(unsigned int *)((((t3 << 2) + (0x84 + a4)) + 0x0)) = ((*(int *)((((t3 << 2) + (0x84 + a4)) + 0x0))) + 0x1);
        if (((int)((((struct o78_int *)(a4))->v)) > (int)0x5) && (t1 = (((struct o90_int *)(a4))->v), t2 = *(int *)(((0x84 + a4) + (t1 << 2))), t2 == 3)) {
            t1 = (((struct o90_int *)(a4))->v);
            *(unsigned int *)((((t1 << 2) + (0x84 + a4)) + 0x0)) = ((*(int *)((((t1 << 2) + (0x84 + a4)) + 0x0))) + 0x1);
        }
        if ((int)(*(int *)((((((((struct o90_int *)(a4))->v)) << 2) + (0x84 + a4)) + 0x0))) >= (int)0x4) {
            *(unsigned int *)((((((((struct o90_int *)(a4))->v)) << 2) + (0x84 + a4)) + 0x0)) = 0x0;
        }
        t0 = 0x90;
    }
    t1 = t0;
    if ((((((struct o0_int *)0xC2497B0)->v)) & 0x80000) != 0) {
        t0 = (((struct o90_int *)(a4))->v);
        *(unsigned int *)((((t0 << 2) + (0x84 + a4)) + 0x0)) = ((*(int *)((((t0 << 2) + (0x84 + a4)) + 0x0))) - 1);
        if ((int)(*(int *)((((((((struct o90_int *)(a4))->v)) << 2) + (0x84 + a4)) + 0x0))) < 0) {
            *(unsigned int *)((((((((struct o90_int *)(a4))->v)) << 2) + (0x84 + a4)) + 0x0)) = 0x3;
        }
        t0 = 0x78;
        if ((int)((((struct o78_int *)(a4))->v)) > (int)0x5) {
            t2 = *(int *)(((0x84 + a4) + (((((struct o90_int *)(a4))->v)) << 2)));
            t3 = t2;
            if (t2 == 3) {
                t2 = (((struct o90_int *)(a4))->v);
                *(unsigned int *)((((t2 << 2) + (0x84 + a4)) + 0x0)) = ((*(int *)((((t2 << 2) + (0x84 + a4)) + 0x0))) - 1);
                t3 = 0x90;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}
