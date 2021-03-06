#ifndef POLY_R2_INV_H
#define POLY_R2_INV_H

#include "poly.h"

void poly_R2_tobytes(unsigned char *out, const poly *a);
void poly_R2_frombytes(poly *a, const unsigned char *in);

extern void square_1_509(unsigned char* out, const unsigned char* a);
extern void square_3_509(unsigned char* out, const unsigned char* a);
extern void square_6_509(unsigned char* out, const unsigned char* a);
extern void square_15_509(unsigned char* out, const unsigned char* a);
extern void square_30_509(unsigned char* out, const unsigned char* a);
extern void square_63_509(unsigned char* out, const unsigned char* a);
extern void square_126_509(unsigned char* out, const unsigned char* a);
extern void square_252_509(unsigned char* out, const unsigned char* a);
extern void poly_R2_mul(unsigned char* out, const unsigned char* a,
                                            const unsigned char* b);

int poly_R2_inv(poly *r, const poly *a);

#endif
