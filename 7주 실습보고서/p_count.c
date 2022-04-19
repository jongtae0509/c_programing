// 1부터 n까지의 수에서 p가 몇번 등장하는지 세는 프로그램 
#include<stdio.h>

int main(){
	int n,i,temp,check,cnt=0,p;	//사용할 변수 선언 
	
	// n과 p를 입력받음 조건에 맞지 않는 수 입력시 다시 입력받게 구현 
	while(1){
		printf("n을 입력하세요 (1 <= n): ");
		scanf("%d",&n);
		if(n<=0) printf("잘못된 입력입니다. 다시 입력하세요.\n");
		else break;
	}
	while(1){
		printf("p를 입력하세요 (0 <= p < 10) : ");
		scanf("%d",&p);
		if(p<0||p>9) printf("잘못된 입력입니다. 다시 입력하세요.\n");
		else break;
	}
	

	for(i=1;i<=n;i++){	// i를 1에서 n까지 증가시키며 
		temp = i;	// temp 변수에 i값을 넣고 
		while(temp!=0){	// temp가 0이 될때까지 
			check=temp%10;	// check 변수에 마지막 자리수를 넣고 
			if(p==check) cnt++;	// 그 자리수가 p와 일치하다면 cnt변수를 1 증가 
			temp/=10;	// 다음 자리수를 확인하기 위해서 10을 나누기 
		}	// 를 반복한다 
	}	// 를 반복한다  
	
	// cnt 값을 출력한다
	if(p==2||p==4||p==5||p==9) printf("1부터 %d까지의 수에 %d는 %d번 들어있습니다.",n,p,cnt); 
	else printf("1부터 %d까지의 수에 %d은 %d번 들어있습니다.",n,p,cnt);
}
