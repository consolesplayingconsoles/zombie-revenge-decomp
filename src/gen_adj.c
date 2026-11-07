/* Straight-line functions with calls and guards (batch gen_adj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmFreeTexture(int);
int nlCommonTextureClearTextureIndex(int);
int nlFreePalette(int);
int FUN_0c0dee40(int a4);
struct o4C_int { char p[0x4C]; int v; };


int FUN_0c0dee40(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    v0_6 = a4;
    R1008 = 0x0;
    if (((int)(*(int *)((v0_6 + 0x0))) < 0)) goto L_C0DEE64;
    if (((*(int *)((v0_6 + 0x18))) != 0)) goto L_C0DEE70;
    L_C0DEE64:;
    v0_0 = (0x0);
    L_C0DEF30:;
    return v0_0;
    L_C0DEE70:;
    v0_0 = ((v0_6 + 0x18));
    v0_1 = (0xC947AA8);
    v0_2 = (0xC943D78);
    v0_3 = (0xFFFFFFFF);
    L_C0DEE7A:;
    v0_5 = *(int *)((v0_0 + 0x20));
    v0_4 = v0_0;
    v0_0 = ((v0_0 + 0x50));
    v0_4 = v0_4;
    v0_6 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C0DEEF6;
    v0_7 = *(int *)0xC948270;
    v0_8 = (unsigned int)(*(int *)((((*(int *)((v0_2 + 0x0))) + (((v0_6 + v0_7) << 2) << 1)) + 0x0))) <= (unsigned int)0x0;
    v0_5 = ((((v0_6 + v0_7) << 2) << 1));
    v0_6 = ((v0_6 + v0_7));
    if (v0_8) goto L_C0DEEF6;
    v0_6 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((v0_6 + v0_5) + 0x0)) = ((*(int *)(((v0_6 + v0_5) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((v0_2 + 0x0))) + v0_5) + 0x0))) != 0)) goto L_C0DEEF6;
    R1004 = (*(int *)((((*(int *)((v0_2 + 0x0))) + v0_5) + 0x4)));
    v0_6 = R1004;
    v0_7 = ((v0_6 * 0x3C));
    if (((*(int *)((((*(int *)((v0_1 + 0x0))) + (v0_6 * 0x3C)) + 0x28))) != 0)) goto L_C0DEEDC;
    v0_8 = kmFreeTexture(((*(int *)((v0_1 + 0x0))) + v0_7));
    v0_6 = (v0_8);
    if ((v0_8 == 0)) goto L_C0DEEDC;
    R1008 = 0x1;
    L_C0DEEDC:;
    *(unsigned int *)((((*(int *)((v0_1 + 0x0))) + v0_7) + 0x2C)) = 0x0;
    *(unsigned int *)((((*(int *)((v0_1 + 0x0))) + v0_7) + 0x38)) = v0_3;
    nlCommonTextureClearTextureIndex((R1004));
    *(unsigned int *)((((*(int *)((v0_2 + 0x0))) + v0_5) + 0x4)) = v0_3;
    L_C0DEEF6:;
    if (((*(int *)0xC20CC50) != 0)) goto L_C0DEF22;
    v0_6 = ((0x7 & ((unsigned int)(*(int *)((v0_4 + 0xC))) >> 27)));
    if (((*(int *)0xC94C688) == 0)) goto L_C0DEF22;
    if ((v0_6 == 5)) goto L_C0DEF1C;
    if ((v0_6 != 6)) goto L_C0DEF22;
    L_C0DEF1C:;
    nlFreePalette((*(int *)((v0_4 + 0x3C))));
    L_C0DEF22:;
    v0_4 = (((struct o4C_int *)(v0_4))->v);
    v0_5 = (*(int *)(((v0_0 + v0_4) + 0x0))) != 0;
    v0_0 = ((v0_0 + v0_4));
    if (v0_5) goto L_C0DEE7A;
    v0_0 = ((R1008));
    goto L_C0DEF30;
}
