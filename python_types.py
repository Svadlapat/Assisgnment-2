a = 5         # a is an integer
print(f"Initial value of a: {a}, type: {type(a)}")

a = "hello"   # Type can be changed at runtime (dynamic)
print(f"New value of a: {a}, type: {type(a)}")

try:
    # Python will not automatically convert a string to a number (strong typing)
    result = 10 + "5"
except TypeError as e:
    print(f"Error: {e}")
