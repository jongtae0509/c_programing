//�����Ʈ ����_������� ���� �ø��� 

#include<stdio.h>

//���� �� ����� ����ϴ� �Լ�
void print(int a[], int n){
	int i;
	printf("\n���� ��� : ");
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
	for(i=n-1;i>=0;i--){
		for(j=n-2;j>=k;j--){
			if(arr[j+1] < arr[j]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		k++;	//��� Ƚ�� ���̱� 
	}
	print(arr,n);	//����ϴ� �Լ� ȣ�� 
}
