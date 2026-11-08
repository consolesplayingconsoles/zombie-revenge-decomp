/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6688(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int FUN_0c0824c0(int a4, int a5, float f4, float f5, float f6);
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o430_int { char p[0x430]; int v; };
struct o430_uint { char p[0x430]; unsigned int v; };
struct o434_int { char p[0x434]; int v; };
struct o434_uint { char p[0x434]; unsigned int v; };
struct o438_short { char p[0x438]; short v; };
struct o438_ushort { char p[0x438]; unsigned short v; };
struct o43A_short { char p[0x43A]; short v; };
struct o43A_ushort { char p[0x43A]; unsigned short v; };


int FUN_0c0824c0(int a4, int a5, float f4, float f5, float f6)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    v0_0 = a4;
    v0_1 = a5;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    v0_3 = (v0_2);
    if ((((((struct o3F4_int *)(v0_2))->v)) != 1)) goto L_C08252E;
    (((struct o3F4_uint *)(v0_3))->v) = 0x0;
    (((struct o438_ushort *)(v0_3))->v) = (*(int *)(((v0_0 + 0x18) + 0x0)));
    (((struct o43A_ushort *)(v0_3))->v) = (*(int *)((((v0_0 + 0x18) + 0x4) + 0x0)));
    (((struct o430_uint *)(v0_3))->v) = (*(int *)(((((v0_0 + 0x18) + 0x4) + 0x4) + 0x0)));
    (((struct o434_uint *)(v0_3))->v) = (*(int *)((((((v0_0 + 0x18) + 0x4) + 0x4) + 0x4) + 0x0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + v0_3)) = *(struct mv3 *)(v0_0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x344 + v0_3)) = *(struct mv3 *)((v0_0 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x350 + v0_3)) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x35C + v0_3)) = *(struct mv3 *)((v0_1 + 0xC)); }
    L_C08252E:;
    (((struct o438_ushort *)(v0_3))->v) = (((((struct o438_short *)(v0_3))->v)) + ((((struct o430_int *)(v0_3))->v)));
    (((struct o43A_ushort *)(v0_3))->v) = (((((struct o43A_short *)(v0_3))->v)) + ((((struct o434_int *)(v0_3))->v)));
    R1004 = (((int)stk + 4) + 0x8);
    FUN_0c0a6688((0x338 + v0_3), (0x438 + v0_3), (((int)stk + 4) + 0x8));
    R1008 = (((int)stk + 4) + 0x8);
    nlAddVector3op((0x254 + v0_3), 0xC247DA0, (((int)stk + 4) + 0x8));
    nlAddVector((0x338 + v0_3), (0x344 + v0_3));
    FUN_0c0a6688((0x350 + v0_3), (0x438 + v0_3), (R1004));
    nlAddVector3op((0x278 + v0_3), 0xC247DA0, (R1008));
    nlAddVector((0x350 + v0_3), (0x35C + v0_3));
    R1008 = (((int)stk + 4) + 0x18);
    R1004 = (((int)stk + 4) + 0x14);
    FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x18), (((((struct o254_float *)(v0_3))->v)) - ((((struct o278_float *)(v0_3))->v))), (((((struct o258_float *)(v0_3))->v)) - ((((struct o27C_float *)(v0_3))->v))), (((((struct o25C_float *)(v0_3))->v)) - ((((struct o280_float *)(v0_3))->v))));
    (((struct o3CC_ushort *)(v0_3))->v) = (*(int *)(((R1004) + 0x0)));
    (((struct o3CE_ushort *)(v0_3))->v) = (*(int *)(((R1008) + 0x0)));
    return 0x3CE;
}
