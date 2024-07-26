
# def main():
#     name='Anish'
#     l=[]
#     for i in name:
#         l.append(DecimalToBinary(ord(i)))
#     print(l)
#     x=listfetch(l)
#     print (x)
#     print(BinarytoDecimal(x))
    
        
    
# def DecimalToBinary(num):
#     return (bin(num)[2:])


# # this will fetch the binary values from the list
# def listfetch(l):
#     for i in l:
#         # num1=[]
#         # num1.append(i)
#         return i
    
        
# # this will convert list binary numbers into decimal num
# def BinarytoDecimal(num1):
    
#     return (int(num1)[2:])

    
# main()


def main():
    name = 'Anish'
    binary_list = []
    
    for char in name:
        binary_list.append(DecimalToBinary(ord(char)))
    
    print("Binary List:", binary_list)
    
    decimal_list = listfetch(binary_list)
    print("Decimal List:", decimal_list)
    
    ascii_characters = DecimalListToASCII(decimal_list)
    print("ASCII Characters:", ascii_characters)


def DecimalToBinary(num):
    return bin(num)[2:]


def listfetch(l):
    decimal_list = []
    for binary_str in l:
        num = BinarytoDecimal(binary_str)
        decimal_list.append(num)
    return decimal_list


def BinarytoDecimal(binary_str):
    return int(binary_str, 2)


def DecimalListToASCII(decimal_list):
    ascii_characters = ''.join(chr(num) for num in decimal_list)
    return ascii_characters


main()
