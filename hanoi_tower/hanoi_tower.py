import time

count = 0

def hanoi_tower(n, fr, tmp, to):

    global count  # Make "count" a global variable

    if(n==1):
        count += 1 
        return count
    
    else:
        hanoi_tower(n-1, fr, to, tmp)
        count += 1
        hanoi_tower(n-1, tmp, fr, to)

start = time.time()
hanoi_tower(25, 'A', 'B', 'C')
end = time.time()

time = (end - start)

print("count = {0}, time = {1}" .format(count, time))
