/* Straight-line functions with calls and guards (batch gen_rv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c0947c8(int a4, int a5);
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };



int FUN_0c0947c8(int a4, int a5)
{
    int stk[6];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    int R8;
    register int R14;
    register float F0;
    register float F2;
    register float F3;
    register float F14;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    v0_0 = a4;
    v0_1 = a5;
    R1004 = v0_0;
    v0_0 = FUN_0c0e19aa(0xC0949B4, 0x3C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_0);
    *(unsigned int *)((v0_0 + 0x30)) = ((((struct oBC_int *)((R1004)))->v));
    nlPushMatrix(0x0);
    v0_0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    v0_1 = (((struct oBC_int *)((R1004)))->v);
    R1008 = (((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268) + 0xC);
    R1004 = 0xD;
    v0_0 = (v0_0);
    v0_1 = (0xFFFFA001);
    v0_2 = (0xC0DA2E0);
    R8 = (0xFFF);
    v0_2 = (0x28);
    w0_0 = (3.0f);
    w0_1 = (3.05185094e-05f);
    L_C09483E:;
    v0_3 = (0x4);
    w0_2 = (1.5f);
    L_C094844:;
    v0_5 = FUN_0c0da2e0();
    v0_4 = FUN_0c0e19aa(0xC094AD8, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x30)) = *(struct mv3 *)((R1008)); }
    w0_3 = -0.099999994f;
    w0_3 = w0_3 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
    (((struct o44_float *)(v0_4))->v) = w0_3;
    w0_3 = w0_2;
    w0_3 = w0_3 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
    (((struct o40_float *)(v0_4))->v) = w0_3;
    (((struct o48_float *)(v0_4))->v) = ((float)v0_5 * w0_1);
    (((struct o4C_float *)(v0_4))->v) = ((float)(FUN_0c0da2e0()) * w0_1);
    (((struct o50_float *)(v0_4))->v) = (1.0f - (((float)v0_5 * w0_1)));
    w0_3 = w0_0;
    w0_3 = w0_3 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
    (((struct o54_float *)(v0_4))->v) = w0_3;
    (((struct o58_uint *)(v0_4))->v) = v0_1;
    (((struct o60_uint *)(v0_4))->v) = ((FUN_0c0da2e0()) & 0x3);
    (((struct o64_uint *)(v0_4))->v) = v0_2;
    nlUnitMatrix();
    nlRotateAY(((((struct o3CE_short *)(v0_0))->v)));
    nlRotateAX(((((struct o3CC_short *)(v0_0))->v)));
    v0_5 = FUN_0c0da2e0();
    nlRotateAZ((0xFFFFF800 + ((v0_5 & R8) + v0_1)));
    FUN_0c0db470((v0_4 + 0x3C), (v0_4 + 0x3C));
    v0_4 = (v0_3 - 0x1) != 0;
    v0_3 = ((v0_3 - 0x1));
    w0_2 = ((w0_2 * 0.899999976f));
    if (v0_4) goto L_C094844;
    v0_3 = R1004;
    R1004 = (v0_3 - 1);
    v0_1 = ((v0_1 + 0xE38));
    v0_3 = ((((v0_3 - 1) == 0)));
    if ((v0_3)) goto L_C094994;
    goto L_C09483E;
    L_C094994:;
    return nlPopMatrix(0x1);
}
