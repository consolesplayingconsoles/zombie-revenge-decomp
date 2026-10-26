/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_odd_mvn(float);
int FUN_0c0c6352(int a4, int a5, int a6, int a7);
int FUN_0c0ad126(int a4, float f4);

int FUN_0c0c6352(int a4, int a5, int a6, int a7)
{
    int t0;
    int t16;
    int t6;
    int t18;
    int t19;
    int t22;
    int t23;
    int t20;
    float u26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    float u32;
    int t54;
    int t72;
    int t55;
    int t66;
    int t57;
    int t60;
    int t77;
    int t80;
    int t92;
    int t11;
    int t46;
    int t47;
    int t48;
    float u49;
    int t86;
    int stk[10];

    t0 = *(short *)((a4 + 0x78));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x70)));
    *(unsigned char *)(((int)stk + 4)) = 0xFFFFFFFF;
    if ((*(short *)((a4 + 0x7E))) != 0) {
        *(unsigned short *)((a4 + 0x7E)) = ((*(short *)((a4 + 0x7E))) - 1);
        t92 = 0x7E;
    } else {
        t16 = a4;
        if ((*(short *)((a4 + 0x80))) != 0) {
            t6 = *(short *)((a4 + 0x80));
            *(unsigned short *)((a4 + 0x80)) = (t6 - 1);
            if ((short)(t6 - 1) == 0) {
                FUN_0c0e19f2(a4, a5, a6, a7);
            } else {
                t11 = a4;
            }
            t16 = t11;
        }
        t18 = *(short *)((a4 + 0x7A));
        *(unsigned short *)((a4 + 0x7A)) = (t18 + 0x1);
        t19 = *(short *)((a4 + 0x7C));
        t22 = t19;
        t23 = (short)(t18 + 0x1);
        if ((int)(short)(t18 + 0x1) >= (int)t19) {
            *(unsigned short *)((a4 + 0x7A)) = 0x0;
            t20 = *(short *)((a4 + 0x78));
            *(unsigned short *)((a4 + 0x78)) = (t20 + 0x1);
            t22 = 0x0;
            t23 = (t20 + 0x1);
        }
        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x68)));
        u26 = *(float *)((a4 + 0x6C));
        *(float *)((a4 + 0x38)) = u26;
        t27 = 0xC0C6410;
        t28 = t22;
        t29 = t23;
        t30 = t16;
        t31 = t0;
        u32 = u26;
        for (;;) {
            if (t31 != 0) {
                t28 = (*(int *)(((int)stk + 8)));
                t28 = (t28 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t28;
                t28 = (t28 - 1);
                t29 = (*(signed char *)((t28 + 0x0)));
                *(unsigned char *)(((int)stk + 4)) = t29;
                if (t29 == 0) {
                    break;
                }
                t27 = (*(signed char *)(((int)stk + 4)));
                if (t27 == 10) {
                    t27 = 0x68;
                    u32 = (*(float *)((a4 + t27)));
                    t27 = 0x34;
                    *(float *)((a4 + t27)) = u32;
                    t27 = 0x38;
                    u32 = (*(float *)((a4 + t27)));
                    u32 = (u32 + 34.0f);
                } else {
                    t27 = (*(signed char *)(((int)stk + 4)));
                    if (t27 != 32) {
                        t27 = (*(signed char *)(((int)stk + 4)));
                        t30 = a4;
                        t27 = (t27 << 1);
                        t29 = (*(short *)((0xC1E8760 + t27)));
                        *(unsigned int *)((a4 + 0x30)) = t29;
                        t30 = (t30 + 0x30);
                        t27 = (FUN_0c0c0340(t30));
                    } else {
                        t46 = t28;
                        t47 = t29;
                        t48 = t30;
                        u49 = u32;
                    }
                    u32 = u49;
                    t27 = 0x34;
                    t28 = t46;
                    t29 = t47;
                    t30 = t48;
                    u32 = (*(float *)((a4 + t27)));
                    u32 = (u32 + 18.0f);
                }
                t31 = (t31 - 1);
                *(float *)((a4 + t27)) = u32;
                continue;
            }
            break;
        }
        t54 = *(short *)((a4 + 0x76));
        if ((int)t54 < 0) {
            t72 = t54;
            if ((t54 == -1) && (t31 != 0)) {
                t55 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t55 - 1);
                t66 = t54;
                if ((*(signed char *)(((t55 - 1) + 0x0))) != 0) {
                    t57 = *(int *)0xC23A258;
                    t60 = t57;
                    if ((t57 & 4) != 0) {
                        *(unsigned int *)((a4 + 0x30)) = (*(short *)0xC1E87E0);
                        *(float *)((a4 + 0x5C)) = 1.0f;
                        t60 = (FUN_0c0c0340((a4 + 0x30)));
                    }
                    t66 = t60;
                }
                t72 = t66;
            }
            t86 = t72;
        } else {
            t77 = *(int *)0xC23A258;
            t80 = t77;
            if ((t77 & 4) != 0) {
                *(unsigned int *)((a4 + 0x30)) = (*(short *)0xC1E87E0);
                *(float *)((a4 + 0x5C)) = 1.0f;
                t80 = (FUN_0c0c0340((a4 + 0x30)));
            }
            t86 = t80;
        }
        t92 = t86;
    }
    return t92;
}

int FUN_0c0ad126(int a4, float f4)
{
    float u7;
    int stk[3];

    if ((*(int *)((a4 + 0x30))) != 0) {
        
    } else {
        *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.083166644f);
        FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0AD2D0));
        nlAddVector((a4 + 0x34), (a4 + 0x40));
        FUN_0c010128((a4 + 0x4C), (a4 + 0x52));
        u7 = *(float *)0xC0AD2E0;
        *(unsigned short *)((a4 + 0x52)) = (int)((float)(*(short *)((a4 + 0x52))) * u7);
        *(unsigned short *)((a4 + 0x54)) = (int)((float)(*(short *)((a4 + 0x54))) * u7);
        *(unsigned short *)((a4 + 0x56)) = (int)((float)(*(short *)((a4 + 0x56))) * u7);
        if (0.0f > (*(float *)((a4 + 0x38)))) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            _quick_odd_mvn(u7);
            *(unsigned short *)((a4 + 0x4C)) = 0x3D00;
            *(unsigned short *)((a4 + 0x4E)) = 0xFFFFF100;
            *(unsigned short *)((a4 + 0x50)) = 0x0;
            FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY((*(short *)((a4 + 0x4E))));
    nlRotateAX((*(short *)((a4 + 0x4C))));
    nlRotateAZ((*(short *)((a4 + 0x50))));
    FUN_0c0c465c(0xFD9);
    return nlPopMatrix(0x1);
}
