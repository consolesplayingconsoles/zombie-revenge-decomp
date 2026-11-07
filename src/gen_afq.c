/* Straight-line functions with calls and guards (batch gen_afq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int search_exec_file(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_xfind(int a4, int a5);

int vmsfs_xfind(int a4, int a5)
{
    int stk[12];

    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_1 = a5;
    v0_0 = (v0_1);
    v0_1 = (v0_2);
    if (((*(signed char *)(((v0_2 * 0x148) + 0xC95676A))) == 0)) goto L_C227534;
    v0_2 = (vmsio_isready(v0_1)) != 0;
    if (v0_2) goto L_C22751C;
    vmsfs_unmount(v0_1);
    L_C227534:;
    v0_0 = (0xFFFFFF01);
    L_C22759C:;
    return v0_0;
    L_C22751C:;
    v0_2 = (vmsio_ismount(v0_1)) == 0;
    if (v0_2) goto L_C227534;
    if (((*(signed char *)(((v0_1 * 0x148) + 0xC956770))) != 0)) goto L_C22755C;
    goto L_C227534;
    L_C22755C:;
    v0_2 = (int)(buIsFormat(v0_1)) >= 0;
    if (v0_2) goto L_C22756C;
    v0_0 = (0xFFFFFF03);
    goto L_C22759C;
    L_C22756C:;
    v0_1 = (int)(search_exec_file(v0_1, ((int)stk + 4))) >= 0;
    if (v0_1) goto L_C22757E;
    v0_0 = (0xFFFFFF05);
    goto L_C22759C;
    L_C22757E:;
    v0_2 = (0x0);
    v0_1 = (0xC);
    v0_3 = (0x0);
    L_C227592:;
    if (((int)v0_2 < (int)v0_1)) goto L_C227586;
    *(unsigned char *)((v0_0 + 0xC)) = v0_3;
    v0_0 = (0x0);
    goto L_C22759C;
    L_C227586:;
    *(unsigned char *)((v0_0 + v0_2)) = (*(signed char *)(((((int)stk + 4) + 0x10) + v0_2)));
    v0_2 = ((v0_2 + 0x1));
    goto L_C227592;
}
