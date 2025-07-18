in the current folder we found a level02.pcap

we use SCP to download it:

scp -P 4243 scp://level02@127.0.0.1/level02.pcap .

analyzing the file with wireshark we found the entry:

Password: ft_wandr...NDRel.L0L

looking at the data in hex dump we found out that the . stand for '7f' i.e DEL, so the entered password is:

ft_waNDReL0L