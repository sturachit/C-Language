#include <stdio.h>

#define SIZE 10

int main() {

    //3. Write C program to count frequency of each element in an array.
    int arr[SIZE] = {1, 2, 3, 2, 1, 1, 4, 5, 5, 3};
    int freq[SIZE] = {0};
    
    for(int i = 0; i < SIZE; i++) {
        freq[i] = 1;
        for(int j = i + 1; j < SIZE; j++) {
            if(arr[i] == arr[j]) {
                freq[i]++;
                arr[j] = 0;
            }
        }
    }
    
    printf("Frequency of each element in the array:\n");
    
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}
