Assignment 2
Q1) 
#include <stdio.h>
int main() 
{
    int marks[5]={67,75,86,69,92};
    for(int i=0;i<5;i++)
    {
        marks[i]+=5;
        printf("New Marks=%d\n",marks[i]);
    }
    return 0;
}

                                                                                                                                      


Q2) 
#include <stdio.h>
int main() 
{ int marks[5];
    printf("Enter Marks:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        if(marks[i]>=75)
        printf("Grade A\n");
        else if(marks[i]<=74 && marks[i]>=60)
        printf("Grade B\n");
        else if(marks[i]<=59 && marks[i]>=40)
        printf("Grade C\n");
        else if(marks[i]<=40)
        printf("Grade D\n");
    }
    return 0;
}














Q3 
#include<stdio.h>
#include <math.h>
int main(){
     int n;

    printf("Enter the number of elements");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the element ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==99){
            count=count+1;
            
            

      }

        
    }
    if(count!=0){
        printf("99 is present");
    }else{
        printf("99 is not present");
    }

    return 0;
}







Q4 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i,count=0;
    printf("Enter marks of n students = ");
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++){
    if(marks[i]==99){
        printf("%dth Student scored %d marks in the class ",i+1,marks[i]);printf("\n");count++;
    }
    }printf("%d Students scored 99 in the class",count);
    return 0;
}




Q5 
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n; i++) {
        sum += marks[i];
    }

    printf("The total sum of marks is: %d\n", sum);

    return 0;
}















Q6 
#include <stdio.h>
int main() 
{
    int sum=0,avg;
    int marks[5]={67,75,86,69,92};
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;
    printf("AVG=%d",avg);
    return 0;
}



















Q7 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Scores and their parity:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Score %d: Even\n", marks[i]);
        } else {
            printf("Score %d: Odd\n", marks[i]);
        }
    }

    return 0;
}











Q8 
#include <stdio.h>

int main() {
    int i,n;
    printf("Enter the no. of students whose marks to be entered = ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter marks for %d students = ",n);
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    int max=marks[0];
    int min=marks[0];
    for(i=1;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
        if(marks[i]<min){
            min=marks[i];
        }
    }
    printf("Maximum marks scored is = %d",max);
    printf("\nMinimum marks scored is = %d",min);
    return 0;
}











Q9 
#include <stdio.h>
int main() 
{
    int marks[5]={67,75,86,69,92};
    printf("Peak Elements are:\n");
    if(marks[0]>=marks[1])
    printf("%d\n",marks[0]);
    if(marks[4]>=marks[3])
    printf("%d\n",marks[4]);
    for(int i=0;i<5;i++)
    {
        if(marks[i]>=marks[i-1] && marks[i]>=marks[i+1])
        printf("%d\n",marks[i]);
    }
    return 0;
}


Q 10 
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int fcount=0;
    for (int i = 0; i <(n); i++) {
        int count = 0; 
        if (arr[i] <= 1) {
            continue;
        }

        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                count++; 
                break;
            }
        }
        if (count == 0) {
            fcount++;
        }
    }
    printf("no of prime no in an array %d", fcount);
    
    return 0;
}










Q11 
#include <stdio.h>
int main() 
{ int p,n,x;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the Elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which new element has to be inserted and the value of element respectively:\n");
    scanf("%d",&p);
    scanf("%d",&x);
    for(int i=n;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=x;
    for(int i=0;i<n+1;i++)
    {
        printf("Element %d= %d\n",i+1,a[i]);
    }
    return 0;
}











Q12 
#include <stdio.h>
int main() 
{ int p,n;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which a element has to be deleted:\n");
    scanf("%d",&p);
    for(int i=p-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    };
    for(int i=0;i<n-1;i++)
    {
        printf("Element %d= %d\n",i+1,a[i]);
    }
    return 0;
}








Q13 
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int last = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = last;

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
Q14 
#include <stdio.h>
int main() 
{int count=0;
    int a[15]={67,69,86,69,92,45,34,62,86,56,72,92,35,66,45};
    printf("the Duplicate Elements are:\n");
    for(int i=0;i<15;i++)
    {
        for(int j=0;j!=i;j++)
        {
            if(a[j]==a[i])
            printf("%d,",a[j]);
        }
    }
    return 0;
}
  
