int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0x64;"
                         "li sp,0xc8;"
                         "li gp,0x12c;"
                         "li tp,0x190;"
                         "li t0,0x1f4;"
                         "li t1,0x258;"
                         "li t2,0x2bc;"
                         "li s0,0x320;"
                         "li s1,0x384;"
                         "li a0,0x3e8;"
                         "li a1,0x44c;"
                         "li a2,0x4b0;"
                         "li a3,0x514;"
                         "li a4,0x578;"
                         "li a5,0x5dc;"
                         "li a6,0x640;"
                         "li a7,0x6a4;"
                         "li s2,0x708;"
                         "li s3,0x76c;"
                         "li s4,0x7d0;"
                         "li s5,0x834;"
                         "li s6,0x898;"
                         "li s7,0x8fc;"
                         "li s8,0x960;"
                         "li s9,0x9c4;"
                         "li s10,0xa28;"
                         "li s11,0xa8c;"
                         "li t3,0xaf0;"
                         "li t4,0xb54;"
                         "li t5,0xbb8;"
                         "li t6,0xc1c;"
                         "jal m1;"
                       );
  __asm__ __volatile__ ( "m2: li t6, 0xbb8;"
                         "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // beq r1, r15, r16;
                          "m1: beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r3, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r4, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r5, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r6, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r7, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r8, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r9, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r10, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r11, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r12, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r13, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r14, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r15, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r16, r13, r14;
                          "beq a3,a4, ms;"
                         // beq r17, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r18, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r19, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r20, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r21, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r22, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r23, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r24, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r25, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r26, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r27, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r28, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r29, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r30, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r31, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r1, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r3, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r4, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r5, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r6, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r7, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r8, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r9, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r10, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r11, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r12, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r13, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r14, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r15, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r16, r13, r14;
                          "beq a3,a4, ms;"
                         // beq r17, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r18, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r19, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r20, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r21, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r22, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r23, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r24, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r25, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r26, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r27, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r28, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r29, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r30, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r31, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r1, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r3, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r4, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r5, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r6, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r7, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r8, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r9, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r10, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r11, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r12, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r13, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r14, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r15, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r16, r13, r14;
                          "beq a3,a4, ms;"
                         // beq r17, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r18, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r19, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r20, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r21, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r22, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r23, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r24, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r25, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r26, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r27, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r28, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r29, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r30, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r31, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r1, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r3, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r4, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r5, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r6, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r7, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r8, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r9, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r10, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r11, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r12, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r13, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r14, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r15, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r16, r13, r14;
                          "beq a3,a4, ms;"
                         // beq r17, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r18, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r19, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r20, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r21, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r22, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r23, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r24, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r25, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r26, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r27, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r28, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r29, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r30, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r31, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r1, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r3, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r4, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r5, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r6, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r7, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r8, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r9, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r10, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r11, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r12, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r13, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r14, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r15, r11, r12;
                          "beq a1,a2, ms;"
                         // beq r16, r13, r14;
                          "beq a3,a4, ms;"
                         // beq r17, r15, r16;
                          "beq a5,a6, ms;"
                         // beq r18, r17, r18;
                          "beq a7,s2, ms;"
                         // beq r19, r19, r20;
                          "beq s3,s4, ms;"
                         // beq r20, r21, r22;
                          "beq s5,s6, ms;"
                         // beq r21, r23, r24;
                          "beq s7,s8, ms;"
                         // beq r22, r25, r26;
                          "beq s9,s10, ms;"
                         // beq r23, r27, r28;
                          "beq s11,t3, ms;"
                         // beq r24, r29, r30;
                          "beq t4,t5, ms;"
                         // beq r25, r31, r32;
                          "beq t6,t0, ms;"
                         // beq r26, r1, r2;
                          "beq ra,sp, ms;"
                         // beq r27, r3, r4;
                          "beq gp,tp, ms;"
                         // beq r28, r5, r6;
                          "beq t0,t1, ms;"
                         // beq r29, r7, r8;
                          "beq t2,s0, ms;"
                         // beq r30, r9, r10;
                          "beq s1,a0, ms;"
                         // beq r31, r11, r12;
                          "beq t5, t6, ms;"
                          "jal m2;"
 "ms: "
                      );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
