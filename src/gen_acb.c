/* Straight-line functions with calls and guards (batch gen_acb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c05f07c(int a4);
struct o1E4_float { char p[0x1E4]; float v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_int { char p[0x244]; int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };


int FUN_0c05f07c(int a4)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R11;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_0 = (v0_1);
    w0_0 = (1.0f);
    if ((((((struct o244_int *)(v0_1))->v)) != 0)) goto L_C05F0B0;
    v0_1 = (((struct o248_int *)(v0_0))->v);
    (((struct o248_uint *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(v0_1 - 1) > 0)) goto L_C05F15C;
    (((struct o244_uint *)(v0_0))->v) = 0x1;
    (((struct o248_uint *)(v0_0))->v) = ((((struct o22C_int *)(v0_0))->v));
    L_C05F15C:;
    nlPushMatrix(0x0);
    w0_2 = *(float *)0xC05F244;
    v0_1 = (((struct o240_int *)(v0_0))->v);
    v0_2 = (((struct o23C_int *)(v0_0))->v);
    (((struct o240_uint *)(v0_0))->v) = (v0_1 + v0_2);
    w0_1 = w0_2;
    w0_1 = w0_1 + w0_2 * (FUN_0c0da410((v0_1 + v0_2)));
    (((struct o23C_uint *)(v0_0))->v) = (((((struct o23C_int *)(v0_0))->v)) + 0x20);
    FUN_0c0dcca0((v0_0 + 0x30));
    nlRotateAY(((((struct o6E_short *)(v0_0))->v)));
    nlRotateAX(((((struct o6C_short *)(v0_0))->v)));
    w0_2 = *(float *)0xC05F258;
    nlScale(w0_2, w0_2, w0_2);
    FUN_0c0de000(w0_2);
    FUN_0c084800(w0_0, w0_1, w0_1);
    FUN_0c0c465c(((((struct o220_int *)(v0_0))->v)));
    FUN_0c0849da();
    v0_0 = ((nlPopMatrix(0x1)));
    L_C05F1D4:;
    return v0_0;
    L_C05F0B0:;
    v0_1 = (((struct o248_int *)(v0_0))->v);
    (((struct o248_uint *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(v0_1 - 1) > 0)) goto L_C05F15C;
    (((struct o220_uint *)(v0_0))->v) = 0x344;
    (((struct o1E4_float *)(v0_0))->v) = 30.0f;
    (((struct o34_float *)(v0_0))->v) = (((((struct o34_float *)(v0_0))->v)) + w0_0);
    (((struct o23C_uint *)(v0_0))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (1.0f + 1.0f));
    FUN_0c08d834(((int)stk + 4));
    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
    *(unsigned int *)((v0_0 + 0x0)) = 0xC05EE68;
    v0_0 = ((FUN_0c08d840((v0_0 + 0x30), 35.0f)));
    goto L_C05F1D4;
}
