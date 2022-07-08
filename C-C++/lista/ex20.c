#include <stdio.h>
#include <time.h>

#include "libex.h"

FILE *file1;
FILE *file2;

int main(int argc, const char *argv[])
{
    struct tm *date;
    time_t now;
    time(&now);
    date = localtime(&now);
    document(&file1, argv[1]);
    document(&file2, argv[2]);
    fprintf(file2, "%d/", date->tm_mday);  
    fprintf(file2, "%d/", date->tm_mon+1);
    fprintf(file2, "%d\n", date->tm_year+1900);  
    copy_file(&file1, &file2);
    fclose(file1);
    fclose(file2);
}