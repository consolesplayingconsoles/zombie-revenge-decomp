/* Straight-line functions with calls and guards (batch gen_ti): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0a4548(int a4, int a5, int a6, int a7, float f4);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };



int FUN_0c0a4548(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];
    register int t62;
    register int t3;
    register int t21;
    register int t36;
    register int t37;
    register int t38;
    register int t40;
    register int t49;
    register int t50;
    register int t51;
    register int t53;

    t62 = 0x88;
    if ((*(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC247030) + 0x0))) == 0) {
    } else {
        t3 = *(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((((struct o3E4_int *)(t3))->v)));
        FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
        nlRotateAZ(((((struct o4_short *)0xC101212)->v)));
        nlRotateAY((((((struct o62_short *)(a4))->v)) + ((((struct o2_short *)0xC101212)->v))));
        nlRotateAX((((((struct o0_short *)0xC101212)->v)) + ((((struct o60_short *)(a4))->v))));
        FUN_0c0a79fa((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
        nlPopMatrix(0x1);
        if (((((struct o50C_int *)(t3))->v)) != 0) {
            t21 = *(int *)((((((((struct o510_int *)(t3))->v)) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), (((((struct o30_float *)(t3))->v)) - ((((struct o30_float *)(t21))->v))), (((((struct o34_float *)(t3))->v)) - ((((struct o34_float *)(t21))->v))), (((((struct o38_float *)(t3))->v)) - ((((struct o38_float *)(t21))->v))));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)((((int)stk + 4) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = (*(int *)((((int)stk + 4) + 0x4)));
        }
        t36 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
        t37 = *(int *)(((((int)stk + 4) + 0x18) + 0x4));
        t62 = 0xC0A468C;
        if (_builtin_fabsf((float)(short)(t37 - t36)) > 256.0f) {
            if (((int)(short)(t37 - t36) < (int)0x8000) && ((int)(short)(t37 - t36) > 0)) {
                t38 = (((struct o62_short *)(a4))->v);
                (((struct o62_ushort *)(a4))->v) = (t38 + 0x100);
                if ((int)(short)(t38 + 0x100) > (int)0x1000) {
                    (((struct o62_ushort *)(a4))->v) = 0x1000;
                }
            } else {
                t40 = (((struct o62_short *)(a4))->v);
                (((struct o62_ushort *)(a4))->v) = (t40 - 0x100);
                if ((int)(short)(t40 - 0x100) < (int)0xFFFFF000) {
                    (((struct o62_ushort *)(a4))->v) = 0xFFFFF000;
                }
            }
            t62 = 0x62;
        }
        t49 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
        t50 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
        if (_builtin_fabsf((float)(short)(t50 - t49)) > 256.0f) {
            if (((int)(short)(t50 - t49) < (int)0x8000) && ((int)(short)(t50 - t49) > 0)) {
                t51 = (((struct o60_short *)(a4))->v);
                (((struct o60_ushort *)(a4))->v) = (t51 + 0x100);
                if ((int)(short)(t51 + 0x100) > (int)0xC00) {
                    (((struct o60_ushort *)(a4))->v) = 0xC00;
                }
            } else {
                t53 = (((struct o60_short *)(a4))->v);
                (((struct o60_ushort *)(a4))->v) = (t53 - 0x100);
                if ((int)(short)(t53 - 0x100) < (int)0xFFFFF400) {
                    (((struct o60_ushort *)(a4))->v) = 0xFFFFF400;
                }
            }
            t62 = 0x60;
        }
        _builtin_fabsf((float)(short)(t50 - t49));
    }
    return t62;
}
