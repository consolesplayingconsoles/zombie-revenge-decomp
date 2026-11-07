/* Straight-line functions with calls and guards (batch gen_tf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);

int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC06078C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t1 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t1 = (*(int *)((a4 + 0x1EC)));
        }
        t2 = t1;
    } else {
        t2 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t0 + 0x1EC)) = t2;
    *(unsigned int *)(((0x1E8 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t0 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t0 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t1 = *(short *)((a5 + 0x8));
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (((unsigned short)t1 << 1) + (unsigned short)t1);
    t1 = *(int *)((a4 + 0xBC));
    t2 = *(int *)((t0 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
    *(unsigned int *)((t0 + 0x220)) = 0x291;
    *(unsigned int *)((t0 + 0x244)) = 0x0;
    *(float *)((t0 + 0x24C)) = f5;
    *(float *)((t0 + 0x250)) = f6;
    *(float *)((t0 + 0x254)) = f7;
    *(unsigned int *)((t0 + 0x248)) = a8;
    if ((int)a8 > (int)0x8) {
        *(unsigned int *)((t0 + 0x248)) = 0x8;
    }
    *(unsigned short *)((t0 + 0x6C)) = a6;
    *(unsigned short *)((t0 + 0x6E)) = (a7 + (*(short *)((a4 + 0x6E))));
    *(unsigned short *)((t0 + 0x70)) = 0x0;
    FUN_0c0dc5a0();
    nlRotateAY((*(short *)((t0 + 0x6E))));
    nlRotateAX((*(short *)((t0 + 0x6C))));
    nlRotateAZ((*(short *)((t0 + 0x70))));
    FUN_0c0dcc70(0.0f, 0.0f, (-f4));
    FUN_0c0db840((t0 + 0x48));
    nlPopMatrix(0x1);
    FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cc3f8(0x432A9);
}
