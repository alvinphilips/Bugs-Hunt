#!/usr/bin/env python3

# A really simple function that takes in a list and adds baby shark to it
def add_songs(lst=[]):
    # Add baby shark and return the list
    lst.append("Baby Shark Du du du du du")
    return lst

if __name__ == "__main__":
    # Let's add a few songs
    print(add_songs(["Despacito", "Faded", "Party Rock Anthem"]))
    
    # Let's try just a number
    print(add_songs([42]))

    # Should just print baby shark
    print(add_songs())

    # Wait what?
    print(add_songs())

    # Oh no, please help
    print(add_songs())