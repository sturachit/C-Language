#include <stdio.h>

#define SIZE 10

int main() {
    //2. Write C program to find second largest number in array.
    int arr[SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int largest = arr[0];
    int secondLargest = arr[0];
    
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The second largest number in the array is %d\n", secondLargest);
    
    return 0;
}
