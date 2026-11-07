/* Straight-line functions with calls and guards (batch gen_zy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int FUN_0c22a578(int);
int FUN_0c22a590(int);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7);

int adxsjd_decexec_start(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R9;
    register int R10;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_4 = a4;
    v0_0 = a5;
    v0_5 = a6;
    v0_0 = a7;
    v0_6 = *(signed char *)((v0_4 + 0x3));
    v0_7 = (v0_6);
    v0_3 = ((*(int *)((v0_4 + 0x4))));
    v0_1 = ((*(int *)((v0_4 + 0x8))));
    v0_2 = (v0_4);
    v0_4 = (((v0_6 == 1)));
    if ((v0_6 != 1)) goto L_C22A280;
    v0_5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x24)))))(v0_1, 0x1, v0_5, v0_0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_7 = (v0_5);
    v0_4 = (((v0_5 == 0)));
    if ((v0_5 != 0)) goto L_C22A280;
    *(unsigned char *)((v0_2 + 0x1)) = 0x3;
    v0_7 = (0x3);
    return v0_7;
    L_C22A280:;
    v0_4 = ((*(int *)((v0_1 + 0x0))));
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_4 + 0x18)))))(v0_1, 0x1, 0x7FFFFFFF, (v0_2 + 0x14), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_4 = (ADXB_GetFormat(v0_3)) != 0;
    if (v0_4) goto L_C22A2C2;
    if (((int)(*(int *)((v0_2 + 0x18))) < (int)0x2)) goto L_C22A2C2;
    v0_5 = *(short *)(((*(int *)((v0_2 + 0x14))) + 0x0));
    v0_4 = ((unsigned short)((unsigned char)((int)v0_5 >> 8) | ((v0_5 << 8) & 0xFF00)));
    if (((unsigned short)((unsigned char)((int)v0_5 >> 8) | ((v0_5 << 8) & 0xFF00)) == 0x8001)) goto L_C22A2CC;
    L_C22A2C2:;
    v0_4 = (int)(*(int *)((v0_2 + 0x34))) < (int)(FUN_0c22a590(v0_2));
    if (!(v0_4)) goto L_C22A2CC;
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c22a578(v0_2));
    v0_4 = *(int *)((v0_2 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    v0_5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((v0_4 + 0x0))) + 0x24)))))(v0_4, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_4 = (((unsigned int)v0_5 >> 1));
    if (((int)((unsigned int)v0_5 >> 1) >= (int)(*(int *)(((int)stk + 8))))) goto L_C22A308;
    goto L_C22A2F0;
    L_C22A2CC:;
    *(unsigned char *)((v0_2 + 0x1)) = 0x3;
    L_C22A2F0:;
    v0_3 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x1C));
    return ((int (*)(int, int, int, int))(v0_3))(v0_1, 0x1, (v0_2 + 0x14), v0_0);
    L_C22A308:;
    ADXB_EntryData(v0_3, (*(int *)((v0_2 + 0x14))), (*(int *)((v0_2 + 0x18))));
    return ADXB_Start(v0_3);
}
