#include <stdio.h>

int main() {
    enum week {
        Monday, 
        Tuesday, 
        Wednesday, 
        Thursday, 
        Friday, 
        Saturday, 
    };
    enum week d;
    d = Saturday;
    printf("%d",d);

    return 0;
}
