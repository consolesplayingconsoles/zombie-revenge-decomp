/* Straight-line functions with calls and guards (batch gen_tc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086b96(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t8;
    register int t22;
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = a5;
    R1008 = a7;
    t0 = (((struct oBC_int *)(a4))->v);
    t2 = *(int *)0xC23A258;
    t4 = FUN_0c0e19aa(0xC05BFAC, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t4);
    (((struct o88_uint *)(t4))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o8C_uint *)(t4))->v) = a4;
    (((struct o54_float *)(t4))->v) = 0.099999994f;
    (((struct o58_float *)(t4))->v) = -0.5f;
    (((struct o5C_float *)(t4))->v) = -0.5f;
    (((struct o78_uint *)(t4))->v) = 0x124F;
    (((struct oA0_uint *)(t4))->v) = 0x3C;
    (((struct oA4_uint *)(t4))->v) = 0x3;
    (((struct o98_uint *)(t4))->v) = a8;
    t8 = FUN_0c0e19aa(0xC08C20E, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t8);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((t8 + 0x30)) = *(struct mv16 *)(((((t0 << 8) + 0xC25F840) + ((((a8 << 2) << 2) << 2) << 1)) + (((((t2 + 0x1) & 0x1) << 2) << 2) << 2))); }
    if ((R1008) != 0) {
        (((struct o90_float *)(t8))->v) = (1.0f + 1.0f);
    } else {
        (((struct o90_float *)(t8))->v) = 1.0f;
    }
    (((struct o9A_ushort *)(t8))->v) = (*(short *)(((((((struct o344_int *)(a4))->v)) << 1) + 0xC0F9B60)));
    (((struct oA2_ushort *)(t8))->v) = 0x1;
    (((struct oA0_ushort *)(t8))->v) = 0x3;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((t0 << 8) + 0xC25F840) + ((((a8 << 2) << 2) << 2) << 1)) + (((((t2 + 0x1) & 0x1) << 2) << 2) << 2)));
    FUN_0c0db840((((int)stk + 4) + 0x8));
    FUN_0c086b96((((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    if (a6 != 0) {
        t22 = FUN_0c0e19aa(0xC05C148, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t22);
        (((struct oBC_uint *)(t22))->v) = ((((struct oBC_int *)(a4))->v));
        (((struct o200_uint *)(t22))->v) = 0x0;
        (((struct o1F8_uint *)(t22))->v) = 0x0;
        (((struct o1EC_uint *)(t22))->v) = ((((struct o1EC_int *)(a6))->v));
        (((struct o1E4_float *)(t22))->v) = (((((struct oC_float *)((R1004)))->v)) * (1.0f + 1.0f));
        (((struct o1FC_uint *)(t22))->v) = (unsigned char)(*(signed char *)(((R1004) + 0x1)));
        (((struct o22C_uint *)(t22))->v) = ((((struct o22C_int *)(a6))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x30)) = *(struct mv3 *)((a6 + 0x30)); }
        (((struct o6E_ushort *)(t22))->v) = ((((struct o6E_short *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x3C)) = *(struct mv3 *)((t22 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x48)) = *(struct mv3 *)((a6 + 0x48)); }
    }
}
