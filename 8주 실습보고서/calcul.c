// ������ ���� ���� 

#include<stdio.h>

int main(){
	// ����� ���� ���� 
	char op[100];
	int x,y;
	
	printf("������ �Է��Ͻÿ� : ");
	// ���� �Է¹ޱ� 
	scanf("%d %s %d",&x,op,&y);
	switch(op[0]){	// ���� switch ������ �ۼ� 
		case '+':
			printf("%d",x+y);
			break;
		case '-':
			printf("%d",x-y);
			break;
		case '*':
			printf("%d",x*y);
			break;
		case '/':
			printf("%d",x/y);
			break;
		case '<':
			if(op[1]=='<') printf("%d",x<<y);
			else if(op[1]=='=') printf("%d",x<=y);
			else printf("�������� �ʴ� ������ �Դϴ�.");
			break;
		case '>':
			if(op[1]=='>') printf("%d",x>>y);
			else if(op[1]=='=') printf("%d",x>=y);
			else printf("�������� �ʴ� ������ �Դϴ�.");
			break;
		default:
			printf("�������� �ʴ� ������ �Դϴ�.");
			break;
	}
} 
