/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int get_fat(int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_fread1(int a4, int a5);
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };



int vmsfs_fread1(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;

    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        return 0xFFFFFF01;
    }
    t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
        return 0xFFFFFF01;
    }
    t1 = buIsFormat((*(int *)((a4 + 0x28))));
    if ((int)t1 < 0) {
        return 0xFFFFFF03;
    }
    t1 = *(int *)((a4 + 0x28));
    t0 = (((struct o40_int *)(a4))->v);
    if (t0 == 0xFFFA) {
        if ((*(int *)((a4 + 0x34))) == 0) {
            return 0x0;
        }
        return 0xFFFF0000;
    }
    if ((*(int *)((a4 + 0x34))) == 0) {
        return 0x0;
    }
    if ((t0 == 0xFFFC) || (t0 == 0xFFFF)) {
        return 0xFFFFFF41;
    }
    t2 = vmsfs_read_retry(t1, t0, a5);
    if ((int)t2 < 0) {
        return t2;
    }
    (((struct o40_uint *)(a4))->v) = (unsigned short)(get_fat(t1, t0));
    t2 = ((*(int *)((a4 + 0x34))) - 1);
    *(unsigned int *)((a4 + 0x34)) = t2;
    return t2;
}
