from collections import Counter






a=int(input("Enter the Number of student in SE Comp="))
print("********IF THE STUDENT IS ABSENT ENTER (-1)***********")
comp=[]
for i in range (0,a):
  b=int(input("Enter the marks of student in FDS="))
  comp.append(b)
  print(comp)
  
  
  
def average(comp,a):
   s=0
   for i in range(a):
     if comp[i]!=-1:
       s=s+comp[i]
       o=s/a
   print("Average=",o) 

def hl(comp):
    
    t=sorted(comp)
    print(t)
    y=t.count(-1)
    print("absent student=",y)
    
    
def ab(comp):    
    while -1 in comp:
       comp.remove(-1)
       print(comp)
    d=sorted(comp)       
    print("lowest score=",d[0])
    print("higest score=",d[-1]) 
    
   
def fr(comp):
    while -1 in comp:
       comp.remove(-1)
       print(comp)
    
    u=Counter(comp)
    i=max(u.keys())
    print("number repeated", i ,"times")
    print(u)
       
       
    
    
    
 
 
 
 
 
 
 
 
 
flag=1 
while flag==1 :
 print("1.the average score of class")
 print("2.no of student absent")
 print("3.highest score and lowest score")
 print("4.frequency")
 print("5.exit")
 ch=int(input("**ENTER YOUR CHOICE**="))
 
 if ch==1:
    average(comp,a)
 elif ch==2:    
    hl(comp)
 elif ch==3:
    ab(comp)   
 elif ch==4:
    fr(comp)
 elif ch==5:
    flag=0 
 else:
   print("enter valid choice")     
