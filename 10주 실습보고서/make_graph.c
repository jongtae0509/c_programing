#include<stdio.h>
int main(){
	//���� ���� 
	int n,cnt=0,i,j,arr[1000]={0, };
	
	// �Է¹ޱ� 
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d",&n);
	
	// ���ڸ��� �迭�� ���� 
	while(n!=0){
		arr[cnt]=n%10;
		n/=10;
		cnt++;
	}
	
	//��� 
	for(i=cnt-1;i>=0;i--){
		for(j=0;j<arr[i];j++){
			if(j==0) printf("%2d |",arr[i]);
			printf("*");
		}
		printf("\n");
	}
	
} 
