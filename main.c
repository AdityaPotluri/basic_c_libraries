#include <pthread.h>
#include <stdio.h>
void counter();


int main() {
    int c;
    pthread_create(counter, NULL, NULL, NULL);
    printf("%d", c);
}

void counter() {
    int a = 0;
    for(int i = 0; i < 1000; i++) {
        a++;
    }
}