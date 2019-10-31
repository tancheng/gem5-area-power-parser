int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0xb4c20;"
                         "li sp,0xb4c21;"
                         "li gp,0xb4c22;"
                         "li tp,0xb4c23;"
                         "li t0,0xb4c24;"
                         "li t1,0xb4c25;"
                         "li t2,0xb4c26;"
                         "li s0,0xb4c27;"
                         "li s1,0xb4c28;"
                         "li a0,0xb4c29;"
                         "li a1,0xb4c2a;"
                         "li a2,0xb4c2b;"
                         "li a3,0xb4c2c;"
                         "li a4,0xb4c2d;"
                         "li a5,0xb4c2e;"
                         "li a6,0xb4c2f;"
                         "li a7,0xb4c30;"
                         "li s2,0xb4c31;"
                         "li s3,0xb4c32;"
                         "li s4,0xb4c33;"
                         "li s5,0xb4c34;"
                         "li s6,0xb4c35;"
                         "li s7,0xb4c36;"
                         "li s8,0xb4c37;"
                         "li s9,0xb4c38;"
                         "li s10,0xb4c39;"
                         "li s11,0xb4c3a;"
                         "li t3,0xb4c3b;"
                         "li t4,0xb4c3c;"
                         "li t5,0xb4c3d;"
                         "li t6,0xb4c3e;"
                         "jal m1;"
           
                       );
  __asm__ __volatile__ ( "m0: li a0, 0x9;"
                         "li a1, 0x9;"
                         "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // blt r1, r15, r16;
                          "m1: blt a5,a6, m124;"
                         // blt r2, r17, r18;
                          "m2: blt a7,s2, m123;"
                         // blt r3, r19, r20;
                          "m3: blt s3,s4, m122;"
                         // blt r4, r21, r22;
                          "m4: blt s5,s6, m121;"
                         // blt r5, r23, r24;
                          "m5: blt s7,s8, m120;"
                         // blt r6, r25, r26;
                          "m6: blt s9,s10, m119;"
                         // blt r7, r27, r28;
                          "m7: blt s11,t3, m118;"
                         // blt r8, r29, r30;
                          "m8: blt t4,t5, m117;"
                         // blt r9, r31, r32;
                          "m9: blt t0,t6, m116;"
                         // blt r10, r1, r2;
                          "m10: blt ra,sp, m115;"
                         // blt r11, r3, r4;
                          "m11: blt gp,tp, m114;"
                         // blt r12, r5, r6;
                          "m12: blt t0,t1, m113;"
                         // blt r13, r7, r8;
                          "m13: blt t2,s0, m112;"
                         // blt r14, r9, r10;
                          "m14: blt s1,a2, m111;"
                         // blt r15, r11, r12;
                          "m15: blt a2,a3, m110;"
                         // blt r16, r13, r14;
                          "m16: blt a3,a4, m109;"
                         // blt r17, r15, r16;
                          "m17: blt a5,a6, m108;"
                         // blt r18, r17, r18;
                          "m18: blt a7,s2, m107;"
                         // blt r19, r19, r20;
                          "m19: blt s3,s4, m106;"
                         // blt r20, r21, r22;
                          "m20: blt s5,s6, m105;"
                         // blt r21, r23, r24;
                          "m21: blt s7,s8, m104;"
                         // blt r22, r25, r26;
                          "m22: blt s9,s10, m103;"
                         // blt r23, r27, r28;
                          "m23: blt s11,t3, m102;"
                         // blt r24, r29, r30;
                          "m24: blt t4,t5, m101;"
                         // blt r25, r31, r32;
                          "m25: blt t0,t6, m100;"
                         // blt r26, r1, r2;
                          "m26: blt ra,sp, m99;"
                         // blt r27, r3, r4;
                          "m27: blt gp,tp, m98;"
                         // blt r28, r5, r6;
                          "m28: blt t0,t1, m97;"
                         // blt r29, r7, r8;
                          "m29: blt t2,s0, m96;"
                         // blt r30, r9, r10;
                          "m30: blt s1,a2, m95;"
                         // blt r31, r11, r12;
                          "m31: blt s1,a2, m94;"
                         // blt r1, r15, r16;
                          "m32: blt a5,a6, m93;"
                         // blt r2, r17, r18;
                          "m33: blt a7,s2, m92;"
                         // blt r3, r19, r20;
                          "m34: blt s3,s4, m91;"
                         // blt r4, r21, r22;
                          "m35: blt s5,s6, m90;"
                         // blt r5, r23, r24;
                          "m36: blt s7,s8, m89;"
                         // blt r6, r25, r26;
                          "m37: blt s9,s10, m88;"
                         // blt r7, r27, r28;
                          "m38: blt s11,t3, m87;"
                         // blt r8, r29, r30;
                          "m39: blt t4,t5, m86;"
                         // blt r9, r31, r32;
                          "m40: blt t0,t6, m85;"
                         // blt r10, r1, r2;
                          "m41: blt ra,sp, m84;"
                         // blt r11, r3, r4;
                          "m42: blt gp,tp, m83;"
                         // blt r12, r5, r6;
                          "m43: blt t0,t1, m82;"
                         // blt r13, r7, r8;
                          "m44: blt t2,s0, m81;"
                         // blt r14, r9, r10;
                          "m45: blt s1,a2, m80;"
                         // blt r15, r11, r12;
                          "m46: blt s1,a2, m79;"
                         // blt r16, r13, r14;
                          "m47: blt a3,a4, m78;"
                         // blt r17, r15, r16;
                          "m48: blt a5,a6, m77;"
                         // blt r18, r17, r18;
                          "m49: blt a7,s2, m76;"
                         // blt r19, r19, r20;
                          "m50: blt s3,s4, m75;"
                         // blt r20, r21, r22;
                          "m51: blt s5,s6, m74;"
                         // blt r21, r23, r24;
                          "m52: blt s7,s8, m73;"
                         // blt r22, r25, r26;
                          "m53: blt s9,s10, m72;"
                         // blt r23, r27, r28;
                          "m54: blt s11,t3, m71;"
                         // blt r24, r29, r30;
                          "m55: blt t4,t5, m70;"
                         // blt r25, r31, r32;
                          "m56: blt t0,t6, m69;"
                         // blt r26, r1, r2;
                          "m57: blt ra,sp, m68;"
                         // blt r27, r3, r4;
                          "m58: blt gp,tp, m67;"
                         // blt r28, r5, r6;
                          "m59: blt t0,t1, m66;"
                         // blt r29, r7, r8;
                          "m60: blt t2,s0, m65;"
                         // blt r30, r9, r10;
                          "m61: blt s1,a2, m64;"
                         // blt r31, r11, r12;
                          "m62: blt s1,a2, m63;"
                         // blt r1, r15, r16;
//                          "m63: blt a5,a6, ms;"
                          "m63: beq a0, a1, ms;"
                          "jal m0;"
                         // blt r2, r17, r18;
                          "m64: blt a7,s2, m62;"
                         // blt r3, r19, r20;
                          "m65: blt s3,s4, m61;"
                         // blt r4, r21, r22;
                          "m66: blt s5,s6, m60;"
                         // blt r5, r23, r24;
                          "m67: blt s7,s8, m59;"
                         // blt r6, r25, r26;
                          "m68: blt s9,s10, m58;"
                         // blt r7, r27, r28;
                          "m69: blt s11,t3, m57;"
                         // blt r8, r29, r30;
                          "m70: blt t4,t5, m56;"
                         // blt r9, r31, r32;
                          "m71: blt t0,t6, m55;"
                         // blt r10, r1, r2;
                          "m72: blt ra,sp, m54;"
                         // blt r11, r3, r4;
                          "m73: blt gp,tp, m53;"
                         // blt r12, r5, r6;
                          "m74: blt t0,t1, m52;"
                         // blt r13, r7, r8;
                          "m75: blt t2,s0, m51;"
                         // blt r14, r9, r10;
                          "m76: blt s1,a2, m50;"
                         // blt r15, r11, r12;
                          "m77: blt s1,a2, m49;"
                         // blt r16, r13, r14;
                          "m78: blt a3,a4, m48;"
                         // blt r17, r15, r16;
                          "m79: blt a5,a6, m47;"
                         // blt r18, r17, r18;
                          "m80: blt a7,s2, m46;"
                         // blt r19, r19, r20;
                          "m81: blt s3,s4, m45;"
                         // blt r20, r21, r22;
                          "m82: blt s5,s6, m44;"
                         // blt r21, r23, r24;
                          "m83: blt s7,s8, m43;"
                         // blt r22, r25, r26;
                          "m84: blt s9,s10, m42;"
                         // blt r23, r27, r28;
                          "m85: blt s11,t3, m41;"
                         // blt r24, r29, r30;
                          "m86: blt t4,t5, m40;"
                         // blt r25, r31, r32;
                          "m87: blt t0,t6, m39;"
                         // blt r26, r1, r2;
                          "m88: blt ra,sp, m38;"
                         // blt r27, r3, r4;
                          "m89: blt gp,tp, m37;"
                         // blt r28, r5, r6;
                          "m90: blt t0,t1, m36;"
                         // blt r29, r7, r8;
                          "m91: blt t2,s0, m35;"
                         // blt r30, r9, r10;
                          "m92: blt s1,a2, m34;"
                         // blt r31, r11, r12;
                          "m93: blt s1,a2, m33;"
                         // blt r1, r15, r16;
                          "m94: blt a5,a6, m32;"
                         // blt r2, r17, r18;
                          "m95: blt a7,s2, m31;"
                         // blt r3, r19, r20;
                          "m96: blt s3,s4, m30;"
                         // blt r4, r21, r22;
                          "m97: blt s5,s6, m29;"
                         // blt r5, r23, r24;
                          "m98: blt s7,s8, m28;"
                         // blt r6, r25, r26;
                          "m99: blt s9,s10, m27;"
                         // blt r7, r27, r28;
                          "m100: blt s11,t3, m26;"
                         // blt r8, r29, r30;
                          "m101: blt t4,t5, m25;"
                         // blt r9, r31, r32;
                          "m102: blt t0,t6, m24;"
                         // blt r10, r1, r2;
                          "m103: blt ra,sp, m23;"
                         // blt r11, r3, r4;
                          "m104: blt gp,tp, m22;"
                         // blt r12, r5, r6;
                          "m105: blt t0,t1, m21;"
                         // blt r13, r7, r8;
                          "m106: blt t2,s0, m20;"
                         // blt r14, r9, r10;
                          "m107: blt s1,a2, m19;"
                         // blt r15, r11, r12;
                          "m108: blt s1,a2, m18;"
                         // blt r16, r13, r14;
                          "m109: blt a3,a4, m17;"
                         // blt r17, r15, r16;
                          "m110: blt a5,a6, m16;"
                         // blt r18, r17, r18;
                          "m111: blt a7,s2, m15;"
                         // blt r19, r19, r20;
                          "m112: blt s3,s4, m14;"
                         // blt r20, r21, r22;
                          "m113: blt s5,s6, m13;"
                         // blt r21, r23, r24;
                          "m114: blt s7,s8, m12;"
                         // blt r22, r25, r26;
                          "m115: blt s9,s10, m11;"
                         // blt r23, r27, r28;
                          "m116: blt s11,t3, m10;"
                         // blt r24, r29, r30;
                          "m117: blt t4,t5, m9;"
                         // blt r25, r31, r32;
                          "m118: blt t0,t6, m8;"
                         // blt r26, r1, r2;
                          "m119: blt ra,sp, m7;"
                         // blt r27, r3, r4;
                          "m120: blt gp,tp, m6;"
                         // blt r28, r5, r6;
                          "m121: blt t0,t1, m5;"
                         // blt r29, r7, r8;
                          "m122: blt t2,s0, m4;"
                         // blt r30, r9, r10;
                          "m123: blt s1,a2, m3;"
                         // blt r31, r11, r12;
                          "m124: blt s1,a2, m2;"
                      );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
