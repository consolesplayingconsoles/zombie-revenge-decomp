/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c0c0340(int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0da410(int);
void FUN_0c0bfc10(int a4);

void FUN_0c0bfc10(int a4)
{
    int stk[8];
    register float u11;
    register int t13;
    register int t5;
    register int t6;
    register int t35;

    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
        return;
    }
    if (((int)((((struct o8_int *)0xC23ED9C)->v)) < (int)0xA) && ((t5 = (((struct o0_int *)0xC23ED9C)->v), t5 == 4) || (t6 = (((struct o0_int *)0xC23ED9C)->v), t6 == 7))) {
        (((struct o44_uint *)(a4))->v) = (*(int *)((((((*(int *)0xC23A258) & 0x1) << 2) + (a4 + 0x3C)) + 0x0)));
        (((struct o58_float *)(a4))->v) = 2.0999999f;
        (((struct o5C_float *)(a4))->v) = 2.5999999f;
        u11 = 0.599999964f;
        u11 = u11 + 0.399999976f * (FUN_0c0da410(((((*(int *)0xC23A258) << 8) << 2) << 2)));
        (((struct o74_float *)(a4))->v) = u11;
        t13 = *(int *)0xC23A258;
        if ((int)((((struct o8_int *)0xC23ED9C)->v)) <= (int)0x5) {
            if ((t13 & 0x3F) == 0) {
                FUN_0c0cc3f8((*(int *)((0xC1A4854 + ((((unsigned int)((unsigned int)((unsigned int)t13 >> 2) >> 2) >> 2) & 0x1) << 2)))), 0x0, 0x0, 0x0);
            }
            t35 = (((unsigned int)((unsigned int)((unsigned int)t13 >> 2) >> 2) >> 2) & 0x1);
        } else {
            if ((t13 & 0x7F) == 0) {
                FUN_0c0cc3f8((*(int *)0xC1A4854), 0x0, 0x0, 0x0);
            }
            t35 = 0x0;
        }
        if ((0x1 & (*(int *)0xC23A258)) != 0) {
            FUN_0c0c0340(((t35 * 0x38) + 0xC1A47E4));
        }
    } else {
        (((struct o44_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o58_float *)(a4))->v) = ((((struct o0_float *)0xC0BFE0C)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0BFE0C)->v));
        (((struct o74_float *)(a4))->v) = 1.0f;
    }
    (((struct o50_float *)(a4))->v) = ((*(float *)0xC2475BC) + ((((struct o8_float *)0xC0BFE0C)->v)));
    (((struct o48_uint *)(a4))->v) = (((int)((int)((((struct o8_int *)0xC23ED9C)->v)) / (int)0xA)) + ((((struct o44_int *)(a4))->v)));
    (((struct o7C_uint *)(a4))->v) = 0x3007;
    FUN_0c0c0340((a4 + 0x48));
    (((struct o48_uint *)(a4))->v) = (((int)((int)((((struct o8_int *)0xC23ED9C)->v)) % (int)0xA)) + ((((struct o44_int *)(a4))->v)));
    (((struct o7C_uint *)(a4))->v) = 0x3005;
    FUN_0c0c0340((a4 + 0x48));
}
