#include<stdio.h>
#include<math.h>
int main(){
	//���� ���� 
	double height[100],weight[100],bmi[100],py[100],py2,b_aver=0,aver=0;
	int birth[100],cnt[3]={0, };
	int n,i,age,code;
	
	// �л� �� �Է¹ޱ� 
	printf("�л��� ���� �Է��ϼ��� : ");
	scanf("%d",&n);
	
	//�Է¹����鼭 �ٷ� bmi ��� �� �迭�� �ֱ� 
	for(i=0;i<n;i++) {
		printf("%d��° �л��� Ű�� �Է��ϼ���(cm) : ",i+1);
		scanf("%lf",&height[i]);
		printf("%d��° �л��� �����Ը� �Է��ϼ���(kg) : ",i+1);
		scanf("%lf",&weight[i]);
		printf("%d��° �л��� ��������� �Է��ϼ���(8�ڸ�) : ",i+1);
		scanf("%d",&birth[i]);
		
		bmi[i]=weight[i]/pow(height[i]/100,2);
		b_aver+=bmi[i];
	}
	//��� ���ϱ�  
	b_aver/=n;
	//�л� ���ϱ� 
	for(i=0;i<n;i++) aver+=pow(bmi[i]-b_aver,2);
	aver/=n;
	//ǥ������ ���ϱ� 
	py2 = sqrt(aver);
	//ǥ�� ���� ���ϱ�
	for(i=0;i<n;i++) py[i]=10*(bmi[i]-b_aver)/py2+50;
	//ǥ������ 40�̸� ��ü��, 40�̻� 60���� ���� , 60�ʰ� ��ü�� 
	for(i=0;i<n;i++){
		if(py[i]<40) cnt[0]++;
		else if(py[i]<=60) cnt[1]++;
		else cnt[2]++;
	}
	// 1,2,3,4 �߿� �Է¹ް� ��ȣ�� �ش��ϴ°� ��� 
	while(1){
		printf("\n\n1. bmi ǥ������ ��޺� �л��� Ȯ��\n2. 18�� �̻� 20�� �̸� �л����� ���ϱ�\n3. �л����� ǥ������ Ȯ��\n4. ���α׷� ����.");
		printf("1,2,3,4 �߿� �ϳ��� �Է��ϼ��� : ");
		scanf("%d",&code);
		if(code == 1){
			printf("\n��ü�� : %d��, ���� : %d��, ��ü�� %d��",cnt[0],cnt[1],cnt[2]);	
		}
		else if(code == 2){
			for(i=0;i<n;i++){	// �ѱ����� ��� �� ���
				age = 2022-birth[i]/10000+1; 
				if(age<20&&age>=18) printf("\n%d���л�\nŰ : %lf\n������ : %lf\nbmi : %lf",i+1,height[i],weight[i],bmi[i]);
			}
		}
		else if(code == 3){
			for(i=0;i<n;i++) printf("\n%d�� �л��� ǥ������ : %lf",i+1,py[i]);
		}
		else if(code == 4) break;
		else printf("\n�߸��� �Է��Դϴ� �ٽ� �Է����ּ���.\n");
	}
}
