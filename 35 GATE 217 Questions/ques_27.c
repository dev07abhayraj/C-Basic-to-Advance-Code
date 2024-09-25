#include <stdio.h>

int incre(int i){
    static int count = 0;
    count += i;
    return count;
}

int main(){
    int i, j;
    for (i = 0; i <= 4; i++){
        j = incre(i);
        printf("j = %d\n", j); // Print the value of j after each increment
    }
    return 0; // It's good practice to return a value from main
}
