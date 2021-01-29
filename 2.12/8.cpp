#include<stdio.h>
void one_three();
void two();
main()
{
	printf("starting now\n");
	one_three();
	printf("done!");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
void two()
{
	printf("two\n");
}
