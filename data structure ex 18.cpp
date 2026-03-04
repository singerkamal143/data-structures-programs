#include<stdio.h>

void quicksort(int arr[],int low,int high) {
	int i,j,pivot,temp;
	
	if(low < high) {
		pivot = arr[low];   //first element as pivot
		i = low;
		j = high;
		
		while(i < j) {
			while(arr[i] <= pivot && i < high)
			i++;
			while(arr[j] > pivot)
			     j--;
			     
	        if(i < j) {
	        	temp = arr[i];
	        	arr[i] = arr[j];
	        	arr[j] = temp;
			}
		}
	}
}
