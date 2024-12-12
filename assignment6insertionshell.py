a=int(input("Enter the number of student in se=="))
se=[]
for i in range (0,a):
  b=float(input("Enter the percentage== "))
  se.append(b)
print(se)


def insertion(se,a):
  for i in range (1,a):
    key=se[i]
    j=i-1
    while((se[j]>key)and(j>=0)):
      temp=se[j]
      se[j]=se[j+1]
      se[j+1]=temp
      j=j-1
      se[j+1]=key
  print("sorted list== ",se)  
    
insertion(se,a)
        
