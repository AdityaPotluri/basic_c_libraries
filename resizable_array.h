typedef struct vector {
    int* arr;
    int size;
    int capacity;
} vector;


void append (vector* vector, int a);
vector new (int capacity);
void resize (vector* vector);