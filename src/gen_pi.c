/* Straight-line functions with calls and guards (batch gen_pi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db0a0(int, int);
int FUN_0c0e16c0(int);
int nlPrintf(int, ...);
int FUN_0c0c381c(void);

int FUN_0c0c381c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)(((*(int *)0xC262390) + 0x40));
    if ((int)t0 < (int)0x206B) {
        t1 = (*(int *)0xC191314);
    } else {
        t1 = ((*(int *)(((*(int *)0xC260CB8) + 0x0))) - 1584);
    }
    FUN_0c0db0a0(0x1E, 0x2);
    nlPrintf(0xC1E4FA4);
    FUN_0c0db0a0(0x2, 0x8);
    if ((int)(*(int *)(((*(int *)0xC262390) + 0x40))) < (int)0x206B) {
        t2 = 0xC1E4FD4;
    } else {
        t2 = 0xC1E4FDC;
    }
    t3 = *(int *)(((*(int *)0xC262390) + 0x3C));
    nlPrintf(0xC1E4FBC, (t3), ((*(int *)(((t3 << 2) + 0xC1E4608)))), t2);
    t2 = *(int *)(((*(int *)0xC262390) + 0x40));
    if ((int)t2 < (int)0x206B) {
        t3 = ((*(int *)((((0xFFFFDFF8 + t0) << 2) + (*(int *)0xC1E4F50)))) + (*(int *)0xC262398));
    } else {
        t3 = ((*(int *)(((((0xFFFFDFF8 + t0) - 99) << 2) + (*(int *)((0xC1E4F54 + ((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2))))))) + (*(int *)0xC262398));
    }
    nlPrintf(0xC1E4FE4, (t2), t3);
    nlPrintf(0xC1E5000, ((*(short *)((((((0xFFFFDFF8 + t0) << 2) << 2) + t1) + 0x0)))), ((*(short *)((((((0xFFFFDFF8 + t0) << 2) << 2) + t1) + 0x2)))));
    nlPrintf(0xC1E5014, ((*(int *)((((((0xFFFFDFF8 + t0) << 2) << 2) + t1) + 0x4)))));
    nlPrintf(0xC1E5020);
    nlPrintf(0xC1E5020);
    nlPrintf(0xC1E5020);
    nlPrintf(0xC1E5024, (*(float *)(((*(int *)0xC262390) + 0x44))));
    nlPrintf(0xC1E5034, (*(float *)(((*(int *)0xC262390) + 0x48))));
    nlPrintf(0xC1E5044, (*(float *)(((*(int *)0xC262390) + 0x4C))));
    nlPrintf(0xC1E5054, (*(float *)(((*(int *)0xC262390) + 0x50))));
    nlPrintf(0xC1E5034, (*(float *)(((*(int *)0xC262390) + 0x54))));
    nlPrintf(0xC1E5064, (unsigned short)(*(short *)(((*(int *)0xC262390) + 0x58))));
    return FUN_0c0e16c0((*(int *)(((*(int *)0xC262390) + 0x0))));
}
