// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

int main() {
           //ARRAYS
           
    // GETTING SUM OF ALL ELEMENTS
    // int marks[] = {1,2,3,4,5,6,7,8,9};
    // int results = 0; //Remember to initialize results
    
    // for(int i=0; i < 9; i++){
    //     results += marks[i];
    // }
    // printf("%d", results);

    
    
    // PRINTING ELEMENTS IN AN ARRAY
    // int marks[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int length = sizeof(marks) / sizeof(marks[0]); //getting no. of elements
    
    // for(int i = 0; i < length; i++){
    //     printf("%d, ", marks[i]);
    // }
    
    
    
    // FINDING MINIMUM AND MAXIMUM IN AN ARRAY
    // int arr[] = {21, 34, 64, 68, 32, 49, 98, 53, 88};
    // int length = sizeof(arr) / sizeof(arr[0]);
    // int max = arr[0], min = arr[0];
    
    // for(int i = 0; i < length; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }
    // }
    // printf("Max = %d", max);
    // printf("\nMin = %d", min);
    
    
    
    //REVERSE AN ARRAY
    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int length = sizeof(arr) / sizeof(arr[0]);
    
    // for(int i = length - 1; i >= 0; i--){
    //     printf("%d, ", arr[i]);
    // }
    
    
    
    //COUNT EVEN AND ODD NUMBERS IN AN ARRAY
    // int marks[] = {12, 34, 56, 78, 90, 9, 87, 65, 43, 21};
    // int length = sizeof(marks)/ sizeof(marks[0]);
    
    // for(int i = 0; i < length; i++){
    //     if(marks[i] % 2 == 0){
    //         printf("%d - Even\n", marks[i]);
    //     }
    //     else{
    //         printf("%d - Odd\n", marks[i]);
    //     }
    // }
    
    
    
    //SEARCH FOR AN ELEMENT
    // char colors[5][10] = {"Red", "Green", "Blue", "Orange", "Pink"}; // 5 strings, max 9 characters + null terminator
    // char color[100];
    
    // printf("Check if your color is in the array:");
    // scanf("%s", &color);
    
    // for(int i = 0; colors[i]; i++){
    //     colors[i] = tolower(colors[i]);
    // }
    // for(int i = 0; color[i]; i++){
    //     color[i] = tolower(color[i]);
    // }

    // for (int i = 0; i < 5; i++) {
    //     if(color == colors[i]){
    //         printf("Your color is in index %s of the array", colors[i]);
    //     }
    //     else{
    //         printf("Unfortunately, your color is not in the array");
    //     }
        
    // }
    
    
    //COPY ELEMENTS FROM ONE ARRAY TO ANOTHER
    // int A[] = {1,2,3,4,5};
    // int B[10] = {6,7,8,9,0};
    // int length = sizeof(B)/ sizeof(B[0]);
    // int i,j;
    
    // printf("Moving elements from array A to array B");
    // printf("\nA - {1,2,3,4,5}");
    // printf("\nB - {6,7,8,9,0}");
    // printf("\nEnter element index from A to move to B:");
    // scanf("%d", &i);
    
    
    // B[5] = A[i];
    
    // for(int k = 0; k < length; k++){
    //         printf("%d, ", B[k]);
    //     }
    
    
    
    
    //FIND DUPLICATE ELEMENTS
    // int marks[] = {12, 34, 56, 78, 90, 9, 87, 65, 56, 43, 21};
    // int length = sizeof(marks)/ sizeof(marks[0]);
    
    // for(int i = 0; i < length; i++){
    //     for(int j = i+1; j < length; j++){
    //         if(marks[i] == marks[j]){
    //             printf("\n%d, has been duplicated", marks[i]);
    //             break;
    //         }
    //     }
    // }
    
    
    
    //SORT ELEMENTS IN ASCENDING AND DESCENDING ORDER
    // int marks[] = {12, 34, 56, 78, 90, 9, 87, 65, 43, 21};
    // int length = sizeof(marks)/ sizeof(marks[0]);
    // int min = marks[0];
    
    // for(int i = 0; i < length; i++){
    //     for(int j = i+1; j < length; j++){  
    //         if(marks[i] > marks[j]){ //Replace '>' with '<' for descending order
    //             int temp = marks[i];
    //             marks[i] = marks[j];
    //             marks[j] = temp;
    //         }
    //     }
        
        
    // }
    // for(int k = 0; k < length; k++){
    //         printf("%d, ", marks[k]);
    //     }
    
    
    //MERGE TWO ARRAYS
    // int A[] = {1,2,3,4,5};
    // int lengthA = sizeof(A)/ sizeof(A[0]); 
    // int B[] = {6,7,8,9,0};
    // int lengthB = sizeof(B)/ sizeof(B[0]);
    // int C[lengthA + lengthB];
    
    // printf("A - {1,2,3,4,5}");
    // printf("\nB - {6,7,8,9,0}");
    // printf("\nMerging A and B...\n");
    
    // for(int i = 0; i < lengthA; i++){
    //     C[i] = A[i];
    // }
    // for(int j = 0; j < lengthB; j++){
    //     C[lengthA + j] = B[j];
    // }
    
    // printf("Final array - ");
    // for(int k = 0; k < lengthA+lengthB; k++){
    //     printf("%d ",C[k]);
    // }
    

    return 0;
}