#include "hex.h"


uint8_t *hex_to_bytes(char *in){
// Returns a raw byte array or NULL if the input invalid.

    uint8_t *bytes_out; 

    if(in == NULL)
        return NULL;
    
    // odd length
    size_t in_len = strlen(in);
    if((in_len % 2) != 0) 
        return NULL;

    size_t out_len = in_len / 2;
    bytes_out = malloc(out_len);
    memset(bytes_out, 0, out_len);
    
    // convert each pair of hex chars to byte 
    for(int i=0; i<in_len; i++){
        char c = in[i];
        int ascii_value = 0;
        if(c >= '0' && c <= '9')
            ascii_value = c - '0';
        else if(c >= 'A' && c <= 'F')
            ascii_value = 10 + (c - 'A');
        else if(c >= 'a' && c <= 'f')
            ascii_value = 10 + (c - 'a');
        else{
            // invalid char 
            free(bytes_out);
            return NULL;
        }
        bytes_out[i/2] += ascii_value << (((i + 1) % 2) * 4);
   }
    return bytes_out;
}