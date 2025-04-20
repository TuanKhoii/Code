def count_squares(n):
    result = (n * (n + 1) * (2 * n + 1)) // 6

    result %= 2013

    return result

n = int(input())

print(count_squares(n))

    
