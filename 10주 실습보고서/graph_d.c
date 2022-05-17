#include<stdio.h>
int main(){
	int i,j;	//변수 선언 
	
	//이중 반복문안에서 하나는 역순으로 돌리며 i와j가 같으면 *출력 아니면 공백 출력
	for(i=6;i>0;i--){	 
		for(j=0;j<=6;j++){
			if(i==j) printf("*");
			else printf(" ");
		}
		printf("\n");	// 줄 바꾸기 
	}
}
