/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int, float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0b4d9c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0b4d9c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) + 0x1);
    if ((*(int *)((a4 + 0x9C))) == 0) {
        t1 = 0x90;
        if ((int)(*(int *)((a4 + 0x90))) >= (int)(*(int *)((t0 + 0x0)))) {
            *(unsigned int *)((a4 + 0x94)) = (*(int *)((t0 + 0x4)));
            *(unsigned int *)((a4 + 0x9C)) = 0x1;
            t1 = 0x9C;
        }
        return t1;
    }
    t1 = *(int *)((a4 + 0x94));
    *(unsigned int *)((a4 + 0x94)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x88)) = (t0 + 0xC);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        if ((int)(*(int *)(((t0 + 0xC) + 0x0))) < 0) {
            return FUN_0c0e19f2((t0 + 0xC), a5, a6, a7);
        }
        return 0x9C;
    }
    *(unsigned int *)((a4 + 0x30)) = (*(int *)((t0 + 0x8)));
    return FUN_0c0c0340((a4 + 0x30), f4);
}
