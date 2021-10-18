def isPalindrome(str):
    return str == str[::-1]
 
s = "malayalam"
print('Yes',s, 'is a palindrome') if isPalindrome(s) else print('No', s,'is not a palindrome')
