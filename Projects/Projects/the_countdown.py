import time
life = int(input("How long will you live?: "))
 
for x in range(life, 0, -1):
    Sec = x % 60
    Mins = int(x/60)% 60
    Hours = int(x/3600)
    print(f"\r{Hours:02}:{Mins:02}:{Sec:02}", end="\r")
    time.sleep(1) 


time.sleep(0.5)
print("Chaoo!!")