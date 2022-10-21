# include <stdio.h>
# include <fcntl.h>

int main(int argc, char *argv[])
{
    //Открытие файла
    int fd = open("input.txt",O_WRONLY);
    
    //Запись данных в файл
    write(fd,"Goodbye",7);
    
    //закрытие файла
    close(fd);
    return 0;
}
