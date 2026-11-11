/* Straight-line functions with calls and guards (batch gen_agf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
int _divls(void);
int FUN_0c0e216c(int a4);

int FUN_0c0e216c(int a4)
{
    register int t0;
    register int t4;
    register int t7;

    t0 = _divls();
    *(unsigned int *)0xC94C7E4 = ((*(int *)0xC94C7E4) + 0x1);
    if (t0 == 0) {
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7C4)) = 0x0;
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7A4)) = 0x0;
        *(unsigned int *)0xC94C6F0 = 0x0;
        t7 = 0x0;
    } else {
        t4 = FUN_0c0e262a(((t0 + 0x2) << 2));
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7C4)) = t0;
        *(unsigned int *)((((t0 << 2) + t4) + 0x0)) = 0x0;
        *(unsigned int *)((((t0 << 2) + t4) + 0x4)) = 0x0;
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7A4)) = t4;
        *(unsigned int *)0xC94C6F0 = t4;
        t7 = t4;
    }
    return t7;
}
