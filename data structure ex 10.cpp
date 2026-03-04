#include<stdio.h>
void display(struct student);

struct student
{
	int rno;
	int marks;
};
int main()
{
	struct student s1;
	s1.rno=1;
	s1.marks=450;
	display(s1);
	return 0;
}
void display(struct student s)
{
	printf("%d\n%d",s.rno,s.marks);
	}
