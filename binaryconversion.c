#include<stdio.h>
void modifyBit(int,int);
int main(){
	int n,p;
	printf("Enter the number=");
	scanf("%d",&n);
	printf("Enter the position bit=");
	scanf("%d",&p);
	modifyBit(n,p);
	return 0;
}
void modifyBit(int n,int p){
	int binary[50],ind=0,i,c=-1,r=1,sum=0;
	while(n>0){
		binary[ind]=n%2;
		n=n/2;
		
		ind++;
	}
	printf("The binary conversion of number = \n");
	for(i=ind-1;i>=0;i--){
		printf("%d",binary[i]);
	}
	if(binary[p-1]==0){
		binary[p-1]=1;
	}
	printf("\nThe binary representation after modification = \n");
	for(i=ind-1;i>=0;i--){
		printf("%d",binary[i]);
	}
	for(i=0;i<ind;i++){
		c++;
		if(binary[i]==1){
			 while(c>0){
			 	r=r*2;
			 	c--;
			 }
			 sum=sum+r;
		}
	}
	printf("\nDecimal conversion after modification=%d",sum);
}
