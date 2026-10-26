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
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dcd30(int, int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dcef0(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e61d4(int, int, int, int, float, float, float);
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

int FUN_0c057142(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t15;
    int t26;
    int t47;
    float t48;
    float u49;
    int t55;
    int t59;
    int t90;
    int t98;
    int t115;
    float t116;
    float u117;
    int t124;
    int t134;
    float u137;
    int t149;
    int t154;
    float t155;
    int t162;
    int t167;
    int t179;
    int t202;
    int t205;
    int t207;
    int t217;
    int t221;
    int t227;
    int t229;
    int t234;
    int t251;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C057142:;
    t0 = *(int *)((R4 + 0x220));
    R11 = (0x0);
    R14 = (R4);
    R4 = (t0);
    F15 = ((1.0f + 1.0f));
    if ((t0 == 22)) goto L_C057180;
    goto L_C05716C;
    L_C05716C:;
    if ((R4 == 23)) goto L_C057180;
    goto L_C057174;
    L_C057174:;
    if ((R4 == 24)) goto L_C057180;
    goto L_C05717C;
    L_C05717C:;
    R4 = (0x0);
    goto L_C057182;
    L_C057182:;
    if ((R4 != 1)) goto L_C05719E;
    goto L_C05718A;
    L_C05718A:;
    if (((*(int *)0xC1FF6D4) != 0)) goto L_C05719E;
    goto L_C057192;
    L_C057192:;
    if (((*(int *)0xC204998) != 1)) goto L_C05719E;
    goto L_C05719A;
    L_C05719A:;
    R12 = (0x1);
    goto L_C0571A0;
    L_C0571A0:;
    t15 = *(int *)0xC23A1A8;
    R10 = (0xC23A1A8);
    R13 = (0x100);
    R4 = (t15);
    R8 = (0xC0E19F2);
    R9 = (0xC0CF3B0);
    if (((0x8000 & t15) == 0)) goto L_C0571C0;
    goto L_C0571B0;
    L_C0571B0:;
    if (((R4 & R13) == 0)) goto L_C0571B8;
    goto L_C0571B4;
    L_C0571B4:;
    FUN_0c0cf3b0(R14);
    goto L_C0571B8;
    L_C0571B8:;
    R0 = ((((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7)));
    goto L_C05780A;
    L_C05780A:;
    return R0;
    L_C0571C0:;
    t26 = *(int *)((R14 + 0x228));
    R0 = (t26);
    F13 = (-100.0f);
    F14 = (0.0f);
    F4 = (-0.0599999987f);
    if ((t26 == 11)) goto L_C05720C;
    goto L_C0571D2;
    L_C0571D2:;
    if ((R0 != 3)) goto L_C0571DA;
    goto L_C0571D6;
    L_C0571D6:;
    goto L_C0574AA;
    L_C0574AA:;
    *(float *)((R14 + 0x64)) = ((*(float *)((R14 + 0x64))) + F4);
    *(float *)((R14 + 0x54)) = (*(float *)((R14 + 0x60)));
    *(float *)((R14 + 0x58)) = (*(float *)((R14 + 0x64)));
    *(float *)((R14 + 0x5C)) = (*(float *)((R14 + 0x68)));
    *(unsigned short *)((R14 + 0x6E)) = ((*(short *)((R14 + 0x6E))) + 0x600);
    *(unsigned short *)((R14 + 0x6C)) = ((*(short *)((R14 + 0x6C))) + 0x300);
    FUN_0c01e7e8(R14, 0xA5C, 0xFFFFFFFF);
    if (((*(int *)((R14 + 0xA8))) == 0)) goto L_C05750C;
    goto L_C0574F0;
    L_C0574F0:;
    FUN_0c056588(R14, F4);
    *(float *)((R14 + 0x54)) = (*(float *)((R14 + 0x60)));
    *(float *)((R14 + 0x58)) = (*(float *)((R14 + 0x64)));
    *(float *)((R14 + 0x5C)) = (*(float *)((R14 + 0x68)));
    goto L_C05750C;
    L_C05750C:;
    t47 = (FUN_0c01f18e(R14)) == 0;
    if (t47) goto L_C05752E;
    goto L_C057516;
    L_C057516:;
    *(unsigned int *)((R14 + 0x228)) = 0xB;
    t48 = FUN_0c01f172(R14);
    u49 = *(float *)((R14 + 0x258));
    *(float *)((R14 + 0x34)) = (t48 + u49);
    F0 = ((t48 + u49));
    goto L_C057696;
    L_C057696:;
    *(unsigned short *)((R14 + 0x6C)) = R11;
    goto L_C05770A;
    L_C05770A:;
    if (((int)(*(int *)((R14 + 0x220))) > (int)0x18)) goto L_C057744;
    goto L_C057714;
    L_C057714:;
    if (((*(int *)((R14 + 0x264))) == 0)) goto L_C057732;
    goto L_C05771C;
    L_C05771C:;
    t55 = *(int *)((R14 + 0x268));
    *(unsigned int *)((R14 + 0x268)) = (t55 + 0x1);
    if (((t55 + 0x1) != 4)) goto L_C057744;
    goto L_C05772C;
    L_C05772C:;
    *(unsigned int *)((R14 + 0x264)) = R11;
    goto L_C057744;
    L_C057744:;
    if (((int)(*(int *)((R14 + 0x224))) >= 0)) goto L_C057754;
    goto L_C05774C;
    L_C05774C:;
    t59 = *(int *)0xC23A258;
    R0 = (t59);
    if (((t59 & 1) != 0)) goto L_C05780A;
    goto L_C057754;
    L_C057754:;
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70((*(float *)((R14 + 0x30))), (*(float *)((R14 + 0x34))), (*(float *)((R14 + 0x38))));
    FUN_0c0dc950((*(short *)((R14 + 0x70))));
    FUN_0c0dc890((*(short *)((R14 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((R14 + 0x6C))));
    if ((R12 != 0)) goto L_C0577EC;
    goto L_C057786;
    L_C057786:;
    if (((int)(*(int *)((R14 + 0x220))) > (int)0x18)) goto L_C0577E4;
    goto L_C057790;
    L_C057790:;
    FUN_0c0dcb80(F15, F15, F15);
    FUN_0c0de000(F15);
    FUN_0c0c465c(((*(int *)((R14 + 0x240))) + (*(int *)((R14 + 0x268)))));
    goto L_C0577EC;
    L_C0577EC:;
    return FUN_0c0dc4c0(0x1);
    L_C0577E4:;
    FUN_0c0c465c((*(int *)((R14 + 0x240))));
    goto L_C0577EC;
    L_C057732:;
    if ((((*(int *)0xC23A258) & 127) != 0)) goto L_C057744;
    goto L_C05773A;
    L_C05773A:;
    *(unsigned int *)((R14 + 0x264)) = 0x1;
    *(unsigned int *)((R14 + 0x268)) = R11;
    goto L_C057744;
    L_C05752E:;
    if ((!(F13 > (*(float *)((R14 + 0x34)))))) goto L_C057544;
    goto L_C057536;
    L_C057536:;
    if (((R13 & (*(int *)((R10 + 0x0)))) == 0)) goto L_C057540;
    goto L_C05753C;
    L_C05753C:;
    FUN_0c0cf3b0(R14);
    goto L_C057540;
    L_C057540:;
    t90 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7);
    goto L_C057544;
    L_C057544:;
    *(float *)((R14 + 0x30)) = ((*(float *)((R14 + 0x30))) + (*(float *)(((0x54 + R14) + 0x0))));
    *(float *)((R14 + 0x34)) = ((*(float *)((R14 + 0x34))) + (*(float *)(((0x58 + R14) + 0x0))));
    *(float *)((R14 + 0x38)) = ((*(float *)((R14 + 0x38))) + (*(float *)(((0x5C + R14) + 0x0))));
    goto L_C05770A;
    L_C0571DA:;
    if ((R0 != 4)) goto L_C0571E2;
    goto L_C0571DE;
    L_C0571DE:;
    goto L_C0575B0;
    L_C0575B0:;
    t98 = *(int *)((R14 + 0x25C));
    R0 = (t98);
    if ((t98 == 0)) goto L_C0575C4;
    goto L_C0575B8;
    L_C0575B8:;
    if ((R0 == 1)) goto L_C0575FE;
    goto L_C0575BC;
    L_C0575BC:;
    if ((R0 == 2)) goto L_C057614;
    goto L_C0575C0;
    L_C0575C0:;
    goto L_C05761C;
    L_C05761C:;
    *(float *)((R14 + 0x54)) = (*(float *)((R14 + 0x60)));
    *(float *)((R14 + 0x58)) = (*(float *)((R14 + 0x64)));
    *(float *)((R14 + 0x5C)) = (*(float *)((R14 + 0x68)));
    *(unsigned short *)((R14 + 0x6C)) = ((*(short *)((R14 + 0x6C))) + 0x800);
    FUN_0c01e7e8(R14, 0xA5C, 0xFFFFFFFF);
    if (((*(int *)((R14 + 0xA8))) == 0)) goto L_C05766E;
    goto L_C057650;
    L_C057650:;
    FUN_0c056588(R14, F4);
    *(float *)((R14 + 0x54)) = (*(float *)((R14 + 0x60)));
    *(float *)((R14 + 0x58)) = (*(float *)((R14 + 0x64)));
    *(float *)((R14 + 0x5C)) = (*(float *)((R14 + 0x68)));
    goto L_C05766E;
    L_C05766E:;
    t115 = (FUN_0c01f18e(R14)) == 0;
    if (t115) goto L_C0576C0;
    goto L_C057678;
    L_C057678:;
    *(unsigned int *)((R14 + 0x228)) = 0xB;
    t116 = FUN_0c01f172(R14);
    u117 = *(float *)((R14 + 0x258));
    *(float *)((R14 + 0x34)) = (t116 + u117);
    *(unsigned int *)((R14 + 0x25C)) = R11;
    *(unsigned int *)((R14 + 0x260)) = R11;
    F0 = ((t116 + u117));
    goto L_C057696;
    L_C0576C0:;
    if ((!(F13 > (*(float *)((R14 + 0x34)))))) goto L_C0576D6;
    goto L_C0576C8;
    L_C0576C8:;
    if (((R13 & (*(int *)((R10 + 0x0)))) == 0)) goto L_C0576D2;
    goto L_C0576CE;
    L_C0576CE:;
    FUN_0c0cf3b0(R14);
    goto L_C0576D2;
    L_C0576D2:;
    t124 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7);
    goto L_C0576D6;
    L_C0576D6:;
    *(float *)((R14 + 0x30)) = ((*(float *)((R14 + 0x30))) + (*(float *)(((0x54 + R14) + 0x0))));
    *(float *)((R14 + 0x34)) = ((*(float *)((R14 + 0x34))) + (*(float *)(((0x58 + R14) + 0x0))));
    *(float *)((R14 + 0x38)) = ((*(float *)((R14 + 0x38))) + (*(float *)(((0x5C + R14) + 0x0))));
    if ((R12 != 0)) goto L_C05770A;
    goto L_C057704;
    L_C057704:;
    FUN_0c0c5f5e(R14);
    goto L_C05770A;
    L_C057614:;
    *(float *)((R14 + 0x64)) = ((*(float *)((R14 + 0x64))) + F4);
    goto L_C05761C;
    L_C0575FE:;
    t134 = *(int *)((R14 + 0x260));
    *(unsigned int *)((R14 + 0x260)) = (t134 - 1);
    if (((int)(t134 - 1) > 0)) goto L_C05761C;
    goto L_C05760A;
    L_C05760A:;
    *(unsigned int *)((R14 + 0x25C)) = ((*(int *)((R14 + 0x25C))) + 0x1);
    goto L_C05761C;
    L_C0575C4:;
    u137 = *(float *)((R14 + 0x64));
    *(float *)((R14 + 0x64)) = (u137 + F4);
    if (((u137 + F4) > 0.0f)) goto L_C05761C;
    goto L_C0575D2;
    L_C0575D2:;
    *(float *)((R14 + 0x60)) = F14;
    *(float *)((R14 + 0x64)) = F14;
    *(float *)((R14 + 0x68)) = F14;
    *(unsigned int *)((R14 + 0x260)) = 0x1E;
    *(unsigned int *)((R14 + 0x25C)) = ((*(int *)((R14 + 0x25C))) + 0x1);
    if ((R12 != 0)) goto L_C05761C;
    goto L_C0575F0;
    L_C0575F0:;
    FUN_0c08b088((R14 + 0x30), 0x46);
    goto L_C05761C;
    L_C0571E2:;
    goto L_C05770A;
    L_C05720C:;
    R4 = (0xC23ED5C);
    if ((((*(int *)0xC23ED5C) & 0x40000) != 0)) goto L_C057232;
    goto L_C057216;
    L_C057216:;
    if ((((*(int *)((R4 + 0x0))) & 32) == 0)) goto L_C057224;
    goto L_C05721C;
    L_C05721C:;
    if (((*(int *)((R14 + 0x230))) != 0)) goto L_C057232;
    goto L_C057224;
    L_C057224:;
    t149 = *(int *)((R14 + 0x224));
    *(unsigned int *)((R14 + 0x224)) = (t149 - 1);
    if (((int)(t149 - 1) > (int)0xFFFFFFC4)) goto L_C057240;
    goto L_C057232;
    L_C057232:;
    if (((R13 & (*(int *)((R10 + 0x0)))) == 0)) goto L_C05723C;
    goto L_C057238;
    L_C057238:;
    FUN_0c0cf3b0(R14);
    goto L_C05723C;
    L_C05723C:;
    t154 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7);
    goto L_C057240;
    L_C057240:;
    t155 = FUN_0c01f172(R14);
    F0 = (t155);
    F13 = (0.5f);
    F4 = (t155);
    if ((!(t155 > -990.0f))) goto L_C05725A;
    goto L_C057254;
    L_C057254:;
    *(float *)((R14 + 0x34)) = (F4 + F13);
    goto L_C05725A;
    L_C05725A:;
    if ((R12 != 0)) goto L_C057264;
    goto L_C05725E;
    L_C05725E:;
    FUN_0c0c5f5e(R14);
    goto L_C057264;
    L_C057264:;
    t162 = *(int *)((R14 + 0x25C));
    *(unsigned int *)((R14 + 0x25C)) = (t162 + 0x1);
    R4 = (((0x1 & t162) << 2));
    R6 = (0xC246FF0);
    if (((*(int *)((((0x1 & t162) << 2) + 0xC247030))) == 4)) goto L_C057286;
    goto L_C057282;
    L_C057282:;
    goto L_C05770A;
    L_C057286:;
    t167 = *(int *)(((R6 + R4) + 0x0));
    R13 = (t167);
    F4 = (4.0f);
    if ((4.0f > _builtin_fabsf(((*(float *)((t167 + 0x30))) - (*(float *)((R14 + 0x30))))))) goto L_C0572A2;
    goto L_C05729E;
    L_C05729E:;
    goto L_C05770A;
    L_C0572A2:;
    if ((F4 > _builtin_fabsf(((*(float *)((R13 + 0x38))) - (*(float *)((R14 + 0x38))))))) goto L_C0572B4;
    goto L_C0572B0;
    L_C0572B0:;
    goto L_C05770A;
    L_C0572B4:;
    if ((F15 > _builtin_fabsf(((*(float *)((R13 + 0x34))) - (*(float *)((R14 + 0x34))))))) goto L_C0572C6;
    goto L_C0572C2;
    L_C0572C2:;
    goto L_C05770A;
    L_C0572C6:;
    t179 = *(int *)((R14 + 0x220));
    R0 = (t179);
    if ((t179 == 22)) goto L_C057318;
    goto L_C0572CE;
    L_C0572CE:;
    if ((R0 == 23)) goto L_C057318;
    goto L_C0572D2;
    L_C0572D2:;
    if ((R0 == 24)) goto L_C057318;
    goto L_C0572D6;
    L_C0572D6:;
    if ((R0 == 25)) goto L_C057342;
    goto L_C0572DA;
    L_C0572DA:;
    if ((R0 == 26)) goto L_C057342;
    goto L_C0572DE;
    L_C0572DE:;
    if ((R0 == 27)) goto L_C057342;
    goto L_C0572E2;
    L_C0572E2:;
    if ((R0 != 28)) goto L_C0572EA;
    goto L_C0572E6;
    L_C0572E6:;
    goto L_C057408;
    L_C057408:;
    R4 = (0xC24758C);
    if ((!((*(float *)((0xC24758C + ((*(int *)((R13 + 0xBC))) << 2)))) > 0.0f))) goto L_C057444;
    goto L_C057418;
    L_C057418:;
    *(float *)((R4 + ((*(int *)((R13 + 0xBC))) << 2))) = F14;
    goto L_C057468;
    L_C057468:;
    if ((R12 == 0)) goto L_C057470;
    goto L_C05746C;
    L_C05746C:;
    goto L_C05770A;
    L_C057470:;
    FUN_0c0cc3f8((*(int *)(((((*(int *)((R14 + 0x220))) - 22) << 2) + 0xC1FF6B8))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc3f8((*(int *)((((*(int *)((R14 + 0x220))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(float *)((R14 + 0x26C)) = 1.0f;
    *(float *)((R14 + 0x254)) = F15;
    FUN_0c08ad98((R14 + 0x30));
    *(unsigned int *)((R14 + 0x260)) = R11;
    *(unsigned int *)((R14 + 0x0)) = 0xC057824;
    goto L_C05770A;
    L_C057444:;
    t202 = *(int *)(((((*(int *)((R14 + 0x220))) - 22) << 2) + 0xC1FF69C));
    FUN_0c0c6b48((*(int *)((R13 + 0xBC))), t202);
    t205 = *(int *)((R13 + 0xBC));
    *(unsigned int *)(((t205 << 2) + 0xC247584)) = ((*(int *)(((t205 << 2) + 0xC247584))) + t202);
    goto L_C057468;
    L_C0572EA:;
    goto L_C057468;
    L_C057342:;
    t207 = *(int *)((R13 + 0xBC));
    *(unsigned int *)(((int)stk + 4)) = (t207 << 2);
    R4 = (0xC24759C);
    R5 = (0xC247594);
    R6 = (0xC247594);
    R7 = (0xC24759C);
    if (((int)(*(int *)((0xC247594 + (t207 << 2)))) >= (int)(*(int *)((0xC24759C + (t207 << 2)))))) goto L_C057444;
    goto L_C05735A;
    L_C05735A:;
    if ((((*(int *)((R10 + 0x0))) & 0x101) != 0)) goto L_C057382;
    goto L_C057362;
    L_C057362:;
    t217 = *(int *)((R13 + 0xBC));
    *(unsigned int *)((((t217 << 2) + R6) + 0x0)) = ((*(int *)((((t217 << 2) + R6) + 0x0))) + (*(int *)((((*(int *)(((0x220 + R14) + 0x0))) << 2) + 0xC1FF60C))));
    goto L_C0573DE;
    L_C0573DE:;
    t221 = *(int *)((R13 + 0xBC));
    *(unsigned int *)(((int)stk + 4)) = (t221 << 2);
    R4 = (R7);
    R6 = (R5);
    if (((int)(*(int *)((R7 + (t221 << 2)))) >= (int)(*(int *)((R5 + (t221 << 2)))))) goto L_C057468;
    goto L_C0573F2;
    L_C0573F2:;
    t227 = *(int *)(((0xBC + R13) + 0x0));
    *(unsigned int *)(((R6 + (t227 << 2)) + 0x0)) = (*(int *)((R4 + (t227 << 2))));
    goto L_C057468;
    L_C057382:;
    t229 = *(int *)((R14 + 0x220));
    R0 = (t229);
    if ((t229 == 25)) goto L_C057396;
    goto L_C05738A;
    L_C05738A:;
    if ((R0 == 26)) goto L_C0573A8;
    goto L_C05738E;
    L_C05738E:;
    if ((R0 == 27)) goto L_C0573BC;
    goto L_C057392;
    L_C057392:;
    goto L_C0573D2;
    L_C0573D2:;
    t234 = *(int *)((R13 + 0xBC));
    *(unsigned int *)((R6 + (t234 << 2))) = ((*(int *)((R6 + (t234 << 2)))) + R10);
    goto L_C0573DE;
    L_C0573BC:;
    F2 = (0.799999952f);
    F3 = ((float)(*(int *)((R4 + ((*(int *)((R13 + 0xBC))) << 2)))));
    goto L_C0573CC;
    L_C0573CC:;
    goto L_C0573D0;
    L_C0573D0:;
    goto L_C0573D2;
    L_C0573A8:;
    *(volatile int *)((R4 + ((*(int *)((R13 + 0xBC))) << 2)));
    goto L_C0573D0;
    L_C057396:;
    F2 = (0.299999982f);
    F3 = ((float)(*(int *)((R4 + ((*(int *)((R13 + 0xBC))) << 2)))));
    goto L_C0573CC;
    L_C057318:;
    if ((R12 == 0)) goto L_C057320;
    goto L_C05731C;
    L_C05731C:;
    goto L_C05770A;
    L_C057320:;
    if (((int)(*(int *)((R13 + 0x354))) <= (int)0x3)) goto L_C05732E;
    goto L_C05732A;
    L_C05732A:;
    goto L_C057468;
    L_C05732E:;
    t251 = (FUN_0c057950(R13, (*(int *)((R14 + 0x220))))) == 0;
    if (t251) goto L_C05733E;
    goto L_C05733A;
    L_C05733A:;
    goto L_C057444;
    L_C05733E:;
    goto L_C057468;
    L_C05719E:;
    R12 = (0x0);
    goto L_C0571A0;
    L_C057180:;
    R4 = (0x1);
    goto L_C057182;
}

void FUN_0c0cce64(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t7;
    int t13;
    float u34;
    float u37;
    float u49;
    int t58;
    int t62;
    float u94;
    float u97;
    float u99;
    int t120;
    int t127;
    int t158;
    float u167;
    float u170;
    float u173;
    float u175;
    int t187;
    int t197;
    int t203;
    int t206;
    int t208;
    int stk[22];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0CCE64:;
    t0 = *(int *)0xC247CAC;
    FUN_0c0685a4(R4, R5, R6, R7);
    t2 = *(int *)0xC23ED9C;
    R0 = (t2);
    R12 = (t0);
    R14 = (R4);
    if ((t2 != 24)) goto L_C0CCE94;
    goto L_C0CCE90;
    L_C0CCE90:;
    goto L_C0CD50C;
    L_C0CD50C:;
    return;
    L_C0CCE94:;
    t7 = *(int *)((R14 + 0x30));
    R0 = (t7);
    R4 = (0xC23F268);
    if ((t7 == 0)) goto L_C0CCF58;
    goto L_C0CCE9C;
    L_C0CCE9C:;
    if ((R0 == 1)) goto L_C0CCEA8;
    goto L_C0CCEA0;
    L_C0CCEA0:;
    if ((R0 == 2)) goto L_C0CCF00;
    goto L_C0CCEA4;
    L_C0CCEA4:;
    goto L_C0CCF58;
    L_C0CCF58:;
    t13 = *(int *)((R14 + 0x34));
    R0 = (t13);
    R10 = (0xC0DC4C0);
    R11 = (0x0);
    R13 = (0xC0DA2E0);
    R8 = (0xC1E9E7C);
    R9 = (0xC0DC510);
    F12 = (0.0124999993f);
    F13 = (0.0166666657f);
    F14 = (0.099999994f);
    F15 = (-4.0f);
    if ((t13 == 0)) goto L_C0CCF9C;
    goto L_C0CCF78;
    L_C0CCF78:;
    if ((R0 != 1)) goto L_C0CCF80;
    goto L_C0CCF7C;
    L_C0CCF7C:;
    goto L_C0CD0FC;
    L_C0CD0FC:;
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0((0x2EC + R12));
    FUN_0c0dcc70((*(float *)((R14 + 0x44))), (*(float *)((R14 + 0x48))), F15);
    FUN_0c0db840((R14 + 0x5C));
    FUN_0c0dc4c0(0x1);
    u34 = 0.00999999978f;
    u34 = u34 + 1.92266589e-06f * (float)(FUN_0c0da2e0());
    FUN_0c0cd56c((R14 + 0x5C), u34, 0.272222161f);
    FUN_0c0db470((R14 + 0x68), (((int)stk + 4) + 0x18));
    u37 = *(float *)(((int)stk + 36));
    F4 = (u37);
    if ((u37 > F15)) goto L_C0CD156;
    goto L_C0CD152;
    L_C0CD152:;
    goto L_C0CD48A;
    L_C0CD48A:;
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0((R14 + 0x68));
    FUN_0c0dc890((*(short *)((R14 + 0x82))));
    FUN_0c0dc6e0((*(short *)((R14 + 0x80))));
    FUN_0c0dc950(((*(short *)((R14 + 0x84))) - 16383));
    FUN_0c0dc890(0x7FFF);
    u49 = *(float *)((R14 + 0x98));
    FUN_0c0dcb80(u49, u49, u49);
    FUN_0c0de000((*(float *)((R14 + 0x98))));
    FUN_0c0c465c((*(short *)((((*(int *)((R14 + 0xB8))) << 1) + (*(int *)((R14 + 0xAC)))))));
    FUN_0c0dc4c0(0x1);
    t58 = *(int *)((R14 + 0xBC));
    *(unsigned int *)((R14 + 0xBC)) = (t58 + 0x1);
    R0 = (0xB0);
    if (((int)(t58 + 0x1) <= (int)(*(int *)((R14 + 0xB0))))) goto L_C0CD50C;
    goto L_C0CD4F4;
    L_C0CD4F4:;
    *(unsigned int *)((R14 + 0xBC)) = R11;
    t62 = *(int *)((R14 + 0xB8));
    *(unsigned int *)((R14 + 0xB8)) = (t62 + 0x1);
    R0 = (0xB4);
    if (((int)(t62 + 0x1) < (int)(*(int *)((R14 + 0xB4))))) goto L_C0CD50C;
    goto L_C0CD508;
    L_C0CD508:;
    *(unsigned int *)((R14 + 0xB8)) = R11;
    R0 = (0xB8);
    goto L_C0CD50C;
    L_C0CD156:;
    if ((4.0f > F4)) goto L_C0CD162;
    goto L_C0CD15E;
    L_C0CD15E:;
    goto L_C0CD48A;
    L_C0CD162:;
    *(unsigned int *)((R14 + 0x34)) = ((*(int *)((R14 + 0x34))) + 0x1);
    *(unsigned int *)(((0xA4 + R14) + 0x0)) = (((((FUN_0c0da2e0()) & 0x1F) + 0x20) << 2) << 2);
    *(unsigned int *)((R14 + 0xB8)) = R11;
    *(unsigned int *)((R14 + 0xAC)) = (*(int *)(((R8 + 0x8) + 0x0)));
    *(unsigned int *)(((0xB4 + R14) + 0x0)) = (*(short *)(((R8 + 0x8) + 0x4)));
    *(unsigned int *)(((0xB0 + R14) + 0x0)) = (*(short *)(((R8 + 0x8) + 0x6)));
    *(float *)((R14 + 0x90)) = ((((*(float *)(((int)stk + 28))) / ((*(float *)0xC247D0C) * (*(float *)(((int)stk + 36)))))) * 320.0f);
    *(float *)((R14 + 0x94)) = ((((*(float *)(((int)stk + 32))) / ((*(float *)0xC247D10) * (*(float *)(((int)stk + 36)))))) * 240.0f);
    FUN_0c0dc510(0x0);
    *(float *)(((int)stk + 4)) = (-((((*(float *)((R14 + 0x90))) * (*(float *)0xC247D0C))) * 4.0f));
    *(float *)(((int)stk + 8)) = (-((((*(float *)((R14 + 0x94))) * (*(float *)0xC247D10))) * 4.0f));
    *(float *)(((int)stk + 12)) = F15;
    FUN_0c0dbda0((0x2EC + R12));
    FUN_0c0db470(((int)stk + 4), (R14 + 0x68));
    FUN_0c0dc4c0(0x1);
    goto L_C0CD48A;
    L_C0CCF80:;
    if ((R0 != 2)) goto L_C0CCF88;
    goto L_C0CCF84;
    L_C0CCF84:;
    goto L_C0CD250;
    L_C0CD250:;
    u94 = (*(float *)((R14 + 0x50)));
    u94 = u94 + 0.0019531846f * (float)((FUN_0c0da2e0()) - 16384);
    *(float *)((R14 + 0x88)) = u94;
    u97 = (*(float *)((R14 + 0x54)));
    u97 = u97 + 0.0019531846f * (float)((FUN_0c0da2e0()) - 16384);
    *(float *)((R14 + 0x8C)) = u97;
    u99 = F14;
    u99 = u99 + 1.92266598e-05f * (float)(FUN_0c0da2e0());
    FUN_0c0cd632((R14 + 0x5C), u99);
    *(float *)((R14 + 0x44)) = (-((((*(float *)((R14 + 0x90))) * (*(float *)0xC247D0C))) * F12));
    *(float *)((R14 + 0x48)) = (-((((*(float *)((R14 + 0x94))) * (*(float *)0xC247D10))) * F13));
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0((0x2EC + R12));
    FUN_0c0dcc70((*(float *)((R14 + 0x44))), (*(float *)((R14 + 0x48))), F15);
    FUN_0c0db840((R14 + 0x68));
    FUN_0c0dc4c0(0x1);
    *(unsigned short *)((R14 + 0x82)) = (*(short *)((R12 + 0x3CE)));
    *(unsigned short *)((R14 + 0x80)) = (*(short *)((R12 + 0x3CC)));
    *(unsigned short *)((R14 + 0x84)) = (int)((float)(*(short *)((R14 + 0x84))) + ((float)((*(short *)(((0x86 + R14) + 0x0))) - (*(short *)(((0x84 + R14) + 0x0)))) * F14));
    t120 = (unsigned char)(FUN_0c0da2e0()) != 0;
    if (t120) goto L_C0CD34E;
    goto L_C0CD31C;
    L_C0CD31C:;
    *(unsigned int *)((R14 + 0x34)) = ((*(int *)((R14 + 0x34))) + 0x1);
    *(unsigned int *)(((0xA0 + R14) + 0x0)) = ((((FUN_0c0da2e0()) & 0x1F) + 0x40) << 1);
    *(unsigned int *)((R14 + 0xB8)) = R11;
    *(unsigned int *)((R14 + 0xAC)) = (*(int *)(((R8 + 0x10) + 0x0)));
    *(unsigned int *)(((0xB4 + R14) + 0x0)) = (*(short *)(((R8 + 0x10) + 0x4)));
    *(unsigned int *)(((0xB0 + R14) + 0x0)) = (*(short *)(((R8 + 0x10) + 0x6)));
    R4 = ((R8 + 0x10));
    goto L_C0CD34E;
    L_C0CD34E:;
    t127 = *(int *)((R14 + 0xA4));
    *(unsigned int *)((R14 + 0xA4)) = (t127 - 1);
    if (((int)(t127 - 1) <= 0)) goto L_C0CD35E;
    goto L_C0CD35A;
    L_C0CD35A:;
    goto L_C0CD48A;
    L_C0CD35E:;
    *(unsigned int *)((R14 + 0x34)) = R11;
    *(unsigned int *)(((0xA4 + R14) + 0x0)) = ((((FUN_0c0da2e0()) & 0x1FF) + 0x40) << 2);
    *(unsigned int *)((R14 + 0xB8)) = R11;
    *(unsigned int *)((R14 + 0xAC)) = (*(int *)((R8 + 0x0)));
    *(unsigned int *)(((0xB4 + R14) + 0x0)) = (*(short *)((R8 + 0x4)));
    *(unsigned int *)(((0xB0 + R14) + 0x0)) = (*(short *)((R8 + 0x6)));
    R4 = (R8);
    goto L_C0CD48A;
    L_C0CCF88:;
    if ((R0 != 3)) goto L_C0CCF90;
    goto L_C0CCF8C;
    L_C0CCF8C:;
    goto L_C0CD3C8;
    L_C0CD3C8:;
    if (((*(int *)((R14 + 0xBC))) != 0)) goto L_C0CD3FA;
    goto L_C0CD3D0;
    L_C0CD3D0:;
    R0 = (0xB8);
    if (((*(int *)((R14 + 0xB8))) != 0)) goto L_C0CD3FA;
    goto L_C0CD3D8;
    L_C0CD3D8:;
    *(unsigned int *)((R14 + 0x34)) = ((*(int *)((R14 + 0x34))) + 0x1);
    *(unsigned int *)((R14 + R0)) = R11;
    *(unsigned int *)((R14 + (R0 - 12))) = (*(int *)(((R8 + 0x18) + 0x0)));
    *(unsigned int *)(((0xB4 + R14) + 0x0)) = (*(short *)(((R8 + 0x18) + 0x4)));
    *(unsigned int *)(((0xB0 + R14) + 0x0)) = (*(short *)(((R8 + 0x18) + 0x6)));
    R4 = ((R8 + 0x18));
    goto L_C0CD3FA;
    L_C0CD3FA:;
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0((0x2EC + R12));
    FUN_0c0dcc70((*(float *)((R14 + 0x44))), (*(float *)((R14 + 0x48))), F15);
    FUN_0c0db840((R14 + 0x68));
    FUN_0c0dc4c0(0x1);
    *(unsigned short *)((R14 + 0x82)) = (*(short *)((R12 + 0x3CE)));
    *(unsigned short *)((R14 + 0x80)) = (*(short *)((R12 + 0x3CC)));
    *(unsigned short *)((R14 + 0x84)) = (int)((float)(*(short *)((R14 + 0x84))) + ((float)((*(short *)(((0x86 + R14) + 0x0))) - (*(short *)(((0x84 + R14) + 0x0)))) * F14));
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) - 1);
    t158 = *(int *)((R14 + 0xA0));
    *(unsigned int *)((R14 + 0xA0)) = (t158 - 1);
    if (((int)(t158 - 1) > 0)) goto L_C0CD48A;
    goto L_C0CD468;
    L_C0CD468:;
    *(unsigned int *)((R14 + 0x34)) = 0x2;
    *(unsigned int *)((R14 + 0xB8)) = R11;
    *(unsigned int *)((R14 + 0xAC)) = (*(int *)(((R8 + 0x8) + 0x0)));
    *(unsigned int *)(((0xB4 + R14) + 0x0)) = (*(short *)(((R8 + 0x8) + 0x4)));
    *(unsigned int *)(((0xB0 + R14) + 0x0)) = (*(short *)(((R8 + 0x8) + 0x6)));
    R4 = ((R8 + 0x8));
    goto L_C0CD48A;
    L_C0CCF90:;
    if ((R0 != 4)) goto L_C0CCF98;
    goto L_C0CCF94;
    L_C0CCF94:;
    goto L_C0CD3FA;
    L_C0CCF98:;
    goto L_C0CD48A;
    L_C0CCF9C:;
    u167 = (*(float *)((R14 + 0x38)));
    u167 = u167 + 0.000976592302f * (float)(FUN_0c0da2e0());
    *(float *)((R14 + 0x5C)) = (u167 + -16.0f);
    u170 = (*(float *)((R14 + 0x3C)));
    u170 = u170 + 0.000976592302f * (float)(FUN_0c0da2e0());
    *(float *)((R14 + 0x60)) = (u170 + -16.0f);
    u173 = (*(float *)((R14 + 0x40)));
    u173 = u173 + 0.000976592302f * (float)(FUN_0c0da2e0());
    *(float *)((R14 + 0x64)) = (u173 + -16.0f);
    u175 = 0.00999999978f;
    u175 = u175 + 1.92266589e-06f * (float)(FUN_0c0da2e0());
    FUN_0c0cd56c((R14 + 0x5C), u175, 0.272222161f);
    if (((*(int *)((R14 + 0xA8))) != 0)) goto L_C0CD006;
    goto L_C0CD002;
    L_C0CD002:;
    goto L_C0CD48A;
    L_C0CD006:;
    R0 = (0xA4);
    if (((*(int *)((R14 + 0xA4))) == 0)) goto L_C0CD068;
    goto L_C0CD00E;
    L_C0CD00E:;
    *(unsigned int *)((R14 + R0)) = ((*(int *)((R14 + R0))) - 1);
    goto L_C0CD48A;
    L_C0CD068:;
    FUN_0c0db470((R14 + 0x68), (((int)stk + 4) + 0x18));
    if (((*(float *)(((int)stk + 36))) > -20.0f)) goto L_C0CD084;
    goto L_C0CD080;
    L_C0CD080:;
    goto L_C0CD48A;
    L_C0CD084:;
    t187 = ((FUN_0c0da2e0()) & 1) != 0;
    if (t187) goto L_C0CD092;
    goto L_C0CD08E;
    L_C0CD08E:;
    goto L_C0CD48A;
    L_C0CD092:;
    *(unsigned int *)((R14 + 0x34)) = ((*(int *)((R14 + 0x34))) + 0x1);
    *(float *)((R14 + 0x50)) = ((float)((FUN_0c0da2e0()) - 16384) * 0.0156254768f);
    *(float *)((R14 + 0x54)) = ((float)((FUN_0c0da2e0()) - 16384) * 0.0156254768f);
    *(float *)((R14 + 0x44)) = (-((((*(float *)((R14 + 0x50))) * (*(float *)0xC247D0C))) * F12));
    *(float *)((R14 + 0x48)) = (-((((*(float *)((R14 + 0x54))) * (*(float *)0xC247D10))) * F13));
    goto L_C0CD48A;
    L_C0CCF00:;
    t197 = *(int *)((R14 + 0xC0));
    FUN_0c0dcef0((((int)stk + 4) + 0xC), (R14 + 0x68), (((((((t197 << 1) + t197) << 2) << 2) << 2) + R4) + 0xC));
    FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), 1.25f);
    FUN_0c0dcd30((R14 + 0x38), (((((((t197 << 1) + t197) << 2) << 2) << 2) + R4) + 0xC), (((int)stk + 4) + 0xC));
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_C0CCF58;
    goto L_C0CCF46;
    L_C0CCF46:;
    t203 = *(int *)((R14 + 0xC4));
    *(unsigned int *)((R14 + 0xC4)) = (t203 - 1);
    if (((int)(t203 - 1) >= 0)) goto L_C0CCF58;
    goto L_C0CCF52;
    L_C0CCF52:;
    FUN_0c0e19f2(R4, R5, R6, R7);
    goto L_C0CCF58;
    L_C0CCEA8:;
    t206 = *(int *)((R14 + 0xC0));
    FUN_0c0e61d4(((R4 + (((((t206 << 1) + t206) << 2) << 2) << 2)) + 0xC), R5, R6, R7, F4, F5, F6);
    t208 = *(int *)((R14 + 0xC4));
    *(unsigned int *)((R14 + 0xC4)) = (t208 - 1);
    if (((int)(t208 - 1) >= 0)) goto L_C0CCF58;
    goto L_C0CCED4;
    L_C0CCED4:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    *(unsigned int *)((R14 + 0xC4)) = 0xF0;
    goto L_C0CCF58;
}
