/* MD5.H - header file for MD5C.C
 */

 /* Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
 rights reserved.

 License to copy and use this software is granted provided that it
 is identified as the "RSA Data Security, Inc. MD5 Message-Digest
 Algorithm" in all material mentioning or referencing this software
 or this function.

 License is also granted to make and use derivative works provided
 that such works are identified as "derived from the RSA Data
 Security, Inc. MD5 Message-Digest Algorithm" in all material
 mentioning or referencing the derived work.

 RSA Data Security, Inc. makes no representations concerning either
 the merchantability of this software or the suitability of this
 software for any particular purpose. It is provided "as is"
 without express or implied warranty of any kind.

 These notices must be retained in any copies of any part of this
 documentation and/or software.
  */
#ifndef MD5_H
#define MD5_H
#include <stdint.h>

#define MD5_DIGEST_LENGTH 16
#ifdef  __cplusplus
extern "C" {
#endif
	/* MD5 context. */
	typedef struct MD5_Context {
		uint32_t state[4];                                   /* state (ABCD) */
		uint32_t count[2];        /* number of bits, modulo 2^64 (lsb first) */
		unsigned char buffer[64];                         /* input buffer */
	} MD5_Context;

	void MD5Init(MD5_Context*);
	void MD5Update(MD5_Context*, const void*, size_t);
	void MD5Final(unsigned char[16], MD5_Context*);
#ifdef  __cplusplus
}
#endif

#define MD5_Init MD5Init
#define MD5_Update MD5Update
#define MD5_Final MD5Final
#define MD5_CTX MD5_Context
#endif /* MD5_H */
