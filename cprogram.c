#include<stdio.h>
int main()
{ printf("hello");
return 0;

void main()
{
    
    int age;
   
   l1: 
    printf("\nEnter any age : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("\nUser can vote");
        
    }
    
    else if(age == 0){
        printf("\nNo result found");
    
        goto l2;
    }
   
    else if(age<18){
        printf("\nuser cannot vote");
    }
    
    goto l1;
    
    l2:
    printf("\nend");
    
}