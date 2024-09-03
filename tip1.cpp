#include <stdio.h>
int n1[]={1,2,3};
int n2[]={4,5,6};
int target;
int main(){
	scanf("%d",&target);
	if(n1[0]+n2[0]==target||n1[0]+n2[1]==target||n1[0]+n2[2]==target||n1[1]+n2[0]==target||n1[1]+n2[1]==target||n1[1]+n2[2]==target||n1[2]+n2[0]==target||n1[2]+n2[1]==target||n1[2]+n2[2]==target)
	  printf("true");
	else
	  printf("false");  	
}
