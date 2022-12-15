#include "string.h"

// how does a void pointer function?
// how do function pointers work?
int strlen(const char* s) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}


void memset(const void *p, const void *s, int n) {
    for(int i = 0; i < n; i++) { 
        p[i] = s;
    }
}

void memcpy(const void *p, const void *c, int n) {
    for(int i = 0; i < n; i++) {
        p[i] = c[i];
    }
}

int strcmpn(const char *s1, const char *s2, int n) {
    int a,sum1 = 0;
    int b,sum2 = 0;
    while(s1[a] != NULL && a < n) {
        sum1 += s1[a++];
    }

    while(s2[b] != NULL && b < n) {
        sum2 += s2[b++];
    }

    return a - b;
}

char* strchr(const char *s, const char b) {
    int i = 0;
    while(s[i] != NULL && i < strlen(s)) {

    }
}