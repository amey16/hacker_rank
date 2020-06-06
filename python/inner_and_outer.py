import numpy
A=numpy.array([list(map(int,input().split()))])
B=numpy.array([list(map(int,input().split()))])
print(int(numpy.inner(A,B)))
print(numpy.outer(A,B))