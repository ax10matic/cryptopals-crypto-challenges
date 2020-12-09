#ifndef BASE64_H
#define BASE64_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

#define BASE64_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

typedef struct base64{
    size_t size;
    char *b64_str;
}BASE64;

BASE64 *base64_encode(BYTESTRING*bytes_in);

BASE64 *new_base64(size_t size);

void    free_base64(BASE64 *b64);
#endif