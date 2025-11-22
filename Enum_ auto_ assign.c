#include <stdio.h>

enum bts { 
    RM=1, 
    V, 
    JK, 
    Jhope, 
    Jimin, 
    Suga, 
};

int main() {
    enum bts m = V;
    
    printf("Name : %d", m);

    return 0;
}
