#include <stdio.h>

int main(){
    double pie = 3.1423346; // double is a data type which is used to initialize decimal value to a variable but it takes 8 byte and float take 4 byte 
    printf("%lf\n", pie); // "%lf" is a format specifier for double data type and \n is a escape sequence character
    printf("%.2lf", pie); // "%.2lf" is also a format specifier but it returns value with two position after decimal 

    return 0;
}

// Output : 

// 3.142335
// 3.14

// Double: Larger, more precise, preferred for high-precision calculations, scientific computations, and finance.