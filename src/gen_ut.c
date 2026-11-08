/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01fd30(int);
int FUN_0c03542e(int);
int FUN_0c049c0a(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c020c80(int a4, int a5);
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2A0_uint { char p[0x2A0]; unsigned int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o47C_uint { char p[0x47C]; unsigned int v; };
struct o48C_uint { char p[0x48C]; unsigned int v; };
struct o494_uint { char p[0x494]; unsigned int v; };
struct o4A8_uint { char p[0x4A8]; unsigned int v; };
struct o4AC_uint { char p[0x4AC]; unsigned int v; };
struct o4BC_uint { char p[0x4BC]; unsigned int v; };
struct o4C0_uint { char p[0x4C0]; unsigned int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o5C4_uint { char p[0x5C4]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };


int FUN_0c020c80(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct oC0_int *)(a5))->v);
    t1 = FUN_0c0e1830(0xC020AA4, 0x5EC);
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = a4;
    (((struct o48C_uint *)(t1))->v) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0)));
    (((struct o4BC_uint *)(t1))->v) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x24)));
    (((struct o4C0_uint *)(t1))->v) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x28)));
    (((struct oC8_uint *)(t1))->v) = (*(int *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x4)));
    (((struct o304_uint *)(t1))->v) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    (((struct o308_uint *)(t1))->v) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    (((struct o274_float *)(t1))->v) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    (((struct o278_float *)(t1))->v) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    (((struct o27C_float *)(t1))->v) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    (((struct o284_float *)(t1))->v) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    (((struct o4F0_uint *)(t1))->v) = (unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x8)));
    (((struct o47C_uint *)(t1))->v) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x4)));
    (((struct o4A8_uint *)(t1))->v) = (*(int *)0xC23ED50);
    (((struct o4AC_uint *)(t1))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a5 + 0x30)); }
    (((struct o6E_ushort *)(t1))->v) = ((((struct o6E_short *)(a5))->v));
    (((struct oC0_uint *)(t1))->v) = ((((struct oC0_int *)(a5))->v));
    (((struct oC4_uint *)(t1))->v) = ((((struct oC4_int *)(a5))->v));
    (((struct o2A0_uint *)(t1))->v) = ((((struct o2A0_int *)(a5))->v));
    (((struct o45C_float *)(t1))->v) = ((((struct o45C_float *)(a5))->v));
    (((struct o460_float *)(t1))->v) = ((((struct o460_float *)(a5))->v));
    (((struct o464_float *)(t1))->v) = ((((struct o464_float *)(a5))->v));
    (((struct o5C4_uint *)(t1))->v) = (*(int *)(((0xC1F958C + (((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2)) + 0xC)));
    (((struct o494_uint *)(t1))->v) = ((((struct oBC_int *)(a5))->v));
    *(unsigned int *)((t1 + 0x4)) = 0xC01FDDC;
    FUN_0c03542e(t1);
    *(unsigned int *)(((0xC246FF0 + (a4 << 2)) + 0x0)) = t1;
    *(unsigned int *)((((a4 << 2) + 0xC246FF0) + 0x0)) = t1;
    FUN_0c01fd30(t1);
    return FUN_0c049c0a(t1);
}
