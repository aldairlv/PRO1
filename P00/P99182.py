numbers = input()
a, b = numbers.split()
result = ((int(a) + int(b)) / 2)
split_num = str(result).split('.')
int_part = int(split_num[0])
decimal_part = int(split_num[1])
if decimal_part == 0:
    print(int_part)
else:
    print(result)    
