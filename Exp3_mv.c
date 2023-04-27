/*
                                        Experiment No : 3_1

                                                                            NAME: Soban Maruf
                                                                            ROLL NO. : 21co58
                                                                            BATCH : 3
                                                                            SEM - 4

            Aim - Implement basic command of linux like ls, mv and others using kernel APIs
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    int i, fd1, fd2;
    char *file1, *file2, buf[2];

    file1 = argv[1];
    file2 = argv[2];

    printf("file1=%s file2=%s", file1, file2);

    fd1 = open(file1, O_RDONLY, 0777);
    fd2 = creat(file2, 0777);

    while (i = read(fd1, buf, 1) > 0)
        write(fd2, buf, 1);

    remove(file1);
    close(fd1);
    close(fd2);
}

/*

Output:

    PS C:\Users\HOME\OneDrive\Desktop\OS> gcc Exp3_mv.c
    PS C:\Users\HOME\OneDrive\Desktop\OS> ./a.exe file1 file2
         file1=file1 file2=file2
    PS C:\Users\HOME\OneDrive\Desktop\OS>

Content of first file :

    THIS IS MY FIRST FILE
    END OF MY FIRST FILE


Content of second file before mv command :

    THIS IS MY  SECOND FILE
    END OF MY SECOND FILE

Content of second file after mv command :

    THIS IS MY FIRST FILE
    END OF MY FIRST FILE


*/
