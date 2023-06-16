#include<stdio.h>
int main(){
int firstnumber,secoundumber,result;
char option;
float div,reminder;
printf("Put your 1st number :");
scanf("%d",&firstnumber);
printf("Put your 2nd number :");
scanf("%d",& secoundumber);
printf("Put your choise (+)(-)(*)(/) :");
scanf(" %c",& option);
if (option=='+')
{
    printf("YOUR CHOISE ADDITION");
result=firstnumber+secoundumber;
printf("\n THE RESULT IS : %d",result);
}
else if (option=='-')
{
    printf("YOUR CHOICE IS MINUSE");
    result=firstnumber-secoundumber;
    printf("\n THE RESULT IS : %d",result);
}
else if (option=='*')
{
    printf("YOUR CHOISE IS MULTIPLICATION");
    result=firstnumber*secoundumber;
    printf("\nTHE RESULT IS : %d",result);
}
else if (option=='/')
{
    printf("YOUR CHOISE IS DIVITION:");
    div=firstnumber/secoundumber;
    printf("\n THE RESULT IS : %f",div);
reminder=firstnumber%secoundumber;
printf("\n THE REMINDER IS %f",reminder);
}
    else
    {
        printf("YOU DON'T CHOISE RIGHT");
    }
    
return 0;
}
//THIS IS WRITEN BY ME..................