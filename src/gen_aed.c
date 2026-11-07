/* Straight-line functions with calls and guards (batch gen_aed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056234(int, int);
void FUN_0c056118(int a4, int a5, int a6, int a7);

void FUN_0c056118(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = *(int *)((((0x34C + a4) + ((a7 & 0x1) << 2)) + 0x0));
    t2 = *(int *)((((t0 << 2) + 0xC2475D4) + 0x0));
    if ((int)(*(int *)((((0x344 + a4) + (a7 << 2)) + 0x0))) > (int)0x3) {
        if ((*(int *)((((a7 << 2) + (0x344 + a4)) + 0x0))) != 0) {
            *(unsigned int *)(((0xC247604 + (t0 << 2)) + 0x0)) = a5;
            if (a5 != 3) {
                if ((a5 == 7) || (a5 == 6)) {
                    *(unsigned int *)((t2 + 0x25C)) = 0x0;
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(a6); }
                *(unsigned int *)((t2 + 0x224)) = ((*(int *)((t2 + 0x224))) - 1);
                *(unsigned int *)((t2 + 0x23C)) = 0x0;
                FUN_0c056234(a4, t2);
            }
            *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) & (~((int)0x1 << (int)(*(int *)((((0x344 + a4) + ((a7 & 0x1) << 2)) + 0x0))))));
            *(unsigned int *)((a4 + 0x334)) = 0x0;
            *(unsigned int *)((((0x344 + a4) + ((a7 & 0x1) << 2)) + 0x0)) = 0x0;
            *(unsigned int *)((((0x34C + a4) + ((a7 & 0x1) << 2)) + 0x0)) = 0x0;
            *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) & (~(*(int *)(((0x22C + t2) + 0x0)))));
            if (a7 != 0) {
                *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x344)));
                if ((*(int *)((a4 + 0x330))) == 3) {
                    *(unsigned int *)((a4 + 0x330)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x330)) = 0x0;
                }
            } else {
                *(unsigned int *)((a4 + 0x340)) = 0x0;
                *(unsigned int *)((a4 + 0x330)) = 0x0;
            }
        }
    }
}
