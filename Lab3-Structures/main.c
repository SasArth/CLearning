#include<stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int age;
	float gpa;
};

int main()
{
	struct student x[2];
	int i,v;
	for(i=0;i<=2;i++)
	{
		printf("Name: ");
		scanf("%s",&x[i].name);
		printf("Age: ");
		scanf("%d",&x[i].age);
		printf("gpa: ");
		scanf("%f",&x[i].gpa);
		
		
		
	}
  for(v=0;v<=2;v++)
	{
  printf("\nName: %s \n age: %d \n gpa: %f \n\n ",x[v].name,x[v].age,x[v].gpa);
  }
	return 0;
}
