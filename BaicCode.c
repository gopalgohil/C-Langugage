//  Hello world

 #include<stdio.h>
 int main(){
     printf("Hello c langugae\n hello world");
     return 0;
 }

// integar,float,character
/*#include<stdio.h>
int main(){
    int a=10;
    float b=12.5;
    char c='#';
    printf("intgear : %d\n",a);
    printf("float : %f\n",b);
    printf("character :%c\n",c);
    return 0;
}*/
// 32 to keywords in c lqanguage
// comment:
// single line comment:  //
// multiline comment :/*  *\

// user input scanf()
// sum of to number

/*
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the first Number  :");
    scanf("%d",&a);
    printf("Enter the second Number  :");
    scanf("%d",&b);
    printf("%d",a+b);
    return 0;
}*/

// Caluculate area square   (side X side)
/*#include<stdio.h>
int main(){
    int side;
    printf("Enter the number   :");
    scanf("%d",&side);
    printf("%d",side*side);
    return 0;
}*/
// Radius find  (3.14*radius*radius)

/*#include<stdio.h>
int main(){
    float radius;
    printf("Enter the number  :");
    scanf("%f",&radius);
    printf("%f",3.14*radius*radius);
    return 0;
}*/

// valid instruction in C langugae
/*int a=22;
int b=a;
int c=b+1;
int d=1,e;

int a,b,c;
a=b=c=1;
*/
// valid instruction

/*a=b+c;
a=b*c
a=b/c
*/

// modular operator  positive question(answer (+))
/*#include <stdio.h>
int main(){
    printf("%d",3%2);   // 3%2
    return 0;
}*/

// module operator -3%2 operator    negative question(answer (-))
/*#include <stdio.h>
int main(){
    printf("%d",-3%2);   // -3%2
    return 0;
}*/
// there are two Type conversion 1)  implicit converson:complier   2)explicit coverson: it self
//  20.1999 float value convert to integar value (int)

/*#include <stdio.h>
int main(){
int a=(int) 20.998;
printf("%d\n",a);
return 0;
}*/

// Operator Precednce   BODMAS Rules
// first priority  (*,/,%)

/*#include<stdio.h>
int main(){
    int a=4+9*10;
    printf("%d",a);
    return 0;
}*/
//  math pow
// #include<stdio.h>
// #include<math.h>
// int main(){

//     printf("%d\n",pow(10,10));
//     return 0;

// }
/*#include<stdio.h>
int main(){
    int a=4*3/6*2;
    printf("%d",a);
    return 0;
}*/

//  Odd or Even Number
/*#include<stdio.h>
int main(){
    int a;
    printf("Enter the number  :  ");
    scanf("%d",&a);
    if(a % 2==0){
        printf("%d Even Number  ",a);
    }
    else{
        printf("%d Odd Number   ",a);
    }
    return 0;
}*/

// Control Signal (Instruction)

/*1 Sequance control
2 Decision control  -if-else
3 Loop control       for-loop,while
4 Case Control
*/

// Operators

/*Arithmetic   (+ ,-- , /,*)
Relational operator  (==,>,<,>=,<=,!=)
logical   (And,or,not) (&&,||,!)
Assignment  (=,+=,-=,*=,/=,%=)
Ternary operator()
*/

// Example AND

/*#include<stdio.h>
int main(){
    printf("%d",12>10 && 12<30);
    return 0;
}*/
//     Not oprator(!)
// #include<stdio.h>
// int main(){
//     printf("%d",10 !=110);
//     return 0;
// }
/*#include<stdio.h>
int main(){
    printf("%d",12<10 || 12<30);
    return 0;
}*/
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number");
//     scanf("%d",&a);
//     if( a % 2==0){
//         printf("This number is divide");
//     }
//     else{
//         printf("not diveded");
//     }

//     return 0;

// }
//   Assignment operator

// #include<stdio.h>
// int main(){
//     int a=10;
//     a+=5;
//     a-=2;
//     a*=3;
//     a/=5;
//     printf("%d",a);
//     return 0;
// }

// write a program print 1(true)or 0 (false) for following

/*#include<stdio.h>
int main(){
    int sunday=1;
    int snowing=1;
    printf("%d",sunday && snowing);
    return 0;
}



#include<stdio.h>
int main(){
    int sunday=1;
    int Raining=0;
    printf("%d",sunday || Raining);
    return 0;
}*/

// Conditional statment

