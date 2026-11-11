/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e720(int);
int FUN_0c01e79a(int, int);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c033c8c(int, int, int, float);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int _divls(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c033e40(int a4);
int FUN_0c01e00e(int a4, int a5, int a6);
int FUN_0c029bf2(int a4);
int FUN_0c0d20b0(int a4);
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o4_int { char p[0x4]; int v; };






int FUN_0c0d20b0(int a4)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t8;
    float u10;
    int t14;
    int t13;
    int t71;
    float u73;
    float u64;
    int t29;
    int t30;
    float u56;
    int t40;
    int t41;

    t0 = (((struct o4_int *)0xC2498F4)->v);
    t1 = (((struct o0_int *)0xC2498F4)->v);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1EA0A8);
    t5 = 0xC20C46C;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0xC20C47C) {
            break;
        }
        t6 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        FUN_0c0c465c(t6);
    }
    t8 = *(int *)0xC523158;
    u10 = (float)(t8 & 0x3F);
    if (((*(int *)0xC523158) & 64) != 0) {
        u10 = (63.0f - (float)(t8 & 0x3F));
    }
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)0x3) {
            break;
        }
        t13 = t14;
        t13 = (t13 << 2);
        t13 = (t13 + 0xC20C47C);
        if (t14 == (*(int *)0xC943400)) {
            FUN_0c0c465c((*(int *)((t13 + 0x0))));
            FUN_0c0c465c(0x1316);
            FUN_0c0c475c(0x1315, (u10 / 63.0f));
        } else {
            FUN_0c0c475c((*(int *)((t13 + 0x0))), 0.5f);
            FUN_0c0c465c(0x1314);
        }
        FUN_0c0dcc70(0.0f, (-1.0f), 0.0f);
        t14 = (t14 + 0x1);
    }
    if ((t1 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x1;
        t71 = 0x2;
        u73 = 63.0f;
    } else {
        if ((0x1010 & t1) != 0) {
            *(unsigned int *)0xC943400 = ((*(int *)0xC943400) - 1);
            if (((((((struct o0_int *)0xC2497C0)->v)) != 0) && (t29 = (((struct o10_int *)0xC2497C0)->v), t29 != 0)) || (t30 = *(int *)0xC943400, t30 != 1)) {
            } else {
                *(unsigned int *)0xC943400 = ((*(int *)0xC943400) - 1);
            }
            if ((int)(*(int *)0xC943400) < 0) {
                *(unsigned int *)0xC943400 = 0x2;
            }
            FUN_0c0cc3f8(0x29A9, 0x2, 63.0f);
        } else {
            if ((0x2020 & t1) != 0) {
                *(unsigned int *)0xC943400 = ((*(int *)0xC943400) + 0x1);
                if (((((((struct o0_int *)0xC2497C0)->v)) != 0) && (t40 = (((struct o10_int *)0xC2497C0)->v), t40 != 0)) || (t41 = *(int *)0xC943400, t41 != 1)) {
                } else {
                    *(unsigned int *)0xC943400 = ((*(int *)0xC943400) + 0x1);
                }
                if ((int)(*(int *)0xC943400) > (int)0x2) {
                    *(unsigned int *)0xC943400 = 0x0;
                }
                FUN_0c0cc3f8(0x29A9, 0x2, 63.0f);
            } else {
                t71 = 0x2;
                u56 = 63.0f;
            }
            u64 = u56;
        }
        u73 = u64;
    }
    if ((t1 & 0x604) != 0) {
        if ((t0 & 8) == 0) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        } else {
            *(unsigned int *)((a4 + 0x34)) = 0x4;
        }
        FUN_0c0cc3f8(0x828A9, t71, u73);
    }
    return nlPopMatrix(0x1);
}
