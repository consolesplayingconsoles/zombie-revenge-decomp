/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetFogTable(void);
int kmiWriteRegister(int, int, int, int);
int mwRnaGetTime(void);
int kmSetHSyncLine(int a4);
int thunk_kmSetFogTable(void);
int thunk_mwRnaGetTime(void);

int kmSetHSyncLine(int a4)
{
    int t0;
    int t1;
    int t24;
    int t19;
    int t25;
    int t27;
    int t29;
    int t31;
    int t3;
    int t9;

    t0 = *(int *)0xC952350;
    t1 = *(int *)0xC952358;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t3 = *(int *)0xC95231C, (t3 & 44) != 0) && (0x1 != 0))) {
        t9 = ((unsigned int)((unsigned int)(*(int *)0xC9525EC) >> 16) >> 1);
    } else {
        t9 = ((unsigned int)(*(int *)0xC9525EC) >> 16);
    }
    t24 = (a4 + (t1 + t0));
    if ((((*(int *)0xC95231C) & 0x1) != 1) || (0x1 == 0)) {
        t19 = (a4 + (t1 + t0));
        if (((*(int *)0xC95231C) & 32) != 0) {
            t19 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
        t24 = t19;
    }
    t25 = t24;
    if ((int)t24 < 0) {
        t25 = (t24 + t9);
    }
    t27 = t25;
    if ((int)t25 > (int)t9) {
        t27 = t9;
    }
    t29 = t27;
    if ((int)t27 < 0) {
        t29 = 0x0;
    }
    t31 = *(int *)0xC9525E0;
    *(unsigned int *)0xC9525E0 = ((t31 & 0x3FF0000) | (0x3FF & t29));
    kmiWriteRegister(0xC8, ((t31 & 0x3FF0000) | (0x3FF & t29)), t9, (a4 + (t1 + t0)));
    return 0x0;
}

int thunk_kmSetFogTable(void)
{
    return kmSetFogTable();
}

int thunk_mwRnaGetTime(void)
{
    return mwRnaGetTime();
}
