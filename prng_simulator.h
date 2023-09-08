//Dependencies
#include "core/crypto.h"


extern const PrngAlgo prngSimulator;
#define PRNG_SIMULATOR (&prngSimulator)


typedef struct
{
   const uint8_t *buffer;
   size_t length;
   size_t index;
} PrngSimulatorContext;


error_t prngSimulatorInit(PrngSimulatorContext *context);
void prngSimulatorRelease(PrngSimulatorContext *context);
error_t prngSimulatorSeed(PrngSimulatorContext *context, const uint8_t *input, size_t length);

error_t prngSimulatorAddEntropy(PrngSimulatorContext *context, uint_t source,
   const uint8_t *input, size_t length, size_t entropy);

error_t prngSimulatorRead(PrngSimulatorContext *context, uint8_t *output, size_t length);
