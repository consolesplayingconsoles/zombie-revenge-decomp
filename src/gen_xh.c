/* Straight-line functions with calls and guards (batch gen_xh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4d50(void);

int FUN_0c0c4d50(void)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t22;
    register int t23;
    register int t24;
    register int t34;
    register int t26;
    register int t27;
    register int t28;
    register int t39;
    register int t35;
    register int t36;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t48;

    t0 = *(int *)0xC1E80F0;
    t1 = *(int *)0xC1E80F8;
    t2 = (t0 + t1);
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0xC209E3C;
    t6 = 0x0;
    t7 = 0xC209E3C;
    t8 = 0x0;
    t9 = 0xC209E3C;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x2)));
        *(unsigned short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x2)) = t3;
        t3 = (t3 + (*(int *)(((int)stk + 4))));
        *(unsigned int *)(((int)stk + 4)) = (*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x0)));
        *(unsigned short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x0)) = t4;
        t4 = (t4 + (*(int *)(((int)stk + 4))));
        if ((*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x6))) != 0) {
            *(unsigned short *)((t7 + 0x6)) = t6;
            t6 = (t6 + (*(int *)(((int)stk + 4))));
        } else {
            *(unsigned short *)((t5 + 0x6)) = t6;
        }
        t22 = *(short *)((t9 + 0x4));
        t8 = (t8 + 0x1);
        *(unsigned short *)((t9 + 0x4)) = t2;
        t5 = (t5 + 0x8);
        t23 = t2;
        t2 = (t2 + t22);
        t9 = (t9 + 0x8);
        t7 = (t7 + 0x8);
        if ((int)t8 >= (int)0x5D) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = 0xC20A130;
    *(unsigned int *)(((int)stk + 4)) = (short)(t2 - 1);
    t24 = *(int *)(((int)stk + 8));
    t34 = ((short)(t2 - 1) + 0xC20A130);
    if ((int)(*(int *)(((int)stk + 4))) >= 0) {
        t26 = (t2 - 1);
        t27 = ((short)(t2 - 1) + 0xC20A130);
        t28 = ((((short)(t2 - 1) + (short)(t0 + t1)) + t24) + 0x1);
        for (;;) {
            t26 = (t26 - 1);
            *(unsigned char *)(((t28 - 0x1) + 0x0)) = (*(signed char *)((t27 + 0x0)));
            t28 = (t28 - 0x1);
            t27 = (t27 - 1);
            if ((int)(short)t26 < 0) {
                break;
            }
        }
        t34 = t27;
    }
    t39 = ((t0 + t1) - 1);
    if ((int)(short)((t0 + t1) - 1) >= 0) {
        t35 = (((short)((t0 + t1) - 1) + 0xC20A130) + 0x1);
        t36 = ((t0 + t1) - 1);
        for (;;) {
            t36 = (t36 - 1);
            *(unsigned char *)(((t35 - 0x1) + 0x0)) = 0x0;
            t35 = (t35 - 0x1);
            if ((int)(short)t36 < 0) {
                break;
            }
        }
        t39 = t36;
    }
    t40 = t23;
    t41 = (short)((t0 + t1) - 1);
    t42 = 0xC11989C;
    t43 = t39;
    t44 = 0x0;
    t45 = t34;
    t46 = 0xC1127D8;
    for (;;) {
        if ((int)t44 >= (int)(*(int *)0xC204750)) {
            break;
        }
        t48 = *(short *)((t46 + 0x0));
        t46 = (t46 + 0x2);
        t45 = t48;
        t44 = (t44 + 0x1);
        t41 = (*(int *)((t42 + 0x0)));
        t45 = (unsigned short)t45;
        t43 = t45;
        t43 = (t43 << 1);
        t43 = (t43 + t45);
        t43 = (t43 << 2);
        t43 = (t43 + 0xC24FB50);
        *(unsigned int *)((t43 + 0x0)) = t41;
        *(unsigned int *)((t43 + 0x4)) = (*(int *)((t42 + 0x8)));
        t40 = (*(short *)((t42 + 0xE)));
        t42 = (t42 + 0x10);
        *(unsigned short *)((t43 + 0x8)) = t40;
    }
    return t40;
}
