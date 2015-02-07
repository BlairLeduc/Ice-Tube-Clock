// display bits 7 6 5 4  3 2 1 0
//        7
//       --
//    2 |  | 6
//       -- 1
//    3 |  | 5
//       --  . 0
//        4
//
// 0 : 1 1 1 1  1 1 0 0
// 1 : 0 1 1 0  0 0 0 0
// 2 : 1 1 0 1  1 0 1 0
// 3 : 1 1 1 1  0 0 1 0
// 4 : 0 1 1 0  0 1 1 0
// 5 : 1 0 1 1  0 1 1 0
// 6 : 1 1 0 1  1 1 1 0
// 7 : 1 1 1 0  0 0 0 0
// 8 : 1 1 1 1  1 1 1 0
// 9 : 1 1 1 0  0 1 1 0

const uint8_t alphatable[] PROGMEM = {
	0xFA, /* a */
	0x3E, /* b */
	0x1A, /* c */
	0x7A, /* d */
	0xDE, /* e */
	0x8E, /* f */
	0xF6, /* g */
	0x2E, /* h */
	0x60, /* i */
	0x78, /* j */
	0xAE, //k
	0x1C, // l
	0xAA, // m
	0x2A, // n
	0x3A, // o
	0xCE, //p
	0xF3, // q
	0x0A, //r
	0xB6, //s
	0x1E, //t
	0x38, //u
	0x38, //v // fix?
	0xB8, //w
	0x6E, //x
	0x76, // y
	0xDA, //z
	/* more */
};
PGM_P const alphatable_p PROGMEM = alphatable;

const uint8_t numbertable[] PROGMEM = { 
  0xFC /* 0 */, 
  0x60 /* 1 */,
  0xDA /* 2 */,
  0xF2 /* 3 */,
  0x66 /* 4 */,
  0xB6 /* 5 */,
  0xBE, /* 6 */
  0xE0, /* 7 */
  0xFE, /* 8 */
  0xE6, /* 9 */
};
PGM_P const numbertable_p PROGMEM = numbertable;
