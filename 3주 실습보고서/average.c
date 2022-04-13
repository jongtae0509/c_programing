#include <stdio.h>
#include <math.h>

int main(){
    double first, second;   // 첫번째 수와 두번째 수를 저장할 변수 선언
    
    printf("첫번째 수를 입력하세요 : ");
    scanf("%lf", &first);   // 첫번째 수 입력
    printf("두번째 수를 입력하세요 : ");
    scanf("%lf", &second);  // 두번째 수 입력

    double san, jo, gi; // 산술, 조화, 기하 평균을 저장할 변수 선언
    san = (first + second)/2;   // 산술평균 = (a+b)/2
    jo = (2*first*second)/(first+second);   // 조화평균 = 2*a*b/(a+b)
    gi = sqrt(first*second);    // 기하평균 sqrt(a*b);

    printf("산술평균 : %.3lf\n조화평균 : %.3lf\n기하평균 : %.3lf",san,jo,gi);   // 평균을 소수점 세번째 자리까지 출력
}