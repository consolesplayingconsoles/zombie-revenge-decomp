/* Straight-line functions with calls and guards (batch gen_up): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
void syChainDeleteHandler(int a4);

