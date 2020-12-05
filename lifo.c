#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lifo.h"

lifo_t* lifo_create(int size)
{
    lifo_t* temp = NULL;
    temp = malloc(sizeof(lifo_t));

    temp->stack_index = 0;
    temp->buff = malloc(sizeof(int) * size);
    temp->max_size = size;

    return temp;
}

int lifo_push(lifo_t* lifo, int val)
{
    if(lifo->stack_index >= lifo->max_size)
        return -1;

    lifo->buff[lifo->stack_index] = val;
    (lifo->stack_index)++;

    return 0;
}

int lifo_pop(lifo_t* lifo,   int* val)
{
    if(lifo->stack_index == 0)
        return -1;

   *val = lifo->buff[--(lifo->stack_index)];

    return 0;
}


