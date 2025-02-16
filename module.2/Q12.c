#include <stdio.h>
struct student
{
    char name[30];
    int rollnumber ;
    float marks;
};
int main()
{
    int i;
    struct  student students[3];
    for (i=0;i<3;i++){
    printf ("enter the details of students =%d\n",i+1);
    printf ("Name :");
    scanf ("%s",&students[i].name);
    printf ("roll number :");
    scanf ("%d",&students[i].rollnumber);
    printf ("marks :");
    scanf ("%f",&students[i].marks);
}
printf ("\nstudents details:\n");
for (i=0;i<3;i++){
    printf ("student %d:\n",i+1);
    printf ("Name : %s\n",students[i].name);
    printf ("roll number : %d\n",students[i].rollnumber );
    printf ("marks:%.2f\n",students[i].marks);
}
}
