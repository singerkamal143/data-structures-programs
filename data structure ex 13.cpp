#include<stdio.h>
enum day {
	mon=1,tue,wed,thu,fri,sat,sun
};
int main(){
	enum day today;
	today = tue;
	printf("today is day number : %d\n",today);
	return 0;
}
