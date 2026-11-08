/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(int);
int FUN_0c092638(int a4);
int FUN_0c059500(int a4);
int FUN_0c059620(int a4);
struct o244_uint { char p[0x244]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c092638(int a4)
{
    int t0;
    int t9;
    int t21;
    int t16;
    int t23;
    int t3;
    int t4;
    int t5;

    t0 = (((struct o8C_int *)(a4))->v);
    t9 = 0x1;
    if (((*(int *)((0xC247604 + (((((struct oBC_int *)(t0))->v)) << 2)))) == 1) && ((t3 = (((struct o88_int *)(a4))->v), t4 = *(int *)((0xC247030 + (t3 << 2))), t4 == 4) && (t5 = *(int *)0xC23ED5C, (t5 & 0x100A4) == 0))) {
        t9 = 0x0;
    }
    t21 = t9;
    if ((*(int *)((0xC247030 + (((((struct o88_int *)(a4))->v)) << 2)))) == 4) {
        t16 = t9;
        if (((((struct o2BC_int *)((*(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v)) != ((((struct o98_int *)(a4))->v))) {
            t16 = 0x1;
        }
        t21 = t16;
    }
    t23 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t23 - 1);
    if (((int)(t23 - 1) > 0) && (t21 == 0)) {
        return 0xA0;
    }
    (((struct o244_uint *)(t0))->v) = ((((struct o7C_int *)(a4))->v));
    return FUN_0c0e19f2();
}


