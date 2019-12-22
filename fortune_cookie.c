#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("メッセージの読み込み：%s\n", msg);
    printf("msgは%iバイトを占有しています\n", sizeof(msg));
}

int main()
{
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return 0;
}