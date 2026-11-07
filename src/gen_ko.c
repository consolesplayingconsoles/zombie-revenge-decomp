/* Straight-line functions with calls and guards (batch gen_ko): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int, int, int, int);
int FUN_0c0470da(int, int, int, int);
int FUN_0c04720a(int, int, int, int);
int FUN_0c047360(int, int, int, int);
int FUN_0c0474bc(int);
int FUN_0c0477a8(int, int, int, int);
int FUN_0c047948(int, int, int, int);
int FUN_0c047ba4(int, int, int, int);
int FUN_0c047e9c(int, int, int, int);
int FUN_0c047ff6(int);
int FUN_0c048594(int a4, int a5, int a6, int a7);
int FUN_0c0254a8(int a4, int a5, int a6, int a7);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o330_int { char p[0x330]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };


int FUN_0c048594(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x544));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        if (t0 != 9) {
                                            return FUN_0c02a19a(a4, a5, a6, a7);
                                        }
                                        return ((int (*)(int))(0xC04852E))(a4);
                                    }
                                    return FUN_0c047ff6(a4);
                                }
                                return FUN_0c047e9c(a4, a5, a6, a7);
                            }
                            return FUN_0c047ba4(a4, a5, a6, a7);
                        }
                        return FUN_0c047948(a4, a5, a6, a7);
                    }
                    return FUN_0c0477a8(a4, a5, a6, a7);
                }
                return FUN_0c0474bc(a4);
            }
            return FUN_0c047360(a4, a5, a6, a7);
        }
        return FUN_0c04720a(a4, a5, a6, a7);
    }
    return FUN_0c0470da(a4, a5, a6, a7);
}

int FUN_0c0254a8(int a4, int a5, int a6, int a7)
{
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    if (((((struct o330_int *)(a4))->v)) == 0) {
        return FUN_0c02a19a(a4, a5, a6, a7);
    }
    (((struct o20C_uint *)(a4))->v) = 0x200000;
    (((struct o210_uint *)(a4))->v) = 0x38;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    return 0x2CC;
}
