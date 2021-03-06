/*
 * ESPRSSIF MIT License
 *
 * Copyright (c) 2016 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on ESPRESSIF SYSTEMS ESP8266 only, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

unsigned char default_certificate[] = {
  0x30, 0x82, 0x01, 0x82, 0x30, 0x81, 0xec, 0x02, 0x09, 0x00, 0x88, 0xf2,
  0x5f, 0x46, 0x12, 0x2e, 0x3d, 0x3a, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86,
  0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x1c, 0x31,
  0x1a, 0x30, 0x18, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x11, 0x77, 0x77,
  0x77, 0x2e, 0x65, 0x73, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x66, 0x2e,
  0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x34, 0x30, 0x36, 0x32,
  0x34, 0x31, 0x30, 0x32, 0x32, 0x33, 0x33, 0x5a, 0x17, 0x0d, 0x32, 0x38,
  0x30, 0x33, 0x30, 0x32, 0x31, 0x30, 0x32, 0x32, 0x33, 0x33, 0x5a, 0x30,
  0x34, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x09,
  0x65, 0x73, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x66, 0x31, 0x1e, 0x30,
  0x1c, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x15, 0x65, 0x73, 0x70, 0x72,
  0x65, 0x73, 0x73, 0x69, 0x66, 0x20, 0x49, 0x6f, 0x54, 0x20, 0x70, 0x72,
  0x6f, 0x6a, 0x65, 0x63, 0x74, 0x30, 0x5c, 0x30, 0x0d, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x4b,
  0x00, 0x30, 0x48, 0x02, 0x41, 0x00, 0xb9, 0x83, 0x30, 0xca, 0xfb, 0xec,
  0x11, 0x9e, 0x94, 0xb7, 0x89, 0xf2, 0x84, 0x2c, 0xda, 0xe1, 0x9a, 0x53,
  0x3a, 0x1b, 0x6e, 0xc9, 0x85, 0x81, 0xf9, 0xa3, 0x41, 0xdb, 0xe2, 0x82,
  0x3b, 0xfa, 0x80, 0x22, 0x3b, 0x81, 0x6d, 0x25, 0x73, 0x7e, 0xf6, 0x49,
  0xcc, 0x69, 0x3c, 0x6c, 0xd8, 0x05, 0xfb, 0x92, 0x02, 0xcf, 0x19, 0x2a,
  0x10, 0x7d, 0x69, 0x7a, 0xd8, 0x9d, 0xd3, 0xcf, 0x6c, 0xef, 0x02, 0x03,
  0x01, 0x00, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
  0x0d, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x81, 0x81, 0x00, 0x2d, 0x63,
  0x58, 0x21, 0xe3, 0x8b, 0x37, 0x0d, 0x28, 0x68, 0x11, 0x0e, 0x4d, 0xdd,
  0xf3, 0xea, 0xdb, 0xec, 0xd7, 0x09, 0x47, 0x2c, 0xa1, 0xd8, 0xd1, 0x71,
  0x83, 0x11, 0xb4, 0x17, 0xbc, 0x83, 0xea, 0x5a, 0xd6, 0x73, 0x02, 0x25,
  0x87, 0x01, 0x76, 0xfc, 0x59, 0x1a, 0xcf, 0xd9, 0x49, 0xc9, 0xf9, 0x1f,
  0x5c, 0x3b, 0x24, 0x6a, 0x5c, 0xa5, 0xca, 0xe6, 0x5d, 0x34, 0x5b, 0x5f,
  0xcf, 0x56, 0x9c, 0x71, 0xd2, 0x6b, 0xdd, 0x1f, 0x15, 0xae, 0x4d, 0xf1,
  0xca, 0x35, 0xc8, 0xdd, 0x93, 0x1b, 0x58, 0x1e, 0x94, 0x08, 0xcf, 0xa0,
  0x20, 0xb9, 0x75, 0xa5, 0x4c, 0x77, 0xf5, 0x7f, 0xed, 0xd5, 0xcd, 0x53,
  0xaa, 0x87, 0xa6, 0x3c, 0xf5, 0x72, 0xd8, 0xd2, 0xb0, 0xf7, 0x11, 0xb0,
  0x0e, 0xe9, 0x41, 0xd6, 0x8e, 0xd9, 0x07, 0xf8, 0xed, 0xf8, 0x67, 0x7f,
  0x28, 0x18, 0xf0, 0x1b, 0x29, 0x11
};
unsigned int default_certificate_len = 390;
