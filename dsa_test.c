//
// Created by danan on 6/14/2024.
//

#include "dsa_test.h"
#include "prng_simulator.h"
/**
 * @brief DSA test vectors
 **/

const DsaTestVector dsaTestVectors[] =
        {
                {"DSA 512-bit, SHA-1",
                        SHA1_HASH_ALGO,
                        {0x8D, 0xF2, 0xA4, 0x94, 0x49, 0x22, 0x76, 0xAA, 0x3D, 0x25, 0x75, 0x9B, 0xB0, 0x68, 0x69, 0xCB,
                                0xEA, 0xC0, 0xD8, 0x3A, 0xFB, 0x8D, 0x0C, 0xF7, 0xCB, 0xB8, 0x32, 0x4F, 0x0D, 0x78, 0x82, 0xE5,
                                0xD0, 0x76, 0x2F, 0xC5, 0xB7, 0x21, 0x0E, 0xAF, 0xC2, 0xE9, 0xAD, 0xAC, 0x32, 0xAB, 0x7A, 0xAC,
                                0x49, 0x69, 0x3D, 0xFB, 0xF8, 0x37, 0x24, 0xC2, 0xEC, 0x07, 0x36, 0xEE, 0x31, 0xC8, 0x02, 0x91},
                        64,
                        {0xC7, 0x73, 0x21, 0x8C, 0x73, 0x7E, 0xC8, 0xEE, 0x99, 0x3B, 0x4F, 0x2D, 0xED, 0x30, 0xF4, 0x8E,
                                0xDA, 0xCE, 0x91, 0x5F},
                        20,
                        {0x62, 0x6D, 0x02, 0x78, 0x39, 0xEA, 0x0A, 0x13, 0x41, 0x31, 0x63, 0xA5, 0x5B, 0x4C, 0xB5, 0x00,
                                0x29, 0x9D, 0x55, 0x22, 0x95, 0x6C, 0xEF, 0xCB, 0x3B, 0xFF, 0x10, 0xF3, 0x99, 0xCE, 0x2C, 0x2E,
                                0x71, 0xCB, 0x9D, 0xE5, 0xFA, 0x24, 0xBA, 0xBF, 0x58, 0xE5, 0xB7, 0x95, 0x21, 0x92, 0x5C, 0x9C,
                                0xC4, 0x2E, 0x9F, 0x6F, 0x46, 0x4B, 0x08, 0x8C, 0xC5, 0x72, 0xAF, 0x53, 0xE6, 0xD7, 0x88, 0x02},
                        64,
                        {0x20, 0x70, 0xB3, 0x22, 0x3D, 0xBA, 0x37, 0x2F, 0xDE, 0x1C, 0x0F, 0xFC, 0x7B, 0x2E, 0x3B, 0x49,
                                0x8B, 0x26, 0x06, 0x14},
                        20,
                        {0x19, 0x13, 0x18, 0x71, 0xD7, 0x5B, 0x16, 0x12, 0xA8, 0x19, 0xF2, 0x9D, 0x78, 0xD1, 0xB0, 0xD7,
                                0x34, 0x6F, 0x7A, 0xA7, 0x7B, 0xB6, 0x2A, 0x85, 0x9B, 0xFD, 0x6C, 0x56, 0x75, 0xDA, 0x9D, 0x21,
                                0x2D, 0x3A, 0x36, 0xEF, 0x16, 0x72, 0xEF, 0x66, 0x0B, 0x8C, 0x7C, 0x25, 0x5C, 0xC0, 0xEC, 0x74,
                                0x85, 0x8F, 0xBA, 0x33, 0xF4, 0x4C, 0x06, 0x69, 0x96, 0x30, 0xA7, 0x6B, 0x03, 0x0E, 0xE3, 0x33},
                        64,
                        "abc",
                        3,
                        {0x35, 0x8D, 0xAD, 0x57, 0x14, 0x62, 0x71, 0x0F, 0x50, 0xE2, 0x54, 0xCF, 0x1A, 0x37, 0x6B, 0x2B,
                                0xDE, 0xAA, 0xDF, 0xBF},
                        20,
                        {0x8B, 0xAC, 0x1A, 0xB6, 0x64, 0x10, 0x43, 0x5C, 0xB7, 0x18, 0x1F, 0x95, 0xB1, 0x6A, 0xB9, 0x7C,
                                0x92, 0xB3, 0x41, 0xC0},
                        20,
                        {0x41, 0xE2, 0x34, 0x5F, 0x1F, 0x56, 0xDF, 0x24, 0x58, 0xF4, 0x26, 0xD1, 0x55, 0xB4, 0xBA, 0x2D,
                                0xB6, 0xDC, 0xD8, 0xC8},
                        20,
                        "valid"},

                {"DSA 1024 bits, SHA-1",
                        SHA1_HASH_ALGO,
                        {0x86, 0xF5, 0xCA, 0x03, 0xDC, 0xFE, 0xB2, 0x25, 0x06, 0x3F, 0xF8, 0x30, 0xA0, 0xC7, 0x69, 0xB9,
                                0xDD, 0x9D, 0x61, 0x53, 0xAD, 0x91, 0xD7, 0xCE, 0x27, 0xF7, 0x87, 0xC4, 0x32, 0x78, 0xB4, 0x47,
                                0xE6, 0x53, 0x3B, 0x86, 0xB1, 0x8B, 0xED, 0x6E, 0x8A, 0x48, 0xB7, 0x84, 0xA1, 0x4C, 0x25, 0x2C,
                                0x5B, 0xE0, 0xDB, 0xF6, 0x0B, 0x86, 0xD6, 0x38, 0x5B, 0xD2, 0xF1, 0x2F, 0xB7, 0x63, 0xED, 0x88,
                                0x73, 0xAB, 0xFD, 0x3F, 0x5B, 0xA2, 0xE0, 0xA8, 0xC0, 0xA5, 0x90, 0x82, 0xEA, 0xC0, 0x56, 0x93,
                                0x5E, 0x52, 0x9D, 0xAF, 0x7C, 0x61, 0x04, 0x67, 0x89, 0x9C, 0x77, 0xAD, 0xED, 0xFC, 0x84, 0x6C,
                                0x88, 0x18, 0x70, 0xB7, 0xB1, 0x9B, 0x2B, 0x58, 0xF9, 0xBE, 0x05, 0x21, 0xA1, 0x70, 0x02, 0xE3,
                                0xBD, 0xD6, 0xB8, 0x66, 0x85, 0xEE, 0x90, 0xB3, 0xD9, 0xA1, 0xB0, 0x2B, 0x78, 0x2B, 0x17, 0x79},
                        128,
                        {0x99, 0x6F, 0x96, 0x7F, 0x6C, 0x8E, 0x38, 0x8D, 0x9E, 0x28, 0xD0, 0x1E, 0x20, 0x5F, 0xBA, 0x95,
                                0x7A, 0x56, 0x98, 0xB1},
                        20,
                        {0x07, 0xB0, 0xF9, 0x25, 0x46, 0x15, 0x0B, 0x62, 0x51, 0x4B, 0xB7, 0x71, 0xE2, 0xA0, 0xC0, 0xCE,
                                0x38, 0x7F, 0x03, 0xBD, 0xA6, 0xC5, 0x6B, 0x50, 0x52, 0x09, 0xFF, 0x25, 0xFD, 0x3C, 0x13, 0x3D,
                                0x89, 0xBB, 0xCD, 0x97, 0xE9, 0x04, 0xE0, 0x91, 0x14, 0xD9, 0xA7, 0xDE, 0xFD, 0xEA, 0xDF, 0xC9,
                                0x07, 0x8E, 0xA5, 0x44, 0xD2, 0xE4, 0x01, 0xAE, 0xEC, 0xC4, 0x0B, 0xB9, 0xFB, 0xBF, 0x78, 0xFD,
                                0x87, 0x99, 0x5A, 0x10, 0xA1, 0xC2, 0x7C, 0xB7, 0x78, 0x9B, 0x59, 0x4B, 0xA7, 0xEF, 0xB5, 0xC4,
                                0x32, 0x6A, 0x9F, 0xE5, 0x9A, 0x07, 0x0E, 0x13, 0x6D, 0xB7, 0x71, 0x75, 0x46, 0x4A, 0xDC, 0xA4,
                                0x17, 0xBE, 0x5D, 0xCE, 0x2F, 0x40, 0xD1, 0x0A, 0x46, 0xA3, 0xA3, 0x94, 0x3F, 0x26, 0xAB, 0x7F,
                                0xD9, 0xC0, 0x39, 0x8F, 0xF8, 0xC7, 0x6E, 0xE0, 0xA5, 0x68, 0x26, 0xA8, 0xA8, 0x8F, 0x1D, 0xBD},
                        128,
                        {0x41, 0x16, 0x02, 0xCB, 0x19, 0xA6, 0xCC, 0xC3, 0x44, 0x94, 0xD7, 0x9D, 0x98, 0xEF, 0x1E, 0x7E,
                                0xD5, 0xAF, 0x25, 0xF7},
                        20,
                        {0x5D, 0xF5, 0xE0, 0x1D, 0xED, 0x31, 0xD0, 0x29, 0x7E, 0x27, 0x4E, 0x16, 0x91, 0xC1, 0x92, 0xFE,
                                0x58, 0x68, 0xFE, 0xF9, 0xE1, 0x9A, 0x84, 0x77, 0x64, 0x54, 0xB1, 0x00, 0xCF, 0x16, 0xF6, 0x53,
                                0x92, 0x19, 0x5A, 0x38, 0xB9, 0x05, 0x23, 0xE2, 0x54, 0x2E, 0xE6, 0x18, 0x71, 0xC0, 0x44, 0x0C,
                                0xB8, 0x7C, 0x32, 0x2F, 0xC4, 0xB4, 0xD2, 0xEC, 0x5E, 0x1E, 0x7E, 0xC7, 0x66, 0xE1, 0xBE, 0x8D,
                                0x4C, 0xE9, 0x35, 0x43, 0x7D, 0xC1, 0x1C, 0x3C, 0x8F, 0xD4, 0x26, 0x33, 0x89, 0x33, 0xEB, 0xFE,
                                0x73, 0x9C, 0xB3, 0x46, 0x5F, 0x4D, 0x36, 0x68, 0xC5, 0xE4, 0x73, 0x50, 0x82, 0x53, 0xB1, 0xE6,
                                0x82, 0xF6, 0x5C, 0xBD, 0xC4, 0xFA, 0xE9, 0x3C, 0x2E, 0xA2, 0x12, 0x39, 0x0E, 0x54, 0x90, 0x5A,
                                0x86, 0xE2, 0x22, 0x31, 0x70, 0xB4, 0x4E, 0xAA, 0x7D, 0xA5, 0xDD, 0x9F, 0xFC, 0xFB, 0x7F, 0x3B},
                        128,
                        "sample",
                        6,
                        {0x7B, 0xDB, 0x6B, 0x0F, 0xF7, 0x56, 0xE1, 0xBB, 0x5D, 0x53, 0x58, 0x3E, 0xF9, 0x79, 0x08, 0x2F,
                                0x9A, 0xD5, 0xBD, 0x5B},
                        20,
                        {0x2E, 0x1A, 0x0C, 0x25, 0x62, 0xB2, 0x91, 0x2C, 0xAA, 0xF8, 0x91, 0x86, 0xFB, 0x0F, 0x42, 0x00,
                                0x15, 0x85, 0xDA, 0x55},
                        20,
                        {0x29, 0xEF, 0xB6, 0xB0, 0xAF, 0xF2, 0xD7, 0xA6, 0x8E, 0xB7, 0x0C, 0xA3, 0x13, 0x02, 0x22, 0x53,
                                0xB9, 0xA8, 0x8D, 0xF5},
                        20,
                        "valid"},

                {"DSA 2048 bits, SHA-256",
                        SHA256_HASH_ALGO,
                        {0x9D, 0xB6, 0xFB, 0x59, 0x51, 0xB6, 0x6B, 0xB6, 0xFE, 0x1E, 0x14, 0x0F, 0x1D, 0x2C, 0xE5, 0x50,
                                0x23, 0x74, 0x16, 0x1F, 0xD6, 0x53, 0x8D, 0xF1, 0x64, 0x82, 0x18, 0x64, 0x2F, 0x0B, 0x5C, 0x48,
                                0xC8, 0xF7, 0xA4, 0x1A, 0xAD, 0xFA, 0x18, 0x73, 0x24, 0xB8, 0x76, 0x74, 0xFA, 0x18, 0x22, 0xB0,
                                0x0F, 0x1E, 0xCF, 0x81, 0x36, 0x94, 0x3D, 0x7C, 0x55, 0x75, 0x72, 0x64, 0xE5, 0xA1, 0xA4, 0x4F,
                                0xFE, 0x01, 0x2E, 0x99, 0x36, 0xE0, 0x0C, 0x1D, 0x3E, 0x93, 0x10, 0xB0, 0x1C, 0x7D, 0x17, 0x98,
                                0x05, 0xD3, 0x05, 0x8B, 0x2A, 0x9F, 0x4B, 0xB6, 0xF9, 0x71, 0x6B, 0xFE, 0x61, 0x17, 0xC6, 0xB5,
                                0xB3, 0xCC, 0x4D, 0x9B, 0xE3, 0x41, 0x10, 0x4A, 0xD4, 0xA8, 0x0A, 0xD6, 0xC9, 0x4E, 0x00, 0x5F,
                                0x4B, 0x99, 0x3E, 0x14, 0xF0, 0x91, 0xEB, 0x51, 0x74, 0x3B, 0xF3, 0x30, 0x50, 0xC3, 0x8D, 0xE2,
                                0x35, 0x56, 0x7E, 0x1B, 0x34, 0xC3, 0xD6, 0xA5, 0xC0, 0xCE, 0xAA, 0x1A, 0x0F, 0x36, 0x82, 0x13,
                                0xC3, 0xD1, 0x98, 0x43, 0xD0, 0xB4, 0xB0, 0x9D, 0xCB, 0x9F, 0xC7, 0x2D, 0x39, 0xC8, 0xDE, 0x41,
                                0xF1, 0xBF, 0x14, 0xD4, 0xBB, 0x45, 0x63, 0xCA, 0x28, 0x37, 0x16, 0x21, 0xCA, 0xD3, 0x32, 0x4B,
                                0x6A, 0x2D, 0x39, 0x21, 0x45, 0xBE, 0xBF, 0xAC, 0x74, 0x88, 0x05, 0x23, 0x6F, 0x5C, 0xA2, 0xFE,
                                0x92, 0xB8, 0x71, 0xCD, 0x8F, 0x9C, 0x36, 0xD3, 0x29, 0x2B, 0x55, 0x09, 0xCA, 0x8C, 0xAA, 0x77,
                                0xA2, 0xAD, 0xFC, 0x7B, 0xFD, 0x77, 0xDD, 0xA6, 0xF7, 0x11, 0x25, 0xA7, 0x45, 0x6F, 0xEA, 0x15,
                                0x3E, 0x43, 0x32, 0x56, 0xA2, 0x26, 0x1C, 0x6A, 0x06, 0xED, 0x36, 0x93, 0x79, 0x7E, 0x79, 0x95,
                                0xFA, 0xD5, 0xAA, 0xBB, 0xCF, 0xBE, 0x3E, 0xDA, 0x27, 0x41, 0xE3, 0x75, 0x40, 0x4A, 0xE2, 0x5B},
                        256,
                        {0xF2, 0xC3, 0x11, 0x93, 0x74, 0xCE, 0x76, 0xC9, 0x35, 0x69, 0x90, 0xB4, 0x65, 0x37, 0x4A, 0x17,
                                0xF2, 0x3F, 0x9E, 0xD3, 0x50, 0x89, 0xBD, 0x96, 0x9F, 0x61, 0xC6, 0xDD, 0xE9, 0x99, 0x8C, 0x1F},
                        32,
                        {
                         0x5C,
                               0x7F,
                                     0xF6,
                                           0xB0,
                                                 0x6F,
                                                       0x8F,
                                                             0x14,
                                                                   0x3F,
                                                                         0xE8,
                                                                               0x28,
                                                                                     0x84,
                                                                                           0x33,
                                                                                                 0x49,
                                                                                                       0x3E,
                                                                                                             0x47,
                                                                                                                   0x69,
                                0xC4,
                                      0xD9,
                                            0x88,
                                                  0xAC,
                                                        0xE5,
                                                              0xBE,
                                                                    0x25,
                                                                          0xA0,
                                                                                0xE2,
                                                                                      0x48,
                                                                                            0x09,
                                                                                                  0x67,
                                                                                                        0x07,
                                                                                                              0x16,
                                                                                                                    0xC6,
                                                                                                                          0x13,
                                0xD7,
                                      0xB0,
                                            0xCE,
                                                  0xE6,
                                                        0x93,
                                                              0x2F,
                                                                    0x8F,
                                                                          0xAA,
                                                                                0x7C,
                                                                                      0x44,
                                                                                            0xD2,
                                                                                                  0xCB,
                                                                                                        0x24,
                                                                                                              0x52,
                                                                                                                    0x3D,
                                                                                                                          0xA5,
                                0x3F,
                                      0xBE,
                                            0x4F,
                                                  0x6E,
                                                        0xC3,
                                                              0x59,
                                                                    0x58,
                                                                          0x92,
                                                                                0xD1,
                                                                                      0xAA,
                                                                                            0x58,
                                                                                                  0xC4,
                                                                                                        0x32,
                                                                                                              0x8A,
                                                                                                                    0x06,
                                                                                                                          0xC4,
                                0x6A,
                                      0x15,
                                            0x66,
                                                  0x2E,
                                                        0x7E,
                                                              0xAA,
                                                                    0x70,
                                                                          0x3A,
                                                                                0x1D,
                                                                                      0xEC,
                                                                                            0xF8,
                                                                                                  0xBB,
                                                                                                        0xB2,
                                                                                                              0xD0,
                                                                                                                    0x5D,
                                                                                                                          0xBE,
                                0x2E,
                                      0xB9,
                                            0x56,
                                                  0xC1,
                                                        0x42,
                                                              0xA3,
                                                                    0x38,
                                                                          0x66,
                                                                                0x1D,
                                                                                      0x10,
                                                                                            0x46,
                                                                                                  0x1C,
                                                                                                        0x0D,
                                                                                                              0x13,
                                                                                                                    0x54,
                                                                                                                          0x72,
                                0x08,
                                      0x50,
                                            0x57,
                                                  0xF3,
                                                        0x49,
                                                              0x43,
                                                                    0x09,
                                                                          0xFF,
                                                                                0xA7,
                                                                                      0x3C,
                                                                                            0x61,
                                                                                                  0x1F,
                                                                                                        0x78,
                                                                                                              0xB3,
                                                                                                                    0x2A,
                                                                                                                          0xDB,
                                0xB5,
                                      0x74,
                                            0x0C,
                                                  0x36,
                                                        0x1C,
                                                              0x9F,
                                                                    0x35,
                                                                          0xBE,
                                                                                0x90,
                                                                                      0x99,
                                                                                            0x7D,
                                                                                                  0xB2,
                                                                                                        0x01,
                                                                                                              0x4E,
                                                                                                                    0x2E,
                                                                                                                          0xF5,
                                0xAA,
                                0x61,
                                0x78,
                                0x2F,
                                0x52,
                                0xAB,
                                0xEB,
                                0x8B,
                                0xD6,
                                0x43,
                                0x2C,
                                0x4D,
                                0xD0,
                                0x97,
                                0xBC,
                                0x54,
                                0x23,
                                0xB2,
                                0x85,
                                0xDA,
                                0xFB,
                                0x60,
                                0xDC,
                                0x36,
                                0x4E,
                                0x81,
                                0x61,
                                0xF4,
                                0xA2,
                                0xA3,
                                0x5A,
                                0xCA,
                                0x3A,
                                0x10,
                                0xB1,
                                0xC4,
                                0xD2,
                                0x03,
                                0xCC,
                                0x76,
                                0xA4,
                                0x70,
                                0xA3,
                                0x3A,
                                0xFD,
                                0xCB,
                                0xDD,
                                0x92,
                                0x95,
                                0x98,
                                0x59,
                                0xAB,
                                0xD8,
                                0xB5,
                                0x6E,
                                0x17,
                                0x25,
                                0x25,
                                0x2D,
                                0x78,
                                0xEA,
                                0xC6,
                                0x6E,
                                0x71,
                                0xBA,
                                0x9A,
                                0xE3,
                                0xF1,
                                0xDD,
                                0x24,
                                0x87,
                                0x19,
                                0x98,
                                0x74,
                                0x39,
                                0x3C,
                                0xD4,
                                0xD8,
                                0x32,
                                0x18,
                                0x68,
                                0x00,
                                0x65,
                                0x47,
                                0x60,
                                0xE1,
                                0xE3,
                                0x4C,
                                0x09,
                                0xE4,
                                0xD1,
                                0x55,
                                0x17,
                                0x9F,
                                0x9E,
                                0xC0,
                                0xDC,
                                0x44,
                                0x73,
                                0xF9,
                                0x96,
                                0xBD,
                                0xCE,
                                0x6E,
                                0xED,
                                0x1C,
                                0xAB,
                                0xED,
                                0x8B,
                                0x6F,
                                0x11,
                                0x6F,
                                0x7A,
                                0xD9,
                                0xCF,
                                0x50,
                                0x5D,
                                0xF0,
                                0xF9,
                                0x98,
                                0xE3,
                                0x4A,
                                0xB2,
                                0x75,
                                0x14,
                                0xB0,
                                0xFF,
                                0xE7,
                        },
                        256,
                        {0x69, 0xC7, 0x54, 0x8C, 0x21, 0xD0, 0xDF, 0xEA, 0x6B, 0x9A, 0x51, 0xC9, 0xEA, 0xD4, 0xE2, 0x7C,
                                0x33, 0xD3, 0xB3, 0xF1, 0x80, 0x31, 0x6E, 0x5B, 0xCA, 0xB9, 0x2C, 0x93, 0x3F, 0x0E, 0x4D, 0xBC},
                        32,
                        {0x66, 0x70, 0x98, 0xC6, 0x54, 0x42, 0x6C, 0x78, 0xD7, 0xF8, 0x20, 0x1E, 0xAC, 0x6C, 0x20, 0x3E,
                                0xF0, 0x30, 0xD4, 0x36, 0x05, 0x03, 0x2C, 0x2F, 0x1F, 0xA9, 0x37, 0xE5, 0x23, 0x7D, 0xBD, 0x94,
                                0x9F, 0x34, 0xA0, 0xA2, 0x56, 0x4F, 0xE1, 0x26, 0xDC, 0x8B, 0x71, 0x5C, 0x51, 0x41, 0x80, 0x2C,
                                0xE0, 0x97, 0x9C, 0x82, 0x46, 0x46, 0x3C, 0x40, 0xE6, 0xB6, 0xBD, 0xAA, 0x25, 0x13, 0xFA, 0x61,
                                0x17, 0x28, 0x71, 0x6C, 0x2E, 0x4F, 0xD5, 0x3B, 0xC9, 0x5B, 0x89, 0xE6, 0x99, 0x49, 0xD9, 0x65,
                                0x12, 0xE8, 0x73, 0xB9, 0xC8, 0xF8, 0xDF, 0xD4, 0x99, 0xCC, 0x31, 0x28, 0x82, 0x56, 0x1A, 0xDE,
                                0xCB, 0x31, 0xF6, 0x58, 0xE9, 0x34, 0xC0, 0xC1, 0x97, 0xF2, 0xC4, 0xD9, 0x6B, 0x05, 0xCB, 0xAD,
                                0x67, 0x38, 0x1E, 0x7B, 0x76, 0x88, 0x91, 0xE4, 0xDA, 0x38, 0x43, 0xD2, 0x4D, 0x94, 0xCD, 0xFB,
                                0x51, 0x26, 0xE9, 0xB8, 0xBF, 0x21, 0xE8, 0x35, 0x8E, 0xE0, 0xE0, 0xA3, 0x0E, 0xF1, 0x3F, 0xD6,
                                0xA6, 0x64, 0xC0, 0xDC, 0xE3, 0x73, 0x1F, 0x7F, 0xB4, 0x9A, 0x48, 0x45, 0xA4, 0xFD, 0x82, 0x54,
                                0x68, 0x79, 0x72, 0xA2, 0xD3, 0x82, 0x59, 0x9C, 0x9B, 0xAC, 0x4E, 0x0E, 0xD7, 0x99, 0x81, 0x93,
                                0x07, 0x89, 0x13, 0x03, 0x25, 0x58, 0x13, 0x49, 0x76, 0x41, 0x0B, 0x89, 0xD2, 0xC1, 0x71, 0xD1,
                                0x23, 0xAC, 0x35, 0xFD, 0x97, 0x72, 0x19, 0x59, 0x7A, 0xA7, 0xD1, 0x5C, 0x1A, 0x9A, 0x42, 0x8E,
                                0x59, 0x19, 0x4F, 0x75, 0xC7, 0x21, 0xEB, 0xCB, 0xCF, 0xAE, 0x44, 0x69, 0x6A, 0x49, 0x9A, 0xFA,
                                0x74, 0xE0, 0x42, 0x99, 0xF1, 0x32, 0x02, 0x66, 0x01, 0x63, 0x8C, 0xB8, 0x7A, 0xB7, 0x91, 0x90,
                                0xD4, 0xA0, 0x98, 0x63, 0x15, 0xDA, 0x8E, 0xEC, 0x65, 0x61, 0xC9, 0x38, 0x99, 0x6B, 0xEA, 0xDF},
                        256,
                        "sample",
                        6,
                        {0x89, 0x26, 0xA2, 0x7C, 0x40, 0x48, 0x42, 0x16, 0xF0, 0x52, 0xF4, 0x42, 0x7C, 0xFD, 0x56, 0x47,
                                0x33, 0x8B, 0x7B, 0x39, 0x39, 0xBC, 0x65, 0x73, 0xAF, 0x43, 0x33, 0x56, 0x9D, 0x59, 0x7C, 0x52},
                        32,
                        {0xEA, 0xCE, 0x8B, 0xDB, 0xBE, 0x35, 0x3C, 0x43, 0x2A, 0x79, 0x5D, 0x9E, 0xC5, 0x56, 0xC6, 0xD0,
                                0x21, 0xF7, 0xA0, 0x3F, 0x42, 0xC3, 0x6E, 0x9B, 0xC8, 0x7E, 0x4A, 0xC7, 0x93, 0x2C, 0xC8, 0x09},
                        32,
                        {0x70, 0x81, 0xE1, 0x75, 0x45, 0x5F, 0x92, 0x47, 0xB8, 0x12, 0xB7, 0x45, 0x83, 0xE9, 0xE9, 0x4F,
                                0x9E, 0xA7, 0x9B, 0xD6, 0x40, 0xDC, 0x96, 0x25, 0x33, 0xB0, 0x68, 0x07, 0x93, 0xA3, 0x8D, 0x53},
                        32,
                        "valid"}
        };

