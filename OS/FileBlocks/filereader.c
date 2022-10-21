# include <stdio.h>
# include <fcntl.h>

int main(int argc, char *argv[])
{
    //Открытие файла
    int fd = open("input.txt",O_RDONLY);
    
    //Считывание данных из файла
    char buf[10]={0};
    read(fd,buf,5);
    
    printf("Прочитали [%s]\n",buf);
    
    //закрытие файла
    close(fd);
    return 0;
}
