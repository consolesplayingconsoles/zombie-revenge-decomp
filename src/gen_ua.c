/* Straight-line functions with calls and guards (batch gen_ua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a220(int);
int FUN_0c02eeea(int);
int FUN_0c02f04a(int);
int FUN_0c030e0e(int);
void FUN_0c030ec8(int a4, int a5, int a6, int a7);

void FUN_0c030ec8(int a4, int a5, int a6, int a7)
{
    int t0;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    if ((*(int *)((a4 + 0x4E8))) == 0) {
        *(unsigned int *)((a4 + 0x50C)) = 0x0;
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        t0 = FUN_0c02eeea(a4);
        if (t0 == 0) {
            t0 = *(int *)((a4 + 0x4F8));
            if ((t0 != 6) && (t0 != 7)) {
                t0 = *(int *)((a4 + 0x4F8));
                if ((t0 != 8) && (t0 != 9)) {
                    *(unsigned int *)((a4 + 0x554)) = 0x1;
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    t0 = *(int *)((a4 + 0x4F0));
                    ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                }
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
            return;
        }
        t0 = *(int *)((a4 + 0x4F8));
        if ((unsigned int)t0 < (unsigned int)0xE) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return;
                }
                case 2:
                {
                    FUN_0c030e0e(a4);
    return;
                }
                case 4:
                {
                    return;
                }
                case 6:
                {
                    FUN_0c030e0e(a4);
    return;
                }
                case 8:
                {
                    return;
                }
                case 10:
                {
                    FUN_0c02a220(a4);
                    t0 = FUN_0c02f04a(a4);
                    if (t0 == 0) {
                        *(unsigned int *)((a4 + 0x554)) = 0x1;
                        t0 = *(int *)((a4 + 0x4F0));
                        ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                    }
                    return;
                }
                case 12:
                {
                    return;
                }
                case 14:
                {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                    return;
                }
                case 16:
                {
                    return;
                }
                case 18:
                {
                    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                    return;
                }
                case 20:
                {
                    return;
                }
                case 22:
                {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    return;
                }
                case 24:
                {
                    return;
                }
                default:
                {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    return;
                }
            }
        }
        return;
    }
    t0 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c030e0e(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c030e0e(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
                t0 = FUN_0c02f04a(a4);
                if (t0 == 0) {
                    *(unsigned int *)((a4 + 0x554)) = 0x1;
                    t0 = *(int *)((a4 + 0x4F0));
                    ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                }
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
        }
    }
}
