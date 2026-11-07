/* Straight-line functions with calls and guards (batch gen_oe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c21ef80(int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiSetTAEnvironment(Stk4 s);

int kmiSetTAEnvironment(Stk4 s)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    *(unsigned int *)0xC952364 = s.w[0];
    t0 = 0x1;
    if ((s.w[0] & 0x1) != 0) {
        t0 = 0x0;
    }
    *(unsigned int *)0xC9527A8 = ((unsigned int)(0x10000 & s.w[0]) >> 16);
    *(unsigned int *)0xC9527AC = ((unsigned int)((unsigned int)(0x60000 & s.w[0]) >> 16) >> 1);
    *(unsigned int *)0xC9527B0 = ((unsigned int)((unsigned int)((unsigned int)(0x180000 & s.w[0]) >> 16) >> 2) >> 1);
    *(unsigned int *)0xC9527B4 = ((unsigned int)(0x600000 & s.w[0]) >> 21);
    *(unsigned int *)0xC9527B8 = ((unsigned int)(0x1800000 & s.w[0]) >> 23);
    *(unsigned int *)0xC9527BC = ((unsigned int)((unsigned int)((unsigned int)(s.w[0] & 0x6000000) >> 16) >> 8) >> 1);
    t1 = *(int *)0xC952754;
    *(unsigned int *)0xC952748 = ((((unsigned int)t1 >> 2) << 1) + ((unsigned int)t1 >> 2));
    t1 = FUN_0c21ef80(((*(int *)0xC952758) * (*(int *)0xC95275C)));
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC95276C)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC952768))) + (*(int *)0xC952754));
        if (((*(int *)0xC952300) & 32) != 0) {
            if ((*(int *)0xC952760) != 0) {
                *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC95276C)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC95276C))) - 68);
                t6 = *(int *)0xC95275C;
                t7 = *(int *)0xC952758;
                t8 = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC95276C))) - ((((((t7 * t6) << 1) + (t7 * t6)) << 2) << 2) << 1));
            } else {
                t6 = *(int *)0xC95275C;
                t7 = *(int *)0xC952758;
                t8 = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC95276C))) - (((((t7 * t6) << 1) + (t7 * t6)) << 2) << 2));
            }
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC95276C)) = t8;
        } else {
            t6 = *(int *)0xC95275C;
            t7 = *(int *)0xC952758;
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC95276C)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC95276C))) - (((((t7 * t6) << 1) + (t7 * t6)) << 2) << 1));
        }
        if (((*(int *)0xC952300) & 128) != 0) {
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC95276C)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC95276C))) - 24);
        }
        if ((*(int *)0xC9527A8) == 0) {
            *(unsigned int *)(((0xC952774 + t2) + 0x0)) = (((*(int *)((t2 + 0xC952768))) + (*(int *)0xC952748)) & 0xFFFFFFE0);
            *(unsigned int *)((t2 + 0xC952778)) = (((*(int *)((t2 + 0xC95276C))) - t1) & 0xFFFFFF80);
            *(unsigned int *)((t2 + 0xC95277C)) = ((*(int *)((t2 + 0xC952774))) + t1);
        } else {
            *(unsigned int *)((t3 + 0xC952774)) = (((*(int *)((t3 + 0xC95276C))) - t1) & 0xFFFFFF80);
            *(unsigned int *)((t3 + 0xC952778)) = (((*(int *)((t3 + 0xC952768))) + (*(int *)0xC952748)) & 0xFFFFFFE0);
            *(unsigned int *)((t3 + 0xC95277C)) = (*(int *)((t3 + 0xC952774)));
        }
        *(unsigned int *)((t4 + 0xC952780)) = (*(int *)((t4 + 0xC952768)));
        *(unsigned int *)((t4 + 0xC952784)) = (((*(int *)((t4 + 0xC952768))) + (*(int *)0xC952748)) - 256);
        t5 = (t5 + 0x1);
        t4 = (t4 + 0x20);
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x20);
        if ((int)t5 < (int)0x2) continue;
        break;
    }
    kmiCreateRegionArray((*(int *)0xC952758), (*(int *)0xC95275C), 0x0, 0x1, 0x0, (t0));
    return (kmiCreateRegionArray((*(int *)0xC952758), (*(int *)0xC95275C), 0x0, 0x1, 0x1, (t0)));
}
