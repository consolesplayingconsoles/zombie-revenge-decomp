/* Straight-line functions with calls and guards (batch gen_qs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02f0e4(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int FUN_0c02f174(int a4);
struct o28C_int { char p[0x28C]; int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o508_int { char p[0x508]; int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o514_uint { char p[0x514]; unsigned int v; };
struct o524_int { char p[0x524]; int v; };


int FUN_0c02f174(int a4)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F4;
    register float F12;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_6 = (0x28C);
    v0_0 = (((((struct o508_int *)(v0_3))->v)));
    v0_1 = (v0_3);
    v0_2 = (0x0);
    if ((((((struct o28C_int *)(v0_3))->v)) != 0)) goto L_C02F19C;
    L_C02F37C:;
    (((struct o508_uint *)(v0_1))->v) = v0_2;
    (((struct o514_uint *)(v0_1))->v) = v0_2;
    v0_0 = (((v0_0 == 0)));
    L_C02F386:;
    return ((v0_0) ? 1 : 0);
    L_C02F19C:;
    v0_4 = *(int *)(((((*(int *)((v0_1 + v0_6))) << 2) + 0xC246FF0) + 0x0));
    v0_7 = (v0_4);
    v0_3 = (0xC246FF0);
    if ((((((struct o524_int *)(v0_4))->v)) != 0)) goto L_C02F1B4;
    goto L_C02F37C;
    L_C02F1B4:;
    v0_6 = (0x510);
    if ((((((struct o510_int *)(v0_1))->v)) == ((((struct o510_int *)(v0_7))->v)))) goto L_C02F1C2;
    goto L_C02F37C;
    L_C02F1C2:;
    v0_4 = ((*(int *)(((((*(int *)((v0_1 + v0_6))) << 2) + v0_3) + 0x0))));
    v0_5 = (0x1);
    if (((*(int *)((v0_7 + (v0_6 + 0x44)))) != 2)) goto L_C02F1DA;
    v0_3 = (v0_5);
    L_C02F1DC:;
    v0_6 = (v0_4);
    if ((((((struct o514_int *)(v0_7))->v)) == 0)) goto L_C02F214;
    v0_7 = ((0x518 + v0_7));
    L_C02F218:;
    nlSubVector3op((((int)stk + 4) + 0x24), (v0_6 + 0x30), v0_7);
    v0_6 = (((struct o4F4_int *)(v0_1))->v);
    w0_0 = *(float *)((((((*(int *)(((0x528 + v0_1) + 0x0))) - 1) << 2) + ((*(int *)((0xC1F79BC + (((v0_6 << 1) + v0_6) << 2)))) + 0x7C)) + 0x0));
    w0_1 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
    FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), (w0_0 / w0_1));
    (((struct o508_uint *)(v0_1))->v) = v0_5;
    (((struct o514_uint *)(v0_1))->v) = v0_5;
    nlAddVector3op((0x518 + v0_1), (v0_4 + 0x30), (((int)stk + 4) + 0x18));
    v0_5 = (FUN_0c02f0e4(v0_1, v0_3)) != 0;
    if (v0_5) goto L_C02F338;
    FUN_0c0dc5a0();
    nlRotateAY(0x4000);
    FUN_0c0db4d0((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    nlAddVector((((int)stk + 4) + 0xC), (v0_4 + 0x30));
    nlRotateAY(0xFFFF8000);
    FUN_0c0db4d0((((int)stk + 4) + 0x18), ((int)stk + 4));
    nlAddVector(((int)stk + 4), (v0_4 + 0x30));
    nlPopMatrix(0x1);
    w0_0 = nlLength((((int)stk + 4) + 0xC), (v0_1 + 0x30));
    v0_4 = !((nlLength(((int)stk + 4), (v0_1 + 0x30))) > w0_0);
    if (v0_4) goto L_C02F30A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_1)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    v0_4 = FUN_0c02f0e4(v0_1, v0_3);
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C02F338;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_1)) = *(struct mv3 *)(((int)stk + 4)); }
    L_C02F32E:;
    v0_3 = (FUN_0c02f0e4(v0_1, v0_3)) == 0;
    if (v0_3) goto L_C02F37C;
    L_C02F338:;
    v0_0 = (((v0_0 == 1)));
    goto L_C02F386;
    L_C02F30A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_1)) = *(struct mv3 *)(((int)stk + 4)); }
    v0_4 = FUN_0c02f0e4(v0_1, v0_3);
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C02F338;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_1)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    goto L_C02F32E;
    L_C02F214:;
    v0_7 = ((v0_7 + 0x30));
    goto L_C02F218;
    L_C02F1DA:;
    v0_3 = (v0_2);
    goto L_C02F1DC;
}
