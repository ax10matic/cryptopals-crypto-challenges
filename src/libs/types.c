#include "types.h"

BYTESTRING *new_bytestring(size_t size){
    BYTESTRING *bstr = (BYTESTRING *)malloc(sizeof(BYTESTRING));
    if(bstr == NULL){
        fprintf(stderr, "Error: cannot malloc bytestring");
        return NULL;
    }

    bstr -> size = size;
    bstr -> bytes = (uint8_t*)malloc(size);
    if(bstr -> bytes == NULL){
        fprintf(stderr, "Error: cannot malloc uint8_t*");
        return NULL;
    }
    memset(bstr -> bytes, 0, size);

    return bstr;
}

void free_bytestring(BYTESTRING *bstr){
    free(bstr -> bytes);
    free(bstr);
}