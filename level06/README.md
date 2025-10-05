In this level we find a level06.php file, and a level06 binary file that execute the .php, running with a file as argument.

In the .php file, we can read a particular regex :

```php
$a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a);
```

/e was a php operator meaning 'evaluate'. It is no longer used today because it was dangerous.

we need to execute the binary with a specific string that will fit the regex and be executed. After several tries we run it with :

echo '[x {${exec(getflag)}}]' > /tmp/exploit.txt