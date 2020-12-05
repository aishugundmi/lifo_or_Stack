#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lifo.h"


lifo_t* lifo_1, *lifo_2, *lifo_3;

int main()
{
    int val;
    lifo_1 = lifo_create(100);
    lifo_2 = lifo_create(100);
    lifo_3 = lifo_create(100);

    lifo_push(lifo_1, 1);
    lifo_push(lifo_1, 2);
    lifo_push(lifo_1, 3);

    lifo_push(lifo_2, 10);
    lifo_push(lifo_2, 20);
    lifo_push(lifo_2, 30);



    while(lifo_pop(lifo_1, &val) == 0) {
        printf("%d\n", val);
    }
    while(lifo_pop(lifo_2, &val) == 0) {
        printf("%d\n", val);
    }

    return 0;
}


