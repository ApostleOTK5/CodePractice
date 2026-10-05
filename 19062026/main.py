arr1 = [[1,2,3],
        [4,5,6],
        [7,8,9]]

arr2 = [[10, 11, 12],
        [13, 14, 15],
        [16, 17, 18]]

result = [[0,0,0],
          [0,0,0],
          [0,0,0]]

for i in range(len(arr1)):
    for j in range(len(arr2[0])):
        for k in range(len(arr2)):
            result[i][j] += arr1[i][k] * arr2[k][j]
            
for row in result:
    print(row)