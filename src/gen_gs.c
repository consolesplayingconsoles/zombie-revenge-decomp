/* Straight-line functions with calls and guards (batch gen_gs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c0558f8(int);
int FUN_0c05664c(int, int, int, int);
int FUN_0c0567c0(int);
int FUN_0c056928(int);
int FUN_0c057aa8(int);
int FUN_0c057c50(int);
float FUN_0c0da410(int);
int FUN_0c0e19f2(void);
int FUN_0c057014(int a4, int a5, int a6, int a7);

int FUN_0c057014(int a4, int a5, int a6, int a7)
{
    int t2;
    int t13;
    int t19;
    int t26;
    float t27;
    int t34;

    FUN_0c05664c(a4, a5, a6, a7);
    t2 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
    if (t2 != 11) {
        if (t2 == 5) {
            return FUN_0c057aa8(a4);
        }
        if (t2 == 2) {
            return FUN_0c057aa8(a4);
        }
        if (t2 != 7) {
            if (t2 != 1) {
                if (t2 != 3) {
                    if (t2 != 4) {
                    } else {
                        FUN_0c056928(a4);
                    }
                } else {
                    FUN_0c0567c0(a4);
                }
            } else {
                t13 = *(int *)((a4 + 0x23C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F2A4)); }
            }
            return FUN_0c057aa8(a4);
        }
        t19 = *(int *)((a4 + 0x25C));
        *(unsigned int *)((a4 + 0x25C)) = (t19 - 1);
        if ((int)(t19 - 1) <= 0) {
            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0x8;
        }
        t26 = *(int *)((a4 + 0x25C));
        if ((t26 & 1) == 0) {
            return FUN_0c057aa8(a4);
        }
        return t26;
    }
    t27 = FUN_0c01f172(a4);
    if (t27 > -990.0f) {
        *(float *)((a4 + 0x34)) = (t27 + (*(float *)((a4 + 0x258))));
    }
    FUN_0c057c50(a4);
    t34 = *(int *)((a4 + 0x248));
    *(unsigned int *)((a4 + 0x248)) = (t34 + 0x100);
    *(unsigned short *)((a4 + 0x6E)) = (int)((FUN_0c0da410((t34 + 0x100))) * 8192.0f);
    if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
        FUN_0c0558f8(a4);
        FUN_0c0e19f2();
    }
    return FUN_0c057aa8(a4);
}
