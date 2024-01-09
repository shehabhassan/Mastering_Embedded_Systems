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
            //EX1:  Write C Program to Print a Sentence
            while (1)
            {
            char str[255];
            printf("Enter a sentence: ");
            fflush(stdin);
            gets(str);
            printf("You entered: %s\n", str);
            printf("Do you want to continue? (y/n)\n");
            char c1;
            scanf("%c", &c1);
            fflush(stdin);
            if (c1 == 'n')
                break;   
            }
            break;
        case 2:
            printf("You have chosen to do the second exercise\n");
            while (1)
            {
              //EX2: Write C Program to Print a Integer Entered by a User    
                int num;
                printf("Enter an integer: ");
                scanf("%d", &num);
                printf("You entered: %d\n", num);   
            printf("Do you want to continue? (y/n)\n");
            char c2;
            scanf("%c", &c2);
            if (c2 == 'n')
                break;   
            }
            break;
        case 3:
            printf("You have chosen to do the third exercise\n");
            while (1)
            {
                 //EX3: Write C Program to Add Two Integers
                int a, b, sum;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                sum = a + b;
                printf("%d + %d = %d\n", a, b, sum);
                printf("Do you want to continue? (y/n)\n");
             char c3;
             scanf("%c", &c3);
             if (c3 == 'n')
                break;   
             }
            break;
        case 4:
            printf("You have chosen to do the fourth exercise\n");
             //EX4: Write C Program to Multiply two Floating Point Numbers
            while(1){
            float n1, n2, product;
            printf("Enter two numbers: ");
            scanf("%f %f", &n1, &n2);
            product = n1 * n2;
            printf("%f * %f = %f\n",n1,n2,product);
            printf("Do you want to continue? (y/n)\n");
             char c4;
             scanf("%c", &c4);
             if (c4 == 'n')
                break;   
                }
            break;
        case 5:
            printf("You have chosen to do the fifth exercise\n");
            //EX5: Write C Program to Find ASCII Value of a Character
            while(1){
            char ch;
            printf("Enter a character: ");
            scanf("%c", &ch);
            printf("ASCII value of %c = %d\n", ch, ch);
            printf("Do you want to continue? (y/n)\n");
             char c5;
             scanf("%c", &c5);
             if (c5 == 'n')
                break;   
             }
            break;
        case 6:
            printf("You have chosen to do the sixth exercise\n");
            //EX6:Write Source Code to Swap Two Numbers
            while(1){
            int n1,n2,temp;
            printf("Enter two numbers: ");
            scanf("%d %d",&n1,&n2);
            temp = n1;
            n1 = n2;
            n2 = temp;
            printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
            printf("Do you want to continue? (y/n)\n");
             char c6;
            scanf("%c", &c6);
             if (c6 == 'n')
                break;   
             }
            break;
        case 7:
            printf("You have chosen to do the seventh exercise\n");
                //EX7: Write Source Code to Swap Two Numbers without temp variable.
        while(1){    
            int n1,n2;   
            printf("Enter two numbers: \n");
            scanf("%d %d",&n1,&n2);   
            n1 = n1 - n2;
            n2 = n1 + n2;
            n1 = n2 - n1;
            printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
            printf("Do you want to continue? (y/n)\n");
        char c7;
        scanf("%c", &c7);
        if (c7 == 'n')
            break;   
        }
            break;
        default:
            printf("You have chosen to do the eighth exercise\n");
            break;
    }
    //Write Source Code to Swap Two Numbers using XOR
    //  int num1,num2;   
    // printf("Enter two numbers: \n");
    // scanf("%d %d",&num1,&num2);   
    // num1 = num1 ^ num2;
    // num2 = num1 ^ num2;
    // num1 = num1 ^ num2;
    // printf("After swapping: n1 = %d, n2 = %d\n", num1, num2);
    return 0;
}