error_t dsaTest(void) {
    error_t error;
    uint_t i;
    uint_t n;
    uint8_t digest[64];
    DsaPublicKey publicKey;
    DsaPrivateKey privateKey;
    DsaSignature refSignature;
    DsaSignature calcSignature;
    static uint8_t rawSignature[1024];
    size_t rawSignatureLen;
    PrngSimulatorContext prngContext;

    Mpi r;
    Mpi t;

    TRACE_INFO("**********************\r\n");
    TRACE_INFO("** DSA Test Suite **\r\n");
    TRACE_INFO("**********************\r\n");
    TRACE_INFO("\r\n");

    error = NO_ERROR;

    // Initialize DSA public key
    dsaInitPublicKey(&publicKey);
    // Initialize DSA private key
    dsaInitPrivateKey(&privateKey);
    // Initialize DSA signature (reference)
    dsaInitSignature(&refSignature);
    // Initialize DSA signature (calculated)
    dsaInitSignature(&calcSignature);

    // Initialize PRNG simulator
    prngSimulator.init(&prngContext);

    // Initialize multiple precision integers
    mpiInit(&r);
    mpiInit(&t);

    // Loop through test vectors
    for (i = 0; i < arraysize(dsaTestVectors); i++) {
        // Point to the current test vector
        const DsaTestVector *tv = &dsaTestVectors[i];

        // Display test name
        TRACE_INFO("Test case #%d: %s\r\n", i + 1, tv->testLabel);
        // Dump public and private keys
//        TRACE_DEBUG("  p:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->p, tv->pLen);
//        TRACE_DEBUG("  q:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->q, tv->qLen);
//        TRACE_DEBUG("  g:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->g, tv->gLen);
//        TRACE_DEBUG("  x:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->x, tv->xLen);
//        TRACE_DEBUG("  y:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->y, tv->yLen);
        // Dump message
//        TRACE_DEBUG("  m:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->m, tv->mLen);
        // Random number
//        TRACE_DEBUG("  k:\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->k, tv->kLen);
        // Dump reference DSA signature
//        TRACE_DEBUG("  Reference signature (r):\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->r, tv->rLen);
//        TRACE_DEBUG("  Reference signature (s):\r\n");
//        TRACE_DEBUG_ARRAY("    ", tv->s, tv->sLen);

        // Read DSA public key
        MPI_CHECK(mpiReadRaw(&publicKey.params.p, tv->p, tv->pLen));
        MPI_CHECK(mpiReadRaw(&publicKey.params.q, tv->q, tv->qLen));
        MPI_CHECK(mpiReadRaw(&publicKey.params.g, tv->g, tv->gLen));
        MPI_CHECK(mpiReadRaw(&publicKey.y, tv->y, tv->yLen));

        // Read DSA private key
        MPI_CHECK(mpiReadRaw(&privateKey.params.p, tv->p, tv->pLen));
        MPI_CHECK(mpiReadRaw(&privateKey.params.q, tv->q, tv->qLen));
        MPI_CHECK(mpiReadRaw(&privateKey.params.g, tv->g, tv->gLen));
        MPI_CHECK(mpiReadRaw(&privateKey.x, tv->x, tv->xLen));

        // Read DSA signature
        MPI_CHECK(mpiReadRaw(&refSignature.r, tv->r, tv->rLen));
        MPI_CHECK(mpiReadRaw(&refSignature.s, tv->s, tv->sLen));

        // Read pseudo-random number
        MPI_CHECK(mpiReadRaw(&r, tv->k, tv->kLen));

        end:
        // Any error to report?
        if (error) {
            // Test result
            TRACE_INFO("  Result:\r\n");
            TRACE_INFO("    FAILED\r\n\r\n");
            // Exit immediately
            break;
        }

        // Digest message
        error = tv->hashAlgo->compute(tv->m, tv->mLen, digest);

        // Any error to report?
        if (error) {
            // Test result
            TRACE_INFO("  Result:\r\n");
            TRACE_INFO("    FAILED\r\n\r\n");
            // Exit immediately
            break;
        }

        // Generate DSA signature?
        if (tv->kLen > 0) {
            error = mpiSubInt(&t, &r, 1);

            // Any error to report?
            if (error) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }

            // Get the length, in bytes, of the random number
            n = mpiGetByteLength(&t);
            // Initialize pseudo-random number generator
            prngSimulator.addEntropy(&prngContext, 0, (uint8_t *) t.data, n, 0);

            // DSA signature generation
            error = dsaGenerateSignature(PRNG_SIMULATOR, &prngContext,
                                         &privateKey, digest, tv->hashAlgo->digestSize, &calcSignature);

            // Any error to report?
            if (error) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }

            // Dump calculated DSA signature
//            TRACE_DEBUG("  Calculated signature (r):\r\n");
//            TRACE_DEBUG_MPI("    ", &calcSignature.r);
//            TRACE_DEBUG("  Calculated signature (s):\r\n");
//            TRACE_DEBUG_MPI("    ", &calcSignature.s);

            // Check resulting DSA signature
            if (mpiComp(&calcSignature.r, &refSignature.r) || mpiComp(&calcSignature.s, &refSignature.s)) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Report an error
                error = ERROR_FAILURE;
                // Exit immediately
                break;
            }
        }

        // Check ASN.1 DSA signature?
        if (tv->sLen == 0) {
            // Clear (R, S) integer pair
            mpiSetValue(&refSignature.r, 0);
            mpiSetValue(&refSignature.s, 0);

            // Parse ASN.1 encoded signature
            error = dsaReadSignature(tv->r, tv->rLen, &refSignature);
        } else {
            error = NO_ERROR;
        }

        // Check status code
        if (!error) {
            // DSA signature verification
            error = dsaVerifySignature(&publicKey, digest,
                                       tv->hashAlgo->digestSize, &refSignature);
        }

        // Check expected result
        if (tv->result == NULL || !strcasecmp(tv->result, "valid")) {
            // Check status code
            if (error != NO_ERROR) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }
        } else if (!strcasecmp(tv->result, "invalid")) {
            // Check status code
            if (error != ERROR_INVALID_SIGNATURE &&
                error != ERROR_INVALID_SYNTAX &&
                error != ERROR_INVALID_TAG &&
                error != ERROR_INVALID_TYPE &&
                error != ERROR_WRONG_ENCODING) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }
        } else if (!strcasecmp(tv->result, "acceptable")) {
            // Check status code
            if (error != NO_ERROR &&
                error != ERROR_INVALID_SIGNATURE &&
                error != ERROR_INVALID_SYNTAX) {
                // Report an error
                if (error == NO_ERROR)
                    error = ERROR_UNEXPECTED_RESPONSE;

                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }
        } else {
            // Test result
            TRACE_INFO("  Result:\r\n");
            TRACE_INFO("    FAILED\r\n\r\n");
            // Exit immediately
            break;
        }

        // Check status code
        if (!error) {
            // Generate ASN.1 encoded signature
            error = dsaWriteSignature(&refSignature, rawSignature, &rawSignatureLen);

            // Any error to report?
            if (error) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }

            // Clear (R, S) integer pair
            mpiSetValue(&calcSignature.r, 0);
            mpiSetValue(&calcSignature.s, 0);

            // Parse ASN.1 encoded signature
            error = dsaReadSignature(rawSignature, rawSignatureLen, &calcSignature);

            // Any error to report?
            if (error) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Exit immediately
                break;
            }

            // Check (R, S) integer pair
            if (mpiComp(&calcSignature.r, &refSignature.r) || mpiComp(&calcSignature.s, &refSignature.s)) {
                // Test result
                TRACE_INFO("  Result:\r\n");
                TRACE_INFO("    FAILED\r\n\r\n");
                // Report an error
                error = ERROR_FAILURE;
                // Exit immediately
                break;
            }
        }

        // Test result
        TRACE_INFO("  Result:\r\n");
        TRACE_INFO("    PASSED\r\n\r\n");
    }

    // Release previously allocated resources
    dsaFreePublicKey(&publicKey);
    dsaFreePrivateKey(&privateKey);
    dsaFreeSignature(&refSignature);
    dsaFreeSignature(&calcSignature);
    mpiFree(&r);
    mpiFree(&t);

    // Return status code
    return error;
}