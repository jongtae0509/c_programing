#include<stdio.h>
#include<windows.h>

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	//���� ���� 
	int x1 = 200, y1 = 200, x2 = 500, y2 = 500;
	int i, d = 0;
	// �� ����ϱ� 
	for (i = 0; i < 5; i++) {
		Ellipse(hdc, x1 + d, y1 + d, x2 - d, y2 - d);
		d += 25;
	}
}
