from functools import cache
import sys
 
for i in sys.stdin:
    ab = i.split()
    A = int(ab[0])
    B = int(ab[1])
    p = int(ab[2])
    q = int(ab[3])
    P = p / 100
    Q = q / 100
    @cache
    def eke(flowers):
        if (flowers < B): return 0
        return max((eke(flowers - B) + 2) * P + (eke(flowers - B) + 1) * (1-P),
                    Q * (1 + eke(flowers - B + 1)) + (1 - Q) * (eke(flowers - B) + 1))
    print(eke(A))