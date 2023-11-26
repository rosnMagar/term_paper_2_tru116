import sys
import time

start_time = time.time()
iterations = [1e5, 1e7, 1e9]
argument = int(sys.argv[1]) - 1

add = 0

for i in range(0, int(iterations[argument])):
    add += 1

end_time = time.time()
print(f"Added Total {add}")
print(f"Total Time: {end_time - start_time}")
