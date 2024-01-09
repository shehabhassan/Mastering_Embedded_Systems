#include <stdio.h>
int main()
{
    printf("Please Enter the number of exercises you want to do: from 1 to 7\n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
     case 1:
            printf("You have chosen to do the first exercise\n");
            // EX1: Write a C program to check whether a number is even or odd.
      while (1)
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num); 
            num%2==0 ? printf("%d is Even", num) : printf("%d is Odd", num);
           printf("Do you want to continue? (y/n)\n");
          char c1;
            scanf("%c", &c1);
            fflush(stdin);
            if (c1 == 'n')
                break;
        }
        break;
     case 2:
            printf("You have chosen to do the first exercise\n");
           //EX2: Write a C program to check whether a char is vowel or consonant.
      while (1)
        {
        char ch;
        printf("\nEnter a character: ");
        scanf("%c", &ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
            {printf("%c is vowel", ch);}
            else{ printf("%c is consonant", ch);}
         printf("Do you want to continue? (y/n)\n");    
           char c2;
            scanf("%c", &c2);
            fflush(stdin);
            if (c2 == 'n')
                break;
        }
        break;    
     case 3:
            printf("You have chosen to do the first exercise\n");
         // EX3:Write c Program to find Largest Among Three Numbers. 
      while (1)
        {
     float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a>b && a>c)
    {
       printf("%0.3f is the largest number", a);   
    }else if(b>a && b>c)
    {
       printf("%0.3f is the largest number", b); 
    }else
    {
       printf("%0.3f is the largest number", c); 
    } 
     printf("Do you want to continue? (y/n)\n");
        char c3;
        scanf("%c", &c3);
        if (c3 == 'n')
            break; 
    }
            break;
    case 4:
    // EX4:Write C program to check whether a number is positive, negative or zero. 
            printf("You have chosen to do the first exercise\n");
      while (1)
        {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num>0 ? printf("%d is Positive", num) : num<0 ? printf("%d is Negative", num) : printf("%d is Zero", num);
    printf("Do you want to continue? (y/n)\n");
   char c4;
        scanf("%c", &c4);
        if (c4 == 'n')
            break;
        } 
            break;
   case 5:
          printf("You have chosen to do the first exercise\n");
   // EX5 : Write C program to check whether a Char is alphabet or not.
      while (1)
        {
    char ch;
   printf("\nEnter a character: \n");
   scanf("%c", &ch);
   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
   {
      printf("%c is an alphabet\n", ch);
   }else
   {
      printf("%c is not an alphabet\n", ch);
   }
    printf("Do you want to continue? (y/n)\n");
      char c5;
        scanf("%c", &c5);
        if (c5 == 'n')
            break; 
        }
        break;
     case 6:
        printf("You have chosen to do the seventh exercise\n");
    //EX6: Write C program to sum the nutral number from 1.
    while(1)
    { 
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num<0 || num==0)
    {
        printf("%d is not a positive number", num);
    }else
    {
        for(int i=1; i<=num; i++)
        {
            sum+=i;
        }
    }   
         printf("Sum of %d natural numbers is %d\n", num, sum);
    printf("Do you want to continue? (y/n)\n");
       char c6;
        scanf("%c", &c6);
        if (c6 == 'n')
            break; 
    }
    break;
    case 7:
        printf("You have chosen to do the seventh exercise\n");
        //EX7: Write C program to calculate the factorial of a number.
    while(1)
    { 
    int num, fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num==0)
        printf("Factorial of 0 is 1");
    if (num<0)
    {
        printf("Error !! Factorial of negative number doesn't exist");
    }
    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }
    printf("Factorial of %d is %d", num, fact); 
     printf("Do you want to continue? (y/n)\n");
     char c7;
        scanf("%c", &c7);
        if (c7 == 'n')
            break;   
    }
    break;
    //EX8: Write C program to make a calculator. 
    case 8:
        printf("You have chosen to do the seventh exercise\n");
        //EX7: Write C program to calculate the factorial of a number.
    while(1)
    { 
    int num1, num2;
    char choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator: ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '+': printf("%d + %d = %d", num1, num2, num1+num2);
        break;
        case '-': printf("%d - %d = %d", num1, num2, num1-num2);
        break;
        case '*': printf("%d * %d = %d", num1, num2, num1*num2);
        break;
        case '/': printf("%d / %d = %d", num1, num2, num1/num2);
        default: printf("Error!! Wrong Operator");
    } 
     printf("Do you want to continue? (y/n)\n");
     char c8;
        scanf("%c", &c8);
        if (c8 == 'n')
        break;  
    } 
    break;
          default:
            printf("You have chosen to do the eighth exercise\n");
            break;
    }
    return 0;    
}