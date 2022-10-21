# include <stdio.h>
# include <fcntl.h>

int main(int argc, char *argv[])
{
    //Открытие файла
    int fd = open("input.txt",O_RDONLY);
    
    //Блокировка файла перед записью в него
    struct flock lock;
    lock.l_type = F_RDLCK;//тип блокировки - при чтении
    lock.l_start = 0;
    lock.l_len = 0;
    lock.l_whence = SEEK_SET;

    printf("Попытка установки блокировки ПРИ ЧТЕНИИ...\n");

    fcntl(fd,F_SETLKW,&lock);

    printf("Блокировка установлена\n");
    
    
    //Запись данных в файл
    char buf[6];
    read(fd,buf,5);

    getchar();

    //Снятие блокировки
    lock.l_type = F_UNLCK;
    fcntl(fd,F_SETLKW,&lock);

    printf("Блокировка снята\n");
    
    //закрытие файла
    close(fd);
    return 0;
}
