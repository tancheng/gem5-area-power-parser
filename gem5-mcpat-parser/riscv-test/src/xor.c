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
                         // xor r1, r15, r16;
                          "xor ra,a5,a6;"
                         // xor r2, r17, r18;
                          "xor sp,a7,s2;"
                         // xor r3, r19, r20;
                          "xor gp,s3,s4;"
                         // xor r4, r21, r22;
                          "xor tp,s5,s6;"
                         // xor r5, r23, r24;
                          "xor t0,s7,s8;"
                         // xor r6, r25, r26;
                          "xor t1,s9,s10;"
                         // xor r7, r27, r28;
                          "xor t2,s11,t3;"
                         // xor r8, r29, r30;
                          "xor s0,t4,t5;"
                         // xor r9, r31, r32;
                          "xor s1,t6,t0;"
                         // xor r10, r1, r2;
                          "xor a0,ra,sp;"
                         // xor r11, r3, r4;
                          "xor a1,gp,tp;"
                         // xor r12, r5, r6;
                          "xor a2,t0,t1;"
                         // xor r13, r7, r8;
                          "xor a3,t2,s0;"
                         // xor r14, r9, r10;
                          "xor a4,s1,a0;"
                         // xor r15, r11, r12;
                          "xor a5,a1,a2;"
                         // xor r16, r13, r14;
                          "xor a6,a3,a4;"
                         // xor r17, r15, r16;
                          "xor a7,a5,a6;"
                         // xor r18, r17, r18;
                          "xor s2,a7,s2;"
                         // xor r19, r19, r20;
                          "xor s3,s3,s4;"
                         // xor r20, r21, r22;
                          "xor s4,s5,s6;"
                         // xor r21, r23, r24;
                          "xor s5,s7,s8;"
                         // xor r22, r25, r26;
                          "xor s6,s9,s10;"
                         // xor r23, r27, r28;
                          "xor s7,s11,t3;"
                         // xor r24, r29, r30;
                          "xor s8,t4,t5;"
                         // xor r25, r31, r32;
                          "xor s9,t6,t0;"
                         // xor r26, r1, r2;
                          "xor s10,ra,sp;"
                         // xor r27, r3, r4;
                          "xor s11,gp,tp;"
                         // xor r28, r5, r6;
                          "xor t3,t0,t1;"
                         // xor r29, r7, r8;
                          "xor t4,t2,s0;"
                         // xor r30, r9, r10;
                          "xor t5,s1,a0;"
                         // xor r31, r11, r12;
                          "xor t6,a1,a2;"
                         // xor r1, r15, r16;
                          "xor ra,a5,a6;"
                         // xor r2, r17, r18;
                          "xor sp,a7,s2;"
                         // xor r3, r19, r20;
                          "xor gp,s3,s4;"
                         // xor r4, r21, r22;
                          "xor tp,s5,s6;"
                         // xor r5, r23, r24;
                          "xor t0,s7,s8;"
                         // xor r6, r25, r26;
                          "xor t1,s9,s10;"
                         // xor r7, r27, r28;
                          "xor t2,s11,t3;"
                         // xor r8, r29, r30;
                          "xor s0,t4,t5;"
                         // xor r9, r31, r32;
                          "xor s1,t6,t0;"
                         // xor r10, r1, r2;
                          "xor a0,ra,sp;"
                         // xor r11, r3, r4;
                          "xor a1,gp,tp;"
                         // xor r12, r5, r6;
                          "xor a2,t0,t1;"
                         // xor r13, r7, r8;
                          "xor a3,t2,s0;"
                         // xor r14, r9, r10;
                          "xor a4,s1,a0;"
                         // xor r15, r11, r12;
                          "xor a5,a1,a2;"
                         // xor r16, r13, r14;
                          "xor a6,a3,a4;"
                         // xor r17, r15, r16;
                          "xor a7,a5,a6;"
                         // xor r18, r17, r18;
                          "xor s2,a7,s2;"
                         // xor r19, r19, r20;
                          "xor s3,s3,s4;"
                         // xor r20, r21, r22;
                          "xor s4,s5,s6;"
                         // xor r21, r23, r24;
                          "xor s5,s7,s8;"
                         // xor r22, r25, r26;
                          "xor s6,s9,s10;"
                         // xor r23, r27, r28;
                          "xor s7,s11,t3;"
                         // xor r24, r29, r30;
                          "xor s8,t4,t5;"
                         // xor r25, r31, r32;
                          "xor s9,t6,t0;"
                         // xor r26, r1, r2;
                          "xor s10,ra,sp;"
                         // xor r27, r3, r4;
                          "xor s11,gp,tp;"
                         // xor r28, r5, r6;
                          "xor t3,t0,t1;"
                         // xor r29, r7, r8;
                          "xor t4,t2,s0;"
                         // xor r30, r9, r10;
                          "xor t5,s1,a0;"
                         // xor r31, r11, r12;
                          "xor t6,a1,a2;"
                         // xor r1, r15, r16;
                          "xor ra,a5,a6;"
                         // xor r2, r17, r18;
                          "xor sp,a7,s2;"
                         // xor r3, r19, r20;
                          "xor gp,s3,s4;"
                         // xor r4, r21, r22;
                          "xor tp,s5,s6;"
                         // xor r5, r23, r24;
                          "xor t0,s7,s8;"
                         // xor r6, r25, r26;
                          "xor t1,s9,s10;"
                         // xor r7, r27, r28;
                          "xor t2,s11,t3;"
                         // xor r8, r29, r30;
                          "xor s0,t4,t5;"
                         // xor r9, r31, r32;
                          "xor s1,t6,t0;"
                         // xor r10, r1, r2;
                          "xor a0,ra,sp;"
                         // xor r11, r3, r4;
                          "xor a1,gp,tp;"
                         // xor r12, r5, r6;
                          "xor a2,t0,t1;"
                         // xor r13, r7, r8;
                          "xor a3,t2,s0;"
                         // xor r14, r9, r10;
                          "xor a4,s1,a0;"
                         // xor r15, r11, r12;
                          "xor a5,a1,a2;"
                         // xor r16, r13, r14;
                          "xor a6,a3,a4;"
                         // xor r17, r15, r16;
                          "xor a7,a5,a6;"
                         // xor r18, r17, r18;
                          "xor s2,a7,s2;"
                         // xor r19, r19, r20;
                          "xor s3,s3,s4;"
                         // xor r20, r21, r22;
                          "xor s4,s5,s6;"
                         // xor r21, r23, r24;
                          "xor s5,s7,s8;"
                         // xor r22, r25, r26;
                          "xor s6,s9,s10;"
                         // xor r23, r27, r28;
                          "xor s7,s11,t3;"
                         // xor r24, r29, r30;
                          "xor s8,t4,t5;"
                         // xor r25, r31, r32;
                          "xor s9,t6,t0;"
                         // xor r26, r1, r2;
                          "xor s10,ra,sp;"
                         // xor r27, r3, r4;
                          "xor s11,gp,tp;"
                         // xor r28, r5, r6;
                          "xor t3,t0,t1;"
                         // xor r29, r7, r8;
                          "xor t4,t2,s0;"
                         // xor r30, r9, r10;
                          "xor t5,s1,a0;"
                         // xor r31, r11, r12;
                          "xor t6,a1,a2;"
                         // xor r1, r15, r16;
                          "xor ra,a5,a6;"
                         // xor r2, r17, r18;
                          "xor sp,a7,s2;"
                         // xor r3, r19, r20;
                          "xor gp,s3,s4;"
                         // xor r4, r21, r22;
                          "xor tp,s5,s6;"
                         // xor r5, r23, r24;
                          "xor t0,s7,s8;"
                         // xor r6, r25, r26;
                          "xor t1,s9,s10;"
                         // xor r7, r27, r28;
                          "xor t2,s11,t3;"
                         // xor r8, r29, r30;
                          "xor s0,t4,t5;"
                         // xor r9, r31, r32;
                          "xor s1,t6,t0;"
                         // xor r10, r1, r2;
                          "xor a0,ra,sp;"
                         // xor r11, r3, r4;
                          "xor a1,gp,tp;"
                         // xor r12, r5, r6;
                          "xor a2,t0,t1;"
                         // xor r13, r7, r8;
                          "xor a3,t2,s0;"
                         // xor r14, r9, r10;
                          "xor a4,s1,a0;"
                         // xor r15, r11, r12;
                          "xor a5,a1,a2;"
                         // xor r16, r13, r14;
                          "xor a6,a3,a4;"
                         // xor r17, r15, r16;
                          "xor a7,a5,a6;"
                         // xor r18, r17, r18;
                          "xor s2,a7,s2;"
                         // xor r19, r19, r20;
                          "xor s3,s3,s4;"
                         // xor r20, r21, r22;
                          "xor s4,s5,s6;"
                         // xor r21, r23, r24;
                          "xor s5,s7,s8;"
                         // xor r22, r25, r26;
                          "xor s6,s9,s10;"
                         // xor r23, r27, r28;
                          "xor s7,s11,t3;"
                         // xor r24, r29, r30;
                          "xor s8,t4,t5;"
                         // xor r25, r31, r32;
                          "xor s9,t6,t0;"
                         // xor r26, r1, r2;
                          "xor s10,ra,sp;"
                         // xor r27, r3, r4;
                          "xor s11,gp,tp;"
                         // xor r28, r5, r6;
                          "xor t3,t0,t1;"
                         // xor r29, r7, r8;
                          "xor t4,t2,s0;"
                         // xor r30, r9, r10;
                          "xor t5,s1,a0;"
                         // xor r31, r11, r12;
                          "xor t6,a1,a2;"
                         // xor r1, r15, r16;
                          "xor ra,a5,a6;"
                         // xor r2, r17, r18;
                          "xor sp,a7,s2;"
                         // xor r3, r19, r20;
                          "xor gp,s3,s4;"
                         // xor r4, r21, r22;
                          "xor tp,s5,s6;"
                         // xor r5, r23, r24;
                          "xor t0,s7,s8;"
                         // xor r6, r25, r26;
                          "xor t1,s9,s10;"
                         // xor r7, r27, r28;
                          "xor t2,s11,t3;"
                         // xor r8, r29, r30;
                          "xor s0,t4,t5;"
                         // xor r9, r31, r32;
                          "xor s1,t6,t0;"
                         // xor r10, r1, r2;
                          "xor a0,ra,sp;"
                         // xor r11, r3, r4;
                          "xor a1,gp,tp;"
                         // xor r12, r5, r6;
                          "xor a2,t0,t1;"
                         // xor r13, r7, r8;
                          "xor a3,t2,s0;"
                         // xor r14, r9, r10;
                          "xor a4,s1,a0;"
                         // xor r15, r11, r12;
                          "xor a5,a1,a2;"
                         // xor r16, r13, r14;
                          "xor a6,a3,a4;"
                         // xor r17, r15, r16;
                          "xor a7,a5,a6;"
                         // xor r18, r17, r18;
                          "xor s2,a7,s2;"
                         // xor r19, r19, r20;
                          "xor s3,s3,s4;"
                         // xor r20, r21, r22;
                          "xor s4,s5,s6;"
                         // xor r21, r23, r24;
                          "xor s5,s7,s8;"
                         // xor r22, r25, r26;
                          "xor s6,s9,s10;"
                         // xor r23, r27, r28;
                          "xor s7,s11,t3;"
                         // xor r24, r29, r30;
                          "xor s8,t4,t5;"
                         // xor r25, r31, r32;
                          "xor s9,t6,t0;"
                         // xor r26, r1, r2;
                          "xor s10,ra,sp;"
                         // xor r27, r3, r4;
                          "xor s11,gp,tp;"
                         // xor r28, r5, r6;
                          "xor t3,t0,t1;"
                         // xor r29, r7, r8;
                          "xor t4,t2,s0;"
                         // xor r30, r9, r10;
                          "xor t5,s1,a0;"
                         // xor r31, r11, r12;
                          "xor t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
