n_testcases = int(input())
result=[]


while n_testcases :
    num = int(input()) + 1

    result.append(int(num/10))

    n_testcases -=1


for x in result:
    print(x)
