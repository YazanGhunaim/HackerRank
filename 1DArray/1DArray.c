#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *array;
    size_t size = 0;
    int sum = 0;
    scanf("%zu", &size);
    array = malloc(size*sizeof(*array));
    for(size_t i = 0; i<size; ++i){
        scanf("%d", array+i);
    }
    for(size_t j = 0; j < size; ++j)
        sum += array[j];
        
    printf("%d", sum);
    return 0;
}

