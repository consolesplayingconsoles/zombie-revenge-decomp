/* Straight-line functions with calls and guards (batch gen_acw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlRotateAY(int);
void FUN_0c06e56e(int a4, int a5);

void FUN_0c06e56e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a5 <= 0) {
    } else {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t2 = FUN_0c0e19aa(0xC06E384, 0xC4, (*(int *)(((*(int *)0xC247C60) + 0x30))));
            FUN_0c0e19d0(t2);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(t1); }
            *(unsigned short *)((t2 + 0x3C)) = 0x0;
            *(unsigned short *)((t2 + 0x3E)) = (*(int *)((t1 + 0xC)));
            *(unsigned short *)((t2 + 0x40)) = 0x0;
            FUN_0c0dc5a0();
            FUN_0c0dcca0(t1);
            nlRotateAY((*(int *)((t1 + 0xC))));
            nlGetMatrix((t2 + 0x50));
            nlPopMatrix(0x1);
            t3 = *(int *)((t1 + 0x10));
            *(unsigned short *)((t2 + 0x42)) = (*(short *)(((((t3 << 2) << 1) + 0xC0FB75C) + 0x0)));
            *(unsigned short *)(((0x46 + t2) + 0x0)) = (*(short *)(((((t3 << 2) << 1) + 0xC0FB75C) + 0x2)));
            *(unsigned int *)((t2 + 0x48)) = (*(int *)(((((t3 << 2) << 1) + 0xC0FB75C) + 0x4)));
            t3 = *(short *)((t2 + 0x46));
            if (t3 != 1) {
                if (t3 != 2) {
                } else {
                    if ((*(int *)((t1 + 0x14))) != 0) {
                        *(unsigned int *)((t2 + 0xA4)) = 0xC06E2CA;
                    } else {
                        *(unsigned int *)((t2 + 0xA4)) = 0xC06E0C4;
                    }
                }
            } else {
                if ((*(int *)((t1 + 0x14))) != 0) {
                    *(unsigned int *)((t2 + 0xA4)) = 0xC06E23C;
                } else {
                    *(unsigned int *)((t2 + 0xA4)) = 0xC06DF78;
                }
            }
            if ((*(int *)((t1 + 0x14))) != 0) {
                *(unsigned int *)((t2 + 0xB4)) = (*(int *)((t1 + 0x14)));
                t3 = *(int *)((t2 + 0xB4));
                *(unsigned int *)((t2 + 0xB4)) = (t3 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(((t3 + 0xC) - 12)); }
            }
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x18);
            if ((int)t0 < (int)a5) continue;
            break;
        }
    }
}
