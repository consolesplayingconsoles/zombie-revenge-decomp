/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o10_float { char p[0x10]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct oE0_uint { char p[0xE0]; unsigned int v; };
struct oE4_uint { char p[0xE4]; unsigned int v; };
struct oE8_uint { char p[0xE8]; unsigned int v; };
struct oEC_uint { char p[0xEC]; unsigned int v; };
int FUN_0c0a79fa(int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c094c84(int a4, int a5);

int FUN_0c094c84(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t8;
    register int t11;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t24;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t45;
    register int t46;
    register int t47;
    register int t53;
    register int t54;
    register int t61;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t67;

    t0 = *(short *)((a5 + 0x4));
    t1 = *(short *)((a5 + 0x6));
    t2 = *(signed char *)(((unsigned short)t1 + 0xC10BC58));
    t3 = *(int *)((((unsigned short)t1 << 2) + 0xC10BC48));
    t5 = FUN_0c0e19aa(0xC094E80, 0xF0, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t5);
    *(unsigned int *)((t5 + 0x4)) = 0xC094C60;
    *(unsigned int *)((t5 + 0x30)) = a4;
    (((struct oE4_uint *)(t5))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct oDC_uint *)(t5))->v) = t3;
    (((struct oE0_uint *)(t5))->v) = (unsigned char)t2;
    (((struct oE8_uint *)(t5))->v) = ((unsigned short)t0 - 1);
    (((struct oEC_uint *)(t5))->v) = (unsigned short)t0;
    *(unsigned int *)(((int)stk + 20)) = (t5 + 0x34);
    *(unsigned int *)(((int)stk + 16)) = (unsigned char)t2;
    *(unsigned int *)(((int)stk + 24)) = ((((unsigned short)t0 << 2) + (unsigned short)t0) << 2);
    for (;;) {
        t8 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t8 + 0x4);
        *(int *)((int)stk + 0) = ((t8 + 0x4) - 4);
        *(unsigned int *)((((t8 + 0x4) - 4) + 0x0)) = (FUN_0c0e262a((*(int *)(((int)stk + 24)))));
        t11 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t11 - 1);
        if ((t11 - 1) == 0) {
            break;
        }
    }
    if ((int)((((struct oC0_int *)(a4))->v)) <= (int)0x5) {
        t18 = *(int *)((((((((struct oC4_int *)(a4))->v)) << 2) + (0xC10BC5C + (((((((struct oC0_int *)(a4))->v)) >> 1) << 2) << 1))) + 0x0));
        t19 = (unsigned char)t2;
        t20 = (t5 + 0x74);
        t21 = t3;
        for (;;) {
            t24 = *(short *)((t18 + ((unsigned char)(*(signed char *)((t21 + 0x0))) << 1)));
            t28 = t24;
            if (t24 == 0) {
                t28 = (*(int *)(((0x404 + a4) + ((unsigned char)(*(signed char *)((t21 + 0x0))) << 2))));
            }
            *(unsigned int *)((t20 + 0x0)) = t28;
            t19 = (t19 - 0x1);
            t20 = (t20 + 0x4);
            t21 = (t21 + 0x1);
            if (t19 == 0) {
                break;
            }
        }
    } else {
        t30 = (unsigned char)t2;
        t31 = (t5 + 0x74);
        t32 = t3;
        for (;;) {
            t33 = *(signed char *)((t32 + 0x0));
            t32 = (t32 + 0x1);
            t30 = (t30 - 1);
            *(unsigned int *)((t31 + 0x0)) = (*(int *)(((0x404 + a4) + ((unsigned char)t33 << 2))));
            t31 = (t31 + 0x4);
            if (t30 == 0) {
                break;
            }
        }
    }
    nlPushMatrix(0x0);
    t46 = (((struct oDC_int *)(t5))->v);
    *(unsigned int *)(((int)stk + 16)) = (unsigned char)t2;
    t45 = (t5 + 0x34);
    for (;;) {
        t47 = *(signed char *)((t46 + 0x0));
        t46 = (t46 + 0x1);
        t54 = *(int *)((t45 + 0x0));
        t45 = (t45 + 0x4);
        FUN_0c0dbda0((((((unsigned char)t47 << 2) << 2) << 2) + ((((struct o3E4_int *)(a4))->v))));
        FUN_0c0db840((((int)stk + 4) + 0x18));
        FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
        t53 = (unsigned short)t0;
        for (;;) {
            t53 = (t53 - 0x1);
            *(unsigned short *)((t54 + 0x0)) = (*(int *)(((int)stk + 4)));
            *(unsigned short *)((t54 + 0x2)) = (*(short *)(((int)stk + 8)));
            *(unsigned short *)((t54 + 0x4)) = (*(short *)(((int)stk + 12)));
            (((struct o8_float *)(t54))->v) = (*(float *)(((int)stk + 28)));
            (((struct oC_float *)(t54))->v) = (*(float *)(((int)stk + 32)));
            (((struct o10_float *)(t54))->v) = (*(float *)(((int)stk + 36)));
            t54 = (t54 + 0x14);
            if (t53 == 0) {
                break;
            }
        }
        t61 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t61 - 1);
        if ((t61 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t63 = (int)((int)(((unsigned short)t0 - 3) << 16) / (int)0x5);
    t64 = (((unsigned short)t0 - 3) << 16);
    t65 = ((0xC8 + t5) + 0x14);
    t66 = 0x5;
    t67 = ((0xB4 + t5) + 0x14);
    for (;;) {
        t64 = (t64 - t63);
        t66 = (t66 - 0x1);
        *(unsigned int *)(((t67 - 0x4) + 0x0)) = t64;
        t67 = (t67 - 0x4);
        *(unsigned int *)(((t65 - 0x4) + 0x0)) = t64;
        t65 = (t65 - 0x4);
        if (t66 == 0) {
            break;
        }
    }
    return t63;
}
