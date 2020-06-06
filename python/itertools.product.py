# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools
a=list(map(int,raw_input().split()))
b=list(map(int,raw_input().split()))
print(' '.join(str(e) for e in itertools.product(a,b)))