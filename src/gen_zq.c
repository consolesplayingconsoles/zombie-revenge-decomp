/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int FUN_0c016d20(int a4, int a5, int a6, int a7);

int FUN_0c016d20(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;
    register int t0;
    register int t1;

    t3 = a6;
    t4 = a7;
    for (;;) {
        if ((int)(*(short *)((t3 + 0x0))) < 0) {
            break;
        }
        if (((*(short *)((t3 + 0x0)))) == a5) {
            t4 = (*(int *)((t3 + 0x4)));
            for (;;) {
                if ((int)(*(int *)((t4 + 0x0))) < 0) {
                    break;
                }
                t0 = (*(short *)((t4 + 0x4)));
                switch (t0) {
                case 1:
                    t0 = (*(int *)((t4 + 0x0)));
                    *(unsigned char *)((a4 + t0)) = (*(int *)((t4 + 0x8)));
                    break;
                case 2:
                    t1 = (*(int *)((t4 + 0x0)));
                    t1 = (t1 + a4);
                    *(unsigned short *)((t1 + 0x0)) = (*(int *)((t4 + 0x8)));
                    break;
                case 4:
                    t1 = (*(int *)((t4 + 0x0)));
                    t1 = (t1 + a4);
                    *(unsigned int *)((t1 + 0x0)) = (*(int *)((t4 + 0x8)));
                    break;
                }
                t4 = (t4 + 0xC);
            }
        }
        t3 = (t3 + 0x8);
    }
    return t0;
}
