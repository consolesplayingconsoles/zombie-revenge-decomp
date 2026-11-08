/* Straight-line functions with calls and guards (batch gen_abi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d637e(int, int, int, float);
int FUN_0c0d6604(int, int, int, float);
int FUN_0c0d70c8(int);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0e5f1c(void);
void FUN_0c0d4b14(int a4, int a5, int a6, float f4);
struct o16C_int { char p[0x16C]; int v; };
struct o16C_uint { char p[0x16C]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct oAC_int { char p[0xAC]; int v; };


void FUN_0c0d4b14(int a4, int a5, int a6, float f4)
{
    int i;
    int P;
    int Q;
    int R;
    int v;
    int k;
    int n;
    int st;
    int act;
    float f;
    float s;
    float d;
    float r;
#define PI(x) (*(int *)(P + (x)))
#define PF(x) (*(float *)(P + (x)))
#define QI(x) (*(int *)(Q + (x)))
#define GF(x) (*(float *)((i << 5) + (x)))
#define ROLL() (FUN_0c0da2e0(), FUN_0c0e5f1c())
#define RMOD(m) (v = FUN_0c0da2e0(), v >= 0 ? (v & (m)) : (~((~v + 1) & (m)) + 1))

    for (i = 0; i < 2; i++) {
        P = i * 0x1D4 + 0xC9436B4;
        Q = (1 - i) * 0x1D4 + 0xC9436B4;
        R = PI(0x6C);
        PI(0x30) = 0;
        if (PI(0) == 0 || *(int *)((i << 2) + 0xC247594) == 0) {
            continue;
        }
        if (PI(0x7C) >= 0 && PI(0x40) != 4 && (((struct oAC_int *)(R))->v) == 21) {
            PI(0x30) = 4;
            PI(0x16C) = 3;
            continue;
        }
        if (PI(0x40) != 1) {
            v = PI(0x10);
            FUN_0c0da2e0();
            if (v < FUN_0c0e5f1c() + 4) {
                continue;
            }
        }
        st = PI(0x40);
        if (st != 4 && st != 5) {
            if ((PI(0x24) & 0x2000000) != 0 && PI(0x40) != 4) {
                if (RMOD(0x1F) != 0) {
                    goto acted;
                }
                if (ROLL() == 0 && (PI(0x24) & 0x4000000) != 0 && ROLL() == 0) {
                    PI(0x30) = 4;
                    PI(0x16C) = 0xC;
                } else if ((PI(0x2C) & 4) == 0) {
                    PI(0x30) = 4;
                    PI(0x16C) = 0;
                } else {
                    PI(0x30) = 5;
                }
                goto acted;
            }
            if ((PI(0x1C) & 64) != 0) {
                if ((FUN_0c0da2e0() & 1) != 0) {
                    if (PI(0x40) != 3) {
                        PI(0x30) = 3;
                        goto acted;
                    }
                } else if (PI(0x40) != 4 && ROLL() == 0) {
                    PI(0x30) = 4;
                    PI(0x16C) = (PI(0x24) & 0x4000000) != 0 ? 0xC : 0xA;
                    goto acted;
                }
            }
            if ((PI(0x20) & 64) != 0) {
                if (PI(0x40) != 5 && (PI(0x20) & 16) != 0) {
                    if ((PI(0x24) & 0x1000000) == 0 || ROLL() == 0) {
                        PI(0x30) = 5;
                    }
                    goto acted;
                }
                if (PI(0x40) != 4 && (PI(0x20) & 8) != 0) {
                    if ((PI(0x24) & 0x8000000) != 0 && ROLL() == 0) {
                        PI(0x30) = 4;
                        PI(0x16C) = 1;
                        goto acted;
                    }
                    if (ROLL() == 0) {
                        PI(0x30) = 4;
                        PI(0x16C) = ((PI(0x24) & 0x4000000) != 0 && (QI(0x20) & 16) != 0) ? 0xC : 0xA;
                        goto acted;
                    }
                }
                if (PI(0x40) != 8 && ROLL() == 0 && (PI(0x20) & 24) == 0) {
                    PI(0x30) = 8;
                    FUN_0c0d637e(P, 4, a6, f4);
                    goto acted;
                }
            }
            if (PI(0x7C) < 0) {
                goto acted;
            }
            if (PI(0x40) != 4 && ((PI(0x24) & 0x20000000) != 0
                    || ((PI(0x24) & 0x10000000) != 0 && (QI(0x24) & 0x10000000) != 0))) {
                PI(0x30) = 4;
                PI(0x16C) = 0;
                goto acted;
            }
            if (PI(0x40) != 1 && PI(0x10) > 0x1E && (((struct oAC_int *)(R))->v) >= 0xF && (((struct oAC_int *)(R))->v) <= 0x13) {
                PI(0x68) = 0;
                PI(0x30) = 2;
                FUN_0c0d637e(P, 4, a6, f4);
            }
        }
acted:
        if (PI(0x30) != 0) {
            continue;
        }
        act = -1;
        switch (PI(0x40)) {
        case 1:
            if (PI(0x68) != 0) {
                PI(0x68) -= 1;
            }
            if ((PI(0x1C) & 64) != 0) {
                break;
            }
            if ((PI(0x20) & 32) != 0) {
                PI(0x30) = 3;
                break;
            }
            if (ROLL() == 0) {
                if ((PI(0x20) & 16) != 0) {
                    if (ROLL() == 0) {
                        PI(0x30) = 5;
                    }
                    break;
                }
                if ((PI(0x20) & 8) != 0) {
                    if (ROLL() == 0) {
                        PI(0x30) = 4;
                        PI(0x16C) = 0;
                    }
                    break;
                }
            }
            if ((PI(0x20) & 64) == 0) {
                if ((PI(0x28) & 8) != 0 && (PI(0x20) & 2) != 0 && (ROLL() == 0 || ((QI(0x1C) & 128) != 0 && ROLL() == 0))) {
                    PI(0x30) = 7;
                    act = 3;
                    break;
                }
                if ((PI(0x28) & 4) != 0 && ((PI(0x20) & 1) != 0 || ROLL() == 0)) {
                    PI(0x30) = 7;
                    act = 2;
                    break;
                }
            }
            if (PI(0x68) != 0) {
                break;
            }
            if ((PI(0x2C) & 4) != 0) {
                if ((PI(0x24) & 32) != 0) {
                    if (ROLL() == 0) {
                        PI(0x30) = 5;
                        break;
                    }
                } else if (ROLL() == 0) {
                    PI(0x30) = 7;
                    act = 4;
                    break;
                }
            } else {
                if ((PI(0x20) & 8) != 0 || RMOD(0x1F) == 0) {
                    PI(0x30) = 4;
                    PI(0x16C) = 0;
                    break;
                }
                if ((PI(0x20) & 4) != 0) {
                    PI(0x30) = 6;
                    FUN_0c0d637e(P, 1, a6, f4);
                    PI(0x50) = 1;
                }
            }
            if ((PI(0x20) & 128) != 0 && ROLL() == 0) {
                PI(0x30) = 7;
                act = 1;
                break;
            }
            if (RMOD(0xF) == 0) {
                PI(0x30) = 2;
                act = 4;
                break;
            }
            k = PI(0x94);
            if (k == 0) {
                if ((PI(0x24) & 32) == 0) {
                    PI(0x30) = 6;
                    FUN_0c0d637e(P, 1, a6, f4);
                    PI(0x50) = 1;
                    goto settle;
                }
                if (RMOD(0x3F) == 0) {
                    PI(0x5C) = 0x400;
                    PI(0x64) = 0x3C;
                    goto settle;
                }
                k = 1;
            }
            if (k == 1 || k == 2) {
                if (ROLL() == 0) {
                    if ((PI(0x2C) & 4) == 0) {
                        PI(0x30) = 4;
                        PI(0x16C) = 0;
                        goto settle;
                    }
                    if ((PI(0x24) & 0x18000) != 0) {
                        if ((PI(0x2C) & 1) == 0) {
                            if (RMOD(7) == 0) {
                                PI(0x30) = 5;
                                goto settle;
                            }
                        } else {
                            if (RMOD(3) == 0) {
                                PI(0x30) = 4;
                                PI(0x16C) = 0xB;
                            }
                            goto settle;
                        }
                    }
                }
            } else if (k != 3) {
                goto settle;
            }
            PI(0x30) = 7;
            FUN_0c0d637e(P, 1, a6, f4);
settle:
            if (PI(0x30) == 0 && (PI(0x24) & 32) == 0) {
                PI(0x30) = 6;
                FUN_0c0d637e(P, 1, a6, f4);
                PI(0x50) = 1;
            }
            break;
        case 2:
            if ((PI(0x24) & 0x400) != 0) {
                PI(0x30) = 1;
            } else if (PI(0x68) != 0) {
                PI(0x68) -= 1;
            } else if ((PI(0x20) & 16) != 0 || (PI(0x20) & 128) != 0 || (PI(0x1C) & 0x400) != 0) {
                PI(0x30) = 1;
            }
            break;
        case 3:
            if (PI(0x48) == 0 || (PI(0x1C) & 0x200) != 0) {
                if ((PI(0x24) & 32) == 0) {
                    PI(0x54) = PI(0x98);
                    PI(0x58) = 1;
                } else {
                    PI(0x48) += 1;
                }
            } else if (PI(0x48) == 1) {
                if (ROLL() == 0 || (PI(0x20) & 32) == 0) {
                    PI(0x30) = 1;
                } else if ((PI(0x24) & 32) == 0) {
                    PI(0x30) = 6;
                    FUN_0c0d637e(P, 1, a6, f4);
                    PI(0x50) = 1;
                } else {
                    PI(0x5C) = 0x400;
                    PI(0x64) = 0x1E;
                }
            }
            break;
        case 4:
            if (PI(0x48) == 0 || (PI(0x1C) & 0x200) != 0) {
                if ((PI(0x24) & 32) != 0) {
                    PI(0x48) += 1;
                } else if (ROLL() == 0) {
                    PI(0x54) = PI(0x98);
                    f = GF(0xC943524);
                    s = f * 16384.0f;
                    r = FUN_0c0da300();
                    v = PI(0x54);
                    d = (-(f * 16384.0f)) / (1.0f + 1.0f);
                    d = d + r * s;
                    PI(0x54) = (int)((float)v + d);
                    PI(0x58) = 1;
                    PI(0x48) += 1;
                } else {
                    PI(0x54) = PI(0x98);
                    PI(0x58) = 1;
                }
            } else if (PI(0x48) == 1) {
                if (PI(0x16C) == 12 || PI(0x16C) == 10) {
                    if (FUN_0c0d6604(P, Q, PI(0x16C), GF(0xC943524)) == 0) {
                        PI(0x48) += 1;
                    }
                } else {
                    n = 0;
                    k = PI(0x16C);
                    for (;;) {
                        if (k == 0) {
                            FUN_0c0da2e0();
                            k = FUN_0c0e5f1c() + 1;
                            PI(0x16C) = k;
                        }
                        k = 0;
                        if (++n > 8 || FUN_0c0d6604(P, Q, PI(0x16C), GF(0xC943524)) != 0) {
                            break;
                        }
                    }
                    PI(0x48) += 1;
                }
            } else if (PI(0x48) == 2) {
                if (PI(0x170) == 0 || (PI(0x1C) & 16) == 0 || PI(0x170) == 12 || PI(0x170) >= 6 || PI(0x170) <= 8) {
                    PI(0x48) += 1;
                }
            } else if ((PI(0x1C) & 32) == 0) {
                PI(0x30) = 1;
                break;
            }
            if ((PI(0x16C) != 12 && PI(0x16C) != 10 && (PI(0x1C) & 64) != 0) || ((((struct o20C_int *)(R))->v) & 0x8000) != 0
                    || (PI(0x20) & 64) != 0 || PI(0x10) > 0xB4) {
                PI(0x30) = 1;
            }
            break;
        case 5:
            if (PI(0x48) == 0 || (PI(0x1C) & 0x200) != 0) {
                if ((PI(0x24) & 32) != 0) {
                    PI(0x48) += 1;
                } else if (ROLL() == 0) {
                    PI(0x54) = PI(0x98);
                    f = GF(0xC94352C);
                    s = ((-f) + 1.0f) * 16384.0f;
                    d = ((-f) + 1.0f) * 16384.0f;
                    d = -d;
                    r = FUN_0c0da300();
                    v = PI(0x54);
                    d = d / (1.0f + 1.0f);
                    d = d + r * s;
                    PI(0x54) = (int)((float)v + d);
                    PI(0x58) = 1;
                    PI(0x48) += 1;
                } else {
                    PI(0x54) = PI(0x98);
                    PI(0x58) = 1;
                }
            } else if (PI(0x48) == 1) {
                if ((PI(0x2C) & 8) != 0) {
                    PI(0x5C) = ((PI(0x18) & 2) != 0) ? (((FUN_0c0da2e0() & 1) == 0) ? 2 : 0x200) : 2;
                } else {
                    PI(0x5C) = ((PI(0x18) & 2) != 0) ? 0x200 : 2;
                }
                PI(0x64) = 3;
                PI(0x48) += 1;
            } else if ((PI(0x1C) & 0x400) != 0) {
                PI(0x30) = 2;
                FUN_0c0d637e(P, 4, a6, f4);
            }
            break;
        case 6:
            if (((0x10 << PI(0x50)) & PI(0x24)) != 0 || (PI(0x28) & 3) != 0) {
                PI(0x30) = 1;
            }
            break;
        case 7:
            if ((PI(0x28) & 3) != 0) {
                PI(0x30) = 2;
                act = 4;
                break;
            }
            if (PI(0x74) != 0 && PI(0x74) != 1) {
                if ((PI(0x24) & 0x200) != 0 && FUN_0c0d70c8(P) != 0) {
                    PI(0x30) = 9;
                    break;
                }
            } else if ((((PI(0x2C) & 7) == 0 && (PI(0x24) & 0x400) != 0) || ((PI(0x2C) & 7) != 0 && (PI(0x24) & 0x1C00) != 0))
                    && PI(0x10) > 0x1E) {
                if ((PI(0x1C) & 8) == 0) {
                    PI(0x30) = 1;
                } else if ((PI(0x20) & 8) != 0 || ROLL() == 0) {
                    PI(0x5C) = 0x200;
                    PI(0x64) = 3;
                    PI(0x30) = 1;
                }
                break;
            }
            if ((PI(0x24) & 0x1000000) == 0) {
                break;
            }
            f = GF(0xC943530);
            if (PF(0x90) > (float)((int)(((-f) + 1.0f) * 60.0f) + 0x14)
                    || ((PI(0x24) & 1) != 0 && ROLL() == 0)
                    || ((PI(0x20) & 64) != 0 && ROLL() == 0)) {
                PI(0x5C) = 0x400;
                PI(0x64) = 3;
            }
            break;
        case 8:
            if ((PI(0x24) & 0x200) != 0) {
                PI(0x30) = 1;
            }
            break;
        case 9:
            if (FUN_0c0d70c8(P) == 0) {
                if (ROLL() != 0) {
                    PI(0x30) = 2;
                    act = 4;
                } else {
                    PI(0x30) = 5;
                }
            }
            break;
        }
        if (act >= 0) {
            FUN_0c0d637e(P, act, a6, f4);
        }
        if (PI(0x3C) != 0) {
            PI(0x3C) -= 1;
            if (PI(0x30) == PI(0x38)) {
                PI(0x30) = 0;
            }
        }
    }
#undef PI
#undef PF
#undef QI
#undef GF
#undef ROLL
#undef RMOD
}
