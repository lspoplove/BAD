#ifndef __FONT_H
#define __FONT_H

#include <avr/pgmspace.h>

const unsigned char image[] PROGMEM ={
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0X7D,0XEF,
0XBA,0XD6,0XB6,0XB5,0XF3,0X9C,0XB2,0X94,0XB3,0X9C,0XB2,0X94,0X34,0XA5,0XF7,0XBD,
0XFB,0XDE,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0XFB,0XDE,0XF3,0X9C,0XCB,0X5A,
0XC7,0X39,0X04,0X21,0X82,0X10,0X42,0X10,0X42,0X10,0X41,0X08,0X83,0X18,0X45,0X29,
0XC7,0X39,0X0C,0X63,0X75,0XAD,0X3C,0XE7,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0XE7,0XB2,0X94,0X08,0X42,0XC3,0X18,0X82,0X10,
0X04,0X21,0X45,0X29,0X86,0X31,0X86,0X31,0X86,0X31,0X86,0X31,0X45,0X29,0X04,0X21,
0X82,0X10,0X41,0X08,0XC3,0X18,0X08,0X42,0XF3,0X9C,0X3C,0XE7,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFB,0XDE,0X0C,0X63,0XC3,0X18,0XC3,0X18,0X45,0X29,0XC7,0X39,
0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0XC7,0X39,0XC7,0X39,
0X86,0X31,0X86,0X31,0X04,0X21,0X41,0X08,0X82,0X10,0XCB,0X5A,0XBA,0XD6,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFB,0XDE,0XCB,0X5A,0X82,0X10,0X45,0X29,0XC7,0X39,0X08,0X42,0X08,0X42,
0X09,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X08,0X42,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0X83,0X18,0X00,0X00,0XC8,0X41,0X38,0XC6,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X7D,0XEF,0X8E,0X73,0X82,0X10,0X45,0X29,0XC7,0X39,0X08,0X42,0X09,0X4A,0X8A,0X52,
0X30,0X84,0XCF,0X7B,0X8A,0X52,0X49,0X4A,0X4A,0X52,0X49,0X4A,0XCB,0X5A,0XCF,0X7B,
0X0C,0X63,0X08,0X42,0XC7,0X39,0X86,0X31,0X45,0X29,0XC3,0X18,0X00,0X00,0X49,0X4A,
0XBA,0XD6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF3,0X9C,0XC3,0X18,0X04,0X21,0XC7,0X39,0X08,0X42,0X49,0X4A,0X49,0X4A,0X72,0X94,
0X7D,0XEF,0X7D,0XEF,0XB2,0X94,0X4A,0X52,0X49,0X4A,0X8A,0X52,0X75,0XAD,0XBE,0XF7,
0XBA,0XD6,0X4D,0X6B,0XC7,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0XC3,0X18,0X41,0X08,
0XCF,0X7B,0X7C,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBA,0XD6,
0X08,0X42,0X82,0X10,0XC7,0X39,0X08,0X42,0X49,0X4A,0X49,0X4A,0X8E,0X73,0XFB,0XDE,
0XFF,0XFF,0XBE,0XF7,0XBA,0XD6,0X8E,0X73,0X08,0X42,0X30,0X84,0X3C,0XE7,0X7D,0XEF,
0XFF,0XFF,0XB6,0XB5,0X49,0X4A,0XC7,0X39,0X86,0X31,0X45,0X29,0X04,0X21,0X41,0X08,
0X45,0X29,0XB6,0XB5,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0X71,0X8C,
0X41,0X08,0X45,0X29,0X08,0X42,0X49,0X4A,0X49,0X4A,0X4A,0X52,0XB2,0X94,0XBE,0XF7,
0XBE,0XF7,0XB2,0X94,0XCF,0X7B,0XCF,0X7B,0X49,0X4A,0XB6,0XB5,0XF3,0X9C,0X0C,0X63,
0X38,0XC6,0XBA,0XD6,0X0C,0X63,0X87,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0XC3,0X18,
0X41,0X08,0X30,0X84,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0XE7,0XCB,0X5A,
0X41,0X08,0XC7,0X39,0X08,0X42,0X49,0X4A,0X4A,0X52,0X8A,0X52,0XF3,0X9C,0XFF,0XFF,
0X7D,0XEF,0XC7,0X39,0XC3,0X18,0X0C,0X63,0XCB,0X5A,0XB6,0XB5,0XB2,0X94,0XCB,0X5A,
0X75,0XAD,0XFA,0XD6,0X4D,0X6B,0X87,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0X04,0X21,
0X41,0X08,0X8A,0X52,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X38,0XC6,0X86,0X31,
0X04,0X21,0XC8,0X41,0X49,0X4A,0X49,0X4A,0X4A,0X52,0X49,0X4A,0XB1,0X8C,0XBE,0XF7,
0XBE,0XF7,0XB2,0X94,0XCF,0X7B,0XCF,0X7B,0X49,0X4A,0X74,0XA5,0X7D,0XEF,0X7C,0XE7,
0XBE,0XF7,0X79,0XCE,0X0C,0X63,0XC7,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0X04,0X21,
0X82,0X10,0X45,0X29,0X75,0XAD,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X34,0XA5,0X82,0X10,
0X86,0X31,0X08,0X42,0X49,0X4A,0X49,0X4A,0X8A,0X52,0X49,0X4A,0X4D,0X6B,0XBA,0XD6,
0XFF,0XFF,0XFF,0XFF,0X79,0XCE,0X0D,0X63,0XC7,0X39,0XCF,0X7B,0X7D,0XEF,0XFF,0XFF,
0XFF,0XFF,0X75,0XAD,0X08,0X42,0X86,0X31,0XC7,0X39,0X86,0X31,0X45,0X29,0X45,0X29,
0XC3,0X18,0XC3,0X18,0XB2,0X94,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0XB2,0X8C,0X41,0X08,
0XC7,0X39,0X08,0X42,0X49,0X4A,0X49,0X4A,0X8A,0X52,0X8A,0X52,0X4A,0X4A,0XD0,0X7B,
0X7A,0XC6,0X7B,0XBE,0X90,0X6B,0XC9,0X39,0X88,0X31,0XC9,0X39,0XB3,0X84,0XBB,0XC6,
0XF8,0XB5,0XCC,0X5A,0X86,0X31,0XC7,0X39,0XC7,0X39,0X86,0X31,0X45,0X29,0X45,0X29,
0XC4,0X20,0X41,0X08,0X30,0X84,0X3C,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0XE7,0X8A,0X4A,0XC3,0X10,
0XC7,0X39,0X08,0X42,0X49,0X4A,0X49,0X4A,0X4A,0X4A,0X4A,0X42,0X09,0X3A,0X08,0X4A,
0X09,0X6B,0X49,0X7B,0XC6,0X7A,0X05,0X83,0X46,0X83,0XC5,0X7A,0XC6,0X72,0X09,0X7B,
0X48,0X5A,0X87,0X31,0X88,0X21,0X88,0X29,0X86,0X31,0X86,0X31,0X45,0X29,0X45,0X29,
0X04,0X21,0X41,0X08,0X4A,0X4A,0XBA,0XD6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XC5,0X82,0X50,0X05,0X41,
0XC7,0X29,0X08,0X42,0X49,0X4A,0X4A,0X42,0X49,0X4A,0X09,0X7B,0X88,0X9B,0XC6,0XB3,
0X21,0XD4,0XA0,0XDC,0XE1,0XE4,0X61,0XED,0X61,0XED,0X21,0XED,0XA0,0XE4,0X20,0XDC,
0X80,0XCB,0X43,0XAB,0XC4,0X82,0X06,0X5A,0X47,0X21,0X46,0X29,0X45,0X29,0X04,0X29,
0X04,0X19,0X82,0X10,0X82,0X18,0XF3,0X9C,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X4D,0X93,0X00,0XA0,0X82,0XB8,
0XC7,0X31,0X09,0X32,0X49,0X4A,0X86,0X7A,0X43,0XC3,0X6B,0XED,0XF4,0XF6,0XEB,0XFD,
0X20,0XFD,0X20,0XFD,0X60,0XFD,0XA0,0XFD,0XA0,0XFD,0X60,0XFD,0X60,0XFD,0X20,0XFD,
0XE0,0XFC,0XA0,0XFC,0X60,0XF4,0XC1,0XDB,0X83,0X9A,0XC5,0X49,0X45,0X29,0X04,0X19,
0XC4,0X20,0X82,0X38,0X00,0X50,0XCB,0X6A,0XBA,0XD6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XEE,0X04,0XA1,0X00,0XC0,0X00,0XF0,
0XC3,0XA0,0XC8,0X41,0X49,0X42,0X05,0X9B,0X20,0XFC,0XA4,0XFC,0X69,0XFD,0XE8,0XFD,
0X63,0XFD,0X20,0XFD,0X60,0XFD,0X60,0XFD,0X60,0XFD,0X20,0XFD,0X20,0XFD,0XE0,0XFC,
0XE0,0XFC,0XA0,0XFC,0X60,0XFC,0X20,0XFC,0X41,0XD3,0XC5,0X49,0X45,0X19,0XC4,0X38,
0X82,0X68,0X41,0X88,0X00,0X70,0X49,0X5A,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XF6,0X82,0XC0,0X00,0XD0,0X86,0XC1,
0X46,0XF1,0X41,0XC8,0X45,0X79,0X89,0X52,0X88,0X62,0X86,0X6A,0XC6,0X7A,0XC4,0XBB,
0XE1,0XFC,0X60,0XFD,0X60,0XFD,0XA0,0XFD,0XA0,0XFD,0X60,0XFD,0X60,0XFD,0XE0,0XFC,
0X60,0XE4,0X03,0X93,0X84,0X72,0X44,0X6A,0XC5,0X41,0X45,0X29,0XC3,0X58,0X41,0XA8,
0X40,0X98,0X00,0XB0,0X00,0X60,0X0C,0X6B,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0XCE,0X83,0X82,0X88,0X00,0XF8,0XC4,0XD8,
0X0C,0XF3,0X8A,0XFA,0X82,0XE8,0X82,0XB0,0X45,0X69,0XC7,0X51,0X08,0X42,0X08,0X3A,
0X86,0X5A,0X83,0X9B,0XA2,0XBC,0X22,0XCD,0X21,0XCD,0XA1,0XC4,0X22,0XB4,0XC4,0X7A,
0X06,0X3A,0X86,0X29,0X45,0X29,0X05,0X31,0XC4,0X50,0X41,0X90,0X00,0XC0,0X00,0XA8,
0X00,0XA0,0X00,0XA8,0X00,0X30,0X4A,0X4A,0XBA,0XD6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X8E,0X73,0XC3,0X18,0X05,0X39,0X82,0XA8,0X00,0XF8,
0XC3,0XF8,0X4D,0XFB,0X4D,0XFB,0XC7,0XF9,0XC3,0XF0,0X82,0XD8,0XC3,0XB0,0X04,0X81,
0X45,0X61,0X46,0X51,0X86,0X49,0X86,0X49,0X46,0X41,0X45,0X41,0X45,0X41,0X45,0X41,
0X05,0X49,0X04,0X61,0X82,0X90,0X41,0XB0,0X00,0XD0,0X00,0XC8,0X00,0XA8,0X00,0XA8,
0X00,0XB8,0X41,0X58,0X82,0X10,0X82,0X10,0XB2,0X94,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBE,0XF7,0XCF,0X7B,0X82,0X10,0X04,0X21,0X86,0X29,0X86,0X41,0X04,0X99,
0X40,0XE8,0X41,0XF8,0X86,0XF9,0XCB,0XFA,0X49,0XFA,0X82,0XF8,0X00,0XF8,0X00,0XF0,
0X00,0XE8,0X41,0XD8,0X41,0XD0,0X41,0XC0,0X41,0XC0,0X41,0XC0,0X41,0XC0,0X41,0XC8,
0X00,0XD0,0X00,0XE0,0X00,0XE0,0X00,0XD8,0X00,0XD0,0X00,0XB8,0X00,0XA8,0X41,0X88,
0X82,0X48,0X82,0X10,0X82,0X10,0X00,0X00,0X45,0X29,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,
0XBE,0XF7,0XF3,0X9C,0X82,0X10,0XC3,0X18,0X45,0X29,0X86,0X31,0XC7,0X31,0X30,0X7C,
0XF3,0XDC,0X86,0XE1,0X00,0XF0,0X00,0XF8,0X41,0XF8,0X41,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XE8,0X00,0XE0,0X00,0XE0,0X00,0XD8,0X00,0XC8,0X41,0XA0,0X8A,0X9A,0X0C,0X63,
0X04,0X11,0X82,0X10,0X82,0X10,0X41,0X08,0X00,0X00,0X4D,0X6B,0X7D,0XEF,0XFF,0XFF,
0XFB,0XDE,0X08,0X42,0X42,0X10,0X45,0X29,0X86,0X31,0X86,0X31,0X49,0X4A,0X38,0XBE,
0XFF,0XFF,0X38,0XD6,0X86,0XA9,0X00,0XC8,0X00,0XE0,0X00,0XF0,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF0,0X00,0XF0,
0X00,0XE8,0X00,0XE0,0X00,0XD0,0XC3,0X98,0X8A,0X8A,0XB2,0XA4,0XBA,0XC6,0XF7,0XB5,
0X08,0X42,0X41,0X08,0X82,0X10,0X41,0X08,0X00,0X00,0X45,0X29,0XF7,0XBD,0XFF,0XFF,
0X71,0X8C,0X41,0X08,0X04,0X21,0X45,0X29,0X86,0X31,0X86,0X31,0X0C,0X63,0X3C,0XE7,
0XFF,0XFF,0X79,0XD6,0X46,0XB9,0X00,0XE0,0X42,0XC8,0X82,0XA8,0X82,0XB0,0X41,0XD8,
0X82,0XE8,0X82,0XF0,0X41,0XE8,0X41,0XE8,0X41,0XE8,0X41,0XF0,0X41,0XE8,0X41,0XD8,
0X04,0XC1,0X08,0X92,0X4D,0X8B,0X34,0XA5,0XFB,0XC6,0XFB,0XD6,0XBA,0XCE,0X3C,0XE7,
0X30,0X84,0XC3,0X18,0X41,0X08,0X41,0X08,0X00,0X00,0X41,0X08,0XCF,0X7B,0X7D,0XEF,
0X49,0X4A,0X00,0X00,0X04,0X21,0X45,0X29,0X46,0X31,0X86,0X31,0X30,0X84,0XFF,0XFF,
0XFF,0XF7,0XF7,0XDD,0X09,0XDA,0X83,0XF8,0X01,0XF0,0X42,0XC0,0X82,0X98,0X49,0X9A,
0XF3,0XB4,0XF3,0XCC,0X71,0XBC,0X8E,0XBB,0X8E,0XBB,0X30,0XBC,0X71,0XBC,0XF3,0XBC,
0XB6,0XBD,0XFB,0XCE,0XBE,0XE7,0X7D,0XE7,0X3B,0XDF,0XBA,0XD6,0X79,0XCE,0XFB,0XDE,
0X75,0XAD,0X86,0X31,0X41,0X08,0X41,0X08,0X00,0X00,0X00,0X00,0X49,0X4A,0XFB,0XDE,
0X04,0X21,0X41,0X08,0X04,0X21,0X45,0X29,0X45,0X29,0X87,0X39,0XB2,0X94,0XFF,0XFF,
0XBE,0XF7,0X34,0XDD,0X0C,0XEB,0X09,0XFA,0X00,0XF0,0X01,0XD8,0X00,0XD8,0X8B,0XD2,
0X7D,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBE,0XFF,0X7D,0XEF,0XFB,0XDE,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,
0X78,0XC6,0XC7,0X39,0X00,0X00,0X41,0X08,0X00,0X00,0X00,0X00,0XC7,0X39,0X79,0XCE,
0X00,0X00,0X82,0X10,0XC3,0X18,0X04,0X21,0X05,0X29,0X86,0X31,0XB3,0X9C,0XFF,0XFF,
0XFF,0XF7,0X75,0XDD,0XC7,0XE9,0XC7,0XF9,0X01,0XF8,0X01,0XF0,0X00,0XE8,0X49,0XE2,
0XFB,0XEE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBE,0XF7,0X7D,0XEF,0XFB,0XDE,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,
0XB9,0XCE,0X08,0X42,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC7,0X39,0X38,0XC6,
0X00,0X00,0X82,0X10,0X82,0X10,0X04,0X21,0X04,0X21,0X45,0X29,0X30,0X84,0XFF,0XFF,
0XFF,0XFF,0X38,0XDE,0XC4,0XD0,0X00,0XF0,0X01,0XF8,0X00,0XF8,0X00,0XF0,0X08,0XD2,
0XFB,0XE6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBE,0XF7,0X7D,0XEF,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0X79,0XCE,0XBA,0XD6,
0X79,0XCE,0XC7,0X39,0X41,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X86,0X31,0X38,0XC6,
0X00,0X00,0X00,0X00,0XC3,0X18,0XCB,0X5A,0X86,0X31,0XC3,0X18,0XCB,0X5A,0X7D,0XEF,
0XFF,0XFF,0X7D,0XEF,0XCF,0XBB,0XC3,0XB0,0X41,0XD0,0X41,0XD0,0X82,0XB8,0X4D,0XB3,
0X7D,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XBE,0XF7,0XBE,0XF7,0X3D,0XEF,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0X79,0XCE,0XFA,0XD6,
0XF7,0XBD,0X04,0X21,0X86,0X31,0X04,0X21,0X00,0X00,0X00,0X00,0X86,0X31,0X38,0XC6,
0X86,0X31,0XC3,0X18,0XCB,0X5A,0X75,0XAD,0XCF,0X7B,0X41,0X08,0X86,0X31,0XF7,0XBD,
0XFF,0XFF,0XFF,0XFF,0XBE,0XEF,0X74,0XB5,0X30,0X9C,0X30,0X9C,0X72,0XA4,0XBB,0XD6,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XBE,0XF7,0X7D,0XEF,0X3C,0XE7,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0X79,0XCE,0X3C,0XE7,
0X71,0X8C,0X81,0X08,0X0C,0X63,0XCF,0X7B,0X82,0X10,0X00,0X00,0X8A,0X52,0X38,0XC6,
0X75,0XAD,0X71,0X8C,0XB6,0XB5,0X3C,0XE7,0XFB,0XDE,0XC7,0X39,0X00,0X00,0XCF,0X73,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,
0X7D,0XEF,0X7D,0XEF,0X3B,0XDF,0XFA,0XD6,0X79,0XCE,0X79,0XCE,0XFB,0XDE,0XB9,0XCE,
0XC7,0X39,0XC4,0X20,0X71,0X8C,0XBA,0XD6,0X71,0X8C,0XCB,0X5A,0XB2,0X94,0XBA,0XD6,
0XFF,0XFF,0X7D,0XEF,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XB6,0XB5,0X46,0X29,0X05,0X19,
0X75,0XA5,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,
0X7D,0XEF,0X3C,0XE7,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,0XFC,0XDE,0X4E,0X63,
0X42,0X08,0X0C,0X63,0XF7,0XBD,0XBE,0XF7,0XFF,0XFF,0XFB,0XDE,0XFB,0XDE,0XBE,0XF7,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF4,0X9C,0X04,0X21,
0X05,0X21,0XB6,0XA5,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0XBE,0XF7,0X7D,0XEF,
0X3C,0XE7,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XFB,0XDE,0XBB,0XD6,0XD1,0X73,0X83,0X18,
0X86,0X39,0X34,0X9D,0XBD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XFF,0X35,0XD6,0XEB,0XCC,0X43,0XB3,
0X40,0X51,0X05,0X19,0XF5,0X8C,0XBE,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0XBE,0XF7,0X7D,0XEF,0X7D,0XEF,0X3C,0XE7,
0XFB,0XDE,0XBA,0XDE,0XBA,0XD6,0X3C,0XDF,0X3A,0XBE,0X4F,0X63,0X82,0X49,0X40,0XA3,
0X23,0XB4,0XCC,0X83,0X3A,0XBE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XF7,0XB5,0XBD,0X82,0X92,0X20,0XF4,0XA0,0XFC,
0X60,0XE4,0X40,0X82,0X84,0X41,0X8F,0X6B,0X77,0XAD,0X3D,0XE7,0XFF,0XFF,0XFF,0XFF,
0XFE,0XFF,0XBE,0XF7,0XBE,0XF7,0XBE,0XF7,0X7D,0XEF,0X7D,0XEF,0X3C,0XE7,0XFB,0XDE,
0XFB,0XDE,0X3D,0XE7,0XBB,0XCE,0X36,0X9D,0X0B,0X6B,0X41,0X6A,0X60,0XC4,0X20,0XFE,
0X60,0XF5,0X00,0X8B,0XC7,0X6A,0X38,0XC6,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0X4B,0X7B,0X80,0XB2,0XA0,0XFC,0XA0,0XFC,
0XE0,0XFC,0XE0,0XFC,0XC0,0XCB,0XC1,0X8A,0X45,0X62,0X4D,0X6B,0XB3,0X94,0XF7,0XBD,
0X3D,0XDF,0XFF,0XF7,0XFF,0XFF,0XBE,0XF7,0X7D,0XEF,0X7D,0XEF,0X7D,0XE7,0X3D,0XDF,
0XBA,0XC6,0X75,0XA5,0X8D,0X7B,0X84,0X7A,0X40,0XB3,0XE0,0XEC,0XE0,0XFD,0XE0,0XFD,
0X60,0XF5,0X20,0XE5,0XA0,0XD4,0X0A,0X6B,0XFB,0XDE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7D,0XEF,0XCC,0X93,0X40,0XEB,0X60,0XFC,0XA0,0XFC,
0XE0,0XFC,0X20,0XFD,0X60,0XFD,0X20,0XF5,0XA0,0XD4,0XC0,0XBB,0X42,0X9B,0X45,0X8B,
0X6B,0X9C,0XAE,0X9C,0X71,0X8C,0XB3,0X94,0X33,0X9D,0X34,0XA5,0XF2,0XA4,0XF0,0XB4,
0XCA,0X9B,0X04,0X9B,0X40,0XBB,0X20,0XE4,0X20,0XFD,0XA0,0XFD,0XA0,0XFD,0XE0,0XFD,
0XE0,0XFD,0XE0,0XFD,0X20,0XC4,0X88,0X5A,0X38,0XBE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X78,0XD6,0X46,0XAB,0X40,0XDB,0X20,0XF4,
0X60,0XFC,0XA0,0XFC,0XE0,0XFC,0X60,0XFD,0XA0,0XFD,0X60,0XFD,0X20,0XF5,0XA0,0XDC,
0XC0,0XB3,0XC0,0X51,0X86,0X29,0X0D,0X63,0X8F,0X7B,0X0D,0X5B,0XC7,0X41,0X01,0X82,
0X00,0XC3,0XC0,0XE3,0X60,0XFC,0XA0,0XFC,0XE0,0XFC,0XE0,0XFC,0X60,0XF5,0X60,0XF5,
0X20,0XE5,0X80,0X9B,0X86,0X62,0X30,0X84,0X79,0XCE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X38,0XC6,0X2D,0X9C,0X05,0X93,
0X43,0XA3,0X82,0XB3,0XC2,0XBB,0XC2,0XBB,0X22,0XB4,0X82,0XA3,0X42,0X93,0XC3,0X7A,
0X85,0X62,0X0B,0X63,0X71,0X84,0XB6,0XB5,0X79,0XCE,0X79,0XC6,0XB5,0XAD,0X70,0X94,
0X4A,0X8B,0X06,0X83,0X04,0X93,0X04,0X9B,0X43,0X9B,0X43,0X9B,0X43,0X93,0X04,0X83,
0X08,0X73,0X8D,0X73,0XB3,0X94,0X79,0XCE,0X7D,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0XDF,0X38,0XBE,
0X75,0XB5,0X33,0XA5,0X33,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X94,0XF3,0X9C,
0X35,0XA5,0XF8,0XBD,0XFB,0XDE,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7E,0XEF,
0XBB,0XD6,0XF8,0XBD,0XB6,0XAD,0X75,0XAD,0X34,0XA5,0X33,0X9D,0X34,0X9D,0X35,0XA5,
0XB7,0XAD,0X79,0XC6,0X3C,0XE7,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};


