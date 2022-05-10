//평균과 표준편차 계산 
#include<stdio.h>
#include<math.h>

int main(){
	// 변수 선언 
	int i,n,tmp;
	double sum=0,sum2=0;	
	int arr[100] = {0, };
	// 입력받기 
	printf("몇개의 수를 입력할껀가요 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d번째 수를 입력하세요 : ",i+1);
		scanf("%d",&tmp);
		arr[i]=tmp;
		sum+=tmp;
	}
	// 계산하기 
	for(i=0;i<n;i++) sum2+=(arr[i]-(sum/n))*(arr[i]-(sum/n));
	printf("%d개의 수의 평균은 : %lf, 표준편차는 %lf 입니다.",n,sum/n,sqrt(sum2/n));
}
