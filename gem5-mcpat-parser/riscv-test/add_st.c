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
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                         // add r1, r15, r16;
                          "add ra,a5,a6;"
                         // add r2, r17, r18;
                          "add sp,a7,s2;"
                         // add r3, r19, r20;
                          "add gp,s3,s4;"
                         // add r4, r21, r22;
                          "add tp,s5,s6;"
                         // add r5, r23, r24;
                          "add t0,s7,s8;"
                         // add r6, r25, r26;
                          "add t1,s9,s10;"
                         // add r7, r27, r28;
                          "add t2,s11,t3;"
                         // add r8, r29, r30;
                          "add s0,t4,t5;"
                         // add r9, r31, r32;
                          "add s1,t6,t0;"
                         // add r10, r1, r2;
                          "add a0,ra,sp;"
                         // add r11, r3, r4;
                          "add a1,gp,tp;"
                         // add r12, r5, r6;
                          "add a2,t0,t1;"
                         // add r13, r7, r8;
                          "add a3,t2,s0;"
                         // add r14, r9, r10;
                          "add a4,s1,a0;"
                         // add r15, r11, r12;
                          "add a5,a1,a2;"
                         // add r16, r13, r14;
                          "add a6,a3,a4;"
                         // add r17, r15, r16;
                          "add a7,a5,a6;"
                         // add r18, r17, r18;
                          "add s2,a7,s2;"
                         // add r19, r19, r20;
                          "add s3,s3,s4;"
                         // add r20, r21, r22;
                          "add s4,s5,s6;"
                         // add r21, r23, r24;
                          "add s5,s7,s8;"
                         // add r22, r25, r26;
                          "add s6,s9,s10;"
                         // add r23, r27, r28;
                          "add s7,s11,t3;"
                         // add r24, r29, r30;
                          "add s8,t4,t5;"
                         // add r25, r31, r32;
                          "add s9,t6,t0;"
                         // add r26, r1, r2;
                          "add s10,ra,sp;"
                         // add r27, r3, r4;
                          "add s11,gp,tp;"
                         // add r28, r5, r6;
                          "add t3,t0,t1;"
                         // add r29, r7, r8;
                          "add t4,t2,s0;"
                         // add r30, r9, r10;
                          "add t5,s1,a0;"
                         // add r31, r11, r12;
                          "add t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
