/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086638(int, int, int);
extern int FUN_0c0866c4();
int FUN_0c085638(int a4, int a5, int a6, int a7);
struct o284_float { char p[0x284]; float v; };
struct o2A4_uint { char p[0x2A4]; unsigned int v; };
struct o2A8_uint { char p[0x2A8]; unsigned int v; };
struct o2AC_uint { char p[0x2AC]; unsigned int v; };
struct o2B0_uint { char p[0x2B0]; unsigned int v; };
struct o2B4_uint { char p[0x2B4]; unsigned int v; };
struct o2B8_uint { char p[0x2B8]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2BC_uint { char p[0x2BC]; unsigned int v; };
struct o2C0_uint { char p[0x2C0]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D0_uint { char p[0x2D0]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2D8_uint { char p[0x2D8]; unsigned int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_uint { char p[0x2E0]; unsigned int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2F8_uint { char p[0x2F8]; unsigned int v; };
struct o2FC_uint { char p[0x2FC]; unsigned int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3E8_float { char p[0x3E8]; float v; };
struct o64_float { char p[0x64]; float v; };


int FUN_0c085638(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register float u0;
    register int t1;
    register int t2;
    register int t4;
    register int t8;
    register int t11;

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register float F4;
    register float F15;
    register int T_;
    R4 = a4;
    u0 = (((struct o284_float *)(R4))->v);
    t1 = (((struct o3D4_int *)(R4))->v);
    t2 = (((struct o3D8_int *)(R4))->v);
    *(unsigned int *)(((int)stk + 4)) = ((((struct o3DC_int *)(R4))->v));
    (((struct o2E4_uint *)(R4))->v) = 0x0;
    (((struct o2E8_uint *)(R4))->v) = 0x0;
    (((struct o2B4_uint *)(R4))->v) = 0x1;
    (((struct o2B8_uint *)(R4))->v) = 0x1;
    (((struct o2BC_uint *)(R4))->v) = 0x0;
    (((struct o2C0_uint *)(R4))->v) = 0x0;
    (((struct o2C4_uint *)(R4))->v) = 0x0;
    (((struct o2C8_uint *)(R4))->v) = 0x0;
    (((struct o2D4_uint *)(R4))->v) = 0x0;
    (((struct o2DC_uint *)(R4))->v) = 0x0;
    (((struct o2D8_uint *)(R4))->v) = 0x0;
    (((struct o2E0_uint *)(R4))->v) = 0x0;
    t4 = (((struct o2BC_int *)(R4))->v);
    (((struct o2AC_uint *)(R4))->v) = (((int)0x1 << (int)(unsigned char)(*(signed char *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x15)))) - 1);
    (((struct o2B0_uint *)(R4))->v) = 0x0;
    (((struct o2CC_uint *)(R4))->v) = 0x0;
    (((struct o2D0_uint *)(R4))->v) = 0x0;
    (((struct o2A4_uint *)(R4))->v) = 0x0;
    (((struct o2A8_uint *)(R4))->v) = 0x0;
    t8 = ((int (*)(int, int, int, int, float))(FUN_0c0866c4))((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))), t2, 0x0, a7, u0);
    t11 = ((int (*)(int, int, int, float))(FUN_0c0866c4))(((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))) + 0x6C), (*(int *)(((int)stk + 4))), 0x0, u0);
    FUN_0c086638(t2, t1, 0x0);
    (((struct o3E8_float *)(R4))->v) = ((((struct o64_float *)(t1))->v));
    (((struct o2F8_uint *)(R4))->v) = 0x0;
    (((struct o2FC_uint *)(R4))->v) = 0x0;
    return 0x2FC;
}
