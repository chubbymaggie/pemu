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
  [0x3a] = 0x03B1,
  [0x3b] = 0x03B2,
  [0x3c] = 0x03B3,
  [0x3d] = 0x03B4,
  [0x3e] = 0x039E,
  [0x5e] = 0x2192,
  [0x5f] = 0x222B,
  [0x60] = 0x2070,
  [0x61] = 0x00B9,
  [0x62] = 0x00B2,
  [0x63] = 0x00B3,
  [0x64] = 0x2074,
  [0x65] = 0x2075,
  [0x66] = 0x2076,
  [0x67] = 0x2077,
  [0x68] = 0x2078,
  [0x69] = 0x2079,
  [0x6a] = 0x207A,
  [0x6b] = 0x207B,
  [0x6c] = 0x30EB,
  [0x6d] = 0x0394,
  [0x6e] = 0x039B,
  [0x6f] = 0x03A9,
  [0x70] = 0x2080,
  [0x71] = 0x2081,
  [0x72] = 0x2082,
  [0x73] = 0x2083,
  [0x74] = 0x2084,
  [0x75] = 0x2085,
  [0x76] = 0x2086,
  [0x77] = 0x2087,
  [0x78] = 0x2088,
  [0x79] = 0x2089,
  [0x7a] = 0x03A3,
  [0x7b] = 0x03BC,
  [0x7c] = 0x03BD,
  [0x7d] = 0x03C9,
  [0x7e] = 0x03C0,
  [0x7f] = 0x007F,
};
static const struct gap from_idx[] = {
  { .start = 0x0000, .end = 0x0020, .idx =     0 },
  { .start = 0x007f, .end = 0x007f, .idx =   -94 },
  { .start = 0x00b2, .end = 0x00b9, .idx =  -144 },
  { .start = 0x0394, .end = 0x0394, .idx =  -874 },
  { .start = 0x039b, .end = 0x03a9, .idx =  -880 },
  { .start = 0x03b1, .end = 0x03b4, .idx =  -887 },
  { .start = 0x03bc, .end = 0x03c0, .idx =  -894 },
  { .start = 0x03c9, .end = 0x03c9, .idx =  -902 },
  { .start = 0x2070, .end = 0x2089, .idx = -8236 },
  { .start = 0x2192, .end = 0x2192, .idx = -8500 },
  { .start = 0x222b, .end = 0x222b, .idx = -8652 },
  { .start = 0x30eb, .end = 0x30eb, .idx = -12427 },
  { .start = 0xffff, .end = 0xffff, .idx =     0 }
};
static const char from_ucs4[] = {

  '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
  '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
  '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x20', '\x7f', '\x62', '\x63', '\x00', '\x00', '\x00', '\x00',
  '\x00', '\x61', '\x6d', '\x6e', '\x00', '\x00', '\x3e', '\x00',
  '\x00', '\x00', '\x00', '\x7a', '\x00', '\x00', '\x00', '\x00',
  '\x00', '\x6f', '\x3a', '\x3b', '\x3c', '\x3d', '\x7b', '\x7c',
  '\x00', '\x00', '\x7e', '\x7d', '\x60', '\x00', '\x00', '\x00',
  '\x64', '\x65', '\x66', '\x67', '\x68', '\x69', '\x6a', '\x6b',
  '\x00', '\x00', '\x00', '\x00', '\x70', '\x71', '\x72', '\x73',
  '\x74', '\x75', '\x76', '\x77', '\x78', '\x79', '\x5e', '\x5f',
  '\x6c',
};