We have to login to the flag00 user.
First we search files that belong to their.

```
find -user flag00 2>/dev/null
```
./usr/sbin/john
./rofs/usr/sbin/john

we found this little text in the first one :

cdiiddwpgswtgt

It seems to be a caesar cripted password, if we try a python
scrypt that apply an offset we found with an offset of +11 :

nottoohardhere