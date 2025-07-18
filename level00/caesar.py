with open('text.txt', 'r') as f:
    pwd = f.read()[:-1]
    for i in range(26):
        cur = ""
        for c in pwd:
            if c != ' ':
                cur += chr((ord(c) - 97 + i) % 26 + 97)
            else:
                cur += ' '
        print("[+{}] {}".format(i, cur))