static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x0004,
  [0x05] = 0x0005,
  [0x06] = 0x0006,
  [0x07] = 0x0007,
  [0x08] = 0x0008,
  [0x09] = 0x0009,
  [0x0a] = 0x000A,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x0014,
  [0x15] = 0x0015,
  [0x16] = 0x0016,
  [0x17] = 0x0017,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x001A,
  [0x1b] = 0x001B,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x20] = 0x0020,
  [0x2c] = 0x221A,
  [0x2e] = 0x2192,
  [0x2f] = 0x222B,
  [0x30] = 0x03B1,
  [0x31] = 0x03B2,
  [0x32] = 0x03B3,
  [0x33] = 0x03B4,
  [0x34] = 0x03A3,
  [0x35] = 0x03BC,
  [0x36] = 0x03BD,
  [0x37] = 0x03C9,
  [0x38] = 0x03C0,
  [0x39] = 0x039E,
  [0x3a] = 0x0394,
  [0x3b] = 0x039B,
  [0x3c] = 0x03A9,
  [0x3d] = 0x042A,
  [0x3e] = 0x207B,
  [0x3f] = 0x207A,
  [0x40] = 0x044E,
  [0x41] = 0x0430,
  [0x42] = 0x0431,
  [0x43] = 0x0446,
  [0x44] = 0x0434,
  [0x45] = 0x0435,
  [0x46] = 0x0444,
  [0x47] = 0x0433,
  [0x48] = 0x0445,
  [0x49] = 0x0438,
  [0x4a] = 0x0439,
  [0x4b] = 0x043A,
  [0x4c] = 0x043B,
  [0x4d] = 0x043C,
  [0x4e] = 0x043D,
  [0x4f] = 0x043E,
  [0x50] = 0x043F,
  [0x51] = 0x044F,
  [0x52] = 0x0440,
  [0x53] = 0x0441,
  [0x54] = 0x0442,
  [0x55] = 0x0443,
  [0x56] = 0x0436,
  [0x57] = 0x0432,
  [0x58] = 0x044C,
  [0x59] = 0x044B,
  [0x5a] = 0x0437,
  [0x5b] = 0x0448,
  [0x5c] = 0x044D,
  [0x5d] = 0x0449,
  [0x5e] = 0x0447,
  [0x5f] = 0x044A,
  [0x60] = 0x042E,
  [0x61] = 0x0410,
  [0x62] = 0x0411,
  [0x63] = 0x0426,
  [0x64] = 0x0414,
  [0x65] = 0x0415,
  [0x66] = 0x0424,
  [0x67] = 0x0413,
  [0x68] = 0x0425,
  [0x69] = 0x0418,
  [0x6a] = 0x0419,
  [0x6b] = 0x041A,
  [0x6c] = 0x041B,
  [0x6d] = 0x041C,
  [0x6e] = 0x041D,
  [0x6f] = 0x041E,
  [0x70] = 0x041F,
  [0x71] = 0x042F,
  [0x72] = 0x0420,
  [0x73] = 0x0421,
  [0x74] = 0x0422,
  [0x75] = 0x0423,
  [0x76] = 0x0416,
  [0x77] = 0x0412,
  [0x78] = 0x042C,
  [0x79] = 0x042B,
  [0x7a] = 0x0417,
  [0x7b] = 0x0428,
  [0x7c] = 0x042D,
  [0x7d] = 0x0429,
  [0x7e] = 0x0427,
  [0x7f] = 0x007F,
};
static const struct gap from_idx[] = {
  { .start = 0x0000, .end = 0x0020, .idx =     0 },
  { .start = 0x007f, .end = 0x007f, .idx =   -94 },
  { .start = 0x0394, .end = 0x0394, .idx =  -882 },
  { .start = 0x039b, .end = 0x03a9, .idx =  -888 },
  { .start = 0x03b1, .end = 0x03b4, .idx =  -895 },
  { .start = 0x03bc, .end = 0x03c0, .idx =  -902 },
  { .start = 0x03c9, .end = 0x03c9, .idx =  -910 },
  { .start = 0x0410, .end = 0x044f, .idx =  -980 },
  { .start = 0x207a, .end = 0x207b, .idx = -8190 },
  { .start = 0x2192, .end = 0x2192, .idx = -8468 },
  { .start = 0x221a, .end = 0x221a, .idx = -8603 },
  { .start = 0x222b, .end = 0x222b, .idx = -8619 },
  { .start = 0xffff, .end = 0xffff, .idx =     0 }
};
static const char from_ucs4[] = {

  '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
  '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
  '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x20', '\x7f', '\x3a', '\x3b', '\x00', '\x00', '\x39', '\x00',
  '\x00', '\x00', '\x00', '\x34', '\x00', '\x00', '\x00', '\x00',
  '\x00', '\x3c', '\x30', '\x31', '\x32', '\x33', '\x35', '\x36',
  '\x00', '\x00', '\x38', '\x37', '\x61', '\x62', '\x77', '\x67',
  '\x64', '\x65', '\x76', '\x7a', '\x69', '\x6a', '\x6b', '\x6c',
  '\x6d', '\x6e', '\x6f', '\x70', '\x72', '\x73', '\x74', '\x75',
  '\x66', '\x68', '\x63', '\x7e', '\x7b', '\x7d', '\x3d', '\x79',
  '\x78', '\x7c', '\x60', '\x71', '\x41', '\x42', '\x57', '\x47',
  '\x44', '\x45', '\x56', '\x5a', '\x49', '\x4a', '\x4b', '\x4c',
  '\x4d', '\x4e', '\x4f', '\x50', '\x52', '\x53', '\x54', '\x55',
  '\x46', '\x48', '\x43', '\x5e', '\x5b', '\x5d', '\x5f', '\x59',
  '\x58', '\x5c', '\x40', '\x51', '\x3f', '\x3e', '\x2e', '\x2c',
  '\x2f',
};