/*#include <stdio.h>
int main(){
    int mark;
    printf("enter the marks  :");
    scanf("%d",&mark);

    if(mark >=90 ){
        printf("%d Grade A\n",mark);
    }
    else if(mark >=80){
        printf("%d Grade B\n",mark);
    }
    else if(mark >=70){
        printf("%d Grade C\n",mark);
    }
    else if(mark >=60){
        printf("%d Grade D\n",mark);
    }
    else if(mark >=50){
        printf("%d Grade E\n",mark);
    }
    else if(mark <=30){
        printf("FAILL");
    }



    return 0;
}*/

//  if else conditional

// 1 age is grater than

/*#include<stdio.h>
int main(){
    int age;
    printf("Enter the age");
    scanf("%d",&age);

    if(age>18 && age< 54){
        printf("young man");

    }
    else if(age<18){
        printf("Tenager Or child");
    }
    else if(age>=55){
        printf("old Man");
    }
    return 0;
}*/

// Ternary condition

/*#include<stdio.h>
int main(){
int age;

age >=18 ? printf("youngest"):printf("no adult");

return 0;
}*/

// switch condition

/*#include<stdio.h>
int main(){
    char name;
    printf("Enter the Character :");
    scanf("%c",&name);
    switch(name){
        case 'g':printf("Gopal Gohel\n");
                 break;
        case 'd':printf("Devyani Gohel\n");
                 break;
        case 'n':printf("Dixita  Gohel\n");
                 break;
        case 'p':printf("Pratibhaben Gohel\n");
                 break;
        case 'u':printf("umeshbhai Gohel\n");
                 break;
    }
    return 0;
}*/

// Write a program to calculator in switch method

// Nested if-else
// // Baki che ako code `
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number");
//     scanf("%d",&number);
//     if(number >=0){
//         printf("Postive number");

//         if(number % 2==0){
//             printf("even ");
//         }
//         else{
//             printf("odd");
//         }
//         else{
//             printf("negative");
//         }
//     }
//     return 0;

// }

// upper and lower case

/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet :");
    scanf("%c",&ch);
    if( ch>='a' && ch<='z'){
        printf("This word is Lower:\n",ch);
    }
    else if( ch>='A' && ch<='B'){
        printf("This word is Upper:\n");
    }
    return 0;

}*/

// loop instruction
// for loop
/*#include<stdio.h>
int main(){

    for(int i=10;i>=1;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    for(int i=2;i<=20; i+=3){

        printf("%d\n",i);

    }
    return 0;
}*/
// While loop

//  do while loop
/*#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=5);
    return 0;
    }*/
// sum of n=5 5+4+3+2+1=15
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum is %d\n",sum);
    return 0;
}*/
// Tabel 2
/*#include<stdio.h>
int main(){
int n;
printf("Enter the number");
scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
*/
// break statment in c language
/*#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i==3){          //  1,2 print and 3,4,5,6,7,8,9,10(delete)
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}*/

/*// Continue statmet c language
#include<stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        if(i==3){
            continue;    //  3 remove and all print 1,2,4,5,6,7,8,9,10
        }
        printf("%d\n",i);
    }
    return 0;
}*/
// write a program even number then continu procees and odd number break statment
/*#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter the number :");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n % 2 != 0){
            break;
        }
    }
    while(1);
    printf("Thank you");
    return 0;
}*/
// write a program pritnt 5 to 50 odd number
/*#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        if(i % 2 !=0){                // odd
            printf("%d\n",i);
        }
    }
    return 0;
}*/

// *
// **
// ***
// ****
// *****
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");




    }
    return 0;
}*/

// sum=0,factorial=1

// factrorial
/*#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}*/
// write a program print reverse table
/* #include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    for(int i=10;i>=0;i--)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}*/

// write a programe print 5 to 50 to (sum)
/*#include<stdio.h>
int main(){

    int sum=0;


    for(int i=5;i<=50;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}*/

// chapter-5 funciton and recurison

// 1. function  void hello();

/*#include<stdio.h>
void namste();  //declaration /prototype
void bonjour();
void sum();

int main(){
    printf("enter the f for franch and i for indian  :");
    char ch;
    int a=30;
    int b=20;
    scanf("%c",&ch);
    if(ch =='i'){
        namste();
    }else{
        bonjour();
    }
    sum();
    sum=a+b;


       //function call
    return 0;
}
void namste(){

    printf(" Indian\n");
}
void bonjour(){
    printf("franch\n");
}
void sum(){
    printf("%d",sum);
}*/
// 1 sum to value function
/*#include<stdio.h>

int sum(int a,int b);


int main(){
    int a,b;
    printf("enter the number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("%d",s);
    return 0;
}
int sum(int a,int b){
    return a+b;
}*/

