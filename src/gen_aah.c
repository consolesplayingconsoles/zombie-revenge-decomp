/* Straight-line functions with calls and guards (batch gen_aah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c473c(int);
int FUN_0c0dcc70(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06e87a(int a4, int a5, int a6, int a7);

int FUN_0c06e87a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                nlPushMatrix(0x0);
            } else {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(short *)((a4 + 0x64))));
                t0 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    t0 = *(int *)((a4 + 0x8C));
                    *(unsigned int *)((a4 + 0x8C)) = (t0 + 0x4);
                    *(unsigned int *)((a4 + 0xA0)) = (*(short *)(((t0 + 0x4) + 0x0)));
                    if ((int)(*(int *)((a4 + 0xA0))) < 0) {
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    } else {
                        *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)(((t0 + 0x4) + 0x2)));
                    }
                }
                nlPushMatrix(0x0);
            }
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            FUN_0c0c473c((*(int *)((a4 + 0x78))));
            return nlPopMatrix(0x1);
        }
    } else {
        *(unsigned int *)((a4 + 0x8C)) = 0xC0FBA9C;
        t0 = *(int *)((a4 + 0x8C));
        *(unsigned int *)((a4 + 0xA0)) = (*(short *)((t0 + 0x0)));
        *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)((t0 + 0x2)));
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
        if ((*(int *)(((t0 << 2) + 0xC247030))) == 4) {
            u0 = (*(float *)((a4 + 0x30)));
            u0 = (u0 + (0.0f));
            if (!(u0 > ((*(float *)((t1 + 0x30)))))) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x2) {
                    break;
                }
                continue;
            }
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t1 = t0;
    if (t0 == 2) {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t1 = 0x80;
    }
    return t1;
}
