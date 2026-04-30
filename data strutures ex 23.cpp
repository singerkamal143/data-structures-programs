#include<stdio.h>
int main(){
	int n,i;
	float marks[100],total=0,average;
	printf("enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the marks of students %d:",i+1);
		scanf("%f",&marks[i]);
		total=total+marks[i];
	}
	average=total/n;
	printf("total=%.2f",total);
	printf("average=%.2f",average);
	return 0;
}
