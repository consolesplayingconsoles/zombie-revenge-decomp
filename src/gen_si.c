/* Straight-line functions with calls and guards (batch gen_si): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _divls(void);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(void);
int vmsfb_sleep(void);
int vmsio_get_media_info(int a4, int a5, int a6, int a7);
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };


int vmsio_get_media_info(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t11;
    register int t13;
    register int t15;
    register int t16;
    register int t19;
    register int t20;
    register int t53;
    register int t54;
    register int t67;
    register int t63;

    t0 = *(int *)(((a4 << 2) + 0xC2382DC));
    *(unsigned int *)(((int)stk + 0)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0) {
        vmsfb_sleep();
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            vmsfb_sleep();
            t63 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo();
                    if ((int)t11 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = kdGetStatus(t0);
                    if (t13 == 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = kdIsChanged(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x4, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x6, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x8, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0xA, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0xC, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x10, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x12, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x14, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 0) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 10)));
                    (((struct o40_uint *)(a5))->v) = (unsigned short)(*(short *)(((int)stk + 8)));
                    (((struct o44_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 10)))));
                    (((struct o48_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 8)))));
                    return 0x0;
                }
                vmsfb_sleep();
                return 0xFFFFFF01;
            }
            vmsfb_sleep();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
}
