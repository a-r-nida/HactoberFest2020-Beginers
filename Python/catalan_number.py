# Recursive approach------ > O(2^n)
# def catalan(n):
#     if n <= 1:
#         return 1
 
#     # Catalan(n) is the sum
#     # of catalan(i)*catalan(n-i-1)
#     res = 0
#     for i in range(n):
#         res += catalan(i) * catalan(n-i-1)
 
#     return res

# # Dynamic Programming approach------ > O(n^2)
# def catalan(n):
#     if n<=1:
#         return 1
    
#     catalan = [0]*(n+1)

#     catalan[0] = catalan[1] = 1

#     for i in range(2, n+1):
#         for j in range(i):
#             catalan[i] += catalan[j]*catalan[i-j-1]
        
#     return catalan[n]
 
# Binomial Coefficient approach(Best approach)------ > O(n)
import binomial_coefficient as bc

def catalan(n):
    c = bc.binomialCoefficient(2*n, n)
    
    return c//(n+1)


# Driver Code
for i in range(10):
    print(catalan(i), end = ' ')