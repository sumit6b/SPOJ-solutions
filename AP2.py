T=int(raw_input())
for i in xrange(T):
	p,q,s=[long(x) for x in raw_input().split(' ')]
	n=(2*s)/(q+p)
	d=(q-p)/(n-5)
	a=p-2*d
	print n
	l=[a+n*d for n in xrange(n)]
	print str(l)[1:-1].replace(',','').replace('L','')
