#include<stdio.h>
int main(){
	int i,j;	//���� ���� 
	
	//���� �ݺ����ȿ��� �ϳ��� �������� ������ i��j�� ������ *��� �ƴϸ� ���� ���
	for(i=6;i>0;i--){	 
		for(j=0;j<=6;j++){
			if(i==j) printf("*");
			else printf(" ");
		}
		printf("\n");	// �� �ٲٱ� 
	}
}
