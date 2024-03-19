#include <stdio.h>
#include <math.h>

// Hàm kiểm tra một số có phải là số chính phương không
int laSoChinhPhuong(int n) {
	int canBacHai = (int)sqrt((double)n); // Ép kiểu n thành double trước khi gọi sqrt
	return canBacHai * canBacHai == n;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void demSoChinhPhuong(int n) {
	int dem = 0;
	printf("Cac so chinh phuong nho hon %d la: ", n);
	for (int i = 1; i < n; i++) {
		if (laSoChinhPhuong(i)) {
			printf("%d ", i);
			dem++;
		}
	}
	printf("\nTong so chinh phuong nho hon %d la: %d\n", n, dem);
}

int main() {
	int n;
	printf("Nhap n: ");
	// Sử dụng scanf_s theo cách tương tự như scanf cho kiểu dữ liệu int
	scanf_s("%d", &n);
	if (n > 0) {
		demSoChinhPhuong(n);
	}
	else {
		printf("Vui long nhap mot so nguyen duong.\n");
	}
	printf("Press any key to exit.\n");
	getchar(); // Đọc ký tự newline từ bộ đệm nhập trước
	getchar(); // Đợi nhập thêm một ký tự
	return 0;
}