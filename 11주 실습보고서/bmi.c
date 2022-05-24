#include<stdio.h>
#include<math.h>
int main(){
	//변수 선언 
	double height[100],weight[100],bmi[100],py[100],py2,b_aver=0,aver=0;
	int birth[100],cnt[3]={0, };
	int n,i,age,code;
	
	// 학생 수 입력받기 
	printf("학생의 수를 입력하세요 : ");
	scanf("%d",&n);
	
	//입력받으면서 바로 bmi 계산 후 배열에 넣기 
	for(i=0;i<n;i++) {
		printf("%d번째 학생의 키를 입력하세요(cm) : ",i+1);
		scanf("%lf",&height[i]);
		printf("%d번째 학생의 몸무게를 입력하세요(kg) : ",i+1);
		scanf("%lf",&weight[i]);
		printf("%d번째 학생의 생년월일을 입력하세요(8자리) : ",i+1);
		scanf("%d",&birth[i]);
		
		bmi[i]=weight[i]/pow(height[i]/100,2);
		b_aver+=bmi[i];
	}
	//평균 구하기  
	b_aver/=n;
	//분산 구하기 
	for(i=0;i<n;i++) aver+=pow(bmi[i]-b_aver,2);
	aver/=n;
	//표준편차 구하기 
	py2 = sqrt(aver);
	//표준 점수 구하기
	for(i=0;i<n;i++) py[i]=10*(bmi[i]-b_aver)/py2+50;
	//표준점수 40미만 저체중, 40이상 60이하 정상 , 60초과 과체중 
	for(i=0;i<n;i++){
		if(py[i]<40) cnt[0]++;
		else if(py[i]<=60) cnt[1]++;
		else cnt[2]++;
	}
	// 1,2,3,4 중에 입력받고 번호에 해당하는거 출력 
	while(1){
		printf("\n\n1. bmi 표준점수 등급별 학생수 확인\n2. 18세 이상 20세 미만 학생정보 구하기\n3. 학생들의 표준점수 확인\n4. 프로그램 종료.");
		printf("1,2,3,4 중에 하나를 입력하세요 : ");
		scanf("%d",&code);
		if(code == 1){
			printf("\n저체중 : %d명, 정상 : %d명, 과체중 %d명",cnt[0],cnt[1],cnt[2]);	
		}
		else if(code == 2){
			for(i=0;i<n;i++){	// 한국나이 계산 후 출력
				age = 2022-birth[i]/10000+1; 
				if(age<20&&age>=18) printf("\n%d번학생\n키 : %lf\n몸무게 : %lf\nbmi : %lf",i+1,height[i],weight[i],bmi[i]);
			}
		}
		else if(code == 3){
			for(i=0;i<n;i++) printf("\n%d번 학생의 표준점수 : %lf",i+1,py[i]);
		}
		else if(code == 4) break;
		else printf("\n잘못된 입력입니다 다시 입력해주세요.\n");
	}
}
