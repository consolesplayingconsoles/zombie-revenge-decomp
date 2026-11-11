/* Straight-line functions with calls and guards (batch gen_ml): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3CC_uint { char p[0x3CC]; unsigned int v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c093524(int);
int FUN_0c0b301e(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c093490(int a4, int a5);
int FUN_0c0b2fb0(int a4);

int FUN_0c093490(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t8;
    register int t10;

    t0 = *(short *)((a5 + 0x6));
    t2 = (((struct oC4_int *)(a4))->v);
    t3 = *(int *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x4));
    t5 = *(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x1));
    if (((((struct oC0_int *)(a4))->v)) == (unsigned char)t5) {
        t8 = *(short *)((((t2 << 1) + t3) + 0x0));
        if (t8 != -1) {
            t10 = FUN_0c0e19aa(0xC093524, 0xB4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t10);
            (((struct o80_uint *)(t10))->v) = (unsigned char)(*(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x0)));
            (((struct oA0_uint *)(t10))->v) = (unsigned short)(*(short *)((a5 + 0x2)));
            (((struct oA4_uint *)(t10))->v) = (unsigned short)(*(short *)((a5 + 0x4)));
            (((struct o8C_uint *)(t10))->v) = ((t2 << 1) + t3);
            (((struct o88_uint *)(t10))->v) = ((((struct oBC_int *)(a4))->v));
            return FUN_0c093524(t10);
        }
        return t8;
    }
    return (unsigned char)t5;
}

int FUN_0c0b2fb0(int a4)
{
    register int t2;
    register int t6;

    t2 = 0x1;
    if ((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC2475A4))) != 0) {
        t2 = 0x0;
    }
    t6 = *(int *)(((*(int *)0xC23ECFC) + 0x1C));
    (((struct o3CC_uint *)(a4))->v) = (((((t2 << 1) + t2) << 2) << 1) + t6);
    (((struct o3D0_uint *)(a4))->v) = (*(int *)(((((((t2 << 1) + t2) << 2) << 1) + t6) + 0x14)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 1) + t6) + 0x8)); }
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x0;
    (((struct o3B4_uint *)(a4))->v) = 0x0;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    (((struct o32C_uint *)(a4))->v) = 0x0;
    *(float *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC24758C)) = 0.0f;
    *(unsigned int *)0xC23EDB0 = 0x1;
    *(unsigned int *)((a4 + 0x0)) = 0xC0B301E;
    return FUN_0c0b301e(a4);
}
