def firstUniqChar(given_string):
        seen = {}
        for i in given_string:
            if i in seen:
                seen[i] += 1
            else:
                seen[i] = 1
        for i in range(len(given_string)):
            if seen[given_string[i]] == 1:
                return i
        return -1

print(firstUniqChar("aabbjf"))
