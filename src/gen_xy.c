/* Straight-line functions with calls and guards (batch gen_xy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0519f0(int);
int FUN_0c056016(int);
int FUN_0c056118(int, int, int, int);
int FUN_0c0bb1a8(int, int);
int FUN_0c055c9c(int a4);
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o334_uint { char p[0x334]; unsigned int v; };
struct o33C_int { char p[0x33C]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c055c9c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R13;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_3 = R14;
    v0_4 = R13;
    v0_1 = *(int *)(((((((struct o33C_int *)(v0_0))->v)) << 2) + 0xC247634));
    v0_2 = (((struct o210_int *)(v0_0))->v);
    v0_3 = (v0_2);
    R13 = (((v0_1 << 2) << 1));
    R14 = (v0_0);
    v0_0 = (0x2000);
    v0_1 = (0xC23F268);
    w0_0 = (20.0f);
    if ((v0_2 == 88)) goto L_C055CD8;
    if ((v0_3 == 89)) goto L_C055CE0;
    if ((v0_3 == 90)) goto L_C055D12;
    if ((v0_3 == 91)) goto L_C055D46;
    if ((v0_3 == 92)) goto L_C055DA4;
    L_C055DEE:;
    return FUN_0c0519f0(R14);
    L_C055DA4:;
    v0_2 = (((struct oBC_int *)(R14))->v);
    (((struct o1D8_uint *)(R14))->v) = v0_0;
    (((struct o1DC_uint *)(R14))->v) = ((((struct o6E_short *)(R14))->v));
    (((struct o1D4_float *)(R14))->v) = w0_0;
    FUN_0c056118(R14, 0x3, (((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + v0_1) + 0x3C), 0x0);
    FUN_0c0bb1a8(R14, 0x1);
    L_C055DD8:;
    v0_0 = ((0xC1FEC54 + R13));
    L_C055DDC:;
    (((struct o2C4_uint *)(R14))->v) = (unsigned short)(*(short *)((v0_0 + 0x0)));
    (((struct o334_uint *)(R14))->v) = (unsigned short)(*(short *)((v0_0 + 0x4)));
    goto L_C055DEE;
    L_C055D46:;
    v0_2 = (((struct oBC_int *)(R14))->v);
    (((struct o1D8_uint *)(R14))->v) = v0_0;
    (((struct o1DC_uint *)(R14))->v) = ((((struct o6E_short *)(R14))->v));
    (((struct o1D4_float *)(R14))->v) = w0_0;
    FUN_0c056118(R14, 0x3, (((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + v0_1) + 0x3C), 0x0);
    FUN_0c0bb1a8(R14, 0x1);
    v0_0 = (0xC1FED04);
    goto L_C055DDC;
    L_C055D12:;
    v0_2 = (((struct oBC_int *)(R14))->v);
    (((struct o1D8_uint *)(R14))->v) = v0_0;
    (((struct o1DC_uint *)(R14))->v) = ((((struct o6E_short *)(R14))->v));
    (((struct o1D4_float *)(R14))->v) = w0_0;
    FUN_0c056118(R14, 0x3, (((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + v0_1) + 0x24), 0x1);
    FUN_0c056016(R14);
    goto L_C055DD8;
    L_C055CE0:;
    v0_2 = (((struct oBC_int *)(R14))->v);
    (((struct o1D8_uint *)(R14))->v) = v0_0;
    (((struct o1DC_uint *)(R14))->v) = ((((struct o6E_short *)(R14))->v));
    (((struct o1D4_float *)(R14))->v) = w0_0;
    FUN_0c056118(R14, 0x3, (((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + v0_1) + 0x24), 0x1);
    v0_0 = ((0xC1FEA3C + R13));
    goto L_C055DDC;
    L_C055CD8:;
    FUN_0c056016(R14);
    goto L_C055DD8;
}
