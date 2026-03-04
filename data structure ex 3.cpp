#include<Stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[100];
};
int main()
{
	struct student s1;
	s1.rno=1;
	strcpy(s1.name,"kamal");
	struct student s2={2,"raja"};
	printf("%d\n%s",s1.rno,s1.name);
	printf("%d\n%s",s2.rno,s2.name);
	return 0;
}
