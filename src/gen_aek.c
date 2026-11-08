/* Straight-line functions with calls and guards (batch gen_aek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0cd6f8(int a4, int a5, int a6);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };


int FUN_0c0cd6f8(int a4, int a5, int a6)
{
    int stk[6];
    int t0;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    v0_0 = a5;
    v0_0 = a6;
    R1004 = R4;
    t0 = *(int *)0xC23ED5C;
    R4 = (t0);
    if (((0x200 & t0) == 0)) goto L_C0CD742;
    R0 = (0x800);
    if (((0x800 & R4) == 0)) goto L_C0CD742;
    v0_0 = FUN_0c0e1830(0xC0CD85C, 0x34);
    FUN_0c0e19d0(v0_0);
    *(unsigned int *)((v0_0 + 0x4)) = 0xC0CD6B0;
    *(unsigned int *)0xC247D04 = 0x7;
    *(unsigned int *)0xC247CD0 = 0xC1033D4;
    FUN_0c0cc3f8(0x71FA9, 0x0, 0x0, 0x0);
    R0 = ((FUN_0c0e19f2()));
    v0_0 = (v0_0);
    L_C0CD742:;
    v0_0 = R1004;
    v0_1 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_1 + 0x1);
    if (((int)(v0_1 + 0x1) < (int)0xB4)) goto L_C0CD7F0;
    v0_0 = FUN_0c0e19aa(0xC0CD9C0, 0x80, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_0);
    (((struct o44_float *)(v0_0))->v) = (*(float *)0xC1E9EE4);
    (((struct o48_float *)(v0_0))->v) = (*(float *)0xC1E9EE8);
    (((struct o4C_float *)(v0_0))->v) = (*(float *)0xC1E9EEC);
    *(unsigned int *)((v0_0 + 0x34)) = 0xC1E9EF0;
    (((struct o38_float *)(v0_0))->v) = (*(float *)0xC1E9EF0);
    (((struct o3C_float *)(v0_0))->v) = (*(float *)0xC1E9EF4);
    (((struct o40_float *)(v0_0))->v) = (*(float *)0xC1E9EF8);
    w0_0 = 0.349999994f;
    w0_0 = w0_0 + 2.49999994e-05f * (float)(FUN_0c0da2e0());
    (((struct o68_float *)(v0_0))->v) = w0_0;
    w0_0 = 0.399999976f;
    w0_0 = w0_0 + 0.5f * ((((((struct o68_float *)(v0_0))->v)) + -0.349999994f));
    (((struct o64_float *)(v0_0))->v) = w0_0;
    (((struct o78_uint *)(v0_0))->v) = 0x3;
    v0_1 = FUN_0c0d9dc0((((((struct o38_float *)(v0_0))->v)) - ((((struct o44_float *)(v0_0))->v))), (((((struct o40_float *)(v0_0))->v)) - ((((struct o4C_float *)(v0_0))->v))));
    (((struct o5E_ushort *)(v0_0))->v) = v0_1;
    *(unsigned int *)(((R1004) + 0x30)) = 0x0;
    R0 = (v0_1);
    v0_0 = (v0_0);
    L_C0CD7F0:;
    return R0;
}
