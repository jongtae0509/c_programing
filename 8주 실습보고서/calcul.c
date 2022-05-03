// 간단한 계산기 구현 

#include<stdio.h>

int main(){
	// 사용할 변수 선언 
	char op[100];
	int x,y;
	
	printf("수식을 입력하시오 : ");
	// 수식 입력받기 
	scanf("%d %s %d",&x,op,&y);
	switch(op[0]){	// 계산식 switch 문으로 작성 
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
			else printf("지원되지 않는 연산자 입니다.");
			break;
		case '>':
			if(op[1]=='>') printf("%d",x>>y);
			else if(op[1]=='=') printf("%d",x>=y);
			else printf("지원되지 않는 연산자 입니다.");
			break;
		default:
			printf("지원되지 않는 연산자 입니다.");
			break;
	}
} 
