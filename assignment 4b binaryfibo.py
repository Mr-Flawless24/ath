a=int(input("Enter the number of student who attended the program==  "))
s=[]
for i in range (0,a):
  b=int(input("Enter the roll no of students==  "))
  s.append(b)
  print(s)
q=sorted(s)
print(q)  
k=int(input("Enter the roll no to be sreached==  "))

def binarySearch(q,k,a):
  l=0
  u=a-1
  while (l<=u):
    mid= int((l+u)/2)
    print(mid)
    if q[mid]==k :
      print("student present")
      break
    elif q[mid]>k :
      u=mid-1
    elif q[mid]<k :
      l=mid+1
  else:
    print("student not present")    
    
  
def febonacci(q,k,a):
  fib2=0
  fib1=1
  fibn=fib2+fib1 
  while(fibn<=a):
    fib2=fib1
    fib1=fibn
    fibn=fib1+fib2
    
  offset=-1
  while(fib1!=0):
    i=min((offset+fib2),a-1)
   
    if (k>q[i]):
      fibn=fib1
      fib1=fib2
      fib2=fibn-fib1
   
    elif (k<q[i]):
      fibn=fib2
      fib1=fib1-fib2
      fib2=fibn-fib1
     
    elif (k==q[i]):
      print("student present")
      break
  else:
    print("student not present")             
    
      
      
 
 
 
 
 
flag=1
while flag==1:
 print("1.for binary search")
 print("2.for fibonacci search")     
 print("3.for exit")
 ch=int(input("enter the choice==  "))     
 
 if ch==1:     
   binarySearch(q,k,a)    
 elif ch==2:
   febonacci(q,k,a)
 elif ch==3:
   flag=0
 else:
   print("enter valid choice") 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
      

     
