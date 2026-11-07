/* Straight-line functions with calls and guards (batch gen_aai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02286c(int, int, float, float);
int FUN_0c022aa6(int);
int FUN_0c02a19a(int);
int FUN_0c03217c(int, int, int);
int FUN_0c032ae6(int);
int FUN_0c032b70(int);
int FUN_0c0346ca(int);
int FUN_0c034d0c(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c026bbc(int a4, int a5);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o310_int { char p[0x310]; int v; };
struct o310_uint { char p[0x310]; unsigned int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o544_uint { char p[0x544]; unsigned int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o568_uint { char p[0x568]; unsigned int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };



int FUN_0c026bbc(int a4, int a5)
{
    int stk[6];
    register int t1;
    register int t7;
    register int t15;
    register int t55;
    register int t56;

    (((struct o4C8_uint *)(a4))->v) = 0x2;
    (((struct oD8_uint *)(a4))->v) = 0x0;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x0;
    (((struct o3A0_uint *)(a4))->v) = 0x0;
    t1 = (((struct o4F0_int *)(a4))->v);
    (((struct o55C_uint *)(a4))->v) = ((*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + ((((((struct o544_int *)(a4))->v)) << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    (((struct o20C_uint *)(a4))->v) = 0x80;
    (((struct o534_uint *)(a4))->v) = 0x0;
    (((struct o1EC_uint *)(a4))->v) = 0xFFC;
    t7 = (((struct o544_int *)(a4))->v);
    if (t7 != 0) {
        if (t7 == 1) {
            FUN_0c032b70(a4);
            FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
        } else {
            if (t7 == 2) {
                FUN_0c032b70(a4);
                FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
            } else {
                if (t7 != 3) {
                } else {
                    t15 = FUN_0c0346ca((a4 + 0x30));
                    if (t15 != 0) {
                        FUN_0c03217c(a4, ((((struct o54C_int *)(a4))->v)), ((((struct o544_int *)(a4))->v)));
                        FUN_0c02286c(a4, 0x28, 0.0f, 0.0199999996f);
                    } else {
                        (((struct o544_uint *)(a4))->v) = 0x1;
                        FUN_0c032b70(a4);
                        FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
                    }
                }
            }
        }
    } else {
        if ((int)(*(int *)0xC23EDA4) >= (int)0xA) {
            t55 = FUN_0c034d0c(a4, a5);
            if (t55 == 0) {
                (((struct o4C8_uint *)(a4))->v) = 0x3;
                return FUN_0c02a19a(a4);
            }
            (((struct o524_uint *)(a4))->v) = 0x1;
            t56 = (((struct o4F0_int *)(a4))->v);
            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((((t56 << 2) + t56) << 2) + 0xC1F8E44))) + 0x2)));
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o534_uint *)(a4))->v) = 0x9;
            (((struct o1B0_uint *)(a4))->v) = 0xFFFFFFFF;
            (((struct o568_uint *)(a4))->v) = ((((struct o310_int *)(a4))->v));
            (((struct o310_uint *)(a4))->v) = 0x0;
            (((struct o564_uint *)(a4))->v) = 0x0;
            (((struct o56C_uint *)(a4))->v) = 0x0;
            FUN_0c032ae6(a4);
            FUN_0c022aa6(a4);
            *(unsigned int *)0xC247D04 = 0x7;
            (((struct o18_uint *)0xC247CB8)->v) = 0xC102924;
            (((struct o0_uchar *)0xC247CB8)->v) = (*(signed char *)((a4 + 0xBC)));
            (((struct o1_uchar *)0xC247CB8)->v) = (*(signed char *)((a4 + 0x510)));
        } else {
            (((struct o544_uint *)(a4))->v) = 0x1;
            FUN_0c032b70(a4);
            FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
        }
    }
    if ((unsigned int)((*(int *)0xC23A258) & 0x7) > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    (((struct o568_uint *)(a4))->v) = ((((struct o310_int *)(a4))->v));
    (((struct o310_uint *)(a4))->v) = 0x0;
    (((struct o564_uint *)(a4))->v) = 0x0;
    (((struct o56C_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}