/****************************************32*32的点阵************************************/
const unsigned char Hzk32[] PROGMEM ={			  

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x01,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x10,0x80,0x01,0x0C,0xF0,0xFF,0xFF,0x0F,0x30,0x80,0x01,0x04,0x30,0x80,0x01,0x04,
0x30,0x80,0x01,0x04,0x30,0x80,0x01,0x04,0x30,0x80,0x01,0x04,0x30,0x80,0x01,0x04,
0x30,0x80,0x01,0x04,0x30,0x80,0x01,0x04,0xF0,0xFF,0xFF,0x07,0x30,0x80,0x01,0x04,
0x30,0x80,0x01,0x04,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"中",0*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x01,
0x00,0xFF,0xFF,0x01,0x00,0x03,0x80,0x01,0x00,0x03,0x80,0x01,0x00,0xFF,0xFF,0x01,
0x00,0x03,0x80,0x01,0x00,0x03,0x80,0x01,0x00,0xFF,0xFF,0x01,0x00,0x81,0x81,0x00,
0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x1C,0xFC,0xFF,0xFF,0x3F,0x00,0x00,0x40,0x00,
0x00,0x03,0xC0,0x01,0x00,0xFF,0xFF,0x01,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0xFF,0xFF,0x00,0x00,0x01,0x41,0x00,0x00,0x04,0x01,0x00,
0x00,0x0E,0x71,0x00,0x00,0x07,0x81,0x01,0x80,0x01,0x01,0x07,0x60,0x00,0x01,0x0E,
0x18,0x98,0x01,0x1C,0x04,0xE0,0x01,0x18,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"景",1*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0xF0,0xFF,0xFF,0x1F,
0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x10,0x0C,0x30,0xFE,0x3F,0x0C,
0x30,0x04,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,
0x30,0x00,0xC0,0x0C,0xF0,0xFF,0xFF,0x0D,0x30,0x30,0x06,0x0E,0x30,0x30,0x06,0x0C,
0x30,0x10,0x06,0x0C,0x30,0x10,0x06,0x0C,0x30,0x10,0x06,0x0C,0x30,0x18,0x86,0x0C,
0x30,0x18,0x86,0x0C,0x30,0x08,0x06,0x0D,0x30,0x0C,0x86,0x0D,0x30,0x06,0xEE,0x0F,
0x30,0x02,0xFC,0x0D,0x30,0x01,0x00,0x0C,0xF0,0x00,0x00,0x0C,0x30,0x00,0x00,0x0C,
0xF0,0xFF,0xFF,0x0F,0x30,0x00,0x00,0x0C,0x10,0x00,0x00,0x04,0x00,0x00,0x00,0x00,/*"园",2*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x01,0x00,
0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,
0xE0,0xFF,0xFF,0x03,0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,
0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,0xE0,0xFF,0xFF,0x03,
0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,0x60,0xC0,0x00,0x03,
0x60,0xC0,0x00,0x03,0xE0,0xFF,0xFF,0x03,0x60,0xC0,0x00,0x01,0x60,0xC0,0x00,0x00,
0x00,0xC0,0x00,0x08,0x00,0xC0,0x00,0x10,0x00,0xC0,0x00,0x10,0x00,0xC0,0x00,0x18,
0x00,0xC0,0x01,0x38,0x00,0x80,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"电",3*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0xC0,0xFF,0xFF,0x07,0x00,0x00,0x80,0x07,0x00,0x00,0xC0,0x00,0x00,0x00,0x60,0x00,
0x00,0x00,0x18,0x00,0x00,0x00,0x0C,0x00,0x00,0x80,0x03,0x00,0x00,0x80,0x03,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x08,0x00,0x80,0x01,0x1C,0xFC,0xFF,0xFF,0x3F,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
0x00,0xFC,0x01,0x00,0x00,0xE0,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,/*"子",4*/};

