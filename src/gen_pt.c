/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[9];
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t11;
    register int t20;
    register int t17;
    register int t22;
    register int t31;
    register int t28;
    register int t33;
    register int t42;
    register int t39;
    register int t44;
    register int t53;
    register int t50;
    register int t55;
    register int t64;
    register int t61;

    *(unsigned int *)0xC9527C0 = (a4 << 2);
    *(unsigned int *)0xC9527C4 = (a5 << 2);
    *(unsigned int *)0xC9527C8 = (a6 << 2);
    *(unsigned int *)0xC9527CC = (a7 << 2);
    *(unsigned int *)0xC9527D0 = (a8 << 2);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)0xC95273C);
    *(unsigned int *)(((int)stk + 8)) = 0xC952978;
    *(unsigned int *)(((int)stk + 16)) = 0xC952978;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x18) + 0x4);
    if ((unsigned int)a10 <= (unsigned int)0x0) {
    } else {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        t3 = 0x0;
        t4 = 0xC952978;
        t5 = 0x0;
        for (;;) {
            if (((*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)))) & 31) != 0) {
                t3 = t5;
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 4) + 0x18));
                t2 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 4)) = t3;
                t4 = (*(int *)((t3 + 0x0)));
                t4 = (t4 + 0x1F);
                t4 = (t4 & t2);
                *(unsigned int *)((t3 + 0x0)) = t4;
            }
            t3 = t5;
            t3 = (t3 << 2);
            t4 = t5;
            t3 = (t3 + t4);
            t3 = (t3 << 2);
            t4 = 0xC952640;
            t3 = (t3 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t3;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC95271C, t11 = *(int *)((t2 + 0x0)), t11 == 32)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                t20 = 0x0;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t17 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t17 = 0x0;
                }
                t20 = t17;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t22 = *(int *)((t2 + 0x0)), t22 == 33)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                t31 = t20;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t20 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t28 = (((t20 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t28 = t20;
                }
                t31 = t28;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t33 = *(int *)((t2 + 0x0)), t33 == 34)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                t42 = t31;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t31 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t39 = (((t31 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t39 = t31;
                }
                t42 = t39;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC952640;
            t4 = (t4 + 0xC952978);
            *(unsigned int *)(((int)stk + 4)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC95271C, t44 = *(int *)((t2 + 0x0)), t44 == 35)) {
                t3 = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                t53 = t42;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 4) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (t4 + (t42 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t50 = (((t42 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 4)));
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t50 = t42;
                }
                t53 = t50;
            }
            t4 = 0xC952640;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC95271C, t55 = *(int *)((t2 + 0x0)), t55 == 36)) {
                t4 = t5;
                t4 = (t4 << 2);
                t3 = t5;
                t4 = (t4 + t3);
                t4 = (t4 << 2);
                t4 = (t4 + 0xC952978);
                *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                t64 = t53;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t2 = t53;
                    t4 = (*(int *)(((int)stk + 8)));
                    t2 = (t2 << 2);
                    t2 = (t2 + (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))));
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t61 = (((t53 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t4 = (*(int *)(((int)stk + 16)));
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t61 = t53;
                }
                t64 = t61;
            }
            t3 = (*(int *)(((int)stk + 12)));
            t4 = (*(int *)(((int)stk + 24)));
            t2 = (*(int *)((t3 + 0x0)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t64 << 2) + t2);
            t4 = (*(int *)(((int)stk + 16)));
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t3 = (*(int *)(((int)stk + 20)));
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t3;
            t2 = (*(int *)(((int)stk + 8)));
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 8)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
    return 0x0;
}
