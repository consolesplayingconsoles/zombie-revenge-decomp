/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d9dc0(int, int, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int _modls(int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c061030(int a4, int a5, int a6, int a7);
int FUN_0c0811f4(int a4);
struct o250_int { char p[0x250]; int v; };
struct o250_uint { char p[0x250]; unsigned int v; };
struct o270_float { char p[0x270]; float v; };
struct o33C_float { char p[0x33C]; float v; };
struct o348_float { char p[0x348]; float v; };
struct o370_uint { char p[0x370]; unsigned int v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o378_uint { char p[0x378]; unsigned int v; };
struct o37C_float { char p[0x37C]; float v; };
struct o380_float { char p[0x380]; float v; };
struct o384_float { char p[0x384]; float v; };
struct o388_float { char p[0x388]; float v; };
struct o38C_float { char p[0x38C]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o394_float { char p[0x394]; float v; };
struct o398_float { char p[0x398]; float v; };
struct o39C_float { char p[0x39C]; float v; };
struct o3A0_float { char p[0x3A0]; float v; };
struct o3B0_float { char p[0x3B0]; float v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_float { char p[0x8]; float v; };



int FUN_0c0811f4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((0xC246FF0 + (((((struct o3B4_int *)(a4))->v)) << 2)));
    t1 = *(int *)((0xC246FF0 + (((((struct o3B8_int *)(a4))->v)) << 2)));
    t2 = (((struct o3B4_int *)(a4))->v);
    t3 = (((struct o3B8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + a4)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268)); }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        u0 = (((((struct o270_float *)(t0))->v)) + 15.0f);
    } else {
        u0 = (((((struct o270_float *)(t0))->v)) + 12.0f);
    }
    if (u0 > ((((struct o33C_float *)(a4))->v))) {
        (((struct o33C_float *)(a4))->v) = u0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x344 + a4)) = *(struct mv3 *)(((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268)); }
    if ((0x100 & (*(int *)0xC23A1A8)) == 0) {
        u0 = (((((struct o270_float *)(t1))->v)) + 15.0f);
    } else {
        u0 = (((((struct o270_float *)(t1))->v)) + 12.0f);
    }
    if (u0 > ((((struct o348_float *)(a4))->v))) {
        (((struct o348_float *)(a4))->v) = u0;
    }
    FUN_0c0db470((0x338 + a4), (0x37C + a4));
    FUN_0c0db470((0x344 + a4), (0x390 + a4));
    (((struct o388_float *)(a4))->v) = (((((struct o37C_float *)(a4))->v)) / ((*(float *)0xC247D0C) * ((((struct o384_float *)(a4))->v))));
    (((struct o38C_float *)(a4))->v) = (((((struct o380_float *)(a4))->v)) / ((*(float *)0xC247D10) * ((((struct o384_float *)(a4))->v))));
    (((struct o39C_float *)(a4))->v) = (((((struct o390_float *)(a4))->v)) / ((*(float *)0xC247D0C) * ((((struct o398_float *)(a4))->v))));
    (((struct o3A0_float *)(a4))->v) = (((((struct o394_float *)(a4))->v)) / ((*(float *)0xC247D10) * ((((struct o398_float *)(a4))->v))));
    (((struct o370_uint *)(a4))->v) = ((((struct o6E_short *)(t0))->v));
    (((struct o374_uint *)(a4))->v) = ((((struct o6E_short *)(t1))->v));
    (((struct o378_uint *)(a4))->v) = (short)(FUN_0c0d9dc0(0xC247D10, 0xC247D0C, ((*(float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0x0)))), (((((struct o8_float *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268)))->v)) - ((((struct o8_float *)(((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268)))->v)))));
    u0 = (((struct o388_float *)(a4))->v);
    t0 = 0;
    if (1.0f > _builtin_fabsf(u0)) {
        u1 = (((struct o38C_float *)(a4))->v);
        if (!(1.0f > _builtin_fabsf(u1))) {
            (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x8);
        }
        u2 = _builtin_fabsf(u1);
        t0 = ((1.0f > _builtin_fabsf(u1)));
    } else {
        (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x8);
        u2 = _builtin_fabsf(u0);
        t0 = (0);
    }
    u0 = (((struct o39C_float *)(a4))->v);
    t0 = 0;
    if (1.0f > _builtin_fabsf(u0)) {
        u1 = (((struct o3A0_float *)(a4))->v);
        if (!(1.0f > _builtin_fabsf(u1))) {
            (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x10);
        }
        u2 = _builtin_fabsf(u1);
        t0 = ((1.0f > _builtin_fabsf(u1)));
    } else {
        (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x10);
        u2 = _builtin_fabsf(u0);
        t0 = (0);
    }
    (((struct o3B0_float *)(a4))->v) = (nlLength((0x338 + a4), (0x344 + a4)));
    return nlGetAverageVector((0x338 + a4), (0x344 + a4), (0x3A4 + a4), 0.5f, 0.5f);
}
