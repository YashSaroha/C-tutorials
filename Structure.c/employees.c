#include<stdio.h>
#include<conio.h>

struct empl {
    char code[4];
    char name[25];
    char department[20];
    int joining_date;

        struct date {
            int day;
            int month;
            int year;
        }d[];
}e[];

int main()
{
    struct empl e[5];
    
    for( int i=0 ; i<5 ; i++ )
    {
        printf("\n\nEnter employee no %d info\n\n",i+1);
        printf("Code : ");
        scanf("%s",e[i].code);
        printf("Name : ");
        scanf("%s",e[i].name);
        printf("Dept : ");
        scanf("%s",e[i].department);
        
        struct date d[5];
        printf("\nJoining info\n");
        printf("Day (dd format): ");
        scanf("%d",&e[i].d[i].day);
        printf("Month (mm format): ");
        scanf("%d",&e[i].d[i].month);
        printf("Year (yyyy format): ");
        scanf("%d",&e[i].d[i].year);
    }

    printf("\n\nEmployees who have completed atleast one year of service are : \n\n");
    for(int i=0 ; i<5 ; i++)
    {
        if(e[i].d[i].year <= 2019)
        printf("%s\n%s\n%s\n",e[i].code, e[i].name, e[i].department);
    }    
    

    return 0;
}