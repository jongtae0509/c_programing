// 20220506 박종태
// a와 b의 공약수 구하는 프로그램 
#include<stdio.h>

int main(){
	// 사용할 변수 및 배열 선언 
	int a,b;
	int i,j,cnt=0;
	int arr[10000];
	// 입력받기 
	printf("첫번째 수를 입력하세요 : ");
	scanf("%d",&a);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d",&b);
	// 일단 첫번째 수의 약수 전부 구해서 배열에 넣기 
	for(i=1;i<=a;i++){
		if(a%i==0){
			arr[cnt]=i;
			cnt++;
		}
	}
	// 두번째 수의 약수를 구해서 그 약수가 아까 저장해둔 배열에 있으면 출력하고 없으면 출력하지 않음(공통된 약수 판별) 
	printf("%d 그리고 %d의 공약수는 ",a,b);
	for(i=1;i<=b;i++){
		for(j=0;j<cnt;j++){
			if(b%i==0&&i==arr[j]) printf("%d ",i);
		}	
	}
	printf("입니다.");
}
