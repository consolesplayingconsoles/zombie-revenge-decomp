/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int get_fat(int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
void vmsfs_fread1(int a4, int a5);
struct o40_int { char p[0x40]; int v; };


void vmsfs_fread1(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;

    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
    } else {
        t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t1 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
            } else {
                t1 = buIsFormat((*(int *)((a4 + 0x28))));
                if ((int)t1 < 0) {
                } else {
                    t1 = *(int *)((a4 + 0x28));
                    if (((((struct o40_int *)(a4))->v)) == 0xFFFA) {
                        *(volatile int *)((a4 + 0x34));
                    } else {
                        if ((*(int *)((a4 + 0x34))) == 0) {
                        } else {
                            if ((((((struct o40_int *)(a4))->v)) != 0xFFFC) && (t0 = (((struct o40_int *)(a4))->v), t0 != 0xFFFF)) {
                                t0 = (((struct o40_int *)(a4))->v);
                                t2 = vmsfs_read_retry(t1, t0, a5);
                                if ((int)t2 < 0) {
                                } else {
                                    *(unsigned int *)(((0x40 + a4) + 0x0)) = (unsigned short)(get_fat(t1, t0));
                                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
