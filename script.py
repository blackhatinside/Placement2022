import os
count=1
for x in os.listdir():
    if x.endswith(".cpp"):
        # Prints only text file present in My Folder
        # print(x)
        os.rename(x,str(count) + '_' + x)   #1_a.cpp
        count+=1
print("DONE")