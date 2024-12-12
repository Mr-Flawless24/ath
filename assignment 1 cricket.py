m=int(input("Enter how many students in SE  Computer class="))
SECOMP=[]

for i in range(0,m):
    t=(input("Enter name of SE Computer students="))
    SECOMP.append(t)
print("name of se comp student",SECOMP) 
    
n=int(input("Enter how many Students plays cricket="))
cricket=[]
for i in range(0,n):
    r=(input("Enter the name of student who plays cricket="))
    cricket.append(r)
if r not in SECOMP:
    print("student not found")       
print("name of student who plays cricket",cricket)    

a=int(input("Enter how many Students plays badminton="))
badminton=[]
for i in range(0,a):
    e=(input("Enter the name of student who plays badminton"))
    badminton.append(e) 
if e not in SECOMP:
    print("student not found")      
print("name of student who plays badminton",badminton)     
    
b=int(input("Enter how many Students plays football="))
football=[]
for i in range(0,b):
    q=(input("Enter the name of student who plays football"))
    football.append(q)
if q not in SECOMP:
    print("student not found")      
           
print("name of student who plays football",football)     

    
def union (list1,list2):
    list3=list1.copy()
    for x in list2:
        if x not in list3:
            list3.append(x)
    print(list3)
    
    
def intersection (list1,list2):
    list3=[]
    for x in list1:
        if x in list2:
            list3.append(x)
    return(list3)    
    
def difference (list1,list2):
    list3=[]
    for x in list1:
        if x not in list2:
            list3.append(x)
    print(list3)
    
    
def symdiff(list1,list2):
    d1=difference(list1,list2)
    d2=difference(list1,list2)
    list3=union(d1,d2)
    print(list3)                       
    
    
def cb (cricket,badminton):
    list3=intersection(cricket,badminton)
    a=len(list3)
    print("number of student plays cb= ",a)
    return("name=",list3)              


def eceb (list1,list2):
    list3=symdiff(list1,list2)
    a=len(list3)
    print("number of student plays eceb= ",a)
    return("name=",list3)
    
def nCnB(list1,list2,list3):
    list4=difference(list1,union(list2,list3))
    print("number of student who plays neither cricket nor badminton=",len(list4))
    return("name of student who plays neither cricket nor badminton =",list4)
    
def nCnF(list1,list2,list3):
    list4=difference(intersection(list1,list2),list3)
    print("number of student who plays cricket and football but not badminton=",len(list4))
    return("name of student who plays cricket and football but not badminton  =",list4) 
    



print("1.List of students who play both cricket and badminton")
print("2.List of students who play either cricket or badminton but not both")
print("3.No. of students who play neither cricket nor badminton")
print("4.No. of students who play cricket and football but not badminton")
print("5.Exit")
ch=int(input("Enter your choice="))




    
if ch==1: 
    cb(cricket,badminton)
    
elif ch==2:
    eceb(cricket,badminton)
    
elif ch==3:
    nCnB(list1,list2,list3)    
elif ch==4:
    nCnF(list1,list2,list3) 
elif ch==5:
    i=0
else:
    print("invalid choice")           
    
           
            
    
    
    
    



















print("1.List of students who play both cricket and badminton")
print("2.List of students who play either cricket or badminton but not both")
print("3.No. of students who play neither cricket nor badminton")
print("4.No. of students who play cricket and football but not badminton")
print("5.Exit")
ch=int(input("Enter your choice="))
