// ǥ������ ��� 
#include <stdio.h>
#include <math.h>

// ��հ�� �Լ� 
double avag(int arr[],int n){
    int i;
    double sum = 0;
    for(i=0;i<n;i++) sum+=arr[i];
    return sum/n;
}

// ǥ������ ��� �Լ� 
double pc(int arr[],int n,int aver){
    int i;
    int array[100];
    for(i=0;i<n;i++) array[i] = pow(arr[i]-aver,2);

    return sqrt(avag(array,n));
}


int main() {
	
	// ����κ� 
    int n,i;
    double average;
    int arr[100];
    
    // �Է¹ޱ� 
    printf("�л��� ���� �Է��ϼ��� : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	printf("%d��° �л��� ������ �Է��ϼ��� : ",i+1); 
    	scanf("%d",&arr[i]);	
	}
	// ���� ���  
    average = avag(arr,n);
    printf("%d���� �л����� ǥ�������� %.3lf �Դϴ�. ",n,pc(arr,n,average));
}
