/* Straight-line functions with calls and guards (batch gen_afh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0a0548(int a4);

int FUN_0c0a0548(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC23ED50;
    if ((t0 != 0) && ((t0 != 98) && ((t0 != 99) && (t0 != 100)))) {
        return t0;
    }
    t0 = FUN_0c0e19aa(0xC0A009C, 0x2868, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = a4;
    *(unsigned int *)((t0 + 0x40)) = ((int)0x2 << (int)(*(int *)((a4 + 0x2E8))));
    *(unsigned int *)((t0 + 0x48)) = (*(int *)((a4 + 0x498)));
    nlPushMatrix(0x0);
    if ((unsigned int)0xC201104 < (unsigned int)0xC20110C) {
        t1 = (0x2850 + t0);
        t0 = 0xC201104;
        for (;;) {
            if ((*(int *)((a4 + 0x3E4))) != 0) {
                t2 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                FUN_0c0dbda0(((((t2 << 2) << 2) << 2) + (*(int *)((a4 + 0x3E4)))));
                FUN_0c0db840(t1);
                t1 = (t1 + 0xC);
                if ((unsigned int)t0 >= (unsigned int)0xC20110C) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    nlPopMatrix(0x1);
    return FUN_0c0cbafc(0x295, 0x2, 0xFCC07000, 0x84802000);
}
