/* Straight-line functions with calls and guards (batch gen_ado): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e486e(int a4, int a5);

int FUN_0c0e486e(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t3;
    register int t8;
    register int t11;
    register int t13;
    register int t16;
    register int t17;
    register int t20;
    register int t23;
    register int t29;
    register int t33;
    register int t30;
    register int t37;
    register int t44;
    register int t47;
    register int t40;

    *(unsigned short *)(((((int)stk + 4) + 0x12) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = *(short *)(((int)stk + 22));
    t3 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t3 != 1) {
        return t3;
    }
    t8 = *(short *)(((int)stk + 22));
    t11 = *(signed char *)(((unsigned char)((((t8 << 1) + t8) << 2) << 1) + 0xC94C849));
    if (t11 != 0) {
        return 0xC94C849;
    }
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 16)));
    t13 = *(short *)(((int)stk + 22));
    *(unsigned int *)(((int)stk + 4)) = (((((((t13 << 1) + t13) << 2) << 2) << 1) + 0xA0800100) + 0x20);
    *(unsigned short *)(((int)stk + 14)) = 0x0;
    t16 = t11;
    t17 = 0xA0800100;
    for (;;) {
        if ((unsigned int)(*(short *)(((int)stk + 14))) >= (unsigned int)0x10) {
            break;
        }
        t17 = (*(int *)(((int)stk + 4)));
        t17 = (t17 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t17;
        t17 = (t17 - 4);
        t20 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t20 + 0x4);
        t16 = (*(int *)((((t20 + 0x4) - 4) + 0x0)));
        *(unsigned int *)((t17 + 0x0)) = t16;
        *(unsigned short *)(((int)stk + 14)) = ((*(short *)(((int)stk + 14))) + 0x1);
    }
    t23 = *(short *)(((int)stk + 22));
    *(unsigned int *)(((unsigned char)((((t23 << 1) + t23) << 2) << 1) + 0xC94C854)) = (unsigned short)(*(short *)(((*(int *)(((int)stk + 16))) + 0x2A)));
    t29 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x8));
    *(unsigned short *)(((int)stk + 12)) = (unsigned char)t29;
    if ((short)(unsigned char)t29 != 0) {
        if ((short)(unsigned char)t29 != 1) {
            t33 = (short)(unsigned char)t29;
            if (((short)(unsigned char)t29 == 2) || ((short)(unsigned char)t29 == 3)) {
                t30 = *(short *)(((int)stk + 22));
                *(unsigned short *)(((unsigned char)((((t30 << 1) + t30) << 2) << 1) + 0xC94C84A)) = 0x4;
                t33 = 0xC94C84A;
            }
            t40 = t33;
        } else {
            t37 = *(short *)(((int)stk + 22));
            *(unsigned short *)(((unsigned char)((((t37 << 1) + t37) << 2) << 1) + 0xC94C84A)) = 0x8;
            t40 = 0xC94C84A;
        }
        t47 = t40;
    } else {
        t44 = *(short *)(((int)stk + 22));
        *(unsigned short *)(((unsigned char)((((t44 << 1) + t44) << 2) << 1) + 0xC94C84A)) = 0x10;
        t47 = 0xC94C84A;
    }
    return t47;
}
