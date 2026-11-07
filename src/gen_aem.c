/* Straight-line functions with calls and guards (batch gen_aem): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int kmSetHSyncLine(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct oC_int { char p[0xC]; int v; };


int kmSetHSyncLine(int a4)
{
    int stk[1];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = ((((((struct o3C_int *)0xC95231C)->v)) + ((((struct o34_int *)0xC95231C)->v))));
    R5 = (0x1);
    if (((((((struct o0_int *)0xC95231C)->v)) & 0x1) == 1)) goto L_C20D4F0;
    if (((((((struct o0_int *)0xC95231C)->v)) & 44) == 0)) goto L_C20D4F0;
    if ((R5 == 0)) goto L_C20D4F0;
    v0_2 = (((unsigned int)((unsigned int)((((struct oC_int *)0xC9525E0)->v)) >> 16) >> 1));
    L_C20D4F6:;
    v0_3 = ((v0_0 + v0_1));
    if (((((((struct o0_int *)0xC95231C)->v)) & R5) != 1)) goto L_C20D50C;
    if ((R5 == 0)) goto L_C20D50C;
    R5 = (v0_3);
    L_C20D562:;
    if (((int)R5 >= 0)) goto L_C20D568;
    R5 = ((R5 + v0_2));
    L_C20D568:;
    if (((int)R5 <= (int)v0_2)) goto L_C20D56E;
    R5 = (v0_2);
    L_C20D56E:;
    if (((int)R5 >= 0)) goto L_C20D574;
    R5 = (0x0);
    L_C20D574:;
    v0_0 = (((struct o0_int *)0xC9525E0)->v);
    (((struct o0_uint *)0xC9525E0)->v) = ((v0_0 & 0x3FF0000) | (0x3FF & R5));
    kmiWriteRegister(0xC8, ((v0_0 & 0x3FF0000) | (0x3FF & R5)));
    return 0x0;
    L_C20D50C:;
    if (((((((struct o0_int *)0xC95231C)->v)) & 32) == 0)) goto L_C20D560;
    R5 = (((((int)((unsigned int)((int)((unsigned int)v0_0 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_0)) ? 1u : 0u))) >> 1) + v0_1));
    goto L_C20D562;
    L_C20D560:;
    R5 = (v0_3);
    goto L_C20D562;
    L_C20D4F0:;
    v0_2 = (((unsigned int)((((struct oC_int *)0xC9525E0)->v)) >> 16));
    goto L_C20D4F6;
}
