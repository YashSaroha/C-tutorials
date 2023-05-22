#include<stdio.h>
#include<conio.h>

void input_data(int stud[]);
void search( int stud[], int n);

struct student{
    char name[20];
    int roll_no;
    char grade;
}s[10];

int main()
{
    int b;
    input_data(s);
    printf("\nEnter roll of the student of which you want the record");
    scanf("%d",&b);
    search(s,b);
    return 0;
}

void input_data(int stud[])
{
    int i;
    printf("enter students info\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%s %d %s", &s[i].name, &s[i].roll_no, &s[i].grade);
    }
}

void search( int stud[], int n)
{
    int i;
    printf("Required data is\n");
    for(i=0 ; i<10 ; i++)
    {
        if(i==n)
        {
            printf("\n%s%d%s",s[i].name, s[i].roll_no, s[i].grade);
        }
    }
}