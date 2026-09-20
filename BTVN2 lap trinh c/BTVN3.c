#include <stdio.h>

int main() {
    double distance_km;
    int is_surge;
    double base_fare = 0.0;
    double surcharge = 0.0;
    double total_fare = 0.0;

    printf("Nhap quang duong di chuyen (km): ");
    if (scanf("%lf", &distance_km) != 1) {
        printf("Loi: Quang duong khong hop le.\n");
        return 1;
    }

    printf("Nhap trang thai phu phi (1: Co, 0: Khong): ");
    if (scanf("%d", &is_surge) != 1) {
        printf("Loi: Trang thai phu phi khong hop le.\n");
        return 1;
    }

    if (distance_km <= 0.0) {
        printf("Loi: Quang duong phai lon hon 0 km.\n");
        return 1;
    }

    if (is_surge != 0 && is_surge != 1) {
        printf("Loi: Trang thai phu phi chi duoc la 0 hoac 1.\n");
        return 1;
    }

    if (distance_km <= 2.0) {
        base_fare = 12000.0;
    } else {
        base_fare = 12000.0 + (distance_km - 2.0) * 4500.0;
    }

    if (is_surge == 1) {
        surcharge = base_fare * 0.2;
    } else {
        surcharge = 0.0;
    }

    total_fare = base_fare + surcharge;

    printf("\n===== KET QUA TINH CUOC =====\n");
    printf("Quang duong: %.2f km\n", distance_km);
    printf("Cuoc phi co ban: %.2f VND\n", base_fare);
    printf("Phu phi: %.2f VND\n", surcharge);
    printf("Tong cuoc phi: %.2f VND\n", total_fare);

    return 0;
}
