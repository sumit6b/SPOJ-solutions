a=1
while a:
	try:
		a=long(raw_input())
		if a==1:
			print 1
		else:
			print 2*a-2
	except:
		a=0