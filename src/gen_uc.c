/* Straight-line functions with calls and guards (batch gen_uc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


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
    register int t34;
    register int t36;
    register int t37;
    register int t49;
    register int t55;
    register int t17;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = (((struct o4_int *)0xC2364CC)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = ((((struct o0_int *)0xC2364CC)->v));
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC2364CC)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = ((((struct o8_int *)0xC2364CC)->v));
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t5 = (((struct o14_int *)0xC2364CC)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = ((((struct o10_int *)0xC2364CC)->v));
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
    (((struct o8_uint *)0xC95231C)->v) = t11;
    (((struct oC_uint *)0xC95231C)->v) = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if (((((struct o0_int *)0xC95231C)->v)) == 1) {
    } else {
        t32 = 0x0;
        if (((((((struct o0_int *)0xC95231C)->v)) & 0x1) != 1) && ((t17 = (((struct o0_int *)0xC95231C)->v), (t17 & 44) != 0) && (0x1 != 0))) {
            t32 = 0x1;
        }
        t30 = 0x140;
        if ((((((struct o0_int *)0xC95231C)->v)) & 16) != 0) {
            t30 = 0x280;
        }
        t31 = 0xF0;
        if ((((((struct o0_int *)0xC95231C)->v)) & 32) != 0) {
            t31 = 0x1E0;
        }
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
    kmiFBControl(t30, t31, ((((struct o4_int *)0xC95231C)->v)), t32);
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC9525A4)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC952600));
    kmiWriteRegister(0x44, ((((struct o20_int *)0xC9525A4)->v)));
    kmiResetBoard();
    *(int *)((int)stk + 8) = 0x0;
    t49 = ((((struct o0_int *)0xC952364)->v));
    *(int *)((int)stk + 4) = t49;
    kmiSetTAEnvironment(((unsigned int)((((struct o4_int *)0xC952364)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC952364)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC952364)->v)) >> 7), ((unsigned int)((((struct o10_int *)0xC952364)->v)) >> 7), t49, 0x0, t37, t36);
    (((struct o0_uint *)0xC9525A4)->v) = 0x1;
    t55 = *(int *)0xC95266C;
    for (;;) {
        if (t55 != (*(int *)0xC95266C)) {
            break;
        }
    }
    return 0x0;
}
