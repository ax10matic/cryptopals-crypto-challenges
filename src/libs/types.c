#include "types.h"

/* allocate memory for bytestring struct */
BYTESTRING *new_bytestring(size_t size){
    BYTESTRING *bstr = (BYTESTRING *)malloc(sizeof(BYTESTRING));
    if(bstr == NULL){
        fprintf(stderr, "Error: cannot malloc bytestring");
        return NULL;
    }

    bstr -> size = size;
    // allocate memory for uint8_t array  and initialize it to 0s 
    bstr -> bytes = (uint8_t*)malloc(size);
    if(bstr -> bytes == NULL){
        fprintf(stderr, "Error: cannot malloc uint8_t*");
        return NULL;
    }
    memset(bstr -> bytes, 0, size);

    return bstr;
}

/* free all memory allocated for bytestring struct */
void free_bytestring(BYTESTRING *bstr){
    free(bstr -> bytes);
    free(bstr);
}