def binary_add(bin1, bin2):
    dec1 = 0
    dec2 = 0
    bin1_list = list(bin1)
    bin2_list = list(bin2)
    i = len(bin1_list)
    j = len(bin2_list)
    while i > 0:
        if bin1_list[i-1] == '1':
            dec1 += 2**i
        i -= 1
    while j > 0:
        if bin2_list[j-1] == '1':
            dec2 += 2**i
        j -= 1
    output = str(bin(dec1 + dec2))
    desired_result = output[2:]
    return desired_result

print(binary_add("1101", "100"))

