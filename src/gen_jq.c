/* Straight-line functions with calls and guards (batch gen_jq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_GetCof(int);
int ADXB_GetLpInsNsmpl(int);
int FUN_0c010a30(void);
int FUN_0c010c40(int);
int FUN_0c017aca(void);
int FUN_0c018422(int);
int FUN_0c01993e(int, int, int, int);
int FUN_0c01aae0(void);
int FUN_0c01ac8c(void);
int FUN_0c01ac9a(void);
int FUN_0c01d0be(int);
int FUN_0c01d10c(int);
int FUN_0c01d276(int, int, int, int);
int FUN_0c021956(void);
int FUN_0c02585c(int);
int FUN_0c026ddc(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02a548(int);
int FUN_0c02a760(int);
int FUN_0c02a9d6(int);
int FUN_0c02ac3e(int);
int FUN_0c02aef8(int);
int FUN_0c02b1ac(int);
int FUN_0c02b724(int);
int FUN_0c02ddf8(int);
int FUN_0c02e13c(int);
int FUN_0c031290(int);
int FUN_0c036b64(int);
int FUN_0c03a68e(int);
int FUN_0c03acb4(int, int);
int FUN_0c03f4bc(int);
int FUN_0c04073a(int, int, float);
int FUN_0c041f2a(int);
int FUN_0c052064(int);
int FUN_0c05816a(int, int);
int FUN_0c05969a(int, int);
int FUN_0c05a2dc(int, int, int, float);
int FUN_0c05b6fc(int, int, int);
int FUN_0c06b430(int);
int FUN_0c070b90(int, int);
int FUN_0c07410a(void);
int FUN_0c0758f4(int);
int FUN_0c078bec(int, int);
int FUN_0c07e38c(void);
int FUN_0c082b76(int);
int FUN_0c08448c(int);
int FUN_0c084800(int, float, float, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c084b1a(int, int);
int FUN_0c085050(int, int, int);
int FUN_0c085534(void);
int FUN_0c0855f4(int);
int FUN_0c086d50(int, int, int, float);
int FUN_0c087016(int, int);
int FUN_0c088ec4(int, int);
int FUN_0c08e46e(int);
int FUN_0c08e698(int, float, float);
int FUN_0c08f3d8(int, int);
int FUN_0c091c68(int);
int FUN_0c092320(int);
int FUN_0c0926ec(int);
int FUN_0c0927b8(int);
int FUN_0c092cea(int, int);
int FUN_0c092d84(int, int);
int FUN_0c096d6c(void);
int FUN_0c0a3640(int, int, int, int);
int FUN_0c0a4b78(int);
int FUN_0c0a5170(int);
int FUN_0c0a5710(int);
int FUN_0c0a57b8(void);
int FUN_0c0a87b4(int, int, int, int);
int FUN_0c0a880e(int, int, int, int);
int FUN_0c0a890c(int);
int FUN_0c0a8c5a(int);
int FUN_0c0a8d80(int);
int FUN_0c0ac46a(int);
int FUN_0c0ad83e(void);
int FUN_0c0ae09a(void);
int FUN_0c0b9efe(void);
int FUN_0c0bb134(int);
int FUN_0c0bbbf4(int);
int FUN_0c0bd32e(void);
int FUN_0c0be0e4(int, int, int, int, float, float, float, float, float, float);
int FUN_0c0be4d0(int, int, int, int);
int FUN_0c0c0094(void);
int FUN_0c0c0340(int);
int FUN_0c0c15f8(void);
int FUN_0c0c2506(void);
int FUN_0c0c35ca(void);
int FUN_0c0c366c(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0ca332(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cca88(int);
int FUN_0c0ce042(void);
int FUN_0c0ce486(void);
int FUN_0c0d8c40(int, int, int);
float FUN_0c0d9ee0(float);
float FUN_0c0da510(float);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0de310(float, float, float);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e2a4c(int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c2113b4(void);
int FUN_0c228ed0(int, int);
int FUN_0c228ee4(int, int);
int buExit(void);
int kmSetWaitVsyncCallback(int, int);
int mwRnaErrCallFunc(int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlUnitMatrix(void);
int thunk_FUN_0c073eb4(void);
int thunk_kmSetCheapShadowMode(void);
int FUN_0c02ce36(int a4);
int FUN_0c02d3d8(int a4);
int FUN_0c02d9ce(int a4);
int FUN_0c03149a(int a4);
int FUN_0c03f140(int a4);
int FUN_0c03f1b0(int a4);
int FUN_0c03f30c(int a4);
int FUN_0c03f380(int a4);
int FUN_0c0492ce(int a4);
int FUN_0c04969a(int a4);
int FUN_0c07e0bc(int a4);
int FUN_0c0ab770(void);
int FUN_0c0acc9c(int a4, int a5, int a6, int a7);
int FUN_0c0c47f8(int a4);
int nlSynchFunction(int a4);
int FUN_0c019426(int a4, int a5, int a6, int a7);
int FUN_0c01a2e0(void);
int FUN_0c02e658(int a4, int a5, int a6, int a7);
int FUN_0c040dfa(int a4, int a5);
int FUN_0c041f72(int a4);
int FUN_0c043498(int a4);
int FUN_0c0434b6(int a4);
int FUN_0c0434d4(int a4);
int FUN_0c043fa8(int a4);
int FUN_0c04ec9c(int a4);
int FUN_0c070c48(void);
int FUN_0c070c78(void);
int FUN_0c0a8344(void);
int FUN_0c0a9470(int a4, int a5);
int FUN_0c0afdd4(void);
int FUN_0c0afdf2(void);
int FUN_0c0b42bc(int a4, int a5);
int FUN_0c0d1d30(void);
int FUN_0c0dca30(float f4);
int FUN_0c0dca10(float f4);
int FUN_0c0dca70(float f4);
int FUN_0c0dca50(float f4);
int FUN_0c0dca90(float f4);
int FUN_0c0dcab0(float f4);
int FUN_0c2326b0(int a4, int a5, int a6, int a7);
int FUN_0c9df048(int a4);
int FUN_0c02c152(int a4);
int FUN_0c03ecd6(void);
int FUN_0c041e90(int a4);
int FUN_0c0671b4(void);
int FUN_0c078d28(void);
int FUN_0c0ac034(void);
int FUN_0c0af98a(void);
int FUN_0c0af9cc(void);
int FUN_0c0b523e(float f4);
int FUN_0c0b6862(int a4);
int FUN_0c0ce0f0(void);
int FUN_0c221194(int a4, int a5);
int FUN_0c0239c2(int a4, int a5, int a6, int a7);
int FUN_0c026388(int a4, int a5, int a6, int a7);
int FUN_0c06f2bc(void);
int FUN_0c06f2d6(void);
int FUN_0c098c14(void);
void FUN_0c0ab35a(void);
int FUN_0c0ae152(void);
int FUN_0c0b0d36(int a4, int a5, int a6, int a7);
int FUN_0c0b76ec(int a4);
int FUN_0c0bea60(void);
int FUN_0c0bea7a(void);
int FUN_0c0bea94(void);
int FUN_0c0beaf8(void);
int FUN_0c0cc9a0(int a4, int a5, int a6, int a7);
int FUN_0c0cedda(int a4, int a5);
int FUN_0c20f272(int a4);
int FUN_0c22cbc6(int a4, int a5, int a6, int a7);
int FUN_0c03feba(int a4, int a5);
void FUN_0c0457d2(void);
int FUN_0c08a59c(int a4);
int FUN_0c0b7706(int a4);
int FUN_0c0ef236(int a4);
int FUN_0c01b016(int a4, int a5, int a6, int a7);
int FUN_0c02e0ee(int a4);
int FUN_0c041ba0(int a4);
int FUN_0c05a4f0(int a4);
int FUN_0c05a506(int a4);
int FUN_0c06b1c2(void);
int FUN_0c06b8fc(void);
int FUN_0c070858(void);
int FUN_0c0713f4(void);
int FUN_0c0744f0(void);
int FUN_0c07899e(void);
int FUN_0c079274(void);
int FUN_0c07d718(void);
int FUN_0c07dc3e(int a4);
int FUN_0c08ce92(void);
int FUN_0c0a9546(void);
int FUN_0c0ab392(void);
int FUN_0c0ab4b6(void);
int FUN_0c0ab600(void);
int FUN_0c0acce8(void);
int FUN_0c0af192(void);
int FUN_0c0b0a40(void);
int FUN_0c0b60ba(void);
int FUN_0c0c64f4(void);
int FUN_0c0cd69a(void);
int FUN_0c01ad1a(void);
int FUN_0c02da7c(int a4);
int FUN_0c045a64(void);
int FUN_0c045ab8(void);
int FUN_0c052314(int a4, int a5, int a6, int a7);
int FUN_0c06ab24(int a4);
int FUN_0c07b9a0(void);
int FUN_0c095d00(int a4, int a5);
void FUN_0c0a1014(void);
void FUN_0c0acbbc(void);
int FUN_0c0ceabc(void);
int FUN_0c01abf2(void);
int FUN_0c01abd2(void);
int FUN_0c025aba(int a4, int a5, int a6, int a7);
int FUN_0c03b882(int a4, int a5, int a6, int a7);
void FUN_0c0457c0(void);
void FUN_0c0457ea(void);
int FUN_0c05a4de(int a4);
int FUN_0c05a51c(int a4);
int FUN_0c070c66(void);
int FUN_0c083bfa(int a4, int a5);
int FUN_0c08a5b4(int a4);
int FUN_0c0a08aa(int a4, int a5);
int FUN_0c0a5210(int a4, int a5);
int FUN_0c0ac0e6(void);
int FUN_0c0accd6(void);
int FUN_0c0ad10c(int a4, int a5, int a6, int a7);
int FUN_0c0b06b0(int a4, int a5, int a6, int a7);
int FUN_0c0b4f84(int a4);
int FUN_0c0b5344(int a4);
int FUN_0c0b5a08(int a4);
void FUN_0c0b6168(void);
void FUN_0c0cedf4(void);
int FUN_0c21336c(int a4, int a5, int a6, int a7);
int FUN_0c22c872(int a4, int a5, int a6, int a7);
int FUN_0c2326ce(int a4, int a5, int a6);
int FUN_0c0248ea(int a4);
int FUN_0c02a702(int a4);
int FUN_0c02a8cc(int a4);
int FUN_0c02abaa(int a4);
int FUN_0c02ae3e(int a4);
int FUN_0c02b0b2(int a4);
int FUN_0c02b320(int a4);
int FUN_0c02bb30(int a4);
int FUN_0c02b8aa(int a4);
int FUN_0c02bb48(int a4);
int FUN_0c02e0ac(int a4);
int FUN_0c02e3ae(int a4);
int FUN_0c02e998(int a4);
int FUN_0c03144c(int a4);
int FUN_0c03b9c4(int a4, int a5);
int FUN_0c07bacc(int a4, int a5, int a6, int a7);
int FUN_0c084b0a(float f4, float f5, float f6);
int FUN_0c0a300c(int a4);
int FUN_0c0b48ba(void);
int FUN_0c0b5356(int a4);
int FUN_0c0b7606(int a4);
int FUN_0c0b85dc(void);
int FUN_0c011c52(void);
int FUN_0c01a93a(void);
int FUN_0c01abe4(void);
int FUN_0c03f01a(int a4);
int FUN_0c03f052(int a4);
int FUN_0c03f060(int a4);
int FUN_0c03f07c(int a4);
int FUN_0c03f08a(int a4);
int FUN_0c03f0a6(int a4);
int FUN_0c03f0b4(int a4);
int FUN_0c03f0de(int a4);
int FUN_0c03f108(int a4);
int FUN_0c03f124(int a4);
int FUN_0c03f132(int a4);
int FUN_0c03f160(int a4);
int FUN_0c03f17c(int a4);
int FUN_0c03f16e(int a4);
int FUN_0c03f1a2(int a4);
int FUN_0c03f210(int a4);
int FUN_0c03f22c(int a4);
int FUN_0c03f21e(int a4);
int FUN_0c03f248(int a4);
int FUN_0c03f23a(int a4);
int FUN_0c03f264(int a4);
int FUN_0c03f256(int a4);
int FUN_0c03f272(int a4);
int FUN_0c03f280(int a4);
int FUN_0c03f2b6(int a4);
int FUN_0c03f2d2(int a4);
int FUN_0c03f2c4(int a4);
int FUN_0c03f2fe(int a4);
int FUN_0c03f32c(int a4);
int FUN_0c03f33a(int a4);
int FUN_0c03f356(int a4);
int FUN_0c03f348(int a4);
int FUN_0c03f372(int a4);
int FUN_0c03f364(int a4);
int FUN_0c03f3a0(int a4);
int FUN_0c03f3d0(int a4);
int FUN_0c03f3de(int a4);
int FUN_0c03f3ec(int a4);
int FUN_0c03f408(int a4);
int FUN_0c03f3fa(int a4);
int FUN_0c03f416(int a4);
int FUN_0c04c8d4(int a4);
void FUN_0c0698c0(void);
int FUN_0c06ab84(void);
int FUN_0c07408e(void);
int FUN_0c075744(int a4);
int FUN_0c083d38(int a4, int a5);
int FUN_0c083d46(int a4, int a5);
int FUN_0c0a336a(void);
int FUN_0c0a9076(int a4);
int FUN_0c0a98ba(void);
int FUN_0c0ab250(void);
int FUN_0c0ab336(void);
int FUN_0c0ab2de(void);
int FUN_0c0ab344(void);
int FUN_0c0ab790(void);
int FUN_0c0abf3e(void);
int FUN_0c0abf60(void);
int FUN_0c0abf6e(void);
int FUN_0c0abf96(void);
int FUN_0c0ac0d8(void);
int FUN_0c0ac45c(int a4, int a5, int a6, int a7);
int FUN_0c0acb4e(void);
int FUN_0c0accbc(void);
int FUN_0c0ad020(void);
int FUN_0c0ad916(void);
int FUN_0c0ad924(void);
int FUN_0c0ae1a0(void);
int FUN_0c0af0d0(void);
int FUN_0c0af0f2(void);
int FUN_0c0af170(void);
int FUN_0c0af242(void);
int FUN_0c0af9a6(void);
int FUN_0c0afdba(void);
int FUN_0c0b05f4(void);
int FUN_0c0b0602(void);
int FUN_0c0b06c2(void);
int FUN_0c0b0872(void);
int FUN_0c0b0880(void);
int FUN_0c0b09a8(void);
int FUN_0c0b09b6(void);
int FUN_0c0b479c(void);
int FUN_0c0b4ece(void);
int FUN_0c0b525a(void);
int FUN_0c0b58f2(void);
int FUN_0c0b5900(void);
int FUN_0c0b5d46(void);
int FUN_0c0b5e04(void);
int FUN_0c0b7458(void);
int FUN_0c0b9c86(void);
int FUN_0c0cfccc(void);
int FUN_0c0d1cc6(void);
void FUN_0c0e4e74(int a4);
int FUN_0c220f80(int a4, int a5);
float FUN_0c9df074(int a4);
void FUN_0c010618(int a4);
int FUN_0c011c60(void);
int FUN_0c054f2e(void);
int FUN_0c057bd2(int a4);
int FUN_0c057f72(void);
int FUN_0c077f24(void);
int FUN_0c07adb0(void);
int FUN_0c083c92(int a4, int a5);
int FUN_0c0aa416(void);
int FUN_0c0ab25e(void);
int FUN_0c0abf4c(void);
int FUN_0c0accca(void);
int FUN_0c0ae146(void);
int FUN_0c0af0de(void);
int FUN_0c0af100(void);
int FUN_0c0af17e(void);
int FUN_0c0af250(void);
int FUN_0c0af97e(void);
int FUN_0c0afda6(void);
int FUN_0c0afdc8(void);
int FUN_0c0b9ef2(void);
int FUN_0c0c7e3a(void);
int FUN_0c210c5a(void);
int FUN_0c22a59c(int a4);
int FUN_0c22a5b4(int a4);
int FUN_0c07424a(void);
int FUN_0c07e196(int a4);
int FUN_0c083c4a(int a4, int a5, int a6, int a7);
void FUN_0c083c88(int a4, int a5);
int FUN_0c08a30a(int a4, int a5, int a6, int a7);
int FUN_0c08e122(int a4, int a5, int a6, int a7);
int FUN_0c093b00(int a4);
int FUN_0c0942ce(int a4);
int FUN_0c093f14(int a4);
int FUN_0c0a8fea(int a4);
int FUN_0c0ac898(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0ad264(int a4, int a5, int a6, int a7);
void FUN_0c0ae1f8(void);
int FUN_0c0b3d50(int a4, float f4);
void FUN_0c0b42da(void);
int FUN_0c0b5dfa(int a4, float f4);
void FUN_0c0b8946(void);
int FUN_0c0c368e(void);
void FUN_0c0cfcda(void);
int FUN_0c231fc4(int a4, int a5);
int FUN_0c02bb40(int a4);
int FUN_0c02bb58(int a4);
int FUN_0c02d114(int a4);
int FUN_0c02d11c(int a4);
int FUN_0c02d124(int a4);
int FUN_0c02da70(int a4);
int FUN_0c02dbfc(int a4);
int FUN_0c02dc04(int a4);
int FUN_0c02ddf0(int a4);
int FUN_0c02e10a(int a4);
void FUN_0c04515a(void);
int FUN_0c045162(void);
void FUN_0c04516a(void);
int FUN_0c045172(void);
void FUN_0c04517a(void);
int FUN_0c045182(void);
void FUN_0c04532a(void);
void FUN_0c045374(void);
void FUN_0c045578(void);
int FUN_0c0455ea(void);
void FUN_0c0455f2(void);
int FUN_0c0455fa(void);
void FUN_0c045602(void);
int FUN_0c04560a(void);
int FUN_0c045656(void);
void FUN_0c04565e(void);
void FUN_0c04571a(void);
int FUN_0c045722(void);
void FUN_0c04572a(void);
int FUN_0c045732(void);
void FUN_0c045808(void);
int FUN_0c045810(void);
void FUN_0c0458f0(void);
int FUN_0c0458f8(void);
void FUN_0c045a36(void);
int FUN_0c045a3e(void);
void FUN_0c045a46(void);
int FUN_0c045a4e(void);
int FUN_0c070c3a(void);
int FUN_0c07620a(void);
int FUN_0c076ac0(void);
int FUN_0c082cf2(void);
int FUN_0c083c80(int a4, int a5);
void FUN_0c08e466(void);
int FUN_0c08e9d8(int a4, int a5, int a6, int a7);
int FUN_0c0ab26a(void);
int FUN_0c0ab352(void);
int FUN_0c0abf58(void);
int FUN_0c0ad11e(void);
int FUN_0c0af0ea(void);
int FUN_0c0af18a(void);
int FUN_0c0afdb2(void);
int FUN_0c0b0640(void);
int FUN_0c0b0704(void);
int FUN_0c0b070c(int a4, int a5, int a6, int a7);
int FUN_0c0b088e(void);
int FUN_0c0b2554(void);
int FUN_0c0c36ce(void);
int FUN_0c0cd6b0(int a4, int a5, int a6, int a7);
int FUN_0c231fce(int a4, int a5);
void FUN_0c231fd6(int a4, int a5, int a6);
int FUN_0c01ac94(void);
int FUN_0c01ad14(void);
int FUN_0c0248fa(int a4, int a5, int a6, int a7);
int FUN_0c025ffc(int a4, int a5, int a6, int a7);
int FUN_0c026a0a(int a4, int a5, int a6, int a7);
int FUN_0c026a32(int a4, int a5, int a6, int a7);
int FUN_0c02e104(int a4, int a5, int a6, int a7);
int FUN_0c02e706(int a4, int a5, int a6, int a7);
int FUN_0c03faf4(int a4);
int FUN_0c040802(int a4, int a5);
int FUN_0c040808(int a4, int a5);
int FUN_0c043fc6(int a4);
int FUN_0c056b1a(int a4, int a5, int a6, int a7);
int FUN_0c057bc6(int a4);
int FUN_0c057bcc(int a4);
int FUN_0c057be2(int a4);
int FUN_0c057be8(int a4);
int FUN_0c057bee(int a4);
int FUN_0c057bf4(int a4);
int FUN_0c057c14(int a4);
int FUN_0c0596be(int a4, float f4);
int FUN_0c05cb36(int a4, int a5);
int FUN_0c05cb3c(int a4, int a5);
int FUN_0c05cb42(int a4, int a5);
int FUN_0c070c42(void);
int FUN_0c07594e(void);
int FUN_0c07dc38(int a4);
int FUN_0c07dc54(int a4);
int FUN_0c07dc5a(int a4);
int FUN_0c07dc60(int a4);
int FUN_0c07dc66(int a4);
int FUN_0c07e06a(int a4);
void FUN_0c083bf4(int a4, int a5);
int FUN_0c095ede(int a4);
void FUN_0c0a089e(int a4);
void FUN_0c0a08a4(int a4);
int FUN_0c0a9b7e(void);
int FUN_0c0aa4f2(int a4, int a5, int a6, int a7);
int FUN_0c0ab24a(void);
int FUN_0c0ae252(int a4, int a5, int a6, int a7);
int FUN_0c0ae266(void);
int FUN_0c0b0cb2(void);
int FUN_0c0b32a2(int a4);
int FUN_0c0b609a(void);
int FUN_0c0b60a0(void);
int FUN_0c0b68c8(void);
int FUN_0c0b75cc(void);
int FUN_0c0b75dc(void);
int FUN_0c0b75e2(void);
int FUN_0c0c02dc(void);
int FUN_0c0c02e2(void);
int FUN_0c0caeea(void);
int FUN_0c0ccab0(int a4, int a5, int a6, int a7);
int FUN_0c0ccab6(int a4, int a5, int a6, int a7);
void FUN_0c0d88c0(int a4);
void FUN_0c0d93e0(int a4);
void FUN_0c0d9a70(int a4);
int FUN_0c0d9a90(void);
int FUN_0c0d9aa0(void);
void FUN_0c0da870(int a4);
void FUN_0c0db0d0(int a4);
int FUN_0c0df500(void);
int FUN_0c0e236e(void);
int FUN_0c0e4498(void);
void FUN_0c20d812(int a4);
void FUN_0c214be8(int a4);
int FUN_0c22113c(void);
int FUN_0c22127c(void);
void FUN_0c22cde6(int a4, int a5, int a6);
void FUN_0c22d0c2(int a4, int a5, int a6);
void FUN_0c231fde(int a4, int a5, int a6);
void FUN_0c01256c(void);
void FUN_0c014676(void);
void FUN_0c018ebc(void);
int FUN_0c018eb8(int a4);
int FUN_0c018f30(int a4);
void FUN_0c01ac44(void);
int FUN_0c027732(int a4, int a5, int a6);
void FUN_0c02c2ec(void);
void FUN_0c02da78(void);
void FUN_0c042e68(void);
void FUN_0c042e6c(void);
void FUN_0c043fcc(void);
void FUN_0c044446(void);
void FUN_0c04444a(void);
void FUN_0c04f7c8(void);
void FUN_0c056b20(void);
void FUN_0c057bc2(void);
void FUN_0c057bde(void);
void FUN_0c057c0c(void);
void FUN_0c057c10(void);
void FUN_0c0594fc(void);
void FUN_0c059d6e(void);
int FUN_0c05ba22(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int FUN_0c05ba26(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int FUN_0c06b744(int a4);
int FUN_0c06b884(int a4);
void FUN_0c07140a(void);
void FUN_0c07e454(void);
void FUN_0c081e08(void);
void FUN_0c082224(void);
void FUN_0c082228(void);
void FUN_0c088042(void);
void FUN_0c088364(void);
void FUN_0c09a99e(void);
void FUN_0c0a8794(void);
void FUN_0c0a8c94(void);
void FUN_0c0abf92(void);
void FUN_0c0ad944(void);
void FUN_0c0b39b2(void);
void FUN_0c0b39b6(void);
void FUN_0c0b4f6e(void);
void FUN_0c0b532e(void);
void FUN_0c0b59f2(void);
void FUN_0c0b60a6(void);
void FUN_0c0b6504(void);
void FUN_0c0bb1e8(void);
void FUN_0c0bf3f2(void);
int FUN_0c0c2530(void);
void FUN_0c0c2538(void);
int FUN_0c0c2534(void);
void FUN_0c0cbaf4(void);
void FUN_0c0ce516(void);
void FUN_0c0d9a30(void);
void FUN_0c0dbaac(void);
void FUN_0c0dbaf0(void);
void FUN_0c0dbb44(void);
void FUN_0c0e17a4(void);
void FUN_0c20d792(void);
void FUN_0c20d796(void);
void FUN_0c20d79a(void);
void FUN_0c20d7c0(void);
void FUN_0c20d7c4(void);
void FUN_0c20d7c8(void);
void FUN_0c20d7cc(void);
void FUN_0c20d7d0(void);
int FUN_0c216b46(void);
int FUN_0c216b4a(void);
int FUN_0c216b4e(void);
void FUN_0c22a64e(void);
void FUN_0c22cd30(void);
int FUN_0c22cde2(int a4);
void FUN_0c22d00c(void);
int FUN_0c22d0be(int a4);
void FUN_0c233824(void);
void FUN_0c9df044(int a4);
void FUN_0c9dfcdc(int a4);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_int { char p[0x308]; int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o474_int { char p[0x474]; int v; };
struct o474_uint { char p[0x474]; unsigned int v; };
struct o47C_uint { char p[0x47C]; unsigned int v; };
struct o488_int { char p[0x488]; int v; };
struct o488_uint { char p[0x488]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o4DC_uint { char p[0x4DC]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o4F4_uint { char p[0x4F4]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_int { char p[0x4FC]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };




int FUN_0c02ce36(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c02d3d8(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c02d9ce(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c03149a(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c03f140(int a4)
{
    register int t7;
    register int t2;

    t7 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t2 = (((struct o2EC_int *)(a4))->v);
        t7 = t2;
        if ((t2 & 12) != 0) {
            (((struct o4DC_uint *)(a4))->v) = 0x10;
            (((struct o47C_uint *)(a4))->v) = 0x0;
            t7 = 0x47C;
        }
    }
    return t7;
}

int FUN_0c03f1b0(int a4)
{
    register int t7;
    register int t2;

    t7 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t2 = (((struct o2EC_int *)(a4))->v);
        t7 = t2;
        if ((t2 & 12) != 0) {
            (((struct o4DC_uint *)(a4))->v) = 0x21;
            (((struct o47C_uint *)(a4))->v) = 0x0;
            t7 = 0x47C;
        }
    }
    return t7;
}

int FUN_0c03f30c(int a4)
{
    register int t7;
    register int t2;

    t7 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t2 = (((struct o2EC_int *)(a4))->v);
        t7 = t2;
        if ((t2 & 12) != 0) {
            (((struct o4DC_uint *)(a4))->v) = 0x33;
            (((struct o47C_uint *)(a4))->v) = 0x0;
            t7 = 0x47C;
        }
    }
    return t7;
}

int FUN_0c03f380(int a4)
{
    register int t7;
    register int t2;

    t7 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t2 = (((struct o2EC_int *)(a4))->v);
        t7 = t2;
        if ((t2 & 12) != 0) {
            (((struct o4DC_uint *)(a4))->v) = 0x39;
            (((struct o47C_uint *)(a4))->v) = 0x0;
            t7 = 0x47C;
        }
    }
    return t7;
}

int FUN_0c0492ce(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c04969a(int a4)
{
    if (((((struct o488_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o488_int *)(a4))->v)));
        (((struct o488_uint *)(a4))->v) = 0x0;
    }
    return 0x488;
}

int FUN_0c07e0bc(int a4)
{
    int stk[5];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC101224); }
    return (FUN_0c01d276(a4, 0xE, 0x8, ((int)stk + 4)));
}

int FUN_0c0ab770(void)
{
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC10E0E0);
    FUN_0c0c465c(0xD7C);
    return nlPopMatrix(0x1);
}

int FUN_0c0acc9c(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC24FA38) == 0x384) {
        FUN_0c0e19f2();
    }
    return FUN_0c0dbda0(((*(int *)0xC247CAC) + 0x2AC));
}

int FUN_0c0c47f8(int a4)
{
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c0c47ae(a4);
    return FUN_0c0849da();
}

int nlSynchFunction(int a4)
{
    register int t1;

    t1 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    kmSetWaitVsyncCallback(a4, 0x0);
    _builtin_set_cr((t1 & 0xFFFFFFFF));
    return 0x0;
}

int FUN_0c019426(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x80000);
        return FUN_0c0e19f2();
    }
    return 0x58;
}

int FUN_0c01a2e0(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC23EDE0)->v);
    t1 = t0;
    if (t0 != 10) {
        t0 = (((struct o4_int *)0xC23EDE0)->v);
        t1 = t0;
        if (t0 != 10) {
            (((struct o0_uint *)0xC23ED44)->v) = 0x1;
            (((struct o4_uint *)0xC23ED44)->v) = 0xD;
            t1 = 0xC23ED48;
        }
    }
    return t1;
}

int FUN_0c02e658(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        return FUN_0c02a19a(a4);
    }
    return t0;
}

int FUN_0c040dfa(int a4, int a5)
{
    register int t3;

    t3 = 0x4DC;
    if (((((struct o4DC_int *)(a4))->v)) == 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~((int)0x1 << (int)((((struct oBC_int *)(a4))->v)))));
        t3 = 0xBC;
    }
    return t3;
}

int FUN_0c041f72(int a4)
{
    register int t0;

    t0 = (((struct o4E4_int *)(a4))->v);
    (((struct o4E4_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        t0 = (((struct o2EC_int *)(a4))->v);
        if ((t0 & 12) != 0) {
            return FUN_0c03f4bc(a4);
        }
        return t0;
    }
    return 0x4E4;
}

int FUN_0c043498(int a4)
{
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x1;
    (((struct o2C4_uint *)(a4))->v) = 0x524;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x7;
    return 0x4C8;
}

int FUN_0c0434b6(int a4)
{
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x1;
    (((struct o2C4_uint *)(a4))->v) = 0x525;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x8;
    return 0x4C8;
}

int FUN_0c0434d4(int a4)
{
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x1;
    (((struct o2C4_uint *)(a4))->v) = 0x526;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x9;
    return 0x4C8;
}

int FUN_0c043fa8(int a4)
{
    *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFFE);
    FUN_0c0855f4(a4);
    return FUN_0c0bb134(a4);
}

int FUN_0c04ec9c(int a4)
{
    (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) | 0x800);
    if ((int)((((struct o394_int *)(a4))->v)) > 0) {
        (((struct o394_uint *)(a4))->v) = 0x0;
    }
    (((struct oD8_uint *)(a4))->v) = 0x0;
    return 0xD8;
}

int FUN_0c070c48(void)
{
    FUN_0c070b90(0xC200444, 0x0);
    FUN_0c070b90(0xC200450, 0x0);
    FUN_0c070b90(0xC20045C, 0x8000);
    return FUN_0c070b90(0xC200468, 0x8000);
}

int FUN_0c070c78(void)
{
    FUN_0c070b90(0xC20048C, 0x4000);
    FUN_0c070b90(0xC200498, 0x0);
    FUN_0c070b90(0xC2004A4, 0x0);
    return FUN_0c070b90(0xC2004B0, 0x8000);
}

int FUN_0c0a8344(void)
{
    register int t0;

    t0 = FUN_0c0de310(0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t0;
}

int FUN_0c0a9470(int a4, int a5)
{
    register int t2;
    register int t3;
    register int t0;
    register int t1;

    t2 = a5;
    for (;;) {
        t3 = *(short *)((t2 + 0x0));
        t2 = (t2 + 0x2);
        if (t3 == -1) {
            break;
        }
        t0 = 0x404;
        t1 = (*(short *)((t2 + 0x0)));
        t2 = (t2 + 0x2);
        t0 = (t0 + a4);
        *(unsigned int *)((((t3 << 2) + t0) + 0x0)) = t1;
    }
    return t3;
}

int FUN_0c0afdd4(void)
{
    register int t2;

    FUN_0c0a8d80(0xC110794);
    t2 = FUN_0c0e19aa(0xC0AFE42, 0xB4, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t2);
}

int FUN_0c0afdf2(void)
{
    register int t1;
    register int t2;

    t1 = FUN_0c0e19aa(0xC0AFE10, 0x34, (*(int *)0xC23ECF0));
    t2 = FUN_0c0e19d0(t1);
    *(float *)0xC247EB0 = 0.0f;
    return t2;
}

int FUN_0c0b42bc(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o50_int *)(a4))->v);
    (((struct o50_uint *)(a4))->v) = (t0 - 1);
    t1 = 0x50;
    if ((int)(t0 - 1) <= 0) {
        t0 = *(int *)0xC23ED5C;
        *(unsigned int *)0xC23ED5C = (t0 | 0x4);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t1 = (t0 | 0x4);
    }
    return t1;
}

int FUN_0c0d1d30(void)
{
    register int t1;

    *(unsigned int *)0xC20499C = 0x0;
    FUN_0c0bd32e();
    t1 = FUN_0c0a57b8();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t1;
}

int FUN_0c0dca30(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return ((int (*)(float, float))(0xC0DC860))(t1, t0);
}

int FUN_0c0dca10(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return nlRotateXSC(t1, t0);
}

int FUN_0c0dca70(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return ((int (*)(float, float))(0xC0DC920))(t1, t0);
}

int FUN_0c0dca50(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return nlRotateYSC(t1, t0);
}

int FUN_0c0dca90(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return ((int (*)(float, float))(0xC0DC980))(t1, t0);
}

int FUN_0c0dcab0(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return ((int (*)(float, float))(0xC0DC9E0))(t1, t0);
}

int FUN_0c2326b0(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = ((((struct o9C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = (((((struct o40_int *)(a4))->v)) - ((((struct o9C_int *)(a4))->v)));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - ((((struct o98_int *)(a4))->v)));
    return (*(int *)((a4 + 0x3C)));
}

int FUN_0c9df048(int a4)
{
    register int t0;
    register int t3;

    t0 = *(short *)((a4 + 0x2));
    t3 = 0xA;
    if ((int)t0 >= (int)0x11) {
    } else {
        t3 = t0;
        if ((int)t0 >= (int)0x9) {
            t3 = 0x9;
        }
    }
    *(unsigned int *)0xC9DF1FC = (t3 << 2);
    return (t3 << 2);
}

int FUN_0c02c152(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC23A1A8;
    t1 = t0;
    if ((t0 & 1) == 0) {
        *(unsigned int *)0xC23EDB0 = 0x0;
        t0 = *(int *)0xC23ED5C;
        *(unsigned int *)0xC23ED5C = (t0 | 0x10000);
        t1 = (t0 | 0x10000);
    }
    return t1;
}

int FUN_0c03ecd6(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC03EC7C, 0x4C, (*(int *)0xC23ECEC));
    *(unsigned int *)((t1 + 0x30)) = 0x19;
    *(unsigned int *)((t1 + 0x34)) = 0x2;
    return t1;
}

int FUN_0c041e90(int a4)
{
    *(unsigned int *)((a4 + 0x4D0)) = 0x1;
    *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x2BC)));
    *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
    return FUN_0c088ec4(a4, 0xB4);
}

int FUN_0c0671b4(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0671D0, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    return thunk_kmSetCheapShadowMode();
}

int FUN_0c078d28(void)
{
    register int t2;

    FUN_0c078bec(0xC1000F8, 0x2);
    t2 = FUN_0c0e19aa(0xC078C68, 0xB4, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t2);
}

int FUN_0c0ac034(void)
{
    FUN_0c0a8d80(0xC10E840);
    thunk_FUN_0c073eb4();
    FUN_0c08e46e(0xFFFFFFFF);
    return FUN_0c017aca();
}

int FUN_0c0af98a(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0a8d80(0xC110044);
    t2 = (((struct o0_int *)0xC246FFC)->v);
    *(unsigned int *)((((((struct o4_int *)0xC246FFC)->v)) + 0x1C)) = t2;
    *(unsigned int *)((((((struct o8_int *)0xC246FFC)->v)) + 0x1C)) = t2;
    return t0;
}

int FUN_0c0af9cc(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0a8d80(0xC1104C8);
    t2 = (((struct o0_int *)0xC247000)->v);
    *(unsigned int *)((((((struct o4_int *)0xC247000)->v)) + 0x1C)) = t2;
    *(unsigned int *)((((((struct o8_int *)0xC247000)->v)) + 0x1C)) = t2;
    return t0;
}

int FUN_0c0b523e(float f4)
{
    FUN_0c0d8c40(0x0, 0x0, 0x0);
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    return 0xC23ED48;
}

int FUN_0c0b6862(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    t1 = 0x58;
    if ((int)(t0 - 1) <= 0) {
        (((struct o0_uint *)0xC23ED44)->v) = 0x1;
        (((struct o4_uint *)0xC23ED44)->v) = 0x0;
        t1 = 0xC23ED48;
    }
    return t1;
}

int FUN_0c0ce0f0(void)
{
    register int t0;

    t0 = *(int *)0xC23A258;
    if ((t0 & 32) != 0) {
        return FUN_0c0c7354((*(int *)0xC1EFA04), (*(float *)0xC0CE1AC), (*(float *)0xC0CE1B4));
    }
    return t0;
}

int FUN_0c221194(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c228ee4(a4, a5);
    if (t0 == 1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0239c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        return FUN_0c02a19a(a4);
    }
    return 0x3B0;
}

int FUN_0c026388(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        return FUN_0c02a19a(a4);
    }
    return 0x3B0;
}

int FUN_0c06f2bc(void)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if (((0x200 & t0) != 0) && ((0x800 & t0) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c06f2d6(void)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if (((0x200 & t0) != 0) && ((0x800 & t0) != 0)) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c098c14(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC098B48, 0x3C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    return FUN_0c096d6c();
}

void FUN_0c0ab35a(void)
{
    if ((*(int *)0xC24FA38) == 0x1F1) {
        FUN_0c086d50(0xC10E1EC, 0xA, 0x384, 1.0f);
    return;
    }
}

int FUN_0c0ae152(void)
{
    FUN_0c0a8d80(0xC10F848);
    FUN_0c08e698(0x5A, 0.0f, 728.177734f);
    return FUN_0c0ad83e();
}

int FUN_0c0b0d36(int a4, int a5, int a6, int a7)
{
    register int t2;

    t2 = ((int (*)(int, int, int, int, int))((*(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC202CC8)))))(a4, a5, a6, a7, a4);
    return FUN_0c0ce486();
}

int FUN_0c0b76ec(int a4)
{
    register int t0;

    t0 = (((struct o50_int *)(a4))->v);
    (((struct o50_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        (((struct o50_uint *)(a4))->v) = 0x394;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    }
    return 0x50;
}

int FUN_0c0bea60(void)
{
    nlGetMatrix(0xC260AB8);
    nlGetMatrix(0xC260AF8);
    return nlInvertMatrix(0xC260AF8);
}

int FUN_0c0bea7a(void)
{
    nlGetMatrix(0xC260B38);
    nlGetMatrix(0xC260B78);
    return nlInvertMatrix(0xC260B78);
}

int FUN_0c0bea94(void)
{
    nlGetMatrix(0xC260BB8);
    nlGetMatrix(0xC260BF8);
    return nlInvertMatrix(0xC260BF8);
}

int FUN_0c0beaf8(void)
{
    nlGetMatrix(0xC260C38);
    nlGetMatrix(0xC260C78);
    return nlInvertMatrix(0xC260C78);
}

int FUN_0c0cc9a0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC23A1A0;
    if (t0 != 3) {
        return FUN_0c0cc3f8((*(int *)((a5 + 0x4))), a5, a6, a7);
    }
    return t0;
}

int FUN_0c0cedda(int a4, int a5)
{
    if ((a5 != -23) && (a5 != -33)) {
        return a5;
    }
    return FUN_0c010a30();
}

int FUN_0c20f272(int a4)
{
    register int t0;
    register int t5;
    register int t6;
    int t1;

    t0 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    t6 = 0x0;
    if ((t0 != 0) && (t1 = *(int *)((t0 + 0x2C)), t1 != 0)) {
        t5 = (*(int *)((t0 + 0x2C)));
        t6 = (*(int *)((t0 + 0x30)));
    }
    return ((int (*)(int, int, int))(0xC228EF8))(t5, t6, t0);
}

int FUN_0c22cbc6(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC237EE0);
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o88_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o8C_int *)(a4))->v));
    return 0x8C;
}

int FUN_0c03feba(int a4, int a5)
{
    if ((*(int *)((a4 + 0x4E0))) == 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFBFF);
    }
    return FUN_0c041f2a(a4);
}

void FUN_0c0457d2(void)
{
    if ((*(int *)0xC247034) != 0) {
        *(float *)0xC247590 = 0.0f;
        *(unsigned int *)0xC246DD4 = 0x0;
    }
}

int FUN_0c08a59c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((((*(int *)((a4 + 0x34))) << 2) + ((t1 + 0x304) + ((t0 << 2) << 1)))) = 0x0;
    return ((t1 + 0x304) + ((t0 << 2) << 1));
}

int FUN_0c0b7706(int a4)
{
    register int t0;

    t0 = (((struct o50_int *)(a4))->v);
    (((struct o50_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    }
    return 0x50;
}

int FUN_0c0ef236(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(short *)(((int)_builtin_get_gbr() + 2));
    t1 = *(short *)(((a4 + 0x6) + 0x0));
    t3 = *(short *)(((((t1 + t0) + (t1 + t0)) << 2) + (*(int *)(((int)_builtin_get_gbr() + 24)))));
    *(unsigned int *)(((int)_builtin_get_gbr() + 8)) = (t3 << 21);
    return (t3 << 21);
}

int FUN_0c01b016(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC23EDB0) == 0) {
        *(unsigned int *)0xC23ED9C = ((((struct o44_int *)(a4))->v));
    }
    return FUN_0c01993e(a4, a5, a6, a7);
}

int FUN_0c02e0ee(int a4)
{
    (((struct o4F0_uint *)(a4))->v) = 0x7;
    (((struct o4F4_uint *)(a4))->v) = 0x9;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c041ba0(int a4)
{
    *(unsigned int *)0xC23EDB0 = 0x0;
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
    return FUN_0c03f4bc(a4);
}

int FUN_0c05a4f0(int a4)
{
    return FUN_0c05a2dc(a4, ((*(short *)((a4 + 0x6E))) + 0x4000), 0xFFFFF000, (1.0f + 1.0f));
}

int FUN_0c05a506(int a4)
{
    return FUN_0c05a2dc(a4, ((*(short *)((a4 + 0x6E))) - 8192), 0xFFFFF000, (1.0f + 1.0f));
}

int FUN_0c06b1c2(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC06B204, 0x80, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c06b8fc(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC06B97C, 0x80, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c070858(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0708B0, 0x38, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0713f4(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC071378, 0xB4, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0744f0(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC074506, 0x34, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t1);
}

int FUN_0c07899e(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC078846, 0x7C, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c079274(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC07918A, 0x30, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c07d718(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC07D692, 0xB4, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c07dc3e(int a4)
{
    FUN_0c092cea(a4, 0x2);
    return FUN_0c092cea(a4, 0x1);
}

int FUN_0c08ce92(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC08CEE8, 0x80, (*(int *)0xC23ECF4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0a9546(void)
{
    *(unsigned int *)0xC23ED64 = 0x0;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC24FA38 = 0x78;
    return FUN_0c0a890c(0xC10D224);
}

int FUN_0c0ab392(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0AB3A8, 0x3C, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0ab4b6(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0AB4CC, 0x3C, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0ab600(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0AB616, 0x40, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0acce8(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0ACD48, 0x44, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0af192(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0AF1A8, 0x40, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0b0a40(void)
{
    FUN_0c0ac46a(0x3);
    FUN_0c0ae09a();
    return FUN_0c0a8d80(0xC1110F4);
}

int FUN_0c0b60ba(void)
{
    register int t2;

    t2 = ((int (*)(void))((*(int *)((((*(int *)0xC23ED9C) << 2) + 0xC2044CC)))))();
    return FUN_0c0ce042();
}

int FUN_0c0c64f4(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0C6534, 0x38, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0cd69a(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0CD6F8, 0x34, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t1);
}

int FUN_0c01ad1a(void)
{
    register int t1;

    *(unsigned int *)0xC23F264 = 0x0;
    t1 = *(int *)((((*(int *)0xC23ED9C) << 2) + 0xC1EFA78));
    return ((int (*)(void))(t1))();
}

int FUN_0c02da7c(int a4)
{
    if (((((struct o474_int *)(a4))->v)) == 0) {
        (((struct o474_uint *)(a4))->v) = 0xC02DA78;
    }
    (((struct o4F4_uint *)(a4))->v) = 0x1B;
    return 0x4F4;
}

int FUN_0c045a64(void)
{
    (((struct o0_uint *)0xC246DE8)->v) = 0x0;
    *(unsigned int *)0xC23EDBC = 0x0;
    (((struct o4_uint *)0xC246DE8)->v) = ((((struct o0_int *)0xC246DE8)->v));
    return 0xC246DEC;
}

int FUN_0c045ab8(void)
{
    (((struct o0_uint *)0xC246DE8)->v) = 0x2;
    *(unsigned int *)0xC23EDBC = 0x2;
    (((struct o4_uint *)0xC246DE8)->v) = ((((struct o0_int *)0xC246DE8)->v));
    return 0xC246DEC;
}

int FUN_0c052314(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c0be4d0))(0x28, 0xC2475C4, a6, a7);
    return ((int (*)(int, int))(FUN_0c0be4d0))(0x2D, 0xC2475CC);
}

int FUN_0c06ab24(int a4)
{
    register int t0;

    t0 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x0)) = 0xC06A9B2;
    }
    return 0x98;
}

int FUN_0c07b9a0(void)
{
    register int t0;

    t0 = FUN_0c0e1830(0xC07B9B4, 0x80);
    return FUN_0c0e19d0(t0);
}

int FUN_0c095d00(int a4, int a5)
{
    register int t0;

    t0 = *(short *)((a5 + 0x4));
    *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | (*(int *)((0xC10BC88 + ((unsigned short)t0 << 2)))));
    return ((unsigned short)t0 << 2);
}

void FUN_0c0a1014(void)
{
    *(unsigned int *)0xC20110C = 0x0;
    (((struct o4_uint *)0xC24970C)->v) = 0x0;
    (((struct o34_uint *)0xC24970C)->v) = 0x0;
    (((struct o0_uint *)0xC24970C)->v) = 0x0;
}

void FUN_0c0acbbc(void)
{
    if ((*(int *)0xC24FA38) == 0x168) {
        FUN_0c0ac46a(0x2);
    return;
    }
}

int FUN_0c0ceabc(void)
{
    register int t0;

    for (;;) {
        t0 = buExit();
        if (t0 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c01abf2(void)
{
    *(unsigned int *)0xC23A190 = 0x2;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23ED9C = 0x2;
    return FUN_0c01aae0();
}

int FUN_0c01abd2(void)
{
    *(unsigned int *)0xC23A190 = 0x2;
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0x600);
    return FUN_0c01aae0();
}

int FUN_0c025aba(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0x544))) == 0) {
        return FUN_0c02585c(a4);
    }
    return FUN_0c02a19a(a4);
}

int FUN_0c03b882(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c03a68e(a4);
    }
    return t0;
}

void FUN_0c0457c0(void)
{
    if ((*(int *)0xC247030) != 0) {
        *(unsigned int *)0xC246DD0 = 0x1;
    }
}

void FUN_0c0457ea(void)
{
    if ((*(int *)0xC247034) != 0) {
        *(unsigned int *)0xC246DD4 = 0x1;
    }
}

int FUN_0c05a4de(int a4)
{
    return FUN_0c05a2dc(a4, (*(short *)((a4 + 0x6E))), 0xFFFFF000, (1.0f + 1.0f));
}

int FUN_0c05a51c(int a4)
{
    return FUN_0c05a2dc(a4, (*(short *)((a4 + 0x6E))), 0xFFFFE800, (1.0f + 1.0f));
}

int FUN_0c070c66(void)
{
    FUN_0c070b90(0xC200474, 0xFFFFEAAB);
    return FUN_0c070b90(0xC200480, 0xFFFFEAAB);
}

int FUN_0c083bfa(int a4, int a5)
{
    register int t2;

    *(unsigned int *)0xC247D04 = (*(short *)((a5 + 0x0)));
    *(unsigned char *)0xC247CBB = (*(short *)(((a5 + 0x2) + 0x0)));
    t2 = *(short *)((((a5 + 0x2) + 0x2) + 0x0));
    *(unsigned short *)0xC247CBC = t2;
    return t2;
}

int FUN_0c08a5b4(int a4)
{
    register int t1;

    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)(((((*(int *)((a4 + 0x30))) << 2) + (0x364 + t1)) + 0x0)) = 0x0;
    return t1;
}

int FUN_0c0a08aa(int a4, int a5)
{
    register int t1;

    (((struct o0_uint *)0xC24976C)->v) = (unsigned short)(*(short *)((a5 + 0x4)));
    t1 = *(short *)((a5 + 0x6));
    (((struct o4_uint *)0xC24976C)->v) = (unsigned short)t1;
    return (unsigned short)t1;
}

int FUN_0c0a5210(int a4, int a5)
{
    register int t0;

    t0 = *(short *)((a5 + 0x4));
    (((struct o80_uint *)((*(int *)0xC2497AC)))->v) = (-(unsigned short)t0);
    return (-(unsigned short)t0);
}

int FUN_0c0ac0e6(void)
{
    *(unsigned int *)0xC24FA64 = 0x0;
    return FUN_0c0a87b4(0xC0AC16C, 0xC0AC1A8, 0xC0A8C94, 0x3E3);
}

int FUN_0c0accd6(void)
{
    FUN_0c0a8c5a(0xC10F090);
    return FUN_0c0a8d80(0xC10F088);
}

int FUN_0c0ad10c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x521A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return ((int (*)(int))(FUN_0c0cc3f8))(0x921A9);
}

int FUN_0c0b06b0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x334A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return ((int (*)(int))(FUN_0c0cc3f8))(0x424A9);
}

int FUN_0c0b4f84(int a4)
{
    register int t1;

    t1 = *(int *)((((*(int *)((a4 + 0x40))) << 2) + 0xC203FBC));
    return ((int (*)(int))(t1))(a4);
}

int FUN_0c0b5344(int a4)
{
    register int t1;

    t1 = *(int *)((((*(int *)((a4 + 0x40))) << 2) + 0xC204008));
    return ((int (*)(int))(t1))(a4);
}

int FUN_0c0b5a08(int a4)
{
    register int t1;

    t1 = *(int *)((((*(int *)((a4 + 0x40))) << 2) + 0xC2041DC));
    return ((int (*)(int))(t1))(a4);
}

void FUN_0c0b6168(void)
{
    if (((((struct o14_int *)0xC23ED9C)->v)) == 0) {
        (((struct o0_uint *)0xC23ED9C)->v) = 0x4;
    }
}

void FUN_0c0cedf4(void)
{
    if ((int)((((struct o0_int *)0xC23A25C)->v)) < 0) {
        (((struct o0_uint *)0xC23A25C)->v) = 0x2;
    }
    (((struct o4_uint *)0xC23A25C)->v) = 0x2;
}

int FUN_0c21336c(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c2113b4();
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t1))(0x2);
}

int FUN_0c22c872(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC237EE0);
    }
    (((struct o4C_uint *)(a4))->v) = a5;
    return 0x4C;
}

int FUN_0c2326ce(int a4, int a5, int a6)
{
    (((struct o9C_uint *)(a4))->v) = (((((struct o9C_int *)(a4))->v)) + a6);
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + a6);
    return 0x98;
}

int FUN_0c0248ea(int a4)
{
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c02a702(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02a548(a4);
    }
    return ((int (*)(int))(0xC02A640))(a4);
}

int FUN_0c02a8cc(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02a760(a4);
    }
    return ((int (*)(int))(0xC02A84C))(a4);
}

int FUN_0c02abaa(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02a9d6(a4);
    }
    return ((int (*)(int))(0xC02AACC))(a4);
}

int FUN_0c02ae3e(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02ac3e(a4);
    }
    return ((int (*)(int))(0xC02AD98))(a4);
}

int FUN_0c02b0b2(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02aef8(a4);
    }
    return ((int (*)(int))(0xC02AFF0))(a4);
}

int FUN_0c02b320(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02b1ac(a4);
    }
    return ((int (*)(int))(0xC02B2A0))(a4);
}

int FUN_0c02bb30(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return ((int (*)(int))(0xC02B984))(a4);
    }
    return ((int (*)(int))(0xC02BAAC))(a4);
}

int FUN_0c02b8aa(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02b724(a4);
    }
    return ((int (*)(int))(0xC02B814))(a4);
}

int FUN_0c02bb48(int a4)
{
    (((struct o304_uint *)(a4))->v) = ((((struct o308_int *)(a4))->v));
    (((struct o4F4_uint *)(a4))->v) = 0x0;
    return 0x4F4;
}

int FUN_0c02e0ac(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02ddf8(a4);
    }
    return ((int (*)(int))(0xC02DFE4))(a4);
}

int FUN_0c02e3ae(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c02e13c(a4);
    }
    return ((int (*)(int))(0xC02E2FC))(a4);
}

int FUN_0c02e998(int a4)
{
    if (((((struct o4FC_int *)(a4))->v)) != 0) {
        return ((int (*)(int))(0xC02E7E4))(a4);
    }
    return ((int (*)(int))(0xC02E8D0))(a4);
}

int FUN_0c03144c(int a4)
{
    if ((*(int *)((a4 + 0x4FC))) != 0) {
        return FUN_0c031290(a4);
    }
    return ((int (*)(int))(0xC031390))(a4);
}

int FUN_0c03b9c4(int a4, int a5)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c03acb4(a4, a5);
    }
    return t0;
}

int FUN_0c07bacc(int a4, int a5, int a6, int a7)
{
    return FUN_0c0be4d0((*(short *)((a4 + 0x4A))), (a4 + 0x30), a6, a7);
}

int FUN_0c084b0a(float f4, float f5, float f6)
{
    *(float *)0xC247EE8 = f4;
    *(float *)0xC247EEC = f5;
    *(float *)0xC247EF0 = f6;
    return FUN_0c084800(0xC247ED8, f4, f5, f6);
}

int FUN_0c0a300c(int a4)
{
    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x100);
    return FUN_0c05816a(a4, 0xB);
}

int FUN_0c0b48ba(void)
{
    FUN_0c085534();
    return FUN_0c052064(0x1);
}

int FUN_0c0b5356(int a4)
{
    (((struct o50_uint *)(a4))->v) = 0xF;
    (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
    return 0x40;
}

int FUN_0c0b7606(int a4)
{
    register int t1;

    t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC204504));
    return ((int (*)(int))(t1))(a4);
}

int FUN_0c0b85dc(void)
{
    nlUnitMatrix();
    return FUN_0c082b76(0x0);
}

int FUN_0c011c52(void)
{
    *(unsigned int *)0xC23A1A8 = 0x1;
    return FUN_0c010c40(0x1);
}

int FUN_0c01a93a(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC1EFA5C));
    return ((int (*)(void))(t1))();
}

int FUN_0c01abe4(void)
{
    *(unsigned int *)0xC23A190 = 0x2;
    *(unsigned int *)0xC23ED5C = 0x0;
    return FUN_0c01aae0();
}

int FUN_0c03f01a(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x7;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f052(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0xB;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f060(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x19;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f07c(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0xC;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f08a(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0xD;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f0a6(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x11;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f0b4(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x12;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f0de(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x14;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f108(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x16;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f124(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x1A;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f132(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x1C;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f160(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0xF;
    (((struct o47C_uint *)(a4))->v) = 0xC03F140;
    return 0x47C;
}

int FUN_0c03f17c(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x1E;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f16e(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x1D;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f1a2(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x22;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f210(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x24;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f22c(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x26;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f21e(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x25;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f248(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2B;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f23a(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x28;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f264(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2D;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f256(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2C;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f272(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2A;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f280(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x27;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f2b6(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2E;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f2d2(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x30;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f2c4(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x2F;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f2fe(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x32;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f32c(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x34;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f33a(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x35;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f356(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3A;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f348(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x36;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f372(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3C;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f364(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3B;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f3a0(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x37;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f3d0(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3D;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f3de(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3E;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f3ec(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x3F;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f408(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x42;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f3fa(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x40;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c03f416(int a4)
{
    (((struct o4DC_uint *)(a4))->v) = 0x41;
    (((struct o47C_uint *)(a4))->v) = 0x0;
    return 0x47C;
}

int FUN_0c04c8d4(int a4)
{
    (((struct o20C_uint *)(a4))->v) = 0x40000;
    (((struct o210_uint *)(a4))->v) = 0x3C;
    return 0x210;
}

void FUN_0c0698c0(void)
{
    *(unsigned int *)0xC247C3C = 0x0;
    *(float *)0xC247C40 = 0.0f;
}

int FUN_0c06ab84(void)
{
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    return 0xC23ED48;
}

int FUN_0c07408e(void)
{
    FUN_0c07410a();
    return FUN_0c08e46e(0xFFFFFFFF);
}

int FUN_0c075744(int a4)
{
    return ((((*(float *)((a4 + 0x38))) > 138.0f)) ? 1 : 0);
}

int FUN_0c083d38(int a4, int a5)
{
    return FUN_0c085050(a5, 0x0, 0x0);
}

int FUN_0c083d46(int a4, int a5)
{
    return FUN_0c0e40ec(0x3, 0xAA0, a5);
}

int FUN_0c0a336a(void)
{
    *(unsigned int *)0xC247D04 = 0x7;
    *(unsigned int *)0xC247CD0 = 0xC102EC4;
    return 0xC247CD0;
}

int FUN_0c0a9076(int a4)
{
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x8;
    return 0xC247030;
}

int FUN_0c0a98ba(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10D27C));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ab250(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10D290));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ab336(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10DFE4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ab2de(void)
{
    return FUN_0c0a880e(0xC0AB2FE, 0xC0A8C94, 0xC0AB2EC, 0x154);
}

int FUN_0c0ab344(void)
{
    return FUN_0c0a87b4(0xC0AB352, 0xC0AB35A, 0xC0AB374, 0x539);
}

int FUN_0c0ab790(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10DFFC));
    return ((int (*)(void))(t1))();
}

int FUN_0c0abf3e(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10E3BC));
    return ((int (*)(void))(t1))();
}

int FUN_0c0abf60(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10E3D4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0abf6e(void)
{
    return FUN_0c0a87b4(0xC0ABF7C, 0xC0ABF92, 0xC0A8C94, 0x71A);
}

int FUN_0c0abf96(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10E3EC));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ac0d8(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10E404));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ac45c(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8((*(int *)(((*(int *)((a4 + 0x74))) + 0xC))), a5, a6, a7);
}

int FUN_0c0acb4e(void)
{
    return FUN_0c0a87b4(0xC0ACB5C, 0xC0ACBBC, 0xC0ACBD0, 0x44C);
}

int FUN_0c0accbc(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10EE14));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ad020(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10EE2C));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ad916(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10EE44));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ad924(void)
{
    return FUN_0c0a87b4(0xC0AD932, 0xC0AD944, 0xC0A8C94, 0x5A0);
}

int FUN_0c0ae1a0(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A18C) << 2) + 0xC10F86C));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af0d0(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10F880));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af0f2(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10F898));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af170(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10F8B0));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af242(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10F8C8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af9a6(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10FDF8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0afdba(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110528));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b05f4(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110540));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b0602(void)
{
    return FUN_0c0a87b4(0xC0B0640, 0xC0B0610, 0xC0B06B0, 0x5DC);
}

int FUN_0c0b06c2(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110558));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b0872(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110570));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b0880(void)
{
    return FUN_0c0a87b4(0xC0B088E, 0xC0B0908, 0xC0B0996, 0xEA60);
}

int FUN_0c0b09a8(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110588));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b09b6(void)
{
    return FUN_0c0a87b4(0xC0B0A40, 0xC0B09C4, 0xC0A8C94, 0xDB6);
}

int FUN_0c0b479c(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC203FA0));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b4ece(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC203FB4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b525a(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC204000));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b58f2(void)
{
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23ED48 = 0x0;
    return 0xC23ED48;
}

int FUN_0c0b5900(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC2041D4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b5d46(void)
{
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23ED48 = 0x0;
    return 0xC23ED48;
}

int FUN_0c0b5e04(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC2044B0));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b7458(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC2044F4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b9c86(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC1124D4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0cfccc(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC1E9FC8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0d1cc6(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC1EA0B4));
    return ((int (*)(void))(t1))();
}

void FUN_0c0e4e74(int a4)
{
    int stk[2];

    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a4;
}

int FUN_0c220f80(int a4, int a5)
{
    FUN_0c228ed0(a4, a5);
    return 0x1;
}

float FUN_0c9df074(int a4)
{
    return (float)(*(short *)((a4 + 0x2)));
}

void FUN_0c010618(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x2;
    *(unsigned int *)0xC23EAB8 = 0x210;
}

int FUN_0c011c60(void)
{
    *(unsigned int *)0xC23A1A8 = 0x100;
    return FUN_0c010c40(0x1);
}

int FUN_0c054f2e(void)
{
    return FUN_0c0e19aa(0xC054F5C, 0x80, (*(int *)0xC23ECE4));
}

int FUN_0c057bd2(int a4)
{
    *(unsigned int *)((a4 + 0x360)) = 0x0;
    return FUN_0c091c68(a4);
}

int FUN_0c057f72(void)
{
    return FUN_0c0e19aa(0xC057F7E, 0x80, (*(int *)0xC23ECE4));
}

int FUN_0c077f24(void)
{
    return FUN_0c0e19aa(0xC077EBC, 0x30, (*(int *)0xC23ECF0));
}

int FUN_0c07adb0(void)
{
    return FUN_0c0e19aa(0xC07AD18, 0x30, (*(int *)0xC23ECF0));
}

int FUN_0c083c92(int a4, int a5)
{
    return FUN_0c084b1a(a5, 0x0);
}

int FUN_0c0aa416(void)
{
    return FUN_0c0e19aa(0xC0AA464, 0x68, (*(int *)0xC23ECE0));
}

int FUN_0c0ab25e(void)
{
    return FUN_0c0a87b4(0xC0AB26A, 0xC0A8C94, 0xC0A8C94, 0x122);
}

int FUN_0c0abf4c(void)
{
    return FUN_0c0a87b4(0xC0ABF58, 0xC0A8C94, 0xC0A8C94, 0x21C);
}

int FUN_0c0accca(void)
{
    return FUN_0c0a87b4(0xC0ACCD6, 0xC0A8C94, 0xC0A8C94, 0x1CC);
}

int FUN_0c0ae146(void)
{
    return FUN_0c0a87b4(0xC0AE152, 0xC0A8C94, 0xC0A8C94, 0xD1A);
}

int FUN_0c0af0de(void)
{
    return FUN_0c0a87b4(0xC0AF0EA, 0xC0A8C94, 0xC0A8C94, 0x168);
}

int FUN_0c0af100(void)
{
    return FUN_0c0a87b4(0xC0AF168, 0xC0A8C94, 0xC0A8C94, 0x453);
}

int FUN_0c0af17e(void)
{
    return FUN_0c0a87b4(0xC0AF18A, 0xC0A8C94, 0xC0A8C94, 0xD2);
}

int FUN_0c0af250(void)
{
    return FUN_0c0a87b4(0xC0AF25C, 0xC0A8C94, 0xC0A8C94, 0x185);
}

int FUN_0c0af97e(void)
{
    return FUN_0c0a87b4(0xC0AF98A, 0xC0A8C94, 0xC0A8C94, 0x524);
}

int FUN_0c0afda6(void)
{
    return FUN_0c0a87b4(0xC0AFDB2, 0xC0A8C94, 0xC0A8C94, 0xB4);
}

int FUN_0c0afdc8(void)
{
    return FUN_0c0a87b4(0xC0AFDD4, 0xC0A8C94, 0xC0A8C94, 0x6CC);
}

int FUN_0c0b9ef2(void)
{
    FUN_0c0b9efe();
    return FUN_0c0c0094();
}

int FUN_0c0c7e3a(void)
{
    return FUN_0c0e19aa(0xC0C7D9C, 0x30, (*(int *)0xC23ECF4));
}

int FUN_0c210c5a(void)
{
    register int t0;

    t0 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = (t0 | 0x800);
    return (t0 | 0x800);
}

int FUN_0c22a59c(int a4)
{
    return ADXB_GetCof((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5b4(int a4)
{
    return ADXB_GetLpInsNsmpl((*(int *)((a4 + 0x4))));
}

int FUN_0c07424a(void)
{
    register int t0;

    t0 = *(int *)0xC23ED88;
    *(unsigned int *)0xC23ED88 = (t0 | 0x1);
    return (t0 | 0x1);
}

int FUN_0c07e196(int a4)
{
    return FUN_0c0a3640(a4, 0x0, 0xC101388, 0x0);
}

int FUN_0c083c4a(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8(a5, a5, a6, a7);
}

void FUN_0c083c88(int a4, int a5)
{
    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | a5);
}

int FUN_0c08a30a(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e15d4((*(int *)((a4 + 0x30))));
}

int FUN_0c08e122(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e15d4((*(int *)((a4 + 0x30))));
}

int FUN_0c093b00(int a4)
{
    return FUN_0c0e2a4c((*(int *)((a4 + 0x30))));
}

int FUN_0c0942ce(int a4)
{
    return FUN_0c0e2a4c((*(int *)((a4 + 0x34))));
}

int FUN_0c093f14(int a4)
{
    return FUN_0c0e2a4c((*(int *)((a4 + 0x30))));
}

int FUN_0c0a8fea(int a4)
{
    (((struct o64_float *)(a4))->v) = -0.0138611076f;
    return 0x64;
}

int FUN_0c0ac898(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    return FUN_0c0be0e4((a4 + 0x30), a5, a6, a7, f4, f5, f6, f7, f8, f9);
}

int FUN_0c0ad264(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e15d4((*(int *)((a4 + 0x30))));
}

void FUN_0c0ae1f8(void)
{
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
}

int FUN_0c0b3d50(int a4, float f4)
{
    return FUN_0c0c0340((a4 + 0x30));
}

void FUN_0c0b42da(void)
{
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
}

int FUN_0c0b5dfa(int a4, float f4)
{
    return FUN_0c0c0340((a4 + 0x30));
}

void FUN_0c0b8946(void)
{
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
}

int FUN_0c0c368e(void)
{
    FUN_0c0c35ca();
    return FUN_0c0c366c();
}

void FUN_0c0cfcda(void)
{
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
}

int FUN_0c231fc4(int a4, int a5)
{
    register int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}

int FUN_0c02bb40(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x0;
    return 0x4F4;
}

int FUN_0c02bb58(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x1;
    return 0x4F4;
}

int FUN_0c02d114(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x10;
    return 0x4F4;
}

int FUN_0c02d11c(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x7;
    return 0x4F4;
}

int FUN_0c02d124(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0xA;
    return 0x4F4;
}

int FUN_0c02da70(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x1A;
    return 0x4F4;
}

int FUN_0c02dbfc(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x1E;
    return 0x4F4;
}

int FUN_0c02dc04(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x1F;
    return 0x4F4;
}

int FUN_0c02ddf0(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x8;
    return 0x4F4;
}

int FUN_0c02e10a(int a4)
{
    (((struct o4F4_uint *)(a4))->v) = 0x9;
    return 0x4F4;
}

void FUN_0c04515a(void)
{
    *(unsigned int *)0xC246DB0 = 0x1;
}

int FUN_0c045162(void)
{
    *(unsigned int *)0xC246DB0 = 0x2;
    return 0xC246DB0;
}

void FUN_0c04516a(void)
{
    *(unsigned int *)0xC246DB0 = 0x4;
}

int FUN_0c045172(void)
{
    *(unsigned int *)0xC246DB0 = 0x8;
    return 0xC246DB0;
}

void FUN_0c04517a(void)
{
    *(unsigned int *)0xC246DB0 = 0x10;
}

int FUN_0c045182(void)
{
    *(unsigned int *)0xC246DB0 = 0x20;
    return 0xC246DB0;
}

void FUN_0c04532a(void)
{
    *(unsigned int *)0xC246DB4 = 0x1;
}

void FUN_0c045374(void)
{
    *(unsigned int *)0xC246DB8 = 0x1;
}

void FUN_0c045578(void)
{
    *(unsigned int *)0xC246DBC = 0x1;
}

int FUN_0c0455ea(void)
{
    *(unsigned int *)0xC246DC0 = 0x1;
    return 0xC246DC0;
}

void FUN_0c0455f2(void)
{
    *(unsigned int *)0xC246DC0 = 0x2;
}

int FUN_0c0455fa(void)
{
    *(unsigned int *)0xC246DC0 = 0x4;
    return 0xC246DC0;
}

void FUN_0c045602(void)
{
    *(unsigned int *)0xC246DC0 = 0x8;
}

int FUN_0c04560a(void)
{
    *(unsigned int *)0xC246DC0 = 0x10;
    return 0xC246DC0;
}

int FUN_0c045656(void)
{
    *(unsigned int *)0xC246DC4 = 0x1;
    return 0xC246DC4;
}

void FUN_0c04565e(void)
{
    *(unsigned int *)0xC246DC4 = 0x2;
}

void FUN_0c04571a(void)
{
    *(unsigned int *)0xC246DC8 = 0x1;
}

int FUN_0c045722(void)
{
    *(unsigned int *)0xC246DCC = 0x1;
    return 0xC246DCC;
}

void FUN_0c04572a(void)
{
    *(unsigned int *)0xC246DCC = 0x2;
}

int FUN_0c045732(void)
{
    *(unsigned int *)0xC246DCC = 0x4;
    return 0xC246DCC;
}

void FUN_0c045808(void)
{
    *(unsigned int *)0xC246DD8 = 0x0;
}

int FUN_0c045810(void)
{
    *(unsigned int *)0xC246DD8 = 0x1;
    return 0xC246DD8;
}

void FUN_0c0458f0(void)
{
    *(unsigned int *)0xC246DDC = 0x0;
}

int FUN_0c0458f8(void)
{
    *(unsigned int *)0xC246DDC = 0x1;
    return 0xC246DDC;
}

void FUN_0c045a36(void)
{
    *(unsigned int *)0xC246DE0 = 0x0;
}

int FUN_0c045a3e(void)
{
    *(unsigned int *)0xC246DE0 = 0x1;
    return 0xC246DE0;
}

void FUN_0c045a46(void)
{
    *(unsigned int *)0xC246DE4 = 0x0;
}

int FUN_0c045a4e(void)
{
    *(unsigned int *)0xC246DE4 = 0x1;
    return 0xC246DE4;
}

int FUN_0c070c3a(void)
{
    return FUN_0c070b90(0xC200420, 0xFFFF9556);
}

int FUN_0c07620a(void)
{
    return FUN_0c087016(0xC0FE680, 0x11);
}

int FUN_0c076ac0(void)
{
    return FUN_0c08f3d8(0x384, 0x3C);
}

int FUN_0c082cf2(void)
{
    *(unsigned int *)0xC247DB0 = 0x0;
    return 0xC247DB0;
}

int FUN_0c083c80(int a4, int a5)
{
    return ((int (*)(int, int))(a5))(a4, a5);
}

void FUN_0c08e466(void)
{
    *(unsigned int *)0xC248DC4 = 0x0;
}

int FUN_0c08e9d8(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8(0x428A9, a5, a6, a7);
}

int FUN_0c0ab26a(void)
{
    return FUN_0c0a8d80(0xC10DD54);
}

int FUN_0c0ab352(void)
{
    return FUN_0c0a8d80(0xC10E1C8);
}

int FUN_0c0abf58(void)
{
    return FUN_0c0a8d80(0xC10E5C0);
}

int FUN_0c0ad11e(void)
{
    return FUN_0c0c465c(0xFD9);
}

int FUN_0c0af0ea(void)
{
    return FUN_0c0a8d80(0xC10F9F0);
}

int FUN_0c0af18a(void)
{
    return FUN_0c0a8d80(0xC10FC70);
}

int FUN_0c0afdb2(void)
{
    return FUN_0c0a8d80(0xC110638);
}

int FUN_0c0b0640(void)
{
    return FUN_0c0a8d80(0xC110CC4);
}

int FUN_0c0b0704(void)
{
    return FUN_0c0a8d80(0xC110EBC);
}

int FUN_0c0b070c(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8(0x524A9, a5, a6, a7);
}

int FUN_0c0b088e(void)
{
    return FUN_0c0a8d80(0xC110F18);
}

int FUN_0c0b2554(void)
{
    return FUN_0c0a8d80(0xC11165C);
}

int FUN_0c0c36ce(void)
{
    return FUN_0c0e16c0((*(int *)0xC26238C));
}

int FUN_0c0cd6b0(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8(0x81FA9, a5, a6, a7);
}

int FUN_0c231fce(int a4, int a5)
{
    return (unsigned short)(*(short *)(((a4 + a5) + 0x0)));
}

void FUN_0c231fd6(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}

int FUN_0c01ac94(void)
{
    return FUN_0c08448c(0x1);
}

int FUN_0c01ad14(void)
{
    return FUN_0c08448c(0x0);
}

int FUN_0c0248fa(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c025ffc(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c026a0a(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c026a32(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c02e104(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c02e706(int a4, int a5, int a6, int a7)
{
    return FUN_0c02a19a(a4);
}

int FUN_0c03faf4(int a4)
{
    return FUN_0c041f2a(a4);
}

int FUN_0c040802(int a4, int a5)
{
    return FUN_0c04073a(a4, a5, (*(float *)0xC040894));
}

int FUN_0c040808(int a4, int a5)
{
    return FUN_0c04073a(a4, a5, (*(float *)0xC040898));
}

int FUN_0c043fc6(int a4)
{
    return FUN_0c036b64(a4);
}

int FUN_0c056b1a(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e19f2();
}

int FUN_0c057bc6(int a4)
{
    return FUN_0c0926ec(a4);
}

int FUN_0c057bcc(int a4)
{
    return FUN_0c0927b8(a4);
}

int FUN_0c057be2(int a4)
{
    return FUN_0c01d10c(a4);
}

int FUN_0c057be8(int a4)
{
    return FUN_0c092320(a4);
}

int FUN_0c057bee(int a4)
{
    return FUN_0c01d0be(a4);
}

int FUN_0c057bf4(int a4)
{
    return FUN_0c01d0be(a4);
}

int FUN_0c057c14(int a4)
{
    return FUN_0c01d10c(a4);
}

int FUN_0c0596be(int a4, float f4)
{
    return FUN_0c05969a(a4, 0xC0F9B40);
}

int FUN_0c05cb36(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC05C7E8))(a4, a5, 0x0, 0x0);
}

int FUN_0c05cb3c(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC05C7E8))(a4, a5, 0x1, 0x1);
}

int FUN_0c05cb42(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0xC05C7E8))(a4, a5, 0x0, 0x1);
}

int FUN_0c070c42(void)
{
    return FUN_0c070b90(0xC20042C, 0x0);
}

int FUN_0c07594e(void)
{
    return FUN_0c0758f4(0xC0FE5DC);
}

int FUN_0c07dc38(int a4)
{
    return FUN_0c092d84(a4, 0x0);
}

int FUN_0c07dc54(int a4)
{
    return FUN_0c0a4b78(a4);
}

int FUN_0c07dc5a(int a4)
{
    return FUN_0c0a5170(a4);
}

int FUN_0c07dc60(int a4)
{
    return FUN_0c0a5710(a4);
}

int FUN_0c07dc66(int a4)
{
    return FUN_0c092d84(a4, 0x3);
}

int FUN_0c07e06a(int a4)
{
    return FUN_0c092cea(a4, 0x6);
}

void FUN_0c083bf4(int a4, int a5)
{
    *(unsigned int *)0xC23EDB0 = a5;
}

int FUN_0c095ede(int a4)
{
    return FUN_0c088ec4(a4, 0x5A);
}

void FUN_0c0a089e(int a4)
{
    *(unsigned int *)0xC24976C = a4;
}

void FUN_0c0a08a4(int a4)
{
    *(unsigned int *)0xC249770 = a4;
}

int FUN_0c0a9b7e(void)
{
    return FUN_0c07e38c();
}

int FUN_0c0aa4f2(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e19f2();
}

int FUN_0c0ab24a(void)
{
    return FUN_0c085534();
}

int FUN_0c0ae252(int a4, int a5, int a6, int a7)
{
    return FUN_0c0e19f2();
}

int FUN_0c0ae266(void)
{
    return FUN_0c085534();
}

int FUN_0c0b0cb2(void)
{
    return FUN_0c085534();
}

int FUN_0c0b32a2(int a4)
{
    return FUN_0c0bbbf4(a4);
}

int FUN_0c0b609a(void)
{
    return FUN_0c01ac9a();
}

int FUN_0c0b60a0(void)
{
    return FUN_0c021956();
}

int FUN_0c0b68c8(void)
{
    return FUN_0c021956();
}

int FUN_0c0b75cc(void)
{
    return FUN_0c085534();
}

int FUN_0c0b75dc(void)
{
    return FUN_0c01ac9a();
}

int FUN_0c0b75e2(void)
{
    return FUN_0c01ac8c();
}

int FUN_0c0c02dc(void)
{
    return 0xAAC0;
}

int FUN_0c0c02e2(void)
{
    return 0x2AAC0;
}

int FUN_0c0caeea(void)
{
    return FUN_0c0ca332(0xC20A270);
}

int FUN_0c0ccab0(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cca88(0xC1E9DFC);
}

int FUN_0c0ccab6(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cca88(0xC1E9E24);
}

void FUN_0c0d88c0(int a4)
{
    *(unsigned int *)0xC20CC50 = a4;
}

void FUN_0c0d93e0(int a4)
{
    *(unsigned int *)0xC943E34 = a4;
}

void FUN_0c0d9a70(int a4)
{
    *(unsigned int *)0xA05F811C = a4;
}

int FUN_0c0d9a90(void)
{
    return (*(int *)0xC943F0C);
}

int FUN_0c0d9aa0(void)
{
    return (*(int *)0xC943F10);
}

void FUN_0c0da870(int a4)
{
    *(unsigned int *)0xC20CDC8 = a4;
}

void FUN_0c0db0d0(int a4)
{
    *(unsigned int *)0xC944214 = a4;
}

int FUN_0c0df500(void)
{
    return (*(int *)0xC94C694);
}

int FUN_0c0e236e(void)
{
    return (*(int *)0xC94C798);
}

int FUN_0c0e4498(void)
{
    return 0xC1EAB28;
}

void FUN_0c20d812(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x1;
}

void FUN_0c214be8(int a4)
{
    *(unsigned int *)0xC95E688 = a4;
}

int FUN_0c22113c(void)
{
    return ((int (*)(void))(0xC228F34))();
}

int FUN_0c22127c(void)
{
    return ((int (*)(void))(0xC228F48))();
}

void FUN_0c22cde6(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x20)) = a6;
}

void FUN_0c22d0c2(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void FUN_0c231fde(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = a6;
}

void FUN_0c01256c(void)
{
    
}

void FUN_0c014676(void)
{
    
}

void FUN_0c018ebc(void)
{
    
}

int FUN_0c018eb8(int a4)
{
    return FUN_0c018422(a4);
}

int FUN_0c018f30(int a4)
{
    return FUN_0c018422(a4);
}

void FUN_0c01ac44(void)
{
    
}

int FUN_0c027732(int a4, int a5, int a6)
{
    return FUN_0c026ddc(a4, a5, a6);
}

void FUN_0c02c2ec(void)
{
    
}

void FUN_0c02da78(void)
{
    
}

void FUN_0c042e68(void)
{
    
}

void FUN_0c042e6c(void)
{
    
}

void FUN_0c043fcc(void)
{
    
}

void FUN_0c044446(void)
{
    
}

void FUN_0c04444a(void)
{
    
}

void FUN_0c04f7c8(void)
{
    
}

void FUN_0c056b20(void)
{
    
}

void FUN_0c057bc2(void)
{
    
}

void FUN_0c057bde(void)
{
    
}

void FUN_0c057c0c(void)
{
    
}

void FUN_0c057c10(void)
{
    
}

void FUN_0c0594fc(void)
{
    
}

void FUN_0c059d6e(void)
{
    
}

int FUN_0c05ba22(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    return FUN_0c05b6fc(a4, a5, 0x1);
}

int FUN_0c05ba26(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    return FUN_0c05b6fc(a4, a5, 0x0);
}

int FUN_0c06b744(int a4)
{
    return FUN_0c06b430(a4);
}

int FUN_0c06b884(int a4)
{
    return FUN_0c06b430(a4);
}

void FUN_0c07140a(void)
{
    
}

void FUN_0c07e454(void)
{
    
}

void FUN_0c081e08(void)
{
    
}

void FUN_0c082224(void)
{
    
}

void FUN_0c082228(void)
{
    
}

void FUN_0c088042(void)
{
    
}

void FUN_0c088364(void)
{
    
}

void FUN_0c09a99e(void)
{
    
}

void FUN_0c0a8794(void)
{
    
}

void FUN_0c0a8c94(void)
{
    
}

void FUN_0c0abf92(void)
{
    
}

void FUN_0c0ad944(void)
{
    
}

void FUN_0c0b39b2(void)
{
    
}

void FUN_0c0b39b6(void)
{
    
}

void FUN_0c0b4f6e(void)
{
    
}

void FUN_0c0b532e(void)
{
    
}

void FUN_0c0b59f2(void)
{
    
}

void FUN_0c0b60a6(void)
{
    
}

void FUN_0c0b6504(void)
{
    
}

void FUN_0c0bb1e8(void)
{
    
}

void FUN_0c0bf3f2(void)
{
    
}

int FUN_0c0c2530(void)
{
    return FUN_0c0c15f8();
}

void FUN_0c0c2538(void)
{
    
}

int FUN_0c0c2534(void)
{
    return FUN_0c0c2506();
}

void FUN_0c0cbaf4(void)
{
    
}

void FUN_0c0ce516(void)
{
    
}

void FUN_0c0d9a30(void)
{
    
}

void FUN_0c0dbaac(void)
{
    
}

void FUN_0c0dbaf0(void)
{
    
}

void FUN_0c0dbb44(void)
{
    
}

void FUN_0c0e17a4(void)
{
    
}

void FUN_0c20d792(void)
{
    
}

void FUN_0c20d796(void)
{
    
}

void FUN_0c20d79a(void)
{
    
}

void FUN_0c20d7c0(void)
{
    
}

void FUN_0c20d7c4(void)
{
    
}

void FUN_0c20d7c8(void)
{
    
}

void FUN_0c20d7cc(void)
{
    
}

void FUN_0c20d7d0(void)
{
    
}

int FUN_0c216b46(void)
{
    return 0xA;
}

int FUN_0c216b4a(void)
{
    return 0xA;
}

int FUN_0c216b4e(void)
{
    return 0xA;
}

void FUN_0c22a64e(void)
{
    
}

void FUN_0c22cd30(void)
{
    for (;;) {
    }
}

int FUN_0c22cde2(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

void FUN_0c22d00c(void)
{
    for (;;) {
    }
}

int FUN_0c22d0be(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

void FUN_0c233824(void)
{
    
}

void FUN_0c9df044(int a4)
{
    
}

void FUN_0c9dfcdc(int a4)
{
    
}
