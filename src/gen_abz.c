/* Straight-line functions with calls and guards (batch gen_abz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int get_fat(int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int set_vmstime(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
void vmsfs_xcreate(int a4, int a5, int a6, int a7);

void vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t3;
    register int t5;
    register int t8;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    int t6;
    register int t7;
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1012 = a6;
    R1008 = a7;
    R1016 = (a4 * 0x148);
    R1004 = ((a4 * 0x148) + 0xC956768);
    *(unsigned int *)(((R1008) + 0x0)) = 0x0;
    if ((*(signed char *)(((R1004) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
        } else {
            t5 = vmsio_ismount(a4);
            if ((t5 != 0) && (t6 = R1016, t7 = *(signed char *)(((t6 + 0xC956768) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                if ((int)t8 >= 0) {
                    if ((*(int *)(((*(int *)(((R1004) + 0x1C))) + 0x38))) != 0) {
                        t15 = check_isopen();
                        if ((int)t15 >= 0) {
                            t16 = search_dir(a4, a5, (((int)stk + 4) + 0x10));
                            if ((int)t16 < 0) {
                                t17 = search_exec_file(a4, (((int)stk + 4) + 0x10));
                                if ((int)t17 < 0) {
                                    t18 = get_fat(a4, 0x0);
                                    if ((unsigned short)t18 == 0xFFFC) {
                                        t19 = search_free_dir(a4);
                                        if ((int)t19 >= 0) {
                                            direntry(a4, t19);
                                            t21 = open_file_handle();
                                            if (t21 != 0) {
                                                *(unsigned int *)((t21 + 0x8)) = 0x1;
                                                *(unsigned int *)((t21 + 0x4)) = 0x2;
                                                *(unsigned int *)((t21 + 0x2C)) = t19;
                                                *(unsigned int *)((t21 + 0x38)) = 0xFFFF;
                                                *(unsigned int *)((t21 + 0x30)) = 0x0;
                                                *(unsigned int *)((t21 + 0x28)) = a4;
                                                *(unsigned short *)((t21 + 0x2)) = 0x1;
                                                *(unsigned char *)((t21 + 0x1)) = 0x0;
                                                t22 = 0xFFFF;
                                                t23 = (t21 + 0x10);
                                                t24 = a5;
                                                for (;;) {
                                                    if ((*(signed char *)((t24 + 0x0))) == 0) {
                                                        break;
                                                    }
                                                    t26 = *(signed char *)((t24 + 0x0));
                                                    t24 = (t24 + 0x1);
                                                    t22 = t26;
                                                    *(unsigned char *)((t23 + 0x0)) = t22;
                                                    t23 = (t23 + 0x1);
                                                }
                                                *(unsigned char *)((t23 + 0x0)) = 0x0;
                                                set_vmstime((t21 + 0x20), (R1012));
                                                *(unsigned int *)(((R1008) + 0x0)) = t21;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
