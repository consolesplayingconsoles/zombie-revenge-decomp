/* Straight-line functions with calls and guards (batch gen_adb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c042d28(void);
struct o21C_int { char p[0x21C]; int v; };
struct oBC_int { char p[0xBC]; int v; };


void FUN_0c042d28(void)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247B24) + 0x0))) == (*(int *)0xC23ED50)) {
            t1 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24); break;
        }
        t2 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24);
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x4) continue;
        t1 = t2; break;
    }
    t2 = t1;
    t1 = t0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x1E) {
            break;
        }
        if ((int)t3 < (int)0x10) {
            t2 = 0xC246FF0;
            t2 = (t2 + 0x40);
            t2 = (t2 + (t3 << 2));
            t1 = (*(int *)((t2 + 0x0)));
            if (t1 != 0) {
                t1 = 0xC246FF0;
                t5 = *(int *)((((t3 << 2) + t1) + 0x0));
                t1 = 0xC0E61D4;
                t2 = t5;
                *(unsigned int *)(((((t4 << 2) << 2) + 0xC246A40) + 0x0)) = t3;
                t2 = (t2 + 0x30);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t4 << 2) << 2) + 0xC246A40) + 0x4)) = *(struct mv3 *)(t2); }
                t4 = (t4 + 0x1);
                t5 = 0xC0E61D4;
            } else {
                t5 = t1;
            }
            t1 = t5;
            t3 = (t3 + 0x1);
            continue;
        }
        if (((int)t3 < (int)0x14) && (t2 = 0x4, (int)t0 < (int)t2)) {
            t5 = *(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247B24) + 0x8));
            if (t5 != 0) {
                t6 = 0x0;
                t7 = t5;
                for (;;) {
                    t1 = ((((struct oBC_int *)(t7))->v));
                    if ((t1 == t3) || (t6 = (t6 + 0x1), (int)t6 >= (int)0x4)) {
                        break;
                    }
                    t1 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24);
                    t7 = t6;
                    t1 = (t1 + 0x8);
                    t7 = (t7 << 2);
                    t7 = (t7 + t1);
                    t7 = (*(int *)((t7 + 0x0)));
                    if (t7 != 0) continue;
                    *(unsigned int *)(((((t4 << 2) << 2) + 0xC246A40) + 0x0)) = 0xFFFFFFFF;
                    return;
                }
                if (((((struct o21C_int *)(t7))->v)) == 0) {
                    t2 = t7;
                    t2 = (t2 + 0x30);
                    *(unsigned int *)(((((t4 << 2) << 2) + 0xC246A40) + 0x0)) = t3;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t4 << 2) << 2) + 0xC246A40) + 0x4)) = *(struct mv3 *)(t2); }
                    t4 = (t4 + 0x1);
                    t5 = 0xC0E61D4;
                } else {
                    t5 = t1;
                }
                t1 = t5;
                t3 = (t3 + 0x1);
                continue;
            }
            break;
        }
        t3 = (t3 + 0x1);
    }
    *(unsigned int *)(((((t4 << 2) << 2) + 0xC246A40) + 0x0)) = 0xFFFFFFFF;
}
