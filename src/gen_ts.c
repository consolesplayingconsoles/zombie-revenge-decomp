/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiAddSysConfigFlag(int);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetSysConfigFlag(void);
int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8);

int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8)
{
    int stk[648];
    register int t0;
    register int t3;
    register int t4;
    register int t24;
    register int t26;
    register int t60;
    register int t33;
    register int t36;
    register int t72;

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)0xC2374FC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(int *)0xC2374F8);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t0;
    t3 = *(int *)0xC237504;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(int *)0xC237500);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t3;
    t4 = *(int *)0xC23750C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = (*(int *)0xC237508);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t4;
    *(unsigned int *)((((((*(int *)0xC239A94) << 2) << 2) + 0xC952908) + 0x0)) = a4;
    *(unsigned int *)((((((*(int *)0xC239A94) << 2) << 2) + 0xC952908) + 0x4)) = a5;
    *(unsigned int *)((((((*(int *)0xC239A94) << 2) << 2) + 0xC952908) + 0x8)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)0xC952904 = a7;
    *(unsigned int *)((((((*(int *)0xC239A94) << 2) << 2) + 0xC952908) + 0xC)) = a8;
    *(unsigned int *)0xC239A94 = (((*(int *)0xC239A94) + 0x1) & 0x1);
    *(unsigned int *)0xC952330 = a7;
    if ((*(int *)0xC952940) != 0) {
        kmiGetDisplayData(0xFF, a7, (*(int *)(((int)stk + 4))));
    }
    t24 = kmiGetSysConfigFlag();
    if (t24 == 0x80000000) {
        t26 = kmiFBalloc((*(int *)0xC95294C), a4);
        t60 = t26;
        if (t26 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((((*(int *)0xC952320) << 2) + (((int)stk + 4) + 0x4)) + 0x0)));
            *(unsigned int *)((a4 + 0x8)) = (*(int *)0xC952320);
            *(unsigned int *)((a4 + 0xC)) = (*(int *)0xC952934);
            *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC952938);
            if (a7 == 1) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            }
            if (a8 == 1) {
                t33 = (((int)stk + 4) + 0x1C);
                for (;;) {
                    if ((unsigned int)t33 >= (unsigned int)((((int)stk + 4) + 0x1C) + 0xA00)) {
                        break;
                    }
                    *(unsigned int *)((t33 + 0x0)) = 0x0;
                    t33 = (t33 + 0x4);
                }
                if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x14)))) {
                    t36 = 0x0;
                    for (;;) {
                        kmiCopyToPVRMemory(((*(int *)((a4 + 0x1C))) + t36), (((int)stk + 4) + 0x1C), 0xA00);
                        t36 = (t36 + 0xA00);
                        if ((unsigned int)t36 >= (unsigned int)(*(int *)((a4 + 0x14)))) {
                            break;
                        }
                    }
                }
            }
            t60 = 0x0;
        }
        t72 = t60;
    } else {
        kmiAddSysConfigFlag(0x200);
        t72 = 0x0;
    }
    return t72;
}
