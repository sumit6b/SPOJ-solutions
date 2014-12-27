from math import ceil
while 1:
	a,b=[int(x) for x in raw_input().split(' ')]
	if a==-1 and b==-1:
		break
	else:
		a,b = max(a,b),min(a,b)
		print int(ceil(float(a)/(b+1)))

