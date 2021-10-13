     /*calculator*/
     #include<stdio.h>
     int main() {
     char operator;
     double num1, num2,i;
     printf("Enter an operator (+, -, *,/): ");
     scanf("%c", &operator);
     
    
     switch (operator) {
     case '+':
     printf("Enter num1,num2: ");
     scanf("%lf %lf",&num1,&num2);
     printf("%.2lf + %.2lf = %.2lf", num1,num2, num1 + num2);
     break;
     case '-':
     printf("Enter num1,num2: ");
     scanf("%lf %lf",&num1,&num2);
     printf("%.2lf - %.2lf = %.2lf", num1,num2, num1 - num2);
     break;
     case '*':
     printf("Enter num1,num2: ");
     scanf("%lf %lf",&num1,&num2);
     printf("%.2lf * %.2lf = %.2lf",  num1,num2, num1 * num2);
     break;
     case '/':
     printf("Enter num1,num2: ");
     scanf("%lf %lf",&num1,&num2);
     printf("%.2lf / %.2lf = %.2lf", num1,num2, num1 / num2);
     break;
  
    default:
      printf("invalid operator");
    }
    return 0;
}