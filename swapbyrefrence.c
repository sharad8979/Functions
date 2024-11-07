#include<stdio.h>
void swap(int *,int *);
int main(){
     int a=5,b=10;
     printf("Before swaping : a=%d b=%d",a,b);
     swap(&a,&b);
      printf("\nAfter swaping : a=%d b=%d",a,b);

    return 0;
}
void swap(int * a,int * b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
     
}