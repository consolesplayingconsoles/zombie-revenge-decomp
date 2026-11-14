/* scratch */
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
int FUN_0c02a416(int);
int FUN_0c03593a(int);
void FUN_0c02ad98(int a4, int a5, int a6, int a7);

void FUN_0c02ad98(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t8;

    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                t2 = FUN_0c03593a(a4);
                if (t2 != 0) {
                    return;
                }
                (((struct o554_uint *)(a4))->v) = 0x1;
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                t3 = (((struct o4F0_int *)(a4))->v);
                ((int (*)(int, int, int, int))((*(int *)(((((t3 << 2) + t3) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                t5 = FUN_0c02a416(a4);
                if (t5 != 0) {
                    (((struct o554_uint *)(a4))->v) = 0x1;
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                    t6 = (((struct o4F0_int *)(a4))->v);
                    ((int (*)(int, int, int, int))((*(int *)(((((t6 << 2) + t6) << 2) + 0xC1F8E3C)))))(a4, a5, a6, a7);
    return;
                }
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                t8 = FUN_0c02a416(a4);
                if (t8 != 0) {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
                return;
            }
            default:
            {
                return;
            }
        }
    }
}

