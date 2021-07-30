#!/usr/bin/env python3

# A program that reads a file and gives everyone cake!
#
# Expected output:
# John Wick gets a slice of cake
# Chutki gets a slice of cake
# Voldemort gets a slice of cake
# Wonder Woman gets a slice of cake
# Darth Vader gets a slice of cake
# Captain Jack Sparrow gets a slice of cake

# Read list of names from file
with open('friendslist', 'r') as names:
    myfriends = []

    # Add all of my friends to a list
    for name in names:
        myfriends.append(name.strip()) # Strip newline '/n' character

    # Let them eat cake (just like Marie Antionette)
    for i in range(1, len(myfriends)):
        print("{} gets a slice of cake".format(myfriends[i]))

        # Someone doesn't get cake :(