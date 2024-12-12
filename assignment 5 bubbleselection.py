a=int(input("Enter the number of student in FE==  "))
fe=[]
for i in range(0,a):
  b=float(input("Enter the percentage of the student==  "))
  fe.append(b)
  print(fe)
  
  
def bubble (fe,a):
  for i in range (0,a-1):
    for j in range (0,a-1):
        if (fe[j]>fe[j+1]):
          temp=fe[j+1]
          fe[j+1]=fe[j]
          fe[j]=temp
          
          
  print("sorted list=",fe) 
  fe.reverse()
  print("top 5 scores=",fe[0:5])
  fe.reverse()  
  
  
  
  
def selection(fe,a):
  for i in range (a-1):
    for j in range(i+1,a):
      mi=i
      if (fe[j]<fe[mi]):
        mi=j
        temp=fe[j]
        fe[j]=fe[mi]
        fe[mi]=temp
  print("sorted list=",fe) 
  fe.reverse()
  print("top 5 scores=",fe[0:5])
  fe.reverse()                   
          
          
          
          
flag=1
while flag==1:
 print("1.for bubble sort")
 print("2.for selection sort")     
 print("3.for exit")
 ch=int(input("enter the choice==  "))     
 
 if ch==1:     
   bubble(fe,a)    
 elif ch==2:
   selection(fe,a)
 elif ch==3:
   flag=0
 else:
   print("enter valid choice") 
           
          
          
          
 


