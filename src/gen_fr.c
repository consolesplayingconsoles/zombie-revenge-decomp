/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e6248(int);
int FUN_0c06defc(int a4);

int FUN_0c06defc(int a4)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC06DE48, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FB648); }
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t1 + 0x60)) = *(struct mvb6 *)(0xC0FB654); }
    t3 = *(short *)0xC0FB65A;
    *(unsigned int *)(((0x78 + a4) + 0x0)) = t3;
    return t3;
}
