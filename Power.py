# def pow(a,b):
#     if(b==0):
#         return 1
         
#     answer=a
#     increment=a
     
#     for i in range(1,b):
#         for j in range (1,a):
#             answer+=increment
#         increment=answer
#     return answer
 
# # driver code
# print(pow(5,3))



# Recursive solution

def pow(a, b):
    if b:
        return multiply(a, pow(a,b-1))
    else:
        return 1

def multiply(x, y):
    if y:
        return (x + multiply(x, y-1))
    else:
        return 0

print(pow(5, 3))