// print tabel in function
/*#include<stdio.h>
void number(int n);
int main(){
    int n=2;
    // printf("enter the number");
    // scanf("%d",&n);
    number(n);
    return 0;
}
void number(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
}*/
// #include <stdio.h>
// int gm(int n);

// int main()
// {
//     // int n=50;
//     // int i=5;
//     int n = 50;
//     int i = 5;

//     gm(n);
//     return 0;
// }
// int gm(int n)
// {
//     for (int i = 5; i <= 50; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n", i);
//         }
//     }
// }

// write a program calculate a square

/*#include<stdio.h>
#include<math.h>

int main(){
    int n=4;
    printf("%f",pow(n,2));
    return 0;

}*/

// write a program square
/*#include<stdio.h>
void cal(int n);

int main(){
    int n=4;
    printf("Enter the number :%d\n",n);

    cal(n);

    return 0;
}
void cal(int n){
    n=(n*n);
    printf("Square of :%d\n",n);
}*/
// write a program Square,circle,rectangle to print function
/*#include<stdio.h>

float square(float a);
float circle(float b);
float rectangle(float c, float d);

int main(){
    float a;
    printf("Enter the number :");
    scanf("%f",&a);

    printf("Square of :%f\n",square(a));


    float b;
    printf("Enter the number :");
    scanf("%f",&b);
    printf("circule of :%f\n",circle(b));

    float c;
    float d;
    printf("Enter the number :");
    scanf("%f",&c);
    printf("Enter the number :");
    scanf("%f",&d);
    printf("rectangle :%f\n",rectangle(c,d));

    return 0;
}


float square(float a){
    return a*a;

}
float circle(float b){
    return 3.14*b*b;
}
float rectangle(float c, float d){
    return c*d;
}
*/
// Array is a collection of item it store spcific memory location

// Array
/*#include<stdio.h>
int main(){
    int mark[6];
    printf("Enter the Account mark :");
    scanf("%d",&mark[0]);

    printf("Enter The State mark :");
    scanf("%d",&mark[1]);

    printf("Enter The Economic mark :");
    scanf("%d",&mark[2]);

    printf("Enter The Gujrati mark :");
    scanf("%d",&mark[3]);

    printf("Enter The English mark :");
    scanf("%d",&mark[4]);

    printf("Enter The Hindi mark :");
    scanf("%d",&mark[5]);

    printf("Account =%d  ", mark[0]);
    printf("State=%d  ", mark[1]);
    printf("Economic=%d  ", mark[2]);
    printf("Gujarati=%d  ", mark[3]);
    printf("English=%d   ", mark[4]);
    printf("Hindi=%d   ", mark[5]);

    return 0;
}
*/

// write a program to entr price of 3 item and print their final cost with GST.

/*#include<stdio.h>
int main(){
    float price[3];
    printf("Enter The 3 price  :  ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Enter the 1 price %f\n",price[0]+(0.18*price[0]));
    printf("Enter the 2 price %f\n",price[1]+(0.18*price[1]));
    printf("Enter the 3 price %f\n",price[2]+(0.18*price[2]));
    return 0;
}*/
// pointer Arithmetic

/*#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("ptr=%u",ptr);
    ptr++;
    printf("ptr=%u",ptr);
    ptr --;
    printf("ptr=%u",ptr);

    return 0;
}*/

// Traverse of Array element is write index 0,1,2,3,...
/*#include<stdio.h>
int main(){
    int add[5];
    // int *ptr=&add[0];
    for(int i=0;i<=5;i++){
        printf("% index :",i);
        scanf("%d",&add[i]);
       

    }
    // for(int i=0;i<=5;i++){
    //     printf("%d index=%d\n",i,add[i]);
    // }
    return 0;
}


// Arrays as function Argument
// 1D array
/*#include<stdio.h>
void number(int *arr,int n);

int main(){
    int arr[]={1,2,3,4,5,6};

    number(arr,6);
    return 0;
}
void number(int *arr,int n){
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");
}*/

// 2D arrays

