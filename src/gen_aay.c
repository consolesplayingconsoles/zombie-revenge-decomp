/* Straight-line functions with calls and guards (batch gen_aay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c04b496(int a4, int a5);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c04b496(int a4, int a5)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = R14;
    *(int *)((int)stk + 8) = v0_2;
    v0_3 = ((((struct o394_int *)(v0_0))->v)) != 0;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    R14 = (v0_0);
    if (v0_3) goto L_C04B526;
    v0_4 = ((*(int *)((v0_1 + 0x0))) & 2) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (0x1);
    v0_2 = (0xC23ED88);
    v0_3 = (0x100);
    if (v0_4) goto L_C04B4E0;
    (((struct o20C_uint *)(R14))->v) = v0_3;
    (((struct o210_uint *)(R14))->v) = 0x60;
    (((struct o2C4_uint *)(R14))->v) = 0x43A;
    (((struct o2CC_uint *)(R14))->v) = v0_0;
    (((struct o394_uint *)(R14))->v) = v0_0;
    (((struct o2D4_uint *)(R14))->v) = 0x3;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) | 0x10000);
    FUN_0c0cc3f8(0xA20A9, v0_1, v0_2, v0_3);
    v0_1 = (0x18);
    L_C04B516:;
    FUN_0c0cc054(((((struct oBC_int *)(R14))->v)), v0_1);
    *(volatile int *)((int)stk + 4);
    return 0x1;
    L_C04B4E0:;
    v0_4 = ((*(int *)((v0_1 + 0x0))) & 0x200) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_4) goto L_C04B526;
    (((struct o20C_uint *)(R14))->v) = v0_3;
    (((struct o210_uint *)(R14))->v) = 0x64;
    (((struct o2C4_uint *)(R14))->v) = 0x440;
    (((struct o2CC_uint *)(R14))->v) = v0_0;
    (((struct o394_uint *)(R14))->v) = v0_0;
    (((struct o2D4_uint *)(R14))->v) = 0x3;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) | 0x10000);
    FUN_0c0cc3f8(0xA20A9, v0_1, v0_2, v0_3);
    v0_1 = (0x19);
    goto L_C04B516;
    L_C04B526:;
    *(volatile int *)((int)stk + 4);
    return 0x0;
}
