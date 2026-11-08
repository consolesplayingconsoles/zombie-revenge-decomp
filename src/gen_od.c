/* Straight-line functions with calls and guards (batch gen_od): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c093ac8(int, int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a8016(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int FUN_0c09442c(int a4);
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o108_uint { char p[0x108]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c09442c(int a4)
{
    int stk[19];
    register int t0;
    register int t7;
    register int t8;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t18;
    register int t23;
    register int t24;
    register float t25;
    register float u28;
    register float u43;
    register float u44;
    register float u46;
    register float u47;
    register float u49;
    register float u50;
    register int t62;
    register int t63;
    register int t65;
    register int t66;
    register int t67;
    register int t77;
    register int t93;
    register int t94;
    register int t97;
    register int t99;
    register int t106;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 44)) = t0;
    nlPushMatrix(((((((((struct oBC_int *)(t0))->v)) << 8) + 0xC25F840) + ((((((((struct o100_int *)(a4))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    t7 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t8 = *(int *)((a4 + 0x34));
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = ((((unsigned int)(*(int *)0xC23A258) >> 1) & 0x1F) + 0x1B8);
    *(unsigned int *)(((int)stk + 20)) = (0xB0 + a4);
    *(unsigned int *)(((int)stk + 36)) = 0x9;
    t12 = t8;
    t13 = (t8 + 0xC);
    t14 = (((((struct o104_int *)(a4))->v)) - 1);
    for (;;) {
        t15 = t13;
        t13 = (t13 + 0xC);
        t16 = t12;
        t12 = (t12 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t16) = *(struct mv3 *)(t15); }
        t14 = (t14 - 0x1);
        if (t14 == 0) {
            break;
        }
    }
    t18 = (((struct o104_int *)(a4))->v);
    FUN_0c0db840((((((t18 - 1) << 1) + (t18 - 1)) << 2) + (*(int *)((a4 + 0x34)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x28)) = *(struct mv3 *)((*(int *)((a4 + 0x34)))); }
    FUN_0c0de3c0(0x4, 0x1);
    t23 = (a4 + 0x38);
    for (;;) {
        t24 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 32)) = (t24 + 0x666);
        t25 = FUN_0c0da410((t24 + 0x666));
        *(float *)(((int)stk + 40)) = (t25 * 0.599999964f);
        *(unsigned int *)(((int)stk + 24)) = 0x4;
        u28 = (t25 * 0.799999952f);
        *(unsigned int *)(((int)stk + 28)) = (((((unsigned int)(*(int *)0xC23A258) >> 1) + 0x4) & 0x1F) + 0x1B8);
        FUN_0c0a8016(((*(int *)((a4 + 0x34))) + 0xC), (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), t23);
        nlSubVector3op((((int)stk + 12) + 0x34), (((int)stk + 12) + 0x28), t23);
        FUN_0c0a78fc(((int)stk + 12), (((int)stk + 12) + 0x4), (*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))), (*(float *)(((int)stk + 72))));
        FUN_0c08498e(1.0f, (*(float *)(((int)stk + 40))), 1.0f);
        for (;;) {
            FUN_0c0dbda0((0x2AC + t7));
            FUN_0c0dcca0(t23);
            u43 = (t25 * 0.799999952f);
            u44 = (u43 * (float)((FUN_0c0da2e0()) - 16384));
            *(float *)(((int)stk + 8)) = (u44 * 6.10370189e-05f);
            u46 = (t25 * 0.799999952f);
            u47 = (u46 * (float)((FUN_0c0da2e0()) - 16384));
            *(float *)(((int)stk + 4)) = (u47 * 6.10370189e-05f);
            u49 = (t25 * 0.799999952f);
            u50 = (u49 * (float)((FUN_0c0da2e0()) - 16384));
            FUN_0c0dcc70((u50 * 6.10370189e-05f), (u47 * 6.10370189e-05f), (u44 * 6.10370189e-05f));
            nlRotateAX((*(int *)(((int)stk + 12))));
            nlRotateAZ((*(int *)(((int)stk + 16))));
            nlRotateAY(((((struct o3CE_short *)(t7))->v)));
            nlScale((u28 * 1.5f), (t25 * 0.799999952f), (u28 * 1.5f));
            FUN_0c0de000((u28 * 1.5f));
            FUN_0c0c465c((*(int *)(((int)stk + 28))));
            t62 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 24)) = (t62 - 1);
            if ((t62 - 1) == 0) {
                break;
            }
        }
        t63 = t23;
        t23 = (t23 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x28)) = *(struct mv3 *)(t63); }
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x4);
        t65 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((int)stk + 36)) = (t65 - 1);
        if ((t65 - 1) != 0) continue;
        break;
    }
    t66 = *(int *)((a4 + 0x34));
    *(unsigned int *)(((int)stk + 20)) = t66;
    t67 = (((struct o104_int *)(a4))->v);
    nlSubVector3op((((int)stk + 12) + 0x34), (*(int *)(((int)stk + 20))), (t66 + ((((t67 - 1) << 1) + (t67 - 1)) << 2)));
    FUN_0c0a78fc(((int)stk + 12), (((int)stk + 12) + 0x4), (*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))), (*(float *)(((int)stk + 72))));
    FUN_0c0dbda0((0x2AC + t7));
    t77 = (((struct o104_int *)(a4))->v);
    FUN_0c0dcca0((((((t77 - 1) << 1) + (t77 - 1)) << 2) + (*(int *)((a4 + 0x34)))));
    nlRotateAX((*(int *)(((int)stk + 12))));
    nlRotateAZ((*(int *)(((int)stk + 16))));
    nlRotateAY(((((struct o3CE_short *)(t7))->v)));
    nlScale(1.5f, 1.0f, 1.5f);
    FUN_0c0de000(1.5f);
    FUN_0c0c465c((*(int *)(((int)stk + 48))));
    FUN_0c0849da();
    FUN_0c0de3c0(0x4, 0x5);
    nlPopMatrix(0x1);
    t93 = (((struct o108_int *)(a4))->v);
    t94 = (((struct o104_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 20)) = t94;
    FUN_0c093ac8(((0xB0 + a4) + 0x28), ((0xD8 + a4) + 0x28), 0xA, (float)(((*(int *)(((int)stk + 20))) - 3) << 16), (float)(t94 + 0x1), (float)t93);
    t97 = (((struct o108_int *)(a4))->v);
    (((struct o108_uint *)(a4))->v) = (t97 - 1);
    if ((int)(t97 - 1) > 0) {
        t99 = (((struct o2EC_int *)((*(int *)(((int)stk + 44)))))->v);
        t106 = t99;
        if ((t99 & 15) != 0) {
            t106 = (FUN_0c0e19f2());
        }
    } else {
        t106 = (FUN_0c0e19f2());
    }
    return t106;
}
