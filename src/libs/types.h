#ifndef TYPES_H
#define TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct bytestring{
    size_t size;
    uint8_t *bytes;
}BYTESTRING;

BYTESTRING *new_bytestring(size_t size);

void        print_bytestring(BYTESTRING *bstr);

void        free_bytestring(BYTESTRING *bstr);

#endif