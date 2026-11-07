/* Straight-line functions with calls and guards (batch gen_afo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0909fc(int);
int FUN_0c0e19f2(int);
int FUN_0c05b194(int a4, int a5, int a6);
struct o1E8_int { char p[0x1E8]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c05b194(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x3C)) = *(struct mv3 *)((v0_0 + 0x30)); }
    v0_1 = (((struct oBC_int *)(v0_0))->v);
    v0_2 = (((struct o1E8_int *)(v0_0))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x30)) = *(struct mv3 *)((((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268) + (((v0_2 << 1) + v0_2) << 2))); }
    v0_1 = (v0_0);
    if ((((((struct oD8_int *)(v0_0))->v)) == 0)) goto L_C05B21C;
    FUN_0c05a98a(v0_1, a5, a6);
    if ((((((struct oD8_int *)(v0_1))->v)) != 1)) goto L_C05B1FC;
    FUN_0c054c8a(v0_1);
    if ((((((struct o23C_int *)(v0_1))->v)) == 0)) goto L_C05B1FC;
    FUN_0c0909fc(v0_1);
    L_C05B1FC:;
    v0_2 = (0xBC);
    if (((int)((((struct oBC_int *)(v0_1))->v)) >= (int)0x2)) goto L_C05B216;
    v0_2 = *(int *)((v0_1 + v0_2));
    *(unsigned int *)(((((v0_2 << 2) << 2) << 1) + 0xC247550)) = ((*(int *)(((((v0_2 << 2) << 2) << 1) + 0xC247550))) + 0x1);
    L_C05B216:;
    (((struct oD8_uint *)(v0_1))->v) = 0x0;
    L_C05B21C:;
    v0_2 = (((struct o22C_int *)(v0_1))->v);
    (((struct o22C_uint *)(v0_1))->v) = (v0_2 - 1);
    if (((int)(v0_2 - 1) < 0)) goto L_C05B238;
    if ((((((((((struct o20C_int *)((*(int *)((v0_1 + 0x1C)))))->v)) == 0)) ? 1 : 0) & 0xC0000) == 0)) goto L_C05B23E;
    L_C05B238:;
    FUN_0c0e19f2(v0_0);
    L_C05B23E:;
    return FUN_0c01cdc2(v0_1);
}
