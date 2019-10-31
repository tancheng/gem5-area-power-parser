int main() 
{ 
  __asm__ __volatile__ ( 
                         "lui ra,0xb4c1f;"
                         "lui sp,0xb26ed;"
                         "lui gp,0xc9eac;"
                         "lui tp,0x34ed6;"
                         "lui t0,0xe39c;"
                         "lui t1,0x95e93;"
                         "lui t2,0x896f8;"
                         "lui s0,0x55f11;"
                         "lui s1,0xe2161;"
                         "lui a0,0x8813b;"
                         "lui a1,0xb5c8b;"
                         "lui a2,0xedcb2;"
                         "lui a3,0x144dd;"
                         "lui a4,0x72316;"
                         "lui a5,0x2b181;"
                         "lui a6,0x5e89a;"
                         "lui a7,0xf0591;"
                         "lui s2,0x687f;"
                         "lui s3,0x976;"
                         "lui s4,0x12cd3;"
                         "lui s5,0x6233c;"
                         "lui s6,0x6ebd9;"
                         "lui s7,0xcf00;"
                         "lui s8,0xf49fb;"
                         "lui s9,0xe10b6;"
                         "lui s10,0x2288f;"
                         "lui s11,0xcfa37;"
                         "lui t3,0xd7341;"
                         "lui t4,0xcca30;"
                         "lui t5,0xfd95d;"
                         "lui t6,0x7c8e3;"
                         "jal m1;"
                         "m2: li a0, 0x9;"
                         "li a1, 0x9;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // sll r1, r15, r16;
                          "m1: sll ra,a5,a6;"
                         // sll r2, r17, r18;
                          "sll sp,a7,s2;"
                         // sll r3, r19, r20;
                          "sll gp,s3,s4;"
                         // sll r4, r21, r22;
                          "sll tp,s5,s6;"
                         // sll r5, r23, r24;
                          "sll t0,s7,s8;"
                         // sll r6, r25, r26;
                          "sll t1,s9,s10;"
                         // sll r7, r27, r28;
                          "sll t2,s11,t3;"
                         // sll r8, r29, r30;
                          "sll s0,t4,t5;"
                         // sll r9, r31, r32;
                          "sll s1,t6,t0;"
                         // sll r10, r1, r2;
                          "sll a2,ra,sp;"
                         // sll r11, r3, r4;
                          "sll a2,gp,tp;"
                         // sll r12, r5, r6;
                          "sll a2,t0,t1;"
                         // sll r13, r7, r8;
                          "sll a3,t2,s0;"
                         // sll r14, r9, r10;
                          "sll a4,s1,a0;"
                         // sll r15, r11, r12;
                          "sll a5,a1,a2;"
                         // sll r16, r13, r14;
                          "sll a6,a3,a4;"
                         // sll r17, r15, r16;
                          "sll a7,a5,a6;"
                         // sll r18, r17, r18;
                          "sll s2,a7,s2;"
                         // sll r19, r19, r20;
                          "sll s3,s3,s4;"
                         // sll r20, r21, r22;
                          "sll s4,s5,s6;"
                         // sll r21, r23, r24;
                          "sll s5,s7,s8;"
                         // sll r22, r25, r26;
                          "sll s6,s9,s10;"
                         // sll r23, r27, r28;
                          "sll s7,s11,t3;"
                         // sll r24, r29, r30;
                          "sll s8,t4,t5;"
                         // sll r25, r31, r32;
                          "sll s9,t6,t0;"
                         // sll r26, r1, r2;
                          "sll s10,ra,sp;"
                         // sll r27, r3, r4;
                          "sll s11,gp,tp;"
                         // sll r28, r5, r6;
                          "sll t3,t0,t1;"
                         // sll r29, r7, r8;
                          "sll t4,t2,s0;"
                         // sll r30, r9, r10;
                          "sll t5,s1,a0;"
                         // sll r31, r11, r12;
                          "sll t6,a1,a2;"
                         // sll r1, r15, r16;
                          "sll ra,a5,a6;"
                         // sll r2, r17, r18;
                          "sll sp,a7,s2;"
                         // sll r3, r19, r20;
                          "sll gp,s3,s4;"
                         // sll r4, r21, r22;
                          "sll tp,s5,s6;"
                         // sll r5, r23, r24;
                          "sll t0,s7,s8;"
                         // sll r6, r25, r26;
                          "sll t1,s9,s10;"
                         // sll r7, r27, r28;
                          "sll t2,s11,t3;"
                         // sll r8, r29, r30;
                          "sll s0,t4,t5;"
                         // sll r9, r31, r32;
                          "sll s1,t6,t0;"
                         // sll r10, r1, r2;
                          "sll a2,ra,sp;"
                         // sll r11, r3, r4;
                          "sll a2,gp,tp;"
                         // sll r12, r5, r6;
                          "sll a2,t0,t1;"
                         // sll r13, r7, r8;
                          "sll a3,t2,s0;"
                         // sll r14, r9, r10;
                          "sll a4,s1,a0;"
                         // sll r15, r11, r12;
                          "sll a5,a1,a2;"
                         // sll r16, r13, r14;
                          "sll a6,a3,a4;"
                         // sll r17, r15, r16;
                          "sll a7,a5,a6;"
                         // sll r18, r17, r18;
                          "sll s2,a7,s2;"
                         // sll r19, r19, r20;
                          "sll s3,s3,s4;"
                         // sll r20, r21, r22;
                          "sll s4,s5,s6;"
                         // sll r21, r23, r24;
                          "sll s5,s7,s8;"
                         // sll r22, r25, r26;
                          "sll s6,s9,s10;"
                         // sll r23, r27, r28;
                          "sll s7,s11,t3;"
                         // sll r24, r29, r30;
                          "sll s8,t4,t5;"
                         // sll r25, r31, r32;
                          "sll s9,t6,t0;"
                         // sll r26, r1, r2;
                          "sll s10,ra,sp;"
                         // sll r27, r3, r4;
                          "sll s11,gp,tp;"
                         // sll r28, r5, r6;
                          "sll t3,t0,t1;"
                         // sll r29, r7, r8;
                          "sll t4,t2,s0;"
                         // sll r30, r9, r10;
                          "sll t5,s1,a0;"
                         // sll r31, r11, r12;
                          "sll t6,a1,a2;"
                         // sll r1, r15, r16;
                          "sll ra,a5,a6;"
                         // sll r2, r17, r18;
                          "sll sp,a7,s2;"
                         // sll r3, r19, r20;
                          "sll gp,s3,s4;"
                         // sll r4, r21, r22;
                          "sll tp,s5,s6;"
                         // sll r5, r23, r24;
                          "sll t0,s7,s8;"
                         // sll r6, r25, r26;
                          "sll t1,s9,s10;"
                         // sll r7, r27, r28;
                          "sll t2,s11,t3;"
                         // sll r8, r29, r30;
                          "sll s0,t4,t5;"
                         // sll r9, r31, r32;
                          "sll s1,t6,t0;"
                         // sll r10, r1, r2;
                          "sll a2,ra,sp;"
                         // sll r11, r3, r4;
                          "sll a2,gp,tp;"
                         // sll r12, r5, r6;
                          "sll a2,t0,t1;"
                         // sll r13, r7, r8;
                          "sll a3,t2,s0;"
                         // sll r14, r9, r10;
                          "sll a4,s1,a0;"
                         // sll r15, r11, r12;
                          "sll a5,a1,a2;"
                         // sll r16, r13, r14;
                          "sll a6,a3,a4;"
                         // sll r17, r15, r16;
                          "sll a7,a5,a6;"
                         // sll r18, r17, r18;
                          "sll s2,a7,s2;"
                         // sll r19, r19, r20;
                          "sll s3,s3,s4;"
                         // sll r20, r21, r22;
                          "sll s4,s5,s6;"
                         // sll r21, r23, r24;
                          "sll s5,s7,s8;"
                         // sll r22, r25, r26;
                          "sll s6,s9,s10;"
                         // sll r23, r27, r28;
                          "sll s7,s11,t3;"
                         // sll r24, r29, r30;
                          "sll s8,t4,t5;"
                         // sll r25, r31, r32;
                          "sll s9,t6,t0;"
                         // sll r26, r1, r2;
                          "sll s10,ra,sp;"
                         // sll r27, r3, r4;
                          "sll s11,gp,tp;"
                         // sll r28, r5, r6;
                          "sll t3,t0,t1;"
                         // sll r29, r7, r8;
                          "sll t4,t2,s0;"
                         // sll r30, r9, r10;
                          "sll t5,s1,a0;"
                         // sll r31, r11, r12;
                          "sll t6,a1,a2;"
                         // sll r1, r15, r16;
                          "sll ra,a5,a6;"
                         // sll r2, r17, r18;
                          "sll sp,a7,s2;"
                         // sll r3, r19, r20;
                          "sll gp,s3,s4;"
                         // sll r4, r21, r22;
                          "sll tp,s5,s6;"
                         // sll r5, r23, r24;
                          "sll t0,s7,s8;"
                         // sll r6, r25, r26;
                          "sll t1,s9,s10;"
                         // sll r7, r27, r28;
                          "sll t2,s11,t3;"
                         // sll r8, r29, r30;
                          "sll s0,t4,t5;"
                         // sll r9, r31, r32;
                          "sll s1,t6,t0;"
                         // sll r10, r1, r2;
                          "sll a2,ra,sp;"
                         // sll r11, r3, r4;
                          "sll a2,gp,tp;"
                         // sll r12, r5, r6;
                          "sll a2,t0,t1;"
                         // sll r13, r7, r8;
                          "sll a3,t2,s0;"
                         // sll r14, r9, r10;
                          "sll a4,s1,a0;"
                         // sll r15, r11, r12;
                          "sll a5,a1,a2;"
                         // sll r16, r13, r14;
                          "sll a6,a3,a4;"
                         // sll r17, r15, r16;
                          "sll a7,a5,a6;"
                         // sll r18, r17, r18;
                          "sll s2,a7,s2;"
                         // sll r19, r19, r20;
                          "sll s3,s3,s4;"
                         // sll r20, r21, r22;
                          "sll s4,s5,s6;"
                         // sll r21, r23, r24;
                          "sll s5,s7,s8;"
                         // sll r22, r25, r26;
                          "sll s6,s9,s10;"
                         // sll r23, r27, r28;
                          "sll s7,s11,t3;"
                         // sll r24, r29, r30;
                          "sll s8,t4,t5;"
                         // sll r25, r31, r32;
                          "sll s9,t6,t0;"
                         // sll r26, r1, r2;
                          "sll s10,ra,sp;"
                         // sll r27, r3, r4;
                          "sll s11,gp,tp;"
                         // sll r28, r5, r6;
                          "sll t3,t0,t1;"
                         // sll r29, r7, r8;
                          "sll t4,t2,s0;"
                         // sll r30, r9, r10;
                          "sll t5,s1,a0;"
                         // sll r31, r11, r12;
                          "sll t6,a1,a2;"
                         // sll r1, r15, r16;
                          "sll ra,a5,a6;"
                         // sll r2, r17, r18;
                          "sll sp,a7,s2;"
                         // sll r3, r19, r20;
                          "sll gp,s3,s4;"
                         // sll r4, r21, r22;
                          "sll tp,s5,s6;"
                         // sll r5, r23, r24;
                          "sll t0,s7,s8;"
                         // sll r6, r25, r26;
                          "sll t1,s9,s10;"
                         // sll r7, r27, r28;
                          "sll t2,s11,t3;"
                         // sll r8, r29, r30;
                          "sll s0,t4,t5;"
                         // sll r9, r31, r32;
                          "sll s1,t6,t0;"
                         // sll r10, r1, r2;
                          "sll a2,ra,sp;"
                         // sll r11, r3, r4;
                          "sll a2,gp,tp;"
                         // sll r12, r5, r6;
                          "sll a2,t0,t1;"
                         // sll r13, r7, r8;
                          "sll a3,t2,s0;"
                         // sll r14, r9, r10;
                          "sll a4,s1,a0;"
                         // sll r15, r11, r12;
                          "sll a5,a1,a2;"
                         // sll r16, r13, r14;
                          "sll a6,a3,a4;"
                         // sll r17, r15, r16;
                          "sll a7,a5,a6;"
                         // sll r18, r17, r18;
                          "sll s2,a7,s2;"
                         // sll r19, r19, r20;
                          "sll s3,s3,s4;"
                         // sll r20, r21, r22;
                          "sll s4,s5,s6;"
                         // sll r21, r23, r24;
                          "sll s5,s7,s8;"
                         // sll r22, r25, r26;
                          "sll s6,s9,s10;"
                         // sll r23, r27, r28;
                          "sll s7,s11,t3;"
                         // sll r24, r29, r30;
                          "sll s8,t4,t5;"
                         // sll r25, r31, r32;
                          "sll s9,t6,t0;"
                         // sll r26, r1, r2;
                          "sll s10,ra,sp;"
                         // sll r27, r3, r4;
                          "sll s11,gp,tp;"
                         // sll r28, r5, r6;
                          "sll t3,t0,t1;"
                         // sll r29, r7, r8;
                          "sll t4,t2,s0;"
                         // sll r30, r9, r10;
                          "sll t5,s1,a0;"
                         // sll r31, r11, r12;
                          "sll t6,a1,a2;"
                          "beq a0, a1, ms;"
                          "jal m2;"
                       );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
