#include <stdio.h>
#include <math.h>

int main(){
    double height, weight;  // Ű�� �����Ը� ���� ���� ����

    printf("������(kg)�� �Է��ϼ��� : ");
    scanf("%lf",&weight);   // �����Ը� �Է�
    printf("Ű(cm)�� �Է��ϼ��� : ");
    scanf("%lf",&height);   // Ű�� �Է�

    height/=100; // cm�� m�� ��ȯ

    printf("bmi�� %.3lf �Դϴ�",weight/pow(height,2)); // bmi�� �Ҽ��� ����° �ڸ����� ��� (bmi = ������/(Ű^2))
}