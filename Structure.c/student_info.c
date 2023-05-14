// #include<stdio.h>
// #include<conio.h>

// struct student {
//     char name[50];
//     int roll;
//     float marks;
// }s;

// int main()
// {
//     printf("Enter information : \n");
//     printf("Enter name : ");
//     fgets(s.name , sizeof(s.name) , stdin);
//     printf("Enter roll number : ");
//     scanf("%d",&s.roll);
//     printf("Enter marks : ");
//     scanf("%f",&s.marks);

//     printf("\n\nDisplaying information\n\n");
//     printf("Name : ");
//     printf("%s",&s.name);
//     printf("Roll no : %d\n",s.roll);
//     printf("Marks : %.1f",s.marks);

//     return 0;
// }



///////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<conio.h>

struct student {
    char name[50];
    int roll;
    float marks;
}s[];

int main()
{
    for(int i=0 ; i<=5 ; i++)
    {
    printf("Enter information : \n");
    printf("Enter name : ");
    fgets(s[i].name , sizeof(s[i].name) , stdin);
    printf("Enter roll number : ");
    scanf("%d",&s[i].roll);
    printf("Enter marks : ");
    scanf("%f",&s[i].marks);

    printf("\n\nDisplaying information\n\n");
    printf("Name : ");
    printf("%s",&s[i].name);
    printf("Roll no : %d\n",s[i].roll);
    printf("Marks : %.1f\n\n",s[i].marks);
    }

    return 0;
}