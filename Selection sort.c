#include<stdio.h>
#include<conio.h>
void swap(int array[],int i, int j);
void main(){
    int i,j,min,k;
    int arr[] = {2,56,34,21,34,89,98,65,9879,1,56,2};
    int length = sizeof(arr)/sizeof(arr[0]);

    //Selection Sort
    for(i=0; i<length; i++){
        min = i;
        for(j= i+1 ; j<length ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr,min,i);
        }
       
    }

    for(k=0; k<length ; k++){
        printf("%d  ",arr[k]);
    }
}

void swap(int array[], int i , int j){
   
    int temp = array[i];
    array[i]  = array[j];
    array[j]  = temp; 
}
