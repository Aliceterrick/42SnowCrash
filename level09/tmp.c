#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    unsigned char buff[1024] = {};
    int fd = open("token", O_RDONLY);

    read(fd, buff, 1024);
    
    int i = 0;
    while (buff[i]) {
        buff[i] -= i;
        ++i;
    }

    printf("%s", buff);
}