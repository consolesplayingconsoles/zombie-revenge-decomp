/* Straight-line functions with calls and guards (batch gen_st): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c1480(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0c22be(int a4);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o214_float { char p[0x214]; float v; };
struct o218_float { char p[0x218]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o354_uint { char p[0x354]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o388_uint { char p[0x388]; unsigned int v; };
struct o390_float { char p[0x390]; float v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o498_uint { char p[0x498]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };



int FUN_0c0c22be(int a4)
{
    int stk[4];
    register int t0;
    int t2;
    register int t23;
    register int t24;
    register int t25;

    t0 = FUN_0c0e1830(0xC0C1508, 0x5EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC246FF0 = t0;
    *(unsigned int *)0xC247030 = 0x2;
    *(unsigned int *)0xC247070 = 0x1;
    (((struct o0_uint *)0xC2460F4)->v) = t0;
    (((struct o4_ushort *)0xC2460F4)->v) = 0x2;
    (((struct o8_uint *)0xC2460F4)->v) = 0x1;
    (((struct oBC_uint *)(t0))->v) = 0x0;
    (((struct o498_uint *)(t0))->v) = 0x0;
    (((struct o30_float *)(t0))->v) = 200.0f;
    (((struct o34_float *)(t0))->v) = 0.000999999931f;
    (((struct o38_float *)(t0))->v) = 130.0f;
    (((struct o6E_ushort *)(t0))->v) = 0xFFFFC000;
    (((struct oC0_uint *)(t0))->v) = 0x4;
    t2 = *(int *)0xC2497B0;
    if ((0x8 & t2) != 0) {
        *(unsigned int *)(((0xC0 + t0) + 0x0)) = 0x37;
    } else {
        if ((t2 & 0x80000) != 0) {
            *(unsigned int *)(((0xC0 + t0) + 0x0)) = 0x30;
        }
    }
    (((struct o20C_uint *)(t0))->v) = 0x40000000;
    (((struct o74_uint *)(t0))->v) = 0x4;
    (((struct o388_uint *)(t0))->v) = 0x1;
    (((struct o390_float *)(t0))->v) = ((((struct o0_float *)0xC0C24C0)->v));
    (((struct o214_float *)(t0))->v) = ((((struct o4_float *)0xC0C24C0)->v));
    (((struct o218_float *)(t0))->v) = ((((struct o8_float *)0xC0C24C0)->v));
    (((struct o274_float *)(t0))->v) = 1.0f;
    (((struct o278_float *)(t0))->v) = 1.0f;
    (((struct o27C_float *)(t0))->v) = 1.0f;
    (((struct o284_float *)(t0))->v) = 1.0f;
    (((struct o8_float *)((0x468 + t0)))->v) = 1.0f;
    (((struct o4_float *)((0x468 + t0)))->v) = 1.0f;
    *(float *)(((0x468 + t0) + 0x0)) = 1.0f;
    (((struct o8_float *)((0x45C + t0)))->v) = 1.0f;
    (((struct o4_float *)((0x45C + t0)))->v) = 1.0f;
    *(float *)(((0x45C + t0) + 0x0)) = 1.0f;
    (((struct o32C_uint *)(t0))->v) = 0x0;
    (((struct o4C8_uint *)(t0))->v) = 0x1;
    *(unsigned int *)(((((((struct oBC_int *)(t0))->v)) << 2) + 0xC24759C)) = 0x200;
    *(float *)(((((((struct oBC_int *)(t0))->v)) << 2) + 0xC24758C)) = 0.0f;
    (((struct oA4_uint *)(t0))->v) = 0xA7F;
    (((struct o354_uint *)(t0))->v) = 0x1;
    FUN_0c0855ba(t0);
    FUN_0c0bb0f4(t0);
    FUN_0c01d562(t0, 0xC209AD0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    *(unsigned int *)((a4 + 0x38)) = t0;
    FUN_0c0c1480();
    FUN_0c0ba6e8(t0);
    FUN_0c0ba776(t0);
    FUN_0c085638(t0);
    (((struct o5C_uint *)(a4))->v) = ((((struct o3D4_int *)(t0))->v));
    t23 = 0x30;
    for (;;) {
        t24 = (((struct o5C_int *)(a4))->v);
        t23 = (t23 - 0x1);
        (((struct o5C_uint *)(a4))->v) = (t24 + 0x2);
        *(unsigned short *)((((t24 + 0x2) - 0x2) + 0x0)) = 0x0;
        if (t23 == 0) {
            break;
        }
    }
    t25 = (((struct o3D4_int *)(t0))->v);
    (((struct o68_float *)(t25))->v) = 0.0f;
    (((struct o64_float *)(t25))->v) = 0.0f;
    (((struct o60_float *)(t25))->v) = 0.0f;
    *(unsigned int *)0xC262384 = 0xCEEFF24;
    (((struct o84_uint *)(a4))->v) = 0x0;
    (((struct o88_uint *)(a4))->v) = 0x0;
    (((struct o8C_uint *)(a4))->v) = 0x0;
    (((struct o90_uint *)(a4))->v) = 0x0;
    (((struct o78_uint *)(a4))->v) = ((((struct oC0_int *)(t0))->v));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x78;
}
