#include<stdio.h>

int main(){
	int n,i;	// ���� ���� 
	double sum=0,tmp;	// ��ձ��Ҷ�� �Ǽ��� ���� ���� 
	printf("n�� �Է��ϼ��� : ");
	scanf("%d",&n);	// n�� �Է¹��� 
	
	for(i=1;i<=n;i++){ //n�� �ݺ��Ǵ� �ݺ��� 
		printf("%d��° ���� �Է��ϼ��� : ",i);
		scanf("%lf",&tmp);	//���� tmp�� �Է¹���
		sum+=tmp;	// �Է¹��� tmp�� sum�� ���ϱ� 
	}
	
	printf("\n%d���� ������ ����� %.2lf�Դϴ�.",n,sum/n);	// ����� �Ҽ��� �ι�° �ڸ����� ����ϱ� 
	
}
