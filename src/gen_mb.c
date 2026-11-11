/* Straight-line functions with calls and guards (batch gen_mb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3CC_int { char p[0x3CC]; int v; };
struct o3CC_uint { char p[0x3CC]; unsigned int v; };
struct o3D0_int { char p[0x3D0]; int v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c05cfea(int, int, int);
int FUN_0c0a8766(void);
int FUN_0c0a8bb0(int);
int FUN_0c0b30f4(int);
int FUN_0c0b8700(void);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb134(int);
int FUN_0c0b2fb0(int a4);
int FUN_0c05cf94(int a4, int a5);
int FUN_0c0b86cc(void);
int FUN_0c0a8730(void);


int FUN_0c05cf94(int a4, int a5)
{
    return FUN_0c05cfea(a4, a5, 0x1);
}

int FUN_0c0b86cc(void)
{
    (((struct o28_uint *)0xC23ED44)->v) = 0x1;
    (((struct o2C_uint *)0xC23ED44)->v) = 0x0;
    (((struct o4_uint *)0xC23EDE0)->v) = 0x0;
    (((struct o0_uint *)0xC23EDE0)->v) = 0x0;
    *(unsigned int *)0xC23ECFC = ((((((((struct oC_int *)0xC23ED44)->v)) << 2) << 2) << 1) + 0xC2087EC);
    (((struct o0_uint *)0xC23ED44)->v) = 0x0;
    (((struct o4_uint *)0xC23A18C)->v) = 0x0;
    (((struct o0_uint *)0xC23A18C)->v) = (((((struct o0_int *)0xC23A18C)->v)) + 0x1);
    return FUN_0c0b8700();
}

int FUN_0c0a8730(void)
{
    FUN_0c0a8bb0((*(int *)0xC23ED50));
    return FUN_0c0a8766();
}
