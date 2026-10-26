/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db840(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e61d4(void);
int FUN_0c05fd8c(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);

int FUN_0c05fd8c(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int t1;
    int t10;
    int t12;
    int t23;
    int t14;

    t1 = FUN_0c0e19aa(0xC060152, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t23 = *(short *)((a5 + 0x8));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (((unsigned short)t23 << 1) + (unsigned short)t23);
    *(volatile int *)((a4 + 0xBC));
    *(volatile int *)((t1 + 0x1E8));
    FUN_0c0e61d4();
    FUN_0c0e61d4();
    *(unsigned int *)((t1 + 0x220)) = 0x38E;
    *(unsigned int *)((t1 + 0x244)) = 0x0;
    *(float *)((t1 + 0x24C)) = f5;
    *(float *)((t1 + 0x250)) = f6;
    *(float *)((t1 + 0x254)) = f7;
    *(unsigned int *)((t1 + 0x248)) = a8;
    if ((int)a8 > (int)0x8) {
        *(unsigned int *)((t1 + 0x248)) = 0x8;
    }
    *(unsigned short *)((t1 + 0x6C)) = a6;
    *(unsigned short *)((t1 + 0x6E)) = (a7 + (*(short *)((a4 + 0x6E))));
    *(unsigned short *)((t1 + 0x70)) = 0x0;
    FUN_0c0dc5a0();
    FUN_0c0dc890((*(short *)((t1 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((t1 + 0x6C))));
    FUN_0c0dc950((*(short *)((t1 + 0x70))));
    FUN_0c0dcc70(0.0f, 0.0f, (-f4));
    FUN_0c0db840((t1 + 0x48));
    return FUN_0c0dc4c0(0x1);
}
