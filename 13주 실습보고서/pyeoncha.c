// 표준편차 계산 
#include <stdio.h>
#include <math.h>

// 평균계산 함수 
double avag(int arr[],int n){
    int i;
    double sum = 0;
    for(i=0;i<n;i++) sum+=arr[i];
    return sum/n;
}

// 표준편차 계산 함수 
double pc(int arr[],int n,int aver){
    int i;
    int array[100];
    for(i=0;i<n;i++) array[i] = pow(arr[i]-aver,2);

    return sqrt(avag(array,n));
}


int main() {
	
	// 선언부분 
    int n,i;
    double average;
    int arr[100];
    
    // 입력받기 
    printf("학생의 수를 입력하세요 : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	printf("%d번째 학생의 점수를 입력하세요 : ",i+1); 
    	scanf("%d",&arr[i]);	
	}
	// 계산및 출력  
    average = avag(arr,n);
    printf("%d명의 학생들의 표준편차는 %.3lf 입니다. ",n,pc(arr,n,average));
}
