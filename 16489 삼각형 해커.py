import math
a, b, c = map(float, input().split())
s = (a + b + c) / 2
S = math.sqrt(s * (s - a) * (s - b) * (s - c))
R = a * b * c / 4 / S
r = S / s
if a == b and b == c:
    d = 0.0
else:
    d = math.sqrt(R * R - 2 * r * R)
k = R + r
print("%0.15f" % S)
print("%0.15f" % R)
print("%0.15f" % r)
print("%0.15f" % d)
print("%0.15f" % k)
