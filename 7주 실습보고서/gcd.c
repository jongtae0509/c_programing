// 두 수의 최대공약수 구하는 프로그램 
#include<stdio.h>

int main(){
	int a,b,c,temp,check = 0,ori_a,ori_b;	//사용할 변수 선언 
	// 두 수를 입력받는다 
	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d",&a);
	printf("두번째 숫자를 입력하세요 : "); 
	scanf("%d",&b);
	
	// 변수 a,b는 연산에 사용하기 때문에 
	// 나중에 출력할때 쓸 변수에 a,b값 저장 
	ori_a = a;
	ori_b = b;
	
	// 두 수를 내림차순으로 정렬 
	if(a<b){
		temp = a;
		a = b;
		b = temp;
		check = 1;
	}	
	
	// 유클리드 호제법 사용
	while(b!=0){	// b가 0이면 종료 
		c=a%b;	// c는 a/b의 나머지 
		a=b;	// a는 b 
		b=c;	// b는 c 
	}	//를 반복한다
	
	// 출력 
	printf("%d, %d의 최대공약수는 %d 입니다.",ori_a,ori_b,a);
}
