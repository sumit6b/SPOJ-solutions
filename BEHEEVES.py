dic={}
def foo():
	global dic
	sum=0
	for x in xrange(18258):
		if x==0:
			sum+=1
		else:
			sum+=6*(x-1)+6
		dic[sum]=1

foo()
x=int(raw_input())
while not x==-1:
	try: 
		if dic[x]:
			print 'Y'
	except:
		print 'N'
	x=int(raw_input())
