#include<stdio.h>
#include<math.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,a,p;
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	a=sub1+sub2+sub3+sub4+sub5;
	p=(sub1+sub2+sub3+sub4+sub5)/500*100;
	printf("%d",a,p);
}
