#include<stdio.h>
int main(){
	//변수 선언 
	int n,cnt=0,i,j,arr[1000]={0, };
	
	// 입력받기 
	printf("숫자를 입력하세요 : ");
	scanf("%d",&n);
	
	// 한자리씩 배열에 저장 
	while(n!=0){
		arr[cnt]=n%10;
		n/=10;
		cnt++;
	}
	
	//출력 
	for(i=cnt-1;i>=0;i--){
		for(j=0;j<arr[i];j++){
			if(j==0) printf("%2d |",arr[i]);
			printf("*");
		}
		printf("\n");
	}
	
} 
