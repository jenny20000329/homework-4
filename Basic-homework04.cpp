#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int s=0;
    printf("您的輸入的秒數：");
    scanf("%d",&s);
    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",s/3600%60,s/60%60,s%60);
 	system("pause");  
 	return 0;
}
