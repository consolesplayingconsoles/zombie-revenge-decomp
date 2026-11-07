/* Straight-line functions with calls and guards (batch gen_acf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c022838(int);
extern int FUN_0c02a19a();
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int);
int FUN_0c04638a(int);
int FUN_0c046cc0(int);
int FUN_0c047e9c(int a4, int a5, int a6, int a7);
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o54C_int { char p[0x54C]; int v; };


int FUN_0c047e9c(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R3;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_5 = (((struct o3A0_int *)(v0_0))->v);
    v0_4 = (v0_5);
    v0_0 = (v0_0);
    if ((v0_5 == 0)) goto L_C047EBC;
    if ((v0_4 == 1)) goto L_C047F94;
    if ((v0_4 != 2)) goto L_C047EB8;
    if (((((((struct o2EC_int *)(v0_0))->v)) & 12) == 0)) goto L_C047FE8;
    (((struct o248_uint *)(v0_0))->v) = 0x0;
    v0_1 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(v0_0, v0_1, v0_2, v0_3);
    L_C047FE8:;
    return (FUN_0c022838(v0_0));
    L_C047EB8:;
    goto L_C047FE8;
    L_C047F94:;
    FUN_0c034fbc(v0_0, 0x80, 0x1, 0x0);
    FUN_0c04638a(v0_0);
    (((struct o248_uint *)(v0_0))->v) = (((((struct o248_int *)(v0_0))->v)) + 0x1000);
    v0_1 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(v0_1 - 1) >= 0)) goto L_C047FE8;
    (((struct o2C4_uint *)(v0_0))->v) = 0x59F;
    v0_4 = (0x2CC);
    v0_1 = (0x1);
    L_C047FC8:;
    *(unsigned int *)((v0_0 + v0_4)) = v0_1;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    goto L_C047FE8;
    L_C047EBC:;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((((struct o510_int *)(v0_0))->v)) << 2) + 0xC246FF0)));
    v0_4 = (FUN_0c046cc0(v0_0)) != 0;
    if (v0_4) goto L_C047F04;
    return (((int (*)(int, int, int, int))(FUN_0c02a19a))(v0_0, v0_1, v0_2, v0_3));
    L_C047F04:;
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
    FUN_0c03442c(v0_0, (*(int *)(((int)stk + 28))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
    (((struct o248_uint *)(v0_0))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x14)) = *(struct mv3 *)(0xC0F6738); }
    FUN_0c046294(v0_0, (((int)stk + 12) + 0x14), 0x1);
    FUN_0c034fbc(v0_0, 0x200, 0x1, 0x0);
    FUN_0c046170(v0_0, (*(float *)0xC048048));
    if ((((((struct o54C_int *)(v0_0))->v)) != 1)) goto L_C047F64;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C047F70;
    L_C047F64:;
    v0_1 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(v0_1 - 1) >= 0)) goto L_C047FE8;
    L_C047F70:;
    v0_1 = (((struct o4F0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)(((*(int *)(((((v0_1 << 2) + v0_1) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(v0_0))->v) = 0x1;
    v0_4 = (0x3AC);
    v0_1 = (0x1E);
    goto L_C047FC8;
}
