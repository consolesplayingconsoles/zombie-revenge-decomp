/* Straight-line functions with calls and guards (batch gen_zg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0519f0(int);
int FUN_0c0bb1a8(int, int);
int FUN_0c055f24(int a4, int a5, int a6, int a7);

int FUN_0c055f24(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x358));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((a4 + 0x34C)) = (*(int *)((t1 + 0xBC)));
    *(unsigned int *)((a4 + 0x344)) = (*(int *)((t1 + 0x220)));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | ((int)0x1 << (int)(*(int *)(((0x220 + t1) + 0x0)))));
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
    if ((*(int *)((a4 + 0x330))) == 2) {
        *(unsigned int *)((a4 + 0x330)) = 0x3;
    } else {
        *(unsigned int *)((a4 + 0x330)) = 0x1;
        *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x344)));
    }
    FUN_0c0bb1a8(a4, 0x0);
    FUN_0c0519f0(a4);
    t0 = *(int *)((a4 + 0x344));
    if ((*(int *)((0xC1FF6D8 + (t0 << 2)))) != 0) {
        t1 = *(int *)((0xC1FF6D8 + ((*(int *)((a4 + 0x344))) << 2)));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
    }
    return (t0 << 2);
}
