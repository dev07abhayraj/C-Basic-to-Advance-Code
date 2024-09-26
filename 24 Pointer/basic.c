#include <stdio.h>

int main(){
    unsigned long num = 65;
    unsigned long *number = &num;
    printf("%p\n", number);
    printf("%lu\n", number);

    return 0;
}

// Output : 

// 0x16d8e6f18
// 1869426456