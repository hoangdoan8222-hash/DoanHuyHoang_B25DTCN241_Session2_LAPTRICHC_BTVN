#include <stdio.h>

int main() {
    float distance;
    int has_promo;
    float total_fare;

    printf("Nhap quang duong (km): ");
    if (scanf("%f", &distance) != 1) {
        printf("Loi: Du lieu dau vao khong hop le!\n");
        return 1;
    }

    printf("Nhap trang thai ma giam gia (1: Co, 0: Khong): ");
    if (scanf("%d", &has_promo) != 1) {
        printf("Loi: Du lieu dau vao khong hop le!\n");
        return 1;
    }

    if (distance <= 0 || (has_promo != 0 && has_promo != 1)) {
        printf("Loi: Du lieu dau vao khong hop le!\n");
        return 1;
    }

    total_fare = distance * 20000;

    if (has_promo == 1) {
        total_fare = total_fare * 0.8;
    }

    if (total_fare < 15000) {
        total_fare = 15000;
    }

    printf("Tong cuoc phi: %.2f VNÐ\n", total_fare);

    return 0;
}
