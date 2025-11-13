#include <stdio.h>

int main(){
	int num,i,j=0;
	
	printf("Enter the number of x coordinates you want (same number of y coordinates will be taken): "); //takes input of number of x coordinates 
	                                                                                                       //later doubles them to get the
																										   // lenght of the array
	scanf("%d", &num);
	if(num>500 || num<1){
		printf("There is an error in the value");
		return;
	}
	int size = 2*num; //lenght of array//
	int arr[size];
	int result[size];
	printf("Enter %d x coordinates and then %d y coordinates:\n", num,num);
	for(i=0;i<size;i++){
		printf("Enter value: ");
		scanf("%d", &arr[i]);
		if(arr[i]>1000 || arr[i]<1){
			printf("The limit is exceeded or not fullfilled");
			return;
		}
	}
	
	for(i=0;i<size-1;i=i+2){
		result[i]=arr[j];  //a new 'result' array where the values are copied to as wanted in the output//
		result[i+1]=arr[j+num];
		j++;
	}
	
	for(i=0;i<size;i++){
		printf("%d, ", result[i]);
	}
}
