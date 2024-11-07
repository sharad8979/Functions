
#include <stdio.h>
int modifyBit(int ,int);
int main() {
    int n,p,res;
    printf("Enter the number=");
    scanf("%d",&n);
    printf("Enter the bit position which you want to modified=");
    scanf("%d",&p);
    res = modifyBit(n,p);
     printf("\nOriginal number = %d",n);
     printf("\nNumber after modification = %d",res);
    return 0;
}

int modifyBit(int n , int p){
    int r;
    r = 1<<p;
    return n^r;
}



