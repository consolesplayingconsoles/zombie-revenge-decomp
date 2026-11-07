/* Straight-line functions with calls and guards (batch gen_vb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b2a28(int);
int FUN_0c0bffc4(void);
int FUN_0c0c4464(int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0b2b18(void);

int FUN_0c0b2b18(void)
{
    register int t2;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    int t23;
    register int t24;
    register int t27;
    register int t49;
    register int t6;
    register int t9;
    register int t43;
    register int t44;
    register int t45;
    register int t46;

    FUN_0c0cc6dc();
    t2 = FUN_0c0e19aa(0xC0B2CDA, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0xBC)) = 0x3;
    *(unsigned int *)((t2 + 0xC0)) = 0x35;
    FUN_0c0b2a28(t2);
    FUN_0c0bffc4();
    t7 = 0x0;
    t8 = 0x0;
    t10 = t9;
    t11 = 0x0;
    for (;;) {
        if ((*(int *)((t7 + 0xC247030))) != 0) {
            t6 = 0x1;
            t10 = (*(int *)((t8 + 0xC246FF0)));
            t6 = ((int)t6 << (int)(*(int *)((t10 + 0xC0))));
            t11 = (t11 | t6);
        }
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        if ((unsigned int)t7 >= (unsigned int)0x8) {
            break;
        }
    }
    t18 = t7;
    t19 = t8;
    t20 = 0x8;
    t21 = t10;
    t22 = 0x0;
    t23 = t11;
    t24 = t2;
    for (;;) {
        if ((*(int *)(((t22 << 2) + 0xC247030))) == 0) {
            t18 = 0xC0B2C7E;
            t19 = 0x474;
            t20 = (*(int *)0xC23ECE4);
            t27 = FUN_0c0e19aa(t18, t19, t20);
            t24 = t27;
            t18 = t27;
            FUN_0c0e19d0(t18);
            *(unsigned int *)((t24 + 0xBC)) = t22;
            if ((t23 & 0x1) != 0) {
                *(unsigned int *)((t24 + 0xC0)) = 0x4;
                t23 = (t23 | 0x10);
            } else {
                if ((0x10 & t23) != 0) {
                    *(unsigned int *)((t24 + 0xC0)) = 0x2;
                    t23 = (t23 | 0x4);
                } else {
                    t23 = (t23 | 0x1);
                    *(unsigned int *)((t24 + 0xC0)) = 0x0;
                }
            }
            t20 = 0x0;
            t19 = (*(int *)((t24 + 0xC0)));
            t18 = (*(int *)0xC23ED50);
            FUN_0c0c4464(t18, t19, t20);
            t18 = t24;
            FUN_0c0b2a28(t18);
            *(unsigned int *)((t24 + 0x288)) = 0x0;
        } else {
            t43 = t18;
            t44 = t19;
            t45 = t20;
            t46 = t21;
        }
        t18 = t43;
        t19 = t44;
        t20 = t45;
        t21 = t46;
        t22 = (t22 + 0x1);
        if ((int)t22 >= (int)0x2) {
            break;
        }
    }
    t49 = FUN_0c0e19aa(0xC0B2C7E, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t49);
    *(unsigned int *)((t49 + 0xBC)) = 0x2;
    if ((0x1 & t23) == 0) {
        *(unsigned int *)((t49 + 0xC0)) = 0x0;
    } else {
        if ((t23 & 0x10) == 0) {
            *(unsigned int *)((t49 + 0xC0)) = 0x4;
        } else {
            *(unsigned int *)((t49 + 0xC0)) = 0x2;
        }
    }
    FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)((t49 + 0xC0))), 0x0);
    FUN_0c0b2a28(t49);
    *(unsigned int *)((t49 + 0x288)) = 0x0;
    return 0x288;
}
