#include <stdio.h>

int func(int i) {
    printf("i = [%d]\n",i);
    return(0);
}

int main(int argc, char** argv) {
    int i;

    printf("Hello World in C\n");

    i = 9;
    func(i);
    
    return(0);
}
