#include <stdio.h>
#include <math.h>

int main(){
    double first, second;   // ù��° ���� �ι�° ���� ������ ���� ����
    
    printf("ù��° ���� �Է��ϼ��� : ");
    scanf("%lf", &first);   // ù��° �� �Է�
    printf("�ι�° ���� �Է��ϼ��� : ");
    scanf("%lf", &second);  // �ι�° �� �Է�

    double san, jo, gi; // ���, ��ȭ, ���� ����� ������ ���� ����
    san = (first + second)/2;   // ������ = (a+b)/2
    jo = (2*first*second)/(first+second);   // ��ȭ��� = 2*a*b/(a+b)
    gi = sqrt(first*second);    // ������� sqrt(a*b);

    printf("������ : %.3lf\n��ȭ��� : %.3lf\n������� : %.3lf",san,jo,gi);   // ����� �Ҽ��� ����° �ڸ����� ���
}