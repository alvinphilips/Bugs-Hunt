#!/usr/bin/env python3

# A program that prints out a message based on the day of the week
#
# Expected output: Last day of the week!

# Print the message for the day
def print_message(day):
    messages = {
        'monday': 'Hello, world!',
        'tuesday': 'Today is Tuesday!',
        'wednesday': 'It is the middle of the week.',
        'thursday': 'Today is Donnerstag in German!',
        'friday': 'Last day of the week!',
        'saturday': 'Hooray for the weekend!',
        'sunday': 'Aw, the weekend is almost over.'
    }
    print(messages[day])

# Print the message for friday
def print_friday_message():
    print_message('Friday')

# Aah my favourite day of the week!
print_friday_message()
