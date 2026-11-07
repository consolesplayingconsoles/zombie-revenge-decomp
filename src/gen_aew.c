/* Straight-line functions with calls and guards (batch gen_aew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
void FUN_0c09635c(int a4, int a5, float f4, float f5);

void FUN_0c09635c(int a4, int a5, float f4, float f5)
{
    int stk[2];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register float F2;
    register float F6;
    register float F13;
    register float F14;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    float R1004;
    R1004 = *(float *)((int)stk + 4);
    v0_1 = a4;
    v0_2 = a5;
    w0_1 = f4;
    w0_0 = f5;
    R1004 = w0_1;
    v0_0 = (v0_2);
    if (((int)v0_1 < (int)v0_2)) goto L_C096418;
    v0_2 = (int)(v0_1 - v0_0) > (int)0x8;
    v0_1 = ((v0_1 - v0_0));
    if (v0_2) goto L_C096418;
    w0_2 = (0.0f);
    if ((!(0.0f > w0_0))) goto L_C096388;
    w0_1 = (-1.0f);
    L_C09638A:;
    FPUL_ = (v0_1);
    if ((!(w0_2 > w0_0))) goto L_C096396;
    w0_0 = ((-w0_0));
    L_C096398:;
    w0_2 = *(float *)0xC096470;
    nlPushMatrix(0x0);
    w0_1 = ((float)FPUL_ * w0_1);
    w0_1 = (w0_1 * (*(float *)0xC096478));
    FUN_0c0dcc70(0.0f, ((w0_1 - (R1004)) * (*(float *)0xC09647C)), 0.0f);
    nlRotateAY((v0_0 * 0x7123));
    nlScale(w0_0, w0_0, w0_0);
    FUN_0c0848bc(((*(float *)0xC200AE8) * ((-((float)FPUL_ / w0_2)) + 1.0f)), ((*(float *)0xC200AEC) * ((-((float)FPUL_ / w0_2)) + 1.0f)), ((*(float *)0xC200AF0) * ((-((float)FPUL_ / w0_2)) + 1.0f)));
    FUN_0c0de000(w0_0);
    FUN_0c0c47ae(0x2BE);
    nlPopMatrix(0x1);
    return;
    L_C096396:;
    w0_0 = (w0_0);
    goto L_C096398;
    L_C096388:;
    w0_1 = (1.0f);
    goto L_C09638A;
    L_C096418:;
}
