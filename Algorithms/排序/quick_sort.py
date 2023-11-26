def quick_sort(arr,start=0,end=None):
    if end is None:
        end = len(arr)-1
    if end<=start:
        return(arr)
    i,j = start,end
    ref = arr[start]
    while j>i:
        if arr[j]>= ref:
            j = j - 1
        else:
            # 此处使用一行语句交换3个元素的值
            arr[i],arr[j],arr[i+1] = arr[j],arr[i+1],arr[i]
            i = i + 1
    quick_sort(arr,start=start,end = i-1)
    quick_sort(arr,start=i+1,end = end)
    return(arr)

print(quick_sort([1,1,3,3,2,2,6,6,6,5,5,7]))