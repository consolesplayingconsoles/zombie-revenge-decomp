/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c070114(int, int);
int FUN_0c0da2e0(void);
int _modls(void);
void FUN_0c070258(int a4, int a5, int a6);
int kmiGetDisplayData(int a4, int a5, int a6);
int FUN_0c039354(int a4);
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o580_int { char p[0x580]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };





int kmiGetDisplayData(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t10;
    int t73;
    int t67;
    int t46;
    int t57;
    int t50;
    int t83;
    int t7;
    int t80;
    int t31;
    int t62;
    int stk[8];

    t0 = (((struct o4_int *)0xC237510)->v);
    *(unsigned int *)((((int)stk + 4) + 0x0)) = ((((struct o0_int *)0xC237510)->v));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC237510)->v);
    *(unsigned int *)((((int)stk + 4) + 0x8)) = ((((struct o8_int *)0xC237510)->v));
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    t4 = (((struct o14_int *)0xC237510)->v);
    *(unsigned int *)((((int)stk + 4) + 0x10)) = ((((struct o10_int *)0xC237510)->v));
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t4;
    t10 = 0x280;
    if ((((((struct o0_int *)0xC952318)->v)) != 1) && (t7 = (((struct o4_int *)0xC952318)->v), (t7 & 16) == 0)) {
        t10 = 0x140;
    }
    if (a5 == 1) {
        *(unsigned int *)0xC9525C4 = ((((*(int *)0xC9525C4) & 0xFFA0FFFF) | (a5 << 22)) | ((((unsigned int)((unsigned int)((unsigned int)((a6 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1) & 0x1F) << 16));
        t80 = ((a6 + 0x1F) & 0xFFFFFFE0);
    } else {
        t73 = 0x1E0;
        if (((((struct o0_int *)0xC952318)->v)) == 1) {
        } else {
            t67 = 0xF0;
            if (((((((struct o4_int *)0xC952318)->v)) & 0x1) != 1) && ((t31 = (((struct o4_int *)0xC952318)->v), (t31 & 0x2C) == 32) && (0x1 != 0))) {
            } else {
                if ((((((struct o4_int *)0xC952318)->v)) & 32) != 0) {
                    t46 = 0x1E0;
                    if ((((((struct o4_int *)0xC952318)->v)) & 0x42) == 66) {
                        t46 = (*(int *)(((((((struct o14_int *)0xC952318)->v)) << 2) + 0xC9527D4)));
                    }
                    t62 = t46;
                } else {
                    t57 = 0xF0;
                    if ((((((struct o4_int *)0xC952318)->v)) & 0x62) == 66) {
                        t50 = *(int *)(((((((struct o14_int *)0xC952318)->v)) << 2) + 0xC9527D4));
                        t57 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                    }
                    t62 = t57;
                }
                t67 = t62;
            }
            t73 = t67;
        }
        t80 = t73;
    }
    (((struct o0_uint *)0xC952934)->v) = t10;
    (((struct o4_uint *)0xC952934)->v) = t80;
    t83 = a4;
    if (a4 != 0xFF) {
    } else {
        t83 = ((((struct o8_int *)0xC952318)->v));
    }
    (((struct o8_uint *)0xC952934)->v) = ((unsigned int)((unsigned int)(*(int *)((((int)stk + 4) + (t83 << 2)))) >> 2) >> 1);
    (((struct o18_uint *)0xC952934)->v) = ((((((struct o0_int *)0xC952934)->v)) * ((((struct o4_int *)0xC952934)->v))) * ((((struct o8_int *)0xC952934)->v)));
    return 0x60;
}

int FUN_0c039354(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t26;
    int t16;
    int stk[10];

    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)(((((((struct oC0_int *)(a4))->v)) << 2) + 0xC195AFC));
    t3 = (((int)stk + 4) + 0x4);
    for (;;) {
        *(unsigned int *)((t3 + 0x0)) = 0xFFFFFFFF;
        t3 = (t3 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)(((int)stk + 4) + 0x14)) {
            break;
        }
    }
    t4 = 0x1;
    t5 = 0x0;
    for (;;) {
        t8 = *(int *)((((((((struct o580_int *)(a4))->v)) << 2) + (0x5D0 + a4)) + 0x0));
        if ((unsigned char)(*(signed char *)((t4 + (((((((struct o580_int *)(a4))->v)) * 0x19) + (t2 + (t1 * 0x28A))) + ((t8 << 2) + t8))))) != 0) {
            *(unsigned int *)((((int)stk + 4) + (t5 << 2))) = t4;
            t5 = (t5 + 0x1);
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x5) {
            break;
        }
    }
    t26 = 0x0;
    if ((int)(t5 - 1) < 0) {
    } else {
        if ((int)(t5 - 1) >= (int)0x1) {
            t16 = ((FUN_0c0da2e0() % 0));
        } else {
            t16 = (t5 - 1);
        }
        *(unsigned int *)((((((((struct o580_int *)(a4))->v)) << 2) + (0x5D0 + a4)) + 0x0)) = (*(int *)((((int)stk + 4) + (t16 << 2))));
        t26 = 0x1;
    }
    return t26;
}
