#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a, b;
    char arr[100];

    printf("어떤 크기의 배열을 원하십니까?\n(세로x가로) 형식으로 입력해 주세요.\n-> ");

    scanf("%dx%d", &a, &b);

    for(int i=0; i<a; i++, puts(""))
        for(int j=0; j<b; j++)
        {
            printf("%d ", (rand() % 8) + 1);
        }
    printf("다 되었습니다. 복사하셔서 사용하시면 됩니다. :D");
    scanf("%s", arr);
    return 0;
}
