/* Straight-line functions with calls and guards (batch gen_aab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db0a0(int, int);
int FUN_0c0e1e7a(int, int, int);
int nlPrintf(int, ...);
void FUN_0c0e1fa0(int a4, int a5, int a6);

void FUN_0c0e1fa0(int a4, int a5, int a6)
{
    register int t0;

    if ((*(int *)((a4 + 0x1C))) != 0) {
        if ((*(int *)((a5 + 0x1C))) != 0) {
            FUN_0c0db0a0(0xA, 0x11);
            nlPrintf(0xC1EA908);
            nlPrintf(0xC1EA950, a4);
            nlPrintf(0xC1EA960, a5);
            nlPrintf(0xC1EA890, ((*(int *)0xC94C790)));
            nlPrintf(0xC1EA8A8, ((*(int *)(((*(int *)0xC94C790) + 0x0)))));
            for (;;) {
            }
        }
        if ((*(int *)((a4 + 0x1C))) != 0) {
            FUN_0c0e1e7a(a5, (*(int *)((a4 + 0x1C))), a6);
    return;
        }
        if ((*(int *)((a5 + 0x1C))) != 0) {
            FUN_0c0e1e7a(a4, (*(int *)((a5 + 0x1C))), a6);
    return;
        }
        t0 = *(int *)((a5 + 0x28));
        *(unsigned int *)((a5 + 0x28)) = (*(int *)((a4 + 0x28)));
        *(unsigned int *)(((*(int *)((a4 + 0x28))) + 0x24)) = a5;
        *(unsigned int *)((a4 + 0x28)) = t0;
        *(unsigned int *)((t0 + 0x24)) = a4;
        return;
    }
    if ((*(int *)((a5 + 0x1C))) != 0) {
        FUN_0c0e1e7a(a4, (*(int *)((a5 + 0x1C))), a6);
    return;
    }
    t0 = *(int *)((a5 + 0x28));
    *(unsigned int *)((a5 + 0x28)) = (*(int *)((a4 + 0x28)));
    *(unsigned int *)(((*(int *)((a4 + 0x28))) + 0x24)) = a5;
    *(unsigned int *)((a4 + 0x28)) = t0;
    *(unsigned int *)((t0 + 0x24)) = a4;
}
