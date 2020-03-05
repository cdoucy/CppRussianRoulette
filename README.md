# CppRussianRoulette

Russian Roulette in C++.

Each player has an randomized array of 6 pointers.
5 of these pointers are valid and the last one is set to `nullptr`.

Firing a shot with the revolver is represented by the dereferencing
of the current array of the table and an incrementation of the array.

The first player to segfault is dead ans the game is done.

USAGE:

```
$ make
$ ./russian_roulette [player number]
```