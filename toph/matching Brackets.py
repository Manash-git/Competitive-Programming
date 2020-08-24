def isValid(s):
    stack=[]
    pairs={
        '(':')',
        '[':']',
        '{':'}'
    }
    
    for char in s:
        if char in pairs:
            # storing corresponding closing parenthesis
            stack.append(pairs[char]) 
            # print(stack)
        
        else:
            if not stack or stack.pop() != char:
                return False
    
    # print("Final=>",stack)
    return not stack        

s = input()
if isValid(s)== False:
    print("No")
else:
    print("Yes")
    
# print(isValid("()[{}]"))
# print(isValid("()[]{}"))
