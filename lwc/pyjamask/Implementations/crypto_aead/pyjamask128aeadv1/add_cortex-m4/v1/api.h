/*
  ===============================================================================

 Copyright (c) 2019, CryptoExperts and PQShield Ltd.
 
 All rights reserved. A copyright license for redistribution and use in
 source and binary forms, with or without modification, is hereby granted for
 non-commercial, experimental, research, public review and evaluation
 purposes, provided that the following conditions are met:
 
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.

  Authors: Dahmun Goudarzi, Matthieu Rivain

  ===============================================================================
*/


#ifndef _API_H_
#define _API_H_

#include "random.h"
#include "param.h"

void masked_pyjamask_96_enc (const unsigned char *plaintext,   const unsigned char masked_key[MASKING_ORDER][16], unsigned char *ciphertext);
void masked_pyjamask_96_dec (const unsigned char *ciphertext,  const unsigned char masked_key[MASKING_ORDER][16], unsigned char *plaintext );

void masked_pyjamask_128_enc (const unsigned char *plaintext,  const unsigned char masked_key[MASKING_ORDER][16], unsigned char *ciphertext);
void masked_pyjamask_128_dec (const unsigned char *ciphertext, const unsigned char masked_key[MASKING_ORDER][16], unsigned char *plaintext );

#endif /* _API_H_ */
