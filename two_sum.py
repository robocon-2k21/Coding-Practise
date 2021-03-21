def two_sum(given_array, target_sum):
    given_array.sort()
    i = 0
    j = len(given_array) - 1
    while i <= j:
        if given_array[i] + given_array[j] == target_sum:
            return 1
        elif given_array[i] + given_array[j] < target_sum:
            i += 1
        else:
            j -= 1
    return 0


arr1 = [2, 7, 11, 15]
print(two_sum_using_binary(arr1, 9))
