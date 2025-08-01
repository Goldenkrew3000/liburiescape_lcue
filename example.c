#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lcue.h"

int main() {
    char* original_string = "Hello world!";
    unsigned int original_string_length = strlen(original_string);
    char* encoded_string = lcue_uriescape(original_string, original_string_length);
    printf("Encoded String: %s\n", encoded_string); // Hello%20World%21
    free(encoded_string);
    return 0;
}
