#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char *s;
    int freq[4096];
    s = malloc(4096);
    fgets(s,4096,stdin);
    int length = strlen(s);
    
    for(int i = 0; i < length ; ++ i){
       for (int j = 0; j<length; ++j) {
       if ((s[j] - 48) == i) {
       freq[i]++;
       }
       }
    } 
    
    for(int i = 0; i < 10; ++i)
     printf("%d ", freq[i]);
    return 0;
}

