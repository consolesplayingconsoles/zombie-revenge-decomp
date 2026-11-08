/* Straight-line functions with calls and guards (batch gen_jx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0da410(int);
int FUN_0c0e19f2(int, int, int, int);
float FUN_0c082078(int a4, int a5, int a6, int a7);
struct o270_float { char p[0x270]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };


float FUN_0c082078(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        (((struct o270_float *)(t1))->v) = 0.0f;
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t0 = (((struct o44_int *)(a4))->v);
    t2 = (((struct o40_int *)(a4))->v);
    (((struct o40_uint *)(a4))->v) = (t2 + t0);
    u0 = FUN_0c0da410((t2 + t0));
    u1 = (((struct o34_float *)(a4))->v);
    t0 = *(int *)((a4 + 0x38));
    t2 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x38)) = (t0 + t2);
    u2 = FUN_0c0da410((t0 + t2));
    u3 = (u1 * _builtin_fabsf(u0));
    (((struct o270_float *)(t1))->v) = (u3 * u2);
    return u2;
}
