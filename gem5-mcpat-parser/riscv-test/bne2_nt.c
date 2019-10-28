int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0x6b8b4567;"
                         "li sp,0x6b8b4567;"
                         "li gp,0x6b8b4567;"
                         "li tp,0x6b8b4567;"
                         "li t0,0x6b8b4567;"
                         "li t1,0x6b8b4567;"
                         "li t2,0x6b8b4567;"
                         "li s0,0x6b8b4567;"
                         "li s1,0x6b8b4567;"
                         "li a0,0x6b8b4567;"
                         "li a1,0x6b8b4567;"
                         "li a2,0x6b8b4567;"
                         "li a3,0x6b8b4567;"
                         "li a4,0x6b8b4567;"
                         "li a5,0x6b8b4567;"
                         "li a6,0x6b8b4567;"
                         "li a7,0x6b8b4567;"
                         "li s2,0x6b8b4567;"
                         "li s3,0x6b8b4567;"
                         "li s4,0x6b8b4567;"
                         "li s5,0x6b8b4567;"
                         "li s6,0x6b8b4567;"
                         "li s7,0x6b8b4567;"
                         "li s8,0x6b8b4567;"
                         "li s9,0x6b8b4567;"
                         "li s10,0x6b8b4567;"
                         "li s11,0x6b8b4567;"
                         "li t3,0x6b8b4567;"
                         "li t4,0x6b8b4567;"
                         "li t5,0x6b8b4567;"
                         "li t6,0x6b8b4567;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // bne r1, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r2, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r3, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r4, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r5, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r6, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r7, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r8, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r9, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r10, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r11, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r12, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r13, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r14, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r15, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r16, r13, r14;
                          "bne a3,a4, ms;"
                         // bne r17, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r18, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r19, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r20, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r21, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r22, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r23, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r24, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r25, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r26, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r27, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r28, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r29, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r30, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r31, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r1, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r2, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r3, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r4, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r5, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r6, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r7, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r8, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r9, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r10, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r11, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r12, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r13, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r14, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r15, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r16, r13, r14;
                          "bne a3,a4, ms;"
                         // bne r17, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r18, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r19, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r20, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r21, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r22, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r23, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r24, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r25, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r26, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r27, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r28, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r29, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r30, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r31, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r1, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r2, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r3, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r4, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r5, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r6, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r7, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r8, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r9, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r10, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r11, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r12, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r13, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r14, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r15, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r16, r13, r14;
                          "bne a3,a4, ms;"
                         // bne r17, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r18, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r19, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r20, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r21, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r22, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r23, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r24, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r25, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r26, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r27, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r28, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r29, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r30, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r31, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r1, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r2, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r3, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r4, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r5, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r6, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r7, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r8, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r9, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r10, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r11, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r12, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r13, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r14, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r15, r11, r12;
                          "bne a1,a2, ms;"
                         // bne r16, r13, r14;
                          "bne a3,a4, ms;"
                         // bne r17, r15, r16;
                          "bne a5,a6, ms;"
                         // bne r18, r17, r18;
                          "bne a7,s2, ms;"
                         // bne r19, r19, r20;
                          "bne s3,s4, ms;"
                         // bne r20, r21, r22;
                          "bne s5,s6, ms;"
                         // bne r21, r23, r24;
                          "bne s7,s8, ms;"
                         // bne r22, r25, r26;
                          "bne s9,s10, ms;"
                         // bne r23, r27, r28;
                          "bne s11,t3, ms;"
                         // bne r24, r29, r30;
                          "bne t4,t5, ms;"
                         // bne r25, r31, r32;
                          "bne t6,t0, ms;"
                         // bne r26, r1, r2;
                          "bne ra,sp, ms;"
                         // bne r27, r3, r4;
                          "bne gp,tp, ms;"
                         // bne r28, r5, r6;
                          "bne t0,t1, ms;"
                         // bne r29, r7, r8;
                          "bne t2,s0, ms;"
                         // bne r30, r9, r10;
                          "bne s1,a0, ms;"
                         // bne r31, r11, r12;
                          "bne a1,a2, ms;"
 "ms: "
                      );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
