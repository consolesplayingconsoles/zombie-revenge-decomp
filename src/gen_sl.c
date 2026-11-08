/* Straight-line functions with calls and guards (batch gen_sl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbp)
struct o200_uint { char p[0x200]; unsigned int v; };
struct o0_uint { unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
void syIntInit(int a4, int a5);

void syIntInit(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xFF00001C = ((*(int *)0xFF00001C) | 0x800);
    if (a4 == 0x80000000) {
        *(unsigned int *)0xC22FC24 = 0xC22FE20;
        *(unsigned int *)0xC22FC80 = 0xC22FE20;
        (((struct o8_uint *)0xC22FFC4)->v) = 0x0;
        (((struct o0_uint *)0xC22FFC4)->v) = a5;
    } else {
        *(unsigned int *)0xC22FC24 = 0xC22FCB4;
        *(unsigned int *)0xC22FC80 = 0xC22FCB4;
        (((struct o8_uint *)0xC22FFC4)->v) = 0x0;
        (((struct o0_uint *)0xC22FFC4)->v) = 0x0;
    }
    t1 = 0xC22FFCC;
    t2 = 0xC22FC84;
    t3 = ((int)_builtin_get_vbr());
    for (;;) {
        if ((unsigned int)t2 > (unsigned int)0xC22FCB4) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t1;
        t3 = (t3 + 0x4);
    }
    t2 = (int)_builtin_get_vbr();
    t4 = ((int)_builtin_get_vbr());
    t5 = (((unsigned int)((unsigned int)((unsigned int)(t3 - t2) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t4);
        t5 = (t5 - 0x1);
        t4 = (t4 + 0x20);
        if (t5 == 0) {
            break;
        }
    }
    t2 = t1;
    t1 = 0xC22FBF0;
    t3 = (((int)_builtin_get_vbr()) + 0x100);
    for (;;) {
        if ((unsigned int)t1 > (unsigned int)0xC22FC28) {
            break;
        }
        t2 = (*(int *)((t1 + 0x0)));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t2;
        t3 = (t3 + 0x4);
    }
    t1 = (int)_builtin_get_vbr();
    t4 = (((int)_builtin_get_vbr()) + 0x400);
    t5 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t3 - t1)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t4);
        t5 = (t5 - 0x1);
        t4 = (t4 + 0x20);
        if (t5 == 0) {
            break;
        }
    }
    t1 = t2;
    t2 = 0xC22FBF0;
    t3 = (((int)_builtin_get_vbr()) + 0x400);
    for (;;) {
        if ((unsigned int)t2 > (unsigned int)0xC22FC28) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t1;
        t3 = (t3 + 0x4);
    }
    t2 = (int)_builtin_get_vbr();
    t4 = (((int)_builtin_get_vbr()) + 0x1000);
    t5 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t3 - t2)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t4);
        t5 = (t5 - 0x1);
        t4 = (t4 + 0x20);
        if (t5 == 0) {
            break;
        }
    }
    t2 = t1;
    t1 = 0xC22FC28;
    t3 = (((int)_builtin_get_vbr()) + 0x600);
    for (;;) {
        if ((unsigned int)t1 > (unsigned int)0xC22FC84) {
            break;
        }
        t2 = (*(int *)((t1 + 0x0)));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t2;
        t3 = (t3 + 0x4);
    }
    t1 = (int)_builtin_get_vbr();
    t2 = (((int)_builtin_get_vbr()) + 0x1800);
    t4 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t3 - t1)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t2);
        t4 = (t4 - 0x1);
        t2 = (t2 + 0x20);
        if (t4 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t0 = 0xFFFFFE40;
    for (;;) {
        t1 = (((int)_builtin_get_vbr()) + (((t0 >> 1) >> 1) >> 1));
        t0 = (t0 + 0x20);
        (((struct o200_uint *)(t1))->v) = 0xC22FAF8;
        if ((int)t0 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}
