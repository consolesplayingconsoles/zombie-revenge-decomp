/* Straight-line functions with calls and guards (batch gen_tl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6610(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e5f1c(void);
int FUN_0c033530(int a4, int a5, int a6, int a7);
struct o1CC_int { char p[0x1CC]; int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o3E8_short { char p[0x3E8]; short v; };
struct o3E8_uint { char p[0x3E8]; unsigned int v; };
struct o3EC_float { char p[0x3EC]; float v; };
struct o3F0_float { char p[0x3F0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o410_uint { char p[0x410]; unsigned int v; };
struct o414_uint { char p[0x414]; unsigned int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c033530(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register float u8;
    register float u11;
    register int t20;
    register float u21;
    register float u22;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c0e1830(0xC0333F0, 0x41C);
    FUN_0c0e19d0(t0);
    (((struct o1DC_uint *)(t0))->v) = ((*(int *)(((int)stk + 4))) - 32768);
    (((struct o1CC_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
    (((struct o414_uint *)(t0))->v) = 0x0;
    (((struct o3EC_float *)(t0))->v) = 0.0272199996f;
    (((struct o400_uint *)(t0))->v) = 0x874;
    (((struct o3E8_uint *)(t0))->v) = ((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 12))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    (((struct o3F0_float *)(t0))->v) = 1.5f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0.0f;
    if (((((struct o1CC_int *)(t0))->v)) != 0) {
        u8 = (((struct o3F0_float *)(t0))->v);
        FUN_0c0da2e0();
        u11 = 0.699999988f;
        u11 = u11 + 0.099999994f * (float)(FUN_0c0e5f1c());
        (((struct o4_float *)((((int)stk + 4) + 0x1C)))->v) = ((0.659999967f / (u8 / (1.0f + 1.0f))) * u11);
    } else {
        (((struct o4_float *)((((int)stk + 4) + 0x1C)))->v) = 0.0f;
    }
    t20 = (((struct o1CC_int *)(t0))->v);
    u21 = *(float *)0xC033730;
    u22 = (((struct o3F0_float *)(t0))->v);
    FUN_0c0da2e0();
    u25 = 0.699999988f;
    u25 = u25 + 0.099999994f * (float)(FUN_0c0e5f1c());
    u26 = (((float)t20 * u21) / (u22 / (1.0f + 1.0f)));
    (((struct o8_float *)((((int)stk + 4) + 0x1C)))->v) = (u26 * u25);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = (((((struct o3E8_int *)(t0))->v)) + 0x8000);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), (0x220 + t0));
    (((struct o6E_ushort *)(t0))->v) = ((((struct o3E8_short *)(t0))->v));
    FUN_0c0da2e0();
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 1536);
    (((struct o230_uint *)(t0))->v) = 0x0;
    FUN_0c0da2e0();
    *(unsigned int *)(((0x234 + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 768);
    (((struct o410_uint *)(t0))->v) = 0x0;
    *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) + 0x1);
    return 0x410;
}
