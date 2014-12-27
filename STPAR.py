coun=1
ans=0
stack=[1001]
def foo(x):
	# import pdb;pdb.set_trace()
	global coun, ans, stack;
	while coun==stack[-1]:
		coun+=1
		stack.pop()
	if not ans:
		if x!=coun:
			if x<stack[-1]:
				stack.append(x)
			elif x==stack[-1]:
				stack.pop()
				coun+=1
			else:
				print 'no'
				ans=1
		elif x==stack[-1]:
			stack.pop()
			coun+=1
		elif x==coun:
			coun+=1


while 1:
	T = int(raw_input())
	if T==0:
		break
	else:
		coun=1;ans=0;stack=[1001];
		[foo(int(x)) for x in raw_input().split(' ') if not ans]
		if not ans:
			print 'yes'
			ans=1





