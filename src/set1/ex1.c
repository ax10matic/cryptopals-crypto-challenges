/*
CONVERT HEX TO BASE64

The string:

49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d

Should produce:

SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t

So go ahead and make that happen. You'll need to use this code for the rest of the exercises.
Cryptopals Rule

Always operate on raw bytes, never on encoded strings. Only use hex and base64 for pretty-printing.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../lib/base64.h"
#include "../../lib/hex.h"

#define EXPECTED "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t"

int main(){
    char hex_in[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

    char *ascii_in = NULL;
    char *base64_out = NULL;
   
    // convert hex input string to ascii string 
    size_t ascii_len = hex_to_ascii(hex_in, &ascii_in);

    base64_encode(ascii_in, ascii_len, &base64_out);

    printf("Base64 encoded output: %s\n", base64_out);

    // test
    if(strcmp(base64_out, EXPECTED) == 0)
        printf("Expected results.");
    else
        printf("The output doesn't correpond to the expected one.");
    
    free(ascii_in);
    free(base64_out);

    exit(EXIT_SUCCESS);
}