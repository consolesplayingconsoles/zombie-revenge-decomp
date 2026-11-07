/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetFogTable(void);
int kmiWriteRegister(int, int, int, int);
int mwRnaGetTime(void);
int kmSetHSyncLine(int a4);
int thunk_kmSetFogTable(void);
int thunk_mwRnaGetTime(void);


int thunk_kmSetFogTable(void)
{
    return kmSetFogTable();
}

int thunk_mwRnaGetTime(void)
{
    return mwRnaGetTime();
}


