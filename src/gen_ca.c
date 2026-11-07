/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01a50c(int, int);
int FUN_0c01a52c(int);
int FUN_0c0b72d6(int);
int FUN_0c0e5f1c(int);
int FUN_0c22ee60(void);
int FUN_0c22eeb2(int, int, int);
int FUN_0c22f312(int, int, int, int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int FUN_0c22ea0c(int a4, int a5, int a6, int a7);
int FUN_0c01a672(int a4, int a5, int a6, int a7);


int FUN_0c01a672(int a4, int a5, int a6, int a7)
{
    int t4;
    int t40;
    int t41;
    int t50;
    int t51;
    int t52;
    int t68;

    if (a4 == 0) {
        *(unsigned int *)0xC23F220 = 0x2;
    } else {
        *(unsigned int *)0xC23F220 = 0x1;
    }
    if (((int)(*(int *)((0xC23F25C + (a4 << 2)))) > 0) && (t4 = *(int *)0xC5229BC, (unsigned int)t4 > (unsigned int)0x0)) {
        if ((*(int *)0xC5229FC) != 1) {
            if ((*(int *)0xC522A00) == 0) {
                if ((int)(*(int *)0xC23F22C) >= (int)(*(int *)0xC5229BC)) {
                    if (((*(int *)0xC5229C4) != 1) && (t40 = *(int *)0xC5229C0, t41 = *(int *)0xC23F234, (unsigned int)t41 < (unsigned int)t40)) {
                        *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                    }
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            } else {
                if (((int)(*(int *)(((0xC23F22C + (a4 << 2)) + 0x0))) >= (int)(*(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x0)))) && ((t50 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x8)), t50 == 1) || (t51 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x4)), t52 = *(int *)(((0xC23F234 + (a4 << 2)) + 0x0)), (unsigned int)t52 >= (unsigned int)t51))) {
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            }
        }
        if ((((*(int *)(((((((a4 << 2) + a4) << 2) << 2) + 0xC2497E0) + 0x0))) & 4) != 0) && (t68 = *(int *)(((a4 << 2) + 0xC23F25C)), (int)t68 < (int)0x2D0)) {
            *(volatile int *)((((a4 << 2) + 0xC23F25C) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - (FUN_0c0e5f1c(((a4 << 2) + 0xC23F25C))));
        } else {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = ((*(int *)((0xC23F25C + (a4 << 2)))) - 1);
        }
        if ((int)(*(int *)((0xC23F25C + (a4 << 2)))) < 0) {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x0;
        }
        FUN_0c01a50c(a4, 0x4);
        return FUN_0c01a52c(a4);
    }
    if ((*(int *)(((a4 << 2) + 0xC23EDE0))) != 0) {
        FUN_0c0b72d6(a4);
    }
    *(unsigned int *)(((a4 << 2) + 0xC23EDE0)) = 0xB;
    *(unsigned int *)((((a4 << 2) + 0xC23F224) + 0x0)) = 0x78;
    *(unsigned int *)0xC23F21C = 0x0;
    return 0x70;
}
