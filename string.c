#include "string.h"

void memset(const void *p, const void *s, int n) {
    for(int i = 0; i < n; i++) { 
        p[i] = s[i];
    }
}

void memcpy(const void *p, const void *c, int n) {
    for(int i = 0; i < n; i++) {
        p[i] = c;
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

char* strchr(const char *s, int