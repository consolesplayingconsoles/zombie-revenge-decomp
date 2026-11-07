/* Straight-line functions with calls and guards (batch gen_ls): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e1830(int, int);
int FUN_0c0c0f84(int a4, int a5, int a6);

int FUN_0c0c0f84(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0e1830(0xC0C105A, 0x144);
    *(unsigned int *)((t0 + 0x34)) = a4;
    *(unsigned int *)((t0 + 0x38)) = a5;
    for (t1 = 0; ; t1++) { *(unsigned char *)((t0 + 0x44) + t1) = *(unsigned char *)(a6 + t1); if (*(unsigned char *)(a6 + t1) == 0) break; }
    *(unsigned int *)((t0 + 0x30)) = 0x78;
    return (t0 + 0x44);
}
