//입력한 수가 짝수인지 검사

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0) printf("%d 짝수입니다.",n);
	else printf("%d 짝수가 아닙니다.",n);
} 
