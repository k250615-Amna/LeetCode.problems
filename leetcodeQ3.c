#include <stdio.h>

int main(){
	int num,i,even=0;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &num);
	if(num>100 || num<1){
		printf("There is an error in the value");
		return;
	}
	
	int arr[num];
	printf("Enter the values to be stored: \n");
	for(i=0;i<num;i++){
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i]<1 || arr[i]> 1000){
			printf("There is an error in the value");
			return;
		}
	}
	for(i=0;i<num;i++){   //runs to replace all even values with 0
		if(arr[i]%2==0 && arr[i]!=1){
			arr[i]=0;
		}
	}
	for(i=0;i<num;i++){  //runs to replace all odd values with 1
		if(arr[i]%2 != 0 && arr[i]!=0){
			arr[i]=1;
		}
	}
	for(i=0;i<num;i++){ //runs to count the number of '0's hence all even numbers
		if(arr[i]==0){
			even++;
		}
	}
	for(i=0;i<even;i++){  //zero is stored in the array the amount of times it was counted above
		arr[i]=0;
	}
	for(i=even;i<num;i++){ //rest of the array is stored with the value one
		arr[i]=1;
		
	}
	for(i=0;i<num;i++){
		printf("%d ,", arr[i]); //output printed
	}
	
}
