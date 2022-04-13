#include <stdio.h>

int main(){
	char str[1000]={},key[1000]={};	//문자열과 암호키를 담을 변수 선언 
	int i;	// 변수 선언 
	printf("암호화할 문자열을 입력하세요 : ");
	scanf("%s",str);	//문자열 입력받기 
	printf("암호키를 입력하세요 (암호화 할 문자열보다 같거나 길게) : ");	//암호키가 더 짧으면 문자열 일부만 암호화됨 
	scanf("%s",key);	//암호키 입력받기 
	
	for(i=0;str[i]!=NULL;i++) str[i]^=key[i];	//암호화 진행 
	printf("암호화된 문자열은 \"%s\" 입니다\n",str); 
		
	for(i=0;str[i]!=NULL;i++) str[i]^=key[i];	//복호화 진행 
	printf("복호화된 문자열은 \"%s\" 입니다",str);
	
} 
