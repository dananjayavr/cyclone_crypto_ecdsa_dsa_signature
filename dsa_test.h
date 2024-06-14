//
// Created by danan on 6/14/2024.
//

#ifndef _DSA_TEST_H
#define _DSA_TEST_H

#include <stdio.h>
#include <sys/random.h>
#include "core/crypto.h"
#include "pkc/dsa.h"
#include "ecc/ec.h"
#include "ecc/ec_curves.h"
#include "ecc/ecdsa.h"
#include "hash/hash_algorithms.h"
#include "debug.h"

/**
 * @brief DSA test vector
 **/

typedef struct {
    const char_t *testLabel;
    const HashAlgo *hashAlgo;
    uint8_t p[384];
    size_t pLen;
    uint8_t q[32];
    size_t qLen;
    uint8_t g[384];
    size_t gLen;
    uint8_t x[32];
    size_t xLen;
    uint8_t y[384];
    size_t yLen;
    uint8_t m[128];
    size_t mLen;
    uint8_t k[32];
    size_t kLen;
    uint8_t r[526];
    size_t rLen;
    uint8_t s[32];
    size_t sLen;
    const char_t *result;
} DsaTestVector;

error_t dsaTest(void);

#endif //_DSA_TEST_H
