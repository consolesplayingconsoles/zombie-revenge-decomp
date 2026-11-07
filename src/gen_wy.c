/* Straight-line functions with calls and guards (batch gen_wy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);

int FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register int t85;
    register float u5;
    register float u6;
    register int t7;
    register float u8;
    register int t9;
    register float u10;
    register float u11;
    register int t12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u22;
    register float u25;
    register int t73;
    register int t60;
    register int t29;
    register int t27;
    register int t35;
    register int t33;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t47;

    t0 = *(int *)0xC31FD34;
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = 0x0;
    t2 = (t0 + 0x100);
    for (;;) {
        if (!((*(float *)((t2 + 0x18))) > (*(float *)((a7 + 0x0))))) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1C);
            if ((int)t1 >= (int)0x6) {
                break;
            }
            continue;
        }
        break;
    }
    t85 = 0xFFFFFFFF;
    if (((int)(t1 - 1) >= 0) && ((int)(t1 - 1) < (int)0x5)) {
        u5 = *(float *)((a7 + 0x0));
        u6 = *(float *)(((t2 - 28) + 0x0));
        t7 = *(int *)(((t2 - 28) + 0xC));
        u8 = *(float *)((t7 + 0x0));
        t9 = *(int *)((t7 + 0x1C));
        u10 = *(float *)((a7 + 0x8));
        u11 = *(float *)(((t2 - 28) + 0x8));
        t12 = *(int *)((t7 + 0x18));
        u13 = *(float *)((t7 + 0x4));
        u14 = *(float *)((t7 + 0x8));
        u15 = *(float *)((t7 + 0x14));
        u16 = *(float *)((t7 + 0x10));
        u17 = *(float *)((t7 + 0xC));
        u18 = (u14 * u15);
        u19 = (u16 * u17);
        u22 = (((u10 - u11) - u13) * ((-u16) / (u18 - u19)));
        u22 = u22 + (((u5 - u6) - u8)) * ((u15 / (u18 - u19)));
        u25 = (((u10 - u11) - u13) * (u14 / (u18 - u19)));
        u25 = u25 + (((u5 - u6) - u8)) * (((-u17) / (u18 - u19)));
        t73 = 0xFFFFFFFF;
        if (!(0.0f > u22)) {
            t60 = 0xFFFFFFFF;
            if (!(u22 > (float)(t12 - 1)) && !(0.0f > u25)) {
                if (u25 > (float)(t9 - 1)) {
                    t47 = 0xFFFFFFFF;
                } else {
                    *(float *)((a5 + 0x0)) = (u22 - (float)(int)u22);
                    *(float *)((a6 + 0x0)) = (u25 - (float)(int)u25);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((t9 * (int)u22) + (int)u25);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = ((t9 * (int)u22) + (int)u25);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = ((t9 * (int)u22) + (int)u25);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((t9 * (int)u22) + (int)u25);
                    t29 = 0xC31FD34;
                    if ((*(float *)((a5 + 0x0))) > 0.0f) {
                        t27 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (t27 + t9);
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0x4) + 0xC))) + t9);
                        t29 = (t27 + t9);
                    }
                    t35 = t29;
                    if ((*(float *)((a6 + 0x0))) > 0.0f) {
                        t33 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = (t33 + 0x1);
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0x4) + 0xC))) + 0x1);
                        t35 = (t33 + 0x1);
                    }
                    t38 = (int)u25;
                    t39 = ((t9 * (int)u22) + (int)u25);
                    t40 = t35;
                    t41 = a4;
                    t42 = (((int)stk + 4) + 0x4);
                    for (;;) {
                        if ((unsigned int)t42 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x10)) {
                            break;
                        }
                        t40 = (*(int *)((t42 + 0x0)));
                        t42 = (t42 + 0x4);
                        t38 = (*(int *)(((t2 - 28) + 0x14)));
                        t40 = (t40 << 1);
                        t39 = (*(short *)((t40 + t38)));
                        *(unsigned short *)((t41 + 0x0)) = t39;
                        t41 = (t41 + 0x2);
                    }
                    t47 = (t1 - 1);
                }
                t60 = t47;
            }
            t73 = t60;
        }
        t85 = t73;
    }
    return t85;
}
