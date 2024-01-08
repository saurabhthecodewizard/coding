def sortColors(arr: list):
    red, white, blue = 0, 0, len(arr)-1
    
    while white <= blue:
        if arr[white] == 0:
            arr[white], arr[red] = arr[red], arr[white]
            white += 1
            red += 1
        elif arr[white] == 1:
            white += 1
        else:
            arr[white], arr[blue] = arr[blue], arr[white]
            blue -= 1
            
arr = [0, 2, 1, 2, 0, 1]
print("Before sorting:", arr)

sortColors(arr)

print("After sorting:", arr)