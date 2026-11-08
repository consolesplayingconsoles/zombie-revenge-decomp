/* Straight-line functions with calls and guards (batch gen_rf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int FUN_0c086dcc(int a4);
struct o3C_float { char p[0x3C]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };


int FUN_0c086dcc(int a4)
{
    int stk[8];
    register int t0;
    register int t3;
    register float u5;
    register int t6;
    register int t7;
    register int t9;
    register float u12;
    register float u14;
    register float u16;
    register float u18;
    register float t21;
    register float u22;
    register float u35;
    register float u36;
    register float u37;
    register int t39;
    register int t57;
    register int t59;
    register int t50;

    t0 = (((struct o44_int *)(a4))->v);
    (((struct o44_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)((((struct o40_int *)(a4))->v))) {
        t50 = a4;
    } else {
        t3 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        u5 = 0.299999982f;
        u5 = u5 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
        *(float *)(((int)stk + 16)) = u5;
        (((struct o44_uint *)(a4))->v) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC10AA74;
        t6 = 0xC10AA74;
        t7 = 0xC10AA6C;
        for (;;) {
            t9 = FUN_0c0e19aa(0xC08C3EC, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t9);
            u12 = 0.799999952f;
            u12 = u12 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            (((struct o7C_float *)(t9))->v) = u12;
            u14 = 0.799999952f;
            u14 = u14 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            (((struct o80_float *)(t9))->v) = u14;
            u16 = 0.799999952f;
            u16 = u16 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            (((struct o84_float *)(t9))->v) = u16;
            u18 = 0.299999982f;
            u18 = u18 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
            (((struct o90_float *)(t9))->v) = (((((struct o3C_float *)(a4))->v)) * u18);
            (((struct o9A_ushort *)(t9))->v) = 0xC5F;
            (((struct o9C_ushort *)(t9))->v) = 0x1;
            (((struct oA0_ushort *)(t9))->v) = 0x1F;
            (((struct o94_float *)(t9))->v) = 1.0f;
            nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (0x254 + t3));
            t21 = FUN_0c0dcea0((((int)stk + 4) + 0x10));
            u22 = *(float *)(((int)stk + 16));
            FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
            FUN_0c0dc5a0();
            FUN_0c0dcca0((0x254 + t3));
            nlRotateAY((*(int *)(((int)stk + 8))));
            nlRotateAX((*(int *)(((int)stk + 4))));
            u35 = (t21 * u22);
            u36 = *(float *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            u37 = (u35 * (float)(FUN_0c0da2e0()));
            (((struct o70_float *)(t9))->v) = (u37 * u36);
            (((struct o78_float *)(t9))->v) = (t21 - ((t21 * u22)));
            t39 = *(short *)((t6 + 0x0));
            t6 = (t6 + 0x2);
            (((struct o8A_ushort *)(t9))->v) = ((((FUN_0c0da2e0()) & 0x1FFF) + t39) - 4096);
            FUN_0c0db470((t9 + 0x70), (t9 + 0x70));
            nlPopMatrix(0x1);
            if ((unsigned int)t7 < (unsigned int)(*(int *)(((int)stk + 12)))) continue;
            break;
        }
    }
    t57 = (((struct o48_int *)(a4))->v);
    (((struct o48_uint *)(a4))->v) = (t57 - 1);
    t59 = 0x48;
    if ((int)(t57 - 1) <= 0) {
        t59 = (FUN_0c0e19f2());
    }
    return t59;
}
