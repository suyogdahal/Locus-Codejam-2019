
#First generate a list of all the possible combinations of 4 and 7 less than or equal to the input number

from collections import Counter

num=int(input())
desired_list=[]
for i in range(1,num+1):
    count=Counter(str(i))
    if (count['4']+count['7'])==len(str(i)):
        desired_list.append(i)

#if the input number is in the generated list, simply print yes and exit the loop;
#if not, then divide the input number by each of the numbers of the generated_list and if remainder is 0,print yes;if not print no

flag=1
for i in desired_list:
    if(i==num):
        flag=0
        break
if flag==1:
    print(desired_list)
    new=list(map(lambda x:num%x,desired_list))
    print(new)
    for i in new:
        if i==0:
            flag=0
            break
if flag==0:
    print("YES")
if flag==1:
    print("NO")