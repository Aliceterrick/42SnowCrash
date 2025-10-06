In this level we have nothing to clearly exploit. After several searchs we find out nothing.

But we have getflag. If we disasembly it, we find a maze of if/else statements :

```
  v4 = getuid();
      if ( v4 == 3006 )
      {
        v15 = stdout;
        v16 = ft_des("H8B8h_20B4J43><8>\\ED<;j@3");
        fputs(v16, v15);
        goto LABEL_49;
      }
      if ( v4 > 0xBBE )
      {
        if ( v4 == 3010 )
        {
          v19 = stdout;
          v20 = ft_des("74H9D^3ed7k05445J0E4e;Da4");
          fputs(v20, v19);
          goto LABEL_49;
        }
        if ( v4 > 0xBC2 )
        {
          if ( v4 == 3012 )
          {
            v23 = stdout;
            v24 = ft_des("8_Dw\"4#?+3i]q&;p6 gtw88EC");
            fputs(v24, v23);
          }
          else if ( v4 < 0xBC4 )
          {
            v21 = stdout;
            v22 = ft_des("70hCi,E44Df[A4B/J@3f<=:`D");
            fputs(v22, v21);
          }
          else if ( v4 == 3013 )
          {
            v25 = stdout;
            v26 = ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I");
            fputs(v26, v25);
          }
          else
          {
            if ( v4 != 3014 )
              goto LABEL_48;
            v27 = stdout;
            v28 = ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|");
            fputs(v28, v27);
          }
          goto LABEL_49;
        }
        if ( v4 == 3008 )
        {
          v17 = stdout;
          v18 = ft_des("bci`mC{)jxkn<\"uD~6%g7FK`7");
          fputs(v18, v17);
          goto LABEL_49;
        }
        v11 = stdout;
        if ( v4 > 0xBC0 )
          v12 = ft_des("Dc6m~;}f8Cj#xFkel;#&ycfbK");
        else
          v12 = ft_des("78H:J4<4<9i_I4k0J^5>B1j`9");
      }
      else
      {
        if ( v4 == 3002 )
        {
          v9 = stdout;
          v10 = ft_des("<>B16\\AD<C6,G_<1>^7ci>l4B");
          fputs(v10, v9);
          goto LABEL_49;
        }
        if ( v4 <= 0xBBA )
        {
          if ( v4 == 3000 )
          {
            v5 = stdout;
            v6 = ft_des("I`fA>_88eEd:=`85h0D8HE>,D");
            fputs(v6, v5);
          }
          else if ( v4 > 0xBB8 )
          {
            v7 = stdout;
            v8 = ft_des("7`4Ci4=^d=J,?>i;6,7d416,7");
            fputs(v8, v7);
          }
          else
          {
            if ( v4 )
            {
LABEL_48:
              fwrite("\nNope there is no token here for you sorry. Try again :)", 1u, 0x38u, stdout);
              goto LABEL_49;
            }
            fwrite("You are root are you that dumb ?\n", 1u, 0x21u, stdout);
          }
LABEL_49:
          fputc(10, stdout);
          return 0;
        }
        if ( v4 == 3004 )
        {
          v13 = stdout;
          v14 = ft_des("?4d@:,C>8C60G>8:h:Gb4?l,A");
          fputs(v14, v13);
          goto LABEL_49;
        }
        v11 = stdout;
        if ( v4 > 0xBBC )
          v12 = ft_des("G8H.6,=4k5J0<cd/D@>>B:>:4");
        else
          v12 = ft_des("B8b:6,3fj7:,;bh>D@>8i:6@D");
      }

g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|

```

and inside it, we find out this else statement :

```
          else
          {
            if ( v4 != 3014 )
              goto LABEL_48;
            v27 = stdout;
            v28 = ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|");
            fputs(v28, v27);
          }
```

The crypted flag is hard-written in the code : "g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|", and the ft_des() function that can decrypted is also available above.

So we juste need to write a little c program with the ft_des() and a main() that call it with the crypted flag.

