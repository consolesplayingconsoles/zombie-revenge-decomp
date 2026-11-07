/* Straight-line functions with calls and guards (batch gen_uc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);

int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t11;
    register int t30;
    register int t31;
    register int t32;
    register int t20;
    register int t22;
    register int t25;
    register int t34;
    register int t36;
    register int t37;
    register int t49;
    register int t55;
    register int t17;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = *(int *)0xC2364D0;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = (*(int *)0xC2364CC);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t3 = *(int *)0xC2364D8;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = (*(int *)0xC2364D4);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t5 = *(int *)0xC2364E0;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = (*(int *)0xC2364DC);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t8 = 0x0;
    if ((*(int *)(((int)stk + 24))) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((*(int *)(((int)stk + 20))) != 0) {
        t11 = 0x1;
    }
    *(unsigned int *)0xC952324 = t11;
    *(unsigned int *)0xC952328 = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if ((*(int *)0xC95231C) == 1) {
    } else {
        t20 = 0x0;
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t17 = *(int *)0xC95231C, (t17 & 44) != 0) && (0x1 != 0))) {
            t20 = 0x1;
        }
        t22 = 0x140;
        if (((*(int *)0xC95231C) & 16) != 0) {
            t22 = 0x280;
        }
        t25 = 0xF0;
        if (((*(int *)0xC95231C) & 32) != 0) {
            t25 = 0x1E0;
        }
        t30 = t22;
        t31 = t25;
        t32 = t20;
    }
    t34 = *(int *)0xC95266C;
    for (;;) {
        if (t34 != (*(int *)0xC95266C)) {
            break;
        }
    }
    t36 = t8;
    *(int *)((int)stk + 16) = t36;
    t37 = t11;
    *(int *)((int)stk + 12) = t37;
    kmiFBControl(t30, t31, (*(int *)0xC952320), t32);
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, ((*(int *)0xC9525C4) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC952600));
    kmiWriteRegister(0x44, (*(int *)0xC9525C4));
    kmiResetBoard();
    *(int *)((int)stk + 8) = 0x0;
    t49 = (*(int *)0xC952364);
    *(int *)((int)stk + 4) = t49;
    kmiSetTAEnvironment(((unsigned int)(*(int *)0xC952368) >> 7), ((unsigned int)(*(int *)0xC95236C) >> 7), ((unsigned int)(*(int *)0xC952370) >> 7), ((unsigned int)(*(int *)0xC952374) >> 7), t49, 0x0, t37, t36);
    *(unsigned int *)0xC9525A4 = 0x1;
    t55 = *(int *)0xC95266C;
    for (;;) {
        if (t55 != (*(int *)0xC95266C)) {
            break;
        }
    }
    return 0x0;
}
