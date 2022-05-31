#include<stdio.h>
//평균 구해서 표를 출력하는 함수 
void aver_print(int a[][3],int n){
	int i,j=0;	//변수 선언  
	printf("\n========================================================\n");
	printf("		국어	 수학	  영어	  학생의 평균\n");
	
	// 평균계산 및 출력 
	for(i=0;i<n;i++){
		double stu_sum = 0;
		for(j=0;j<3;j++){
			if(j==0) printf("%d번 학생 : ",i+1);	
			stu_sum += a[i][j];
			printf("%8d ",a[i][j]);
			if(j==2) printf("%10.3lf\n",stu_sum/3);
		}
	}
	printf("과목의 평균 : ");
	for(i=0;i<3;i++){
		double sub_sum = 0;
		for(j=0;j<n;j++) sub_sum += a[j][i];
		printf("%8.3lf ",sub_sum/n);
	}
}

int main(){
	//사용할 변수 선언 
	int arr[100][3]={0, };
	int n,i;
	
	//입력받기 
	printf("학생이 몇명인가요? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d번 학생의 국어 성적을 입력하세요 : ",i+1);
		scanf("%d",&arr[i][0]);
		printf("%d번 학생의 수학 성적을 입력하세요 : ",i+1);
		scanf("%d",&arr[i][1]);
		printf("%d번 학생의 영어 성적을 입력하세요 : ",i+1);
		scanf("%d",&arr[i][2]);
	} 
	aver_print(arr,n);	//평균 구하고 출력하는 함수 호출 
	
}
