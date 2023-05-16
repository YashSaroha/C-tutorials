#include<stdio.h>
int main()
{
    char s1[20], s2[20], s3[20];
    int eng, maths, sci, i, result;


    printf("enter student name : \n");
    fgets(s1, sizeof(s1), stdin);
    printf("enter student name : \n");
    fgets(s2, sizeof(s2), stdin);
    printf("enter student name : \n");
    fgets(s3, sizeof(s3), stdin);
    
    for(i=1 ; i<=3 ; i++) {
    printf(" enter eng, maths and sci marks : \n");
    scanf("%d %d %d", &eng, &maths, &sci);
    
    result = (eng + maths + sci)/3;
    printf("result is %d \n",result);
}
    return 0;
}