import math 

print ("SQ, SQRT, AV")

def expression(x):
    return (math.sqrt(x))
x = float(input("ENTER X: "))
answer = expression(x)
print(answer)
def expression2(y):
    return(math.pow(y,2))
y = float(input("ENTER Y: "))
answer2 = expression2(y)
print(answer2)
def expression3(z):
    return (math.fabs(z))
z = float(input("ENTER Z: "))
answer3 = expression3(z)
print(answer3)
