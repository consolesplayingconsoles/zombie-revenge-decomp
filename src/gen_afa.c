/* Straight-line functions with calls and guards (batch gen_afa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c03c75c(int a4);
struct o304_int { char p[0x304]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o544_int { char p[0x544]; int v; };
struct o560_int { char p[0x560]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o5C0_int { char p[0x5C0]; int v; };


int FUN_0c03c75c(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R10;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    *(int *)((int)stk + 12) = (R13);
    *(int *)((int)stk + 4) = 0x0;
    FUN_0c03bd28(v0_1, 0x0, 0x3, 0x5, 0x0);
    v0_0 = (v0_1);
    if (((int)((((struct o304_int *)(v0_1))->v)) <= 0)) goto L_C03C78C;
    if ((((((struct o57C_int *)(v0_0))->v)) == 4)) goto L_C03C78C;
    if ((((((struct o560_int *)(v0_0))->v)) == 0)) goto L_C03C7C0;
    L_C03C78C:;
    v0_2 = (((struct o4F8_int *)(v0_0))->v);
    v0_1 = (0xC247D04);
    R5 = (0xA);
    R6 = (v0_2);
    if ((v0_2 == 12)) goto L_C03C7A2;
    if ((R6 != 13)) goto L_C03C7A4;
    L_C03C7A2:;
    *(unsigned int *)((v0_1 + 0x0)) = R5;
    L_C03C7A4:;
    v0_2 = (((struct o4F8_int *)(v0_0))->v);
    R6 = (v0_2);
    if ((v0_2 == 4)) goto L_C03C7B6;
    if ((R6 != 5)) goto L_C03C7C0;
    L_C03C7B6:;
    if ((((((struct o544_int *)(v0_0))->v)) != 0)) goto L_C03C7C0;
    *(unsigned int *)((v0_1 + 0x0)) = R5;
    L_C03C7C0:;
    R13 = (0xC0CC3F8);
    if (((int)((((struct o304_int *)(v0_0))->v)) > 0)) goto L_C03C800;
    v0_1 = (0x5C0);
    if ((((((struct o5C0_int *)(v0_0))->v)) != 0)) goto L_C03C828;
    *(unsigned int *)((v0_0 + v0_1)) = 0x1;
    v0_1 = ((FUN_0c0cc3f8(0xA2EA9, R5, R6, R7)));
    L_C03C828:;
    return v0_1;
    L_C03C800:;
    v0_0 = (((struct o57C_int *)(v0_0))->v);
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C03C81C;
    if ((v0_1 == 1)) goto L_C03C81C;
    if ((v0_1 == 2)) goto L_C03C81C;
    if ((v0_1 == 3)) goto L_C03C81C;
    if ((v0_1 == 4)) goto L_C03C822;
    goto L_C03C828;
    L_C03C822:;
    v0_1 = (0xA2EA9);
    L_C03C824:;
    v0_1 = ((FUN_0c0cc3f8(v0_1, R5, R6, R7)));
    goto L_C03C828;
    L_C03C81C:;
    v0_1 = (0x12EA9);
    goto L_C03C824;
}
