/* Straight-line functions with calls and guards (batch gen_adm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int open_file_handle(void);
int search_dir(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_fopen(int a4, int a5, int a6);
struct o40_uint { char p[0x40]; unsigned int v; };


int vmsfs_fopen(int a4, int a5, int a6)
{
    int stk[13];
    register int t54;
    register int t1;
    register int t3;
    register int t44;
    register int t39;
    register int t5;
    register int t34;
    register int t6;
    register int t29;
    register int t7;
    register int t24;
    register int t8;
    register int t20;
    register int t9;
    register int t12;
    register int t49;
    register int t16;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
    t54 = 0xFFFFFF01;
    if ((*(signed char *)(((a4 * 0x148) + 0xC95676A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t49 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t44 = 0xFFFFFF01;
            if (t3 != 0) {
                t39 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + 0xC956770))) == 0) {
                } else {
                    t5 = buIsFormat(a4);
                    t34 = 0xFFFFFF03;
                    if ((int)t5 < 0) {
                    } else {
                        t6 = check_isopen();
                        t29 = 0xFFFFFF07;
                        if ((int)t6 >= 0) {
                            t7 = check_file_correct(a4, a5);
                            t24 = 0xFFFFFF41;
                            if ((int)t7 < 0) {
                            } else {
                                t8 = open_file_handle();
                                t20 = 0xFFFFFF07;
                                if (t8 == 0) {
                                } else {
                                    t9 = search_dir(a4, a5, (((int)stk + 4) + 0x4));
                                    *(unsigned int *)0xC95B66C = t9;
                                    if ((int)t9 < 0) {
                                        close_file_handle(t8);
                                        t16 = 0xFFFFFF05;
                                    } else {
                                        *(unsigned int *)((t8 + 0x4)) = 0x0;
                                        *(unsigned int *)((t8 + 0x34)) = (*(int *)(((int)stk + 48)));
                                        t12 = *(int *)(((int)stk + 20));
                                        *(unsigned int *)((t8 + 0x38)) = t12;
                                        (((struct o40_uint *)(t8))->v) = t12;
                                        *(unsigned int *)((t8 + 0x28)) = a4;
                                        *(unsigned short *)((t8 + 0x2)) = (*(short *)(((int)stk + 16)));
                                        *(unsigned char *)((t8 + 0x1)) = (*(signed char *)(((int)stk + 18)));
                                        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = t8;
                                        t16 = 0x0;
                                    }
                                    t20 = t16;
                                }
                                t24 = t20;
                            }
                            t29 = t24;
                        }
                        t34 = t29;
                    }
                    t39 = t34;
                }
                t44 = t39;
            }
            t49 = t44;
        }
        t54 = t49;
    }
    return t54;
}
