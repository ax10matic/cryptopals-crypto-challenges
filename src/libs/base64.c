#include "base64.h"

BASE64 *base64_encode(BYTESTRING *bytes_in){
    printf("%d\n", strlen(bytes_in));
}

BASE64 *new_base64(size_t size){
    BASE64 *b64 = (BASE64*)malloc(sizeof(BASE64));
    if(b64 == NULL){
        fprintf(stderr, "Error: cannot malloc b64");
        return NULL;
    }

    b64 -> size = size; 
    b64 -> b64_str = (char*)malloc(size);
    if(b64 -> b64_str == NULL){
        fprintf(stderr, "Error: cannot malloc b64_str");
        return NULL;
    }
    memset(b64 -> b64_str, 0, size);

    return b64;
}