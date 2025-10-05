In this level, we once again have a binary and a token file. This time we can cat it.

``` bash
    cat token
    f4kmm6p|=�p�n��DB�Du{��
```

But if we run level09 with token as argument we obtain a very strange result, and more stranger if we run it with the content of token as argument:

``` bash
    ./level09 token
    tpmhr
    ./level09 $(cat token)
    f5mpq;v�E��{�{��TS�W�����
```

If we try 123456789 we clearly see what happens: 

``` bash
    ./level09 123456789
    13579;=?A
```

The program shifts each char in the given string with its index into it. So we need to invert the content of token. We can do so easely with this C script :

``` C

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

```