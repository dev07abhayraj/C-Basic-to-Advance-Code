#include <stdio.h>

int main(){
    float pie = 3.14; // float is a data type which is used to initialize decimal value to a variable 
    printf("%f\n", pie); // "%f" is a format specifier for float data type and \n is a escape sequence character
    printf("%.2f", pie); // "%.2f" is also a format specifier but it returns value with two position after decimal 

    return 0;
}

// Output : 

// 3.140000 
// 3.14

// Float: Smaller, less precise, faster for simple operations, often used in graphics and applications where precision isn't critical.