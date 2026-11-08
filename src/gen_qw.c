/* Straight-line functions with calls and guards (batch gen_qw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c05d95c(int a4, int a5, int a6);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o340_int { char p[0x340]; int v; };
struct o344_int { char p[0x344]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c05d95c(int a4, int a5, int a6)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_4 = (0x344);
    v0_1 = ((*(int *)(((((((struct o34C_int *)(v0_0))->v)) << 2) + 0xC2475D4))));
    v0_2 = (v0_3);
    v0_3 = (v0_0);
    if ((((((struct o344_int *)(v0_0))->v)) != 0)) goto L_C05D984;
    L_C05DB70:;
    return v0_4;
    L_C05D984:;
    v0_4 = (0x21C);
    if (((int)((((struct o21C_int *)(v0_1))->v)) > 0)) goto L_C05D990;
    *(unsigned int *)((v0_1 + v0_4)) = 0x0;
    goto L_C05DB70;
    L_C05D990:;
    v0_0 = FUN_0c0e19aa(0xC05DB80, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(v0_0);
    (((struct o21C_uint *)(v0_1))->v) = (((((struct o21C_int *)(v0_1))->v)) - 1);
    (((struct oBC_uint *)(v0_0))->v) = ((((struct oBC_int *)(v0_3))->v));
    (((struct o200_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x2)));
    FUN_0c0cc3f8(0x432A9, 0x0, 0x0, 0x0);
    FUN_0c0cc054(((((struct oBC_int *)(v0_3))->v)), 0xB);
    (((struct o1EC_uint *)(v0_0))->v) = ((((struct o1EC_int *)(v0_3))->v));
    (((struct o1E8_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x3)));
    (((struct o1F4_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x4)));
    (((struct o204_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x5)));
    (((struct o1E4_float *)(v0_0))->v) = (((((struct oC_float *)(v0_2))->v)) * 0.199999988f);
    (((struct o1FC_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x1)));
    (((struct o1F8_uint *)(v0_0))->v) = (unsigned char)(*(signed char *)((v0_2 + 0x0)));
    (((struct o22C_uint *)(v0_0))->v) = ((unsigned short)(*(short *)((v0_2 + 0x8))) << 1);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C14); }
    FUN_0c0dbda0((((((((struct oBC_int *)(v0_3))->v)) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x8);
    FUN_0c0a79fa((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), ((((int)stk + 4) + 0x10) + 0x8));
    v0_1 = (((struct o340_int *)(v0_3))->v);
    FUN_0c0db470(((((v0_1 << 1) + v0_1) << 2) + 0xC1FEFBC), (v0_0 + 0x30));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0))));
    nlRotateAX((*(int *)(((((int)stk + 4) + 0x10) + 0x0))));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c0db470((((int)stk + 4) + 0x4), (v0_0 + 0x48));
    v0_1 = (((((int)stk + 4) + 0x10) + 0x4));
    v0_2 = ((((int)stk + 4) + 0x10));
    v0_4 = (v0_0);
    v0_0 = ((((int)stk + 4) + 0x10));
    v0_3 = (((((int)stk + 4) + 0x10) + 0x4));
    FUN_0c0a7714(v0_0, v0_3, ((((struct o48_float *)(v0_4))->v)), ((((struct o4C_float *)(v0_4))->v)), ((((struct o50_float *)(v0_4))->v)));
    (((struct o6E_ushort *)(v0_4))->v) = (*(int *)((v0_1 + 0x0)));
    (((struct o6C_ushort *)(v0_4))->v) = (*(int *)((v0_2 + 0x0)));
    nlPopMatrix(0x1);
    (((struct o220_uint *)(v0_4))->v) = 0x9E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x3C)) = *(struct mv3 *)((v0_4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + v0_4)) = *(struct mv3 *)((v0_4 + 0x30)); }
    (((struct o248_uint *)(v0_4))->v) = 0x1;
    v0_4 = (0x248);
    goto L_C05DB70;
}
