#include <stdio.h>
#include <stdlib.h>

//comment

void print_arr(int * arr, short size){
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	puts("");
}

int main(){
	int arr[] = {10, -2, 65, 1, 0, -67, 50};
	print_arr(arr, sizeof(arr) / 4);
	for(int i = 0; i < sizeof(arr) / 4; i++){
		for(int k = 1; k < sizeof(arr) / 4; k++){
			if(arr[k-1] > arr[k]){
				int temp = arr[k-1];
				arr[k-1] = arr[k];
				arr[k] = temp;
			}
		}			
	}
	print_arr(arr, sizeof(arr) / 4);
	return 0;
}
