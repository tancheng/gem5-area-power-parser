int main() 
{ 
  __asm__ __volatile__ ( "li a0, 0x8;"
                         "li a1, 0x7;"
                         "jal m1;"
                         "m2: li a0, 0x9;" 
                         "li a1, 0x9;" 
                         "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                         "m1: lui ra,0xb4c1f;"
                         "lui sp,0xb26ed;"
                         "lui gp,0xc9eac;"
                         "lui tp,0x34ed6;"
                         "lui t0,0xe39c;"
                         "lui t1,0x95e93;"
                         "lui t2,0x896f8;"
                         "lui s0,0x55f11;"
                         "lui s1,0xe2161;"
                         "lui a2,0x8813b;"
                         "lui a2,0xb5c8b;"
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
                         "lui ra,0x80e50;"
                         "lui sp,0xb004c;"
                         "lui gp,0x45f90;"
                         "lui tp,0xb5526;"
                         "lui t0,0xbdbe8;"
                         "lui t1,0xdbe23;"
                         "lui t2,0x3ec20;"
                         "lui s0,0x132fa;"
                         "lui s1,0xbdf85;"
                         "lui a2,0xc655b;"
                         "lui a2,0xc8f85;"
                         "lui a2,0xab438;"
                         "lui a3,0xdaa38;"
                         "lui a4,0x3aa9c;"
                         "lui a5,0xd5dba;"
                         "lui a6,0x38ad4;"
                         "lui a7,0x2b02e;"
                         "lui s2,0xdbe39;"
                         "lui s3,0x3944a;"
                         "lui s4,0x3d502;"
                         "lui s5,0x3e176;"
                         "lui s6,0xa7824;"
                         "lui s7,0x4a402;"
                         "lui s8,0x32b73;"
                         "lui s9,0x888db;"
                         "lui s10,0x6c491;"
                         "lui s11,0x1dab;"
                         "lui t3,0x5fc1d;"
                         "lui t4,0x386c2;"
                         "lui t5,0xff708;"
                         "lui t6,0xdc500;"
                         "lui ra,0xb9513;"
                         "lui sp,0xaf755;"
                         "lui gp,0x21c92;"
                         "lui tp,0x6e23a;"
                         "lui t0,0x6cb3e;"
                         "lui t1,0xfdab5;"
                         "lui t2,0xac65a;"
                         "lui s0,0x7fe38;"
                         "lui s1,0xbb23c;"
                         "lui a2,0x723b7;"
                         "lui a2,0x485be;"
                         "lui a2,0x66675;"
                         "lui a3,0x4cdf0;"
                         "lui a4,0x8305b;"
                         "lui a5,0x3bc30;"
                         "lui a6,0x850c4;"
                         "lui a7,0xad889;"
                         "lui s2,0x17a6b;"
                         "lui s3,0xbdd0f;"
                         "lui s4,0xea58b;"
                         "lui s5,0x55be1;"
                         "lui s6,0x65534;"
                         "lui s7,0x3498e;"
                         "lui s8,0x87f54;"
                         "lui s9,0xed60f;"
                         "lui s10,0xa0e20;"
                         "lui s11,0x89cff;"
                         "lui t3,0x4d22d;"
                         "lui t4,0xd94e2;"
                         "lui t5,0x89409;"
                         "lui t6,0x28f2e;"
                         "lui ra,0x921f6;"
                         "lui sp,0x3835f;"
                         "lui gp,0x4abc0;"
                         "lui tp,0xffc31;"
                         "lui t0,0xa4e9e;"
                         "lui t1,0x47e77;"
                         "lui t2,0xac28c;"
                         "lui s0,0x244d7;"
                         "lui s1,0x28b4;"
                         "lui a2,0x1e644;"
                         "lui a2,0x6ca96;"
                         "lui a2,0x68729;"
                         "lui a3,0x6ac35;"
                         "lui a4,0xef2f1;"
                         "lui a5,0xa435a;"
                         "lui a6,0xef4f9;"
                         "lui a7,0x9c37b;"
                         "lui s2,0xbbdc5;"
                         "lui s3,0xaca09;"
                         "lui s4,0x86908;"
                         "lui s5,0x111a7;"
                         "lui s6,0x1173e;"
                         "lui s7,0xbaa96;"
                         "lui s8,0x990fc;"
                         "lui s9,0xfed4d;"
                         "lui s10,0x5b0b7;"
                         "lui s11,0x22dfc;"
                         "lui t3,0x4b77b;"
                         "lui t4,0x33d9b;"
                         "lui t5,0xaba05;"
                         "lui t6,0x746aa;"
                         "lui ra,0xc5f91;"
                         "lui sp,0xe3d65;"
                         "lui gp,0xbea6a;"
                         "lui tp,0xc53c3;"
                         "lui t0,0x88404;"
                         "lui t1,0x60e2;"
                         "lui t2,0x70e51;"
                         "lui s0,0xac0db;"
                         "lui s1,0x8996;"
                         "lui a2,0x8ec95;"
                         "lui a2,0x18372;"
                         "lui a2,0x710c0;"
                         "lui a3,0xf90ca;"
                         "lui a4,0x7664;"
                         "lui a5,0x14c1b;"
                         "lui a6,0xe85c5;"
                         "lui a7,0xa31e0;"
                         "lui s2,0xd09e0;"
                         "lui s3,0x947cf;"
                         "lui s4,0x29ae9;"
                         "lui s5,0xe1387;"
                         "lui s6,0xa5f0e;"
                         "lui s7,0xe457f;"
                         "lui s8,0x7a484;"
                         "lui s9,0xa4c5c;"
                         "lui s10,0x3f638;"
                         "lui s11,0x9ca81;"
                         "lui t3,0xf03d8;"
                         "lui t4,0x72bd3;"
                         "lui t5,0x47c87;"
                         "lui t6,0x64283;"
                         "beq a0, a1, ms;"
                         "jal m2;"
                         "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
