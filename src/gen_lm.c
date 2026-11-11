/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int FUN_0c01c214(int, int);
int FUN_0c0c3fb8(int, int, int, int);
int FUN_0c0c4a00(int, int, int, int);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0d80c0(int);
int FUN_0c0e262a(int);
int FUN_0c0c3d90(int a4, int a5, int a6, int a7);

int FUN_0c0c3d90(int a4, int a5, int a6, int a7)
{
    register int t2;
    int t5;
    register int t7;
    register int t9;
    register int t11;
    register int t14;
    register int t30;
    register int t45;
    register int t54;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t13;
    register int t15;
    register int t36;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t55;
    register int t78;

    t2 = (FUN_0c0cbe74(0x3, a5, (*(int *)0xC4BFE28)));
    t5 = t4;
    t7 = t6;
    t9 = t8;
    t11 = t10;
    t14 = a4;
    for (;;) {
        if ((int)(*(short *)((t14 + 0x0))) < 0) {
            break;
        }
        t2 = (*(short *)((t14 + 0x0)));
        t2 = (t2 << 1);
        t15 = (*(short *)((0xC1127D8 + t2)));
        t15 = (unsigned short)t15;
        t5 = t15;
        t5 = (t5 << 1);
        t5 = (t5 + t15);
        t5 = (t5 << 2);
        t5 = (t5 + 0xC2623A0);
        t2 = (*(short *)((t5 + 0x8)));
        t2 = (t2 + 0x1);
        *(unsigned short *)((t5 + 0x8)) = t2;
        if ((*(int *)((t5 + 0x0))) == 0) {
            t5 = (*(short *)((t14 + 0x0)));
            t3 = 0xC4BFE28;
            t5 = (t5 << 2);
            t5 = (t5 << 2);
            t13 = (*(int *)((t3 + 0x0)));
            t5 = (t5 + 0xC11989C);
            t12 = (*(int *)((t5 + 0x8)));
            *(volatile short *)(((0xC + t5) + 0x0));
            t13 = (t13 + (*(int *)((t5 + 0x4))));
            t5 = ((t12 + 0x1F) & 0xFFFFFFE0);
            t5 = (t5 + 0x20);
            t2 = (FUN_0c0e262a(t5));
            t7 = t15;
            t7 = (t7 << 1);
            t7 = (t7 + t15);
            t5 = t2;
            t5 = (t5 + 0x1F);
            t7 = (t7 << 2);
            t3 = 0xC01C214;
            t7 = (t7 + 0xC2623A0);
            *(unsigned int *)((t7 + 0x4)) = t2;
            *(unsigned int *)((t7 + 0x0)) = (0xFFFFFFE0 & t5);
            t7 = ((t12 + 0x1F) & 0xFFFFFFE0);
            t30 = (0xFFFFFFE0 & t5);
            t5 = t13;
            t2 = (FUN_0c01c214(t5, t7));
            t9 = t13;
            t13 = 0x0;
            t11 = t30;
            t2 = 0x4;
            t5 = t13;
            t2 = ((int)((int)((t12 + 0x1F) & 0xFFFFFFE0) / (int)t2));
            t7 = t2;
            if ((int)t7 > 0) {
                for (;;) {
                    t3 = (*(int *)((t9 + 0x0)));
                    t9 = (t9 + 0x4);
                    t5 = (t5 + 0x1);
                    *(unsigned int *)((t11 + 0x0)) = t3;
                    t11 = (t11 + 0x4);
                    if ((int)t5 >= (int)t7) {
                        break;
                    }
                }
            }
            t3 = a7;
            if (t3 != 0) {
                t5 = t15;
                t2 = (FUN_0c0c4a00(t5, t7, t9, t11));
            } else {
                t36 = t3;
                t38 = t5;
                t39 = t7;
                t40 = t9;
                t41 = t11;
            }
            t3 = t36;
            t5 = t38;
            t7 = t39;
            t9 = t40;
            t11 = t41;
            t45 = t15;
            t15 = (t15 << 1);
            t15 = (t15 + t45);
            t15 = (t15 << 2);
            t12 = ((unsigned int)t12 >> 2);
            t15 = (t15 + 0xC2623A0);
            t2 = t12;
            t2 = (t2 << 2);
            t2 = (t2 + t30);
            t2 = (t2 - 4);
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t15 + 0xA)) = t2;
        }
        t14 = (t14 + 0x2);
    }
    t54 = (FUN_0c0cbe74(0x4, a6, (*(int *)0xC4BFE28)));
    t56 = t55;
    t57 = t12;
    t58 = t13;
    t59 = t14;
    t60 = a4;
    for (;;) {
        if ((int)(*(short *)((t60 + 0x0))) < 0) {
            break;
        }
        t54 = (*(short *)((t60 + 0x0)));
        t54 = (t54 << 1);
        t56 = (*(short *)((0xC1127D8 + t54)));
        t56 = (unsigned short)t56;
        t58 = t56;
        t58 = (t58 << 1);
        t58 = (t58 + t56);
        t58 = (t58 << 2);
        t54 = t58;
        t54 = (t54 + 0xC2623A0);
        t54 = (*(short *)((t54 + 0x8)));
        t54 = (unsigned short)t54;
        if (t54 == 1) {
            t59 = (*(short *)((t60 + 0x0)));
            t59 = (t59 << 2);
            t59 = (t59 << 2);
            t59 = (t59 + 0xC11989C);
            t54 = (*(short *)((t59 + 0xC)));
            t59 = (unsigned short)t54;
            t59 = (t59 << 2);
            t59 = (t59 << 1);
            t59 = (t59 + 0xC209E3C);
            t54 = (*(short *)((t59 + 0x6)));
            t56 = t54;
            t54 = (FUN_0c0d80c0(t56));
            t57 = (*(short *)((t59 + 0x0)));
            t56 = t58;
            t56 = (t56 + 0xC2623A0);
            t54 = (*(short *)((t59 + 0x4)));
            t56 = (*(int *)((t56 + 0x0)));
            t54 = (FUN_0c0c3fb8(t56, (((t57 << 2) << 2) + 0xC167780), ((t57 << 1) + 0xC163774), t54));
        } else {
            t78 = t56;
        }
        t60 = (t60 + 0x2);
        t56 = t78;
    }
    return t54;
}
