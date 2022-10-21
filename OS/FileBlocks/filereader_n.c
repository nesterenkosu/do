# include <stdio.h>
# include <fcntl.h>

int main(int argc, char *argv[])
{
    //Открытие файла
    int fd = open("input.txt",O_RDONLY);

    int row = 1;

    //Прочитать из файла 3-ю строку
    //Смещение указателя чтения/записи
    lseek(fd,6*(row-1),SEEK_SET);

    //Считывание данных из файла
    char buf[10]={0};
    read(fd,buf,5);
    
    printf("Прочитали [%s]\n",buf);
    
    //закрытие файла
    close(fd);
    return 0;
}
