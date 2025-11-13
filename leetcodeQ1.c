#include <stdio.h>

int main(){
	
	int num,i,j,sum=0;
	
	printf("Enter the number of elements of the array: ");
	scanf("%d", &num);
	if(num>1000 || num<1){
		printf("Can not calculate for this number of elements ");
		return;
	}
	int arr[num];
	
	for(i=0;i<num;i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i]>1000000|| arr[i]<-1000000){
			printf("Value entered is out of range");
			return;
		}
	}
	for(i=num-1;i>=0;i--){  //starting from the last element of the array//
		sum=0;
		for(j=i;j>=0;j--){
			sum=sum+arr[j];
		}
		arr[i]=sum;
	}
	
	for(i=0;i<num;i++){
		printf("%d, ", arr[i]);
	}
	
	
}
