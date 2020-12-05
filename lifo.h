#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

typedef struct lifo{
    int* buff;
    int stack_index;
    unsigned int max_size;
}lifo_t;


lifo_t* lifo_create(int size);

int lifo_push(lifo_t* lifo, int val);

int lifo_pop(lifo_t* lifo, int* val);


#endif // FIFO_H_INCLUDED
