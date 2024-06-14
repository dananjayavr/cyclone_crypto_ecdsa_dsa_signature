//
// Created by danan on 6/14/2024.
//

#ifndef _ECDSA_TEST_H
#define _ECDSA_TEST_H

#include <stdio.h>
#include <sys/random.h>
#include "core/crypto.h"
#include "hash/sha1.h"
#include "hash/sha256.h"
#include "hash/sha384.h"
#include "hash/sha512.h"
#include "ecc/ec.h"
#include "ecc/ecdsa.h"
#include "ecc/ec_curves.h"
#include "debug.h"

/**
 * @brief ECDSA test vector
 **/

typedef struct {
    const char_t *testLabel;
    const EcCurveInfo *params;
    const HashAlgo *hashAlgo;
    uint8_t x[68];
    size_t xLen;
    uint8_t qx[68];
    size_t qxLen;
    uint8_t qy[68];
    size_t qyLen;
    uint8_t m[68];
    size_t mLen;
    uint8_t k[68];
    size_t kLen;
    uint8_t r[68];
    size_t rLen;
    uint8_t s[68];
    size_t sLen;
} EcdsaTestVector;

error_t ecdsaTest(void);

#endif //_ECDSA_TEST_H
