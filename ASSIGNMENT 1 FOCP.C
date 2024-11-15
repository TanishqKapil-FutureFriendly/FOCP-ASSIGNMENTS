ASSIGNMENT 1
QUES 1.
#include<stdio.h>
#include <math.h>
int main(){
    int a,x,sum=0,num;
    printf("Enter a no ");
    scanf("%d",&a);
    num=a;
    int count=0;


    while(num>0){
         count++;
         num=a/10;
    }
    num=a;
    while(a>0){
        x=a%10;
        sum=sum + pow(x,count) ;
        a=a/10;
       
    }
    if (sum==num){
        printf("armstrong no");
    }
    else{
        printf("not armstrong no");
    }
}

QUES 2.
#include <stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter two Integers:\n");
    scanf("%d %d",&a,&b);
    for(int i=2; i<=a,i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    printf("HCF=%d",hcf);
    return 0;
}

QUES 3.

#include <stdio.h>

int subtract(int a, int b) {
    b = ~b + 1;
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    return a;
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result of %d - %d = %d\n", a, b, subtract(a, b));
    
    return 0;
}
QUES 4.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
 

QUES 5.

#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    if(sum == num && num != 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
return 0;
}
 

QUES 6.

#include<stdio.h>
#include <math.h>
int main(){
    int x,y;
    printf("Enter the coordinate");
    scanf("%d %d",&x, &y);
    
    if(x>0){
        if(y>0){
            printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
        }
        else{
            printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
        }
    }
    else{
        if(y>0){
            printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
        }
        else{
            printf("The coordinate point (%d,%d) lies in the Third quadrant.",x,y);
        }
        
    }
    return 0;
}

QUES 7.


#include <stdio.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, remainder;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return binary;
}
int main() {
    int choice, number;

    printf("Choose the conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("The decimal equivalent is %d\n", binaryToDecimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("The binary equivalent is %d\n", decimalToBinary(number));
    } else {
        printf("Invalid choice! Please run the program again and choose either 1 or 2.\n");
    }
    return 0;
}
 

QUES 8.

#include <stdio.h>
int main() {//ques 8
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                printf("1");
                else
                printf("0");
            }
            else
            {
                if(j%2==0)
                printf("0");
                else
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}

QUES 9.

#include <stdio.h>

int main() {
    int i, j;


    for (i = 1; i <= 5; i++) {
   
        for (j = 1; j <= i; j++) {
            if ((j - 1) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf(" ");
        for (j = 1; j <= i; j++) {
            if ((j - 1) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
 

QUES 10.

#include <stdio.h>

int main() {
    int rows = 5; 
    int triangle[rows][rows]; 


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; 
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; 
            }
        }
    }

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            printf("  "); 
        }

        for (int j = 0; j <= i; j++) {
            printf("%d   ", triangle[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
