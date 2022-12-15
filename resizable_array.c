#include <stdlib.h>
#include <stdio.h>


typedef struct vector {
    int* arr;
    int size;
    int capacity;
} vector;
vector new (int size);

int main() {
    vector* vector = new(10);

    for(int i = 0; i < 10000; i++) {
        append(vector, 99);
    }

    for(int i = 0; i < 10000; i++) {
        printf("%d", vector->arr[i]);
    }

    return 0;
}

vector* new(int capacity) {
    vector* vec;
    vec->arr = calloc(size, sizeof(int));
    if (!vec->arr) {
        stderr("cannot allocate vector");
        return NULL;
    }
    vec->capacity = capacity;
    vec->size = 0;
    return vec;
}

vector* resize(vector* vec) {
    vec->array = realloc(vec->array, vec->capacity * 2);
    if(!vec->array) {
        return NULL;
    }
    vec->capacity *= 2;
    return vec;
}

vector* append(vector* vec, int a) {
    if(vec->size == vec->capacity) {
        vec = resize(vec);
        if(vec == NULL) {
            stderr("could not malloc vector");
            return NULL;
        }
    }

    vec->array[vec->size++] = a;
    return vec;

}

