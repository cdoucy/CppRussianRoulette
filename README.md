# CppRussianRoulette

Russian Roulette in C++.

Each player has an array of 6 pointers.
5 of these pointers are valid and the last one is set to `nullptr`and has a random position.

Firing a shot with the revolver is represented by the dereferencing
of the current pointer of the array and an incrementation of the array.

The first player to segfault is dead ans the game is done.

USAGE:

```
$ make
$ ./russian_roulette [players number]
```
