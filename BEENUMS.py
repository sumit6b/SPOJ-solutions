def foo(n):
	sum=0
    for i in xrange(n):
        if i==1:
            sum+=1
        else:
            sum+=6*(n-1)+6
