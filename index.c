// 1️⃣ Simple Interest (SI)
#include <stdio.h>
int main() {
    float P, R, T, SI;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);
    return 0;
}


// 2️⃣ Arithmetic Calculator (+ - * /) for 2 numbers using switch
#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op); // space before %c is important
    switch(op) {
        case '+': printf("Sum = %.2f\n", a+b); break;
        case '-': printf("Difference = %.2f\n", a-b); break;
        case '*': printf("Product = %.2f\n", a*b); break;
        case '/': if(b!=0) printf("Quotient = %.2f\n", a/b);
                  else printf("Division by zero error\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}


// 3️⃣ Natural numbers (1 to N) using for loop
#include <stdio.h>
int main() {
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}


// 4️⃣ Palindrome number
#include <stdio.h>
int main() {
    int num, rev=0, temp, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0) {
        rem = temp%10;
        rev = rev*10 + rem;
        temp/=10;
    }
    if(num==rev) printf("%d is a palindrome\n", num);
    else printf("%d is not a palindrome\n", num);
    return 0;
}


// 5️⃣ Prime number
#include <stdio.h>
int main() {
    int n, i, flag=0;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<=1) flag=1;
    for(i=2; i*i<=n; i++) {
        if(n%i==0) { flag=1; break; }
    }
    if(flag==0) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    return 0;
}


// 6️⃣ Check divisible by 3 and 5
#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%3==0 && n%5==0) printf("%d is divisible by 3 and 5\n", n);
    else printf("%d is not divisible by both 3 and 5\n", n);
    return 0;
}


// 7️⃣ Odd or Even
#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%2==0) printf("%d is even\n", n);
    else printf("%d is odd\n", n);
    return 0;
}


// 8️⃣ Series 1,2,...,10
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=10;i++) printf("%d ", i);
    printf("\n");
    return 0;
}


// 9️⃣ Series 1,4,9,16,... (squares) 10th term
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=10;i++) printf("%d ", i*i);
    printf("\n");
    return 0;
}


// 🔟 Middle one among 3 numbers
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if((a>b && a<c) || (a>c && a<b)) printf("Middle = %d\n", a);
    else if((b>a && b<c) || (b>c && b<a)) printf("Middle = %d\n", b);
    else printf("Middle = %d\n", c);
    return 0;
}


// 1️⃣1️⃣ Sum of numbers 1 to 50
#include <stdio.h>
int main() {
    int sum=0, i;
    for(i=1;i<=50;i++) sum+=i;
    printf("Sum = %d\n", sum);
    return 0;
}

// 1️⃣2️⃣ Armstrong number
#include <stdio.h>
#include <math.h>
int main() {
    int num,temp,sum=0,rem,digits=0;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0) { digits++; temp/=10; }
    temp=num;
    while(temp!=0) {
        rem=temp%10;
        sum += pow(rem,digits);
        temp/=10;
    }
    if(sum==num) printf("%d is Armstrong\n", num);
    else printf("%d is not Armstrong\n", num);
    return 0;
}


 /*  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5 */

/*  #include<stdio.h>
 int main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("%3d",i);
        }
        printf("\n");
    }
 } */



 /*  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5 */

/*   #include<stdio.h>
 int main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("%3d",i);
        }
        printf("\n");
    }
 } */


//    5
//   5  4
//   5  4  3
//   5  4  3  2
//   5  4  3  2  1
/*    #include<stdio.h>
 int main(){
    for(int i = 5; i>=1; i--){
        for(int j = 5; j>=i; j--){
            printf("%3d",j);
        }
        printf("\n");
 }
} */

//  10 20 30 40 50
//  20 30 40 50 60
//  30 40 50 60 70
//  40 50 60 70 80
//  50 60 70 80 90
//  60 70 80 90100
/*  #include<stdio.h>
 int main(){
    
    for(int i = 0; i<=5; i++){
        for(int j = 1; j<= 5; j++){
            printf("%3d", (i + j) * 10);
        }
        printf("\n");
    }
 }
 */


//    *  *  *  *  *  *
//   *  *  *  *  *  *  *  *  *
//   *  *  *  *  *  *
//   *  *  *  *  *  *  *  *  *
//   *  *  *  *  *  *
/*  #include<stdio.h>
 int main()
 {
    int count;
    for(int i = 1; i<= 5; i++){
        count = (i % 2 != 0) ? 6 : 9;
        for(int j = 1; j<= count; j++){
            printf("%3c", '*' );
        }
        printf("\n");
    }
 } */

