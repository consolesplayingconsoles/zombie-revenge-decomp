/* Straight-line functions with calls and guards (batch gen_zr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a5dfa(void);
struct o20_short { char p[0x20]; short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_short { char p[0x14]; short v; };
struct o18_short { char p[0x18]; short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_short { char p[0x28]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c0a5dfa(void)
{

    register int R1;
    register int R2;
    int R4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    (((struct o4_uint *)0xC2497B0)->v) = ((((struct o0_int *)0xC2497B0)->v));
    (((struct o8_uint *)0xC2497B0)->v) = ((unsigned short)((((struct o18_short *)0xC2497B0)->v)) | ((unsigned short)((((struct o28_short *)0xC2497B0)->v)) << 16));
    (((struct oC_uint *)0xC2497B0)->v) = ((unsigned short)((((struct o1A_short *)0xC2497B0)->v)) | ((unsigned short)((((struct o2A_short *)0xC2497B0)->v)) << 16));
    v0_0 = (((struct o24_short *)0xC2497B0)->v);
    (((struct o0_uint *)0xC2497B0)->v) = ((unsigned short)((((struct o14_short *)0xC2497B0)->v)) | ((unsigned short)v0_0 << 16));
    v0_5 = (((unsigned short)v0_0 << 16));
    v0_0 = (0x0);
    v0_1 = (0xC2497C0);
    v0_2 = (0xC2497E0);
    v0_3 = (0xC20116C);
    L_C0A5F74:;
    v0_6 = (0x2);
    if (((int)v0_0 < (int)0x2)) goto L_C0A5E80;
    return v0_5;
    L_C0A5E80:;
    v0_4 = *(int *)(((((v0_0 << 2) << 2) + 0xC249914) + 0x0));
    v0_5 = *(int *)((0xC24990C + (v0_0 << 2)));
    v0_7 = (v0_5);
    R4 = ((0xF8 & (*(int *)((v0_4 + 0x8)))));
    v0_4 = (v0_4);
    v0_8 = (0x200);
    if ((v0_5 != 5)) goto L_C0A5EDA;
    v0_11 = (((struct o20_short *)(v0_4))->v);
    v0_5 = (0x22);
    v0_9 = (0x40);
    v0_10 = (0xFFFFFFC0);
    if ((((((((int)v0_11 >= (int)0xFFFFFFC0)) ? 1 : 0) ^ 0x1) | ((((int)v0_11 > (int)0x40)) ? 1 : 0)) == 0)) goto L_C0A5EC4;
    R4 = ((R4 | v0_8));
    L_C0A5EC4:;
    v0_5 = *(short *)((v0_4 + v0_5));
    if ((((((((int)v0_5 >= (int)v0_10)) ? 1 : 0) ^ 0x1) | ((((int)v0_5 > (int)v0_9)) ? 1 : 0)) != 0)) goto L_C0A5F04;
    L_C0A5F06:;
    v0_5 = ((*(short *)((v0_1 + 0x4))));
    if ((((unsigned short)(*(short *)((v0_1 + 0x4))) & (unsigned short)(*(short *)(((((v0_7 << 2) << 1) + v0_3) + 0x4)))) == 0)) goto L_C0A5F20;
    R4 = ((R4 | 0x400));
    L_C0A5F20:;
    v0_7 = *(short *)(((((v0_7 << 2) << 1) + v0_3) + 0x6));
    v0_6 = ((unsigned short)v0_5 & (unsigned short)v0_7) == 0;
    v0_5 = ((unsigned short)v0_7);
    v0_7 = ((*(int *)((v0_2 + 0x8))));
    if (v0_6) goto L_C0A5F36;
    R4 = ((R4 | 0x4));
    L_C0A5F36:;
    *(unsigned int *)((v0_2 + 0xC)) = v0_7;
    *(unsigned int *)((v0_2 + 0x8)) = R4;
    *(unsigned int *)((v0_2 + 0x0)) = ((~(*(int *)((v0_2 + 0xC)))) & R4);
    *(unsigned int *)((v0_2 + 0x4)) = ((~R4) & (*(int *)((v0_2 + 0xC))));
    if (((R4 & 0xF0) == 0)) goto L_C0A5F58;
    if (((*(int *)0xC249890) == 0)) goto L_C0A5F6E;
    L_C0A5F58:;
    *(unsigned int *)(((0xC249880 + ((v0_0 << 1) << 2)) + 0x0)) = (-(*(short *)((v0_4 + 0x1E))));
    v0_4 = *(short *)((v0_4 + 0x1C));
    *(unsigned int *)((((0xC249880 + ((v0_0 << 1) << 2)) + 0x4) + 0x0)) = v0_4;
    v0_5 = (v0_4);
    L_C0A5F6E:;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 + 0x10));
    v0_2 = ((v0_2 + 0x50));
    goto L_C0A5F74;
    L_C0A5F04:;
    R4 = ((R4 | v0_6));
    goto L_C0A5F06;
    L_C0A5EDA:;
    v0_5 = ((*(short *)((v0_1 + 0x4))));
    if ((((unsigned short)(*(short *)((v0_1 + 0x4))) & (unsigned short)(*(short *)(((((v0_7 << 2) << 1) + v0_3) + 0x0)))) == 0)) goto L_C0A5EF2;
    R4 = ((R4 | v0_8));
    L_C0A5EF2:;
    if ((((unsigned short)v0_5 & (unsigned short)(*(short *)(((((v0_7 << 2) << 1) + v0_3) + 0x2)))) == 0)) goto L_C0A5F06;
    goto L_C0A5F04;
}
