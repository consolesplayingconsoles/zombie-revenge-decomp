/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e7e8(int, int, int);
float FUN_0c01f172(int);
int FUN_0c01f18e(int);
int FUN_0c04a258(int);
int FUN_0c04aa34(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04b344(int, int, int, int, int, int, int, int, int);
int FUN_0c04b564(int);
int FUN_0c04b8a8(int);
int FUN_0c04b8e4(int);
int FUN_0c04b982(int);
int FUN_0c04ba58(int);
int FUN_0c04bae4(int, int);
int FUN_0c04bb86(int, int);
int FUN_0c04bc36(int);
int FUN_0c04bc68(int, int);
int FUN_0c04bd40(int, int);
int FUN_0c04bdb6(int, int);
int FUN_0c04bde0(int);
int FUN_0c04be14(int);
int FUN_0c04bf48(int, int);
int FUN_0c04c42e(int, int);
int FUN_0c04c514(int);
int FUN_0c04c62c(int, int, int, int, int, int, int, int);
int FUN_0c04cc54(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04ceca(int, int, int, int, int, int);
int FUN_0c04d094(int, int);
int FUN_0c04d112(int);
int FUN_0c04d13c(int, int);
int FUN_0c04d1ce(int);
int FUN_0c04d1f8(int);
int FUN_0c04d270(int, int);
int FUN_0c04d2ec(int);
int FUN_0c04d34a(int, int);
int FUN_0c04d402(int);
int FUN_0c04d448(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c04d8e0(int, int);
int FUN_0c04d9dc(int);
int FUN_0c04da18(int, int);
int FUN_0c04daec(int);
int FUN_0c04dce8(int);
int FUN_0c04dec8(int, int);
int FUN_0c04e1cc(int);
int FUN_0c04e324(int, int);
int FUN_0c04e3da(int, int);
int FUN_0c04e402(int, int);
int FUN_0c04e506(int);
int FUN_0c04e782(int);
int FUN_0c04e80c(int);
int FUN_0c04e862(int);
int FUN_0c04ea16(int, int);
int FUN_0c04ed20(int, int);
int FUN_0c04fe58(int, int);
int FUN_0c04ff94(int, int);
int FUN_0c04fffe(int, int);
int FUN_0c050b9e(int, int);
int FUN_0c050c78(int, int, int, int, int, int, int, int);
int FUN_0c050dac(int);
int FUN_0c05399c(int, float);
int FUN_0c056588(int, float);
int FUN_0c057950(int, int);
int FUN_0c057ec8(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c08ad98(int);
int FUN_0c08b088(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c5f5e(int);
int FUN_0c0c6b48(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cd56c(int, float, float);
int FUN_0c0cd632(int, float);
int FUN_0c0cf3b0(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlAddVector3op(int, int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_odd_mvn(int, int, int, int, float, float, float);
void FUN_0c04a318(int a4, int a5, float f4);
int FUN_0c057142(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void FUN_0c0cce64(int a4, int a5, int a6, int a7);

void FUN_0c04a318(int a4, int a5, float f4)
{
    int t2;
    int t3;
    int t6;
    int t30;
    int t49;
    int t53;
    int t56;
    int t57;
    int t58;
    int t59;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t72;
    int t74;
    int t82;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t101;
    int t102;
    int t109;
    int t110;
    int t111;
    int t121;
    int t122;
    int t123;
    int t126;
    int t127;
    int t130;
    int t133;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0xBC)));
    FUN_0c05399c(a4, f4);
    t2 = *(int *)(((int)stk + 4));
    t3 = *(int *)((a4 + 0x210));
    if ((unsigned int)(t3 - 1) >= (unsigned int)0x9D) {
        FUN_0c04a258(a4);
        if ((*(int *)(((t2 << 2) + 0xC246FD8))) == 0) {
            t6 = FUN_0c04bf48(a4, a5);
            if (t6 == 0) {
                FUN_0c04ed20(a4, a5);
                FUN_0c04fe58(a4, a5);
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c057ec8(a4);
                FUN_0c04bc68(a4, a5);
                FUN_0c04dce8(a4);
                FUN_0c04e324(a4, a5);
                FUN_0c04e782(a4);
            }
        } else {
            FUN_0c04c62c(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        }
        FUN_0c04c42e(a4, a5);
        FUN_0c04be14(a4);
        FUN_0c04aa34(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    } else {
        switch (((t3 - 1) << 1)) {
            case 0:
            {
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c04aa34(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                FUN_0c04c62c(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
                break;
            case 2:
            case 4:
            case 10:
            case 18:
            case 22:
            case 24:
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            case 36:
            case 38:
            case 40:
            case 42:
            case 44:
            case 46:
            case 48:
            case 50:
            case 52:
            case 54:
            case 56:
            case 58:
            case 60:
            case 62:
            case 72:
            case 74:
            case 76:
            case 78:
            case 84:
            case 86:
            case 90:
            case 96:
            case 98:
            case 100:
            case 102:
            case 104:
            case 106:
            case 108:
            case 126:
            case 128:
            case 138:
            case 142:
            case 148:
            case 150:
            case 152:
            case 186:
            case 202:
            case 206:
            case 208:
            case 216:
            case 218:
            case 220:
            case 222:
            case 234:
            case 236:
            case 240:
            case 250:
            case 254:
            case 256:
            case 258:
            case 270:
            case 272:
            case 274:
            case 276:
            case 278:
            case 280:
            case 282:
            case 284:
            case 286:
            case 288:
            case 290:
            case 292:
            case 294:
            case 296:
            case 298:
            case 300:
            case 302:
            case 304:
            {
                FUN_0c04a258(a4);
                if ((*(int *)(((t2 << 2) + 0xC246FD8))) == 0) {
                    t30 = FUN_0c04bf48(a4, a5);
                    if (t30 == 0) {
                        FUN_0c04ed20(a4, a5);
                        FUN_0c04fe58(a4, a5);
                        FUN_0c04d8e0(a4, a5);
                        FUN_0c04da18(a4, a5);
                        FUN_0c057ec8(a4);
                        FUN_0c04bc68(a4, a5);
                        FUN_0c04dce8(a4);
                        FUN_0c04e324(a4, a5);
                        FUN_0c04e782(a4);
                    }
                } else {
                    FUN_0c04c62c(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                }
                FUN_0c04c42e(a4, a5);
                FUN_0c04be14(a4);
                FUN_0c04aa34(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
                break;
            case 6:
            {
                FUN_0c04e1cc(a4);
            }
                break;
            case 8:
            {
                t49 = ((int (*)(int))(0xC04E236))(a4);
            }
                break;
            case 12:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c050b9e(a4, a5);
            }
                break;
            case 14:
            {
                FUN_0c050dac(a4);
            }
                break;
            case 16:
            {
                t53 = ((int (*)(int))(0xC050DF4))(a4);
            }
                break;
            case 20:
            {
                FUN_0c050c78(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
                break;
            case 64:
            {
                FUN_0c04ea16(a4, a5);
            }
                break;
            case 66:
            {
                t56 = ((int (*)(int))(0xC04EBCC))(a4);
            }
                break;
            case 68:
            {
                t57 = ((int (*)(int))(0xC04EC34))(a4);
            }
                break;
            case 70:
            {
                t58 = ((int (*)(int))(0xC04ECBA))(a4);
            }
                break;
            case 80:
            {
                t59 = ((int (*)(int))(0xC04E03A))(a4);
            }
                break;
            case 82:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04daec(a4);
            }
                break;
            case 88:
            {
                FUN_0c04e80c(a4);
            }
                break;
            case 92:
            {
                FUN_0c04e862(a4);
            }
                break;
            case 94:
            {
                t64 = ((int (*)(int))(0xC04E972))(a4);
            }
                break;
            case 110:
            {
                t65 = ((int (*)(int))(0xC04C236))(a4);
            }
                break;
            case 112:
            {
                t66 = ((int (*)(int))(0xC04C1E0))(a4);
            }
                break;
            case 114:
            {
                t67 = ((int (*)(int))(0xC04C204))(a4);
            }
                break;
            case 116:
            {
                t68 = ((int (*)(int))(0xC04C8D4))(a4);
            }
                break;
            case 118:
            {
                t69 = ((int (*)(int))(0xC04CAF8))(a4);
            }
                break;
            case 120:
            {
                FUN_0c04cc54(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
                break;
            case 122:
            {
                FUN_0c04ceca(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            }
                break;
            case 124:
            {
                t72 = ((int (*)(int))(0xC04CF44))(a4);
            }
                break;
            case 130:
            {
                FUN_0c04d448(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
                break;
            case 132:
            {
                t74 = ((int (*)(int))(0xC04D812))(a4);
            }
                break;
            case 134:
            {
                FUN_0c04d094(a4, a5);
            }
                break;
            case 136:
            {
                FUN_0c04d112(a4);
            }
                break;
            case 140:
            {
                FUN_0c04d13c(a4, a5);
            }
                break;
            case 144:
            {
                FUN_0c04d1ce(a4);
            }
                break;
            case 146:
            {
                FUN_0c04d1f8(a4);
            }
                break;
            case 154:
            {
                FUN_0c04d270(a4, a5);
            }
                break;
            case 156:
            {
                FUN_0c04d2ec(a4);
            }
                break;
            case 158:
            {
                t82 = ((int (*)(int))(0xC04D30C))(a4);
            }
                break;
            case 160:
            {
                FUN_0c04d34a(a4, a5);
            }
                break;
            case 162:
            {
                FUN_0c04d402(a4);
            }
                break;
            case 164:
            {
                t85 = ((int (*)(int))(0xC04BEC2))(a4);
            }
                break;
            case 166:
            {
                t86 = ((int (*)(int))(0xC04BEE6))(a4);
            }
                break;
            case 168:
            {
                t87 = ((int (*)(int))(0xC04BFD8))(a4);
            }
                break;
            case 170:
            {
                t88 = ((int (*)(int))(0xC04C078))(a4);
            }
                break;
            case 172:
            {
                t89 = ((int (*)(int))(0xC04C174))(a4);
            }
                break;
            case 174:
            {
                t90 = ((int (*)(int))(0xC04C002))(a4);
            }
                break;
            case 176:
            {
                t91 = ((int (*)(int))(0xC04C09C))(a4);
            }
                break;
            case 178:
            {
                t92 = ((int (*)(int))(0xC04C0DE))(a4);
            }
                break;
            case 180:
            {
                t93 = ((int (*)(int))(0xC04C120))(a4);
            }
                break;
            case 182:
            {
                t94 = ((int (*)(int))(0xC04C19E))(a4);
            }
                break;
            case 184:
            {
            }
                break;
            case 188:
            {
                FUN_0c04b344(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
            }
                break;
            case 190:
            {
                FUN_0c04b564(a4);
            }
                break;
            case 192:
            {
                FUN_0c04b8a8(a4);
            }
                break;
            case 194:
            {
                FUN_0c04b8e4(a4);
            }
                break;
            case 196:
            {
                FUN_0c04b982(a4);
            }
                break;
            case 198:
            {
                FUN_0c04ba58(a4);
            }
                break;
            case 200:
            {
                t101 = ((int (*)(int))(0xC04F608))(a4);
            }
                break;
            case 204:
            {
                t102 = ((int (*)(int))(0xC04F414))(a4);
            }
                break;
            case 210:
            {
                FUN_0c04bae4(a4, a5);
            }
                break;
            case 212:
            {
                FUN_0c04bb86(a4, a5);
            }
                break;
            case 214:
            {
                FUN_0c04bc36(a4);
            }
                break;
            case 224:
            {
                FUN_0c04bd40(a4, a5);
            }
                break;
            case 226:
            {
                FUN_0c04bdb6(a4, a5);
            }
                break;
            case 228:
            {
                FUN_0c04bde0(a4);
            }
                break;
            case 230:
            {
                t109 = ((int (*)(int))(0xC04E608))(a4);
            }
                break;
            case 232:
            {
                t110 = ((int (*)(int))(0xC04E670))(a4);
            }
                break;
            case 238:
            {
                t111 = ((int (*)(int))(0xC04B280))(a4);
            }
                break;
            case 242:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c04e3da(a4, a5);
            }
                break;
            case 244:
            {
                FUN_0c04e402(a4, a5);
            }
                break;
            case 246:
            {
                FUN_0c04e506(a4);
            }
                break;
            case 248:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04d9dc(a4);
            }
                break;
            case 252:
            {
                FUN_0c04c514(a4);
            }
                break;
            case 260:
            {
                t121 = ((int (*)(int))(0xC04C378))(a4);
            }
                break;
            case 262:
            {
                t122 = ((int (*)(int))(0xC04C41C))(a4);
            }
                break;
            case 264:
            {
                t123 = ((int (*)(int))(0xC04F188))(a4);
            }
                break;
            case 266:
            {
                FUN_0c04be14(a4);
                FUN_0c04dec8(a4, a5);
            }
                break;
            case 268:
            {
                t126 = ((int (*)(int))(0xC04DFDC))(a4);
            }
                break;
            case 306:
            {
                t127 = ((int (*)(int))(0xC050CD0))(a4);
            }
                break;
            case 308:
            {
                FUN_0c04ff94(a4, a5);
            }
                break;
            case 310:
            {
                FUN_0c04fffe(a4, a5);
            }
                break;
            default:
            {
                t130 = ((int (*)(int))(0xC0500DC))(a4);
            }
                break;
        }
    }
    t133 = *(int *)((((t2 << 2) + 0xC246FE0) + 0x0));
    *(unsigned int *)((((t2 << 2) + 0xC246FE0) + 0x0)) = (t133 + 0x1);
    if ((int)(t133 + 0x1) > (int)0x62) {
        *(unsigned int *)((0xC246FE0 + (t2 << 2))) = 0x62;
    }
}


