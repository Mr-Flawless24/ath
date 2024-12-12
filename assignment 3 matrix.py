print("Enter the size of the matrix")
m=int(input("Enter the number of rows="))
n=int(input("Enter the number of columns="))
print("A1==")
a1=[[int(input())for i in range (0,m)]for j in range (0,n)]
for i in range(0,m):
  for j in range(0,n):
    print(a1[i][j],end='   ' )
  print() 
print("---------------------------------") 
print("A2==")  
a2=[[int(input())for i in range (0,m)]for j in range (0,n)]
for i in range(0,m):
  for j in range(0,n):
    print(a2[i][j],end='   ' )
  print()  
  
print("Addition=")
result=[[0 for i in range (m)]for j in range (n)]
for i in range(0,m):
  for j in range(0,n):
    result[i][j]=a1[i][j]+a2[i][j]
for i in range(0,m):
  for j in range(0,n):
    print(result[i][j],end='    ') 
  print()  
  
print("substraction=")
result1=[[0 for i in range (m)]for j in range (n)]
for i in range(0,m):
  for j in range(0,n):
    result1[i][j]=a1[i][j]-a2[i][j]
for i in range(0,m):
  for j in range(0,n):
    print(result1[i][j],end='    ') 
  print()   
  

print("multiplication=")
result2=[[0 for i in range (m)]for j in range (n)]
for i in range (0,m):
  for j in range (0,n):
    for k in range (0,m):
      result2[i][j]=result2[i][j]+a1[i][k]*a2[k][j]
for i in range(0,m):
  for j in range(0,n):
    print(result2[i][j],end='    ') 
  print()        


print("transpose=")
result3=[[0 for i in range (m)]for j in range (n)]
for i in range (0,m):
  for j in range (0,n):
    result3[j][i]=a1[i][j]
for i in range(0,m):
  for j in range(0,n):
    print(result3[i][j],end='    ')
  print()      
    















            
