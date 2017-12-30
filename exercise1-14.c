#include <stdio.h>

/* count & print frequencies of different characters in input */

int main(){
    int c = 0;
    int char_freq[256] = {0};
    while((c=getchar()) !=EOF){
        ++char_freq[c];
    }
    for(int i = 0; i <256; ++i){
        if (char_freq[i] > 0) {
            printf("'%c': %d\n", i, char_freq[i]);
        }
    }
}