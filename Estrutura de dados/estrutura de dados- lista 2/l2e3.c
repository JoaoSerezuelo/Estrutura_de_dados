#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    //printf("\n%d\n", &q); só tirei o "&"" e coloquei o "**"
    printf("\n%d\n", **q);
    return(0);
}
