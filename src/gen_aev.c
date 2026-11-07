/* Straight-line functions with calls and guards (batch gen_aev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0556ce(int, int, int);
int FUN_0c0552dc(int a4, int a5, int a6, int a7);

int FUN_0c0552dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0556ce(a5, 0x1, 0x0);
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t2 = *(int *)(((t0 << 2) + 0xC2475D4));
        if ((0x1887F0 & ((int)0x1 << (int)a5)) != 0) {
            *(unsigned int *)((a4 + 0x344)) = a5;
            *(unsigned int *)((a4 + 0x330)) = 0x4;
            t3 = 0x34C;
        } else {
            *(unsigned int *)((a4 + 0x348)) = a5;
            *(unsigned int *)((a4 + 0x330)) = 0x2;
            t3 = 0x350;
        }
        *(unsigned int *)((a4 + t3)) = t0;
        *(unsigned int *)((a4 + 0x340)) = a5;
        *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t2) + 0x0))));
        *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | ((int)0x1 << (int)a5));
        *(unsigned int *)((t2 + 0x23C)) = (*(int *)((a4 + 0xBC)));
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            *(unsigned int *)(((0x21C + t2) + 0x0)) = (*(int *)(((a5 << 2) + 0xC1FF60C)));
        } else {
            *(unsigned int *)((t2 + 0x21C)) = (*(int *)((((a5 << 2) << 2) + 0xC20C0B8)));
        }
        if ((*(int *)(((a5 << 2) + 0xC1FF6D8))) != 0) {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC1FF6D8)))))(a4, ((int)0x1 << (int)a5), a6, a7);
        }
        t1 = t0;
    }
    return t1;
}
