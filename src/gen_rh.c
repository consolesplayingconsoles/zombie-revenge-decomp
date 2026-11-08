/* Straight-line functions with calls and guards (batch gen_rh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c029646(int a4, int a5, int a6);
struct o220_short { char p[0x220]; short v; };
struct o220_ushort { char p[0x220]; unsigned short v; };
struct o222_short { char p[0x222]; short v; };
struct o222_ushort { char p[0x222]; unsigned short v; };
struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o510_int { char p[0x510]; int v; };
struct o518_float { char p[0x518]; float v; };
struct o51C_float { char p[0x51C]; float v; };
struct o520_float { char p[0x520]; float v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c029646(int a4, int a5, int a6)
{
    int stk[17];
    register int t11;
    register int t19;
    register int t24;
    register int t60;
    register int t61;
    register int t69;
    register int t62;
    register int t64;
    register int t74;
    register int t75;
    register int t83;
    register int t76;
    register int t78;
    register int t54;
    register int t32;
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    R1004 = a5;
    FUN_0c0dc5a0();
    nlRotateAY((((((struct o222_short *)(a4))->v)) + ((((struct o228_short *)(a4))->v))));
    nlRotateAX((((((struct o220_short *)(a4))->v)) + ((((struct o226_short *)(a4))->v))));
    nlRotateAZ(((((struct o22A_short *)(a4))->v)));
    R1008 = ((((int)stk + 0) + 0x30) + 0x4);
    R1012 = (((int)stk + 0) + 0x30);
    FUN_0c0a79fa((((int)stk + 0) + 0x30), ((((int)stk + 0) + 0x30) + 0x4), ((((int)stk + 0) + 0x30) + 0x8));
    nlPopMatrix(0x1);
    t11 = R1004;
    if (t11 != 0) {
        if (t11 != 1) {
            t19 = t11;
            if (t11 != 2) {
            } else {
                t19 = (FUN_0c0a7714((((int)stk + 0) + 0x3C), ((((int)stk + 0) + 0x3C) + 0x4), (((((struct o22C_float *)(a4))->v)) - ((((struct o518_float *)(a4))->v))), (((((struct o230_float *)(a4))->v)) - ((((struct o51C_float *)(a4))->v))), (((((struct o234_float *)(a4))->v)) - ((((struct o520_float *)(a4))->v)))));
            }
            t32 = t19;
        } else {
            t24 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
            t32 = (FUN_0c0a7714((((int)stk + 0) + 0x3C), ((((int)stk + 0) + 0x3C) + 0x4), (((((struct o22C_float *)(a4))->v)) - ((((struct o30_float *)(t24))->v))), (((((struct o230_float *)(a4))->v)) - ((((struct o34_float *)(t24))->v))), (((((struct o234_float *)(a4))->v)) - ((((struct o38_float *)(t24))->v)))));
        }
        t54 = t32;
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY(((((struct o228_short *)(a4))->v)));
        nlRotateAX(((((struct o226_short *)(a4))->v)));
        nlRotateAZ(((((struct o22A_short *)(a4))->v)));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 1.0f;
        FUN_0c0db470((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
        *(float *)(((((int)stk + 0) + 0x24) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 0) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 0) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        nlPopMatrix(0x1);
        t54 = (FUN_0c0a7714((((int)stk + 0) + 0x3C), ((((int)stk + 0) + 0x3C) + 0x4), (*(float *)(((((int)stk + 0) + 0x24) + 0x0))), ((((struct o4_float *)((((int)stk + 0) + 0x24)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x24)))->v))));
    }
    t60 = *(int *)(((R1008) + 0x0));
    t61 = *(int *)(((((int)stk + 0) + 0x3C) + 0x4));
    t69 = t54;
    if (_builtin_fabsf((float)(short)(t61 - t60)) > (float)a6) {
        if (((int)(short)(t61 - t60) < (int)0x8000) && ((int)(short)(t61 - t60) > 0)) {
            t62 = (((struct o222_short *)(a4))->v);
            (((struct o222_ushort *)(a4))->v) = (t62 + a6);
            if ((int)(short)(t62 + a6) > (int)0x1C00) {
                (((struct o222_ushort *)(a4))->v) = 0x1C00;
            }
        } else {
            t64 = (((struct o222_short *)(a4))->v);
            (((struct o222_ushort *)(a4))->v) = (t64 - a6);
            if ((int)(short)(t64 - a6) < (int)0xFFFFE400) {
                (((struct o222_ushort *)(a4))->v) = 0xFFFFE400;
            }
        }
        t69 = 0x222;
    }
    t74 = *(int *)(((((int)stk + 0) + 0x3C) + 0x0));
    t75 = *(int *)(((R1012) + 0x0));
    t83 = t69;
    if (_builtin_fabsf((float)(short)(t74 - t75)) > (float)a6) {
        if (((int)(short)(t74 - t75) < (int)0x8000) && ((int)(short)(t74 - t75) > 0)) {
            t76 = (((struct o220_short *)(a4))->v);
            (((struct o220_ushort *)(a4))->v) = (t76 + a6);
            if ((int)(short)(t76 + a6) > (int)0x1000) {
                (((struct o220_ushort *)(a4))->v) = 0x1000;
            }
        } else {
            t78 = (((struct o220_short *)(a4))->v);
            (((struct o220_ushort *)(a4))->v) = (t78 - a6);
            if ((int)(short)(t78 - a6) < (int)0xFFFFF000) {
                (((struct o220_ushort *)(a4))->v) = 0xFFFFF000;
            }
        }
        t83 = 0x220;
    }
    return t83;
}
