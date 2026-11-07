/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0321d4(int, int);
int FUN_0c034238(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c024938(int a4, int a5, int a6, int a7);

int FUN_0c024938(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((int)(*(int *)((a4 + 0x544))) < 0) {
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t0 = *(int *)((a4 + 0x4F4));
        t1 = *(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
    }
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t0 = *(int *)((a4 + 0x4F4));
        t1 = *(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, 0xC247030, a6, a7);
    }
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x494))) << 2)))) != 4) {
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t0 = *(int *)((a4 + 0x4F4));
        t1 = *(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((0xC1F79B8 + (((t0 << 1) + t0) << 2))))));
        return ((int (*)(int, int, int, int))(t1))(a4, 0xC247030, a6, a7);
    }
    t0 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x510))) << 2)));
    t1 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x494))) << 2)));
    if ((*(int *)((t1 + 0x4D0))) == 0) {
        t2 = FUN_0c034238(t0, a4);
        t3 = FUN_0c034238(t0, t1);
        if (8192.0f > _builtin_fabsf((float)(short)((unsigned short)t3 - (unsigned short)t2))) {
            if ((int)(unsigned short)t2 > (int)(unsigned short)t3) {
                t1 = ((*(short *)((t0 + 0x6E))) + (unsigned short)t3);
            } else {
                t1 = ((*(short *)((t0 + 0x6E))) + (unsigned short)t2);
            }
            u0 = (float)t1;
            u0 = u0 + 0.5f * (_builtin_fabsf((float)(short)((unsigned short)t3 - (unsigned short)t2)));
            FUN_0c0546fe(a4, (int)(u0 + 32768.0f), 0x400, 0x0);
            *(unsigned int *)((a4 + 0x4E4)) = 0x0;
        } else {
            FUN_0c034fbc(a4, 0x400, 0x0, 0x1);
            *(unsigned int *)((a4 + 0x4E4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x52C)) = (*(short *)((a4 + 0x6E)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t0 + 0x30)); }
        *(unsigned int *)((a4 + 0x4C8)) = 0x2;
        FUN_0c0321d4(a4, (*(int *)((a4 + 0x544))));
        *(unsigned int *)((a4 + 0x4E0)) = (*(int *)((a4 + 0x494)));
    } else {
        *(unsigned int *)((a4 + 0x4C8)) = 0x2;
        FUN_0c0321d4(a4, (*(int *)((a4 + 0x544))));
    }
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

