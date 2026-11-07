/* Straight-line functions with calls and guards (batch gen_xr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    int R12;
    register float F1;
    register float F15;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    v0_3 = vmsfs_diskfree(v0_2, 0x1);
    v0_0 = (v0_3);
    v0_0 = (v0_2);
    R12 = (a9);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C228A68;
    v0_0 = (v0_2);
    L_C228AF6:;
    return v0_0;
    L_C228A68:;
    v0_2 = ((((unsigned int)v0_2 >= (unsigned int)v0_1)));
    if ((v0_2)) goto L_C228A72;
    v0_0 = (0xFFFFFF04);
    goto L_C228AF6;
    L_C228A72:;
    v0_2 = ((0x80000000 & R12));
    if (((0x80000000 & R12) == 0)) goto L_C228A8E;
    v0_2 = R12;
    *(int *)((int)stk + 8) = v0_2;
    *(int *)((int)stk + 4) = a8;
    v0_0 = ((vmsfs_save_exec_file_verify(v0_0, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), v0_1, a8, v0_2)));
    goto L_C228AF6;
    L_C228A8E:;
    v0_3 = vmsfs_xcreate(v0_0, (*(int *)(((int)stk + 20))), a8, ((int)stk + 12));
    v0_2 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C228AF4;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = R12;
    v0_2 = *(int *)(((int)stk + 16));
    *(unsigned int *)((((v0_0 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    v0_3 = *(int *)((((v0_0 * 0x148) + 0xC956768) + 0x4));
    *(unsigned int *)((((v0_0 * 0x148) + 0xC956768) + 0x34)) = ((*(int *)((((((v0_3 << 2) + v0_3) << 2) << 2) + 0xC239D40))) + v0_1);
    v0_3 = ((v0_0 * 0x148) + 0xC956768);
    v0_0 = (0x0);
    R12 = (v0_2);
    v0_2 = v0_3;
    if (((unsigned int)0x0 >= (unsigned int)v0_1)) goto L_C228AEA;
    v0_3 = (0x200);
    L_C228AD4:;
    v0_4 = vmsfs_xwrite1((*(int *)(((int)stk + 12))), R12);
    v0_2 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C228AEC;
    v0_2 = (unsigned int)(v0_0 + 0x1) < (unsigned int)v0_1;
    v0_0 = ((v0_0 + 0x1));
    R12 = ((R12 + v0_3));
    if (v0_2) goto L_C228AD4;
    L_C228AEA:;
    v0_2 = (0x0);
    L_C228AEC:;
    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
    L_C228AF4:;
    v0_0 = (v0_2);
    goto L_C228AF6;
}
