#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so phan tu cua mang ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("1. In giá trị các phần tử của mảng\n");
        printf("2. Sử dụng Insertion Sort sắp xếp mảng giảm dần và in ra\n");
        printf("3. Sử dụng Selection Sort sắp xếp mảng tăng dần và in ra\n");
        printf("4. Sử dụng Bubble Sort sắp xếp mảng giảm dần và in ra\n");
        printf("5. Thoát\n");
        int choice;
        printf("Nhap lua chon cua ban ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                printf("arr[%d]= %d\n", i, arr[i]);
            }
            break;
        case 2:
            for (int i = 1; i < n; i++)
            {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && key > arr[j])
                {
                    arr[j + 1] = arr[j];
                    j -= 1;
                }
                arr[j + 1] = key;
            }
            break;
        case 3:
            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (arr[j] > arr[i])
                    {
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr[j] < arr[j + 1])
                    {
                        int tem = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = tem;
                    }
                }
            }
            case 5:
            return 0;
        default:
            break;
        }
    } while (1 == 1);
}