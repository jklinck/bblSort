#include <stdio.h>
#include <stdlib.h>

int* bubbleSort(int* arr, int size);
void printArray(int* arr, int size);

int main()
{
    int arr[6] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(int);
    int* newArr = bubbleSort(arr, size);
    printArray(newArr, size);
    free(newArr);
    return 0;
}

int* bubbleSort(int* arr, int size){
    int* newArr = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        newArr[i] = arr[i];
    }

    int size2 = size;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size2 - 1; j++){
            if(*(newArr + j) > *(newArr + j + 1)){
                int temp = *(newArr + j);
                *(newArr + j) = *(newArr + j + 1);
                *(newArr + j + 1) = temp;
            }
        }   
    }    

    return newArr;
}

void printArray(int* arr, int size){
    printf("[");
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d]\n", *(arr + i));
            break;
        }
        printf("%d, ", *(arr + i));
    }
}






