//incomplete code cause i am still working on it 
#include <stdio.h>
int main(){
    int choice,a,b,sum=0,i,n,product=1,count=0;
    printf("Enter 1 to find if a number is armstrong number\n 2 to find if a number is strong number\n  3 to find if a num  is harshad number \n 4 to find LCM of number\n 5 to find HCF of number");
    scanf("%d",&choice);
    switch(choice)
      {case 1: //check if sum of digits to the power of number of digit is equal to number
       printf("Enter the number");
       scanf("%d",&a);
        if(a==0)
       { printf("zero is not a armstrong number");}
        else {
            b=a;
       while(a!=0)
       { n = a % 10;
           count++;
           a=a/10;
       }
       a=b;
       while(a!=0)
       { n = a % 10;
         product = 1;
           for(i = 1; i <= count; i++)
           {product *= n;}
           sum+=product;
           a=a/10;
       }}
      if(sum==b)
         {  printf("armstrong number ");
      }
        else 
      {printf("not armstrong number");}
      break;
    case 2://check if sum of digits factorial is equal to number
       printf("Enter the number");
       scanf("%d",&a);
        if(a==0)
       { printf("zero is not a strong number");}
        else {
            b=a;
       while(a!=0)
       { n = a % 10;

           product = 1;
           for(i = 1; i <= n; i++)
           {
        product *= i;
        }

           sum+=product;
           a=a/10;
       }
      if(sum==b)
         {  printf("strong number ");
      }
        else 
      {printf("not strong number");}}
       break;
    case 3: //number divisible by sum of digits(num%sum==0)
       printf("Enter the number");
       scanf("%d",&a);
        if(a==0)
       { printf("zero is not a valid input");}
        else {
            b=a;
       while(a!=0)
           {
               sum+=a%10;
           a=a/10;}
       if(b%sum==0)
         {  printf("harshad number ");
      }
        else 
      {printf("not harshad number");}}
      break;
    case 4: //lcm of two numbers
      }
return 0;
}
