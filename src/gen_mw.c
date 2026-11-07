/* Straight-line functions with calls and guards (batch gen_mw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce8a(int, float);
int FUN_0c01d2c2(int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c01c86c(int a4, int a5);
float FUN_0c0d3f0c(int a4);

int FUN_0c01c86c(int a4, int a5)
{
    int stk[21];

    register int R2;
    register int R3;
    register int R7;
    register float F7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_3 = a4;
    v0_4 = a5;
    w0_2 = *(float *)((v0_3 + 0x1B8));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x14);
    *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = ((*(float *)((v0_4 + 0x3C))) - (*(float *)((v0_4 + 0x30))));
    *(float *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0)) = ((*(float *)((v0_4 + 0x40))) - (*(float *)((v0_4 + 0x34))));
    w0_1 = *(float *)((v0_4 + 0x38));
    w0_3 = *(float *)((v0_4 + 0x44));
    *(float *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0)) = (w0_3 - w0_1);
    w0_4 = *(float *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
    w0_0 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_0 * w0_0;
    w0_0 = w0_4;
    w0_0 = w0_0 + ((w0_3 - w0_1)) * ((w0_3 - w0_1));
    v0_0 = (0x2);
    v0_5 = ((v0_3 + 0x30));
    v0_1 = (v0_3);
    v0_2 = (v0_4);
    v0_3 = ((((int)stk + 4) + 0x14));
    v0_7 = (((((int)stk + 4) + 0x14) + 0x4));
    v0_6 = (((((int)stk + 4) + 0x14) + 0x8));
    w0_0 = (w0_0);
    w0_1 = (w0_2);
    if ((w0_2 > 0.0f)) goto L_C01C8EC;
    v0_3 = (FUN_0c01ce8a(v0_5, w0_1)) != 0;
    if (v0_3) goto L_C01C8EC;
    L_C01CB5E:;
    v0_0 = (0x0);
    L_C01CB60:;
    return v0_0;
    L_C01C8EC:;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x20);
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = ((*(float *)((v0_5 + 0x0))) - (*(float *)((v0_2 + 0x30))));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = ((*(float *)((v0_5 + 0x4))) - (*(float *)((v0_2 + 0x34))));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = ((*(float *)((v0_5 + 0x8))) - (*(float *)((v0_2 + 0x38))));
    w0_3 = ((*(float *)((v0_7 + 0x0))) * (*(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0))));
    w0_3 = w0_3 + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    w0_2 = *(float *)((v0_6 + 0x0));
    w0_3 = w0_3;
    w0_3 = w0_3 + (*(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0))) * w0_2;
    v0_3 = ((((int)stk + 4) + 0x20));
    w0_2 = (w0_2);
    w0_2 = (w0_3);
    if ((!(w0_3 > 0.0f))) goto L_C01C9C6;
    v0_8 = ((((int)stk + 4) + 0x8));
    v0_4 = ((((int)stk + 4) + 0x8));
    if ((w0_0 > w0_2)) goto L_C01C97E;
    *(float *)((v0_8 + 0x0)) = ((*(float *)((v0_5 + 0x0))) - (*(float *)((v0_2 + 0x3C))));
    *(float *)(((v0_4 + 0x4) + 0x0)) = ((*(float *)((v0_5 + 0x4))) - (*(float *)((v0_2 + 0x40))));
    w0_2 = *(float *)((v0_2 + 0x44));
    w0_3 = *(float *)((v0_5 + 0x8));
    *(float *)(((v0_4 + 0x8) + 0x0)) = (w0_3 - w0_2);
    w0_4 = *(float *)(((v0_4 + 0x4) + 0x0));
    w0_5 = *(float *)((v0_8 + 0x0));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_5 * w0_5;
    w0_2 = ((w0_3 - w0_2));
    w0_3 = (w0_4);
    L_C01C9BA:;
    w0_3 = w0_3;
    w0_3 = w0_3 + w0_2 * w0_2;
    w0_2 = (w0_2);
    w0_2 = (w0_3);
    L_C01C9E0:;
    w0_3 = *(float *)((v0_2 + 0x1E4));
    if ((((w0_3 + w0_1) * (w0_3 + w0_1)) > w0_2)) goto L_C01C9F2;
    goto L_C01CB5E;
    L_C01C9F2:;
    v0_3 = (0xC23A1A8);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C01CA0C;
    if (((*(int *)((v0_2 + 0x200))) != -1)) goto L_C01CA0C;
    *(unsigned int *)((v0_2 + 0x1BC)) = 0xFFFFFFFF;
    goto L_C01CB5E;
    L_C01CA0C:;
    if (!(((*(int *)((v0_2 + 0x1F8))) != 0))) goto L_C01CB16;
    *(unsigned int *)((v0_1 + 0x1C0)) = (*(int *)((v0_2 + 0x200)));
    *(unsigned int *)((v0_1 + 0x1BC)) = (*(int *)((v0_2 + 0x1F8)));
    *(unsigned int *)((v0_1 + 0x1D0)) = (*(int *)((v0_2 + 0x1FC)));
    *(unsigned int *)((v0_1 + 0x1C4)) = (*(int *)((v0_2 + 0xBC)));
    *(unsigned int *)((v0_1 + 0x208)) = (*(int *)((v0_2 + 0x1E8)));
    *(unsigned int *)((v0_1 + 0x1C8)) = ((int)stk + 4);
    *(float *)((v0_1 + 0x1D4)) = w0_0;
    *(unsigned int *)((v0_1 + 0x1CC)) = (*(int *)((v0_2 + 0x1F4)));
    v0_5 = (0x100);
    if ((((*(int *)((v0_3 + 0x0))) & 0x100) == 0)) goto L_C01CA70;
    v0_6 = *(int *)((v0_2 + 0xBC));
    v0_4 = (v0_6);
    if (((int)v0_6 >= (int)v0_0)) goto L_C01CA70;
    if (((int)v0_4 >= (int)v0_0)) goto L_C01CA70;
    if (((v0_5 & (*(int *)((v0_3 + 0x0)))) == 0)) goto L_C01CA70;
    FUN_0c01d2c2(v0_1, v0_2);
    goto L_C01CA70;
    L_C01CB16:;
    *(unsigned int *)((v0_2 + 0x1C4)) = (*(int *)((v0_1 + 0xBC)));
    *(unsigned int *)((v0_2 + 0x208)) = ((int)stk + 4);
    *(unsigned int *)((v0_2 + 0x1EC)) = ((*(int *)((v0_2 + 0x1EC))) | ((int)0x1 << (int)(*(int *)(((0x1C4 + v0_2) + 0x0)))));
    v0_3 = (0x1);
    if ((((*(int *)((v0_1 + 0xC8))) & 0x3FF) == 0)) goto L_C01CB54;
    if ((((*(int *)((v0_1 + 0x20C))) & 64) == 0)) goto L_C01CB4E;
    *(unsigned int *)((v0_2 + 0xD8)) = v0_0;
    L_C01CB5A:;
    v0_0 = (0xFFFFFFFF);
    goto L_C01CB60;
    L_C01CB4E:;
    *(unsigned int *)((v0_2 + 0xD8)) = v0_3;
    goto L_C01CB5A;
    L_C01CB54:;
    *(unsigned int *)((v0_2 + 0xD8)) = 0x4;
    goto L_C01CB5A;
    L_C01CA70:;
    if (((*(int *)((v0_2 + 0x1F8))) != 25)) goto L_C01CAB0;
    v0_3 = ((0x1D8 + v0_1));
    v0_4 = ((0x1DC + v0_1));
    w0_0 = ((*(float *)((v0_2 + 0x30))));
    w0_2 = ((*(float *)((v0_1 + 0x30))));
    w0_1 = (((*(float *)((v0_1 + 0x34))) - (*(float *)((v0_2 + 0x34)))));
    w0_3 = (((*(float *)((v0_1 + 0x38))) - (*(float *)((v0_2 + 0x38)))));
    L_C01CAD4:;
    FUN_0c0a7714(v0_3, v0_4, (w0_2 - w0_0), w0_1, w0_3);
    if (((int)(*(int *)((v0_2 + 0xBC))) >= (int)0x10)) goto L_C01CB0E;
    v0_3 = *(int *)((((*(int *)((v0_1 + 0x1C4))) << 2) + 0xC246FF0));
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C01CB0E;
    FUN_0c0a68ec((0x1E0 + v0_1), ((*(float *)((v0_1 + 0x30))) - (*(float *)((v0_5 + 0x30)))), ((*(float *)((v0_1 + 0x38))) - (*(float *)((v0_5 + 0x38)))));
    goto L_C01CB16;
    L_C01CB0E:;
    *(unsigned int *)((v0_1 + 0x1E0)) = (*(int *)((v0_1 + 0x1DC)));
    goto L_C01CB16;
    L_C01CAB0:;
    v0_3 = ((0x1D8 + v0_1));
    v0_4 = ((0x1DC + v0_1));
    w0_0 = ((*(float *)((v0_2 + 0x3C))));
    w0_2 = ((*(float *)((v0_2 + 0x30))));
    w0_1 = (((*(float *)((v0_2 + 0x34))) - (*(float *)((v0_2 + 0x40)))));
    w0_3 = (((*(float *)((v0_2 + 0x38))) - (*(float *)((v0_2 + 0x44)))));
    goto L_C01CAD4;
    L_C01C97E:;
    *(float *)((v0_8 + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) - (((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * (w0_2 / w0_0))));
    *(float *)(((v0_4 + 0x4) + 0x0)) = ((*(float *)((v0_3 + 0x4))) - (((*(float *)((v0_7 + 0x0))) * (w0_2 / w0_0))));
    w0_3 = *(float *)((v0_3 + 0x8));
    w0_2 = ((*(float *)((v0_6 + 0x0))) * (w0_2 / w0_0));
    *(float *)(((v0_4 + 0x8) + 0x0)) = (w0_3 - w0_2);
    w0_4 = *(float *)(((v0_4 + 0x4) + 0x0));
    w0_5 = *(float *)((v0_8 + 0x0));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_5 * w0_5;
    w0_2 = ((w0_3 - w0_2));
    w0_3 = (w0_4);
    goto L_C01C9BA;
    L_C01C9C6:;
    w0_4 = *(float *)((v0_3 + 0x4));
    w0_2 = *(float *)(((*(int *)(((int)stk + 4))) + 0x0));
    w0_3 = *(float *)((v0_3 + 0x8));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_2 * w0_2;
    w0_4 = w0_4;
    w0_4 = w0_4 + w0_3 * w0_3;
    w0_2 = (w0_3);
    w0_2 = (w0_4);
    goto L_C01C9E0;
}

float FUN_0c0d3f0c(int a4)
{
    int stk[13];
    register int t1;
    register int t3;
    register int t7;
    register int t12;
    register int t19;
    register float u31;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register float u42;
    register float u44;
    register float u47;
    register float u49;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register float u58;
    register float u59;
    register float u60;
    register float u61;
    register float u62;
    register float u66;
    register float u64;
    register float u69;
    register float u70;
    register float u71;
    register float u72;
    register float u73;
    register float u77;
    register float u75;
    register int t80;
    register int t81;
    register int t82;
    register float u83;
    register float u84;
    register float u85;
    register float u86;
    register float u87;
    register float u91;
    register float u89;
    register float u94;
    register float u95;
    register float u96;
    register float u97;
    register float u98;
    register float u102;
    register float u100;
    register int t2;
    register float u4;
    register float u5;
    register int t15;
    int t16;
    register int t17;
    register int t24;

    *(unsigned int *)(((int)stk + 24)) = (((a4 << 2) << 2) << 1);
    *(unsigned int *)(((int)stk + 20)) = (a4 * 0x16);
    t1 = ((((a4 << 2) << 2) << 1) + 0xC943514);
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)(((((a4 << 2) << 2) << 1) + 0xC943514) + 0x20)) {
            break;
        }
        *(float *)((t1 + 0x0)) = 0.0f;
        t1 = (t1 + 0x4);
    }
    *(unsigned int *)(((int)stk + 16)) = 0xC20C6AC;
    t3 = 0x0;
    for (;;) {
        t7 = 0x0;
        for (;;) {
            if ((int)(*(short *)((((a4 * 0x16) + 0xC20C5A8) + (t3 << 1)))) > (int)(*(short *)((((t7 * 0x16) + 0xC20C5D4) + (t3 << 1))))) {
                t12 = ((t7 * 0x16) + 0xC20C5D4);
                t7 = (t7 + 0x1);
                if ((int)t7 >= (int)0x4) {
                    t15 = t12; break;
                }
                continue;
            }
            t15 = ((t7 * 0x16) + 0xC20C5D4); break;
        }
        if (((t7 == 0) && (t16 = *(short *)((t15 + (t3 << 1))), t17 = *(short *)((((a4 * 0x16) + 0xC20C5A8) + (t3 << 1))), (int)t17 < (int)t16)) || (t7 == 4)) {
            *(unsigned short *)((((a4 * 0x16) + 0xC20C5A8) + (t3 << 1))) = (*(short *)((t15 + (t3 << 1))));
            t19 = 0x3;
            if (t7 == 0) {
                t19 = 0x1;
            }
            t24 = t19;
        } else {
            t24 = t7;
        }
        u31 = 1.0f;
        if ((*(short *)((((a4 * 0x16) + 0xC20C5A8) + (t3 << 1)))) != (*(short *)(((((t24 - 1) * 0x16) + 0xC20C5D4) + (t3 << 1))))) {
            t2 = (*(short *)(((((t24 - 1) * 0x16) + 0xC20C5D4) + (t3 << 1))));
            u5 = (float)((*(short *)((((a4 * 0x16) + 0xC20C5A8) + (t3 << 1)))) - t2);
            u4 = (float)((*(short *)((t15 + (t3 << 1)))) - t2);
            u5 = (u5 / u4);
            u31 = u5;
        }
        *(unsigned int *)(((int)stk + 4)) = ((((t24 << 2) << 2) << 1) + 0xC20C62C);
        *(unsigned int *)(((int)stk + 8)) = (((((t24 - 1) << 2) << 2) << 1) + 0xC20C62C);
        t35 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 12)) = (t3 << 2);
        t36 = 0x0;
        t37 = t35;
        t38 = ((((a4 << 2) << 2) << 1) + 0xC943514);
        for (;;) {
            t2 = t36;
            t2 = (t2 + ((((a4 << 2) << 2) << 1) + 0xC943514));
            u5 = (*(float *)((t36 + (*(int *)(((int)stk + 4))))));
            u42 = *(float *)((t36 + (*(int *)(((int)stk + 8)))));
            u5 = (u5 - u42);
            u4 = u42;
            u44 = u4;
            u44 = u44 + u31 * u5;
            u4 = u44;
            u5 = (*(float *)((t37 + (*(int *)(((int)stk + 12))))));
            u47 = u4;
            u4 = (*(float *)((t2 + 0x0)));
            u49 = u4;
            u49 = u49 + u47 * u5;
            u4 = u49;
            u5 = u4;
            *(float *)((t2 + 0x0)) = u4;
            if (u5 > 1.0f) {
                *(float *)((t38 + 0x0)) = 1.0f;
            }
            t36 = (t36 + 0x4);
            t38 = (t38 + 0x4);
            t37 = (t37 + 0x14);
            if ((unsigned int)t36 >= (unsigned int)0x20) {
                break;
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x5) {
            break;
        }
    }
    t53 = *(short *)0xC20C620;
    t54 = *(int *)(((int)stk + 20));
    t55 = *(short *)0xC20C5DE;
    t56 = *(int *)(((int)stk + 24));
    t57 = *(short *)(((t54 + 0xC20C5A8) + 0xA));
    u58 = *(float *)(((t56 + 0xC943514) + 0x14));
    u59 = ((((float)t57 / (float)(t53 - t55)) + -0.5f) * (1.0f + 1.0f));
    u60 = (u58 * u59);
    u61 = (u60 * 0.199999988f);
    u62 = 0.0f;
    if (!(0.0f > (u58 + u61))) {
        u62 = (u58 + u61);
    }
    u66 = 1.0f;
    if (!(u62 > 1.0f)) {
        u64 = 0.0f;
        if (!(0.0f > (u58 + u61))) {
            u64 = (u58 + u61);
        }
        u66 = u64;
    }
    *(float *)(((t56 + 0xC943514) + 0x14)) = u66;
    u69 = *(float *)(((t56 + 0xC943514) + 0x1C));
    u70 = ((((float)t57 / (float)(t53 - t55)) + -0.5f) * (1.0f + 1.0f));
    u71 = (u69 * u70);
    u72 = (u71 * 0.199999988f);
    u73 = 0.0f;
    if (!(0.0f > (u69 + u72))) {
        u73 = (u69 + u72);
    }
    u77 = 1.0f;
    if (!(u73 > 1.0f)) {
        u75 = 0.0f;
        if (!(0.0f > (u69 + u72))) {
            u75 = (u69 + u72);
        }
        u77 = u75;
    }
    *(float *)(((t56 + 0xC943514) + 0x1C)) = u77;
    t80 = *(short *)0xC20C622;
    t81 = *(short *)0xC20C5E0;
    t82 = *(short *)(((t54 + 0xC20C5A8) + 0xA));
    u83 = *(float *)(((t56 + 0xC943514) + 0x10));
    u84 = ((((float)t82 / (float)(t80 - t81)) + -0.5f) * (1.0f + 1.0f));
    u85 = (u83 * u84);
    u86 = (u85 * 0.199999988f);
    u87 = 0.0f;
    if (!(0.0f > (u83 + u86))) {
        u87 = (u83 + u86);
    }
    u91 = 1.0f;
    if (!(u87 > 1.0f)) {
        u89 = 0.0f;
        if (!(0.0f > (u83 + u86))) {
            u89 = (u83 + u86);
        }
        u91 = u89;
    }
    *(float *)(((t56 + 0xC943514) + 0x10)) = u91;
    u94 = *(float *)(((t56 + 0xC943514) + 0x18));
    u95 = ((((float)t82 / (float)(t80 - t81)) + -0.5f) * (1.0f + 1.0f));
    u96 = (u94 * u95);
    u97 = (u96 * 0.199999988f);
    u98 = 0.0f;
    if (!(0.0f > (u94 + u97))) {
        u98 = (u94 + u97);
    }
    u102 = 1.0f;
    if (!(u98 > 1.0f)) {
        u100 = 0.0f;
        if (!(0.0f > (u94 + u97))) {
            u100 = (u94 + u97);
        }
        u102 = u100;
    }
    *(float *)(((t56 + 0xC943514) + 0x18)) = u102;
    return u47;
}
