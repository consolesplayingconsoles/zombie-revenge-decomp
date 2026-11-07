/* Straight-line functions with calls and guards (batch gen_lw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c26dc(int);
int FUN_0c0c2718(int);
int FUN_0c0c2764(int);
int FUN_0c0c27a0(int);
int FUN_0c0c3d90(int, int, int, int);
int FUN_0c0c3ef8(int);
int FUN_0c0c4654(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0db0a0(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0c2868(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o30_int { char p[0x30]; int v; };


int FUN_0c0c2868(int a4)
{
    int q[4];
    int o;
    int i;
    int k;
    int sum;
    int found;
    float step;
    float s;
#define OI(x) (*(int *)(o + (x)))
#define OF(x) (*(float *)(o + (x)))
#define OS(x) ((unsigned short)*(short *)(o + (x)))
#define A0 ((((struct o28_int *)0xC2497B8)->v))
#define A8 ((((struct o30_int *)0xC2497B8)->v))
#define A28 ((((struct o0_uint *)0xC249808)->v))
#define B0 ((((struct o28_int *)0xC249808)->v))
#define B8 ((((struct o30_int *)0xC249808)->v))
#define KEYS ((((struct o0_int *)0xC2497B8)->v))
#define NMOD (*(int *)0xC204750)
#define MODEL(i) ((unsigned short)*(short *)(((i) << 4) + 0xC11989C + 0xC))
#define LOADED(i) (*(int *)(((i) << 2) + 0xC209AE8))
#define UP(x) if ((OF(x) += 0.01f) > 1.0f) OF(x) = 1.0f
#define DN(x) if (0.0f > (OF(x) -= 0.01f)) OF(x) = 0.0f

    o = a4;
    if ((A0 & 0x90) != 0 || ((A8 & 0x90) != 0 && A28 > 0x14)) {
        if (A8 & 0x10) {
            if (A8 & 2) {
                OI(0x44) += *(short *)((OI(0x3C) << 1) + 0xC1E3FE0) - OI(0x40);
            } else {
                OI(0x44) += 10;
            }
        } else {
            OI(0x44) += 1;
        }
        if (OI(0x44) >= NMOD) {
            OI(0x44) = 0;
        }
    } else if ((A0 & 0x60) != 0 || ((A8 & 0x60) != 0 && A28 > 0x14)) {
        if (A8 & 0x20) {
            if (A8 & 2) {
                OI(0x44) = OI(0x44) - (OI(0x40) + 1);
            } else {
                OI(0x44) = OI(0x44) - 10;
            }
        } else {
            OI(0x44) -= 1;
        }
        if (OI(0x44) < 0) {
            OI(0x44) = NMOD - 1;
        }
    } else {
        goto pads;
    }
    FUN_0c0c4654();
    if (MODEL(OI(0x44)) != OI(0x3C)) {
        if (LOADED(OI(0x3C)) != 0) {
            FUN_0c0c3ef8(*(int *)LOADED(OI(0x3C)));
        }
        k = MODEL(OI(0x44));
        OI(0x3C) = k;
        q[0] = k << 2;
        if (LOADED(k) != 0) {
            q[1] = LOADED(k);
            FUN_0c0c3d90(*(int *)q[1], (unsigned short)*(short *)(q[1] + 4), (unsigned short)*(short *)(q[1] + 6), 0);
        }
    }
pads:
    if (B8 == 0) {
        OI(0x34) = 0;
        OF(0x38) = 0.099999994f;
    } else if (++OI(0x34) > 10) {
        OI(0x34) = 0;
        if ((OF(0x38) *= 1.29999995f) > 5.0f) {
            OF(0x38) = 5.0f;
        }
    }
    step = OF(0x38);
    if (OI(0x30) == 0) {
        if (KEYS & 0x80000) {
            FUN_0c0c26dc(o);
        }
        if (B8 & 2) {
            if (B8 & 0x10) OI(0x60) -= 0x100; else if (B8 & 0x20) OI(0x60) += 0x100;
            if (B8 & 128) OI(0x64) += 0x100; else if (B8 & 64) OI(0x64) -= 0x100;
            if (B8 & 0x200) OI(0x68) += 0x100; else if (B8 & 0x400) OI(0x68) -= 0x100;
        } else if (A8 & 0x200) {
            s = step * 0.01f;
            if (B8 & 128) OF(0x54) += s; else if (B8 & 64) OF(0x54) -= s;
            if (B8 & 0x10) OF(0x58) += s; else if (B8 & 0x20) OF(0x58) -= s;
            if (B8 & 0x200) OF(0x5C) -= s; else if (B8 & 0x400) OF(0x5C) += s;
        } else if (A8 & 0x400) {
            s = step * 0.01f;
            if (B8 & 0x10) { if (0.0f > (OF(0xD4) -= s)) OF(0xD4) = 0.0f; }
            else if (B8 & 0x20) { if ((OF(0xD4) += s) > 1.0f) OF(0xD4) = 1.0f; }
            if (B8 & 64) { if (0.0f > (OF(0xD8) -= s)) OF(0xD8) = 0.0f; }
            else if (B8 & 128) { if ((OF(0xD8) += s) > 1.0f) OF(0xD8) = 1.0f; }
            if (B8 & 0x200) { if (0.0f > (OF(0xDC) -= s)) OF(0xDC) = 0.0f; }
            else if (B8 & 0x400) { if ((OF(0xDC) += s) > 1.0f) OF(0xDC) = 1.0f; }
        } else {
            if (B8 & 128) OF(0x48) += step; else if (B8 & 64) OF(0x48) -= step;
            if (B8 & 0x10) OF(0x4C) += step; else if (B8 & 0x20) OF(0x4C) -= step;
            if (B8 & 0x200) OF(0x50) -= step; else if (B8 & 0x400) OF(0x50) += step;
        }
    } else if (OI(0x30) == 1) {
        if ((A8 & 0x200) && (A8 & 2) && (B0 & 2)) {
            OI(0xB0) ^= 1;
        }
        if (OI(0xB0) != 0 && (A8 & 0x200)) {
            if (B8 & 128) { UP(0xBC); } else if (B8 & 64) { DN(0xBC); }
            if (B8 & 0x10) { UP(0xC0); } else if (B8 & 0x20) { DN(0xC0); }
            if (B8 & 0x200) { UP(0xC4); } else if (B8 & 0x400) { DN(0xC4); }
        } else if (OI(0xB0) != 0 && (A8 & 2)) {
            if (B8 & 128) { UP(0xC8); } else if (B8 & 64) { DN(0xC8); }
            if (B8 & 0x10) { UP(0xCC); } else if (B8 & 0x20) { DN(0xCC); }
            if (B8 & 0x200) { UP(0xD0); } else if (B8 & 0x400) { DN(0xD0); }
        } else if (OI(0xB0) != 0 && (A8 & 0x400)) {
            if (B8 & 128) { UP(0xB4); } else if (B8 & 64) { DN(0xB4); }
            if (B8 & 0x200) { UP(0xB8); } else if (B8 & 0x400) { DN(0xB8); }
        } else if (B8 & 2) {
            if (B8 & 128) { UP(0xAC); } else if (B8 & 64) { DN(0xAC); }
            if (B8 & 0x10) { UP(0xA8); } else if (B8 & 0x20) { DN(0xA8); }
        } else {
            if (B8 & 0x10) OI(0x9C) -= 0x100; else if (B8 & 0x20) OI(0x9C) += 0x100;
            if (B8 & 128) OI(0xA0) += 0x100; else if (B8 & 64) OI(0xA0) -= 0x100;
        }
        if (KEYS & 0x80000) {
            FUN_0c0c2764(o);
        }
    } else if (OI(0x30) == 2) {
        if (A8 & 0x200) {
            if (B8 & 0x10) OI(0x90) -= 0x100; else if (B8 & 0x20) OI(0x90) += 0x100;
            if (B8 & 128) OI(0x94) += 0x100; else if (B8 & 64) OI(0x94) -= 0x100;
            if (B8 & 0x200) OI(0x98) += 0x100; else if (B8 & 0x400) OI(0x98) -= 0x100;
        } else {
            if (B8 & 128) OF(0x78) += step; else if (B8 & 64) OF(0x78) -= step;
            if (B8 & 0x10) OF(0x7C) += step; else if (B8 & 0x20) OF(0x7C) -= step;
            if (B8 & 0x200) OF(0x80) -= step; else if (B8 & 0x400) OF(0x80) += step;
        }
        if (KEYS & 0x80000) {
            FUN_0c0c2718(o);
        }
    }
    if (KEYS & 8) {
        if (++OI(0x30) == 3) {
            OI(0x30) = 0;
        }
    }
    FUN_0c0c27a0(o);
    nlPushMatrix(0);
    FUN_0c0dcc70(OF(0x48), OF(0x4C), OF(0x50));
    nlRotateAY(OI(0x64));
    nlRotateAX(OI(0x60));
    nlRotateAZ(OI(0x68));
    if (OI(0x30) == 2) {
        nlPushMatrix(0);
        FUN_0c0c4654();
        for (i = 0; i < 3; i++) {
            FUN_0c0c475c(0x9E, 0.5f);
            nlRotateAY(0x4000);
        }
        FUN_0c0c475c(0x9E, 0.5f);
        nlRotateAX(0x4000);
        FUN_0c0c475c(0x9E, 0.5f);
        nlRotateAX(0x8000);
        FUN_0c0c475c(0x9E, 0.5f);
        nlPopMatrix(1);
    }
    FUN_0c0dcc70(OF(0x78), OF(0x7C), OF(0x80));
    nlRotateAY(OI(0x94));
    nlRotateAX(OI(0x90));
    nlRotateAZ(OI(0x98));
    FUN_0c084800(OF(0xD4), OF(0xD8), OF(0xDC));
    nlScale(OF(0x54), OF(0x58), OF(0x5C));
    FUN_0c0de000((OF(0x54) + OF(0x58)) + OF(0x5C));
    FUN_0c0c465c((unsigned short)*(short *)((OI(0x44) << 1) + 0xC1127D8));
    FUN_0c0849da();
    nlPopMatrix(1);
    sum = 0;
    found = 0;
    for (i = 0; i < 0x5D; i++) {
        if (found == 0 && OI(0x44) < *(short *)((i << 1) + 0xC1E3FE0) + sum) {
            OI(0x40) = OI(0x44) - sum;
            found = 1;
        } else {
            sum += *(short *)((i << 1) + 0xC1E3FE0);
        }
    }
    for (i = 0; i < 11; i++) {
        FUN_0c0db0a0(2, 0x20 - i);
        k = OI(0x3C) + i - 4;
        if (k >= 0) {
            nlPrintf(0xC1E409C, *(int *)((k << 2) + 0xC1E3E4C));
        }
        if (i == 4) {
            nlPrintf(0xC1E40A4, OI(0x40), OI(0x44));
        } else {
            nlPrintf(0xC1E40B4);
        }
    }
    FUN_0c0db0a0(2, 0x24);
    for (i = OI(0x44) - 6; i <= OI(0x44) + 6; i++) {
        if (i == OI(0x44)) {
            nlPrintf(0xC1E40B8, i, *(int *)((OI(0x44) << 4) + 0xC11989C));
        } else {
            k = i;
            if (i >= NMOD) {
                k = i - NMOD;
            } else if (k < 0) {
                k = NMOD + i;
            }
            nlPrintf(0xC1E40CC, k, *(int *)((k << 4) + 0xC11989C));
        }
    }
    FUN_0c0db0a0(2, 0x32);
    nlPrintf(0xC1E40DC, OI(0x30) == 0 ? 0x2A : 0x20);
    nlPrintf(0xC1E40E8, OF(0x48));
    nlPrintf(0xC1E40F4, OF(0x4C));
    nlPrintf(0xC1E4100, OF(0x50));
    nlPrintf(0xC1E410C, OF(0x54));
    nlPrintf(0xC1E4118, OF(0x58));
    nlPrintf(0xC1E4124, OF(0x5C));
    nlPrintf(0xC1E4130, OS(0x60), OF(0xD4));
    nlPrintf(0xC1E4140, OS(0x64), OF(0xD8));
    nlPrintf(0xC1E4150, OS(0x68), OF(0xDC));
    FUN_0c0db0a0(0x14, 0x32);
    nlPrintf(0xC1E4160, OI(0x30) == 1 ? 0x2A : 0x20);
    nlPrintf(0xC1E416C, OS(0x9C));
    nlPrintf(0xC1E4178, OS(0xA0));
    nlPrintf(0xC1E4184, OF(0xA8));
    nlPrintf(0xC1E4190, OF(0xAC));
    nlPrintf(0xC1E419C, OI(0xB0) ? 0xC1E41A8 : 0xC1E41AC);
    if (OI(0xB0) != 0) {
        nlPrintf(0xC1E41B0, OF(0xB4));
        nlPrintf(0xC1E41BC, OF(0xB8));
        FUN_0c0db0a0(0x21, 0x33);
        nlPrintf(0xC1E41C8, OF(0xBC));
        nlPrintf(0xC1E41D4, OF(0xC0));
        nlPrintf(0xC1E41E0, OF(0xC4));
        nlPrintf(0xC1E41EC, OF(0xC8));
        nlPrintf(0xC1E41F8, OF(0xCC));
        nlPrintf(0xC1E4204, OF(0xD0));
    }
    FUN_0c0db0a0(0x2E, 0x32);
    nlPrintf(0xC1E4210, OI(0x30) == 2 ? 0x2A : 0x20);
    nlPrintf(0xC1E40E8, OF(0x78));
    nlPrintf(0xC1E40F4, OF(0x7C));
    nlPrintf(0xC1E4100, OF(0x80));
    nlPrintf(0xC1E416C, OS(0x90));
    nlPrintf(0xC1E4178, OS(0x94));
    nlPrintf(0xC1E421C, OS(0x98));
    return FUN_0c0d8c40(0xFF101010, 0xFF101010, 0xFF101010);
#undef OI
#undef OF
#undef OS
#undef A0
#undef A8
#undef A28
#undef B0
#undef B8
#undef KEYS
#undef NMOD
#undef MODEL
#undef LOADED
#undef UP
#undef DN
}
