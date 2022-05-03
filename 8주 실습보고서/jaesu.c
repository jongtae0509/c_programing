// 몫과 나머지가 같은 피제수와 제수 찾기 
#include <stdio.h>

int main(){
	int n,j,i;	// 사용할 변수 선언 
	printf("범위를 입력해주세요 2 ~ n : ");
	scanf("%d",&n);	// n을 입력받는다 
	
	// 반복문을 돌며 몫과 나머지가 같은 피제수와 제수를 찾으면 출력한다 
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			if(i%j==i/j) printf("%d / %d = %d, %d %% %d = %d\n",i,j,i/j,i,j,i%j);
		}
	}
}
