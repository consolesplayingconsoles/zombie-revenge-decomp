/* Straight-line functions with calls and guards (batch gen_kt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010250(void);
int FUN_0c20d188(void);
int FUN_0c20d190(void);
int _INITSCT(void);
int FUN_0c20d160(void);

int FUN_0c20d160(void)
{
    register int t2;

    *(volatile signed char *)(((*(int *)0xC2364E4) + 0x0));
    t2 = 0x8C00C000;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x41474553;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C00F400) {
            break;
        }
    }
    _INITSCT();
    FUN_0c20d188();
    FUN_0c010250();
    return FUN_0c20d190();
}
