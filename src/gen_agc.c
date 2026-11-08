/* Straight-line functions with calls and guards (batch gen_agc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c04c306(int);
int FUN_0c054c8a(int);
int FUN_0c05824e(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0909fc(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
extern int FUN_0c0e19f2();
int FUN_0c05c4ca(int a4, int a5, int a6);
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };


int FUN_0c05c4ca(int a4, int a5, int a6)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_0 = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x3C)) = *(struct mv3 *)((v0_1 + 0x30)); }
    v0_2 = (((struct oBC_int *)(v0_1))->v);
    v0_3 = (((struct o1E8_int *)(v0_1))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x30)) = *(struct mv3 *)((((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + 0xC23F268) + (((v0_3 << 1) + v0_3) << 2))); }
    v0_2 = (v0_1);
    if ((((((struct oD8_int *)(v0_1))->v)) == 0)) goto L_C05C55E;
    FUN_0c05a98a(v0_2, v0_0, a6);
    if ((((((struct oD8_int *)(v0_2))->v)) != 1)) goto L_C05C55E;
    FUN_0c0cc3f8(0x230A9, v0_0, 0x0, 0x0);
    FUN_0c0cc054(((((struct oBC_int *)(v0_2))->v)), 0x7);
    FUN_0c054c8a(v0_2);
    FUN_0c0909fc(v0_2);
    FUN_0c04c306((*(int *)(((((((struct oBC_int *)(v0_2))->v)) << 2) + 0xC246FF0))));
    FUN_0c05824e(((((struct oBC_int *)(v0_2))->v)), ((((struct o1C4_int *)(v0_2))->v)));
    v0_3 = ((int (*)(void))(FUN_0c0e19f2))();
    L_C05C55E:;
    v0_3 = (((struct o22C_int *)(v0_2))->v);
    (((struct o22C_uint *)(v0_2))->v) = (v0_3 - 1);
    if (((int)(v0_3 - 1) < 0)) goto L_C05C576;
    if (((((((struct o20C_int *)((*(int *)((v0_2 + 0x1C)))))->v)) & 0x1A00) == 0)) goto L_C05C57C;
    L_C05C576:;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_1, v0_0);
    L_C05C57C:;
    return FUN_0c01cdc2(v0_2, v0_0);
}
