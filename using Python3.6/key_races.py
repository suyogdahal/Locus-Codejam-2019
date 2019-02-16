# getting all 5 inputs in a single line
s,v1,v2,t1,t2=map(int,input().strip().split())

# the participant receives the text to be entered t seconds later and exactly t milliseconds after he ends typing all the text, the site receives information about it
# so the total delay is 2*t
# likewise, since one character is typed in v secs, the total time to type s characeters is s*v
# so total_time = v*s + 2*t 

t_first = v1*s + 2*t1
t_second = v2*s + 2*t2

if t_first>t_second:
    print("Second")
elif t_second>t_first:
    print("First")
else:
    print("Friendship")