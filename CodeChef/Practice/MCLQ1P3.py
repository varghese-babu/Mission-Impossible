def luckyPaperOrNot(paper, l):
	# approach: use a hash map to save index of each value and
	# then check if index of the closest same value is <= l

	index_map = {}

	for i in range(len(paper)):
    	num = paper[i]
    	if num in index_map and i - index_map[num] <= l:
        	return "LUCKY"
    	index_map[num] = i

	return "NOT LUCKY"

l=int(input())
m,n=map(int,input().split())
for _ in range(0, m):
	paper=list(map(int,input().split()))
	print(luckyPaperOrNot(paper, l))
