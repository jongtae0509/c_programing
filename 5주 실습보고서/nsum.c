#include<stdio.h>

int main(){
	int sum=0,i,n;	//���� ���� 
	printf("n�� �Է��ϼ��� : ");
	scanf("%d",&n);	//n�� �Է¹޴´� 
	for(i=1;i<=n;i++) sum+=i;	//1���� n���� �����ϴ� i�� ��� sum�� ���ϱ� 
	printf("1���� n������ ���� %d �Դϴ�.",sum);	//��� 
}
