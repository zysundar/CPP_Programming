#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int rol_no;
	int marks;
};
//struct student s1[50];
void read_array(struct student s1[50],int n)
{
	int i;
	printf("Enter name and rol_no. and marks\n");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",&s1[i].name,&s1[i].rol_no,&s1[i].marks);
	}
}
void print_array(struct student s1[50],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s \n %d\n %d",s1[i].name,s1[i].rol_no,s1[i].marks);
	}
}

int rolcmp(struct student s1,struct student s2)
{
	return s1.rol_no-s2.rol_no;
}
int markscmp(struct student s1,struct student s2)
{
	return s1.marks-s2.marks;
}
int namecmp(struct student s1,struct student s2)
{
	return s1.name-s2.name;
}

void sort(struct student s1[50],int n,int (*cmp)(struct student,struct student))
{
	int i,j;
	struct student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(cmp(s1[i],s1[j])>0)
			{
			temp = s1[i];
			s1[i] = s1[j];
			s1[j]= temp;	
			}
		}
	}	
}


int main()
{
	
	struct student s1[50];
	int n;
	printf("no of students");
	scanf("%d",&n);
	read_array(s1,n);
	sort(s1,n,rolcmp);
	print_array(s1,n);
	return 0;
}
