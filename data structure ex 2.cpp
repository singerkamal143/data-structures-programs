#include<stdio.h>
struct student
{
	int rno;
	char name[100];
};
int main()
{
	struct student s1={1,"kamal"};
	struct student s2={2,"raja"};
	printf("%d\n%s",s1.rno,s1.name);
	printf("%d\n%s",s2.rno,s2.name);
	return 0;
}
