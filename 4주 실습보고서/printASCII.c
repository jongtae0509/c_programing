#include<stdio.h>

int main(){
	int i; //i 선언 
	for(i=33;i<=127;i++){	// i를 33부터 127까지 증가시키며 반복 
		printf("%d번째 : %c\n",i,i);	//  i번째 아스키코드에 해당하는 문자 출력 
	}
}
