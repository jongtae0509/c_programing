#include<stdio.h>
//��� ���ؼ� ǥ�� ����ϴ� �Լ� 
void aver_print(int a[][3],int n){
	int i,j=0;	//���� ����  
	printf("\n========================================================\n");
	printf("		����	 ����	  ����	  �л��� ���\n");
	
	// ��հ�� �� ��� 
	for(i=0;i<n;i++){
		double stu_sum = 0;
		for(j=0;j<3;j++){
			if(j==0) printf("%d�� �л� : ",i+1);	
			stu_sum += a[i][j];
			printf("%8d ",a[i][j]);
			if(j==2) printf("%10.3lf\n",stu_sum/3);
		}
	}
	printf("������ ��� : ");
	for(i=0;i<3;i++){
		double sub_sum = 0;
		for(j=0;j<n;j++) sub_sum += a[j][i];
		printf("%8.3lf ",sub_sum/n);
	}
}

int main(){
	//����� ���� ���� 
	int arr[100][3]={0, };
	int n,i;
	
	//�Է¹ޱ� 
	printf("�л��� ����ΰ���? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d�� �л��� ���� ������ �Է��ϼ��� : ",i+1);
		scanf("%d",&arr[i][0]);
		printf("%d�� �л��� ���� ������ �Է��ϼ��� : ",i+1);
		scanf("%d",&arr[i][1]);
		printf("%d�� �л��� ���� ������ �Է��ϼ��� : ",i+1);
		scanf("%d",&arr[i][2]);
	} 
	aver_print(arr,n);	//��� ���ϰ� ����ϴ� �Լ� ȣ�� 
	
}
