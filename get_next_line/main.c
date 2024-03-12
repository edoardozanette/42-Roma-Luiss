#include "get_next_line.h"

int main()
{
    int fd = open("file.txt", O_RDONLY);
    //char    *line = get_next_line(fd);

    
        printf("%s\n", get_next_line(fd));
        printf("%s\n", get_next_line(fd));
        printf("%s\n", get_next_line(fd));
        //line = get_next_line(fd);
    

}