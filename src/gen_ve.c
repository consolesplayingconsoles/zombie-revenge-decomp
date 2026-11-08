/* Straight-line functions with calls and guards (batch gen_ve): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c05561a(int, int, int, int);
extern int FUN_0c0e19f2();
int FUN_0c03ecf2(int a4, int a5, int a6, int a7);
struct o2AC_int { char p[0x2AC]; int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c03ecf2(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R9;
    register int R10;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    R5 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_5 = (0xC246FF0);
    v0_1 = (v0_0);
    if (((*(int *)0xC23ED50) != (*(int *)((v0_0 + 0x30))))) goto L_C03ED1A;
    if (((unsigned int)(*(int *)((v0_1 + 0x34))) <= (unsigned int)0x200)) goto L_C03ED20;
    if (((unsigned int)((((struct o40_int *)(v0_1))->v)) < (unsigned int)0x6)) goto L_C03ED20;
    L_C03ED1A:;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_0, R5, v0_2, v0_3);
    L_C03ED20:;
    v0_6 = *(int *)((v0_1 + 0x38));
    v0_4 = (v0_6);
    if ((v0_6 == 0)) goto L_C03ED2E;
    if (!((v0_4 == 1))) goto L_C03EE3A;
    if (((*(int *)(((v0_5 + 0x40) + ((*(int *)((v0_1 + 0x3C))) << 2)))) != 5)) goto L_C03EDAC;
    v0_4 = ((((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_0, R5, v0_2, v0_3)));
    goto L_C03EE3A;
    L_C03EE3A:;
    return v0_4;
    L_C03EDAC:;
    v0_2 = *(int *)((((*(int *)((v0_1 + 0x3C))) << 2) + 0xC246FF0));
    v0_4 = (0x2BC);
    v0_0 = (v0_2);
    if ((((((struct o2BC_int *)(v0_2))->v)) != 0x33B)) goto L_C03EE3A;
    v0_2 = (((struct o2B4_int *)(v0_0))->v);
    v0_4 = (v0_2);
    if ((v0_2 != 31)) goto L_C03EE3A;
    v0_4 = (0x2AC);
    if ((((((struct o2AC_int *)(v0_0))->v)) != 0)) goto L_C03EE3A;
    v0_4 = *(int *)0xC2462F4;
    R5 = (((-v0_4) + 0x4));
    v0_2 = (0xC2462FC);
    v0_3 = (0x200);
    if (((int)((-v0_4) + 0x4) <= 0)) goto L_C03EDFC;
    L_C03EDE2:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) | (*(int *)((v0_1 + 0x34))));
    v0_4 = *(int *)((v0_1 + 0x34));
    *(unsigned int *)((v0_1 + 0x34)) = (v0_4 << 1);
    if (((unsigned int)(v0_4 << 1) > (unsigned int)v0_3)) goto L_C03EDFC;
    v0_4 = (int)(R5 - 1) > 0;
    R5 = ((R5 - 1));
    if (v0_4) goto L_C03EDE2;
    L_C03EDFC:;
    v0_4 = (0x40);
    if (((unsigned int)((((struct o40_int *)(v0_1))->v)) >= (unsigned int)0x6)) goto L_C03EE3A;
    v0_2 = *(int *)((((*(int *)((v0_1 + v0_4))) << 2) + 0xC0F56D0));
    R5 = (v0_2);
    if ((v0_2 == 0)) goto L_C03EE32;
    v0_2 = (((struct o40_int *)(v0_1))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F5730); }
    FUN_0c05561a(v0_0, R5, ((((v0_2 << 1) + v0_2) << 2) + 0xC0F56E8), ((int)stk + 4));
    L_C03EE32:;
    (((struct o40_uint *)(v0_1))->v) = (((((struct o40_int *)(v0_1))->v)) + 0x1);
    v0_4 = (0x40);
    goto L_C03EE3A;
    L_C03ED2E:;
    v0_0 = (0x4);
    R5 = (0x230);
    v0_2 = (0x2);
    v0_3 = (0xC);
    L_C03ED36:;
    if (((int)(*(int *)((((v0_0 << 2) + (v0_5 + 0x40)) + 0x0))) < (int)v0_2)) goto L_C03ED62;
    v0_4 = (0xC8);
    if (((((((struct oC8_int *)((*(int *)((((v0_0 << 2) + v0_5) + 0x0)))))->v)) & R5) == 0)) goto L_C03ED62;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_0;
    *(unsigned int *)((v0_1 + 0x38)) = ((*(int *)((v0_1 + 0x38))) + 0x1);
    goto L_C03EE3A;
    L_C03ED62:;
    v0_6 = (int)(v0_0 + 0x1) < (int)v0_3;
    v0_0 = ((v0_0 + 0x1));
    if (v0_6) goto L_C03ED36;
    goto L_C03EE3A;
}
