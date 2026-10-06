#include <stdio.h>
int contains(int item, int arr[], int size){
	for(int i =0; i < size ; i++){
		if( arr[i] == item){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main() {
	int arr[] = {2, 9, 2, 0, 2, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array size: %d\n", size);  // 6
	printf("Result: %d\n", contains(2, arr, size));
   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
}
