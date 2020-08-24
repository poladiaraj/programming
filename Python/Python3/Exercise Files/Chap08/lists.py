#!/usr/bin/env python3
# Copyright 2009-2017 BHG http://bw.org/

def main():
    game = [ 'Rock', 'Paper', 'Scissors', 'Lizard', 'Spock' ]
    print(game[1:5:2])
    i = game.index('Paper')
    print(i)
    # game.pop(2)
    # game.pop()
    # game.remove('Rock')

    # del game[0]
    # del game[1:4:3]

    print(', '.join(game))

    print_list(game)

def print_list(o):
    for i in o: print(i, end=' ', flush=True)
    print()

if __name__ == '__main__': main()
