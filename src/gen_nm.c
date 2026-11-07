/* Straight-line functions with calls and guards (batch gen_nm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033530(int, int);
int FUN_0c036d86(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037acc(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[26];
    register int t7;
    register int t9;
    register int t12;
    register int t14;
    register int t33;
    register int t36;
    register int t40;
    register int t43;
    register int t45;
    register int t48;
    register int t50;
    register int t53;
    register int t57;
    register int t60;
    register int t62;
    register int t66;
    register int t68;
    register float u87;
    register float u88;
    register float u89;
    register float u90;
    register float u92;
    register int t93;
    register float u94;
    register float u95;
    register float u97;
    register float u98;
    register int t107;
    int t1;
    register int t112;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    if (((*(int *)((a4 + 0x48C))) == 21) && (t1 = *(int *)(((int)stk + 8)), t1 == 1)) {
        *(int *)((int)stk + 4) = ((*(short *)((a4 + 0x6E))));
        FUN_0c0da2e0();
        FUN_0c0da2e0();
        t112 = (FUN_0c033530(a4, a8));
    } else {
        t7 = FUN_0c0e1830(0xC03840E, 0x41C);
        FUN_0c0e19d0(t7);
        t9 = *(int *)(((int)stk + 16));
        t12 = *(int *)(((int)stk + 12));
        t14 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195BE0));
        *(unsigned int *)((t7 + 0x21C)) = a10;
        *(unsigned int *)((t7 + 0x1DC)) = ((*(short *)((a4 + 0x6E))) - 32768);
        *(unsigned int *)((t7 + 0x1CC)) = a8;
        *(unsigned int *)((t7 + 0x414)) = (*(int *)((a4 + 0x5C8)));
        *(float *)((t7 + 0x3EC)) = 0.0272199996f;
        *(unsigned int *)((t7 + 0x238)) = (*(short *)((a9 + 0x0)));
        *(unsigned int *)((t7 + 0x23C)) = (*(short *)(((a9 + 0x2) + 0x0)));
        *(unsigned int *)((t7 + 0x240)) = (*(short *)((((a9 + 0x2) + 0x2) + 0x0)));
        *(float *)((t7 + 0x268)) = 0.0f;
        *(float *)((t7 + 0x26C)) = 0.0f;
        *(float *)((t7 + 0x270)) = 0.0f;
        *(float *)((t7 + 0x274)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t14) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x278)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t14) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x27C)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t14) + 0x8))) * (*(float *)((a4 + 0x27C))));
        *(float *)((t7 + 0x280)) = ((*(float *)(((t14 + (((t12 << 1) + t12) << 2)) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x284)) = ((*(float *)(((t14 + (((t12 << 1) + t12) << 2)) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x288)) = ((*(float *)(((t14 + (((t12 << 1) + t12) << 2)) + 0x8))) * (*(float *)((a4 + 0x27C))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC0F5630); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x28C + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x298 + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x2A4 + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        *(unsigned int *)((t7 + 0x400)) = (*(int *)(((int)stk + 8)));
        t33 = *(int *)(((int)stk + 8));
        if ((unsigned int)t33 >= (unsigned int)0x10) {
        } else {
            switch ((t33 << 1)) {
                case 0:
                case 4:
                {
                }
                    break;
                case 2:
                {
                    t36 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t36;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t36) - 8192);
                    *(int *)((int)stk + 4) = (0x3E8 + t7);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    t40 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t40 << 1) + t40) << 2) << 2) << 2) + 0xC23F268) + 0xC)); }
                    *(float *)((t7 + 0x3F0)) = 1.19999993f;
                }
                    break;
                case 6:
                case 8:
                case 10:
                {
                    t43 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t43;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t43) + 0x2000);
                    t45 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t45 << 1) + t45) << 2) << 2) << 2) + 0xC23F268) + 0x24)); }
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 12:
                case 14:
                case 16:
                {
                    t48 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t48;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t48) + 0xA000);
                    t50 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t50 << 1) + t50) << 2) << 2) << 2) + 0xC23F268) + 0x3C)); }
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 18:
                case 20:
                case 26:
                {
                    t53 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t53;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t53) - 8192);
                    *(int *)((int)stk + 4) = (0x3E8 + t7);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    t57 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t57 << 1) + t57) << 2) << 2) << 2) + 0xC23F268) + 0x48)); }
                    *(float *)((t7 + 0x3F0)) = (1.0f + 1.0f);
                }
                    break;
                case 22:
                case 24:
                {
                    t60 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t60;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t60) + 0x2000);
                    t62 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t62 << 1) + t62) << 2) << 2) << 2) + 0xC23F268) + 0x48)); }
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
                default:
                {
                    t66 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t66;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t66) + 0xA000);
                    t68 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t68 << 1) + t68) << 2) << 2) << 2) + 0xC23F268) + 0x60)); }
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
            }
        }
        FUN_0c0376f4(t7);
        FUN_0c037954(t7);
        *(unsigned int *)((t7 + 0x3DC)) = 0xFFFFFFFF;
        FUN_0c037acc(t7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x0)) = 0.0f;
        u87 = *(float *)0xC038C38;
        u88 = *(float *)0xC038C3C;
        u89 = *(float *)((t7 + 0x3F0));
        u90 = *(float *)0xC038C40;
        *(float *)(((int)stk + 4)) = (u90 / (u89 / (1.0f + 1.0f)));
        u92 = u87;
        u92 = u92 + u88 * (float)((FUN_0c0da2e0()) & 0x7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x4)) = ((u90 / (u89 / (1.0f + 1.0f))) * u92);
        t93 = *(int *)((t7 + 0x1CC));
        u94 = *(float *)0xC038C44;
        u95 = *(float *)((t7 + 0x3F0));
        *(float *)(((int)stk + 4)) = (((float)t93 * u94) / (u95 / (1.0f + 1.0f)));
        u97 = u87;
        u97 = u97 + u88 * (float)((FUN_0c0da2e0()) & 0x7);
        u98 = (((float)t93 * u94) / (u95 / (1.0f + 1.0f)));
        *(float *)(((((int)stk + 8) + 0x18) + 0x8)) = (u98 * u97);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = 0x0;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = ((*(int *)((t7 + 0x3E8))) + 0x8000);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = 0x0;
        FUN_0c0a6610((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC), (0x220 + t7));
        *(unsigned int *)(((0x22C + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x900);
        *(unsigned int *)((t7 + 0x230)) = 0x0;
        *(unsigned int *)(((0x234 + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x400);
        *(unsigned int *)((t7 + 0x410)) = 0x0;
        t107 = 0x380;
        if ((*(int *)((a4 + 0x380))) != 0) {
            t107 = (FUN_0c036d86(t7, (*(int *)(((*(int *)((a4 + 0x380))) + 0x0)))));
        }
        t112 = t107;
    }
    return t112;
}
