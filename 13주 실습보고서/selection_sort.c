//선택정렬
#include<stdio.h>

// 최소값 함수 
int min_(int a[],int st,int n){
	int i,mid;
	mid = st;
	for(i=st+1;i<n;i++) if(a[i]<a[mid]) mid = i;
	return mid;
}

int main(){
	// 변수 선언 
	int n,i,j,min,t;
	int arr[100];
	
	// 입력받기 
	printf("몇개의 수를 정렬할까요 ? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d번째 수를 입력하세요 : ",i+1); 
		scanf("%d",&arr[i]);	
	}
	
	// 선택정렬 
	for(i=0;i<n-1;i++){
		min = min_(arr,i,n);
		t = arr[min];
		arr[min] = arr[i];
		arr[i] = t;
	}
	
	//정렬결과 출력 
	printf("정렬결과 : ");
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	
} 
