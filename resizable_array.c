#include <stdlib.h>
#include <stdio.h>
#include "resizable_array.h"



int main() {
    vector vec = new(100);
    
    for (int i = 0; i < 1000; i++) {
        vec.arr[i] = 99;
    }
    
    

    for(int i = 0; i < 1000; i++) {
        printf("%d ", vec.arr[i]);
    }
    

    return 0;
}

vector new(int capacity) {
    vector vec;
    vec.arr = calloc(capacity, sizeof(int));
    if (!vec.arr) {
        return vec;
    }
    vec.capacity = capacity;
    vec.size = 0;
    return vec;
}

void resize(vector* vec) {
    
    vec->arr = realloc(vec->arr, vec->capacity * 2);
    if(!vec->arr) {
        printf("ERROR: Failed to resize");
        return;
    }
    vec->capacity = vec->capacity * 2;
}

void append(vector* vec, int a) {
    if (vec->size == vec->capacity) {
        resize(vec);
    }
    vec->arr[vec->size] = a;
    vec->size++;
    printf("%d %d\n", vec->arr[vec->size-1], vec->size);
}


