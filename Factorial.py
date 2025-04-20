def first_non_zero_digit_factorial(n):
    if n == 0:
        return 1 
    
    rightmost_non_zero = 1 
    for i in range(2, n + 1):
        rightmost_non_zero *= i
        while rightmost_non_zero % 10 == 0:
            rightmost_non_zero //= 10  
    
    return rightmost_non_zero % 10

n = int(input())
result = first_non_zero_digit_factorial(n)
print(result)

