/* Straight-line functions with calls and guards (batch gen_aea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c053dcc(int, int);
int FUN_0c08696c(int);
int FUN_0c04ddb0(int a4, int a5);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o29C_int { char p[0x29C]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o32C_int { char p[0x32C]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o340_int { char p[0x340]; int v; };
struct o378_uint { char p[0x378]; unsigned int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };


int FUN_0c04ddb0(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = (v0_1);
    if ((((*(int *)((v0_2 + 0x0))) & 0x400) == 0)) goto L_C04DE98;
    if (((int)((((struct o29C_int *)(v0_0))->v)) < (int)0x5)) goto L_C04DE98;
    v0_1 = (0x394);
    if ((((((struct o394_int *)(v0_0))->v)) != 0)) goto L_C04DE9A;
    v0_1 = (0xC1FE3D0);
    if (((*(int *)(((((((struct o340_int *)(v0_0))->v)) << 2) + 0xC1FE3D0))) == 0)) goto L_C04DE9A;
    (((struct o20C_uint *)(v0_0))->v) = 0x8;
    (((struct o210_uint *)(v0_0))->v) = 0x86;
    v0_2 = (0x1);
    v0_1 = ((*(int *)(((((((struct o340_int *)(v0_0))->v)) << 2) + 0xC1FE3D0))));
    if (((int)((((struct o32C_int *)(v0_0))->v)) <= (int)0x1)) goto L_C04DE20;
    v0_3 = (((struct oC0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)(((v0_1 + (((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) << 1)) + 0xE)));
    L_C04DE6C:;
    (((struct o2CC_uint *)(v0_0))->v) = v0_2;
    (((struct o2D4_uint *)(v0_0))->v) = v0_2;
    (((struct o3AC_uint *)(v0_0))->v) = 0x0;
    (((struct o3B0_uint *)(v0_0))->v) = 0x0;
    (((struct o394_uint *)(v0_0))->v) = v0_2;
    (((struct o378_uint *)(v0_0))->v) = 0x0;
    FUN_0c053dcc(v0_0, 0x1);
    FUN_0c08696c(v0_0);
    v0_1 = (v0_2);
    L_C04DE9A:;
    return v0_1;
    L_C04DE20:;
    if ((((((struct o330_int *)(v0_0))->v)) != 0)) goto L_C04DE4A;
    v0_3 = (((struct oC0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)((v0_1 + ((((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) + ((((struct oC4_int *)(v0_0))->v))) << 1))));
    goto L_C04DE6C;
    L_C04DE4A:;
    v0_3 = (((struct oC0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)(((v0_1 + ((((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) + ((((struct oC4_int *)(v0_0))->v))) << 1)) + 0x6)));
    goto L_C04DE6C;
    L_C04DE98:;
    v0_1 = (0x0);
    goto L_C04DE9A;
}
