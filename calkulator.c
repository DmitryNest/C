/*
 ============================================================================
 Name        : calkulator.c
 Author      : =^_^=
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int kom,a,b,c,n,z,f=1;
    printf("Team:\n\t Sum=1\n\t Difference=2\n\t Multiplication=3\n\t Division=4\n\t Degree=5\n\t Factorial=6\n\t If repeat=7 to stop programm\n\t");
    while (z!=7){
    printf("Type the command:");
    scanf("%d",&kom);
    if (kom==1){
        printf("Entered value a=");
        scanf("%d",&a);
        printf("Entered value b=");
        scanf("%d",&b);
        c=a+b;
        printf("Sum=%d\n",c);
    }
    if (kom==2){
        printf("Entered value a=");
        scanf("%d",&a);
        printf("Entered value b=");
        scanf("%d",&b);
        c=a-b;
        printf("difference= %d\n",c);
    }
    if (kom==3){
        printf("Entered value a=");
        scanf("%d",&a);
        printf("Entered value b=");
        scanf("%d",&b);
        c=a*b;
        printf("Multiplication= %d\n",c);
    }
    if (kom==4){
        printf("Entered value a=");
        scanf("%d",&a);
        printf("Entered value b=");
        scanf("%d",&b);
        c=a/b;
        printf("Division= %d\n",c);
   }
    if (kom==5){
        printf("Entered value a=");
        scanf("%d",&a);
        printf("Enter the degree n=");
        scanf("%d",&n);
        if(a>-10 && a<10 && n>0 && n<10){
            for(int i=1; i < n; ++i){
                a=a*2;
            }
            printf("Result= %d\n",a);
        }
        else{
            printf("a does not belong to scope -10<A<10 or n does not belong to scope 0<N<10\n ");
        }
    }
     if  (kom==6){
         printf("Entered value a=");
         scanf("%d",&a);
         while (a>0){
             f*=a;
             a--;
         }
         printf("Factorial= %d\n", f);
     }
     printf("Repeat?=");
     scanf("%d",&z);
  }
}
