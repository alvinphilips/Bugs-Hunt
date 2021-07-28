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