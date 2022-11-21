#include <stdio.h>
#include <stdlib.h>


void reverseArray(int array[], int n) {
    int h = n - 1;
    int l = 0;
    
    while (l <= h) {
        int tmp = array[h];
        array[h] = array[l];
        array[l] = tmp;
        
        h --;
        l++;
    }
}
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    reverseArray(arr, num);
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

