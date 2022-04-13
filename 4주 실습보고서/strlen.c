#include <stdio.h>

int main(){
	char a[1001]={};	// 문자열 선언 (최대 길이 1000)
	printf("문자열을 입력하세요 : ");	//입력하라고 출력 
	scanf("%s",a);	// 문자열 입력받기 
	
	int cnt = 0;	// 문자열의 길이를 셀 변수 선언 
	int i;	//i선언 
	for(i=0;;i++){	// 일단 무한반복하면서 i+1 해주기 
		if(a[i]!=NULL) cnt++;	// null문자가 나올때까지 cnt증가 
		else break;	// null 문자가 나왔으면 반복문 탈출 
	}
	printf("문자열의 길이는 %d 입니다",cnt);	// cnt 출력 
}
