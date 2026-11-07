/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0bc798(int a4, int a5, int a6);

int FUN_0c0bc798(int a4, int a5, int a6)
{
    int stk[15];
    register int t1;
    register int t2;
    register int t61;
    register int t75;
    register int t76;
    register int t99;
    register int t100;
    register int t101;
    register int t103;
    register int t116;
    register int t117;
    register int t118;
    register int t121;
    register int t167;
    register int t174;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    int t44;
    int t54;
    register int t59;

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = 0x1000;
    t1 = 0x100;
    t2 = 0x1000;
    if ((0x100 & (*(int *)0xC23A1A8)) != 0) {
        t1 = 0x200;
        t2 = 0x2800;
    }
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x18) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x18) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    FUN_0c0a79fa((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((((int)stk + 4) + 0x18) + 0x8));
    *(unsigned short *)((a4 + 0x226)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(unsigned short *)((a4 + 0x228)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(unsigned short *)((a4 + 0x22A)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    FUN_0c0dc5a0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x24);
    FUN_0c0a79fa((((int)stk + 4) + 0x24), ((((int)stk + 4) + 0x24) + 0x4), ((((int)stk + 4) + 0x24) + 0x8));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0xC0))) == 50) {
    } else {
        if ((((*(int *)((a4 + 0x20C))) & 0x10015) != 0) && ((t39 = *(int *)((a4 + 0xBC)), t40 = *(int *)((0xC247484 + (t39 << 2))), t40 != -1) && ((t41 = *(int *)((a4 + 0xBC)), t42 = *(int *)((0xC247484 + (t41 << 2))), t43 = *(int *)(((t42 << 2) + 0xC247030)), t43 != 0) && (t44 = *(int *)((a4 + 0xC8)), (t44 & 0x2F5) != 0)))) {
            if (((int)(*(int *)((a4 + 0xBC))) < (int)0x2) && (t54 = *(short *)((a4 + 0xE8)), (int)t54 >= 0)) {
                t59 = (*(short *)((a4 + 0xE8)));
            } else {
                t59 = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247484) + 0x0)));
            }
            t61 = *(int *)((((t59 << 2) + 0xC246FF0) + 0x0));
            if (t61 != 0) {
                FUN_0c0a7714((((int)stk + 4) + 0x30), ((((int)stk + 4) + 0x30) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((t61 + 0x22C)))), ((*(float *)((a4 + 0x230))) - (*(float *)((t61 + 0x230)))), ((*(float *)((a4 + 0x234))) - (*(float *)((t61 + 0x234)))));
            }
            t75 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
            t76 = *(short *)((a4 + 0x6E));
            if (_builtin_fabsf((float)(short)(t76 - t75)) > 16384.0f) {
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
            }
            _builtin_fabsf((float)(short)(t76 - t75));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        }
        t99 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
        t100 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
        if (_builtin_fabsf((float)(short)(t100 - t99)) > (float)t1) {
            if (((int)(short)(t100 - t99) < (int)0x8000) && ((int)(short)(t100 - t99) > 0)) {
                t101 = *(short *)((a4 + 0x222));
                *(unsigned short *)((a4 + 0x222)) = (t101 + t1);
                if ((int)(short)(t101 + t1) > (int)t2) {
                    *(unsigned short *)((a4 + 0x222)) = t2;
                }
            } else {
                t103 = *(short *)((a4 + 0x222));
                *(unsigned short *)((a4 + 0x222)) = (t103 - t1);
                if ((int)(short)(t103 - t1) < (int)(-t2)) {
                    *(unsigned short *)((a4 + 0x222)) = (-t2);
                }
            }
        }
        t116 = *(int *)(((((int)stk + 4) + 0x30) + 0x0));
        t117 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
        if (_builtin_fabsf((float)(short)(t116 - t117)) > (float)t1) {
            if (((int)(short)(t116 - t117) < (int)0x8000) && ((int)(short)(t116 - t117) > 0)) {
                t118 = *(short *)((a4 + 0x220));
                *(unsigned short *)((a4 + 0x220)) = (t118 + 0x100);
                if ((int)(short)(t118 + 0x100) > (int)(*(int *)(((int)stk + 20)))) {
                    *(unsigned short *)((a4 + 0x220)) = 0x1000;
                }
            } else {
                t121 = *(short *)((a4 + 0x220));
                *(unsigned short *)((a4 + 0x220)) = (t121 - 0x100);
                if ((int)(short)(t121 - 0x100) < (int)0xFFFFF000) {
                    *(unsigned short *)((a4 + 0x220)) = 0xFFFFF000;
                }
            }
        }
        _builtin_fabsf((float)(short)(t100 - t99));
        _builtin_fabsf((float)(short)(t116 - t117));
    }
    nlPushMatrix(0x0);
    FUN_0c0dccf0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    nlScale((*(float *)((a4 + 0x274))), (*(float *)((a4 + 0x278))), (*(float *)((a4 + 0x27C))));
    if ((*(short *)((a4 + 0x238))) == 0) {
        FUN_0c0de000((*(float *)((a4 + 0x280))));
        t167 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(float *)((a4 + 0x458))));
    } else {
        *(unsigned short *)((a4 + 0x238)) = ((*(short *)0xC247CF8) + 0x1);
    }
    if ((*(int *)0xC260868) != 0) {
        t174 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t174 + 0x40);
        nlGetMatrix(((t174 + 0x40) - 64));
    }
    return (nlPopMatrix(0x1));
}
