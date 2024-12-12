a=int(input("Enter the number of student who attended the program==  "))
s=[]
for i in range (0,a):
  b=int(input("Enter the roll number of students==  "))
  s.append(b)
  print(s)
k=int(input("Enter the roll no to search==  "))
  
def linearSearch(s,k):
  for i in range (0,a):
    if (s[i]==k):
      print("student present****by linear search****")  
      break
  else:
      print("student not present****by linear search****")

def sentinalSearch(s,k):
  s.append(k)
  for i in range (0,a):
    if (s[i]==k):
      print("student present****by sentinal search****")
      break
  else:
      print("student not present****by sentinal search****")
      
      
      
flag=1
while flag==1:
 print("1.for linear search")
 print("2.for sentinal search")     
 print("3.for exit")
 ch=int(input("enter the choice==  "))     
 
 if ch==1:     
   linearSearch(s,k)    
 elif ch==2:
   sentinalSearch(s,k)
 elif ch==3:
   flag=0
 else:
   print("enter valid choice")
