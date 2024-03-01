#include <stdio.h>
#include <stdlib.h>
unsigned int id,t;
char name [30];
float degrees[6],per,total;

int main()
{
    printf("Enter your Name : ");
    scanf("%s",&name);
    printf("Enter your Id : ");
    scanf("%d",&id);
    if((id%10)!=5)
    {
        printf("Invalid ID");
        return 0;
    }
    printf("Enter your degrees for 6 subjects:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &degrees[i]);
        total += degrees[i];
    }
    printf("Enter The total mark : \n");
    scanf("%d",&t);
    per=(total/t)*100;
    if(per>=85)
    {
        printf("Excellent!\n");
    }
    else if((per<85)&&(per>=75))
    {
        printf("Very good!\n");
    }
    else if((per<75)&&(per>=65))
    {
        printf("Good!\n");
    }
    else if((per<65)&&(per>=50))
    {
        printf("Pass!\n");
    }
    else
    {
        printf("Failed!\n");
    }
    printf("You're doing great keep going, %s \n", name);
    return 0;
}