/*#include<stdio.h>


int main(){
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;

    marks[1][0]=12;
    marks[1][1]=89;
    marks[1][2]=78;
    printf("%d\t",marks[0][0]);
    printf("%d\t",marks[0][1]);
     printf("%d\t",marks[0][2]);

      printf("%d\t",marks[1][0]);
       printf("%d\t",marks[1][1]);
        printf("%d\t",marks[1][2]);
    return 0;
}*/
/*
#include<stdio.h>
int  mark(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d",mark(arr,6));
    return 0;

}

int mark(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 ==0){
            count ++;
        }
    }
    return count;
}
*/
// fibonachi squence

/*#include<stdio.h>
int main(){
    int n;
    printf("enter the");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
    }
*/
// chapter-8 string

/*#include<stdio.h>
int main(){
    char name[]={"Gopal"};
    char lname[]={"Gohel"};
    printf(name);
    printf(lname);
    return 0;
}*/

/*#include<stdio.h>
void hello(char arr[]);
int main(){
    char name[]={"Gopal"};
    char lname[]={"Gohel"};

    hello(name);
    hello(lname);
    return 0;
}


void hello(char arr[]){
    for(int i=0; arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}*/
/*
#include<stdio.h>
void str1(char arr[]);

int main(){
    char name[20];
    gets(name);            //gets   ,fgets(name,stdin)
    puts(name);            // puts


    return 0;

}
void str(char arr[]){
    for(int i=0; arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
*/

/*#include<stdio.h>
void str1(char arr[]);

int main(){
    char *name="hello word";
    puts(name);
    name="hello gopal";            //gets   ,fgets(name,stdin)
    puts(name);                    // puts


    return 0;

}
void str(char arr[]){
    for(int i=0; arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}*/

// string of length
/*#include<stdio.h>
int len(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("length is :%d",len(name));
    return 0;
}
int len(char arr[]){
    int count=0;
    for(int i=0;arr[i] !='\0';i++){
        count++;

    }
    return count-1;
}
*/
/*#include<stdio.h>
int vowel(char str[]);

int main(){
    char str[]="gopal";
    printf("Vowel ch %d",vowel(str));


}
int vowel(char str[]){
    int count=0;
    for(int i=0;str[i] !='\0';i++){
        if(str[i]=='a' ||  str[i]=='e' || str[i]=='i' ||  str[i]=='o' || str[i]=='u' ){


        count ++;
        }
    }
    return count;
}*/
// chapter-9 structure
// write a program to print float,string,character
/*#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    // s1.name="gopal";
    strcpy(s1.name,"gopal\n");
    printf("name =%s",s1.name);
    printf("roll mo=%d\n",s1.roll);
    printf("cgpa=%f\n",s1.cgpa);
}*/
/*
#include<stdio.h>
#include<string.h>
struct student{
int roll;
char name[100];
float cgpa;
};

int main(){
    struct student s1;
    s1.roll=100;
    s1.cgpa=9.10;
    printf("name =%s","gopal\n",s1.name);
    printf("roll =%d\n",s1.roll);
    printf("cgpa =%f\n",s1.cgpa);


    struct student s2;
    s2.roll=300;
    s2.cgpa=4.10;
    strcpy(s2.name,"jay");
    printf("name =%s","jay\n",s2.name);
    printf("roll =%d\n",s2.roll);
    printf("cgpa =%f\n",s2.cgpa);
    return 0;
}
*/
/*#include<stdio.h>
int main(){
    int n;

    printf("Enter the number  :");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}*/
/*#include <stdio.h>

int main(){
    int a;
    int b;
    float result;
    char ch;
    printf("Ente the num1:");
    scanf("%d",&a);
    printf("Ente the operation(+,-):");
    scanf("%c\n",&ch);

    printf("Ente the num2:");
    scanf("%d",&b);


    switch (ch)
    {
        case '+':result=a+b;


        break;
        case '-':result=a-b;

        break;

    default:printf("wrong is code");
        break;
    }
    return 0;
}
*/

// #include <stdio.h>

// int main()
// {

//     float num1;
//     float num2;
//     char op;
//     float result;

//     printf("Enter the number 1 :");
//     scanf("%f", &num1);

//     printf("Enter the number 2 ");
//     scanf("%f", &num2);
//     printf("Enter the number operation(+,-,*,/)) :");
//     scanf(" %c", &op);           //Agd space mukvi jaruri che//
//     switch (op)
//     {
//     case '+':
//         result = num1 + num2;
//         printf("%f", result);

