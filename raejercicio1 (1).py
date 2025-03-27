num1= float(input("introducir primer numero:"))
num2= float(input("introducir segundo numero:"))

suma= (num1+num2)
resta= (num1-num2)
multiplicacion= (num1*num2)
if num2 !=0:
    division= num1/num2
else:
    division = "error no se puede usar 0"

print(f"suma: {num1}+{num2} ={suma}")
print(f"resta: {num1}-{num2} ={resta}")
print(f"multiplicacion: {num1}*{num2} ={multiplicacion}")
print(f"division: {num1}/{num2} ={division}")