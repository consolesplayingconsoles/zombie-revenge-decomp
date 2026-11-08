/* Straight-line functions with calls and guards (batch gen_lj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int syChainAddHandler(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t4;
    int t5;
    register int t8;
    register int t48;
    register int t3;
    int t6;
    register int t79;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    *(unsigned short *)(((int)stk + 8)) = a4;
    R1004 = a5;
    *(unsigned short *)(((int)stk + 12)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 8));
    t2 = *(int *)((0xC9539E8 + (((int)t1 >> 4) << 2)));
    t4 = t2;
    t5 = t2;
    for (;;) {
        if ((t4 != 0) && (t6 = *(int *)((t4 + 0xC)), t3 = t6, (unsigned int)t3 < (unsigned int)(a6 | 0x80000000))) {
            t5 = t4;
            t4 = (*(int *)((t4 + 0x4)));
            continue;
        }
        break;
    }
    t8 = 0x1;
    for (;;) {
        if (((*(int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0xC))) & 0x80000000) != 0) {
            t8 = (t8 + 0x1);
            if ((unsigned int)t8 >= (unsigned int)0x100) {
                break;
            }
            continue;
        }
        break;
    }
    if ((unsigned int)t8 >= (unsigned int)0x100) {
        t79 = 0x0;
    } else {
        if ((t4 == 0) && (t5 == 0)) {
            if ((int)t1 < (int)0x900) {
                *(unsigned int *)(((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + t1) >> 1) >> 1) >> 1)) + 0x200)) = 0xC222312;
            } else {
                if (t1 == 0x900) {
                    kmSetVSyncCallback(0xC222336, 0x0);
                } else {
                    if (t1 == 0x920) {
                        kmSetHSyncCallback(0xC222380, 0x0);
                    } else {
                        *(unsigned int *)((((int)_builtin_get_vbr()) + 0x22C)) = 0xC2223A6;
                    }
                }
            }
            *(unsigned int *)((0xC9539E8 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC9529E8);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x4)) = 0x0;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x0)) = (R1004);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0xC)) = (a6 | 0x80000000);
            t48 = *(short *)(((int)stk + 8));
            if (((int)t1 >> 8) == 10) {
                (((struct o0_uint *)0xA05F6920)->v) = (((((struct o0_int *)0xA05F6920)->v)) | ((int)0x1 << (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1) + 0xC)));
            } else {
                if (((int)t1 >> 8) == 11) {
                    (((struct o4_uint *)0xA05F6920)->v) = (((((struct o4_int *)0xA05F6920)->v)) | ((int)0x1 << (int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1)));
                }
            }
        } else {
            if (t4 == (*(int *)((0xC9539E8 + (((int)t1 >> 4) << 2))))) {
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x4)) = t4;
                *(unsigned int *)((0xC9539E8 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC9529E8);
            } else {
                *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC9529E8);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x4)) = t4;
            }
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x0)) = (R1004);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC9529E8) + 0xC)) = (a6 | 0x80000000);
        }
        t79 = t8;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    return t79;
}
