/* Straight-line functions with calls and guards (batch gen_aas): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetFramebufferTexture(int a4);

int kmSetFramebufferTexture(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x280;
    t1 = 0x1E0;
    if ((*(int *)0xC952318) == 1) {
    } else {
        t2 = 0x140;
        if (((*(int *)0xC95231C) & 16) != 0) {
            t2 = 0x280;
        }
        t3 = 0xF0;
        if (((*(int *)0xC95231C) & 32) != 0) {
            t3 = 0x1E0;
        }
        t0 = t2;
        t1 = t3;
    }
    t2 = *(int *)0xC952320;
    if (t2 != 3) {
        if (t2 != 0) {
            if (t2 != 1) {
                return 0x4;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            *(unsigned int *)((a4 + 0x8)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            *(unsigned int *)((a4 + 0x8)) = 0x8000000;
        }
    } else {
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0xC)) = 0x400;
    *(unsigned int *)((a4 + 0x10)) = 0x400;
    *(unsigned int *)((a4 + 0x14)) = ((t0 * t1) << 1);
    *(unsigned int *)((a4 + 0x18)) = 0x10;
    *(unsigned int *)((a4 + 0x1C)) = (((*(int *)((((*(int *)0xC239A9C) << 2) + 0xC952630))) << 2) << 1);
    return 0x0;
}
