//��������
#include<stdio.h>

// �ּҰ� �Լ� 
int min_(int a[],int st,int n){
	int i,mid;
	mid = st;
	for(i=st+1;i<n;i++) if(a[i]<a[mid]) mid = i;
	return mid;
}

int main(){
	// ���� ���� 
	int n,i,j,min,t;
	int arr[100];
	
	// �Է¹ޱ� 
	printf("��� ���� �����ұ�� ? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d��° ���� �Է��ϼ��� : ",i+1); 
		scanf("%d",&arr[i]);	
	}
	
	// �������� 
	for(i=0;i<n-1;i++){
		min = min_(arr,i,n);
		t = arr[min];
		arr[min] = arr[i];
		arr[i] = t;
	}
	
	//���İ�� ��� 
	printf("���İ�� : ");
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	
} 
