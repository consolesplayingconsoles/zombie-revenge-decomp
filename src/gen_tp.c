/* Straight-line functions with calls and guards (batch gen_tp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
float FUN_0c0c8138(int a4, float f4, float f5);

float FUN_0c0c8138(int a4, float f4, float f5)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t2;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t20;
    register int t22;
    register int t23;
    register float u27;
    register float u28;
    register float u35;
    register float u39;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register float u46;
    register int t48;
    register float u61;
    register float u63;
    register int t19;
    register int t21;
    register float u24;
    register float u25;
    register float u26;

    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t0 = (a4 + 0x30);
    t1 = 0x0;
    t2 = 0xC1E9B8C;
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = t0;
        t23 = *(int *)((((0x98 + a4) + t1) + 0x0));
        *(float *)(((int)stk + 24)) = (*(float *)((t2 + 0x0)));
        u5 = *(float *)((t2 + 0x4));
        *(unsigned int *)(((int)stk + 28)) = (*(int *)((t2 + 0x18)));
        u7 = *(float *)((t2 + 0x8));
        u8 = *(float *)((t2 + 0x14));
        u9 = *(float *)((t2 + 0x10));
        u10 = *(float *)((t2 + 0xC));
        u11 = (u7 * u8);
        u12 = (u9 * u10);
        t13 = *(int *)((t2 + 0x1C));
        *(float *)(((int)stk + 12)) = ((-u10) / (u11 - u12));
        *(float *)(((int)stk + 16)) = (u7 / (u11 - u12));
        *(int *)((int)stk + 4) = ((0xF4 + a4) + t1);
        t16 = FUN_0c0e262a((((*(int *)(((int)stk + 28))) * t13) << 1));
        *(unsigned int *)((((0xF4 + a4) + t1) + 0x0)) = t16;
        t17 = t16;
        t18 = 0x0;
        t20 = t19;
        t22 = t21;
        u27 = f4;
        u28 = f5;
        for (;;) {
            if ((int)(short)t18 >= (int)(*(int *)(((*(int *)(((int)stk + 20))) + 0x1C)))) {
                break;
            }
            t17 = 0x10;
            u27 = (*(float *)((t23 + 0x0)));
            u26 = (*(float *)((((int)stk + 8) + t17)));
            t17 = 0x8;
            u28 = (*(float *)((t23 + t17)));
            t17 = 0x8;
            u27 = (u27 - u26);
            u26 = ((-u9) / (u11 - u12));
            u28 = (u28 - u5);
            t23 = (t23 + 0x14);
            u24 = u27;
            u26 = (u26 * u28);
            u35 = u26;
            u35 = u35 + u24 * ((u8 / (u11 - u12)));
            u26 = u35;
            u25 = u26;
            u25 = (u25 + 0.5f);
            u26 = (*(float *)((((int)stk + 8) + t17)));
            t17 = 0x4;
            u26 = (u26 * u28);
            t22 = (int)u25;
            u25 = (*(float *)((((int)stk + 8) + t17)));
            u39 = u26;
            u39 = u39 + u24 * u25;
            u26 = u39;
            u26 = (u26 + 0.5f);
            t17 = (t13 * t22);
            t20 = (int)u26;
            t17 = (t17 + t20);
            t17 = (t17 << 1);
            *(unsigned short *)((t16 + t17)) = t18;
            t18 = (t18 + 0x1);
        }
        t42 = *(short *)(((int)stk + 8));
        t2 = (t2 + 0x20);
        *(unsigned short *)(((int)stk + 8)) = (t42 + 0x1);
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x20);
        if ((int)(short)(t42 + 0x1) >= (int)0x3) {
            break;
        }
    }
    t43 = (0x100 + a4);
    t44 = 0xC1E9BEC;
    t45 = 0x0;
    u46 = u24;
    for (;;) {
        t48 = *(int *)((t44 + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t43) = *(struct mv3 *)((t44 + 0x4)); }
        *(unsigned int *)((t43 + 0xC)) = ((((t48 << 2) << 2) << 1) + 0xC1E9B8C);
        *(unsigned int *)((t43 + 0x10)) = (*(int *)(((((*(int *)((t44 + 0x0))) << 2) + (0x98 + a4)) + 0x0)));
        *(unsigned int *)((t43 + 0x14)) = (*(int *)(((((*(int *)((t44 + 0x0))) << 2) + (0xF4 + a4)) + 0x0)));
        *(float *)((t43 + 0x18)) = ((*(float *)((t44 + 0x4))) + (*(float *)((((((t48 << 2) << 2) << 1) + 0xC1E9B8C) + 0x0))));
        if ((short)t45 == 4) {
            u46 = (*(float *)((((((t48 << 2) << 2) << 1) + 0xC1E9B8C) + 0x8)));
            u61 = (*(float *)((t43 + 0x18)));
            u61 = u61 + u46 * ((float)((*(int *)((((((t48 << 2) << 2) << 1) + 0xC1E9B8C) + 0x18))) - 1));
            u46 = (*(float *)((((((t48 << 2) << 2) << 1) + 0xC1E9B8C) + 0x10)));
            u63 = u61;
            u63 = u63 + u46 * ((float)((*(int *)((((((t48 << 2) << 2) << 1) + 0xC1E9B8C) + 0x1C))) - 1));
            *(float *)((t43 + 0x34)) = u63;
        }
        t45 = (t45 + 0x1);
        t43 = (t43 + 0x1C);
        t44 = (t44 + 0x10);
        if ((int)(short)t45 >= (int)0x5) {
            break;
        }
    }
    return u46;
}