//         break;
//     case '-':
//         result = num1 - num2;
//         printf("%f", result);
//         break;
//     case '*':
//         result = num1 * num2;
//         printf("%f", result);
//         break;
//     case '/':
//         result = num1 / num2;
//         printf("%f", result);
//         break;

//     default:
//         printf("Wrong code");
//         break;
//     }
//     return 0;
// }

/*#include<stdio.h>
int sum(int a);
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);

    // printf("enter second number");
    // scanf("%d",&b);

    int s=sum(a);
    printf("%d",s);
    return 0;
}
int sum(int a){
    return a*a;
}*/
//    Function 1 type example
// #include<stdio.h>

// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b,c;
//     printf("Enter1     :");
//     scanf("%d",&a);
//     printf("Enter2       :");
//     scanf("%d",&b);
//     c=sum(a,b);
//     printf("%d",c);
//     return 0;
// }

//  Funtion 2 type example

/*#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b,c;

    printf("Enter the first number   :");
    scanf("%d",&a);
    printf("Enter the second number   :");
    scanf("%d",&b);
    c=sum(a,b);
    printf("%d",c);
    return 0;

    }
    int sum(int a,int b){
        return a+b;

    }*/

/* #include<stdio.h>
 int fact(int number){
     if(number==1  || number==0){
         return 1;
     }
     else{4=u74.0            return(number * fact(number-1));
     }
 }
 int main(){
     int num;
     printf("Enter the fact");
     scanf("%d"[phe  ],&num);
     printf(" The Factorial  of%d is  %d\n",num,fact(num));
     return 0;
 }
 */
// chapter -6 Pointer
// #include<stdio.h>
// int main(){
//     int age=22;
//     int *ptr=&age;
//     int _age=*ptr;
//     printf("%d",_age);
//     return 0;
// }

// adderess of age

// #include<stdio.h>
// int main(){

//     int age=22;
//     int *ptr=&age;
//     // address of &age  hxadecimal(0016ff18)
//     printf("%p\n",&age);
//     // addrss of &age but usigned int(6422296)
//     printf("%u\n",&age);
//     // address of age and ptr same adderess
//     printf("%u\n",ptr);
//     // address of ptr(&ptr)
//     printf("%u\n",&ptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age=22;
//     int *ptr=&age;
//     printf("%d\n",*ptr);
//      printf("%d\n",age);
//      printf("%d\n",*(&age));
//     return 0;
// }

// function
// #include <stdio.h>
// int per(float a, float b, float c, float d, float e, float f);
// int main()
// {
//     float a;
//     printf("Entr The Guj marks  :");
//     scanf("%f", &a);

//     float b;
//     printf("Entr The Guj marks  :");
//     scanf("%f", &b);

//     float c;
//     printf("Entr The Account marks  :");
//     scanf("%f", &c);

//     float d;
//     printf("Entr The Eco marks  :");
//     scanf("%f", &d);

//     float e;
//     printf("Entr The BA marks  :");
//     scanf("%f", &e);

//     float f;
//     printf("Entr The Eng marks  :");
//     scanf("%f", &f);

//     float sum = per(a, b, c, d, e, f);
//     printf("Sum of 6 Number   :  %f:", sum);

//     return 0;
// }

// int per(float a, float b, float c, float d, float e, float f)
// {
//     return a + b + c + d + e + f;
// }

/*#include<stdio.h>
int main(){
    int marks[6];
    printf("Enter the m marks\n");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    scanf("%d",&marks[5]);
    scanf("%d",&marks[6]);

    int sum=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]+marks[6]);
    int avg=sum*100/700;
   
    
    
     printf("Account  =  %d ,BA=  %d  , Gujarati  =   %d  ,Sp  =  %d  ,English  =  %d, Economic =  %d,State  =   %d \n",marks[0],marks[1],marks[2],marks[3],marks[4],marks[5],marks[6]);
     printf("Total Marks   :   %d\n",sum);
     printf("Average      :    %d\n",avg);

   if(avg >=90 ){
        printf(" Grade   :\tA\n");
    }
    else if(avg >=80){
        printf("Grade   :\tB\n");
    }
    else if(avg >=70){
        printf("Grade   :\tC\n");
    }
    else if(avg >=60){
        printf("Grade   :\tD\n");
    }
    else if(avg >=50){
        printf("Grade   :\tE\n");
    }
    else if(avg <=30){
        printf("FAILL");
    }
    return 0;

    
}
*/
#include<stdio.h>
int main(){
    int a=10;int b=20;
    printf("%d",a+b);
    return 0;
}