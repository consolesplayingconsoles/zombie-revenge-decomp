/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0321d4(int, int);
int FUN_0c034238(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c024938(int a4, int a5, int a6, int a7);
struct o494_int { char p[0x494]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o52C_uint { char p[0x52C]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };


int FUN_0c024938(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((int)((((struct o544_int *)(a4))->v)) < 0) {
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        t0 = (((struct o4F4_int *)(a4))->v);
        t1 = *(int *)(((((((struct o4F8_int *)(a4))->v)) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
    }
    if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        t0 = (((struct o4F4_int *)(a4))->v);
        t1 = *(int *)(((((((struct o4F8_int *)(a4))->v)) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, 0xC247030, a6, a7);
    }
    if ((*(int *)((0xC247030 + (((((struct o494_int *)(a4))->v)) << 2)))) != 4) {
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        t0 = (((struct o4F4_int *)(a4))->v);
        t1 = *(int *)(((((((struct o4F8_int *)(a4))->v)) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, 0xC247030, a6, a7);
    }
    t0 = *(int *)((0xC246FF0 + (((((struct o510_int *)(a4))->v)) << 2)));
    t1 = *(int *)((0xC246FF0 + (((((struct o494_int *)(a4))->v)) << 2)));
    if (((((struct o4D0_int *)(t1))->v)) == 0) {
        t2 = FUN_0c034238(t0, a4);
        t3 = FUN_0c034238(t0, t1);
        if (8192.0f > _builtin_fabsf((float)(short)((unsigned short)t3 - (unsigned short)t2))) {
            if ((int)(unsigned short)t2 > (int)(unsigned short)t3) {
                t1 = (((((struct o6E_short *)(t0))->v)) + (unsigned short)t3);
            } else {
                t1 = (((((struct o6E_short *)(t0))->v)) + (unsigned short)t2);
            }
            u0 = (float)t1;
            u0 = u0 + 0.5f * (_builtin_fabsf((float)(short)((unsigned short)t3 - (unsigned short)t2)));
            FUN_0c0546fe(a4, (int)(u0 + 32768.0f), 0x400, 0x0);
            (((struct o4E4_uint *)(a4))->v) = 0x0;
        } else {
            FUN_0c034fbc(a4, 0x400, 0x0, 0x1);
            (((struct o4E4_uint *)(a4))->v) = 0x1;
        }
        (((struct o52C_uint *)(a4))->v) = ((((struct o6E_short *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t0 + 0x30)); }
        (((struct o4C8_uint *)(a4))->v) = 0x2;
        FUN_0c0321d4(a4, ((((struct o544_int *)(a4))->v)));
        (((struct o4E0_uint *)(a4))->v) = ((((struct o494_int *)(a4))->v));
    } else {
        (((struct o4C8_uint *)(a4))->v) = 0x2;
        FUN_0c0321d4(a4, ((((struct o544_int *)(a4))->v)));
    }
    (((struct o564_uint *)(a4))->v) = 0x0;
    (((struct o56C_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

