from collections import defaultdict
graph=defaultdict()
N,M=[int(x) for x in raw_input().split(' ')]
root=0
for t in xrange(M):
	# import pdb;pdb.set_trace()
	a,b=[int(x) for x in raw_input().split(' ')]
	
	try:
		graph[a]['adj'].append(b)
	except:
		graph[a]={'adj':[],'visited':False}
		graph[a]['adj'].append(b)

	try:
		graph[b]['adj'].append(a)
	except:
		graph[b]={'adj':[],'visited':False}
		graph[b]['adj'].append(a)
	if not root:
		root=a

stack=[]
stack.append(root)
while stack:
	x=stack.pop()
	if graph[x]['visited']:
		print 'NO'
		break
	elif not graph[x]['visited']:
		stack.extend(graph[x]['adj'])
		graph[x]['visited']=True
if not stack:
	print 'YES'

