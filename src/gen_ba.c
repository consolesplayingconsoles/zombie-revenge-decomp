/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c055874(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e61d4(int);
int FUN_0c0556ce(int a4, int a5, int a6);

int FUN_0c0556ce(int a4, int a5, int a6)
{
    int t57;
    int t1;
    int t46;
    int t2;
    int t6;
    int t13;
    int t0;

    t57 = 0xFFFFFFFF;
    if (((int)a4 < (int)0x16) && (t0 = *(int *)0xC247994, (int)t0 < (int)0xC)) {
        t1 = FUN_0c055874();
        t46 = 0xFFFFFFFF;
        if (t1 != 0) {
        } else {
            t2 = 0xFFFFFFFF;
            for (;;) {
                t2 = (t2 + 0x1);
                if ((*(int *)((((t2 << 2) + 0xC247604) + 0x0))) == 0) {
                    break;
                }
            }
            t6 = FUN_0c0e19aa((*(int *)(((a4 << 2) + 0xC1FF74C))), 0x288, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t6);
            *(unsigned int *)0xC247994 = ((*(int *)0xC247994) + 0x1);
            *(unsigned int *)(((0xC247604 + (t2 << 2)) + 0x0)) = a5;
            *(unsigned int *)(((0xC247634 + (t2 << 2)) + 0x0)) = a4;
            *(unsigned int *)((((t2 << 2) + 0xC2475D4) + 0x0)) = t6;
            *(unsigned int *)((t6 + 0xBC)) = t2;
            *(unsigned int *)((t6 + 0xC8)) = 0x40000;
            *(unsigned int *)((t6 + 0x220)) = a4;
            *(unsigned int *)(((0x240 + t6) + 0x0)) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8AA)));
            *(unsigned int *)(((0x244 + t6) + 0x0)) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8E4)));
            *(float *)(((0x258 + t6) + 0x0)) = (*(float *)(((a4 << 2) + 0xC1FF5B4)));
            *(unsigned int *)(((0x22C + t6) + 0x0)) = (*(int *)(((a4 << 2) + 0xC1FE9CC)));
            *(unsigned int *)((t6 + 0x224)) = 0x63;
            t13 = 0x0;
            if (((((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))) & 0xFC77800) != 0) {
                t13 = 0x1;
            }
            *(unsigned int *)((t6 + 0x228)) = t13;
            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
                *(unsigned int *)((t6 + 0x230)) = 0x1;
            }
            *(unsigned int *)((t6 + 0x234)) = (*(int *)0xC23ED50);
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                *(unsigned int *)(((0x21C + t6) + 0x0)) = (*(int *)(((a4 << 2) + 0xC1FF60C)));
            } else {
                *(unsigned int *)((t6 + 0x21C)) = (*(int *)((((a4 << 2) << 2) + 0xC20C0B8)));
            }
            if (a6 != 0) {
                FUN_0c0e61d4(0x1);
            }
            if (a5 != 11) {
            } else {
                *(float *)((t6 + 0x34)) = ((FUN_0c01f172(t6)) + (*(float *)0xC0558EC));
            }
            t46 = t2;
        }
        t57 = t46;
    }
    return t57;
}
