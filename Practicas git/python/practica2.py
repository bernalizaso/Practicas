
num1 = float(input())
num2 = float(input())
num3 = float(input())

max_de_tres = (num1,num2,num3)
if (num1>num2) and (num1 >= num3) :
    print (num1)
elif (num2>num1) and (num2 >= num3):
    print (num2)
elif (num3>num2) and (num3 >= num1):
    print (num3)
