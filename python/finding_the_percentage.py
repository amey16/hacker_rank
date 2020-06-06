n = int(input())
student_marks = []
for i in range(n):
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks.append([name,sum(scores)])
query_name = input()
for i in range(n):
    if(student_marks[i][0]==query_name):
        print("%.2f" % (student_marks[i][1]/3))