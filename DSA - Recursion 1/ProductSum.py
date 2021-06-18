def ProductSum(Array , level = 1 ):
    if len(Array) == 0 :
        return 0 
    if(isinstance(Array[0],int)):
        return level * Array[0] + ProductSum(Array[1 : len(Array)],level)
    else:
        level = level + 1 
        val1 = ProductSum(Array[0],level)
        level = level - 1 
        return level * val1 +  ProductSum(Array[1 : len(Array)],level)




A = [5,2,[7,-1],3,[6,[-13,8],4]]
print(ProductSum(A)) 

