/* Straight-line functions with calls and guards (batch gen_zk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int FUN_0c22a578(int);
int FUN_0c22a590(int);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7);

int adxsjd_decexec_start(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = *(int *)((a4 + 0x4));
    t3 = *(int *)((a4 + 0x8));
    if ((*(signed char *)((a4 + 0x3))) == 1) {
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x24)))))(t3, 0x1, a6, a7);
        if (t4 == 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            return 0x3;
        }
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x18)))))(t3, 0x1, 0x7FFFFFFF, (a4 + 0x14));
        t4 = ADXB_GetFormat(t2);
        if ((t4 == 0) && (t0 = *(int *)((a4 + 0x18)), (int)t0 >= (int)0x2)) {
            t0 = *(short *)(((*(int *)((a4 + 0x14))) + 0x0));
            if ((unsigned short)((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFF00)) != 0x8001) {
                t0 = FUN_0c22a590(a4);
                if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                t0 = FUN_0c22a578(a4);
                t4 = *(int *)((a4 + 0xC));
                t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x24)))))(t4, 0x0, a6, a7);
                if ((int)((unsigned int)t5 >> 1) < (int)t0) {
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
                return ADXB_Start(t2);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c22a590(a4);
        if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c22a578(a4);
        t4 = *(int *)((a4 + 0xC));
        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x24)))))(t4, 0x0, a6, a7);
        if ((int)((unsigned int)t5 >> 1) < (int)t0) {
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
        return ADXB_Start(t2);
    }
    t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x18)))))(t3, 0x1, 0x7FFFFFFF, (a4 + 0x14));
    t0 = ADXB_GetFormat(t2);
    if ((t0 == 0) && (t1 = *(int *)((a4 + 0x18)), (int)t1 >= (int)0x2)) {
        t0 = *(short *)(((*(int *)((a4 + 0x14))) + 0x0));
        if ((unsigned short)((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFF00)) != 0x8001) {
            t0 = FUN_0c22a590(a4);
            if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
                t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
            }
            t0 = FUN_0c22a578(a4);
            t1 = *(int *)((a4 + 0xC));
            t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x0, a6, a7);
            if ((int)((unsigned int)t4 >> 1) < (int)t0) {
                t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
            }
            ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
            return ADXB_Start(t2);
        }
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
    }
    t0 = FUN_0c22a590(a4);
    if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
    }
    t0 = FUN_0c22a578(a4);
    t1 = *(int *)((a4 + 0xC));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x0, a6, a7);
    if ((int)((unsigned int)t4 >> 1) < (int)t0) {
        t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
        return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
    }
    ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
    return ADXB_Start(t2);
}
