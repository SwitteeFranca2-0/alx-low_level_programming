#!/usr/bin/python3

max = 0;
no_list = []
for i in range(1, 1000):
	for b in range (1, 1000):
		num = i * b;
		if (str(num) == (str(num))[::-1]):
			if num > max:
				max = num
print(max)