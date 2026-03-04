#include<Stdio.h>
struct student
{
	int rno;
	int m1,m2;
};
int main()
{
	struct student s1,s2;
	s1.rno=1;
	s1.m1=95;
	s1.m2=98;
	s2=s1;
	printf("\nafter copying s2 data \n");
	printf("\nrno :%d",s1.rno);
	printf("\nsub1 marks:%d",s2.m1);
	printf("\nsub2 marks:%d",s2.m2);
	
}
