/* Straight-line functions with calls and guards (batch gen_adf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c20f2c4(void);
int FUN_0c2212c0(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    v0_2 = *(int *)0xC2393C4;
    v0_0 = (0xC2393C4);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C20F5FC;
    if (((*(short *)((v0_1 + 0x38))) != 1)) goto L_C20F5FC;
    v0_0 = (0x0);
    L_C20F6E4:;
    return v0_0;
    L_C20F5FC:;
    if ((((*(int *)(((int)stk + 4))) & 31) == 0)) goto L_C20F606;
    v0_0 = (0xFFFFFFF2);
    goto L_C20F6E4;
    L_C20F606:;
    v0_1 = FUN_0c2212c0();
    v0_2 = ((int (*)(void))((*(int *)((v0_1 + 0x0)))))();
    *(unsigned int *)(((int)stk + 12)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    v0_2 = *(int *)(((int)stk + 4));
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    *(unsigned short *)((v0_2 + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((v0_0 + 0x0))) + 0x10) + 0x0)) = (gdFsCreateDirhn((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0xC)) = v0_1;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)((v0_0 + 0x0))) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x3C)) = a8;
    v0_3 = (0x0);
    v0_1 = (((*(int *)((v0_0 + 0x0))) + 0x1080));
    v0_2 = (0x0);
    L_C20F698:;
    if (((int)v0_2 < (int)((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x0))) + 0x1))) goto L_C20F68C;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_1 + 0x14)) = (0x1080 + v0_1);
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_1 + 0x18)) = ((0x1080 + v0_1) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    return FUN_0c20f2c4();
    L_C20F68C:;
    *(unsigned short *)((v0_1 + 0x4C)) = v0_3;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_0 + 0x0)));
    v0_1 = ((v0_1 + 0x54));
    v0_2 = ((v0_2 + 0x1));
    goto L_C20F698;
}
