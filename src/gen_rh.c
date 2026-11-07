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

int FUN_0c029646(int a4, int a5, int a6)
{
    int stk[18];
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

    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c0dc5a0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x30);
    FUN_0c0a79fa((((int)stk + 4) + 0x30), ((((int)stk + 4) + 0x30) + 0x4), ((((int)stk + 4) + 0x30) + 0x8));
    nlPopMatrix(0x1);
    t11 = *(int *)(((int)stk + 4));
    if (t11 != 0) {
        if (t11 != 1) {
            t19 = t11;
            if (t11 != 2) {
            } else {
                t19 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((a4 + 0x518)))), ((*(float *)((a4 + 0x230))) - (*(float *)((a4 + 0x51C)))), ((*(float *)((a4 + 0x234))) - (*(float *)((a4 + 0x520))))));
            }
            t32 = t19;
        } else {
            t24 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
            t32 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((t24 + 0x30)))), ((*(float *)((a4 + 0x230))) - (*(float *)((t24 + 0x34)))), ((*(float *)((a4 + 0x234))) - (*(float *)((t24 + 0x38))))));
        }
        t54 = t32;
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((a4 + 0x228))));
        nlRotateAX((*(short *)((a4 + 0x226))));
        nlRotateAZ((*(short *)((a4 + 0x22A))));
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
        *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
        nlPopMatrix(0x1);
        t54 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), (*(float *)(((((int)stk + 4) + 0x24) + 0x0))), (*(float *)(((((int)stk + 4) + 0x24) + 0x4))), (*(float *)(((((int)stk + 4) + 0x24) + 0x8)))));
    }
    t60 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    t61 = *(int *)(((((int)stk + 4) + 0x3C) + 0x4));
    t69 = t54;
    if (_builtin_fabsf((float)(short)(t61 - t60)) > (float)a6) {
        if (((int)(short)(t61 - t60) < (int)0x8000) && ((int)(short)(t61 - t60) > 0)) {
            t62 = *(short *)((a4 + 0x222));
            *(unsigned short *)((a4 + 0x222)) = (t62 + a6);
            if ((int)(short)(t62 + a6) > (int)0x1C00) {
                *(unsigned short *)((a4 + 0x222)) = 0x1C00;
            }
        } else {
            t64 = *(short *)((a4 + 0x222));
            *(unsigned short *)((a4 + 0x222)) = (t64 - a6);
            if ((int)(short)(t64 - a6) < (int)0xFFFFE400) {
                *(unsigned short *)((a4 + 0x222)) = 0xFFFFE400;
            }
        }
        t69 = 0x222;
    }
    t74 = *(int *)(((((int)stk + 4) + 0x3C) + 0x0));
    t75 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    t83 = t69;
    if (_builtin_fabsf((float)(short)(t74 - t75)) > (float)a6) {
        if (((int)(short)(t74 - t75) < (int)0x8000) && ((int)(short)(t74 - t75) > 0)) {
            t76 = *(short *)((a4 + 0x220));
            *(unsigned short *)((a4 + 0x220)) = (t76 + a6);
            if ((int)(short)(t76 + a6) > (int)0x1000) {
                *(unsigned short *)((a4 + 0x220)) = 0x1000;
            }
        } else {
            t78 = *(short *)((a4 + 0x220));
            *(unsigned short *)((a4 + 0x220)) = (t78 - a6);
            if ((int)(short)(t78 - a6) < (int)0xFFFFF000) {
                *(unsigned short *)((a4 + 0x220)) = 0xFFFFF000;
            }
        }
        t83 = 0x220;
    }
    return t83;
}