const unsigned char asc2_1608[1520] PROGMEM ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x18,0x18,0x00,0x00,
0x00,0x48,0x6C,0x24,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x24,0x24,0x24,0x7F,0x12,0x12,0x12,0x7F,0x12,0x12,0x12,0x00,0x00,
0x00,0x00,0x08,0x1C,0x2A,0x2A,0x0A,0x0C,0x18,0x28,0x28,0x2A,0x2A,0x1C,0x08,0x08,
0x00,0x00,0x00,0x22,0x25,0x15,0x15,0x15,0x2A,0x58,0x54,0x54,0x54,0x22,0x00,0x00,
0x00,0x00,0x00,0x0C,0x12,0x12,0x12,0x0A,0x76,0x25,0x29,0x11,0x91,0x6E,0x00,0x00,
0x00,0x06,0x06,0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00,
0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00,
0x00,0x00,0x00,0x00,0x08,0x08,0x6B,0x1C,0x1C,0x6B,0x08,0x08,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x7F,0x08,0x08,0x08,0x08,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x04,0x03,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x00,
0x00,0x00,0x80,0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x00,
0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,
0x00,0x00,0x00,0x08,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,
0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x20,0x20,0x10,0x08,0x04,0x42,0x7E,0x00,0x00,
0x00,0x00,0x00,0x3C,0x42,0x42,0x20,0x18,0x20,0x40,0x40,0x42,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0x20,0x30,0x28,0x24,0x24,0x22,0x22,0x7E,0x20,0x20,0x78,0x00,0x00,
0x00,0x00,0x00,0x7E,0x02,0x02,0x02,0x1A,0x26,0x40,0x40,0x42,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0x38,0x24,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x24,0x18,0x00,0x00,
0x00,0x00,0x00,0x7E,0x22,0x22,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,
0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,
0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x64,0x58,0x40,0x40,0x24,0x1C,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x04,
0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00,
0x00,0x00,0x00,0x3C,0x42,0x42,0x46,0x40,0x20,0x10,0x10,0x00,0x18,0x18,0x00,0x00,
0x00,0x00,0x00,0x1C,0x22,0x5A,0x55,0x55,0x55,0x55,0x2D,0x42,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0x08,0x08,0x18,0x14,0x14,0x24,0x3C,0x22,0x42,0x42,0xE7,0x00,0x00,
0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x1E,0x22,0x42,0x42,0x42,0x22,0x1F,0x00,0x00,
0x00,0x00,0x00,0x7C,0x42,0x42,0x01,0x01,0x01,0x01,0x01,0x42,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0x1F,0x22,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x22,0x1F,0x00,0x00,
0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x42,0x42,0x3F,0x00,0x00,
0x00,0x00,0x00,0x3F,0x42,0x12,0x12,0x1E,0x12,0x12,0x02,0x02,0x02,0x07,0x00,0x00,
0x00,0x00,0x00,0x3C,0x22,0x22,0x01,0x01,0x01,0x71,0x21,0x22,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,
0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x11,0x0F,
0x00,0x00,0x00,0x77,0x22,0x12,0x0A,0x0E,0x0A,0x12,0x12,0x22,0x22,0x77,0x00,0x00,
0x00,0x00,0x00,0x07,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x7F,0x00,0x00,
0x00,0x00,0x00,0x77,0x36,0x36,0x36,0x36,0x2A,0x2A,0x2A,0x2A,0x2A,0x6B,0x00,0x00,
0x00,0x00,0x00,0xE3,0x46,0x46,0x4A,0x4A,0x52,0x52,0x52,0x62,0x62,0x47,0x00,0x00,
0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x1C,0x00,0x00,
0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x42,0x3E,0x02,0x02,0x02,0x02,0x07,0x00,0x00,
0x00,0x00,0x00,0x1C,0x22,0x41,0x41,0x41,0x41,0x41,0x4D,0x53,0x32,0x1C,0x60,0x00,
0x00,0x00,0x00,0x3F,0x42,0x42,0x42,0x3E,0x12,0x12,0x22,0x22,0x42,0xC7,0x00,0x00,
0x00,0x00,0x00,0x7C,0x42,0x42,0x02,0x04,0x18,0x20,0x40,0x42,0x42,0x3E,0x00,0x00,
0x00,0x00,0x00,0x7F,0x49,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00,
0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,
0x00,0x00,0x00,0xE7,0x42,0x42,0x22,0x24,0x24,0x14,0x14,0x18,0x08,0x08,0x00,0x00,
0x00,0x00,0x00,0x6B,0x49,0x49,0x49,0x49,0x55,0x55,0x36,0x22,0x22,0x22,0x00,0x00,
0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00,
0x00,0x00,0x00,0x77,0x22,0x22,0x14,0x14,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,0x00,
0x00,0x00,0x00,0x7E,0x21,0x20,0x10,0x10,0x08,0x04,0x04,0x42,0x42,0x3F,0x00,0x00,
0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00,
0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x20,0x20,0x20,0x40,0x40,
0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00,
0x00,0x38,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0x00,0x06,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x78,0x44,0x42,0x42,0xFC,0x00,0x00,
0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x26,0x1A,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x02,0x02,0x02,0x44,0x38,0x00,0x00,
0x00,0x00,0x00,0x60,0x40,0x40,0x40,0x78,0x44,0x42,0x42,0x42,0x64,0xD8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x02,0x02,0x42,0x3C,0x00,0x00,
0x00,0x00,0x00,0xF0,0x88,0x08,0x08,0x7E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x22,0x22,0x1C,0x02,0x3C,0x42,0x42,0x3C,
0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x3A,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,
0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x1E,
0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x72,0x12,0x0A,0x16,0x12,0x22,0x77,0x00,0x00,
0x00,0x00,0x00,0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x92,0x92,0x92,0x92,0x92,0xB7,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0x46,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x26,0x42,0x42,0x42,0x22,0x1E,0x02,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x44,0x42,0x42,0x42,0x44,0x78,0x40,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x4C,0x04,0x04,0x04,0x04,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x42,0x02,0x3C,0x40,0x42,0x3E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x3E,0x08,0x08,0x08,0x08,0x08,0x30,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x42,0x42,0x42,0x42,0x62,0xDC,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x08,0x08,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEB,0x49,0x49,0x55,0x55,0x22,0x22,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x24,0x18,0x18,0x18,0x24,0x6E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x14,0x18,0x08,0x08,0x07,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x22,0x10,0x08,0x08,0x44,0x7E,0x00,0x00,
0x00,0xC0,0x20,0x20,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x00,
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
0x00,0x06,0x08,0x08,0x08,0x08,0x08,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x06,0x00,
0x0C,0x32,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
}; 




