#include <stdio.h>

int main() {
    double a,b; //a와 b를 선언 
    printf("변수 a를 입력하세요 : ");  //a에 넣을 값을 입력하라고 알려줌 
    scanf("%lf",&a);    //실수를 입력받아서 변수 a에 넣음
    printf("변수 b를 입력하세요 : ");  //b에 집어넣을값을 넣으라고 알려줌
    scanf("%lf",&b);    //실수를 입력받아서 변수 a에 넣음
    printf("산술평균 = %.2lf\n조화평균 = %.2lf",(a+b)/2,(2*a*b)/(a+b)); // 산술평균(a+b)/2와 조화평균(2*a*b)/(a+b)를 소숫점 2번째 자리까지 출력함
}

