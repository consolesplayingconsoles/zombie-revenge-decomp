/* Straight-line functions with calls and guards (batch gen_vw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05105c(int, int, int, int);
int FUN_0c05026e(int a4);

int FUN_0c05026e(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)0xC23ED9C;
    if ((t1 != 4) && (t1 != 7)) {
        return t1;
    }
    u0 = *(float *)((((t0 << 2) + 0xC24758C) + 0x0));
    u1 = (float)(int)((float)(*(int *)((a4 + 0x1CC))) * 3.0f);
    *(float *)((((t0 << 2) + 0xC24758C) + 0x0)) = (u0 + u1);
    t1 = ((t0 << 2) + 0xC24758C);
    if ((u0 + u1) > (float)(*(int *)((0xC24759C + (t0 << 2))))) {
        *(float *)(((0xC24758C + (t0 << 2)) + 0x0)) = (float)(*(int *)((0xC24759C + (t0 << 2))));
        t1 = (t0 << 2);
    }
    t2 = (t0 << 2);
    t3 = t0;
    t4 = 0xC24759C;
    if (((*(int *)0xC23A1A8) & 0x4000) == 0) {
        if ((*(int *)0xC204998) != 0) {
            t5 = *(int *)0xC2049AC;
            t6 = t5;
            if (t5 == 0) {
                if ((int)(*(int *)0xC1FF894) >= 0) {
                    t5 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t5 << 2))) = ((*(int *)((0xC247594 + (t5 << 2)))) - ((int)(*(int *)((a4 + 0x1CC))) >> 4));
                    t7 = (t5 << 2);
                } else {
                    t5 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t5 << 2))) = ((*(int *)((0xC247594 + (t5 << 2)))) - (*(int *)(((0x1CC + a4) + 0x0))));
                    t7 = (t5 << 2);
                }
                t6 = t7;
            }
            t5 = t6;
        } else {
            t6 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((0xC247594 + (t6 << 2))) = ((*(int *)((0xC247594 + (t6 << 2)))) - (*(int *)(((0x1CC + a4) + 0x0))));
            t5 = (t6 << 2);
        }
        t6 = t5;
        t7 = t0;
        if ((int)(*(int *)((((t0 << 2) + 0xC247594) + 0x0))) <= 0) {
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                if ((int)(*(int *)(((0x1C4 + a4) + 0x0))) < (int)0x2) {
                    *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x1;
                    t8 = *(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)));
                    t9 = t8;
                    if (t8 == 5) {
                        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
                        t9 = 0xBC;
                    }
                    t8 = t9;
                    t9 = 0xC246FF0;
                } else {
                    *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x0;
                    t8 = 0x2;
                    t9 = t0;
                }
                t10 = t8;
                t8 = t9;
            } else {
                *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x0;
                t10 = t5;
                t8 = t0;
            }
            t6 = t10;
            t7 = t8;
        }
        t2 = t6;
        t3 = t7;
        t4 = ((t0 << 2) + 0xC247594);
    }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        return FUN_0c05105c(a4, t3, t4, t1);
    }
    return t2;
}
