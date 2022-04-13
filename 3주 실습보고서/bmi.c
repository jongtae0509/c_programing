#include <stdio.h>
#include <math.h>

int main(){
    double height, weight;  // 키와 몸무게를 담을 변수 선언

    printf("몸무게(kg)를 입력하세요 : ");
    scanf("%lf",&weight);   // 몸무게를 입력
    printf("키(cm)를 입력하세요 : ");
    scanf("%lf",&height);   // 키를 입력

    height/=100; // cm를 m로 변환

    printf("bmi는 %.3lf 입니다",weight/pow(height,2)); // bmi를 소수점 세번째 자리까지 출력 (bmi = 몸무게/(키^2))
}