#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){system("color 7c");

    int x = 23;
    int *ptr = &x;

    printf("%p\n", ptr);//ptr puxa lixo.
    printf("%i\n", *ptr);//puxa o valor de x.

    *ptr = 1997;

    printf("%i\n", *ptr);//puxa o valor de *ptr já declarado como 1997.

    return (0);
}

