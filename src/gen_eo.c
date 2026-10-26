/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0e19f2(int);
void FUN_0c08ea54(int a4);

void FUN_0c08ea54(int a4)
{
    int t0;
    int t12;
    int t5;
    int t14;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    t12 = a4;
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x30)) = ((((FUN_0c0da2e0()) & 0x3) << 1) + 0x1E);
        *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | (*(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC10ABE0))));
        t5 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t5 + 0x1);
        if ((unsigned int)(t5 + 0x1) > (unsigned int)0x3) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
        }
        t12 = 0xC247D04;
    }
    t14 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t14 - 1);
    if ((t14 - 1) == 0) {
        FUN_0c0e19f2(t12);
    return;
    }
}
