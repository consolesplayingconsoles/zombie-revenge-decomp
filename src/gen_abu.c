/* Straight-line functions with calls and guards (batch gen_abu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dd0a0(int, int);
int FUN_0c0e19aa(int, int, int);
extern float _builtin_sqrtf(float);
int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4);
struct o25C_float { char p[0x25C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };


int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[10];
    register int t1;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    int R1004;
    int R1008;
    float R1012;
    float s1;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    R1012 = f4;
    R1008 = a6;
    R1004 = a7;
    t1 = FUN_0c0e19aa(0xC059B98, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o60_ushort *)(t1))->v) = 0x0;
    (((struct o62_ushort *)(t1))->v) = (*(short *)((a5 + 0xC)));
    (((struct o64_ushort *)(t1))->v) = 0x0;
    (((struct o68_uint *)(t1))->v) = ((((struct o6C_short *)(a4))->v));
    (((struct o6C_uint *)(t1))->v) = ((((struct o6E_short *)(a4))->v));
    (((struct o70_uint *)(t1))->v) = ((((struct o70_short *)(a4))->v));
    (((struct o74_float *)(t1))->v) = ((((struct o25C_float *)(a4))->v));
    (((struct o78_uint *)(t1))->v) = (*(short *)((a5 + 0xE)));
    (((struct o80_uint *)(t1))->v) = 0x0;
    (((struct oA0_uint *)(t1))->v) = (R1008);
    (((struct oA4_uint *)(t1))->v) = (R1004);
    (((struct o84_uint *)(t1))->v) = ((*(short *)((a5 + 0xE))) & 0x1);
    (((struct o94_float *)(t1))->v) = (R1012);
    if (a8 != 0) {
        (((struct o8C_uint *)(t1))->v) = a8;
    } else {
        (((struct o8C_uint *)(t1))->v) = 0xC0F9B34;
    }
    u14 = *(float *)((a5 + 0x0));
    u15 = (((struct o4_float *)(a5))->v);
    u16 = (((struct o8_float *)(a5))->v);
    u17 = (u15 * u15);
    u17 = u17 + u14 * u14;
    R1004 = 0x888;
    u18 = u17;
    u18 = u18 + u16 * u16;
    s1 = _builtin_sqrtf(u18);
    (((struct o48_float *)(t1))->v) = ((1.0f * (*(float *)((a5 + 0x0)))) / s1);
    (((struct o4C_float *)(t1))->v) = ((1.0f * ((((struct o4_float *)(a5))->v))) / s1);
    (((struct o50_float *)(t1))->v) = ((1.0f * ((((struct o8_float *)(a5))->v))) / s1);
    (((struct o90_float *)(t1))->v) = 1.0f;
    *(float *)(((int)stk + 28)) = (-((((struct o50_float *)(t1))->v)));
    *(float *)(((int)stk + 32)) = ((((struct o4C_float *)(t1))->v));
    *(float *)(((int)stk + 36)) = ((((struct o48_float *)(t1))->v));
    FUN_0c0dd0a0((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    (((struct o48_float *)(t1))->v) = (*(float *)(((int)stk + 16)));
    (((struct o4C_float *)(t1))->v) = (*(float *)(((int)stk + 20)));
    (((struct o50_float *)(t1))->v) = (*(float *)(((int)stk + 24)));
    (((struct o98_uint *)(t1))->v) = 0x0;
    (((struct o9C_uint *)(t1))->v) = (R1004);
    return 0x9C;
}
