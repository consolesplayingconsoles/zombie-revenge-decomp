/* Straight-line functions with calls and guards (batch gen_zc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c055a40(int a4);

int FUN_0c055a40(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x33C));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
    if ((*(int *)((a4 + 0x210))) == 85) {
        *(unsigned int *)((a4 + 0x348)) = (*(int *)((t1 + 0x220)));
        *(unsigned int *)((a4 + 0x350)) = (*(int *)((a4 + 0x33C)));
        *(unsigned int *)((a4 + 0x330)) = 0x2;
        t2 = (*(int *)((a4 + 0x348)));
    } else {
        *(unsigned int *)((a4 + 0x344)) = (*(int *)((t1 + 0x220)));
        *(unsigned int *)((a4 + 0x34C)) = (*(int *)((a4 + 0x33C)));
        *(unsigned int *)((a4 + 0x330)) = 0x4;
        t2 = (*(int *)((a4 + 0x344)));
    }
    *(unsigned int *)((a4 + 0x340)) = t2;
    t2 = *(int *)(((0x220 + t1) + 0x0));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | ((int)0x1 << (int)t2));
    *(unsigned int *)((a4 + 0x33C)) = 0x0;
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
    t3 = *(int *)((t1 + 0x220));
    if ((*(int *)((0xC1FF6D8 + (t3 << 2)))) != 0) {
        t4 = *(int *)((0xC1FF6D8 + ((*(int *)((t1 + 0x220))) << 2)));
        return ((int (*)(int, int, int, int))(t4))(a4, ((t0 << 2) + 0xC247604), 0xC2475D4, ((int)0x1 << (int)t2));
    }
    return (t3 << 2);
}
