# include <stdio.h>

int main(int argc, char *argv[])
{
    char user_name[255];
    
    printf("Введите ваше имя: ");
    scanf("%s",user_name);
    printf("Здравствуйте, %s !\n",user_name);

    return 0;
}
