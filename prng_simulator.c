/**
 * @file prng simulator.c
 * @brief PRNG simulator
 *
 * @section License
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (C) 2010-2020 Oryx Embedded SARL. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 2.0.0
 **/

//Dependencies
#include "core/crypto.h"
#include "prng_simulator.h"


const PrngAlgo prngSimulator =
{
   "PRNG SIMULATOR",
   sizeof(PrngSimulatorContext),
   (PrngAlgoInit) prngSimulatorInit,
   (PrngAlgoRelease) prngSimulatorRelease,
   (PrngAlgoSeed) prngSimulatorSeed,
   (PrngAlgoAddEntropy) prngSimulatorAddEntropy,
   (PrngAlgoRead) prngSimulatorRead
};


PrngSimulatorContext prngContext;


error_t prngSimulatorInit(PrngSimulatorContext *context)
{
   context->buffer = NULL;
   context->length = 0;
   context->index = 0;

   return NO_ERROR;
}


void prngSimulatorRelease(PrngSimulatorContext *context)
{

}


error_t prngSimulatorSeed(PrngSimulatorContext *context, const uint8_t *input, size_t length)
{
   return NO_ERROR;
}


error_t prngSimulatorAddEntropy(PrngSimulatorContext *context, uint_t source,
   const uint8_t *input, size_t length, size_t entropy)
{
   context->buffer = input;
   context->length = length;
   context->index = 0;

   return NO_ERROR;
}


error_t prngSimulatorRead(PrngSimulatorContext *context, uint8_t *output, size_t length)
{
   while(length > 0)
   {
      if(context->index < context->length)
      {
         *(output++) = context->buffer[context->index++];
      }
      else
      {
         *(output++) = 0;
      }

      length--;
   }

   return NO_ERROR;
}
