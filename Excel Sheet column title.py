import string


def convertToTitle(n):
    result = ""
    while n > 0:
        result = result + string.ascii_uppercase[(n - 1) % 26]
        n = (n - 1) // 26
    return result[::-1]
