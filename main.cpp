#include <stdio.h>
#include <string.h>

int main()
{
    int rl,a,b,c,d,e,total;
    float per;
    char nm[20],div[10];
    printf("Input the Registration Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of 5 sujects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    per = total/5.0;
    if (per>=60)
        strcpy(div,"First");
    else
    if (per<59&&per>=50)
        strcpy(div,"Second");
    else
    if (per<49&&per>=40)
        strcpy(div,"Pass");
    else
        strcpy(div,"Fail");

    printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
    printf("Marks in a : %d\nMarks in b : %d\nMarks in c : %d\nMarks in d : %d\nMarks in e : %d\n",a,b,c,d,e);
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}