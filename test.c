#include <stdio.h>

int main() {
    int sample1, sample2, sample3;

    printf("Enter three numbers separated by spaces: ");
    // ใช้ scanf เพื่ออ่านตัวเลขสามตัวจาก input
    scanf("%d %d %d", &sample1, &sample2, &sample3);

    // แสดงผลลัพธ์
    printf("Sample1: %d\n", sample1);
    printf("Sample2: %d\n", sample2);
    printf("Sample3: %d\n", sample3);

    return 0;
}
