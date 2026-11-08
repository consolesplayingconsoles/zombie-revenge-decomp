/* Straight-line functions with calls and guards (batch gen_acx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0911b8(int a4, int a5);
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o60_uint { char p[0x60]; unsigned int v; };



int FUN_0c0911b8(int a4, int a5)
{
    int stk[4];
    register int t1;
    register float u12;
    register float u17;
    register int t26;
    register int t32;
    register int t41;

    *(unsigned int *)(((int)stk + 12)) = a4;
    t1 = FUN_0c0e19aa(0xC091AC8, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-((((struct o4_float *)(a5))->v))), (-((((struct o8_float *)(a5))->v))));
    (((struct o48_ushort *)(t1))->v) = (*(int *)(((int)stk + 4)));
    (((struct o4C_ushort *)(t1))->v) = (*(int *)(((int)stk + 8)));
    (((struct o4A_ushort *)(t1))->v) = ((FUN_0c0da2e0()) << 1);
    u12 = 0.199999988f;
    u12 = u12 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    (((struct o54_float *)(t1))->v) = u12;
    (((struct o58_float *)(t1))->v) = (((((struct o54_float *)(t1))->v)) * 1.5f);
    (((struct o60_uint *)(t1))->v) = ((FUN_0c0da2e0()) & 0x1F);
    (((struct o30_float *)(t1))->v) = ((float)(FUN_0c0da2e0()) * 9.15555211e-06f);
    (((struct o64_uint *)(t1))->v) = 0x14;
    u17 = 0.299999982f;
    u17 = u17 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    FUN_0c0dce80((t1 + 0x3C), a5, u17);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((*(int *)(((int)stk + 12))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    t26 = FUN_0c0da2e0();
    nlRotateAY((t26 << 1));
    FUN_0c0db470((t1 + 0x30), (t1 + 0x30));
    nlPopMatrix(0x1);
    t32 = FUN_0c0e19aa(0xC091BE4, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t32);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-((((struct o4_float *)(a5))->v))), (-((((struct o8_float *)(a5))->v))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t32 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    (((struct o48_ushort *)(t32))->v) = (*(int *)(((int)stk + 4)));
    (((struct o4C_ushort *)(t32))->v) = (*(int *)(((int)stk + 8)));
    t41 = FUN_0c0da2e0();
    (((struct o4A_ushort *)(t32))->v) = (t41 << 1);
    return (t41 << 1);
}
