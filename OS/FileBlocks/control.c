# include <stdio.h>

int main(int argc, char *argv[])
{
    int age;
    printf("Введите ваш возраст");
    scanf("%d",&age);
    
    if(age < 18)
	printf("Вам сюда нельзя\n");
    else
	printf("Вам сюда можно\n");
    
    return 0;
}
