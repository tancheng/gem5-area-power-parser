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
           
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // bge r1, r15, r16;
                          "m1: bge a5,a6, m124;"
                         // bge r2, r17, r18;
                          "m2: bge a7,s2, m123;"
                         // bge r3, r19, r20;
                          "m3: bge s3,s4, m122;"
                         // bge r4, r21, r22;
                          "m4: bge s5,s6, m121;"
                         // bge r5, r23, r24;
                          "m5: bge s7,s8, m120;"
                         // bge r6, r25, r26;
                          "m6: bge s9,s10, m119;"
                         // bge r7, r27, r28;
                          "m7: bge s11,t3, m118;"
                         // bge r8, r29, r30;
                          "m8: bge t4,t5, m117;"
                         // bge r9, r31, r32;
                          "m9: bge t0,t6, m116;"
                         // bge r10, r1, r2;
                          "m10: bge ra,sp, m115;"
                         // bge r11, r3, r4;
                          "m11: bge gp,tp, m114;"
                         // bge r12, r5, r6;
                          "m12: bge t0,t1, m113;"
                         // bge r13, r7, r8;
                          "m13: bge t2,s0, m112;"
                         // bge r14, r9, r10;
                          "m14: bge s1,a0, m111;"
                         // bge r15, r11, r12;
                          "m15: bge a1,a2, m110;"
                         // bge r16, r13, r14;
                          "m16: bge a3,a4, m109;"
                         // bge r17, r15, r16;
                          "m17: bge a5,a6, m108;"
                         // bge r18, r17, r18;
                          "m18: bge a7,s2, m107;"
                         // bge r19, r19, r20;
                          "m19: bge s3,s4, m106;"
                         // bge r20, r21, r22;
                          "m20: bge s5,s6, m105;"
                         // bge r21, r23, r24;
                          "m21: bge s7,s8, m104;"
                         // bge r22, r25, r26;
                          "m22: bge s9,s10, m103;"
                         // bge r23, r27, r28;
                          "m23: bge s11,t3, m102;"
                         // bge r24, r29, r30;
                          "m24: bge t4,t5, m101;"
                         // bge r25, r31, r32;
                          "m25: bge t0,t6, m100;"
                         // bge r26, r1, r2;
                          "m26: bge ra,sp, m99;"
                         // bge r27, r3, r4;
                          "m27: bge gp,tp, m98;"
                         // bge r28, r5, r6;
                          "m28: bge t0,t1, m97;"
                         // bge r29, r7, r8;
                          "m29: bge t2,s0, m96;"
                         // bge r30, r9, r10;
                          "m30: bge s1,a0, m95;"
                         // bge r31, r11, r12;
                          "m31: bge a1,a2, m94;"
                         // bge r1, r15, r16;
                          "m32: bge a5,a6, m93;"
                         // bge r2, r17, r18;
                          "m33: bge a7,s2, m92;"
                         // bge r3, r19, r20;
                          "m34: bge s3,s4, m91;"
                         // bge r4, r21, r22;
                          "m35: bge s5,s6, m90;"
                         // bge r5, r23, r24;
                          "m36: bge s7,s8, m89;"
                         // bge r6, r25, r26;
                          "m37: bge s9,s10, m88;"
                         // bge r7, r27, r28;
                          "m38: bge s11,t3, m87;"
                         // bge r8, r29, r30;
                          "m39: bge t4,t5, m86;"
                         // bge r9, r31, r32;
                          "m40: bge t0,t6, m85;"
                         // bge r10, r1, r2;
                          "m41: bge ra,sp, m84;"
                         // bge r11, r3, r4;
                          "m42: bge gp,tp, m83;"
                         // bge r12, r5, r6;
                          "m43: bge t0,t1, m82;"
                         // bge r13, r7, r8;
                          "m44: bge t2,s0, m81;"
                         // bge r14, r9, r10;
                          "m45: bge s1,a0, m80;"
                         // bge r15, r11, r12;
                          "m46: bge a1,a2, m79;"
                         // bge r16, r13, r14;
                          "m47: bge a3,a4, m78;"
                         // bge r17, r15, r16;
                          "m48: bge a5,a6, m77;"
                         // bge r18, r17, r18;
                          "m49: bge a7,s2, m76;"
                         // bge r19, r19, r20;
                          "m50: bge s3,s4, m75;"
                         // bge r20, r21, r22;
                          "m51: bge s5,s6, m74;"
                         // bge r21, r23, r24;
                          "m52: bge s7,s8, m73;"
                         // bge r22, r25, r26;
                          "m53: bge s9,s10, m72;"
                         // bge r23, r27, r28;
                          "m54: bge s11,t3, m71;"
                         // bge r24, r29, r30;
                          "m55: bge t4,t5, m70;"
                         // bge r25, r31, r32;
                          "m56: bge t0,t6, m69;"
                         // bge r26, r1, r2;
                          "m57: bge ra,sp, m68;"
                         // bge r27, r3, r4;
                          "m58: bge gp,tp, m67;"
                         // bge r28, r5, r6;
                          "m59: bge t0,t1, m66;"
                         // bge r29, r7, r8;
                          "m60: bge t2,s0, m65;"
                         // bge r30, r9, r10;
                          "m61: bge s1,a0, m64;"
                         // bge r31, r11, r12;
                          "m62: bge a1,a2, m63;"
                         // bge r1, r15, r16;
                          "m63: bge a5,a6, ms;"
                         // bge r2, r17, r18;
                          "m64: bge a7,s2, m62;"
                         // bge r3, r19, r20;
                          "m65: bge s3,s4, m61;"
                         // bge r4, r21, r22;
                          "m66: bge s5,s6, m60;"
                         // bge r5, r23, r24;
                          "m67: bge s7,s8, m59;"
                         // bge r6, r25, r26;
                          "m68: bge s9,s10, m58;"
                         // bge r7, r27, r28;
                          "m69: bge s11,t3, m57;"
                         // bge r8, r29, r30;
                          "m70: bge t4,t5, m56;"
                         // bge r9, r31, r32;
                          "m71: bge t0,t6, m55;"
                         // bge r10, r1, r2;
                          "m72: bge ra,sp, m54;"
                         // bge r11, r3, r4;
                          "m73: bge gp,tp, m53;"
                         // bge r12, r5, r6;
                          "m74: bge t0,t1, m52;"
                         // bge r13, r7, r8;
                          "m75: bge t2,s0, m51;"
                         // bge r14, r9, r10;
                          "m76: bge s1,a0, m50;"
                         // bge r15, r11, r12;
                          "m77: bge a1,a2, m49;"
                         // bge r16, r13, r14;
                          "m78: bge a3,a4, m48;"
                         // bge r17, r15, r16;
                          "m79: bge a5,a6, m47;"
                         // bge r18, r17, r18;
                          "m80: bge a7,s2, m46;"
                         // bge r19, r19, r20;
                          "m81: bge s3,s4, m45;"
                         // bge r20, r21, r22;
                          "m82: bge s5,s6, m44;"
                         // bge r21, r23, r24;
                          "m83: bge s7,s8, m43;"
                         // bge r22, r25, r26;
                          "m84: bge s9,s10, m42;"
                         // bge r23, r27, r28;
                          "m85: bge s11,t3, m41;"
                         // bge r24, r29, r30;
                          "m86: bge t4,t5, m40;"
                         // bge r25, r31, r32;
                          "m87: bge t0,t6, m39;"
                         // bge r26, r1, r2;
                          "m88: bge ra,sp, m38;"
                         // bge r27, r3, r4;
                          "m89: bge gp,tp, m37;"
                         // bge r28, r5, r6;
                          "m90: bge t0,t1, m36;"
                         // bge r29, r7, r8;
                          "m91: bge t2,s0, m35;"
                         // bge r30, r9, r10;
                          "m92: bge s1,a0, m34;"
                         // bge r31, r11, r12;
                          "m93: bge a1,a2, m33;"
                         // bge r1, r15, r16;
                          "m94: bge a5,a6, m32;"
                         // bge r2, r17, r18;
                          "m95: bge a7,s2, m31;"
                         // bge r3, r19, r20;
                          "m96: bge s3,s4, m30;"
                         // bge r4, r21, r22;
                          "m97: bge s5,s6, m29;"
                         // bge r5, r23, r24;
                          "m98: bge s7,s8, m28;"
                         // bge r6, r25, r26;
                          "m99: bge s9,s10, m27;"
                         // bge r7, r27, r28;
                          "m100: bge s11,t3, m26;"
                         // bge r8, r29, r30;
                          "m101: bge t4,t5, m25;"
                         // bge r9, r31, r32;
                          "m102: bge t0,t6, m24;"
                         // bge r10, r1, r2;
                          "m103: bge ra,sp, m23;"
                         // bge r11, r3, r4;
                          "m104: bge gp,tp, m22;"
                         // bge r12, r5, r6;
                          "m105: bge t0,t1, m21;"
                         // bge r13, r7, r8;
                          "m106: bge t2,s0, m20;"
                         // bge r14, r9, r10;
                          "m107: bge s1,a0, m19;"
                         // bge r15, r11, r12;
                          "m108: bge a1,a2, m18;"
                         // bge r16, r13, r14;
                          "m109: bge a3,a4, m17;"
                         // bge r17, r15, r16;
                          "m110: bge a5,a6, m16;"
                         // bge r18, r17, r18;
                          "m111: bge a7,s2, m15;"
                         // bge r19, r19, r20;
                          "m112: bge s3,s4, m14;"
                         // bge r20, r21, r22;
                          "m113: bge s5,s6, m13;"
                         // bge r21, r23, r24;
                          "m114: bge s7,s8, m12;"
                         // bge r22, r25, r26;
                          "m115: bge s9,s10, m11;"
                         // bge r23, r27, r28;
                          "m116: bge s11,t3, m10;"
                         // bge r24, r29, r30;
                          "m117: bge t4,t5, m9;"
                         // bge r25, r31, r32;
                          "m118: bge t0,t6, m8;"
                         // bge r26, r1, r2;
                          "m119: bge ra,sp, m7;"
                         // bge r27, r3, r4;
                          "m120: bge gp,tp, m6;"
                         // bge r28, r5, r6;
                          "m121: bge t0,t1, m5;"
                         // bge r29, r7, r8;
                          "m122: bge t2,s0, m4;"
                         // bge r30, r9, r10;
                          "m123: bge s1,a0, m3;"
                         // bge r31, r11, r12;
                          "m124: bge a1,a2, m2;"
                      );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
