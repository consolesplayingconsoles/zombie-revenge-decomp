/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c05561a(int, int, int, int, Stk3);
int FUN_0c063098(int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06348e(int a4, int a5, int a6, int a7);
int FUN_0c03ecf2(int a4, int a5, int a6, int a7);
void FUN_0c042d28(void);
int FUN_0c06ccb8(int a4);
float FUN_0c061ccc(void);




int FUN_0c06ccb8(int a4)
{
    int t5;
    int t6;
    int t17;
    int t24;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    int T_;
    R4 = a4;
    L_C06CCB8:;
    *(unsigned int *)(((int)stk + 4)) = 0xC246FF0;
    R10 = (0xC23F268);
    R11 = (0x0);
    R12 = (0xC0);
    R6 = (0x0);
    R9 = (0x2);
    goto L_C06CCD8;
    L_C06CCD8:;
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)((((R6 << 2) + (t5 + 0x40)) + 0x0));
    R0 = (t5);
    R5 = (t6);
    if (((int)t6 < (int)0x3)) goto L_C06CDA8;
    goto L_C06CCEC;
    L_C06CCEC:;
    if (((int)R5 > (int)0x5)) goto L_C06CDA8;
    goto L_C06CCF2;
    L_C06CCF2:;
    R0 = ((R4 + 0x36));
    R14 = ((((((R6 << 1) + R6) << 2) << 2) << 2));
    R5 = ((R4 + 0x36));
    R7 = ((R4 + 0x36));
    R8 = ((R6 << 1));
    goto L_C06CDA0;
    L_C06CDA0:;
    if (((unsigned int)R5 < (unsigned int)(R4 + 0x3E))) goto L_C06CD54;
    goto L_C06CDA8;
    L_C06CDA8:;
    t17 = (int)(R6 + 0x1) < (int)0x4;
    R6 = ((R6 + 0x1));
    if (t17) goto L_C06CCD8;
    goto L_C06CDB0;
    L_C06CDB0:;
    return R0;
    L_C06CD54:;
    if (((*(short *)((R5 + 0x0))) == R6)) goto L_C06CDA8;
    goto L_C06CD5A;
    L_C06CD5A:;
    if (((int)(*(short *)((R7 + 0x0))) >= 0)) goto L_C06CD9A;
    goto L_C06CD60;
    L_C06CD60:;
    *(unsigned short *)((R0 + 0x0)) = R6;
    R5 = (R11);
    goto L_C06CD64;
    L_C06CD64:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R4 + 0x6C) + R14) + R5)) = *(struct mv3 *)(((R14 + R10) + R5)); }
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x8)) = F4;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x4)) = F4;
    t24 = (unsigned int)(R5 + 0xC) < (unsigned int)R12;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x0)) = F4;
    R0 = (0x4);
    R5 = ((R5 + 0xC));
    if (t24) goto L_C06CD64;
    goto L_C06CD90;
    L_C06CD90:;
    *(unsigned short *)(((R8 + (R4 + 0x52)) + 0x0)) = R9;
    goto L_C06CDA8;
    L_C06CD9A:;
    R0 = ((R0 + 0x2));
    R5 = ((R5 + 0x2));
    R7 = ((R7 + 0x2));
    goto L_C06CDA0;
}




