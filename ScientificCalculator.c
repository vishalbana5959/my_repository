#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareroot();
void factorial();
void logarithm();
void trignometric();
void Lequation();
void quadratic();
int main() {
    char operation;
    printf("enter + for addition\n");
    printf("enter - for subtraction\n");
    printf("enter * for multiplication\n");
    printf("enter / for division\n");
    printf("enter ^ for power operation\n");
    printf("enter q to find the squareroot of given number\n");
    printf("enter ! to find factorial\n");
    printf("enter t to find the value of trigo ratio\n");
    printf("enter l for logarithm function\n");
    printf("enter e to solve linear equation\n");
    printf("enter $ to solve quadratic equation\n");
    printf("enter @ if you want to quit these program\n");
     while(1) {
        printf("enter the operation you want to do : ");
    scanf(" %c",&operation);
    switch(operation) {
        case '+'  : addition();
                    break;
        case '-'  : subtraction();
                    break;
        case '*'  : multiplication();
                    break;
        case '/'  : division();
                    break;
        case '^' : power();
                    break;
        case 'q' : squareroot();
                    break;
        case '!' : factorial();
                    break;
        case 't' : trignometric();
                    break;
        case 'l' : logarithm();
                    break;
        case 'e' : Lequation();
                    break;
        case '$' : quadratic();
                    break;
        case '@' :  exit(0);
                    break;
                    
        default :  printf("enter the valid operation \n");
                    break; 
    } 
    }
    return 0;
}
void addition() {

    float a,b;
    printf("enter the numbers you want to add\n");
    printf("enter the first number : ");
    scanf("%f",&a);
    printf("enter the second number : ");
    scanf("%f",&b);
    printf("the sum of two numbers is %f\n",a+b);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%f + %f = %f \n",a,b,a + b);
    fclose(fptr);
}
void subtraction() {
    float a,b;
    printf("enter the numbers you want to subtract\n");
    printf("enter the first number : ");
    scanf("%f",&a);
    printf("enter the second number : ");
    scanf("%f",&b);
    printf("the subtraction of the two number is %f\n",a-b);
      FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%f - %f = %f \n",a,b,a - b);
    fclose(fptr);
}
void multiplication() {
    float a,b;
    printf("enter the numbers you want to multiply\n");
    printf("enter the first number : ");
    scanf("%f",&a);
    printf("enter the second number : ");
    scanf("%f",&b);
    printf("the multiplication of the two numbers is %f\n",a*b);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%f * %f = %f \n",a,b,a * b);
    fclose(fptr);
}
void division() {
    float a,b;
    printf("enter the numbers you want to divide\n");
    printf("enter the first number : ");
    scanf("%f",&a);
    printf("enter the second number : ");
    scanf("%f",&b);
    if(b != 0) {
    printf("the division of two numbers is %f\n",a/b);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%f / %f = %f \n",a,b,a / b);
    fclose(fptr);
    }
    else {
        printf("division by 0 is not possible\n");
    }
}
void power() {
    double a,b,e;
    printf("enter the base and power\n");
    printf("enter the base : ");
    scanf("%lf",&a);
    printf("enter the power : ");
    scanf("%lf",&b);
    e = pow(a,b);
    printf("the result is %lf\n",e);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%lf^%lf = %lf \n",a,b,e);
    fclose(fptr);
}
void squareroot() {
    double a,b;
    if(a >= 0) {
    printf("enter the number whose squareroot you want\n");
    printf("enter the number : ");
    scanf("%lf",&a);
    b = sqrt(a);
    printf("the squareroot of two numbers is %lf\n",b);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "squareroot of %lf = %lf \n",a,b);
    fclose(fptr);
    }
    else {
        printf("squareroot of negative number is not possible\n");
    }
}
void factorial() {
    double n ,fact;
    printf("enter the number : ");
    scanf("%lf",&n);
    fact = 1;
    if(n > 0) {
        for(int i=1; i <= n; i++) {
            fact *= i;
        }
        printf("factorial of the number is %lf\n",fact);
        FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "%lf! = %lf \n",n,fact);
    fclose(fptr);
    }
}
void trignometric() {
    int choice;
    double angle_degree,angle_radian,pi=3.141592;
    FILE *fptr = fopen("history.txt","a");
    printf("Choose a trigonometric ratio:\n");
    printf("1. Sine\n2. Cosine\n3. Tangent\n4. Cosecant\n5. Secant\n6. Cotangent\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degree);
    angle_radian = angle_degree * pi / 180;
    switch (choice) {
        case 1:
            printf("Sine: %lf\n", sin(angle_radian));
            fprintf(fptr,"sin(%lf) = %lf\n",angle_degree,sin(angle_radian));
            break;
        case 2:
            printf("Cosine: %lf\n", cos(angle_radian));
            fprintf(fptr,"cos(%lf) = %lf\n",angle_degree,cos(angle_radian));
            break;
        case 3:
            printf("Tangent: %lf\n", tan(angle_radian));
            fprintf(fptr,"tan(%lf) = %lf\n",angle_degree,tan(angle_radian));
            break;
        case 4:
            printf("Cosecant: %lf\n", 1 / sin(angle_radian));
            fprintf(fptr,"cosec(%lf) = %lf\n",angle_degree,1 / sin(angle_radian));
            break;
        case 5:
            printf("Secant: %lf\n", 1 / cos(angle_radian));
            fprintf(fptr,"sec(%lf) = %lf\n",angle_degree,1 /cos(angle_radian));
            break;
        case 6:
            printf("Cotangent: %lf\n", 1 / tan(angle_radian));
            fprintf(fptr,"cot(%lf) = %lf\n",angle_degree,1 / tan(angle_radian));
            break;
        default:
            printf("Invalid choice\n");
    }
    fclose(fptr);
}
void logarithm() {
    double x,base,result;
    printf("enter the number whose log you want to find : ");
    scanf("%lf",&x);
    printf("enter base : ");
    scanf("%lf",&base);
    if(x > 0 && base != 1 && base > 0) {
    result = (log(x) /log(base));
    printf("the value is %lf\n",result);
    FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "log(%lf) base %lf = %lf \n",x,base,result);
    fclose(fptr);
    }
    else {
        printf("the domain of log must be > 0 and base > 0 and base != 0");
    }
}
void Lequation() {
    int n;
    double x,y,z;
    double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
    double det,det1,det2,det3;
    printf("enter 2 for two variables and 3 for three variables : ");
    scanf("%d",&n);
    if(n == 2) {  //ax + by = c
       printf("enter cofficient of x and y and enter constant term respectively in first equation\n");
       scanf("%lf%lf%lf",&a1,&b1,&c1);
       printf("enter cofficient of x and y and enter constant term respectively in second equation\n");
       scanf("%lf%lf%lf",&a2,&b2,&c2);
       det = (a1*b2)-(a2*b1);
       det1 = (c1*b2)-(b1*c2);
       det2 = (a1*c2)-(a2*c1);
       if(det != 0){
       x = det1 / det;
       y = det2 / det;
       printf(" x = %lf\n",x);
       printf(" y = %lf\n",y);
       FILE *fptr;
    fptr = fopen("history.txt","a");
    fprintf(fptr, "x = %lf \n",x);
    fprintf(fptr, "y = %lf \n",y);
    fclose(fptr);
       }
       else {
        printf("the system of linear equation is inconsistance\n");
       }
    }
    if(n == 3) {  // ax + by cz = d
       printf("enter cofficient of x,y and z and enter constant term respectively in first equation\n");
       scanf("%lf%lf%lf%lf",&a1,&b1,&c1,&d1);
       printf("enter cofficient of x,y and z and enter constant term respectively in second equation\n");
       scanf("%lf%lf%lf%lf",&a2,&b2,&c2,&d2);
       printf("enter cofficient of x,y and z and enter constant term respectively in third equation\n");
       scanf("%lf%lf%lf%lf",&a3,&b2,&c3,&d3);
       det = a1*((b2*c3)-(b3*c2)) - b1*((a2*c3)-(a3*c2)) + c1*((a2*b3) - (a3*b2));
       det1 = d1*((b2*c3)-(b3*c2)) - b1*((d2*c3)-(d3*c2)) + c1*((d2*b3) - (d3*b2));
       det2 = a1*((d2*c3)-(d3*c2)) - d1*((a2*c3)-(a3*c2)) + c1*((a2*d3) - (a3*d2));
       det3 = a1*((b2*d3)-(b3*d2)) - b1*((a2*d3)-(a3*d2)) + d1*((a2*b3) - (a3*b2));
       if( det != 0) {
       x = det1 / det;
       y = det2 / det;
       z = det3 / det;
       printf(" x = %lf\n",x);
       printf(" y = %lf\n",y);
       printf(" z = %lf\n",z);
       FILE *fptr;
       fptr = fopen("history.txt","a");
       fprintf(fptr, "x = %lf \n",x);
       fprintf(fptr, "y = %lf \n",y);
       fprintf(fptr, "z = %lf \n",z);
       fclose(fptr);
    }
    else {
        printf("the system is not consistance\n");
    }
    }
}
void quadratic() { //ax^2 + bx +c =0
    double x1,x2,a,b,c,D,e;
    printf("enter the cofficient of x square and x and enter constant term respectively\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    D = ((b*b) - (4*a*c));
    if(D >= 0){
    e = sqrt(D);
    x1 = (-b + e)/(2*a);
    x2 = (-b - e)/(2*a);
    printf(" x1 = %lf\n",x1);
    printf(" x2 = %lf\n",x2);
    FILE *fptr;
       fptr = fopen("history.txt","a");
       fprintf(fptr, "x1 = %lf \n",x1);
       fprintf(fptr, "x2 = %lf \n",x2);
       fclose(fptr);
    }
    else {
        printf("the equation has no real solution\n");
    }
}