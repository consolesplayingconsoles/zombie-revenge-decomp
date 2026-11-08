/* Straight-line functions with calls and guards (batch gen_aaf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c095520(int a4);
struct o4E_short { char p[0x4E]; short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o56_short { char p[0x56]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5A_ushort { char p[0x5A]; unsigned short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o66_short { char p[0x66]; short v; };
struct o66_ushort { char p[0x66]; unsigned short v; };


int FUN_0c095520(int a4)
{

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_5 = (((struct o4E_short *)(v0_0))->v);
    v0_1 = (v0_5);
    v0_2 = ((*(int *)((v0_0 + 0x38))));
    v0_3 = (0x0);
    v0_4 = (0x3);
    if ((v0_5 == 0)) goto L_C09553A;
    if ((v0_1 == 1)) goto L_C095570;
    if ((v0_1 == 2)) goto L_C095582;
    L_C0955BC:;
    return v0_1;
    L_C095582:;
    v0_5 = (((struct o56_short *)(v0_0))->v);
    (((struct o56_ushort *)(v0_0))->v) = (v0_5 + 0x1);
    v0_1 = (0x56);
    if (((int)(short)(v0_5 + 0x1) < (int)v0_4)) goto L_C0955BC;
    *(unsigned short *)((v0_0 + v0_1)) = v0_3;
    (((struct o62_ushort *)(v0_0))->v) = (*(short *)(((((((struct o66_short *)(v0_0))->v)) << 1) + (*(int *)((v0_2 + 0x14))))));
    v0_3 = (((struct o66_short *)(v0_0))->v);
    (((struct o66_ushort *)(v0_0))->v) = (v0_3 + 0x1);
    v0_1 = (0x3A);
    if (((int)(short)(v0_3 + 0x1) < (int)(unsigned char)(*(signed char *)((v0_2 + 0x3A))))) goto L_C0955BC;
    L_C0955B4:;
    (((struct o4E_ushort *)(v0_0))->v) = (((((struct o4E_short *)(v0_0))->v)) + 0x1);
    v0_1 = (0x4E);
    goto L_C0955BC;
    L_C095570:;
    v0_2 = (((struct o66_short *)(v0_0))->v);
    (((struct o66_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0x66);
    if (((short)(v0_2 - 1) != 0)) goto L_C0955BC;
    goto L_C0955B4;
    L_C09553A:;
    (((struct o62_ushort *)(v0_0))->v) = (*(short *)(((((((struct o5A_short *)(v0_0))->v)) << 1) + (*(int *)((v0_2 + 0x10))))));
    v0_5 = (((struct o56_short *)(v0_0))->v);
    (((struct o56_ushort *)(v0_0))->v) = (v0_5 + 0x1);
    v0_1 = (0x56);
    if (((int)(short)(v0_5 + 0x1) < (int)v0_4)) goto L_C0955BC;
    *(unsigned short *)((v0_0 + v0_1)) = v0_3;
    v0_3 = (((struct o5A_short *)(v0_0))->v);
    (((struct o5A_ushort *)(v0_0))->v) = (v0_3 + 0x1);
    v0_1 = (0x39);
    if (((int)(short)(v0_3 + 0x1) >= (int)(unsigned char)(*(signed char *)((v0_2 + 0x39))))) goto L_C0955B4;
    goto L_C0955BC;
}
