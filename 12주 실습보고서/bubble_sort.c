//�����Ʈ ����_���ſ�� �Ʒ��� ������ 

#include<stdio.h>

//���� �� ����� ����ϴ� �Լ� 
void print(int a[], int n){
	int i;
	printf("\n���� �� ��� : ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

int main(){
	// ����ϴ� ���� �� �迭 ���� 
	int n,i,j,k=0,cnt=0;
	int arr[100]={0, };
	
	//�Է¹ޱ� 
	printf("�ڷ��� ���� �Է��ϼ��� : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d��° ���� �Է��ϼ��� : ",i+1); 
		scanf("%d",&arr[i]);	
	}
	
	//�����Ʈ 
	for(i=0;i<n;i++){
		for(j=0;j<n-1-k;j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		k++;	//��� Ƚ�� ���̱� 
	}
	print(arr,n);	// ������ִ� �Լ� ȣ�� 
}
