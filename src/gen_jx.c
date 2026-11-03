/* Straight-line functions with calls and guards (batch gen_jx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0da410(int);
int FUN_0c0e19f2(int, int, int, int);
float FUN_0c082078(int a4, int a5, int a6, int a7);

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
        *(float *)((t1 + 0x270)) = 0.0f;
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t0 = *(int *)(((0x44 + a4) + 0x0));
    t2 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a4 + 0x40)) = (t2 + t0);
    u0 = FUN_0c0da410((t2 + t0));
    u1 = *(float *)((a4 + 0x34));
    t0 = *(int *)((a4 + 0x38));
    t2 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x38)) = (t0 + t2);
    u2 = FUN_0c0da410((t0 + t2));
    u3 = (u1 * _builtin_fabsf(u0));
    *(float *)((t1 + 0x270)) = (u3 * u2);
    return u2;
}
