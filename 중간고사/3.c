// 20220506 박종태 
// 10개의 수의 자리수를 각각 확인
#include<stdio.h>

int main(){
	// 사용할 변수 선언 
	int n,i,cnt=0;
	
	// 10번 반복 
	for(i=1;i<=10;i++){
		// 입력받기 
		printf("%d번째 수를 입력하세요 : ",i);
		scanf("%d",&n);
		// 자리수 계산 
		while(n!=0){
			n/=10;
			cnt++;
		}
		// 출력 
		printf("%d번째 수는 %d자리수 입니다.\n",i,cnt);
		cnt=0;
	}
} 
