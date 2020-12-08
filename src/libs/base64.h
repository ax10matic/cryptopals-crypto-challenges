#ifndef BASE64_H
#define BASE64_H

#include <stdio.h>
#include <stdlib.h>

#include "types.h"

#define BASE64_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

typedef struct{
    size_t size;
    char *b64_string;
}BASE64;

BASE64 *base64_encode(BYTESTRING *bytes_in);

#endif