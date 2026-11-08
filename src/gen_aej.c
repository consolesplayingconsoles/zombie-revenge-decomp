/* Straight-line functions with calls and guards (batch gen_aej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c075036(int a4, int a5, int a6, int a7);
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c075036(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F4;
    register float F5;
    register float F6;
    register float F12;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    FUN_0c0685a4(v0_0, v0_1, v0_2, a7);
    v0_1 = (0x8C);
    v0_2 = (0xC0DCC70);
    v0_2 = (0xC01F1B8);
    v0_2 = (0xC0DC510);
    v0_2 = (v0_0);
    v0_3 = (((((struct o8C_int *)(v0_0))->v)));
    v0_0 = (0xC0DC4C0);
    v0_0 = (0xC0C465C);
    w0_0 = (1.0f);
    L_C075106:;
    if (((*(short *)((v0_3 + 0x0))) != 0)) goto L_C0750C4;
    return v0_1;
    L_C0750C4:;
    v0_1 = *(short *)((v0_3 + 0x0));
    v0_0 = ((unsigned short)v0_1);
    if (((unsigned short)v0_1 == 25)) goto L_C0750DE;
    if ((v0_0 == 26)) goto L_C0750DE;
    v0_1 = (v0_0);
    if ((v0_0 != 27)) goto L_C075104;
    L_C0750DE:;
    nlPushMatrix(0x0);
    w0_1 = FUN_0c01f1b8((v0_3 + 0x4), ((int)stk + 4));
    FUN_0c0dcc70(((((struct o4_float *)(v0_3))->v)), (w0_1 + w0_0), ((((struct oC_float *)(v0_3))->v)));
    FUN_0c0c465c(((((struct o78_int *)(v0_2))->v)));
    v0_1 = ((nlPopMatrix(0x1)));
    L_C075104:;
    v0_3 = ((v0_3 + 0x10));
    goto L_C075106;
}
