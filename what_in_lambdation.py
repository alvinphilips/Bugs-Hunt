#!/usr/bin/env python3

# Return a list of functions that multiply x with 0-4
def create_multipliers():
    return [lambda x : i * x for i in range(5)]

# Print the multiples of 2 from 0-4
for multiplier in create_multipliers():
    print(multiplier(2))