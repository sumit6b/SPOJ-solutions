while 1:
	A,D=[int(i) for i in raw_input().split(' ')]
	if A==0 and D==0:
		break
	else:
		a=[int(i) for i in raw_input().split(' ')]
		a.sort()
		b=[int(i) for i in raw_input().split(' ')]
		b.sort()
		if a[0]<b[1]:
			print 'Y'
		else:
			print 'N'