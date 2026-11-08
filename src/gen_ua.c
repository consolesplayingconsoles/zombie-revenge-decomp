/* Straight-line functions with calls and guards (batch gen_ua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a220(int);
int FUN_0c02eeea(int);
int FUN_0c02f04a(int);
int FUN_0c030e0e(int);
void FUN_0c030ec8(int a4, int a5, int a6, int a7);
struct o4E8_int { char p[0x4E8]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o554_uint { char p[0x554]; unsigned int v; };


void FUN_0c030ec8(int a4, int a5, int a6, int a7)
{
    int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    if (((((struct o4E8_int *)(a4))->v)) == 0) {
        (((struct o50C_uint *)(a4))->v) = 0x0;
        (((struct o524_uint *)(a4))->v) = 0x0;
        t0 = FUN_0c02eeea(a4);
        if (t0 == 0) {
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((t0 != 6) && (t0 != 7)) {
                t0 = (((struct o4F8_int *)(a4))->v);
                if ((t0 != 8) && (t0 != 9)) {
                    (((struct o554_uint *)(a4))->v) = 0x1;
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                    t0 = (((struct o4F0_int *)(a4))->v);
                    ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                }
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            (((struct o4F8_uint *)(a4))->v) = 0x8;
            return;
        }
        t0 = (((struct o4F8_int *)(a4))->v);
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
                        (((struct o554_uint *)(a4))->v) = 0x1;
                        t0 = (((struct o4F0_int *)(a4))->v);
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
                    (((struct o4F8_uint *)(a4))->v) = 0x8;
                    return;
                }
                case 16:
                {
                    return;
                }
                case 18:
                {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                    return;
                }
                case 20:
                {
                    return;
                }
                case 22:
                {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                    return;
                }
                case 24:
                {
                    return;
                }
                default:
                {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                    return;
                }
            }
        }
        return;
    }
    t0 = (((struct o4F8_int *)(a4))->v);
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
                    (((struct o554_uint *)(a4))->v) = 0x1;
                    t0 = (((struct o4F0_int *)(a4))->v);
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
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
        }
    }
}
