#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a, b;
    char arr[100];

    printf("� ũ���� �迭�� ���Ͻʴϱ�?\n(����x����) �������� �Է��� �ּ���.\n-> ");

    scanf("%dx%d", &a, &b);

    for(int i=0; i<a; i++, puts(""))
        for(int j=0; j<b; j++)
        {
            printf("%d ", (rand() % 8) + 1);
        }
    printf("�� �Ǿ����ϴ�. �����ϼż� ����Ͻø� �˴ϴ�. :D");
    scanf("%s", arr);
    return 0;
}
