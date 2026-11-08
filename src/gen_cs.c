/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049c0a(int);
extern int FUN_0c0558f8();
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c4784(int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(int, int);
int FUN_0c05664c(int a4, int a5, int a6, int a7);
int FUN_0c08b124(int a4);
int FUN_0c0b7734(void);
struct o22C_int { char p[0x22C]; int v; };
struct o234_int { char p[0x234]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o238_int { char p[0x238]; int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o25C_int { char p[0x25C]; int v; };
struct o25C_uint { char p[0x25C]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct oC_int { char p[0xC]; int v; };



int FUN_0c05664c(int a4, int a5, int a6, int a7)
{
    int t20;
    int t23;
    int t24;
    int t68;
    int t78;
    int t86;
    int t120;
    int t129;
    int t130;
    int t1;
    int t146;
    float u77;

    if ((((*(int *)0xC23A1A8) & 0x8000) != 0) && (t1 = (((struct o22C_int *)(a4))->v), (t1 & 4) == 0)) {
        t20 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
        t146 = (FUN_0c0e19f2());
    } else {
        t23 = *(int *)((0xC247604 + (((((struct oBC_int *)(a4))->v)) << 2)));
        t24 = (((struct o0_int *)0xC23ED50)->v);
        if (t23 != 7) {
            if (t23 != 8) {
                if (t23 != 9) {
                    if (t23 != 1) {
                        if ((t23 != 2) && ((t23 != 11) && ((t23 != 3) && (t23 != 4)))) {
                            t146 = t23;
                            if (t23 != 10) {
                            } else {
                                t146 = 0x234;
                                if (((((struct o234_int *)(a4))->v)) == t24) {
                                    *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)) = ((((struct o238_int *)(a4))->v));
                                    (((struct o238_uint *)(a4))->v) = 0x0;
                                    t146 = 0x238;
                                }
                            }
                        } else {
                            if ((((((struct oC_int *)0xC23ED50)->v)) & 0x40000) != 0) {
                                t68 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                                FUN_0c0e19f2();
                            }
                            if (((((((struct o10_int *)0xC23ED50)->v)) & 1) != 0) && (u77 = (((struct o34_float *)(a4))->v), 5.0f > u77)) {
                                t78 = ((int (*)(int))(FUN_0c0558f8))(a4);
                                FUN_0c0e19f2();
                            }
                            t86 = (((struct o0_int *)0xC23ED50)->v);
                            if (((((struct o234_int *)(a4))->v)) != t86) {
                                (((struct o238_uint *)(a4))->v) = (*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)));
                                *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)) = 0xA;
                                (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.5f);
                                t146 = 0x34;
                            } else {
                                (((struct o234_uint *)(a4))->v) = t86;
                                t146 = 0x234;
                            }
                        }
                    } else {
                        (((struct o234_uint *)(a4))->v) = t24;
                        (((struct o25C_uint *)(a4))->v) = 0x0;
                        t146 = 0x25C;
                    }
                } else {
                    t146 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                    *(unsigned int *)((a4 + 0x0)) = 0xC056B1A;
                }
            } else {
                t120 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                (((struct o268_uint *)(a4))->v) = 0x0;
                *(unsigned int *)((a4 + 0x0)) = 0xC056AE8;
                t146 = 0x268;
            }
        } else {
            t129 = (((struct o25C_int *)(a4))->v);
            (((struct o25C_uint *)(a4))->v) = (t129 - 1);
            t146 = 0x25C;
            if ((int)(t129 - 1) <= 0) {
                t130 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                t146 = (FUN_0c0e19f2());
            }
        }
    }
    return t146;
}


