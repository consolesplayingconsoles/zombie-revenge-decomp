/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0885d4(int a4);

int FUN_0c0885d4(int a4)
{
    int stk[15];
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register float u7;
    register float u11;
    register int t15;
    register int t16;
    register int t19;
    register int t20;
    register int t26;
    register int t31;

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x40)));
    t2 = 0x0;
    for (;;) {
        t3 = FUN_0c0e1830(0xC088D54, 0x64);
        FUN_0c0e19d0(t3);
        t5 = *(int *)((t1 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268)); }
        u7 = (1.0f + 1.0f);
        u7 = u7 + 7.62962736e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t3 + 0x50)) = u7;
        *(unsigned int *)(((0x48 + t3) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
        *(unsigned short *)(((0x5C + t3) + 0x0)) = (FUN_0c0da2e0());
        *(float *)((t3 + 0x4C)) = 1.0f;
        *(unsigned int *)((t3 + 0x60)) = 0xA;
        u11 = 0.5f;
        u11 = u11 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t3 + 0x44)) = ((*(float *)((a4 + 0x34))) * u11);
        FUN_0c0dc5a0();
        t15 = (*(short *)((t1 + 0x6E)));
        *(int *)((int)stk + 4) = t15;
        t16 = FUN_0c0da2e0();
        nlRotateAY(((((t16 & 0x3FFF) + t15) + t2) - 8192));
        t19 = (*(short *)((t1 + 0x6C)));
        *(int *)((int)stk + 4) = t19;
        t20 = FUN_0c0da2e0();
        nlRotateAX((((t20 & 0x1FFF) + t19) - 7168));
        nlRotateAZ((*(short *)((t1 + 0x70))));
        FUN_0c0db470((t3 + 0x3C), (t3 + 0x3C));
        nlPopMatrix(0x1);
        t26 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t26 - 1);
        if ((int)(t26 - 1) <= 0) {
            FUN_0c0e19f2();
        }
        t31 = *(int *)(((int)stk + 8));
        t2 = (t2 + 0x7FFF);
        *(unsigned int *)(((int)stk + 8)) = (t31 - 1);
        if ((t31 - 1) == 0) {
            break;
        }
    }
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.98999995f);
    return 0x34;
}

