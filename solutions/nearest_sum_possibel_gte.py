def unique_combination(l, sum, K, local, A):
 
    if (sum >= K):
        print(local)
        return
 
    for i in range(l, len(A), 1):
 
      
        # if (sum + A[i] > K):
        #     continue
 
       
        if (i > l and
                A[i] == A[i - 1]):
            continue
 
        local.append(A[i])
 
       
        unique_combination(i + 1, sum + A[i],
                           K, local, A)
 
       
        local.remove(local[len(local) - 1])
 

 
def Combination(A, K): 
    A.sort(reverse=False)
    local = []
    unique_combination(0, 0, K, local, A)
 

if __name__ == '__main__':
    A = [10, 1, 2, 7, 6, 1, 5]
    K = 4
    Combination(A, K)
 

    


