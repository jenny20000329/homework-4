#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int s=0;
    printf("�z����J����ơG");
    scanf("%d",&s);
    printf("�ഫ���ɶ���=%02d��:%02d��:%02d��\n",s/3600%60,s/60%60,s%60);
 	system("pause");  
 	return 0;
}
