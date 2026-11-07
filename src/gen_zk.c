/* Straight-line functions with calls and guards (batch gen_zk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e38e8(int);
int FUN_0c0e3930(int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e3f42(int a4);

int FUN_0c0e3f42(int a4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 24)) = v0_0;
    v0_1 = FUN_0c0e38e8((*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E3F5C;
    return v0_0;
    L_C0E3F5C:;
    v0_0 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C910)));
    *(unsigned int *)(((int)stk + 20)) = (FUN_0c0e3930((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0E3FA6:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x400000)) goto L_C0E3F84;
    return 0xFFFFFF00;
    L_C0E3F84:;
    v0_0 = (FUN_0c0e4428(0x18A0)) != 0;
    if (v0_0) goto L_C0E3FA0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0E3FD2:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x400000)) goto L_C0E3FC0;
    return 0xFFFFFF00;
    L_C0E3FC0:;
    if (((*(int *)0xA08000B4) == 0)) goto L_C0E3FCC;
    if (((*(int *)(((int)stk + 20))) == 0)) goto L_C0E4012;
    v0_1 = FUN_0c0e3630((*(int *)(((int)stk + 20))), ((*(int *)(((int)stk + 20))) - (*(int *)(((int)stk + 8)))), (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E4006;
    return v0_0;
    L_C0E4006:;
    L_C0E400A:;
    v0_0 = (FUN_0c0e36ac()) != 0;
    if (v0_0) goto L_C0E400A;
    L_C0E4012:;
    *(unsigned int *)0xA08000B0 = 0x1;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0E4042:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x400000)) goto L_C0E4020;
    return 0xFFFFFF00;
    L_C0E4020:;
    if (((*(int *)0xA08000B4) != 0)) goto L_C0E403C;
    *(unsigned int *)0xA08000B0 = 0x0;
    return 0x0;
    L_C0E403C:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0E4042;
    L_C0E3FCC:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0E3FD2;
    L_C0E3FA0:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0E3FA6;
}
