//��հ� ǥ������ ��� 
#include<stdio.h>
#include<math.h>

int main(){
	// ���� ���� 
	int i,n,tmp;
	double sum=0,sum2=0;	
	int arr[100] = {0, };
	// �Է¹ޱ� 
	printf("��� ���� �Է��Ҳ����� : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d��° ���� �Է��ϼ��� : ",i+1);
		scanf("%d",&tmp);
		arr[i]=tmp;
		sum+=tmp;
	}
	// ����ϱ� 
	for(i=0;i<n;i++) sum2+=(arr[i]-(sum/n))*(arr[i]-(sum/n));
	printf("%d���� ���� ����� : %lf, ǥ�������� %lf �Դϴ�.",n,sum/n,sqrt(sum2/n));
}
