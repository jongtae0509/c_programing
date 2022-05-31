//버블소트 구현_무거운거 아래로 내리기 

#include<stdio.h>

//정렬 후 결과를 출력하는 함수 
void print(int a[], int n){
	int i;
	printf("\n정렬 후 결과 : ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

int main(){
	// 사용하는 변수 및 배열 선언 
	int n,i,j,k=0,cnt=0;
	int arr[100]={0, };
	
	//입력받기 
	printf("자료의 수를 입력하세요 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d번째 수를 입력하세요 : ",i+1); 
		scanf("%d",&arr[i]);	
	}
	
	//버블소트 
	for(i=0;i<n;i++){
		for(j=0;j<n-1-k;j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		k++;	//계산 횟수 줄이기 
	}
	print(arr,n);	// 출력해주는 함수 호출 
}
