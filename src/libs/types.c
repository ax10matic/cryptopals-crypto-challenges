#include "types.h"

BYTESTRING *new_bytestring(size_t size){
    BYTESTRING *bstr = (BYTESTRING *)malloc(sizeof(BYTESTRING));
    bstr -> size = size;
    bstr -> bytes = (uint8_t*)malloc(size);
    memset(bstr -> bytes, 0, size);
    return bstr;
}

void free_bytestring(BYTESTRING *bstr){
    free(bstr -> bytes);
    free(bstr);
}