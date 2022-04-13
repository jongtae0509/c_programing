#include<stdio.h>

int main(){
	int sum=0,i,n;	//변수 선언 
	printf("n을 입력하세요 : ");
	scanf("%d",&n);	//n을 입력받는다 
	for(i=1;i<=n;i++) sum+=i;	//1부터 n까지 증가하는 i를 계속 sum에 더하기 
	printf("1부터 n까지의 합은 %d 입니다.",sum);	//출력 
}
