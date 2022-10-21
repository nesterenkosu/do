# include <stdio.h>
# include <fcntl.h>

int main(int argc, char *argv[])
{
    //Открытие файла
    int fd = open("input.txt",O_WRONLY);
    
    //Блокировка файла перед записью в него
    struct flock lock;
    lock.l_type = F_WRLCK;//тип блокировки - при записи
    lock.l_start = 0;
    lock.l_len = 0;
    lock.l_whence = SEEK_SET;

    printf("Попытка установки блокировки...\n");

    fcntl(fd,F_SETLKW,&lock);

    printf("Блокировка установлена\n");
    
    
    //Запись данных в файл
    write(fd,"Goodbye",7);

    getchar();

    //Снятие блокировки
    lock.l_type = F_UNLCK;
    fcntl(fd,F_SETLKW,&lock);

    printf("Блокировка снята\n");
    
    //закрытие файла
    close(fd);
    return 0;
}
