def average(array):
    # your code goes here
    sum1=sum(list(set(array)))
    cnt=len(list(set(array)))
    return float(sum1/cnt)

