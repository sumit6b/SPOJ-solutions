t = int(raw_input())
while t:
	x = raw_input()
	a = raw_input()
	la = sorted([int(x) for x in raw_input().split(' ')])
	lb = sorted([int(x) for x in raw_input().split(' ')])

	while la and lb:
		if la[0]>=lb[0]:
			lb.pop(0)
		elif la[0]<lb[0]:
			la.pop(0)

	if not lb:
		print 'Godzilla'
	elif not la:
		print 'MechaGodzilla'
	t-=1

