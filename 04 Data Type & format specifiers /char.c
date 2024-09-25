#include <stdio.h>

int main(){
    char name = 'A';  // char is a data type and we have to mention it before declaring each variable
    printf("%c", name); // "%c" is a format specifier used to print character value 
    printf("%d", name); // return 65 as it is the ASCII value of 'A'
    return 0;
}

// Output : A65

// char stores alpahabet from a to z and A to Z 
// it also return ascii value 