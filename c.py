#!/usr/bin/python3
pwd = input("Pasword: ")
ok = 'Zen of Python'
ok = ok + ' C'
print(ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1])