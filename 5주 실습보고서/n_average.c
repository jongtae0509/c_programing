#include<stdio.h>

int main(){
	int n,i;	// 변수 선언 
	double sum=0,tmp;	// 평균구할라고 실수로 변수 선언 
	printf("n을 입력하세요 : ");
	scanf("%d",&n);	// n을 입력받음 
	
	for(i=1;i<=n;i++){ //n번 반복되는 반복문 
		printf("%d번째 수를 입력하세요 : ",i);
		scanf("%lf",&tmp);	//수를 tmp에 입력받음
		sum+=tmp;	// 입력받은 tmp를 sum에 더하기 
	}
	
	printf("\n%d개의 수들의 평균은 %.2lf입니다.",n,sum/n);	// 평균을 소수점 두번째 자리까지 출력하기 
	
}