const unsigned char Hzk16[] PROGMEM ={


0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xFC,0x1F,0x84,0x10,0x84,0x10,0x84,0x10,
0x84,0x10,0x84,0x10,0xFC,0x1F,0x84,0x10,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,/*"中",0*/

0xF8,0x0F,0x08,0x08,0xF8,0x0F,0x08,0x08,0xF8,0x0F,0x80,0x00,0xFF,0x7F,0x00,0x00,
0xF8,0x0F,0x08,0x08,0x08,0x08,0xF8,0x0F,0x80,0x00,0x84,0x10,0xA2,0x20,0x40,0x00,/*"景",1*/

0x00,0x00,0xFE,0x3F,0x02,0x20,0xF2,0x27,0x02,0x20,0x02,0x20,0xFA,0x2F,0x22,0x21,
0x22,0x21,0x22,0x21,0x12,0x29,0x12,0x29,0x0A,0x2E,0x02,0x20,0xFE,0x3F,0x02,0x20,/*"园",2*/

0x80,0x00,0x80,0x00,0x80,0x00,0xFC,0x1F,0x84,0x10,0x84,0x10,0x84,0x10,0xFC,0x1F,
0x84,0x10,0x84,0x10,0x84,0x10,0xFC,0x1F,0x84,0x50,0x80,0x40,0x80,0x40,0x00,0x7F,/*"电",3*/

0x00,0x00,0xFE,0x1F,0x00,0x08,0x00,0x04,0x00,0x02,0x80,0x01,0x80,0x00,0xFF,0x7F,
0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xA0,0x00,0x40,0x00,/*"子",4*/

0x10,0x08,0xB8,0x08,0x0F,0x09,0x08,0x09,0x08,0x08,0xBF,0x08,0x08,0x09,0x1C,0x09,
0x2C,0x08,0x0A,0x78,0xCA,0x0F,0x09,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,/*"科",5*/

0x08,0x04,0x08,0x04,0x08,0x04,0xC8,0x7F,0x3F,0x04,0x08,0x04,0x08,0x04,0xA8,0x3F,
0x18,0x21,0x0C,0x11,0x0B,0x12,0x08,0x0A,0x08,0x04,0x08,0x0A,0x8A,0x11,0x64,0x60,/*"技",6*/



};

#endif